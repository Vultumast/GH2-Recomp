#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823B1240"))) PPC_WEAK_FUNC(sub_823B1240);
PPC_FUNC_IMPL(__imp__sub_823B1240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mflr r31
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r29,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r29.u64);
	// std r28,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r28.u64);
	// stwu r1,-5360(r1)
	ea = -5360 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,2624
	ctx.r5.s64 = 2624;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r3,r1,2704
	ctx.r3.s64 = ctx.r1.s64 + 2704;
	// bl 0x826e4bec
	__imp__RtlCaptureContext(ctx, base);
	// lis r4,-32197
	ctx.r4.s64 = -2110062592;
	// addi r4,r4,4772
	ctx.r4.s64 = ctx.r4.s64 + 4772;
	// stw r4,2712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2712, ctx.r4.u32);
	// bl 0x8239b660
	sub_8239B660(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lis r4,-32197
	ctx.r4.s64 = -2110062592;
	// addi r4,r4,4772
	ctx.r4.s64 = ctx.r4.s64 + 4772;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x826e4bcc
	__imp__RtlUnwind(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,2624
	ctx.r5.s64 = 2624;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239b660
	sub_8239B660(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r5,r4,0,31,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r5,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// mtlr r31
	// ld r28,5328(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 5328);
	// ld r29,5336(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 5336);
	// ld r30,5344(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 5344);
	// ld r31,5352(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 5352);
	// addi r1,r1,5360
	ctx.r1.s64 = ctx.r1.s64 + 5360;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B12E4"))) PPC_WEAK_FUNC(sub_823B12E4);
PPC_FUNC_IMPL(__imp__sub_823B12E4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r17{};
	PPCRegister r27{};
	// lwz r17,4880(r27)
	r17.u64 = PPC_LOAD_U32(r27.u32 + 4880);
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B12EC"))) PPC_WEAK_FUNC(sub_823B12EC);
PPC_FUNC_IMPL(__imp__sub_823B12EC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// mflr r31
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r10,8(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8, ctx.r10.u32);
	// bl 0x823a3238
	sub_823A3238(ctx, base);
	// mtlr r31
	// ld r31,80(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1310"))) PPC_WEAK_FUNC(sub_823B1310);
PPC_FUNC_IMPL(__imp__sub_823B1310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r31.u64);
	// mflr r31
	// stwu r1,-80(r1)
	ea = -80 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,-88(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + -88);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x823a3140
	sub_823A3140(ctx, base);
	// mtlr r31
	// ld r31,8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 8);
	// addi r1,r1,80
	ctx.r1.s64 = ctx.r1.s64 + 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1338"))) PPC_WEAK_FUNC(sub_823B1338);
PPC_FUNC_IMPL(__imp__sub_823B1338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r11,0
	r11.s64 = 0;
	// stw r11,14860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14860, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1348"))) PPC_WEAK_FUNC(sub_823B1348);
PPC_FUNC_IMPL(__imp__sub_823B1348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,17880(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 17880);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1354"))) PPC_WEAK_FUNC(sub_823B1354);
PPC_FUNC_IMPL(__imp__sub_823B1354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B1358"))) PPC_WEAK_FUNC(sub_823B1358);
PPC_FUNC_IMPL(__imp__sub_823B1358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r19,19276(r14)
	r19.u64 = PPC_LOAD_U32(r14.u32 + 19276);
	// lwz r16,-14256(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14256);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r29,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r29.u32);
	// li r26,0
	r26.s64 = 0;
	// mr r28,r26
	r28.u64 = r26.u64;
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// mr r27,r26
	r27.u64 = r26.u64;
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(r29.s32, 11, xer);
	// bgt cr6,0x823b143c
	if (cr6.gt) goto loc_823B143C;
	// beq cr6,0x823b13b8
	if (cr6.eq) goto loc_823B13B8;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// beq cr6,0x823b13d0
	if (cr6.eq) goto loc_823B13D0;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// beq cr6,0x823b13b8
	if (cr6.eq) goto loc_823B13B8;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(r29.s32, 6, xer);
	// beq cr6,0x823b1480
	if (cr6.eq) goto loc_823B1480;
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(r29.s32, 8, xer);
	// bne cr6,0x823b1454
	if (!cr6.eq) goto loc_823B1454;
loc_823B13B8:
	// bl 0x823a29a8
	sub_823A29A8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// bne 0x823b13e0
	if (!cr0.eq) goto loc_823B13E0;
loc_823B13C8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823b15fc
	goto loc_823B15FC;
loc_823B13D0:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,17872
	r30.s64 = r11.s64 + 17872;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x823b14b8
	goto loc_823B14B8;
loc_823B13E0:
	// lwz r10,92(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 92);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lis r9,-32139
	ctx.r9.s64 = -2106261504;
	// lwz r9,-22108(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22108);
loc_823B13F0:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpw cr6,r8,r29
	cr6.compare<int32_t>(ctx.r8.s32, r29.s32, xer);
	// beq cr6,0x823b1410
	if (cr6.eq) goto loc_823B1410;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// mulli r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 * 12;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x823b13f0
	if (cr6.lt) goto loc_823B13F0;
loc_823B1410:
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x823b142c
	if (!cr6.lt) goto loc_823B142C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, r29.s32, xer);
	// beq cr6,0x823b1430
	if (cr6.eq) goto loc_823B1430;
loc_823B142C:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_823B1430:
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x823b14c0
	goto loc_823B14C0;
loc_823B143C:
	// cmpwi cr6,r29,15
	cr6.compare<int32_t>(r29.s32, 15, xer);
	// beq cr6,0x823b14a8
	if (cr6.eq) goto loc_823B14A8;
	// cmpwi cr6,r29,21
	cr6.compare<int32_t>(r29.s32, 21, xer);
	// beq cr6,0x823b1494
	if (cr6.eq) goto loc_823B1494;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(r29.s32, 22, xer);
	// beq cr6,0x823b1480
	if (cr6.eq) goto loc_823B1480;
loc_823B1454:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x823a3f38
	sub_823A3F38(ctx, base);
	// b 0x823b13c8
	goto loc_823B13C8;
loc_823B1480:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,17872
	r11.s64 = r11.s64 + 17872;
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x823b14b8
	goto loc_823B14B8;
loc_823B1494:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,17872
	r11.s64 = r11.s64 + 17872;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x823b14b8
	goto loc_823B14B8;
loc_823B14A8:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,17872
	r11.s64 = r11.s64 + 17872;
	// addi r30,r11,12
	r30.s64 = r11.s64 + 12;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
loc_823B14B8:
	// li r28,1
	r28.s64 = 1;
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
loc_823B14C0:
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x823b15f8
	if (cr6.eq) goto loc_823B15F8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b14dc
	if (!cr6.eq) goto loc_823B14DC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8239f2b0
	sub_8239F2B0(ctx, base);
loc_823B14DC:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x823b14ec
	if (cr6.eq) goto loc_823B14EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823a4260
	sub_823A4260(ctx, base);
loc_823B14EC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(r29.s32, 8, xer);
	// beq cr6,0x823b150c
	if (cr6.eq) goto loc_823B150C;
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(r29.s32, 11, xer);
	// beq cr6,0x823b150c
	if (cr6.eq) goto loc_823B150C;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// bne cr6,0x823b1530
	if (!cr6.eq) goto loc_823B1530;
loc_823B150C:
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(r29.s32, 8, xer);
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 96);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r26,96(r27)
	PPC_STORE_U32(r27.u32 + 96, r26.u32);
	// bne cr6,0x823b1580
	if (!cr6.eq) goto loc_823B1580;
	// li r11,140
	r11.s64 = 140;
	// lwz r10,100(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 100);
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stw r11,100(r27)
	PPC_STORE_U32(r27.u32 + 100, r11.u32);
loc_823B1530:
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(r29.s32, 8, xer);
	// bne cr6,0x823b1580
	if (!cr6.eq) goto loc_823B1580;
	// lis r8,-32139
	ctx.r8.s64 = -2106261504;
	// lwz r10,-22120(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22120);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lis r7,-32139
	ctx.r7.s64 = -2106261504;
loc_823B154C:
	// lwz r9,-22116(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + -22116);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x823b1584
	if (!cr6.lt) goto loc_823B1584;
	// lwz r9,92(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 92);
	// mulli r10,r11,12
	ctx.r10.s64 = r11.s64 * 12;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r26,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r26.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lwz r10,-22120(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22120);
	// b 0x823b154c
	goto loc_823B154C;
loc_823B1580:
	// stw r26,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r26.u32);
loc_823B1584:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x823b1624
	sub_823B1624(ctx, base);
	// lwz r30,180(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(r30.s32, 8, xer);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bne cr6,0x823b15b8
	if (!cr6.eq) goto loc_823B15B8;
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r4,100(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 100);
	// li r3,8
	ctx.r3.s64 = 8;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823b15c8
	goto loc_823B15C8;
loc_823B15B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_823B15C8:
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(r30.s32, 8, xer);
	// beq cr6,0x823b15e0
	if (cr6.eq) goto loc_823B15E0;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(r30.s32, 11, xer);
	// beq cr6,0x823b15e0
	if (cr6.eq) goto loc_823B15E0;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// bne cr6,0x823b15f8
	if (!cr6.eq) goto loc_823B15F8;
loc_823B15E0:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(r30.s32, 8, xer);
	// stw r11,96(r29)
	PPC_STORE_U32(r29.u32 + 96, r11.u32);
	// bne cr6,0x823b15f8
	if (!cr6.eq) goto loc_823B15F8;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r11,100(r29)
	PPC_STORE_U32(r29.u32 + 100, r11.u32);
loc_823B15F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B15FC:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823B1360"))) PPC_WEAK_FUNC(sub_823B1360);
PPC_FUNC_IMPL(__imp__sub_823B1360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r29,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r29.u32);
	// li r26,0
	r26.s64 = 0;
	// mr r28,r26
	r28.u64 = r26.u64;
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// mr r27,r26
	r27.u64 = r26.u64;
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(r29.s32, 11, xer);
	// bgt cr6,0x823b143c
	if (cr6.gt) goto loc_823B143C;
	// beq cr6,0x823b13b8
	if (cr6.eq) goto loc_823B13B8;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// beq cr6,0x823b13d0
	if (cr6.eq) goto loc_823B13D0;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// beq cr6,0x823b13b8
	if (cr6.eq) goto loc_823B13B8;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(r29.s32, 6, xer);
	// beq cr6,0x823b1480
	if (cr6.eq) goto loc_823B1480;
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(r29.s32, 8, xer);
	// bne cr6,0x823b1454
	if (!cr6.eq) goto loc_823B1454;
loc_823B13B8:
	// bl 0x823a29a8
	sub_823A29A8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// bne 0x823b13e0
	if (!cr0.eq) goto loc_823B13E0;
loc_823B13C8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823b15fc
	goto loc_823B15FC;
loc_823B13D0:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,17872
	r30.s64 = r11.s64 + 17872;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x823b14b8
	goto loc_823B14B8;
loc_823B13E0:
	// lwz r10,92(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 92);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lis r9,-32139
	ctx.r9.s64 = -2106261504;
	// lwz r9,-22108(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22108);
loc_823B13F0:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpw cr6,r8,r29
	cr6.compare<int32_t>(ctx.r8.s32, r29.s32, xer);
	// beq cr6,0x823b1410
	if (cr6.eq) goto loc_823B1410;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// mulli r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 * 12;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x823b13f0
	if (cr6.lt) goto loc_823B13F0;
loc_823B1410:
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x823b142c
	if (!cr6.lt) goto loc_823B142C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, r29.s32, xer);
	// beq cr6,0x823b1430
	if (cr6.eq) goto loc_823B1430;
loc_823B142C:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_823B1430:
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x823b14c0
	goto loc_823B14C0;
loc_823B143C:
	// cmpwi cr6,r29,15
	cr6.compare<int32_t>(r29.s32, 15, xer);
	// beq cr6,0x823b14a8
	if (cr6.eq) goto loc_823B14A8;
	// cmpwi cr6,r29,21
	cr6.compare<int32_t>(r29.s32, 21, xer);
	// beq cr6,0x823b1494
	if (cr6.eq) goto loc_823B1494;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(r29.s32, 22, xer);
	// beq cr6,0x823b1480
	if (cr6.eq) goto loc_823B1480;
loc_823B1454:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x823a3f38
	sub_823A3F38(ctx, base);
	// b 0x823b13c8
	goto loc_823B13C8;
loc_823B1480:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,17872
	r11.s64 = r11.s64 + 17872;
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x823b14b8
	goto loc_823B14B8;
loc_823B1494:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,17872
	r11.s64 = r11.s64 + 17872;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x823b14b8
	goto loc_823B14B8;
loc_823B14A8:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,17872
	r11.s64 = r11.s64 + 17872;
	// addi r30,r11,12
	r30.s64 = r11.s64 + 12;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
loc_823B14B8:
	// li r28,1
	r28.s64 = 1;
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
loc_823B14C0:
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x823b15f8
	if (cr6.eq) goto loc_823B15F8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b14dc
	if (!cr6.eq) goto loc_823B14DC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8239f2b0
	sub_8239F2B0(ctx, base);
loc_823B14DC:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x823b14ec
	if (cr6.eq) goto loc_823B14EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823a4260
	sub_823A4260(ctx, base);
loc_823B14EC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(r29.s32, 8, xer);
	// beq cr6,0x823b150c
	if (cr6.eq) goto loc_823B150C;
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(r29.s32, 11, xer);
	// beq cr6,0x823b150c
	if (cr6.eq) goto loc_823B150C;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// bne cr6,0x823b1530
	if (!cr6.eq) goto loc_823B1530;
loc_823B150C:
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(r29.s32, 8, xer);
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 96);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r26,96(r27)
	PPC_STORE_U32(r27.u32 + 96, r26.u32);
	// bne cr6,0x823b1580
	if (!cr6.eq) goto loc_823B1580;
	// li r11,140
	r11.s64 = 140;
	// lwz r10,100(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 100);
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stw r11,100(r27)
	PPC_STORE_U32(r27.u32 + 100, r11.u32);
loc_823B1530:
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(r29.s32, 8, xer);
	// bne cr6,0x823b1580
	if (!cr6.eq) goto loc_823B1580;
	// lis r8,-32139
	ctx.r8.s64 = -2106261504;
	// lwz r10,-22120(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22120);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lis r7,-32139
	ctx.r7.s64 = -2106261504;
loc_823B154C:
	// lwz r9,-22116(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + -22116);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x823b1584
	if (!cr6.lt) goto loc_823B1584;
	// lwz r9,92(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 92);
	// mulli r10,r11,12
	ctx.r10.s64 = r11.s64 * 12;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r26,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r26.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lwz r10,-22120(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22120);
	// b 0x823b154c
	goto loc_823B154C;
loc_823B1580:
	// stw r26,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r26.u32);
loc_823B1584:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x823b1624
	sub_823B1624(ctx, base);
	// lwz r30,180(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(r30.s32, 8, xer);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bne cr6,0x823b15b8
	if (!cr6.eq) goto loc_823B15B8;
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r4,100(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 100);
	// li r3,8
	ctx.r3.s64 = 8;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823b15c8
	goto loc_823B15C8;
loc_823B15B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_823B15C8:
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(r30.s32, 8, xer);
	// beq cr6,0x823b15e0
	if (cr6.eq) goto loc_823B15E0;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(r30.s32, 11, xer);
	// beq cr6,0x823b15e0
	if (cr6.eq) goto loc_823B15E0;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// bne cr6,0x823b15f8
	if (!cr6.eq) goto loc_823B15F8;
loc_823B15E0:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(r30.s32, 8, xer);
	// stw r11,96(r29)
	PPC_STORE_U32(r29.u32 + 96, r11.u32);
	// bne cr6,0x823b15f8
	if (!cr6.eq) goto loc_823B15F8;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r11,100(r29)
	PPC_STORE_U32(r29.u32 + 100, r11.u32);
loc_823B15F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B15FC:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823B1604"))) PPC_WEAK_FUNC(sub_823B1604);
PPC_FUNC_IMPL(__imp__sub_823B1604) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,84(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// b 0x823b163c
	goto loc_823B163C;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_823B163C:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x823b164c
	if (cr6.eq) goto loc_823B164C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823a4100
	sub_823A4100(ctx, base);
loc_823B164C:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1624"))) PPC_WEAK_FUNC(sub_823B1624);
PPC_FUNC_IMPL(__imp__sub_823B1624) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x823b164c
	if (cr6.eq) goto loc_823B164C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823a4100
	sub_823A4100(ctx, base);
loc_823B164C:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1664"))) PPC_WEAK_FUNC(sub_823B1664);
PPC_FUNC_IMPL(__imp__sub_823B1664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B1668"))) PPC_WEAK_FUNC(sub_823B1668);
PPC_FUNC_IMPL(__imp__sub_823B1668) {
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
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b1784
	if (!cr0.eq) goto loc_823B1784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r29,r11,14880
	r29.s64 = r11.s64 + 14880;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r28,r11,-22548
	r28.s64 = r11.s64 + -22548;
	// beq cr6,0x823b16e4
	if (cr6.eq) goto loc_823B16E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x823b16e4
	if (cr6.eq) goto loc_823B16E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// clrlwi r11,r3,27
	r11.u64 = ctx.r3.u32 & 0x1F;
	// lwzx r10,r30,r29
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r29.u32);
	// mulli r11,r11,44
	r11.s64 = r11.s64 * 44;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x823b16e8
	goto loc_823B16E8;
loc_823B16E4:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823B16E8:
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b1750
	if (!cr0.eq) goto loc_823B1750;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823b1740
	if (cr6.eq) goto loc_823B1740;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x823b1740
	if (cr6.eq) goto loc_823B1740;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// clrlwi r11,r3,27
	r11.u64 = ctx.r3.u32 & 0x1F;
	// lwzx r10,r30,r29
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r29.u32);
	// mulli r11,r11,44
	r11.s64 = r11.s64 * 44;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x823b1744
	goto loc_823B1744;
loc_823B1740:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823B1744:
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b1784
	if (cr0.eq) goto loc_823B1784;
loc_823B1750:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x823a3f38
	sub_823A3F38(ctx, base);
loc_823B1778:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823B177C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
loc_823B1784:
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x823b1778
	if (cr6.eq) goto loc_823B1778;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823b17a8
	if (!cr0.eq) goto loc_823B17A8;
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b1778
	if (cr0.eq) goto loc_823B1778;
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b1778
	if (!cr0.eq) goto loc_823B1778;
loc_823B17A8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b17bc
	if (!cr6.eq) goto loc_823B17BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823b18b0
	sub_823B18B0(ctx, base);
loc_823B17BC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823b17e0
	if (!cr6.eq) goto loc_823B17E0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x823b1778
	if (!cr6.eq) goto loc_823B1778;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_823B17E0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x823b1818
	if (cr0.eq) goto loc_823B1818;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r27
	ctx.r10.s64 = r27.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x823b181c
	if (cr6.eq) goto loc_823B181C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x823b1778
	goto loc_823B1778;
loc_823B1818:
	// stb r27,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r27.u8);
loc_823B181C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// clrlwi r3,r27,24
	ctx.r3.u64 = r27.u32 & 0xFF;
	// rlwimi r11,r10,0,31,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1) | (r11.u64 & 0xFFFFFFFFFFFFFFFE);
	// rlwimi r11,r10,0,27,27
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x10) | (r11.u64 & 0xFFFFFFFFFFFFFFEF);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x823b177c
	goto loc_823B177C;
}

__attribute__((alias("__imp__sub_823B1844"))) PPC_WEAK_FUNC(sub_823B1844);
PPC_FUNC_IMPL(__imp__sub_823B1844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B1848"))) PPC_WEAK_FUNC(sub_823B1848);
PPC_FUNC_IMPL(__imp__sub_823B1848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823b1874
	if (cr6.eq) goto loc_823B1874;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823b1874
	if (cr6.eq) goto loc_823B1874;
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823b187c
	if (!cr0.eq) goto loc_823B187C;
	// beq cr6,0x823b1874
	if (cr6.eq) goto loc_823B1874;
	// li r11,0
	r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
loc_823B1874:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823B187C:
	// beq cr6,0x823b1888
	if (cr6.eq) goto loc_823B1888;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
loc_823B1888:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1890"))) PPC_WEAK_FUNC(sub_823B1890);
PPC_FUNC_IMPL(__imp__sub_823B1890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32139
	r11.s64 = -2106261504;
	// rlwinm r10,r3,1,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1FE;
	// lwz r11,-21688(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -21688);
	// lwz r11,200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// lhzx r11,r10,r11
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + r11.u32);
	// rlwinm r3,r11,0,0,16
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B18AC"))) PPC_WEAK_FUNC(sub_823B18AC);
PPC_FUNC_IMPL(__imp__sub_823B18AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B18B0"))) PPC_WEAK_FUNC(sub_823B18B0);
PPC_FUNC_IMPL(__imp__sub_823B18B0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// lwz r10,17128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 17128);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,17128(r11)
	PPC_STORE_U32(r11.u32 + 17128, ctx.r10.u32);
	// bl 0x8239d488
	sub_8239D488(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// beq 0x823b18fc
	if (cr0.eq) goto loc_823B18FC;
	// li r11,4096
	r11.s64 = 4096;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// b 0x823b1914
	goto loc_823B1914;
loc_823B18FC:
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
loc_823B1914:
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_823B193C"))) PPC_WEAK_FUNC(sub_823B193C);
PPC_FUNC_IMPL(__imp__sub_823B193C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B1940"))) PPC_WEAK_FUNC(sub_823B1940);
PPC_FUNC_IMPL(__imp__sub_823B1940) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b196c
	if (!cr6.eq) goto loc_823B196C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823b196c
	if (cr6.eq) goto loc_823B196C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b1a50
	if (cr6.eq) goto loc_823B1A50;
	// b 0x823b1a4c
	goto loc_823B1A4C;
loc_823B196C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b197c
	if (cr6.eq) goto loc_823B197C;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_823B197C:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// ble cr6,0x823b19bc
	if (!cr6.gt) goto loc_823B19BC;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x823a3f38
	sub_823A3F38(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x823b1a54
	goto loc_823B1A54;
loc_823B19BC:
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// ble cr6,0x823b19fc
	if (!cr6.gt) goto loc_823B19FC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b19e4
	if (cr6.eq) goto loc_823B19E4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823b19e4
	if (cr6.eq) goto loc_823B19E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
loc_823B19E4:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,42
	r11.s64 = 42;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x823b1a54
	goto loc_823B1A54;
loc_823B19FC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b1a40
	if (cr6.eq) goto loc_823B1A40;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x823b1a3c
	if (!cr6.eq) goto loc_823B1A3C;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,34
	ctx.r10.s64 = 34;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x823a3f38
	sub_823A3F38(ctx, base);
	// li r3,34
	ctx.r3.s64 = 34;
	// b 0x823b1a54
	goto loc_823B1A54;
loc_823B1A3C:
	// stb r6,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r6.u8);
loc_823B1A40:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b1a50
	if (cr6.eq) goto loc_823B1A50;
	// li r11,1
	r11.s64 = 1;
loc_823B1A4C:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_823B1A50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B1A54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1A64"))) PPC_WEAK_FUNC(sub_823B1A64);
PPC_FUNC_IMPL(__imp__sub_823B1A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B1A68"))) PPC_WEAK_FUNC(sub_823B1A68);
PPC_FUNC_IMPL(__imp__sub_823B1A68) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x823b1940
	sub_823B1940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B1A70"))) PPC_WEAK_FUNC(sub_823B1A70);
PPC_FUNC_IMPL(__imp__sub_823B1A70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-16377
	r11.s64 = -1073283072;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stfd f31,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, f31.u64);
	// ori r29,r11,65279
	r29.u64 = r11.u64 | 65279;
	// li r3,248
	ctx.r3.s64 = 248;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823b2710
	sub_823B2710(ctx, base);
	// lhz r11,160(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 160);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,17,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r11,32752
	cr6.compare<uint32_t>(r11.u32, 32752, xer);
	// bne cr6,0x823b1b30
	if (!cr6.eq) goto loc_823B1B30;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823abd50
	sub_823ABD50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x823b1afc
	if (!cr0.gt) goto loc_823B1AFC;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// ble cr6,0x823b1c30
	if (!cr6.gt) goto loc_823B1C30;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x823b1afc
	if (!cr6.eq) goto loc_823B1AFC;
	// extsw r11,r31
	r11.s64 = r31.s32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f2,f0
	ctx.f2.f64 = double(f0.s64);
	// bl 0x823b24d0
	sub_823B24D0(ctx, base);
	// b 0x823b1c40
	goto loc_823B1C40;
loc_823B1AFC:
	// extsw r10,r31
	ctx.r10.s64 = r31.s32;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r3,8
	ctx.r3.s64 = 8;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,-31360(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31360);
	// fadd f3,f31,f0
	ctx.f3.f64 = f31.f64 + f0.f64;
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_823B1B18:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,25
	ctx.r4.s64 = 25;
	// fcfid f2,f0
	ctx.f2.f64 = double(f0.s64);
	// bl 0x823b2628
	sub_823B2628(ctx, base);
	// b 0x823b1c40
	goto loc_823B1C40;
loc_823B1B30:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f30,-31368(r11)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// beq cr6,0x823b1c30
	if (cr6.eq) goto loc_823B1C30;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823abdd8
	sub_823ABDD8(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x823b1b6c
	if (!cr6.lt) goto loc_823B1B6C;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// subf r10,r31,r11
	ctx.r10.s64 = r11.s64 - r31.s64;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x823b1be8
	if (cr6.lt) goto loc_823B1BE8;
	// b 0x823b1b84
	goto loc_823B1B84;
loc_823B1B6C:
	// lis r11,32767
	r11.s64 = 2147418112;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// subf r10,r31,r11
	ctx.r10.s64 = r11.s64 - r31.s64;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x823b1b90
	if (cr6.gt) goto loc_823B1B90;
loc_823B1B84:
	// add r4,r11,r31
	ctx.r4.u64 = r11.u64 + r31.u64;
	// cmpwi cr6,r4,2560
	cr6.compare<int32_t>(ctx.r4.s32, 2560, xer);
	// ble cr6,0x823b1bb8
	if (!cr6.gt) goto loc_823B1BB8;
loc_823B1B90:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lfd f1,-22592(r11)
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -22592);
	// bl 0x823ae030
	sub_823AE030(ctx, base);
	// extsw r11,r31
	r11.s64 = r31.s32;
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
	// li r3,17
	ctx.r3.s64 = 17;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x823b1b18
	goto loc_823B1B18;
loc_823B1BB8:
	// cmpwi cr6,r4,1024
	cr6.compare<int32_t>(ctx.r4.s32, 1024, xer);
	// ble cr6,0x823b1be0
	if (!cr6.gt) goto loc_823B1BE0;
	// addi r4,r4,-1536
	ctx.r4.s64 = ctx.r4.s64 + -1536;
	// bl 0x823abcd8
	sub_823ABCD8(ctx, base);
	// extsw r11,r31
	r11.s64 = r31.s32;
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
	// li r3,17
	ctx.r3.s64 = 17;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x823b1b18
	goto loc_823B1B18;
loc_823B1BE0:
	// cmpwi cr6,r4,-2557
	cr6.compare<int32_t>(ctx.r4.s32, -2557, xer);
	// bge cr6,0x823b1c00
	if (!cr6.lt) goto loc_823B1C00;
loc_823B1BE8:
	// extsw r11,r31
	r11.s64 = r31.s32;
	// fmul f3,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64 * f30.f64;
	// li r3,18
	ctx.r3.s64 = 18;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x823b1b18
	goto loc_823B1B18;
loc_823B1C00:
	// cmpwi cr6,r4,-1021
	cr6.compare<int32_t>(ctx.r4.s32, -1021, xer);
	// bge cr6,0x823b1c28
	if (!cr6.lt) goto loc_823B1C28;
	// addi r4,r4,1536
	ctx.r4.s64 = ctx.r4.s64 + 1536;
	// bl 0x823abcd8
	sub_823ABCD8(ctx, base);
	// extsw r11,r31
	r11.s64 = r31.s32;
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
	// li r3,18
	ctx.r3.s64 = 18;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x823b1b18
	goto loc_823B1B18;
loc_823B1C28:
	// bl 0x823abcd8
	sub_823ABCD8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
loc_823B1C30:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823b2710
	sub_823B2710(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_823B1C40:
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

__attribute__((alias("__imp__sub_823B1C50"))) PPC_WEAK_FUNC(sub_823B1C50);
PPC_FUNC_IMPL(__imp__sub_823B1C50) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// rlwinm. r10,r5,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// beq 0x823b1cb0
	if (cr0.eq) goto loc_823B1CB0;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lis r27,-16384
	r27.s64 = -1073741824;
	// ori r27,r27,143
	r27.u64 = r27.u64 | 143;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// b 0x823b1cb4
	goto loc_823B1CB4;
loc_823B1CB0:
	// lwz r27,80(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823B1CB4:
	// rlwinm. r11,r5,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b1cd4
	if (cr0.eq) goto loc_823B1CD4;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lis r27,-16384
	r27.s64 = -1073741824;
	// ori r27,r27,147
	r27.u64 = r27.u64 | 147;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_823B1CD4:
	// clrlwi. r11,r5,31
	r11.u64 = ctx.r5.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b1cf4
	if (cr0.eq) goto loc_823B1CF4;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lis r27,-16384
	r27.s64 = -1073741824;
	// ori r27,r27,145
	r27.u64 = r27.u64 | 145;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_823B1CF4:
	// rlwinm. r11,r5,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b1d14
	if (cr0.eq) goto loc_823B1D14;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lis r27,-16384
	r27.s64 = -1073741824;
	// ori r27,r27,142
	r27.u64 = r27.u64 | 142;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_823B1D14:
	// rlwinm. r11,r5,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b1d34
	if (cr0.eq) goto loc_823B1D34;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lis r27,-16384
	r27.s64 = -1073741824;
	// ori r27,r27,144
	r27.u64 = r27.u64 | 144;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_823B1D34:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwimi r9,r10,20,4,4
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x8000000) | (ctx.r9.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwimi r9,r10,24,3,3
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0x10000000) | (ctx.r9.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwimi r9,r10,23,2,2
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 23) & 0x20000000) | (ctx.r9.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwimi r9,r10,25,1,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0x40000000) | (ctx.r9.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwimi r9,r10,28,0,0
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// bl 0x823b2740
	sub_823B2740(ctx, base);
	// rlwinm. r11,r3,0,2,2
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b1dc8
	if (cr0.eq) goto loc_823B1DC8;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
loc_823B1DC8:
	// rlwinm. r11,r3,0,5,5
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b1de0
	if (cr0.eq) goto loc_823B1DE0;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
loc_823B1DE0:
	// rlwinm. r11,r3,0,3,3
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b1df8
	if (cr0.eq) goto loc_823B1DF8;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
loc_823B1DF8:
	// rlwinm. r11,r3,0,4,4
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b1e10
	if (cr0.eq) goto loc_823B1E10;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
loc_823B1E10:
	// rlwinm. r11,r3,0,6,6
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b1e28
	if (cr0.eq) goto loc_823B1E28;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
loc_823B1E28:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,1
	r30.s64 = 1;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x823b1e7c
	if (cr6.lt) goto loc_823B1E7C;
	// beq cr6,0x823b1e6c
	if (cr6.eq) goto loc_823B1E6C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x823b1e5c
	if (cr6.lt) goto loc_823B1E5C;
	// bne cr6,0x823b1e8c
	if (!cr6.eq) goto loc_823B1E8C;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwimi r10,r30,30,0,1
	ctx.r10.u64 = (__builtin_rotateleft32(r30.u32, 30) & 0xC0000000) | (ctx.r10.u64 & 0xFFFFFFFF3FFFFFFF);
	// b 0x823b1e88
	goto loc_823B1E88;
loc_823B1E5C:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwimi r10,r30,31,0,1
	ctx.r10.u64 = (__builtin_rotateleft32(r30.u32, 31) & 0xC0000000) | (ctx.r10.u64 & 0xFFFFFFFF3FFFFFFF);
	// b 0x823b1e88
	goto loc_823B1E88;
loc_823B1E6C:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// oris r10,r10,49152
	ctx.r10.u64 = ctx.r10.u64 | 3221225472;
	// b 0x823b1e88
	goto loc_823B1E88;
loc_823B1E7C:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
loc_823B1E88:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_823B1E8C:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwimi r10,r30,27,2,4
	ctx.r10.u64 = (__builtin_rotateleft32(r30.u32, 27) & 0x38000000) | (ctx.r10.u64 & 0xFFFFFFFFC7FFFFFF);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwimi r10,r28,15,5,16
	ctx.r10.u64 = (__builtin_rotateleft32(r28.u32, 15) & 0x7FF8000) | (ctx.r10.u64 & 0xFFFFFFFFF8007FFF);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// beq cr6,0x823b1f10
	if (cr6.eq) goto loc_823B1F10;
	// rlwinm r10,r10,0,5,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF87FFFFFF;
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r10.u32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// rlwinm r10,r10,0,5,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF87FFFFFF;
	// stw r10,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r10.u32);
	// lfs f0,0(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stfs f0,80(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 80, temp.u32);
	// b 0x823b1f50
	goto loc_823B1F50;
loc_823B1F10:
	// rlwimi r10,r30,27,1,4
	ctx.r10.u64 = (__builtin_rotateleft32(r30.u32, 27) & 0x78000000) | (ctx.r10.u64 & 0xFFFFFFFF87FFFFFF);
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// lfd f0,0(r29)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stfd f0,16(r11)
	PPC_STORE_U64(r11.u32 + 16, f0.u64);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r10.u32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// rlwimi r10,r30,27,1,4
	ctx.r10.u64 = (__builtin_rotateleft32(r30.u32, 27) & 0x78000000) | (ctx.r10.u64 & 0xFFFFFFFF87FFFFFF);
	// stw r10,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r10.u32);
	// lfd f0,0(r26)
	f0.u64 = PPC_LOAD_U64(r26.u32 + 0);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stfd f0,80(r11)
	PPC_STORE_U64(r11.u32 + 80, f0.u64);
loc_823B1F50:
	// bl 0x823b4cc0
	sub_823B4CC0(ctx, base);
	// addi r6,r1,180
	ctx.r6.s64 = ctx.r1.s64 + 180;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823b6758
	sub_823B6758(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,0,4,4
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b1f84
	if (cr0.eq) goto loc_823B1F84;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_823B1F84:
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,0,3,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b1f9c
	if (cr0.eq) goto loc_823B1F9C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_823B1F9C:
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,0,2,2
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b1fb4
	if (cr0.eq) goto loc_823B1FB4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_823B1FB4:
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b1fcc
	if (cr0.eq) goto loc_823B1FCC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_823B1FCC:
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b1fe4
	if (cr0.eq) goto loc_823B1FE4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_823B1FE4:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x823b2028
	if (cr6.lt) goto loc_823B2028;
	// beq cr6,0x823b201c
	if (cr6.eq) goto loc_823B201C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x823b2010
	if (cr6.lt) goto loc_823B2010;
	// bne cr6,0x823b2034
	if (!cr6.eq) goto loc_823B2034;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r30,0,30,31
	r11.u64 = (__builtin_rotateleft32(r30.u32, 0) & 0x3) | (r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// b 0x823b2030
	goto loc_823B2030;
loc_823B2010:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r30,1,30,31
	r11.u64 = (__builtin_rotateleft32(r30.u32, 1) & 0x3) | (r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// b 0x823b2030
	goto loc_823B2030;
loc_823B201C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// ori r11,r11,3
	r11.u64 = r11.u64 | 3;
	// b 0x823b2030
	goto loc_823B2030;
loc_823B2028:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
loc_823B2030:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_823B2034:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x823b2048
	if (cr6.eq) goto loc_823B2048;
	// lfs f0,80(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 0, temp.u32);
	// b 0x823b2050
	goto loc_823B2050;
loc_823B2048:
	// lfd f0,80(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 80);
	// stfd f0,0(r26)
	PPC_STORE_U64(r26.u32 + 0, f0.u64);
loc_823B2050:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823B2058"))) PPC_WEAK_FUNC(sub_823B2058);
PPC_FUNC_IMPL(__imp__sub_823B2058) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// clrlwi r28,r29,27
	r28.u64 = r29.u32 & 0x1F;
	// rlwinm. r11,r29,0,28,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b2098
	if (cr0.eq) goto loc_823B2098;
	// rlwinm. r11,r27,0,24,24
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b2098
	if (cr0.eq) goto loc_823B2098;
	// lis r3,8192
	ctx.r3.s64 = 536870912;
	// bl 0x823b2774
	sub_823B2774(ctx, base);
	// rlwinm r28,r28,0,29,27
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// b 0x823b227c
	goto loc_823B227C;
loc_823B2098:
	// rlwinm. r11,r29,0,29,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b20b8
	if (cr0.eq) goto loc_823B20B8;
	// rlwinm. r11,r27,0,27,27
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b20b8
	if (cr0.eq) goto loc_823B20B8;
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// bl 0x823b2774
	sub_823B2774(ctx, base);
	// rlwinm r28,r28,0,30,28
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// b 0x823b227c
	goto loc_823B227C;
loc_823B20B8:
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b2184
	if (cr0.eq) goto loc_823B2184;
	// rlwinm. r11,r27,0,25,25
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b2184
	if (cr0.eq) goto loc_823B2184;
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// bl 0x823b2774
	sub_823B2774(ctx, base);
	// clrlwi r11,r27,30
	r11.u64 = r27.u32 & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x823b214c
	if (cr6.lt) goto loc_823B214C;
	// beq cr6,0x823b212c
	if (cr6.eq) goto loc_823B212C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x823b210c
	if (cr6.lt) goto loc_823B210C;
	// bne cr6,0x823b217c
	if (!cr6.eq) goto loc_823B217C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f13,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// lfd f0,-31368(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x823b216c
	if (!cr6.gt) goto loc_823B216C;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lfd f0,-22576(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -22576);
	// b 0x823b2178
	goto loc_823B2178;
loc_823B210C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f13,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// lfd f0,-31368(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x823b2160
	if (cr6.gt) goto loc_823B2160;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lfd f0,-22576(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -22576);
	// b 0x823b2174
	goto loc_823B2174;
loc_823B212C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f13,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// lfd f0,-31368(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// lfd f0,-22576(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -22576);
	// bgt cr6,0x823b2178
	if (cr6.gt) goto loc_823B2178;
	// b 0x823b2174
	goto loc_823B2174;
loc_823B214C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f13,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// lfd f0,-31368(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x823b216c
	if (!cr6.gt) goto loc_823B216C;
loc_823B2160:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lfd f0,-22592(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -22592);
	// b 0x823b2178
	goto loc_823B2178;
loc_823B216C:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lfd f0,-22592(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -22592);
loc_823B2174:
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	f0.u64 = f0.u64 ^ 0x8000000000000000;
loc_823B2178:
	// stfd f0,0(r30)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r30.u32 + 0, f0.u64);
loc_823B217C:
	// rlwinm r28,r28,0,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x823b227c
	goto loc_823B227C;
loc_823B2184:
	// rlwinm. r11,r29,0,30,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b227c
	if (cr0.eq) goto loc_823B227C;
	// rlwinm. r11,r27,0,26,26
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b227c
	if (cr0.eq) goto loc_823B227C;
	// rlwinm. r11,r29,0,27,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r31,0
	r31.s64 = 0;
	// beq 0x823b21a4
	if (cr0.eq) goto loc_823B21A4;
	// li r31,1
	r31.s64 = 1;
loc_823B21A4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f1,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// lfd f31,-31368(r11)
	f31.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// beq cr6,0x823b2264
	if (cr6.eq) goto loc_823B2264;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823abdd8
	sub_823ABDD8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// addi r11,r11,-1536
	r11.s64 = r11.s64 + -1536;
	// cmpwi cr6,r11,-1074
	cr6.compare<int32_t>(r11.s32, -1074, xer);
	// bge cr6,0x823b21e0
	if (!cr6.lt) goto loc_823B21E0;
	// fmul f0,f1,f31
	f0.f64 = ctx.f1.f64 * f31.f64;
	// li r31,1
	r31.s64 = 1;
	// b 0x823b225c
	goto loc_823B225C;
loc_823B21E0:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// li r8,1
	ctx.r8.s64 = 1;
	// blt cr6,0x823b21f0
	if (cr6.lt) goto loc_823B21F0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_823B21F0:
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1021
	cr6.compare<int32_t>(r11.s32, -1021, xer);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bge cr6,0x823b224c
	if (!cr6.lt) goto loc_823B224C;
	// subfic r9,r11,-1021
	xer.ca = r11.u32 <= 4294966275;
	ctx.r9.s64 = -1021 - r11.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_823B2214:
	// clrlwi. r7,r11,31
	ctx.r7.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x823b2228
	if (cr0.eq) goto loc_823B2228;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x823b2228
	if (!cr6.eq) goto loc_823B2228;
	// li r31,1
	r31.s64 = 1;
loc_823B2228:
	// clrlwi. r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// beq 0x823b2238
	if (cr0.eq) goto loc_823B2238;
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
loc_823B2238:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// bne 0x823b2214
	if (!cr0.eq) goto loc_823B2214;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_823B224C:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823b225c
	if (cr6.eq) goto loc_823B225C;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
loc_823B225C:
	// stfd f0,0(r30)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r30.u32 + 0, f0.u64);
	// b 0x823b2268
	goto loc_823B2268;
loc_823B2264:
	// li r31,1
	r31.s64 = 1;
loc_823B2268:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x823b2278
	if (cr6.eq) goto loc_823B2278;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// bl 0x823b2774
	sub_823B2774(ctx, base);
loc_823B2278:
	// rlwinm r28,r28,0,31,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_823B227C:
	// rlwinm. r11,r29,0,27,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b2298
	if (cr0.eq) goto loc_823B2298;
	// rlwinm. r11,r27,0,28,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b2298
	if (cr0.eq) goto loc_823B2298;
	// lis r3,512
	ctx.r3.s64 = 33554432;
	// bl 0x823b2774
	sub_823B2774(ctx, base);
	// rlwinm r28,r28,0,28,26
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_823B2298:
	// cntlzw r11,r28
	r11.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823B22AC"))) PPC_WEAK_FUNC(sub_823B22AC);
PPC_FUNC_IMPL(__imp__sub_823B22AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B22B0"))) PPC_WEAK_FUNC(sub_823B22B0);
PPC_FUNC_IMPL(__imp__sub_823B22B0) {
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
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x823b22dc
	if (cr6.eq) goto loc_823B22DC;
	// ble cr6,0x823b22e8
	if (!cr6.gt) goto loc_823B22E8;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bgt cr6,0x823b22e8
	if (cr6.gt) goto loc_823B22E8;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,34
	r11.s64 = 34;
	// b 0x823b22e4
	goto loc_823B22E4;
loc_823B22DC:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,33
	r11.s64 = 33;
loc_823B22E4:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_823B22E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B22F8"))) PPC_WEAK_FUNC(sub_823B22F8);
PPC_FUNC_IMPL(__imp__sub_823B22F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// rlwinm. r11,r3,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b2308
	if (cr0.eq) goto loc_823B2308;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_823B2308:
	// rlwinm. r11,r3,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b2318
	if (cr0.eq) goto loc_823B2318;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823B2318:
	// rlwinm. r11,r3,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b2328
	if (cr0.eq) goto loc_823B2328;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_823B2328:
	// clrlwi. r11,r3,31
	r11.u64 = ctx.r3.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b2338
	if (cr0.eq) goto loc_823B2338;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_823B2338:
	// rlwinm r3,r3,1,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2340"))) PPC_WEAK_FUNC(sub_823B2340);
PPC_FUNC_IMPL(__imp__sub_823B2340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// fmr f31,f3
	f31.f64 = ctx.f3.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfd f1,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.f1.u64);
	// addi r11,r11,-21616
	r11.s64 = r11.s64 + -21616;
	// stfd f2,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f2.u64);
	// stfd f31,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, f31.u64);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823B237C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x823b240c
	if (cr6.eq) goto loc_823B240C;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r8,r11,232
	ctx.r8.s64 = r11.s64 + 232;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x823b237c
	if (cr6.lt) goto loc_823B237C;
	// li r11,0
	r11.s64 = 0;
loc_823B23A0:
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// beq cr6,0x823b241c
	if (cr6.eq) goto loc_823B241C;
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lwz r11,184(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lwz r11,192(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lwz r11,196(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x823b2710
	sub_823B2710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8227f8a8
	sub_8227F8A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823b2404
	if (!cr0.eq) goto loc_823B2404;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823b22b0
	sub_823B22B0(ctx, base);
loc_823B2404:
	// lfd f1,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// b 0x823b242c
	goto loc_823B242C;
loc_823B240C:
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x823b23a0
	goto loc_823B23A0;
loc_823B241C:
	// bl 0x823b2710
	sub_823B2710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823b22b0
	sub_823B22B0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_823B242C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_823B2444"))) PPC_WEAK_FUNC(sub_823B2444);
PPC_FUNC_IMPL(__imp__sub_823B2444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2448"))) PPC_WEAK_FUNC(sub_823B2448);
PPC_FUNC_IMPL(__imp__sub_823B2448) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,-19232(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19232);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823b2494
	if (!cr6.eq) goto loc_823B2494;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f2,-31368(r11)
	ctx.f2.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// bl 0x823b2340
	sub_823B2340(ctx, base);
	// b 0x823b24b8
	goto loc_823B24B8;
loc_823B2494:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,33
	ctx.r10.s64 = 33;
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x823b2710
	sub_823B2710(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_823B24B8:
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

__attribute__((alias("__imp__sub_823B24D0"))) PPC_WEAK_FUNC(sub_823B24D0);
PPC_FUNC_IMPL(__imp__sub_823B24D0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// fadd f31,f1,f2
	f31.f64 = ctx.f1.f64 + ctx.f2.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r11,-19232(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19232);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823b2514
	if (!cr6.eq) goto loc_823B2514;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823b2340
	sub_823B2340(ctx, base);
	// b 0x823b2538
	goto loc_823B2538;
loc_823B2514:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,33
	ctx.r10.s64 = 33;
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x823b2710
	sub_823B2710(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_823B2538:
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

__attribute__((alias("__imp__sub_823B2550"))) PPC_WEAK_FUNC(sub_823B2550);
PPC_FUNC_IMPL(__imp__sub_823B2550) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stfd f31,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, f31.u64);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stfd f2,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.f2.u64);
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, r30.u32);
	// bl 0x823b2058
	sub_823B2058(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823b25c0
	if (!cr0.eq) goto loc_823B25C0;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,280
	ctx.r8.s64 = ctx.r1.s64 + 280;
	// clrlwi r11,r11,1
	r11.u64 = r11.u32 & 0x7FFFFFFF;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,292
	ctx.r4.s64 = ctx.r1.s64 + 292;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// bl 0x823b1c50
	sub_823B1C50(ctx, base);
	// lwz r30,292(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
loc_823B25C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823b22f8
	sub_823B22F8(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r11,-19232(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19232);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823b2600
	if (!cr6.eq) goto loc_823B2600;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x823b2600
	if (cr6.eq) goto loc_823B2600;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f3,280(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfd f2,-31368(r11)
	ctx.f2.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// bl 0x823b2340
	sub_823B2340(ctx, base);
	// b 0x823b2618
	goto loc_823B2618;
loc_823B2600:
	// bl 0x823b22b0
	sub_823B22B0(ctx, base);
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// bl 0x823b2710
	sub_823B2710(ctx, base);
	// lfd f1,280(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
loc_823B2618:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823B2624"))) PPC_WEAK_FUNC(sub_823B2624);
PPC_FUNC_IMPL(__imp__sub_823B2624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2628"))) PPC_WEAK_FUNC(sub_823B2628);
PPC_FUNC_IMPL(__imp__sub_823B2628) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stfd f30,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, f30.u64);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stfd f3,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.f3.u64);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, r30.u32);
	// bl 0x823b2058
	sub_823B2058(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823b26a8
	if (!cr0.eq) goto loc_823B26A8;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// stfd f31,128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 128, f31.u64);
	// clrlwi r11,r11,5
	r11.u64 = r11.u32 & 0x7FFFFFF;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// oris r11,r11,34816
	r11.u64 = r11.u64 | 2281701376;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,300
	ctx.r4.s64 = ctx.r1.s64 + 300;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// bl 0x823b1c50
	sub_823B1C50(ctx, base);
	// lwz r30,300(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
loc_823B26A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823b22f8
	sub_823B22F8(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r11,-19232(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19232);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823b26e4
	if (!cr6.eq) goto loc_823B26E4;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x823b26e4
	if (cr6.eq) goto loc_823B26E4;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lfd f3,288(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x823b2340
	sub_823B2340(ctx, base);
	// b 0x823b26fc
	goto loc_823B26FC;
loc_823B26E4:
	// bl 0x823b22b0
	sub_823B22B0(ctx, base);
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// bl 0x823b2710
	sub_823B2710(ctx, base);
	// lfd f1,288(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
loc_823B26FC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823B270C"))) PPC_WEAK_FUNC(sub_823B270C);
PPC_FUNC_IMPL(__imp__sub_823B270C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2710"))) PPC_WEAK_FUNC(sub_823B2710);
PPC_FUNC_IMPL(__imp__sub_823B2710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister f0{};
	// mffs f0
	r0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, f0.u64);
	// xori r5,r3,248
	ctx.r5.u64 = ctx.r3.u64 ^ 248;
	// lwz r3,-4(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// and r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 & ctx.r4.u64;
	// andc r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 & ~ctx.r4.u64;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r6,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r6.u32);
	// lfd f0,-8(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// xori r3,r3,248
	ctx.r3.u64 = ctx.r3.u64 ^ 248;
	// mtfsf 255,f0
	ctx.fpscr.storeFromGuest(f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2740"))) PPC_WEAK_FUNC(sub_823B2740);
PPC_FUNC_IMPL(__imp__sub_823B2740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister f0{};
	// mffs f0
	r0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, f0.u64);
	// lwz r3,-4(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2750"))) PPC_WEAK_FUNC(sub_823B2750);
PPC_FUNC_IMPL(__imp__sub_823B2750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister f0{};
	// mffs f0
	r0.u64 = ctx.fpscr.loadFromHost();
	// li r3,4
	ctx.r3.s64 = 4;
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, f0.u64);
	// lwz r5,-4(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// and r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 & ctx.r5.u64;
	// stw r5,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r5.u32);
	// lfd f1,-8(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// mtfsf 255,f1
	ctx.fpscr.storeFromGuest(ctx.f1.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2774"))) PPC_WEAK_FUNC(sub_823B2774);
PPC_FUNC_IMPL(__imp__sub_823B2774) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister f0{};
	// mffs f0
	r0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, f0.u64);
	// lwz r5,-4(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// or r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 | ctx.r5.u64;
	// stw r5,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r5.u32);
	// lfd f1,-8(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// mtfsf 255,f1
	ctx.fpscr.storeFromGuest(ctx.f1.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2794"))) PPC_WEAK_FUNC(sub_823B2794);
PPC_FUNC_IMPL(__imp__sub_823B2794) {
	PPC_FUNC_PROLOGUE();
	// stw r3,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r3.u32);
	// lfd f1,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// mtfsf 255,f1
	ctx.fpscr.storeFromGuest(ctx.f1.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B27A4"))) PPC_WEAK_FUNC(sub_823B27A4);
PPC_FUNC_IMPL(__imp__sub_823B27A4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister f0{};
	// mffs f0
	r0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, f0.u64);
	// lwz r3,-4(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B27B4"))) PPC_WEAK_FUNC(sub_823B27B4);
PPC_FUNC_IMPL(__imp__sub_823B27B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B27B8"))) PPC_WEAK_FUNC(sub_823B27B8);
PPC_FUNC_IMPL(__imp__sub_823B27B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r19,19276(r14)
	r19.u64 = PPC_LOAD_U32(r14.u32 + 19276);
	// lwz r16,-14232(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14232);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r27,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r27.u32);
	// cmpwi cr6,r27,-2
	cr6.compare<int32_t>(r27.s32, -2, xer);
	// bne cr6,0x823b27f8
	if (!cr6.eq) goto loc_823B27F8;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x823b28e8
	goto loc_823B28E8;
loc_823B27F8:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// blt cr6,0x823b2810
	if (cr6.lt) goto loc_823B2810;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,14864(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14864);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x823b2840
	if (cr6.lt) goto loc_823B2840;
loc_823B2810:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x823a3f38
	sub_823A3F38(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823b28e8
	goto loc_823B28E8;
loc_823B2840:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r30,r11,14880
	r30.s64 = r11.s64 + 14880;
	// srawi r11,r27,5
	xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1F) != 0);
	r11.s64 = r27.s32 >> 5;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r27,27
	r11.u64 = r27.u32 & 0x1F;
	// mulli r29,r11,44
	r29.s64 = r11.s64 * 44;
	// lwzx r11,r28,r30
	r11.u64 = PPC_LOAD_U32(r28.u32 + r30.u32);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b2810
	if (cr0.eq) goto loc_823B2810;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823af658
	sub_823AF658(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r28,r30
	r11.u64 = PPC_LOAD_U32(r28.u32 + r30.u32);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b28c4
	if (cr0.eq) goto loc_823B28C4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823af580
	sub_823AF580(ctx, base);
	// bl 0x823ba000
	sub_823BA000(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823b28ac
	if (!cr0.eq) goto loc_823B28AC;
	// bl 0x823b6468
	sub_823B6468(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x823b28b0
	goto loc_823B28B0;
loc_823B28AC:
	// li r30,0
	r30.s64 = 0;
loc_823B28B0:
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x823b28d8
	if (cr6.eq) goto loc_823B28D8;
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
loc_823B28C4:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_823B28D8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x823b2910
	sub_823B2910(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_823B28E8:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823B27C0"))) PPC_WEAK_FUNC(sub_823B27C0);
PPC_FUNC_IMPL(__imp__sub_823B27C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r27,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r27.u32);
	// cmpwi cr6,r27,-2
	cr6.compare<int32_t>(r27.s32, -2, xer);
	// bne cr6,0x823b27f8
	if (!cr6.eq) goto loc_823B27F8;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x823b28e8
	goto loc_823B28E8;
loc_823B27F8:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// blt cr6,0x823b2810
	if (cr6.lt) goto loc_823B2810;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,14864(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14864);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x823b2840
	if (cr6.lt) goto loc_823B2840;
loc_823B2810:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x823a3f38
	sub_823A3F38(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823b28e8
	goto loc_823B28E8;
loc_823B2840:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r30,r11,14880
	r30.s64 = r11.s64 + 14880;
	// srawi r11,r27,5
	xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1F) != 0);
	r11.s64 = r27.s32 >> 5;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r27,27
	r11.u64 = r27.u32 & 0x1F;
	// mulli r29,r11,44
	r29.s64 = r11.s64 * 44;
	// lwzx r11,r28,r30
	r11.u64 = PPC_LOAD_U32(r28.u32 + r30.u32);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b2810
	if (cr0.eq) goto loc_823B2810;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823af658
	sub_823AF658(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r28,r30
	r11.u64 = PPC_LOAD_U32(r28.u32 + r30.u32);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b28c4
	if (cr0.eq) goto loc_823B28C4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823af580
	sub_823AF580(ctx, base);
	// bl 0x823ba000
	sub_823BA000(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823b28ac
	if (!cr0.eq) goto loc_823B28AC;
	// bl 0x823b6468
	sub_823B6468(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x823b28b0
	goto loc_823B28B0;
loc_823B28AC:
	// li r30,0
	r30.s64 = 0;
loc_823B28B0:
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x823b28d8
	if (cr6.eq) goto loc_823B28D8;
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
loc_823B28C4:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_823B28D8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x823b2910
	sub_823B2910(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_823B28E8:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823B28F0"))) PPC_WEAK_FUNC(sub_823B28F0);
PPC_FUNC_IMPL(__imp__sub_823B28F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r27,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r27.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,164(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// b 0x823b2928
	goto loc_823B2928;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r27,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r27.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_823B2928:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823af758
	sub_823AF758(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r27,-16(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2910"))) PPC_WEAK_FUNC(sub_823B2910);
PPC_FUNC_IMPL(__imp__sub_823B2910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r27,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r27.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823af758
	sub_823AF758(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r27,-16(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2948"))) PPC_WEAK_FUNC(sub_823B2948);
PPC_FUNC_IMPL(__imp__sub_823B2948) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// bl 0x8239fc80
	sub_8239FC80(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpdi cr6,r26,-1
	cr6.compare<int64_t>(r26.s64, -1, xer);
	// beq cr6,0x823b29c0
	if (cr6.eq) goto loc_823B29C0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239fc80
	sub_8239FC80(ctx, base);
	// cmpdi cr6,r3,-1
	cr6.compare<int64_t>(ctx.r3.s64, -1, xer);
	// beq cr6,0x823b29c0
	if (cr6.eq) goto loc_823B29C0;
	// subf r30,r3,r29
	r30.s64 = r29.s64 - ctx.r3.s64;
	// cmpdi cr6,r30,0
	cr6.compare<int64_t>(r30.s64, 0, xer);
	// ble cr6,0x823b2a5c
	if (!cr6.gt) goto loc_823B2A5C;
	// bl 0x823b99e8
	sub_823B99E8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// bl 0x823b8560
	sub_823B8560(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x823b29d0
	if (!cr0.eq) goto loc_823B29D0;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,12
	r11.s64 = 12;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_823B29C0:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_823B29C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
loc_823B29D0:
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x823b2ae0
	sub_823B2AE0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_823B29E4:
	// cmpdi cr6,r30,4096
	cr6.compare<int64_t>(r30.s64, 4096, xer);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// bge cr6,0x823b29f4
	if (!cr6.lt) goto loc_823B29F4;
	// extsw r5,r30
	ctx.r5.s64 = r30.s32;
loc_823B29F4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a0070
	sub_823A0070(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823b2a1c
	if (cr6.eq) goto loc_823B2A1C;
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// subf r30,r11,r30
	r30.s64 = r30.s64 - r11.s64;
	// cmpdi cr6,r30,0
	cr6.compare<int64_t>(r30.s64, 0, xer);
	// bgt cr6,0x823b29e4
	if (cr6.gt) goto loc_823B29E4;
	// b 0x823b2a3c
	goto loc_823B2A3C;
loc_823B2A1C:
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bne cr6,0x823b2a38
	if (!cr6.eq) goto loc_823B2A38;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,13
	r11.s64 = 13;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_823B2A38:
	// li r27,-1
	r27.s64 = -1;
loc_823B2A3C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823b2ae0
	sub_823B2AE0(ctx, base);
	// bl 0x823b99e8
	sub_823B99E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x823b8e48
	sub_823B8E48(ctx, base);
	// b 0x823b2ab4
	goto loc_823B2AB4;
loc_823B2A5C:
	// bge cr6,0x823b2abc
	if (!cr6.lt) goto loc_823B2ABC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239fc80
	sub_8239FC80(ctx, base);
	// cmpdi cr6,r3,-1
	cr6.compare<int64_t>(ctx.r3.s64, -1, xer);
	// beq cr6,0x823b29c0
	if (cr6.eq) goto loc_823B29C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823af580
	sub_823AF580(ctx, base);
	// bl 0x823ba040
	sub_823BA040(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// neg r27,r11
	r27.s64 = -r11.s64;
	// cmpdi cr6,r27,-1
	cr6.compare<int64_t>(r27.s64, -1, xer);
	// bne cr6,0x823b2abc
	if (!cr6.eq) goto loc_823B2ABC;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,13
	r11.s64 = 13;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x823b6468
	sub_823B6468(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_823B2AB4:
	// cmpdi cr6,r27,-1
	cr6.compare<int64_t>(r27.s64, -1, xer);
	// beq cr6,0x823b29c0
	if (cr6.eq) goto loc_823B29C0;
loc_823B2ABC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239fc80
	sub_8239FC80(ctx, base);
	// cmpdi cr6,r3,-1
	cr6.compare<int64_t>(ctx.r3.s64, -1, xer);
	// beq cr6,0x823b29c0
	if (cr6.eq) goto loc_823B29C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823b29c8
	goto loc_823B29C8;
}

__attribute__((alias("__imp__sub_823B2ADC"))) PPC_WEAK_FUNC(sub_823B2ADC);
PPC_FUNC_IMPL(__imp__sub_823B2ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2AE0"))) PPC_WEAK_FUNC(sub_823B2AE0);
PPC_FUNC_IMPL(__imp__sub_823B2AE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32126
	r11.s64 = -2105409536;
	// cmpwi cr6,r4,16384
	cr6.compare<int32_t>(ctx.r4.s32, 16384, xer);
	// addi r10,r11,14880
	ctx.r10.s64 = r11.s64 + 14880;
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r3,27
	r11.u64 = ctx.r3.u32 & 0x1F;
	// mulli r9,r11,44
	ctx.r9.s64 = r11.s64 * 44;
	// lwzx r11,r8,r10
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// rlwinm r7,r7,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// beq cr6,0x823b2b28
	if (cr6.eq) goto loc_823B2B28;
	// cmplwi cr6,r4,32768
	cr6.compare<uint32_t>(ctx.r4.u32, 32768, xer);
	// bne cr6,0x823b2b4c
	if (!cr6.eq) goto loc_823B2B4C;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// b 0x823b2b4c
	goto loc_823B2B4C;
loc_823B2B28:
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// li r5,-128
	ctx.r5.s64 = -128;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stb r6,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r6.u8);
	// lwzx r11,r8,r10
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stb r10,40(r11)
	PPC_STORE_U8(r11.u32 + 40, ctx.r10.u8);
loc_823B2B4C:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x823b2b60
	if (!cr6.eq) goto loc_823B2B60;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32768
	ctx.r3.u64 = ctx.r3.u64 | 32768;
	// blr 
	return;
loc_823B2B60:
	// li r3,16384
	ctx.r3.s64 = 16384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2B68"))) PPC_WEAK_FUNC(sub_823B2B68);
PPC_FUNC_IMPL(__imp__sub_823B2B68) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b2bb0
	if (!cr6.eq) goto loc_823B2BB0;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x823a3f38
	sub_823A3F38(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x823b2bc0
	goto loc_823B2BC0;
loc_823B2BB0:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,17920(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17920);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_823B2BC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2BD0"))) PPC_WEAK_FUNC(sub_823B2BD0);
PPC_FUNC_IMPL(__imp__sub_823B2BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addi r11,r3,28
	r11.s64 = ctx.r3.s64 + 28;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,257
	ctx.r9.s64 = 257;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_823B2BE4:
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x823b2be4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823B2BE4;
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_823B2C10:
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x823b2c10
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823B2C10;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// addi r9,r10,-21272
	ctx.r9.s64 = ctx.r10.s64 + -21272;
	// li r10,257
	ctx.r10.s64 = 257;
	// subf r9,r3,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r3.s64;
loc_823B2C2C:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x823b2c2c
	if (!cr0.eq) goto loc_823B2C2C;
	// addi r11,r3,285
	r11.s64 = ctx.r3.s64 + 285;
	// li r10,256
	ctx.r10.s64 = 256;
loc_823B2C48:
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x823b2c48
	if (!cr0.eq) goto loc_823B2C48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2C60"))) PPC_WEAK_FUNC(sub_823B2C60);
PPC_FUNC_IMPL(__imp__sub_823B2C60) {
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
	// lis r6,-32126
	ctx.r6.s64 = -2105409536;
	// lwz r11,15156(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 15156);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823b2ca8
	if (!cr6.eq) goto loc_823B2CA8;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r3,-20208(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -20208);
	// li r11,-3
	r11.s64 = -3;
	// stw r11,17908(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17908, r11.u32);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r11,0
	r11.s64 = 0;
	// stw r11,17892(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17892, r11.u32);
	// bl 0x823b2bd0
	sub_823B2BD0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,15156(r6)
	PPC_STORE_U32(ctx.r6.u32 + 15156, r11.u32);
loc_823B2CA8:
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

__attribute__((alias("__imp__sub_823B2CBC"))) PPC_WEAK_FUNC(sub_823B2CBC);
PPC_FUNC_IMPL(__imp__sub_823B2CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2CC0"))) PPC_WEAK_FUNC(sub_823B2CC0);
PPC_FUNC_IMPL(__imp__sub_823B2CC0) {
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
	PPCRegister temp{};
	// mflr r12
	// bl 0x8239bcd4
	// lhz r10,10(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// li r22,0
	r22.s64 = 0;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lwz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2);
	// rlwinm r19,r11,0,0,16
	r19.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	// stw r10,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r10.u32);
	// clrlwi r10,r11,17
	ctx.r10.u64 = r11.u32 & 0x7FFF;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// stw r9,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r9.u32);
	// lwz r9,6(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6);
	// addi r30,r10,-16383
	r30.s64 = ctx.r10.s64 + -16383;
	// addi r20,r11,-20004
	r20.s64 = r11.s64 + -20004;
	// cmpwi cr6,r30,-16383
	cr6.compare<int32_t>(r30.s32, -16383, xer);
	// stw r9,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r9.u32);
	// lwz r21,12(r20)
	r21.u64 = PPC_LOAD_U32(r20.u32 + 12);
	// bne cr6,0x823b2d50
	if (!cr6.eq) goto loc_823B2D50;
	// mr r31,r22
	r31.u64 = r22.u64;
	// mr r11,r22
	r11.u64 = r22.u64;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
loc_823B2D18:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823b2d38
	if (!cr6.eq) goto loc_823B2D38;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x823b2d18
	if (cr6.lt) goto loc_823B2D18;
	// b 0x823b3384
	goto loc_823B3384;
loc_823B2D38:
	// addi r11,r1,-152
	r11.s64 = ctx.r1.s64 + -152;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// stw r22,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r22.u32);
	// stw r22,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r22.u32);
	// b 0x823b3388
	goto loc_823B3388;
loc_823B2D50:
	// addi r11,r1,-152
	r11.s64 = ctx.r1.s64 + -152;
	// lwz r25,8(r20)
	r25.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// addi r10,r1,-136
	ctx.r10.s64 = ctx.r1.s64 + -136;
	// addi r26,r25,-1
	r26.s64 = r25.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r27,r1,-152
	r27.s64 = ctx.r1.s64 + -152;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r24,r30
	r24.u64 = r30.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r23,-1
	r23.s64 = -1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// addi r11,r26,1
	r11.s64 = r26.s64 + 1;
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r31.s64 = temp.s64;
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// rlwinm r28,r31,2,0,29
	r28.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwzx r10,r28,r27
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r27.u32);
	// subfic r29,r11,31
	xer.ca = r11.u32 <= 31;
	r29.s64 = 31 - r11.s64;
	// slw r11,r3,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r29.u8 & 0x3F));
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b2ea8
	if (cr0.eq) goto loc_823B2EA8;
	// addi r11,r1,-152
	r11.s64 = ctx.r1.s64 + -152;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r23,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (r23.u32 << (r29.u8 & 0x3F));
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// andc. r11,r11,r10
	r11.u64 = r11.u64 & ~ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b2e10
	if (!cr0.eq) goto loc_823B2E10;
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x823b2ea8
	if (!cr6.lt) goto loc_823B2EA8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_823B2DF0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823b2e10
	if (!cr6.eq) goto loc_823B2E10;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x823b2df0
	if (cr6.lt) goto loc_823B2DF0;
	// b 0x823b2ea8
	goto loc_823B2EA8;
loc_823B2E10:
	// srawi r11,r26,5
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1F) != 0);
	r11.s64 = r26.s32 >> 5;
	// addi r7,r1,-152
	ctx.r7.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1F) != 0);
	r11.s64 = r26.s32 >> 5;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r11,r26
	r11.s64 = r26.s64 - r11.s64;
	// subfic r11,r11,31
	xer.ca = r11.u32 <= 31;
	r11.s64 = 31 - r11.s64;
	// slw r6,r3,r11
	ctx.r6.u64 = r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r11.u8 & 0x3F));
	// lwzx r11,r8,r7
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// add r10,r11,r6
	ctx.r10.u64 = r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x823b2e54
	if (cr6.lt) goto loc_823B2E54;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x823b2e58
	if (!cr6.lt) goto loc_823B2E58;
loc_823B2E54:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_823B2E58:
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stwx r10,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u32);
	// blt 0x823b2ea8
	if (cr0.lt) goto loc_823B2EA8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_823B2E70:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x823b2ea8
	if (cr6.eq) goto loc_823B2EA8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x823b2e94
	if (cr6.lt) goto loc_823B2E94;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x823b2e98
	if (!cr6.lt) goto loc_823B2E98;
loc_823B2E94:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_823B2E98:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x823b2e70
	if (!cr0.lt) goto loc_823B2E70;
loc_823B2EA8:
	// lwzx r10,r28,r27
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r27.u32);
	// slw r9,r23,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (r23.u32 << (r29.u8 & 0x3F));
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// stwx r10,r28,r27
	PPC_STORE_U32(r28.u32 + r27.u32, ctx.r10.u32);
	// bge cr6,0x823b2ef0
	if (!cr6.lt) goto loc_823B2EF0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	xer.ca = r11.u32 <= 3;
	r11.s64 = 3 - r11.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823b2ef0
	if (cr0.eq) goto loc_823B2EF0;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_823B2EE4:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823b2ee4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823B2EE4;
loc_823B2EF0:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x823b2efc
	if (cr6.eq) goto loc_823B2EFC;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_823B2EFC:
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// subf r10,r25,r11
	ctx.r10.s64 = r11.s64 - r25.s64;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// bge cr6,0x823b2f28
	if (!cr6.lt) goto loc_823B2F28;
	// addi r11,r1,-152
	r11.s64 = ctx.r1.s64 + -152;
	// mr r31,r22
	r31.u64 = r22.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// stw r22,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r22.u32);
	// stw r22,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r22.u32);
	// b 0x823b3388
	goto loc_823B3388;
loc_823B2F28:
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bgt cr6,0x823b3204
	if (cr6.gt) goto loc_823B3204;
	// subf r11,r24,r11
	r11.s64 = r11.s64 - r24.s64;
	// addi r10,r1,-136
	ctx.r10.s64 = ctx.r1.s64 + -136;
	// srawi r5,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r5.s64 = r11.s32 >> 5;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// addze r31,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	r31.s64 = temp.s64;
	// srawi r29,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r29.s64 = r11.s32 >> 5;
	// lwz r30,0(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r27,-1
	r27.s64 = -1;
	// addze r29,r29
	temp.s64 = r29.s64 + xer.ca;
	xer.ca = temp.u32 < r29.u32;
	r29.s64 = temp.s64;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r30.u32);
	// rlwinm r30,r29,5,0,26
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// subfic r10,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r10.s64 = 32 - r11.s64;
	// slw r9,r27,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r27.u32 << (r11.u8 & 0x3F));
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
loc_823B2F88:
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// and r30,r5,r9
	r30.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r30,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, r30.u32);
	// srw r5,r5,r11
	ctx.r5.u64 = r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (r11.u8 & 0x3F));
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwz r6,-160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// slw r6,r6,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// bne 0x823b2f88
	if (!cr0.eq) goto loc_823B2F88;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,-144
	r11.s64 = ctx.r1.s64 + -144;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_823B2FC8:
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, r31.s32, xer);
	// blt cr6,0x823b2fdc
	if (cr6.lt) goto loc_823B2FDC;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// b 0x823b2fe0
	goto loc_823B2FE0;
loc_823B2FDC:
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
loc_823B2FE0:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// bge 0x823b2fc8
	if (!cr0.lt) goto loc_823B2FC8;
	// addi r11,r26,1
	r11.s64 = r26.s64 + 1;
	// addi r28,r1,-152
	r28.s64 = ctx.r1.s64 + -152;
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r31.s64 = temp.s64;
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// rlwinm r29,r31,2,0,29
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// subfic r30,r11,31
	xer.ca = r11.u32 <= 31;
	r30.s64 = 31 - r11.s64;
	// slw r11,r3,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r30.u8 & 0x3F));
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b3114
	if (cr0.eq) goto loc_823B3114;
	// addi r11,r1,-152
	r11.s64 = ctx.r1.s64 + -152;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r23,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (r23.u32 << (r30.u8 & 0x3F));
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// andc. r11,r11,r10
	r11.u64 = r11.u64 & ~ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b3078
	if (!cr0.eq) goto loc_823B3078;
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x823b3114
	if (!cr6.lt) goto loc_823B3114;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_823B3058:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823b3078
	if (!cr6.eq) goto loc_823B3078;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x823b3058
	if (cr6.lt) goto loc_823B3058;
	// b 0x823b3114
	goto loc_823B3114;
loc_823B3078:
	// srawi r11,r26,5
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1F) != 0);
	r11.s64 = r26.s32 >> 5;
	// addi r7,r1,-152
	ctx.r7.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1F) != 0);
	r11.s64 = r26.s32 >> 5;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r11,r26
	r11.s64 = r26.s64 - r11.s64;
	// subfic r11,r11,31
	xer.ca = r11.u32 <= 31;
	r11.s64 = 31 - r11.s64;
	// slw r6,r3,r11
	ctx.r6.u64 = r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r11.u8 & 0x3F));
	// lwzx r11,r8,r7
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// add r10,r11,r6
	ctx.r10.u64 = r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x823b30bc
	if (cr6.lt) goto loc_823B30BC;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x823b30c0
	if (!cr6.lt) goto loc_823B30C0;
loc_823B30BC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_823B30C0:
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stwx r10,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u32);
	// blt 0x823b3114
	if (cr0.lt) goto loc_823B3114;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_823B30D8:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x823b3114
	if (cr6.eq) goto loc_823B3114;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x823b30fc
	if (cr6.lt) goto loc_823B30FC;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x823b3100
	if (!cr6.lt) goto loc_823B3100;
loc_823B30FC:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_823B3100:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x823b30d8
	if (!cr0.lt) goto loc_823B30D8;
loc_823B3114:
	// lwzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// slw r9,r23,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r23.u32 << (r30.u8 & 0x3F));
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// stwx r10,r29,r28
	PPC_STORE_U32(r29.u32 + r28.u32, ctx.r10.u32);
	// bge cr6,0x823b315c
	if (!cr6.lt) goto loc_823B315C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	xer.ca = r11.u32 <= 3;
	r11.s64 = 3 - r11.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823b315c
	if (cr0.eq) goto loc_823B315C;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_823B3150:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823b3150
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823B3150;
loc_823B315C:
	// addi r11,r21,1
	r11.s64 = r21.s64 + 1;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// srawi r7,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = r11.s32 >> 5;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// addze r3,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r3.s64 = temp.s64;
	// srawi r7,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = r11.s32 >> 5;
	// li r9,3
	ctx.r9.s64 = 3;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r7,r7,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// subfic r6,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r6.s64 = 32 - r11.s64;
	// slw r7,r27,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (r27.u32 << (r11.u8 & 0x3F));
	// not r5,r7
	ctx.r5.u64 = ~ctx.r7.u64;
loc_823B3190:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// and r31,r7,r5
	r31.u64 = ctx.r7.u64 & ctx.r5.u64;
	// stw r31,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, r31.u32);
	// srw r7,r7,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (r11.u8 & 0x3F));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,-160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// bne 0x823b3190
	if (!cr0.eq) goto loc_823B3190;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,-144
	r11.s64 = ctx.r1.s64 + -144;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_823B31D0:
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// blt cr6,0x823b31e4
	if (cr6.lt) goto loc_823B31E4;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// b 0x823b31e8
	goto loc_823B31E8;
loc_823B31E4:
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
loc_823B31E8:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// bge 0x823b31d0
	if (!cr0.lt) goto loc_823B31D0;
	// mr r31,r22
	r31.u64 = r22.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x823b3388
	goto loc_823B3388;
loc_823B3204:
	// lwz r29,0(r20)
	r29.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// blt cr6,0x823b32d4
	if (cr6.lt) goto loc_823B32D4;
	// srawi r10,r21,5
	xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1F) != 0);
	ctx.r10.s64 = r21.s32 >> 5;
	// addi r11,r1,-152
	r11.s64 = ctx.r1.s64 + -152;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r31.s64 = temp.s64;
	// srawi r10,r21,5
	xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1F) != 0);
	ctx.r10.s64 = r21.s32 >> 5;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// stw r22,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r22.u32);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r22,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r22.u32);
	// lwz r11,-152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -152);
	// subf r10,r10,r21
	ctx.r10.s64 = r21.s64 - ctx.r10.s64;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r11,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, r11.u32);
	// slw r11,r6,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// subfic r6,r10,32
	xer.ca = ctx.r10.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r10.s64;
	// not r5,r11
	ctx.r5.u64 = ~r11.u64;
loc_823B3260:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// and r30,r11,r5
	r30.u64 = r11.u64 & ctx.r5.u64;
	// stw r30,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, r30.u32);
	// srw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r10.u8 & 0x3F));
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r11,-160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// slw r7,r11,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r6.u8 & 0x3F));
	// bne 0x823b3260
	if (!cr0.eq) goto loc_823B3260;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,-144
	r11.s64 = ctx.r1.s64 + -144;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_823B32A0:
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, r31.s32, xer);
	// blt cr6,0x823b32b4
	if (cr6.lt) goto loc_823B32B4;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// b 0x823b32b8
	goto loc_823B32B8;
loc_823B32B4:
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
loc_823B32B8:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// bge 0x823b32a0
	if (!cr0.lt) goto loc_823B32A0;
	// lwz r11,20(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 20);
	// add r31,r11,r29
	r31.u64 = r11.u64 + r29.u64;
	// b 0x823b3388
	goto loc_823B3388;
loc_823B32D4:
	// srawi r11,r21,5
	xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1F) != 0);
	r11.s64 = r21.s32 >> 5;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addze r3,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r3.s64 = temp.s64;
	// lwz r11,20(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 20);
	// srawi r10,r21,5
	xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1F) != 0);
	ctx.r10.s64 = r21.s32 >> 5;
	// add r31,r11,r30
	r31.u64 = r11.u64 + r30.u64;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r11.s64 = temp.s64;
	// lwz r10,-152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -152);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// subf r11,r11,r21
	r11.s64 = r21.s64 - r11.s64;
	// li r9,3
	ctx.r9.s64 = 3;
	// subfic r6,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r6.s64 = 32 - r11.s64;
	// stw r10,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r10.u32);
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r7,r7,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// not r5,r7
	ctx.r5.u64 = ~ctx.r7.u64;
loc_823B331C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// and r30,r7,r5
	r30.u64 = ctx.r7.u64 & ctx.r5.u64;
	// stw r30,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, r30.u32);
	// srw r7,r7,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (r11.u8 & 0x3F));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,-160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// bne 0x823b331c
	if (!cr0.eq) goto loc_823B331C;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,-144
	r11.s64 = ctx.r1.s64 + -144;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_823B335C:
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// blt cr6,0x823b3370
	if (cr6.lt) goto loc_823B3370;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// b 0x823b3374
	goto loc_823B3374;
loc_823B3370:
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
loc_823B3374:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// bge 0x823b335c
	if (!cr0.lt) goto loc_823B335C;
loc_823B3384:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_823B3388:
	// subfic r11,r21,31
	xer.ca = r21.u32 <= 31;
	r11.s64 = 31 - r21.s64;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// bne cr6,0x823b339c
	if (!cr6.eq) goto loc_823B339C;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_823B339C:
	// slw r9,r31,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// lwz r11,16(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 16);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -152);
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// bne cr6,0x823b33c4
	if (!cr6.eq) goto loc_823B33C4;
	// lwz r11,-148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -148);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// b 0x823b33cc
	goto loc_823B33CC;
loc_823B33C4:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// bne cr6,0x823b33d0
	if (!cr6.eq) goto loc_823B33D0;
loc_823B33CC:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_823B33D0:
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_823B33D4"))) PPC_WEAK_FUNC(sub_823B33D4);
PPC_FUNC_IMPL(__imp__sub_823B33D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B33D8"))) PPC_WEAK_FUNC(sub_823B33D8);
PPC_FUNC_IMPL(__imp__sub_823B33D8) {
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
	PPCRegister temp{};
	// mflr r12
	// bl 0x8239bcd4
	// lhz r10,10(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// li r22,0
	r22.s64 = 0;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lwz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2);
	// rlwinm r19,r11,0,0,16
	r19.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	// stw r10,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r10.u32);
	// clrlwi r10,r11,17
	ctx.r10.u64 = r11.u32 & 0x7FFF;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// stw r9,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r9.u32);
	// lwz r9,6(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6);
	// addi r30,r10,-16383
	r30.s64 = ctx.r10.s64 + -16383;
	// addi r20,r11,-19980
	r20.s64 = r11.s64 + -19980;
	// cmpwi cr6,r30,-16383
	cr6.compare<int32_t>(r30.s32, -16383, xer);
	// stw r9,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r9.u32);
	// lwz r21,12(r20)
	r21.u64 = PPC_LOAD_U32(r20.u32 + 12);
	// bne cr6,0x823b3468
	if (!cr6.eq) goto loc_823B3468;
	// mr r31,r22
	r31.u64 = r22.u64;
	// mr r11,r22
	r11.u64 = r22.u64;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
loc_823B3430:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823b3450
	if (!cr6.eq) goto loc_823B3450;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x823b3430
	if (cr6.lt) goto loc_823B3430;
	// b 0x823b3a9c
	goto loc_823B3A9C;
loc_823B3450:
	// addi r11,r1,-152
	r11.s64 = ctx.r1.s64 + -152;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// stw r22,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r22.u32);
	// stw r22,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r22.u32);
	// b 0x823b3aa0
	goto loc_823B3AA0;
loc_823B3468:
	// addi r11,r1,-152
	r11.s64 = ctx.r1.s64 + -152;
	// lwz r25,8(r20)
	r25.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// addi r10,r1,-136
	ctx.r10.s64 = ctx.r1.s64 + -136;
	// addi r26,r25,-1
	r26.s64 = r25.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r27,r1,-152
	r27.s64 = ctx.r1.s64 + -152;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r24,r30
	r24.u64 = r30.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r23,-1
	r23.s64 = -1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// addi r11,r26,1
	r11.s64 = r26.s64 + 1;
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r31.s64 = temp.s64;
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// rlwinm r28,r31,2,0,29
	r28.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwzx r10,r28,r27
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r27.u32);
	// subfic r29,r11,31
	xer.ca = r11.u32 <= 31;
	r29.s64 = 31 - r11.s64;
	// slw r11,r3,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r29.u8 & 0x3F));
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b35c0
	if (cr0.eq) goto loc_823B35C0;
	// addi r11,r1,-152
	r11.s64 = ctx.r1.s64 + -152;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r23,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (r23.u32 << (r29.u8 & 0x3F));
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// andc. r11,r11,r10
	r11.u64 = r11.u64 & ~ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b3528
	if (!cr0.eq) goto loc_823B3528;
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x823b35c0
	if (!cr6.lt) goto loc_823B35C0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_823B3508:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823b3528
	if (!cr6.eq) goto loc_823B3528;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x823b3508
	if (cr6.lt) goto loc_823B3508;
	// b 0x823b35c0
	goto loc_823B35C0;
loc_823B3528:
	// srawi r11,r26,5
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1F) != 0);
	r11.s64 = r26.s32 >> 5;
	// addi r7,r1,-152
	ctx.r7.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1F) != 0);
	r11.s64 = r26.s32 >> 5;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r11,r26
	r11.s64 = r26.s64 - r11.s64;
	// subfic r11,r11,31
	xer.ca = r11.u32 <= 31;
	r11.s64 = 31 - r11.s64;
	// slw r6,r3,r11
	ctx.r6.u64 = r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r11.u8 & 0x3F));
	// lwzx r11,r8,r7
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// add r10,r11,r6
	ctx.r10.u64 = r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x823b356c
	if (cr6.lt) goto loc_823B356C;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x823b3570
	if (!cr6.lt) goto loc_823B3570;
loc_823B356C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_823B3570:
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stwx r10,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u32);
	// blt 0x823b35c0
	if (cr0.lt) goto loc_823B35C0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_823B3588:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x823b35c0
	if (cr6.eq) goto loc_823B35C0;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x823b35ac
	if (cr6.lt) goto loc_823B35AC;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x823b35b0
	if (!cr6.lt) goto loc_823B35B0;
loc_823B35AC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_823B35B0:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x823b3588
	if (!cr0.lt) goto loc_823B3588;
loc_823B35C0:
	// lwzx r10,r28,r27
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r27.u32);
	// slw r9,r23,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (r23.u32 << (r29.u8 & 0x3F));
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// stwx r10,r28,r27
	PPC_STORE_U32(r28.u32 + r27.u32, ctx.r10.u32);
	// bge cr6,0x823b3608
	if (!cr6.lt) goto loc_823B3608;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	xer.ca = r11.u32 <= 3;
	r11.s64 = 3 - r11.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823b3608
	if (cr0.eq) goto loc_823B3608;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_823B35FC:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823b35fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823B35FC;
loc_823B3608:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x823b3614
	if (cr6.eq) goto loc_823B3614;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_823B3614:
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// subf r10,r25,r11
	ctx.r10.s64 = r11.s64 - r25.s64;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// bge cr6,0x823b3640
	if (!cr6.lt) goto loc_823B3640;
	// addi r11,r1,-152
	r11.s64 = ctx.r1.s64 + -152;
	// mr r31,r22
	r31.u64 = r22.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// stw r22,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r22.u32);
	// stw r22,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r22.u32);
	// b 0x823b3aa0
	goto loc_823B3AA0;
loc_823B3640:
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bgt cr6,0x823b391c
	if (cr6.gt) goto loc_823B391C;
	// subf r11,r24,r11
	r11.s64 = r11.s64 - r24.s64;
	// addi r10,r1,-136
	ctx.r10.s64 = ctx.r1.s64 + -136;
	// srawi r5,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r5.s64 = r11.s32 >> 5;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// addze r31,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	r31.s64 = temp.s64;
	// srawi r29,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r29.s64 = r11.s32 >> 5;
	// lwz r30,0(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r27,-1
	r27.s64 = -1;
	// addze r29,r29
	temp.s64 = r29.s64 + xer.ca;
	xer.ca = temp.u32 < r29.u32;
	r29.s64 = temp.s64;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r30.u32);
	// rlwinm r30,r29,5,0,26
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// subfic r10,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r10.s64 = 32 - r11.s64;
	// slw r9,r27,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r27.u32 << (r11.u8 & 0x3F));
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
loc_823B36A0:
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// and r30,r5,r9
	r30.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r30,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, r30.u32);
	// srw r5,r5,r11
	ctx.r5.u64 = r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (r11.u8 & 0x3F));
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwz r6,-160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// slw r6,r6,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// bne 0x823b36a0
	if (!cr0.eq) goto loc_823B36A0;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,-144
	r11.s64 = ctx.r1.s64 + -144;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_823B36E0:
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, r31.s32, xer);
	// blt cr6,0x823b36f4
	if (cr6.lt) goto loc_823B36F4;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// b 0x823b36f8
	goto loc_823B36F8;
loc_823B36F4:
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
loc_823B36F8:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// bge 0x823b36e0
	if (!cr0.lt) goto loc_823B36E0;
	// addi r11,r26,1
	r11.s64 = r26.s64 + 1;
	// addi r28,r1,-152
	r28.s64 = ctx.r1.s64 + -152;
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r31.s64 = temp.s64;
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// rlwinm r29,r31,2,0,29
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// subfic r30,r11,31
	xer.ca = r11.u32 <= 31;
	r30.s64 = 31 - r11.s64;
	// slw r11,r3,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r30.u8 & 0x3F));
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b382c
	if (cr0.eq) goto loc_823B382C;
	// addi r11,r1,-152
	r11.s64 = ctx.r1.s64 + -152;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r23,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (r23.u32 << (r30.u8 & 0x3F));
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// andc. r11,r11,r10
	r11.u64 = r11.u64 & ~ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b3790
	if (!cr0.eq) goto loc_823B3790;
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x823b382c
	if (!cr6.lt) goto loc_823B382C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_823B3770:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823b3790
	if (!cr6.eq) goto loc_823B3790;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x823b3770
	if (cr6.lt) goto loc_823B3770;
	// b 0x823b382c
	goto loc_823B382C;
loc_823B3790:
	// srawi r11,r26,5
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1F) != 0);
	r11.s64 = r26.s32 >> 5;
	// addi r7,r1,-152
	ctx.r7.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1F) != 0);
	r11.s64 = r26.s32 >> 5;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r11,r26
	r11.s64 = r26.s64 - r11.s64;
	// subfic r11,r11,31
	xer.ca = r11.u32 <= 31;
	r11.s64 = 31 - r11.s64;
	// slw r6,r3,r11
	ctx.r6.u64 = r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r11.u8 & 0x3F));
	// lwzx r11,r8,r7
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// add r10,r11,r6
	ctx.r10.u64 = r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x823b37d4
	if (cr6.lt) goto loc_823B37D4;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x823b37d8
	if (!cr6.lt) goto loc_823B37D8;
loc_823B37D4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_823B37D8:
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stwx r10,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u32);
	// blt 0x823b382c
	if (cr0.lt) goto loc_823B382C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_823B37F0:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x823b382c
	if (cr6.eq) goto loc_823B382C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x823b3814
	if (cr6.lt) goto loc_823B3814;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x823b3818
	if (!cr6.lt) goto loc_823B3818;
loc_823B3814:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_823B3818:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x823b37f0
	if (!cr0.lt) goto loc_823B37F0;
loc_823B382C:
	// lwzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// slw r9,r23,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r23.u32 << (r30.u8 & 0x3F));
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// stwx r10,r29,r28
	PPC_STORE_U32(r29.u32 + r28.u32, ctx.r10.u32);
	// bge cr6,0x823b3874
	if (!cr6.lt) goto loc_823B3874;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	xer.ca = r11.u32 <= 3;
	r11.s64 = 3 - r11.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823b3874
	if (cr0.eq) goto loc_823B3874;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_823B3868:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823b3868
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823B3868;
loc_823B3874:
	// addi r11,r21,1
	r11.s64 = r21.s64 + 1;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// srawi r7,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = r11.s32 >> 5;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// addze r3,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r3.s64 = temp.s64;
	// srawi r7,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = r11.s32 >> 5;
	// li r9,3
	ctx.r9.s64 = 3;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r7,r7,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// subfic r6,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r6.s64 = 32 - r11.s64;
	// slw r7,r27,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (r27.u32 << (r11.u8 & 0x3F));
	// not r5,r7
	ctx.r5.u64 = ~ctx.r7.u64;
loc_823B38A8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// and r31,r7,r5
	r31.u64 = ctx.r7.u64 & ctx.r5.u64;
	// stw r31,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, r31.u32);
	// srw r7,r7,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (r11.u8 & 0x3F));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,-160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// bne 0x823b38a8
	if (!cr0.eq) goto loc_823B38A8;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,-144
	r11.s64 = ctx.r1.s64 + -144;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_823B38E8:
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// blt cr6,0x823b38fc
	if (cr6.lt) goto loc_823B38FC;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// b 0x823b3900
	goto loc_823B3900;
loc_823B38FC:
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
loc_823B3900:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// bge 0x823b38e8
	if (!cr0.lt) goto loc_823B38E8;
	// mr r31,r22
	r31.u64 = r22.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x823b3aa0
	goto loc_823B3AA0;
loc_823B391C:
	// lwz r29,0(r20)
	r29.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// blt cr6,0x823b39ec
	if (cr6.lt) goto loc_823B39EC;
	// srawi r10,r21,5
	xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1F) != 0);
	ctx.r10.s64 = r21.s32 >> 5;
	// addi r11,r1,-152
	r11.s64 = ctx.r1.s64 + -152;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r31.s64 = temp.s64;
	// srawi r10,r21,5
	xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1F) != 0);
	ctx.r10.s64 = r21.s32 >> 5;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// stw r22,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r22.u32);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r22,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r22.u32);
	// lwz r11,-152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -152);
	// subf r10,r10,r21
	ctx.r10.s64 = r21.s64 - ctx.r10.s64;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r11,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, r11.u32);
	// slw r11,r6,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// subfic r6,r10,32
	xer.ca = ctx.r10.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r10.s64;
	// not r5,r11
	ctx.r5.u64 = ~r11.u64;
loc_823B3978:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// and r30,r11,r5
	r30.u64 = r11.u64 & ctx.r5.u64;
	// stw r30,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, r30.u32);
	// srw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r10.u8 & 0x3F));
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r11,-160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// slw r7,r11,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r6.u8 & 0x3F));
	// bne 0x823b3978
	if (!cr0.eq) goto loc_823B3978;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,-144
	r11.s64 = ctx.r1.s64 + -144;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_823B39B8:
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, r31.s32, xer);
	// blt cr6,0x823b39cc
	if (cr6.lt) goto loc_823B39CC;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// b 0x823b39d0
	goto loc_823B39D0;
loc_823B39CC:
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
loc_823B39D0:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// bge 0x823b39b8
	if (!cr0.lt) goto loc_823B39B8;
	// lwz r11,20(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 20);
	// add r31,r11,r29
	r31.u64 = r11.u64 + r29.u64;
	// b 0x823b3aa0
	goto loc_823B3AA0;
loc_823B39EC:
	// srawi r11,r21,5
	xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1F) != 0);
	r11.s64 = r21.s32 >> 5;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addze r3,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r3.s64 = temp.s64;
	// lwz r11,20(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 20);
	// srawi r10,r21,5
	xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1F) != 0);
	ctx.r10.s64 = r21.s32 >> 5;
	// add r31,r11,r30
	r31.u64 = r11.u64 + r30.u64;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r11.s64 = temp.s64;
	// lwz r10,-152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -152);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// subf r11,r11,r21
	r11.s64 = r21.s64 - r11.s64;
	// li r9,3
	ctx.r9.s64 = 3;
	// subfic r6,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r6.s64 = 32 - r11.s64;
	// stw r10,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r10.u32);
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r7,r7,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// not r5,r7
	ctx.r5.u64 = ~ctx.r7.u64;
loc_823B3A34:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// and r30,r7,r5
	r30.u64 = ctx.r7.u64 & ctx.r5.u64;
	// stw r30,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, r30.u32);
	// srw r7,r7,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (r11.u8 & 0x3F));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,-160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// bne 0x823b3a34
	if (!cr0.eq) goto loc_823B3A34;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,-144
	r11.s64 = ctx.r1.s64 + -144;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_823B3A74:
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// blt cr6,0x823b3a88
	if (cr6.lt) goto loc_823B3A88;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// b 0x823b3a8c
	goto loc_823B3A8C;
loc_823B3A88:
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
loc_823B3A8C:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// bge 0x823b3a74
	if (!cr0.lt) goto loc_823B3A74;
loc_823B3A9C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_823B3AA0:
	// subfic r11,r21,31
	xer.ca = r21.u32 <= 31;
	r11.s64 = 31 - r21.s64;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// bne cr6,0x823b3ab4
	if (!cr6.eq) goto loc_823B3AB4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_823B3AB4:
	// slw r9,r31,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// lwz r11,16(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 16);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -152);
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// bne cr6,0x823b3adc
	if (!cr6.eq) goto loc_823B3ADC;
	// lwz r11,-148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -148);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// b 0x823b3ae4
	goto loc_823B3AE4;
loc_823B3ADC:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// bne cr6,0x823b3ae8
	if (!cr6.eq) goto loc_823B3AE8;
loc_823B3AE4:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_823B3AE8:
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_823B3AEC"))) PPC_WEAK_FUNC(sub_823B3AEC);
PPC_FUNC_IMPL(__imp__sub_823B3AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B3AF0"))) PPC_WEAK_FUNC(sub_823B3AF0);
PPC_FUNC_IMPL(__imp__sub_823B3AF0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r27,16462
	r27.s64 = 16462;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// beq cr6,0x823b3cdc
	if (cr6.eq) goto loc_823B3CDC;
loc_823B3B24:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// rlwinm r11,r9,1,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// or r8,r5,r11
	ctx.r8.u64 = ctx.r5.u64 | r11.u64;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r10,r7
	r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// blt cr6,0x823b3bb0
	if (cr6.lt) goto loc_823B3BB0;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x823b3bb4
	if (!cr6.lt) goto loc_823B3BB4;
loc_823B3BB0:
	// li r6,1
	ctx.r6.s64 = 1;
loc_823B3BB4:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// beq cr6,0x823b3bf0
	if (cr6.eq) goto loc_823B3BF0;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x823b3bd8
	if (cr6.lt) goto loc_823B3BD8;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bge cr6,0x823b3bdc
	if (!cr6.lt) goto loc_823B3BDC;
loc_823B3BD8:
	// li r7,1
	ctx.r7.s64 = 1;
loc_823B3BDC:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x823b3bf0
	if (cr6.eq) goto loc_823B3BF0;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_823B3BF0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x823b3c10
	if (cr6.lt) goto loc_823B3C10;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bge cr6,0x823b3c14
	if (!cr6.lt) goto loc_823B3C14;
loc_823B3C10:
	// li r8,1
	ctx.r8.s64 = 1;
loc_823B3C14:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// beq cr6,0x823b3c2c
	if (cr6.eq) goto loc_823B3C2C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_823B3C2C:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// or r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 | ctx.r10.u64;
	// or r6,r5,r9
	ctx.r6.u64 = ctx.r5.u64 | ctx.r9.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// blt cr6,0x823b3c88
	if (cr6.lt) goto loc_823B3C88;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x823b3c8c
	if (!cr6.lt) goto loc_823B3C8C;
loc_823B3C88:
	// li r7,1
	ctx.r7.s64 = 1;
loc_823B3C8C:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// beq cr6,0x823b3cc8
	if (cr6.eq) goto loc_823B3CC8;
	// addi r11,r8,1
	r11.s64 = ctx.r8.s64 + 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x823b3cb0
	if (cr6.lt) goto loc_823B3CB0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bge cr6,0x823b3cb4
	if (!cr6.lt) goto loc_823B3CB4;
loc_823B3CB0:
	// li r10,1
	ctx.r10.s64 = 1;
loc_823B3CB4:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// beq cr6,0x823b3cc8
	if (cr6.eq) goto loc_823B3CC8;
	// addi r11,r6,1
	r11.s64 = ctx.r6.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_823B3CC8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bne 0x823b3b24
	if (!cr0.eq) goto loc_823B3B24;
	// b 0x823b3d18
	goto loc_823B3D18;
loc_823B3CDC:
	// clrlwi r9,r27,16
	ctx.r9.u64 = r27.u32 & 0xFFFF;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// rlwinm r8,r10,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r27,r9,16
	r27.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r9,r11,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r11,16,16,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
loc_823B3D18:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b3cdc
	if (cr6.eq) goto loc_823B3CDC;
	// b 0x823b3d68
	goto loc_823B3D68;
loc_823B3D24:
	// clrlwi r9,r27,16
	ctx.r9.u64 = r27.u32 & 0xFFFF;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// clrlwi r27,r9,16
	r27.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// or r11,r10,r9
	r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_823B3D68:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,16,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b3d24
	if (cr0.eq) goto loc_823B3D24;
	// sth r27,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r27.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823B3D80"))) PPC_WEAK_FUNC(sub_823B3D80);
PPC_FUNC_IMPL(__imp__sub_823B3D80) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r3.u64);
	// li r11,63
	r11.s64 = 63;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// stw r6,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r6.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// std r4,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r4.u64);
	// stw r5,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r5.u32);
	// stb r11,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, r11.u8);
	// li r11,251
	r11.s64 = 251;
	// stw r31,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, r31.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stb r11,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, r11.u8);
	// li r11,204
	r11.s64 = 204;
	// stb r11,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, r11.u8);
	// stb r11,139(r1)
	PPC_STORE_U8(ctx.r1.u32 + 139, r11.u8);
	// stb r11,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, r11.u8);
	// stb r11,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, r11.u8);
	// stb r11,142(r1)
	PPC_STORE_U8(ctx.r1.u32 + 142, r11.u8);
	// stb r11,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, r11.u8);
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r11.u8);
	// stb r11,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, r11.u8);
	// stb r11,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, r11.u8);
	// stb r11,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, r11.u8);
	// li r11,45
	r11.s64 = 45;
	// lhz r10,336(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 336);
	// clrlwi r6,r10,17
	ctx.r6.u64 = ctx.r10.u32 & 0x7FFF;
	// rlwinm. r9,r10,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bne 0x823b3e04
	if (!cr0.eq) goto loc_823B3E04;
	// li r11,32
	r11.s64 = 32;
loc_823B3E04:
	// lhz r10,342(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 342);
	// lhz r7,344(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 344);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// stb r11,2(r31)
	PPC_STORE_U8(r31.u32 + 2, r11.u8);
	// clrlwi. r11,r6,16
	r11.u64 = ctx.r6.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// or r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 | ctx.r10.u64;
	// lhz r10,338(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 338);
	// lhz r7,340(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 340);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// bne 0x823b3e74
	if (!cr0.eq) goto loc_823B3E74;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b3e74
	if (!cr6.eq) goto loc_823B3E74;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x823b3e74
	if (!cr6.eq) goto loc_823B3E74;
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r9,32768
	cr6.compare<uint32_t>(ctx.r9.u32, 32768, xer);
	// li r11,45
	r11.s64 = 45;
	// sth r22,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r22.u16);
	// beq cr6,0x823b3e58
	if (cr6.eq) goto loc_823B3E58;
	// li r11,32
	r11.s64 = 32;
loc_823B3E58:
	// stb r11,2(r31)
	PPC_STORE_U8(r31.u32 + 2, r11.u8);
	// stb r8,3(r31)
	PPC_STORE_U8(r31.u32 + 3, ctx.r8.u8);
loc_823B3E60:
	// li r10,48
	ctx.r10.s64 = 48;
	// stb r22,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r22.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r10.u8);
	// b 0x823b4ab4
	goto loc_823B4AB4;
loc_823B3E74:
	// cmplwi cr6,r11,32767
	cr6.compare<uint32_t>(r11.u32, 32767, xer);
	// lis r14,-32768
	r14.s64 = -2147483648;
	// bne cr6,0x823b3f60
	if (!cr6.eq) goto loc_823B3F60;
	// cmplw cr6,r10,r14
	cr6.compare<uint32_t>(ctx.r10.u32, r14.u32, xer);
	// sth r8,0(r31)
	PPC_STORE_U16(r31.u32 + 0, ctx.r8.u16);
	// bne cr6,0x823b3e94
	if (!cr6.eq) goto loc_823B3E94;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823b3ea8
	if (cr6.eq) goto loc_823B3EA8;
loc_823B3E94:
	// rlwinm. r11,r10,0,1,1
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b3ea8
	if (!cr0.eq) goto loc_823B3EA8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23320
	ctx.r5.s64 = r11.s64 + -23320;
	// b 0x823b3f24
	goto loc_823B3F24;
loc_823B3EA8:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823b3ed0
	if (cr6.eq) goto loc_823B3ED0;
	// lis r11,-16384
	r11.s64 = -1073741824;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x823b3ed0
	if (!cr6.eq) goto loc_823B3ED0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x823b3f1c
	if (!cr6.eq) goto loc_823B3F1C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23328
	ctx.r5.s64 = r11.s64 + -23328;
	// b 0x823b3ee8
	goto loc_823B3EE8;
loc_823B3ED0:
	// cmplw cr6,r10,r14
	cr6.compare<uint32_t>(ctx.r10.u32, r14.u32, xer);
	// bne cr6,0x823b3f1c
	if (!cr6.eq) goto loc_823B3F1C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x823b3f1c
	if (!cr6.eq) goto loc_823B3F1C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23336
	ctx.r5.s64 = r11.s64 + -23336;
loc_823B3EE8:
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8239d3a0
	sub_8239D3A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823b3f14
	if (cr0.eq) goto loc_823B3F14;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823a3f80
	sub_823A3F80(ctx, base);
loc_823B3F14:
	// li r11,5
	r11.s64 = 5;
	// b 0x823b3f54
	goto loc_823B3F54;
loc_823B3F1C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23344
	ctx.r5.s64 = r11.s64 + -23344;
loc_823B3F24:
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8239d3a0
	sub_8239D3A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823b3f50
	if (cr0.eq) goto loc_823B3F50;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823a3f80
	sub_823A3F80(ctx, base);
loc_823B3F50:
	// li r11,6
	r11.s64 = 6;
loc_823B3F54:
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,3(r31)
	PPC_STORE_U8(r31.u32 + 3, r11.u8);
	// b 0x823b4ab4
	goto loc_823B4AB4;
loc_823B3F60:
	// mulli r8,r11,19728
	ctx.r8.s64 = r11.s64 * 19728;
	// sth r10,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r10.u16);
	// rlwinm r7,r11,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFFFFFF;
	// sth r6,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r6.u16);
	// sth r5,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r5.u16);
	// rlwinm r9,r10,9,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FE;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// li r22,0
	r22.s64 = 0;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r11,r11,-19952
	r11.s64 = r11.s64 + -19952;
	// mulli r9,r9,77
	ctx.r9.s64 = ctx.r9.s64 * 77;
	// sth r22,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, r22.u16);
	// addi r23,r11,-96
	r23.s64 = r11.s64 + -96;
	// lis r11,0
	r11.s64 = 0;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r10,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// ori r20,r11,49154
	r20.u64 = r11.u64 | 49154;
	// addis r9,r9,-4931
	ctx.r9.s64 = ctx.r9.s64 + -323158016;
	// lis r11,0
	r11.s64 = 0;
	// addi r9,r9,-4852
	ctx.r9.s64 = ctx.r9.s64 + -4852;
	// ori r21,r11,65535
	r21.u64 = r11.u64 | 65535;
	// sth r8,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r8.u16);
	// lis r11,1
	r11.s64 = 65536;
	// srawi r10,r9,16
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 16;
	// ori r17,r11,32768
	r17.u64 = r11.u64 | 32768;
	// lis r11,0
	r11.s64 = 0;
	// rlwinm r9,r5,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// extsh r19,r10
	r19.s64 = ctx.r10.s16;
	// ori r18,r11,32768
	r18.u64 = r11.u64 | 32768;
	// mr r24,r19
	r24.u64 = r19.u64;
	// lis r11,32767
	r11.s64 = 2147418112;
	// sth r9,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r9.u16);
	// neg. r25,r24
	r25.s64 = -r24.s64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// li r15,-32768
	r15.s64 = -32768;
	// ori r16,r11,32768
	r16.u64 = r11.u64 | 32768;
	// beq 0x823b4410
	if (cr0.eq) goto loc_823B4410;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bge cr6,0x823b400c
	if (!cr6.lt) goto loc_823B400C;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// neg r25,r25
	r25.s64 = -r25.s64;
	// addi r11,r11,-19600
	r11.s64 = r11.s64 + -19600;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// addi r23,r11,-96
	r23.s64 = r11.s64 + -96;
loc_823B400C:
	// beq cr6,0x823b4410
	if (cr6.eq) goto loc_823B4410;
	// lwz r29,96(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r30,92(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_823B4018:
	// clrlwi. r11,r25,29
	r11.u64 = r25.u32 & 0x7;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r23,r23,84
	r23.s64 = r23.s64 + 84;
	// srawi r25,r25,3
	xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x7) != 0);
	r25.s64 = r25.s32 >> 3;
	// beq 0x823b4404
	if (cr0.eq) goto loc_823B4404;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r4,r11,r23
	ctx.r4.u64 = r11.u64 + r23.u64;
	// lhz r11,10(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(r11.u32, 32768, xer);
	// blt cr6,0x823b406c
	if (cr6.lt) goto loc_823B406C;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lhz r11,158(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 158);
	// lhz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 160);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// rotlwi r11,r11,16
	r11.u64 = __builtin_rotateleft32(r11.u32, 16);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// sth r11,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, r11.u16);
	// sth r10,158(r1)
	PPC_STORE_U16(ctx.r1.u32 + 158, ctx.r10.u16);
loc_823B406C:
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r22.u32);
	// mr r27,r22
	r27.u64 = r22.u64;
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r22.u32);
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r22.u32);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r11,88(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// xor r10,r11,r10
	ctx.r10.u64 = r11.u64 ^ ctx.r10.u64;
	// clrlwi r11,r11,17
	r11.u64 = r11.u32 & 0x7FFF;
	// rlwinm r26,r10,0,16,16
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	// clrlwi r10,r8,17
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFF;
	// cmplwi cr6,r11,32767
	cr6.compare<uint32_t>(r11.u32, 32767, xer);
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// clrlwi r28,r9,16
	r28.u64 = ctx.r9.u32 & 0xFFFF;
	// bge cr6,0x823b43e4
	if (!cr6.lt) goto loc_823B43E4;
	// cmplwi cr6,r10,32767
	cr6.compare<uint32_t>(ctx.r10.u32, 32767, xer);
	// bge cr6,0x823b43e4
	if (!cr6.lt) goto loc_823B43E4;
	// clrlwi r9,r28,16
	ctx.r9.u64 = r28.u32 & 0xFFFF;
	// cmplwi cr6,r9,49149
	cr6.compare<uint32_t>(ctx.r9.u32, 49149, xer);
	// bgt cr6,0x823b43e4
	if (cr6.gt) goto loc_823B43E4;
	// cmplwi cr6,r9,16319
	cr6.compare<uint32_t>(ctx.r9.u32, 16319, xer);
	// bgt cr6,0x823b40cc
	if (cr6.gt) goto loc_823B40CC;
loc_823B40C4:
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// b 0x823b43f4
	goto loc_823B43F4;
loc_823B40CC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b4100
	if (!cr6.eq) goto loc_823B4100;
	// addi r11,r9,1
	r11.s64 = ctx.r9.s64 + 1;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r28,r11,16
	r28.u64 = r11.u32 & 0xFFFF;
	// clrlwi. r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x823b4100
	if (!cr0.eq) goto loc_823B4100;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823b4100
	if (!cr6.eq) goto loc_823B4100;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x823b4100
	if (!cr6.eq) goto loc_823B4100;
	// sth r22,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r22.u16);
	// b 0x823b4404
	goto loc_823B4404;
loc_823B4100:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b4138
	if (!cr6.eq) goto loc_823B4138;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r28,r11,16
	r28.u64 = r11.u32 & 0xFFFF;
	// clrlwi. r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823b4138
	if (!cr0.eq) goto loc_823B4138;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b4138
	if (!cr6.eq) goto loc_823B4138;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b40c4
	if (cr6.eq) goto loc_823B40C4;
loc_823B4138:
	// mr r31,r22
	r31.u64 = r22.u64;
	// addi r8,r1,110
	ctx.r8.s64 = ctx.r1.s64 + 110;
	// li r3,5
	ctx.r3.s64 = 5;
loc_823B4144:
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x823b41b0
	if (!cr6.gt) goto loc_823B41B0;
	// addi r10,r1,98
	ctx.r10.s64 = ctx.r1.s64 + 98;
	// addi r5,r4,2
	ctx.r5.s64 = ctx.r4.s64 + 2;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - r11.s64;
loc_823B4160:
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// lhz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// lwz r11,2(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2);
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x823b4188
	if (cr6.lt) goto loc_823B4188;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x823b418c
	if (!cr6.lt) goto loc_823B418C;
loc_823B4188:
	// li r7,1
	ctx.r7.s64 = 1;
loc_823B418C:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stw r10,2(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2, ctx.r10.u32);
	// beq cr6,0x823b41a4
	if (cr6.eq) goto loc_823B41A4;
	// lhz r11,0(r8)
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, r11.u16);
loc_823B41A4:
	// addi r6,r6,-2
	ctx.r6.s64 = ctx.r6.s64 + -2;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bdnz 0x823b4160
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823B4160;
loc_823B41B0:
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bgt 0x823b4144
	if (cr0.gt) goto loc_823B4144;
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// add r11,r11,r20
	r11.u64 = r11.u64 + r20.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// extsh. r10,r11
	ctx.r10.s64 = r11.s16;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// ble 0x823b4224
	if (!cr0.gt) goto loc_823B4224;
loc_823B41D8:
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm. r9,r6,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x823b4224
	if (!cr0.eq) goto loc_823B4224;
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r8,r7,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r21
	r11.u64 = r11.u64 + r21.u64;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// or r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// extsh. r9,r11
	ctx.r9.s64 = r11.s16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt 0x823b41d8
	if (cr0.gt) goto loc_823B41D8;
loc_823B4224:
	// extsh. r9,r11
	ctx.r9.s64 = r11.s16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt 0x823b42c4
	if (cr0.gt) goto loc_823B42C4;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// add r11,r11,r21
	r11.u64 = r11.u64 + r21.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = r11.s16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge 0x823b42c4
	if (!cr0.lt) goto loc_823B42C4;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_823B4248:
	// lhz r9,114(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823b4258
	if (cr0.eq) goto loc_823B4258;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_823B4258:
	// clrlwi. r9,r6,31
	ctx.r9.u64 = ctx.r6.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// bne 0x823b4268
	if (!cr0.eq) goto loc_823B4268;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
loc_823B4268:
	// clrlwi. r9,r7,31
	ctx.r9.u64 = ctx.r7.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r9,r14
	ctx.r9.u64 = r14.u64;
	// bne 0x823b4278
	if (!cr0.eq) goto loc_823B4278;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
loc_823B4278:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r6,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// or r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// extsh. r9,r11
	ctx.r9.s64 = r11.s16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt 0x823b4248
	if (cr0.lt) goto loc_823B4248;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// beq cr6,0x823b42c4
	if (cr6.eq) goto loc_823B42C4;
	// lhz r10,114(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// sth r10,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r10.u16);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_823B42C4:
	// lhz r9,114(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// cmplwi cr6,r9,32768
	cr6.compare<uint32_t>(ctx.r9.u32, 32768, xer);
	// bgt cr6,0x823b42dc
	if (cr6.gt) goto loc_823B42DC;
	// clrlwi r10,r10,15
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFF;
	// cmplw cr6,r10,r17
	cr6.compare<uint32_t>(ctx.r10.u32, r17.u32, xer);
	// bne cr6,0x823b437c
	if (!cr6.eq) goto loc_823B437C;
loc_823B42DC:
	// lhz r10,110(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x823b436c
	if (!cr6.eq) goto loc_823B436C;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sth r10,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r10.u16);
	// lhz r10,106(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// sth r9,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r9.u16);
	// lhz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x823b4358
	if (!cr6.eq) goto loc_823B4358;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// lhz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// rlwinm r8,r9,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// sth r9,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r9.u16);
	// sth r8,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r8.u16);
	// bne cr6,0x823b434c
	if (!cr6.eq) goto loc_823B434C;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r18,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, r18.u16);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// b 0x823b437c
	goto loc_823B437C;
loc_823B434C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r10.u16);
	// b 0x823b437c
	goto loc_823B437C;
loc_823B4358:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sth r10,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r10.u16);
	// sth r9,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r9.u16);
	// b 0x823b437c
	goto loc_823B437C;
loc_823B436C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sth r10,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r10.u16);
	// sth r9,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r9.u16);
loc_823B437C:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32767
	cr6.compare<uint32_t>(r11.u32, 32767, xer);
	// blt cr6,0x823b43a0
	if (cr6.lt) goto loc_823B43A0;
	// clrlwi. r11,r26,16
	r11.u64 = r26.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r15,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r15.u32);
	// bne 0x823b4398
	if (!cr0.eq) goto loc_823B4398;
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r16.u32);
loc_823B4398:
	// lwz r31,372(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// b 0x823b43f4
	goto loc_823B43F4;
loc_823B43A0:
	// lhz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// clrlwi r10,r26,16
	ctx.r10.u64 = r26.u32 & 0xFFFF;
	// lwz r31,372(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// sth r9,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r9.u16);
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r29,96(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// sth r9,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r9.u16);
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r11.u16);
	// sth r10,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r10.u16);
	// lwz r30,92(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// sth r9,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r9.u16);
	// b 0x823b4404
	goto loc_823B4404;
loc_823B43E4:
	// clrlwi. r11,r26,16
	r11.u64 = r26.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r15,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r15.u32);
	// bne 0x823b43f4
	if (!cr0.eq) goto loc_823B43F4;
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r16.u32);
loc_823B43F4:
	// mr r29,r22
	r29.u64 = r22.u64;
	// mr r30,r22
	r30.u64 = r22.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
loc_823B4404:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bne cr6,0x823b4018
	if (!cr6.eq) goto loc_823B4018;
	// b 0x823b4418
	goto loc_823B4418;
loc_823B4410:
	// lwz r29,96(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r30,92(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_823B4418:
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi cr6,r9,16383
	cr6.compare<uint32_t>(ctx.r9.u32, 16383, xer);
	// blt cr6,0x823b47bc
	if (cr6.lt) goto loc_823B47BC;
	// addi r8,r24,1
	ctx.r8.s64 = r24.s64 + 1;
	// lhz r11,136(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 136);
	// clrlwi r10,r9,17
	ctx.r10.u64 = ctx.r9.u32 & 0x7FFF;
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r22.u32);
	// extsh r19,r8
	r19.s64 = ctx.r8.s16;
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r22.u32);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r22.u32);
	// xor r11,r11,r9
	r11.u64 = r11.u64 ^ ctx.r9.u64;
	// mr r27,r22
	r27.u64 = r22.u64;
	// rlwinm r26,r11,0,16,16
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	// clrlwi r11,r8,17
	r11.u64 = ctx.r8.u32 & 0x7FFF;
	// cmplwi cr6,r10,32767
	cr6.compare<uint32_t>(ctx.r10.u32, 32767, xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// clrlwi r28,r9,16
	r28.u64 = ctx.r9.u32 & 0xFFFF;
	// bge cr6,0x823b47a4
	if (!cr6.lt) goto loc_823B47A4;
	// cmplwi cr6,r11,32767
	cr6.compare<uint32_t>(r11.u32, 32767, xer);
	// bge cr6,0x823b47a4
	if (!cr6.lt) goto loc_823B47A4;
	// clrlwi r9,r28,16
	ctx.r9.u64 = r28.u32 & 0xFFFF;
	// cmplwi cr6,r9,49149
	cr6.compare<uint32_t>(ctx.r9.u32, 49149, xer);
	// bgt cr6,0x823b47a4
	if (cr6.gt) goto loc_823B47A4;
	// cmplwi cr6,r9,16319
	cr6.compare<uint32_t>(ctx.r9.u32, 16319, xer);
	// bgt cr6,0x823b4488
	if (cr6.gt) goto loc_823B4488;
loc_823B4480:
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// b 0x823b47b4
	goto loc_823B47B4;
loc_823B4488:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b44bc
	if (!cr6.eq) goto loc_823B44BC;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r28,r10,16
	r28.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi. r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x823b44bc
	if (!cr0.eq) goto loc_823B44BC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823b44bc
	if (!cr6.eq) goto loc_823B44BC;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x823b44bc
	if (!cr6.eq) goto loc_823B44BC;
	// sth r22,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r22.u16);
	// b 0x823b47bc
	goto loc_823B47BC;
loc_823B44BC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b44f4
	if (!cr6.eq) goto loc_823B44F4;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r28,r11,16
	r28.u64 = r11.u32 & 0xFFFF;
	// clrlwi. r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823b44f4
	if (!cr0.eq) goto loc_823B44F4;
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b44f4
	if (!cr6.eq) goto loc_823B44F4;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b4480
	if (cr6.eq) goto loc_823B4480;
loc_823B44F4:
	// mr r31,r22
	r31.u64 = r22.u64;
	// addi r8,r1,126
	ctx.r8.s64 = ctx.r1.s64 + 126;
	// li r4,5
	ctx.r4.s64 = 5;
loc_823B4500:
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x823b4570
	if (!cr6.gt) goto loc_823B4570;
	// addi r10,r1,98
	ctx.r10.s64 = ctx.r1.s64 + 98;
	// addi r5,r1,138
	ctx.r5.s64 = ctx.r1.s64 + 138;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - r11.s64;
loc_823B451C:
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// lhz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// lwz r11,2(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2);
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x823b4544
	if (cr6.lt) goto loc_823B4544;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x823b4548
	if (!cr6.lt) goto loc_823B4548;
loc_823B4544:
	// li r7,1
	ctx.r7.s64 = 1;
loc_823B4548:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stw r10,2(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2, ctx.r10.u32);
	// beq cr6,0x823b4560
	if (cr6.eq) goto loc_823B4560;
	// lhz r11,0(r8)
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, r11.u16);
loc_823B4560:
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r6,r6,-2
	ctx.r6.s64 = ctx.r6.s64 + -2;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bgt 0x823b451c
	if (cr0.gt) goto loc_823B451C;
loc_823B4570:
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bgt 0x823b4500
	if (cr0.gt) goto loc_823B4500;
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// add r11,r11,r20
	r11.u64 = r11.u64 + r20.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// extsh. r10,r11
	ctx.r10.s64 = r11.s16;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// ble 0x823b45e4
	if (!cr0.gt) goto loc_823B45E4;
loc_823B4598:
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm. r9,r6,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x823b45e4
	if (!cr0.eq) goto loc_823B45E4;
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r8,r7,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r21
	r11.u64 = r11.u64 + r21.u64;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// or r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// extsh. r9,r11
	ctx.r9.s64 = r11.s16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt 0x823b4598
	if (cr0.gt) goto loc_823B4598;
loc_823B45E4:
	// extsh. r9,r11
	ctx.r9.s64 = r11.s16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt 0x823b4684
	if (cr0.gt) goto loc_823B4684;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// add r11,r11,r21
	r11.u64 = r11.u64 + r21.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = r11.s16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge 0x823b4684
	if (!cr0.lt) goto loc_823B4684;
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_823B4608:
	// lhz r9,130(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 130);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823b4618
	if (cr0.eq) goto loc_823B4618;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_823B4618:
	// clrlwi. r9,r6,31
	ctx.r9.u64 = ctx.r6.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// bne 0x823b4628
	if (!cr0.eq) goto loc_823B4628;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
loc_823B4628:
	// clrlwi. r9,r7,31
	ctx.r9.u64 = ctx.r7.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r9,r14
	ctx.r9.u64 = r14.u64;
	// bne 0x823b4638
	if (!cr0.eq) goto loc_823B4638;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
loc_823B4638:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r6,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// or r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// extsh. r9,r11
	ctx.r9.s64 = r11.s16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt 0x823b4608
	if (cr0.lt) goto loc_823B4608;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// beq cr6,0x823b4684
	if (cr6.eq) goto loc_823B4684;
	// lhz r10,130(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 130);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// sth r10,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, ctx.r10.u16);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_823B4684:
	// lhz r9,130(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 130);
	// cmplwi cr6,r9,32768
	cr6.compare<uint32_t>(ctx.r9.u32, 32768, xer);
	// bgt cr6,0x823b469c
	if (cr6.gt) goto loc_823B469C;
	// clrlwi r10,r10,15
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFF;
	// cmplw cr6,r10,r17
	cr6.compare<uint32_t>(ctx.r10.u32, r17.u32, xer);
	// bne cr6,0x823b473c
	if (!cr6.eq) goto loc_823B473C;
loc_823B469C:
	// lhz r10,126(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 126);
	// lhz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x823b472c
	if (!cr6.eq) goto loc_823B472C;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sth r10,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r10.u16);
	// lhz r10,122(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 122);
	// sth r9,126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 126, ctx.r9.u16);
	// lhz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 124);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x823b4718
	if (!cr6.eq) goto loc_823B4718;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// lhz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// rlwinm r8,r9,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// sth r9,124(r1)
	PPC_STORE_U16(ctx.r1.u32 + 124, ctx.r9.u16);
	// sth r8,122(r1)
	PPC_STORE_U16(ctx.r1.u32 + 122, ctx.r8.u16);
	// bne cr6,0x823b470c
	if (!cr6.eq) goto loc_823B470C;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r18,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, r18.u16);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// b 0x823b473c
	goto loc_823B473C;
loc_823B470C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r10.u16);
	// b 0x823b473c
	goto loc_823B473C;
loc_823B4718:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sth r10,124(r1)
	PPC_STORE_U16(ctx.r1.u32 + 124, ctx.r10.u16);
	// sth r9,122(r1)
	PPC_STORE_U16(ctx.r1.u32 + 122, ctx.r9.u16);
	// b 0x823b473c
	goto loc_823B473C;
loc_823B472C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sth r10,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r10.u16);
	// sth r9,126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 126, ctx.r9.u16);
loc_823B473C:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32767
	cr6.compare<uint32_t>(r11.u32, 32767, xer);
	// blt cr6,0x823b4760
	if (cr6.lt) goto loc_823B4760;
	// clrlwi. r11,r26,16
	r11.u64 = r26.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r15,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r15.u32);
	// bne 0x823b4758
	if (!cr0.eq) goto loc_823B4758;
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r16.u32);
loc_823B4758:
	// lwz r31,372(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// b 0x823b47b4
	goto loc_823B47B4;
loc_823B4760:
	// lhz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// clrlwi r10,r26,16
	ctx.r10.u64 = r26.u32 & 0xFFFF;
	// lwz r31,372(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// sth r9,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r9.u16);
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r29,96(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// sth r9,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r9.u16);
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r11.u16);
	// sth r10,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r10.u16);
	// lwz r30,92(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// sth r9,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r9.u16);
	// b 0x823b47bc
	goto loc_823B47BC;
loc_823B47A4:
	// clrlwi. r11,r26,16
	r11.u64 = r26.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r15,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r15.u32);
	// bne 0x823b47b4
	if (!cr0.eq) goto loc_823B47B4;
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r16.u32);
loc_823B47B4:
	// mr r29,r22
	r29.u64 = r22.u64;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_823B47BC:
	// lwz r11,364(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// sth r19,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r19.u16);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b4808
	if (cr0.eq) goto loc_823B4808;
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// extsh r11,r19
	r11.s64 = r19.s16;
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, r11.u32);
	// bgt 0x823b480c
	if (cr0.gt) goto loc_823B480C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r22,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r22.u16);
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(r11.u32, 32768, xer);
	// li r11,45
	r11.s64 = 45;
	// beq cr6,0x823b47f8
	if (cr6.eq) goto loc_823B47F8;
	// li r11,32
	r11.s64 = 32;
loc_823B47F8:
	// stb r11,2(r31)
	PPC_STORE_U8(r31.u32 + 2, r11.u8);
	// li r11,1
	r11.s64 = 1;
	// stb r11,3(r31)
	PPC_STORE_U8(r31.u32 + 3, r11.u8);
	// b 0x823b3e60
	goto loc_823B3E60;
loc_823B4808:
	// lwz r11,356(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
loc_823B480C:
	// cmpwi cr6,r11,21
	cr6.compare<int32_t>(r11.s32, 21, xer);
	// ble cr6,0x823b481c
	if (!cr6.gt) goto loc_823B481C;
	// li r11,21
	r11.s64 = 21;
	// stw r11,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, r11.u32);
loc_823B481C:
	// lhz r11,88(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// sth r22,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r22.u16);
	// addi r8,r11,-16382
	ctx.r8.s64 = r11.s64 + -16382;
	// lwz r31,88(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,8
	r11.s64 = 8;
loc_823B4830:
	// rlwinm r10,r29,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0x1;
	// rlwinm r9,r30,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0x1;
	// rlwinm r7,r30,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r31,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r29,r29,1,0,30
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// or r30,r7,r10
	r30.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r31,r6,r9
	r31.u64 = ctx.r6.u64 | ctx.r9.u64;
	// bne 0x823b4830
	if (!cr0.eq) goto loc_823B4830;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// bge cr6,0x823b48bc
	if (!cr6.lt) goto loc_823B48BC;
	// neg r11,r8
	r11.s64 = -ctx.r8.s64;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823b48bc
	if (!cr0.gt) goto loc_823B48BC;
loc_823B4874:
	// clrlwi. r10,r31,31
	ctx.r10.u64 = r31.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r9,r14
	ctx.r9.u64 = r14.u64;
	// bne 0x823b4884
	if (!cr0.eq) goto loc_823B4884;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
loc_823B4884:
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// bne 0x823b4894
	if (!cr0.eq) goto loc_823B4894;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_823B4894:
	// rlwinm r8,r30,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r29,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r31,r31,31,1,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// or r30,r8,r9
	r30.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r29,r7,r10
	r29.u64 = ctx.r7.u64 | ctx.r10.u64;
	// bgt 0x823b4874
	if (cr0.gt) goto loc_823B4874;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
loc_823B48BC:
	// lwz r11,372(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r26,r11,4
	r26.s64 = r11.s64 + 4;
	// lwz r11,356(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addic. r28,r11,1
	xer.ca = r11.u32 > 4294967294;
	r28.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// mr r27,r26
	r27.u64 = r26.u64;
	// ble 0x823b49d0
	if (!cr0.gt) goto loc_823B49D0;
	// b 0x823b48dc
	goto loc_823B48DC;
loc_823B48D8:
	// lwz r31,88(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_823B48DC:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// rlwinm r6,r30,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r29,1,0,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r10,r29,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0x1;
	// rlwinm r8,r30,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0x1;
	// rlwinm r4,r31,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 | ctx.r8.u64;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 + r11.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// or r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 | ctx.r6.u64;
	// blt cr6,0x823b493c
	if (cr6.lt) goto loc_823B493C;
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// bge cr6,0x823b4968
	if (!cr6.lt) goto loc_823B4968;
loc_823B493C:
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x823b4954
	if (cr6.lt) goto loc_823B4954;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bge cr6,0x823b4958
	if (!cr6.lt) goto loc_823B4958;
loc_823B4954:
	// li r8,1
	ctx.r8.s64 = 1;
loc_823B4958:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823b4968
	if (cr6.eq) goto loc_823B4968;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_823B4968:
	// lwz r8,156(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// add r11,r8,r10
	r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x823b4980
	if (cr6.lt) goto loc_823B4980;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x823b4984
	if (!cr6.lt) goto loc_823B4984;
loc_823B4980:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_823B4984:
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r9,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r7,r10
	r11.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r30,r6,r8
	r30.u64 = ctx.r6.u64 | ctx.r8.u64;
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lbz r11,88(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// stb r22,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r22.u8);
	// stb r11,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r11.u8);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// bgt 0x823b48d8
	if (cr0.gt) goto loc_823B48D8;
loc_823B49D0:
	// addi r11,r27,-1
	r11.s64 = r27.s64 + -1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,53
	cr6.compare<int32_t>(ctx.r10.s32, 53, xer);
	// blt cr6,0x823b4a48
	if (cr6.lt) goto loc_823B4A48;
	// b 0x823b4a04
	goto loc_823B4A04;
loc_823B49EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,57
	cr6.compare<uint32_t>(ctx.r10.u32, 57, xer);
	// bne cr6,0x823b4a0c
	if (!cr6.eq) goto loc_823B4A0C;
	// li r10,48
	ctx.r10.s64 = 48;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_823B4A04:
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bge cr6,0x823b49ec
	if (!cr6.lt) goto loc_823B49EC;
loc_823B4A0C:
	// lwz r9,372(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bge cr6,0x823b4a28
	if (!cr6.lt) goto loc_823B4A28;
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r10.u16);
loc_823B4A28:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// b 0x823b4a98
	goto loc_823B4A98;
loc_823B4A38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,48
	cr6.compare<uint32_t>(ctx.r10.u32, 48, xer);
	// bne cr6,0x823b4a50
	if (!cr6.eq) goto loc_823B4A50;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_823B4A48:
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bge cr6,0x823b4a38
	if (!cr6.lt) goto loc_823B4A38;
loc_823B4A50:
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bge cr6,0x823b4a94
	if (!cr6.lt) goto loc_823B4A94;
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(r11.u32, 32768, xer);
	// li r11,45
	r11.s64 = 45;
	// sth r22,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r22.u16);
	// beq cr6,0x823b4a74
	if (cr6.eq) goto loc_823B4A74;
	// li r11,32
	r11.s64 = 32;
loc_823B4A74:
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, r11.u8);
	// li r9,48
	ctx.r9.s64 = 48;
	// li r11,1
	r11.s64 = 1;
	// stb r22,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, r22.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r9,0(r26)
	PPC_STORE_U8(r26.u32 + 0, ctx.r9.u8);
	// stb r11,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, r11.u8);
	// b 0x823b4ab4
	goto loc_823B4AB4;
loc_823B4A94:
	// lwz r9,372(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
loc_823B4A98:
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-3
	r11.s64 = r11.s64 + -3;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// stb r11,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, r11.u8);
	// stb r22,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, r22.u8);
loc_823B4AB4:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_823B4ABC"))) PPC_WEAK_FUNC(sub_823B4ABC);
PPC_FUNC_IMPL(__imp__sub_823B4ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B4AC0"))) PPC_WEAK_FUNC(sub_823B4AC0);
PPC_FUNC_IMPL(__imp__sub_823B4AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r11,r11,-19248
	r11.s64 = r11.s64 + -19248;
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// stw r4,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r4.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4AD8"))) PPC_WEAK_FUNC(sub_823B4AD8);
PPC_FUNC_IMPL(__imp__sub_823B4AD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi. r10,r3,30
	ctx.r10.u64 = ctx.r3.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x823b4b10
	if (cr0.eq) goto loc_823B4B10;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x823b4af4
	if (!cr6.eq) goto loc_823B4AF4;
	// li r11,768
	r11.s64 = 768;
	// b 0x823b4b10
	goto loc_823B4B10;
loc_823B4AF4:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x823b4b04
	if (!cr6.eq) goto loc_823B4B04;
	// li r11,512
	r11.s64 = 512;
	// b 0x823b4b10
	goto loc_823B4B10;
loc_823B4B04:
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x823b4b10
	if (!cr6.eq) goto loc_823B4B10;
	// li r11,256
	r11.s64 = 256;
loc_823B4B10:
	// rlwinm. r10,r3,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b4b1c
	if (cr0.eq) goto loc_823B4B1C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
loc_823B4B1C:
	// rlwinm. r10,r3,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b4b28
	if (cr0.eq) goto loc_823B4B28;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
loc_823B4B28:
	// rlwinm. r10,r3,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b4b34
	if (cr0.eq) goto loc_823B4B34;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
loc_823B4B34:
	// rlwinm. r10,r3,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b4b40
	if (cr0.eq) goto loc_823B4B40;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
loc_823B4B40:
	// rlwinm. r10,r3,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b4b4c
	if (cr0.eq) goto loc_823B4B4C;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
loc_823B4B4C:
	// oris r3,r11,8
	ctx.r3.u64 = r11.u64 | 524288;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4B54"))) PPC_WEAK_FUNC(sub_823B4B54);
PPC_FUNC_IMPL(__imp__sub_823B4B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B4B58"))) PPC_WEAK_FUNC(sub_823B4B58);
PPC_FUNC_IMPL(__imp__sub_823B4B58) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r8,r4,0,22,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x300;
	// rlwinm r9,r4,0,24,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm. r11,r10,0,22,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x300;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b4bac
	if (cr0.eq) goto loc_823B4BAC;
	// cmplwi cr6,r11,768
	cr6.compare<uint32_t>(r11.u32, 768, xer);
	// bne cr6,0x823b4b90
	if (!cr6.eq) goto loc_823B4B90;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823b4bac
	goto loc_823B4BAC;
loc_823B4B90:
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(r11.u32, 512, xer);
	// bne cr6,0x823b4ba0
	if (!cr6.eq) goto loc_823B4BA0;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x823b4bac
	goto loc_823B4BAC;
loc_823B4BA0:
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// bne cr6,0x823b4bac
	if (!cr6.eq) goto loc_823B4BAC;
	// li r3,3
	ctx.r3.s64 = 3;
loc_823B4BAC:
	// clrlwi. r11,r10,31
	r11.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b4bb8
	if (cr0.eq) goto loc_823B4BB8;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
loc_823B4BB8:
	// rlwinm. r11,r10,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b4bc4
	if (cr0.eq) goto loc_823B4BC4;
	// ori r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 | 32;
loc_823B4BC4:
	// rlwinm. r11,r10,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b4bd0
	if (cr0.eq) goto loc_823B4BD0;
	// ori r3,r3,64
	ctx.r3.u64 = ctx.r3.u64 | 64;
loc_823B4BD0:
	// rlwinm. r11,r10,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b4bdc
	if (cr0.eq) goto loc_823B4BDC;
	// ori r3,r3,16
	ctx.r3.u64 = ctx.r3.u64 | 16;
loc_823B4BDC:
	// rlwinm. r11,r10,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b4be8
	if (cr0.eq) goto loc_823B4BE8;
	// ori r3,r3,128
	ctx.r3.u64 = ctx.r3.u64 | 128;
loc_823B4BE8:
	// rlwinm. r10,r9,0,22,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x300;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x823b4c20
	if (cr0.eq) goto loc_823B4C20;
	// cmplwi cr6,r10,768
	cr6.compare<uint32_t>(ctx.r10.u32, 768, xer);
	// bne cr6,0x823b4c04
	if (!cr6.eq) goto loc_823B4C04;
	// li r11,1
	r11.s64 = 1;
	// b 0x823b4c20
	goto loc_823B4C20;
loc_823B4C04:
	// cmplwi cr6,r10,512
	cr6.compare<uint32_t>(ctx.r10.u32, 512, xer);
	// bne cr6,0x823b4c14
	if (!cr6.eq) goto loc_823B4C14;
	// li r11,2
	r11.s64 = 2;
	// b 0x823b4c20
	goto loc_823B4C20;
loc_823B4C14:
	// cmplwi cr6,r10,256
	cr6.compare<uint32_t>(ctx.r10.u32, 256, xer);
	// bne cr6,0x823b4c20
	if (!cr6.eq) goto loc_823B4C20;
	// li r11,3
	r11.s64 = 3;
loc_823B4C20:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b4c2c
	if (cr0.eq) goto loc_823B4C2C;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
loc_823B4C2C:
	// rlwinm. r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b4c38
	if (cr0.eq) goto loc_823B4C38;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
loc_823B4C38:
	// rlwinm. r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b4c44
	if (cr0.eq) goto loc_823B4C44;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
loc_823B4C44:
	// rlwinm. r10,r9,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b4c50
	if (cr0.eq) goto loc_823B4C50;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
loc_823B4C50:
	// rlwinm. r10,r9,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b4c5c
	if (cr0.eq) goto loc_823B4C5C;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
loc_823B4C5C:
	// rlwinm r10,r8,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// or r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 | r11.u64;
	// bl 0x823b2710
	sub_823B2710(ctx, base);
	// bl 0x823b4ad8
	sub_823B4AD8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823b2710
	sub_823B2710(ctx, base);
	// bl 0x823b4ad8
	sub_823B4AD8(ctx, base);
	// clrlwi r11,r3,12
	r11.u64 = ctx.r3.u32 & 0xFFFFF;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// rlwinm r11,r11,0,27,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFF8001F;
	// ori r10,r10,31
	ctx.r10.u64 = ctx.r10.u64 | 31;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823b4ca0
	if (!cr6.eq) goto loc_823B4CA0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B4CA0:
	// bl 0x826e4bfc
	__imp__KeEnableFpuExceptions(ctx, base);
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

__attribute__((alias("__imp__sub_823B4CBC"))) PPC_WEAK_FUNC(sub_823B4CBC);
PPC_FUNC_IMPL(__imp__sub_823B4CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B4CC0"))) PPC_WEAK_FUNC(sub_823B4CC0);
PPC_FUNC_IMPL(__imp__sub_823B4CC0) {
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
	// lis r4,-8
	ctx.r4.s64 = -524288;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,1792
	ctx.r4.u64 = ctx.r4.u64 | 1792;
	// bl 0x823b2710
	sub_823B2710(ctx, base);
	// bl 0x823b4ad8
	sub_823B4AD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4CF0"))) PPC_WEAK_FUNC(sub_823B4CF0);
PPC_FUNC_IMPL(__imp__sub_823B4CF0) {
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
	// lis r4,-8
	ctx.r4.s64 = -524288;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,1792
	ctx.r4.u64 = ctx.r4.u64 | 1792;
	// bl 0x823b2710
	sub_823B2710(ctx, base);
	// bl 0x823b4ad8
	sub_823B4AD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4D20"))) PPC_WEAK_FUNC(sub_823B4D20);
PPC_FUNC_IMPL(__imp__sub_823B4D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823B4D24:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x823b4d24
	if (!cr0.eq) goto loc_823B4D24;
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4D44"))) PPC_WEAK_FUNC(sub_823B4D44);
PPC_FUNC_IMPL(__imp__sub_823B4D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B4D48"))) PPC_WEAK_FUNC(sub_823B4D48);
PPC_FUNC_IMPL(__imp__sub_823B4D48) {
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
	// rlwinm. r11,r31,0,0,0
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b4dc0
	if (cr0.eq) goto loc_823B4DC0;
	// rlwinm. r11,r31,0,4,7
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xF000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b4d74
	if (!cr0.eq) goto loc_823B4D74;
	// li r11,3
	r11.s64 = 3;
	// rlwimi r31,r11,26,4,7
	r31.u64 = (__builtin_rotateleft32(r11.u32, 26) & 0xF000000) | (r31.u64 & 0xFFFFFFFFF0FFFFFF);
loc_823B4D74:
	// rlwinm r10,r31,8,28,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xF;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// rlwinm r8,r31,6,28,29
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 6) & 0xC;
	// addi r11,r11,-19228
	r11.s64 = r11.s64 + -19228;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// slw r5,r9,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// bl 0x823b4e10
	sub_823B4E10(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x823b4dd0
	if (cr0.eq) goto loc_823B4DD0;
	// rlwinm. r11,r31,0,1,1
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b4dd0
	if (cr0.eq) goto loc_823B4DD0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// b 0x823b4dd0
	goto loc_823B4DD0;
loc_823B4DC0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r3,r31,8,25,25
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0x40;
	// bl 0x823ba0e8
	sub_823BA0E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_823B4DD0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823B4DDC"))) PPC_WEAK_FUNC(sub_823B4DDC);
PPC_FUNC_IMPL(__imp__sub_823B4DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B4DE0"))) PPC_WEAK_FUNC(sub_823B4DE0);
PPC_FUNC_IMPL(__imp__sub_823B4DE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm. r11,r4,0,0,0
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b4df4
	if (cr0.eq) goto loc_823B4DF4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x823b4ea0
	sub_823B4EA0(ctx, base);
	return;
loc_823B4DF4:
	// b 0x823ba130
	sub_823BA130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B4DF8"))) PPC_WEAK_FUNC(sub_823B4DF8);
PPC_FUNC_IMPL(__imp__sub_823B4DF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4DFC"))) PPC_WEAK_FUNC(sub_823B4DFC);
PPC_FUNC_IMPL(__imp__sub_823B4DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B4E00"))) PPC_WEAK_FUNC(sub_823B4E00);
PPC_FUNC_IMPL(__imp__sub_823B4E00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// rlwinm. r11,r4,0,0,0
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b4e0c
	if (cr0.eq) goto loc_823B4E0C;
	// b 0x823b4e98
	sub_823B4E98(ctx, base);
	return;
loc_823B4E0C:
	// b 0x823ba178
	sub_823BA178(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B4E10"))) PPC_WEAK_FUNC(sub_823B4E10);
PPC_FUNC_IMPL(__imp__sub_823B4E10) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r11,17924(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17924);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823b4e3c
	if (cr6.eq) goto loc_823B4E3C;
	// rlwinm r5,r5,0,3,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
loc_823B4E3C:
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x823b4e58
	if (cr6.eq) goto loc_823B4E58;
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x823b4e60
	goto loc_823B4E60;
loc_823B4E58:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
loc_823B4E60:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826e4c0c
	__imp__MmAllocatePhysicalMemoryEx(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x823b4e7c
	if (!cr0.eq) goto loc_823B4E7C;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x823b9af0
	sub_823B9AF0(ctx, base);
loc_823B4E7C:
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

__attribute__((alias("__imp__sub_823B4E94"))) PPC_WEAK_FUNC(sub_823B4E94);
PPC_FUNC_IMPL(__imp__sub_823B4E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B4E98"))) PPC_WEAK_FUNC(sub_823B4E98);
PPC_FUNC_IMPL(__imp__sub_823B4E98) {
	PPC_FUNC_PROLOGUE();
	// b 0x826e4c1c
	__imp__MmQueryAllocationSize(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B4E9C"))) PPC_WEAK_FUNC(sub_823B4E9C);
PPC_FUNC_IMPL(__imp__sub_823B4E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B4EA0"))) PPC_WEAK_FUNC(sub_823B4EA0);
PPC_FUNC_IMPL(__imp__sub_823B4EA0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826e4c2c
	__imp__MmFreePhysicalMemory(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B4EAC"))) PPC_WEAK_FUNC(sub_823B4EAC);
PPC_FUNC_IMPL(__imp__sub_823B4EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B4EB0"))) PPC_WEAK_FUNC(sub_823B4EB0);
PPC_FUNC_IMPL(__imp__sub_823B4EB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x826e4c3c
	__imp__MmQueryAddressProtect(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B4EB4"))) PPC_WEAK_FUNC(sub_823B4EB4);
PPC_FUNC_IMPL(__imp__sub_823B4EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B4EB8"))) PPC_WEAK_FUNC(sub_823B4EB8);
PPC_FUNC_IMPL(__imp__sub_823B4EB8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// addi r11,r1,108
	r11.s64 = ctx.r1.s64 + 108;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// bl 0x826e4c5c
	__imp__NtCreateEvent(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823b4f68
	if (cr0.lt) goto loc_823B4F68;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r7,r1,204
	ctx.r7.s64 = ctx.r1.s64 + 204;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x826e498c
	__imp__XamShowMessageBoxUIEx(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// bne cr6,0x823b4f60
	if (!cr6.eq) goto loc_823B4F60;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823b6660
	sub_823B6660(ctx, base);
loc_823B4F60:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x826e4c4c
	__imp__NtClose(ctx, base);
loc_823B4F68:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823B4F70"))) PPC_WEAK_FUNC(sub_823B4F70);
PPC_FUNC_IMPL(__imp__sub_823B4F70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,-23312
	r11.s64 = r11.s64 + -23312;
loc_823B4F80:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplw cr6,r6,r3
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, xer);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bne cr6,0x823b4fd8
	if (!cr6.eq) goto loc_823B4FD8;
	// clrlwi. r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x823b4fc8
	if (cr0.eq) goto loc_823B4FC8;
	// addi r7,r5,-1
	ctx.r7.s64 = ctx.r5.s64 + -1;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_823B4FA4:
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x823b4fc8
	if (!cr6.lt) goto loc_823B4FC8;
	// lhz r31,0(r11)
	r31.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// sth r31,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, r31.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// blt cr6,0x823b4fa4
	if (cr6.lt) goto loc_823B4FA4;
loc_823B4FC8:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// sthx r9,r10,r4
	PPC_STORE_U16(ctx.r10.u32 + ctx.r4.u32, ctx.r9.u16);
	// b 0x823b4fe0
	goto loc_823B4FE0;
loc_823B4FD8:
	// rlwinm r10,r10,1,15,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_823B4FE0:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r3
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, xer);
	// ble cr6,0x823b4f80
	if (!cr6.gt) goto loc_823B4F80;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4FF4"))) PPC_WEAK_FUNC(sub_823B4FF4);
PPC_FUNC_IMPL(__imp__sub_823B4FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B4FF8"))) PPC_WEAK_FUNC(sub_823B4FF8);
PPC_FUNC_IMPL(__imp__sub_823B4FF8) {
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
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// li r3,10
	ctx.r3.s64 = 10;
	// mr r31,r30
	r31.u64 = r30.u64;
	// bl 0x826e4c7c
	__imp__XexCheckExecutablePrivilege(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823b51bc
	if (cr0.eq) goto loc_823B51BC;
	// bl 0x826e49ac
	__imp__XGetAVPack(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// beq cr6,0x823b51bc
	if (cr6.eq) goto loc_823B51BC;
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// beq cr6,0x823b51bc
	if (cr6.eq) goto loc_823B51BC;
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// beq cr6,0x823b51bc
	if (cr6.eq) goto loc_823B51BC;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// beq cr6,0x823b51bc
	if (cr6.eq) goto loc_823B51BC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x826e4c6c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823b51bc
	if (!cr0.eq) goto loc_823B51BC;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,0,16,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r11,768
	cr6.compare<uint32_t>(r11.u32, 768, xer);
	// bne cr6,0x823b51bc
	if (!cr6.eq) goto loc_823B51BC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,10
	ctx.r4.s64 = 10;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x826e4c6c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823b51bc
	if (!cr0.eq) goto loc_823B51BC;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823b50ac
	if (!cr0.eq) goto loc_823B50AC;
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b51bc
	if (!cr0.eq) goto loc_823B51BC;
loc_823B50AC:
	// bl 0x826e499c
	__imp__XGetLanguage(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,510
	ctx.r5.s64 = 510;
	// sth r30,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, r30.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,258
	ctx.r3.s64 = ctx.r1.s64 + 258;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r30,192(r1)
	PPC_STORE_U16(ctx.r1.u32 + 192, r30.u16);
	// addi r3,r1,194
	ctx.r3.s64 = ctx.r1.s64 + 194;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r30.u32);
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(r31.u32, 10, xer);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r30.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r11,13
	r11.s64 = 13;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// li r11,11
	r11.s64 = 11;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r11,10
	r11.s64 = 10;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// li r11,16
	r11.s64 = 16;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r11,12
	r11.s64 = 12;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// li r11,14
	r11.s64 = 14;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r11,17
	r11.s64 = 17;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// li r11,15
	r11.s64 = 15;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// li r11,2
	r11.s64 = 2;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r11.u32);
	// li r11,7
	r11.s64 = 7;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// li r11,3
	r11.s64 = 3;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// li r11,5
	r11.s64 = 5;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r11.u32);
	// li r11,8
	r11.s64 = 8;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r11.u32);
	// li r11,6
	r11.s64 = 6;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r11.u32);
	// blt cr6,0x823b517c
	if (cr6.lt) goto loc_823B517C;
	// li r31,1
	r31.s64 = 1;
loc_823B517C:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x823b4f70
	sub_823B4F70(ctx, base);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x823b4f70
	sub_823B4F70(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x823b4eb8
	sub_823B4EB8(ctx, base);
	// li r31,1
	r31.s64 = 1;
loc_823B51BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
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

__attribute__((alias("__imp__sub_823B51D8"))) PPC_WEAK_FUNC(sub_823B51D8);
PPC_FUNC_IMPL(__imp__sub_823B51D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r19,19276(r14)
	r19.u64 = PPC_LOAD_U32(r14.u32 + 19276);
	// lwz r16,-14208(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14208);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-496
	r31.s64 = ctx.r1.s64 + -496;
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,15148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15148, r11.u32);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// stw r11,15152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15152, r11.u32);
	// bl 0x823ba3e0
	sub_823BA3E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823b9af8
	sub_823B9AF8(ctx, base);
	// bl 0x823b4ff8
	sub_823B4FF8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823b5230
	if (cr0.eq) goto loc_823B5230;
	// bl 0x826e49bc
	__imp__XamLoaderTerminateTitle(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_823B5230:
	// bl 0x823a2bf0
	sub_823A2BF0(ctx, base);
	// bl 0x823ba290
	sub_823BA290(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823ba1b0
	sub_823BA1B0(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,17932(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17932);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823b5368
	if (cr6.eq) goto loc_823B5368;
	// addi r30,r31,112
	r30.s64 = r31.s64 + 112;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// li r29,0
	r29.s64 = 0;
	// mr r28,r29
	r28.u64 = r29.u64;
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// bl 0x823b5948
	sub_823B5948(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823b534c
	if (cr0.eq) goto loc_823B534C;
	// addi r10,r31,192
	ctx.r10.s64 = r31.s64 + 192;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
loc_823B527C:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
loc_823B5284:
	// extsb. r9,r11
	ctx.r9.s64 = r11.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823b52c0
	if (cr0.eq) goto loc_823B52C0;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// beq cr6,0x823b529c
	if (cr6.eq) goto loc_823B529C;
	// cmpwi cr6,r9,9
	cr6.compare<int32_t>(ctx.r9.s32, 9, xer);
	// bne cr6,0x823b52c0
	if (!cr6.eq) goto loc_823B52C0;
loc_823B529C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r29.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823b5284
	goto loc_823B5284;
loc_823B52C0:
	// extsb. r9,r11
	ctx.r9.s64 = r11.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823b5338
	if (cr0.eq) goto loc_823B5338;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r8,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r8.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
loc_823B52E4:
	// cmpwi cr6,r9,34
	cr6.compare<int32_t>(ctx.r9.s32, 34, xer);
	// beq cr6,0x823b52fc
	if (cr6.eq) goto loc_823B52FC;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// b 0x823b5308
	goto loc_823B5308;
loc_823B52FC:
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r8,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r8.u32);
loc_823B5308:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// extsb. r9,r11
	ctx.r9.s64 = r11.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823b5338
	if (cr0.eq) goto loc_823B5338;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x823b52e4
	if (!cr6.eq) goto loc_823B52E4;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// beq cr6,0x823b5338
	if (cr6.eq) goto loc_823B5338;
	// cmpwi cr6,r9,9
	cr6.compare<int32_t>(ctx.r9.s32, 9, xer);
	// bne cr6,0x823b52e4
	if (!cr6.eq) goto loc_823B52E4;
loc_823B5338:
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b5348
	if (cr0.eq) goto loc_823B5348;
	// cmpwi cr6,r28,16
	cr6.compare<int32_t>(r28.s32, 16, xer);
	// ble cr6,0x823b527c
	if (!cr6.gt) goto loc_823B527C;
loc_823B5348:
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r29.u8);
loc_823B534C:
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// b 0x823b5370
	goto loc_823B5370;
loc_823B5368:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B5370:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82120b58
	sub_82120B58(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8239f2c0
	sub_8239F2C0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-20640
	ctx.r3.s64 = r11.s64 + -20640;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826e4c8c
	__imp__DbgPrint(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x826e49bc
	__imp__XamLoaderTerminateTitle(ctx, base);
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x823b9cd8
	sub_823B9CD8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp___xstart"))) PPC_WEAK_FUNC(_xstart);
PPC_FUNC_IMPL(__imp___xstart) {
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
	// addi r31,r1,-496
	r31.s64 = ctx.r1.s64 + -496;
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,15148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15148, r11.u32);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// stw r11,15152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15152, r11.u32);
	// bl 0x823ba3e0
	sub_823BA3E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823b9af8
	sub_823B9AF8(ctx, base);
	// bl 0x823b4ff8
	sub_823B4FF8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823b5230
	if (cr0.eq) goto loc_823B5230;
	// bl 0x826e49bc
	__imp__XamLoaderTerminateTitle(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_823B5230:
	// bl 0x823a2bf0
	sub_823A2BF0(ctx, base);
	// bl 0x823ba290
	sub_823BA290(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823ba1b0
	sub_823BA1B0(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,17932(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17932);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823b5368
	if (cr6.eq) goto loc_823B5368;
	// addi r30,r31,112
	r30.s64 = r31.s64 + 112;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// li r29,0
	r29.s64 = 0;
	// mr r28,r29
	r28.u64 = r29.u64;
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// bl 0x823b5948
	sub_823B5948(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823b534c
	if (cr0.eq) goto loc_823B534C;
	// addi r10,r31,192
	ctx.r10.s64 = r31.s64 + 192;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
loc_823B527C:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
loc_823B5284:
	// extsb. r9,r11
	ctx.r9.s64 = r11.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823b52c0
	if (cr0.eq) goto loc_823B52C0;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// beq cr6,0x823b529c
	if (cr6.eq) goto loc_823B529C;
	// cmpwi cr6,r9,9
	cr6.compare<int32_t>(ctx.r9.s32, 9, xer);
	// bne cr6,0x823b52c0
	if (!cr6.eq) goto loc_823B52C0;
loc_823B529C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r29.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823b5284
	goto loc_823B5284;
loc_823B52C0:
	// extsb. r9,r11
	ctx.r9.s64 = r11.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823b5338
	if (cr0.eq) goto loc_823B5338;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r8,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r8.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
loc_823B52E4:
	// cmpwi cr6,r9,34
	cr6.compare<int32_t>(ctx.r9.s32, 34, xer);
	// beq cr6,0x823b52fc
	if (cr6.eq) goto loc_823B52FC;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// b 0x823b5308
	goto loc_823B5308;
loc_823B52FC:
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r8,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r8.u32);
loc_823B5308:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// extsb. r9,r11
	ctx.r9.s64 = r11.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823b5338
	if (cr0.eq) goto loc_823B5338;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x823b52e4
	if (!cr6.eq) goto loc_823B52E4;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// beq cr6,0x823b5338
	if (cr6.eq) goto loc_823B5338;
	// cmpwi cr6,r9,9
	cr6.compare<int32_t>(ctx.r9.s32, 9, xer);
	// bne cr6,0x823b52e4
	if (!cr6.eq) goto loc_823B52E4;
loc_823B5338:
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b5348
	if (cr0.eq) goto loc_823B5348;
	// cmpwi cr6,r28,16
	cr6.compare<int32_t>(r28.s32, 16, xer);
	// ble cr6,0x823b527c
	if (!cr6.gt) goto loc_823B527C;
loc_823B5348:
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r29.u8);
loc_823B534C:
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// b 0x823b5370
	goto loc_823B5370;
loc_823B5368:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B5370:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82120b58
	sub_82120B58(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8239f2c0
	sub_8239F2C0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-20640
	ctx.r3.s64 = r11.s64 + -20640;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826e4c8c
	__imp__DbgPrint(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x826e49bc
	__imp__XamLoaderTerminateTitle(ctx, base);
}

__attribute__((alias("__imp__sub_823B53A0"))) PPC_WEAK_FUNC(sub_823B53A0);
PPC_FUNC_IMPL(__imp__sub_823B53A0) {
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
	// bl 0x823b9cd8
	sub_823B9CD8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B53C4"))) PPC_WEAK_FUNC(sub_823B53C4);
PPC_FUNC_IMPL(__imp__sub_823B53C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B53C8"))) PPC_WEAK_FUNC(sub_823B53C8);
PPC_FUNC_IMPL(__imp__sub_823B53C8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e4cac
	__imp__KeQuerySystemTime(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823ba438
	sub_823BA438(ctx, base);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// bl 0x826e4c9c
	__imp__RtlTimeToTimeFields(ctx, base);
	// lhz r11,112(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// lhz r10,114(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// lhz r9,126(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 126);
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// lhz r7,118(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(r31.u32 + 2, ctx.r10.u16);
	// lhz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// lhz r11,122(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 122);
	// lhz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 124);
	// sth r9,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r9.u16);
	// sth r8,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r8.u16);
	// sth r7,8(r31)
	PPC_STORE_U16(r31.u32 + 8, ctx.r7.u16);
	// sth r6,10(r31)
	PPC_STORE_U16(r31.u32 + 10, ctx.r6.u16);
	// sth r11,12(r31)
	PPC_STORE_U16(r31.u32 + 12, r11.u16);
	// sth r10,14(r31)
	PPC_STORE_U16(r31.u32 + 14, ctx.r10.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B545C"))) PPC_WEAK_FUNC(sub_823B545C);
PPC_FUNC_IMPL(__imp__sub_823B545C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B5460"))) PPC_WEAK_FUNC(sub_823B5460);
PPC_FUNC_IMPL(__imp__sub_823B5460) {
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
	// bl 0x826e4cbc
	__imp__KeQueryPerformanceFrequency(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
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

__attribute__((alias("__imp__sub_823B5498"))) PPC_WEAK_FUNC(sub_823B5498);
PPC_FUNC_IMPL(__imp__sub_823B5498) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823ba620
	sub_823BA620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B54A0"))) PPC_WEAK_FUNC(sub_823B54A0);
PPC_FUNC_IMPL(__imp__sub_823B54A0) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, r11.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826e4ccc
	__imp__RtlInitAnsiString(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ba6b0
	sub_823BA6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B54E0"))) PPC_WEAK_FUNC(sub_823B54E0);
PPC_FUNC_IMPL(__imp__sub_823B54E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x826e4cdc
	__imp__DbgBreakPoint(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B54E4"))) PPC_WEAK_FUNC(sub_823B54E4);
PPC_FUNC_IMPL(__imp__sub_823B54E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B54E8"))) PPC_WEAK_FUNC(sub_823B54E8);
PPC_FUNC_IMPL(__imp__sub_823B54E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,15160(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 15160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b5514
	if (cr6.eq) goto loc_823B5514;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823b5518
	goto loc_823B5518;
loc_823B5514:
	// bl 0x826e4c4c
	__imp__NtClose(ctx, base);
loc_823B5518:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x823b5528
	if (cr6.lt) goto loc_823B5528;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823b5530
	goto loc_823B5530;
loc_823B5528:
	// bl 0x823ba6d8
	sub_823BA6D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B5530:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5540"))) PPC_WEAK_FUNC(sub_823B5540);
PPC_FUNC_IMPL(__imp__sub_823B5540) {
	PPC_FUNC_PROLOGUE();
	// b 0x826e49cc
	__imp__XamShowSigninUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B5544"))) PPC_WEAK_FUNC(sub_823B5544);
PPC_FUNC_IMPL(__imp__sub_823B5544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B5548"))) PPC_WEAK_FUNC(sub_823B5548);
PPC_FUNC_IMPL(__imp__sub_823B5548) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x826e49dc
	__imp__XamShowGamerCardUIForXUID(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B5550"))) PPC_WEAK_FUNC(sub_823B5550);
PPC_FUNC_IMPL(__imp__sub_823B5550) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// b 0x826e49ec
	__imp__XamShowMarketplaceUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B5560"))) PPC_WEAK_FUNC(sub_823B5560);
PPC_FUNC_IMPL(__imp__sub_823B5560) {
	PPC_FUNC_PROLOGUE();
	// b 0x826e49fc
	__imp__XamShowDeviceSelectorUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B5564"))) PPC_WEAK_FUNC(sub_823B5564);
PPC_FUNC_IMPL(__imp__sub_823B5564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B5568"))) PPC_WEAK_FUNC(sub_823B5568);
PPC_FUNC_IMPL(__imp__sub_823B5568) {
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
	// bl 0x826e4a0c
	__imp__XamShowDirtyDiscErrorUI(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ba730
	sub_823BA730(ctx, base);
}

__attribute__((alias("__imp__sub_823B5584"))) PPC_WEAK_FUNC(sub_823B5584);
PPC_FUNC_IMPL(__imp__sub_823B5584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B5588"))) PPC_WEAK_FUNC(sub_823B5588);
PPC_FUNC_IMPL(__imp__sub_823B5588) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x826e4a1c
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823b55d4
	if (!cr0.lt) goto loc_823B55D4;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x823b55f4
	goto loc_823B55F4;
loc_823B55D4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x823b55f0
	if (!cr6.eq) goto loc_823B55F0;
	// bl 0x823ba710
	sub_823BA710(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// andi. r3,r11,1627
	ctx.r3.u64 = r11.u64 & 1627;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// b 0x823b55f4
	goto loc_823B55F4;
loc_823B55F0:
	// li r3,997
	ctx.r3.s64 = 997;
loc_823B55F4:
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

__attribute__((alias("__imp__sub_823B5608"))) PPC_WEAK_FUNC(sub_823B5608);
PPC_FUNC_IMPL(__imp__sub_823B5608) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// li r7,24
	ctx.r7.s64 = 24;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// li r3,251
	ctx.r3.s64 = 251;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// bl 0x826e4a1c
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823b5668
	if (!cr0.lt) goto loc_823B5668;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x823b5688
	goto loc_823B5688;
loc_823B5668:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x823b5684
	if (!cr6.eq) goto loc_823B5684;
	// bl 0x823ba710
	sub_823BA710(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// andi. r3,r11,1627
	ctx.r3.u64 = r11.u64 & 1627;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// b 0x823b5688
	goto loc_823B5688;
loc_823B5684:
	// li r3,997
	ctx.r3.s64 = 997;
loc_823B5688:
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

__attribute__((alias("__imp__sub_823B569C"))) PPC_WEAK_FUNC(sub_823B569C);
PPC_FUNC_IMPL(__imp__sub_823B569C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B56A0"))) PPC_WEAK_FUNC(sub_823B56A0);
PPC_FUNC_IMPL(__imp__sub_823B56A0) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x823b5608
	sub_823B5608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B56A8"))) PPC_WEAK_FUNC(sub_823B56A8);
PPC_FUNC_IMPL(__imp__sub_823B56A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x826e4a2c
	__imp__XamUserGetName(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B56AC"))) PPC_WEAK_FUNC(sub_823B56AC);
PPC_FUNC_IMPL(__imp__sub_823B56AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B56B0"))) PPC_WEAK_FUNC(sub_823B56B0);
PPC_FUNC_IMPL(__imp__sub_823B56B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x826e4a3c
	__imp__XamUserGetSigninState(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B56B4"))) PPC_WEAK_FUNC(sub_823B56B4);
PPC_FUNC_IMPL(__imp__sub_823B56B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B56B8"))) PPC_WEAK_FUNC(sub_823B56B8);
PPC_FUNC_IMPL(__imp__sub_823B56B8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 | 32;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x826e4a1c
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823b5704
	if (!cr0.lt) goto loc_823B5704;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x823b5724
	goto loc_823B5724;
loc_823B5704:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x823b5720
	if (!cr6.eq) goto loc_823B5720;
	// bl 0x823ba710
	sub_823BA710(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// andi. r3,r11,1627
	ctx.r3.u64 = r11.u64 & 1627;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// b 0x823b5724
	goto loc_823B5724;
loc_823B5720:
	// li r3,997
	ctx.r3.s64 = 997;
loc_823B5724:
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

__attribute__((alias("__imp__sub_823B5738"))) PPC_WEAK_FUNC(sub_823B5738);
PPC_FUNC_IMPL(__imp__sub_823B5738) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823b56b8
	sub_823B56B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B5748"))) PPC_WEAK_FUNC(sub_823B5748);
PPC_FUNC_IMPL(__imp__sub_823B5748) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// mulli r10,r31,52
	ctx.r10.s64 = r31.s64 * 52;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// beq cr6,0x823b57a8
	if (cr6.eq) goto loc_823B57A8;
	// addi r6,r30,4
	ctx.r6.s64 = r30.s64 + 4;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
loc_823B578C:
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r6,r6,136
	ctx.r6.s64 = ctx.r6.s64 + 136;
	// mullw r5,r31,r5
	ctx.r5.s64 = int64_t(r31.s32) * int64_t(ctx.r5.s32);
	// mulli r5,r5,28
	ctx.r5.s64 = ctx.r5.s64 * 28;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// bne 0x823b578c
	if (!cr0.eq) goto loc_823B578C;
loc_823B57A8:
	// lwz r29,0(r8)
	r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// ble cr6,0x823b57c0
	if (!cr6.gt) goto loc_823B57C0;
	// li r3,122
	ctx.r3.s64 = 122;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// b 0x823b5828
	goto loc_823B5828;
loc_823B57C0:
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// li r7,28
	ctx.r7.s64 = 28;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// ori r4,r4,33
	ctx.r4.u64 = ctx.r4.u64 | 33;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x826e4a1c
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823b5808
	if (!cr0.lt) goto loc_823B5808;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x823b5828
	goto loc_823B5828;
loc_823B5808:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x823b5824
	if (!cr6.eq) goto loc_823B5824;
	// bl 0x823ba710
	sub_823BA710(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// andi. r3,r11,1627
	ctx.r3.u64 = r11.u64 & 1627;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// b 0x823b5828
	goto loc_823B5828;
loc_823B5824:
	// li r3,997
	ctx.r3.s64 = 997;
loc_823B5828:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823B5830"))) PPC_WEAK_FUNC(sub_823B5830);
PPC_FUNC_IMPL(__imp__sub_823B5830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x823ba7c0
	sub_823BA7C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x823b5888
	if (!cr0.eq) goto loc_823B5888;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// clrldi r5,r30,32
	ctx.r5.u64 = r30.u64 & 0xFFFFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e4a5c
	__imp__XamUserCreateStatsEnumerator(ctx, base);
loc_823B5888:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823B5890"))) PPC_WEAK_FUNC(sub_823B5890);
PPC_FUNC_IMPL(__imp__sub_823B5890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x823ba7c0
	sub_823BA7C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x823b58e8
	if (!cr0.eq) goto loc_823B58E8;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e4a5c
	__imp__XamUserCreateStatsEnumerator(ctx, base);
loc_823B58E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823B58F0"))) PPC_WEAK_FUNC(sub_823B58F0);
PPC_FUNC_IMPL(__imp__sub_823B58F0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x826e4a6c
	__imp__XamUserGetXUID(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823b5918
	if (cr0.lt) goto loc_823B5918;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823b5930
	goto loc_823B5930;
loc_823B5918:
	// rlwinm r11,r3,0,3,15
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x823b5930
	if (cr6.eq) goto loc_823B5930;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_823B5930:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5940"))) PPC_WEAK_FUNC(sub_823B5940);
PPC_FUNC_IMPL(__imp__sub_823B5940) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x826e4a7c
	__imp__XamNotifyCreateListener(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B5948"))) PPC_WEAK_FUNC(sub_823B5948);
PPC_FUNC_IMPL(__imp__sub_823B5948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,1940(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1940);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5954"))) PPC_WEAK_FUNC(sub_823B5954);
PPC_FUNC_IMPL(__imp__sub_823B5954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B5958"))) PPC_WEAK_FUNC(sub_823B5958);
PPC_FUNC_IMPL(__imp__sub_823B5958) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r3,3
	ctx.r3.s64 = 3;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// bl 0x826e4c6c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823b5998
	if (!cr0.lt) goto loc_823B5998;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// b 0x823b599c
	goto loc_823B599C;
loc_823B5998:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_823B599C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b59ac
	if (cr6.eq) goto loc_823B59AC;
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// ble cr6,0x823b59d8
	if (!cr6.gt) goto loc_823B59D8;
loc_823B59AC:
	// bl 0x826e4a8c
	__imp__XGetGameRegion(ctx, base);
	// rlwinm r11,r3,0,16,23
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// bne cr6,0x823b59d4
	if (!cr6.eq) goto loc_823B59D4;
	// cmplwi cr6,r3,257
	cr6.compare<uint32_t>(ctx.r3.u32, 257, xer);
	// bne cr6,0x823b59cc
	if (!cr6.eq) goto loc_823B59CC;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x823b59d8
	goto loc_823B59D8;
loc_823B59CC:
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x823b59d8
	goto loc_823B59D8;
loc_823B59D4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823B59D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B59E8"))) PPC_WEAK_FUNC(sub_823B59E8);
PPC_FUNC_IMPL(__imp__sub_823B59E8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x826e4ccc
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	r11.s64 = -3;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// li r11,64
	r11.s64 = 64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x826e4cec
	__imp__NtQueryFullAttributesFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823b5a6c
	if (cr0.lt) goto loc_823B5A6C;
	// lwz r11,160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// std r10,4(r31)
	PPC_STORE_U64(r31.u32 + 4, ctx.r10.u64);
	// std r9,12(r31)
	PPC_STORE_U64(r31.u32 + 12, ctx.r9.u64);
	// std r8,20(r31)
	PPC_STORE_U64(r31.u32 + 20, ctx.r8.u64);
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r6,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r6.u32);
	// b 0x823b5a74
	goto loc_823B5A74;
loc_823B5A6C:
	// bl 0x823ba6d8
	sub_823BA6D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B5A74:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5A88"))) PPC_WEAK_FUNC(sub_823B5A88);
PPC_FUNC_IMPL(__imp__sub_823B5A88) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x823b5ac4
	if (cr6.eq) goto loc_823B5AC4;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ba830
	sub_823BA830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823b5ac8
	goto loc_823B5AC8;
loc_823B5AC4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823B5AC8:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e4cfc
	__imp__NtCreateSemaphore(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823b5b00
	if (cr0.lt) goto loc_823B5B00;
	// lis r11,16384
	r11.s64 = 1073741824;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// li r3,183
	ctx.r3.s64 = 183;
	// beq cr6,0x823b5af4
	if (cr6.eq) goto loc_823B5AF4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B5AF4:
	// bl 0x823b9af0
	sub_823B9AF0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x823b5b08
	goto loc_823B5B08;
loc_823B5B00:
	// bl 0x823ba828
	sub_823BA828(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B5B08:
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

__attribute__((alias("__imp__sub_823B5B20"))) PPC_WEAK_FUNC(sub_823B5B20);
PPC_FUNC_IMPL(__imp__sub_823B5B20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x826e4d0c
	__imp__NtReleaseSemaphore(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823b5b40
	if (cr0.lt) goto loc_823B5B40;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823b5b48
	goto loc_823B5B48;
loc_823B5B40:
	// bl 0x823ba828
	sub_823BA828(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B5B48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5B58"))) PPC_WEAK_FUNC(sub_823B5B58);
PPC_FUNC_IMPL(__imp__sub_823B5B58) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x823ba8a8
	sub_823BA8A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B5B60"))) PPC_WEAK_FUNC(sub_823B5B60);
PPC_FUNC_IMPL(__imp__sub_823B5B60) {
	PPC_FUNC_PROLOGUE();
	// b 0x826e4a9c
	__imp__XamInputGetCapabilities(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B5B64"))) PPC_WEAK_FUNC(sub_823B5B64);
PPC_FUNC_IMPL(__imp__sub_823B5B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B5B68"))) PPC_WEAK_FUNC(sub_823B5B68);
PPC_FUNC_IMPL(__imp__sub_823B5B68) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826e4aac
	__imp__XamInputGetState(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B5B74"))) PPC_WEAK_FUNC(sub_823B5B74);
PPC_FUNC_IMPL(__imp__sub_823B5B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B5B78"))) PPC_WEAK_FUNC(sub_823B5B78);
PPC_FUNC_IMPL(__imp__sub_823B5B78) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(r26.u32, 1, xer);
	// beq cr6,0x823b5bf8
	if (cr6.eq) goto loc_823B5BF8;
	// cmplwi cr6,r26,2
	cr6.compare<uint32_t>(r26.u32, 2, xer);
	// beq cr6,0x823b5bf0
	if (cr6.eq) goto loc_823B5BF0;
	// cmplwi cr6,r26,3
	cr6.compare<uint32_t>(r26.u32, 3, xer);
	// beq cr6,0x823b5be8
	if (cr6.eq) goto loc_823B5BE8;
	// cmplwi cr6,r26,4
	cr6.compare<uint32_t>(r26.u32, 4, xer);
	// beq cr6,0x823b5be0
	if (cr6.eq) goto loc_823B5BE0;
	// cmplwi cr6,r26,5
	cr6.compare<uint32_t>(r26.u32, 5, xer);
	// bne cr6,0x823b5bcc
	if (!cr6.eq) goto loc_823B5BCC;
	// rlwinm. r11,r29,0,1,1
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r30,4
	r30.s64 = 4;
	// bne 0x823b5bfc
	if (!cr0.eq) goto loc_823B5BFC;
loc_823B5BCC:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// bl 0x823ba6d8
	sub_823BA6D8(ctx, base);
loc_823B5BD8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823b5d7c
	goto loc_823B5D7C;
loc_823B5BE0:
	// li r30,3
	r30.s64 = 3;
	// b 0x823b5bfc
	goto loc_823B5BFC;
loc_823B5BE8:
	// li r30,1
	r30.s64 = 1;
	// b 0x823b5bfc
	goto loc_823B5BFC;
loc_823B5BF0:
	// li r30,5
	r30.s64 = 5;
	// b 0x823b5bfc
	goto loc_823B5BFC;
loc_823B5BF8:
	// li r30,2
	r30.s64 = 2;
loc_823B5BFC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826e4ccc
	__imp__RtlInitAnsiString(ctx, base);
	// lhz r11,104(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x823b5c28
	if (!cr6.gt) goto loc_823B5C28;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// li r28,1
	r28.s64 = 1;
	// lbz r11,-1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// beq cr6,0x823b5c2c
	if (cr6.eq) goto loc_823B5C2C;
loc_823B5C28:
	// li r28,0
	r28.s64 = 0;
loc_823B5C2C:
	// mr r11,r31
	r11.u64 = r31.u64;
	// rlwinm r9,r31,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8000000;
	// rlwimi r11,r31,28,4,4
	r11.u64 = (__builtin_rotateleft32(r31.u32, 28) & 0x8000000) | (r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// li r7,-3
	ctx.r7.s64 = -3;
	// rlwinm r11,r11,31,3,5
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1C000000;
	// rlwinm r8,r31,0,3,3
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10000000;
	// rlwinm r11,r11,0,5,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// rlwinm r10,r31,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2000000;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// li r7,64
	ctx.r7.s64 = 64;
	// rlwinm r11,r11,24,8,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFFFFFF;
	// not r9,r31
	ctx.r9.u64 = ~r31.u64;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// rlwinm r9,r9,7,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x20;
	// rlwinm r11,r11,26,6,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,21,11,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x1FFFFF;
	// rlwinm. r8,r31,0,5,5
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// beq 0x823b5c94
	if (cr0.eq) goto loc_823B5C94;
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// oris r29,r29,1
	r29.u64 = r29.u64 | 65536;
loc_823B5C94:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b5ca0
	if (!cr6.eq) goto loc_823B5CA0;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
loc_823B5CA0:
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// oris r4,r29,16
	ctx.r4.u64 = r29.u64 | 1048576;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// andi. r8,r31,32679
	ctx.r8.u64 = r31.u64 & 32679;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,15160(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15160);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,128
	ctx.r4.u64 = ctx.r4.u64 | 128;
	// beq cr6,0x823b5ce8
	if (cr6.eq) goto loc_823B5CE8;
	// lwz r25,8(r10)
	r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823b5cf4
	goto loc_823B5CF4;
loc_823B5CE8:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826e4d1c
	__imp__NtCreateFile(ctx, base);
loc_823B5CF4:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x823b5d44
	if (!cr6.lt) goto loc_823B5D44;
	// bl 0x823ba6d8
	sub_823BA6D8(ctx, base);
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,53
	r11.u64 = r11.u64 | 53;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bne cr6,0x823b5d1c
	if (!cr6.eq) goto loc_823B5D1C;
	// li r3,80
	ctx.r3.s64 = 80;
	// b 0x823b5d3c
	goto loc_823B5D3C;
loc_823B5D1C:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,186
	r11.u64 = r11.u64 | 186;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bne cr6,0x823b5bd8
	if (!cr6.eq) goto loc_823B5BD8;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne cr6,0x823b5d3c
	if (!cr6.eq) goto loc_823B5D3C;
	// li r3,5
	ctx.r3.s64 = 5;
loc_823B5D3C:
	// bl 0x823b9af0
	sub_823B9AF0(ctx, base);
	// b 0x823b5bd8
	goto loc_823B5BD8;
loc_823B5D44:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r26,2
	cr6.compare<uint32_t>(r26.u32, 2, xer);
	// bne cr6,0x823b5d58
	if (!cr6.eq) goto loc_823B5D58;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x823b5d68
	if (cr6.eq) goto loc_823B5D68;
loc_823B5D58:
	// cmplwi cr6,r26,4
	cr6.compare<uint32_t>(r26.u32, 4, xer);
	// bne cr6,0x823b5d70
	if (!cr6.eq) goto loc_823B5D70;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x823b5d70
	if (!cr6.eq) goto loc_823B5D70;
loc_823B5D68:
	// li r3,183
	ctx.r3.s64 = 183;
	// b 0x823b5d74
	goto loc_823B5D74;
loc_823B5D70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B5D74:
	// bl 0x823b9af0
	sub_823B9AF0(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_823B5D7C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823B5D84"))) PPC_WEAK_FUNC(sub_823B5D84);
PPC_FUNC_IMPL(__imp__sub_823B5D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B5D88"))) PPC_WEAK_FUNC(sub_823B5D88);
PPC_FUNC_IMPL(__imp__sub_823B5D88) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823b5db8
	if (cr6.eq) goto loc_823B5DB8;
	// stw r6,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r6.u32);
loc_823B5DB8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823b5e2c
	if (cr6.eq) goto loc_823B5E2C;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r11,259
	r11.s64 = 259;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// clrlwi. r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b5de8
	if (!cr0.eq) goto loc_823B5DE8;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_823B5DE8:
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e4d3c
	__imp__NtWriteFile(ctx, base);
	// lis r11,-16384
	r11.s64 = -1073741824;
	// rlwinm r10,r3,0,0,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823b5ea0
	if (cr6.eq) goto loc_823B5EA0;
	// cmpwi cr6,r3,259
	cr6.compare<int32_t>(ctx.r3.s32, 259, xer);
	// beq cr6,0x823b5ea0
	if (cr6.eq) goto loc_823B5EA0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823b5e24
	if (cr6.eq) goto loc_823B5E24;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_823B5E24:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823b5ea8
	goto loc_823B5EA8;
loc_823B5E2C:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e4d3c
	__imp__NtWriteFile(ctx, base);
	// cmpwi cr6,r3,259
	cr6.compare<int32_t>(ctx.r3.s32, 259, xer);
	// bne cr6,0x823b5e70
	if (!cr6.eq) goto loc_823B5E70;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e4d2c
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823b5e88
	if (cr0.lt) goto loc_823B5E88;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823B5E70:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x823b5e88
	if (cr6.lt) goto loc_823B5E88;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x823b5ea8
	goto loc_823B5EA8;
loc_823B5E88:
	// rlwinm r11,r3,0,0,1
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823b5ea0
	if (!cr6.eq) goto loc_823B5EA0;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_823B5EA0:
	// bl 0x823ba6d8
	sub_823BA6D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B5EA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823B5EB0"))) PPC_WEAK_FUNC(sub_823B5EB0);
PPC_FUNC_IMPL(__imp__sub_823B5EB0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823b5ee0
	if (cr6.eq) goto loc_823B5EE0;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
loc_823B5EE0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823b5fb0
	if (cr6.eq) goto loc_823B5FB0;
	// li r11,259
	r11.s64 = 259;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,15160(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 15160);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b5f44
	if (cr6.eq) goto loc_823B5F44;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823b5f24
	if (!cr0.eq) goto loc_823B5F24;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_823B5F24:
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823b5f64
	goto loc_823B5F64;
loc_823B5F44:
	// clrlwi. r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b5f50
	if (!cr0.eq) goto loc_823B5F50;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_823B5F50:
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e4d4c
	__imp__NtReadFile(ctx, base);
loc_823B5F64:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x823b5f8c
	if (cr6.lt) goto loc_823B5F8C;
	// cmpwi cr6,r3,259
	cr6.compare<int32_t>(ctx.r3.s32, 259, xer);
	// beq cr6,0x823b5f8c
	if (cr6.eq) goto loc_823B5F8C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823b5f84
	if (cr6.eq) goto loc_823B5F84;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_823B5F84:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823b6068
	goto loc_823B6068;
loc_823B5F8C:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,17
	r11.u64 = r11.u64 | 17;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x823b6060
	if (!cr6.eq) goto loc_823B6060;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823b5fa8
	if (cr6.eq) goto loc_823B5FA8;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
loc_823B5FA8:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x823b6060
	goto loc_823B6060;
loc_823B5FB0:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,15160(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 15160);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b5fe8
	if (cr6.eq) goto loc_823B5FE8;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823b5fec
	goto loc_823B5FEC;
loc_823B5FE8:
	// bl 0x826e4d4c
	__imp__NtReadFile(ctx, base);
loc_823B5FEC:
	// cmpwi cr6,r3,259
	cr6.compare<int32_t>(ctx.r3.s32, 259, xer);
	// bne cr6,0x823b6014
	if (!cr6.eq) goto loc_823B6014;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e4d2c
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823b602c
	if (cr0.lt) goto loc_823B602C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823B6014:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x823b602c
	if (cr6.lt) goto loc_823B602C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x823b6068
	goto loc_823B6068;
loc_823B602C:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,17
	r11.u64 = r11.u64 | 17;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x823b6048
	if (!cr6.eq) goto loc_823B6048;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// b 0x823b6068
	goto loc_823B6068;
loc_823B6048:
	// rlwinm r11,r3,0,0,1
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823b6060
	if (!cr6.eq) goto loc_823B6060;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_823B6060:
	// bl 0x823ba6d8
	sub_823BA6D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B6068:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823B6070"))) PPC_WEAK_FUNC(sub_823B6070);
PPC_FUNC_IMPL(__imp__sub_823B6070) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x823b60a0
	if (cr6.eq) goto loc_823B60A0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// ld r30,88(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x823b60a4
	goto loc_823B60A4;
loc_823B60A0:
	// extsw r30,r4
	r30.s64 = ctx.r4.s32;
loc_823B60A4:
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// lis r29,-32126
	r29.s64 = -2105409536;
	// blt cr6,0x823b6150
	if (cr6.lt) goto loc_823B6150;
	// beq cr6,0x823b610c
	if (cr6.eq) goto loc_823B610C;
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// bge cr6,0x823b610c
	if (!cr6.lt) goto loc_823B610C;
	// lwz r11,15160(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 15160);
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x823b60ec
	if (cr6.eq) goto loc_823B60EC;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823b60f0
	goto loc_823B60F0;
loc_823B60EC:
	// bl 0x826e4d6c
	__imp__NtQueryInformationFile(ctx, base);
loc_823B60F0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x823b6100
	if (!cr6.lt) goto loc_823B6100;
loc_823B60F8:
	// bl 0x823ba6d8
	sub_823BA6D8(ctx, base);
	// b 0x823b6204
	goto loc_823B6204;
loc_823B6100:
	// ld r11,136(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
loc_823B6104:
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// b 0x823b6154
	goto loc_823B6154;
loc_823B610C:
	// lwz r11,15160(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 15160);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x823b613c
	if (cr6.eq) goto loc_823B613C;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823b6140
	goto loc_823B6140;
loc_823B613C:
	// bl 0x826e4d6c
	__imp__NtQueryInformationFile(ctx, base);
loc_823B6140:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x823b60f8
	if (cr6.lt) goto loc_823B60F8;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x823b6104
	goto loc_823B6104;
loc_823B6150:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_823B6154:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// bge cr6,0x823b616c
	if (!cr6.lt) goto loc_823B616C;
	// li r3,131
	ctx.r3.s64 = 131;
loc_823B6164:
	// bl 0x823ba6c0
	sub_823BA6C0(ctx, base);
	// b 0x823b6204
	goto loc_823B6204;
loc_823B616C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x823b6188
	if (!cr6.eq) goto loc_823B6188;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi. r11,r11,1
	r11.u64 = r11.u32 & 0x7FFFFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b6188
	if (cr0.eq) goto loc_823B6188;
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x823b6164
	goto loc_823B6164;
loc_823B6188:
	// lwz r11,15160(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 15160);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x823b61b8
	if (cr6.eq) goto loc_823B61B8;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823b61bc
	goto loc_823B61BC;
loc_823B61B8:
	// bl 0x826e4d5c
	__imp__NtSetInformationFile(ctx, base);
loc_823B61BC:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x823b61f0
	if (cr6.lt) goto loc_823B61F0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x823b61d4
	if (cr6.eq) goto loc_823B61D4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_823B61D4:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x823b61e8
	if (!cr6.eq) goto loc_823B61E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823b9af0
	sub_823B9AF0(ctx, base);
loc_823B61E8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x823b6208
	goto loc_823B6208;
loc_823B61F0:
	// bl 0x823ba6d8
	sub_823BA6D8(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x823b6204
	if (cr6.eq) goto loc_823B6204;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_823B6204:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823B6208:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823B6210"))) PPC_WEAK_FUNC(sub_823B6210);
PPC_FUNC_IMPL(__imp__sub_823B6210) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826e4ccc
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	r11.s64 = -3;
	// li r8,16448
	ctx.r8.s64 = 16448;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// li r11,64
	r11.s64 = 64;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x826e4d7c
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823b62a8
	if (cr0.lt) goto loc_823B62A8;
	// li r11,1
	r11.s64 = 1;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x826e4d5c
	__imp__NtSetInformationFile(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826e4c4c
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x823b62a4
	if (cr6.lt) goto loc_823B62A4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823b62b0
	goto loc_823B62B0;
loc_823B62A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823B62A8:
	// bl 0x823ba6d8
	sub_823BA6D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B62B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B62C4"))) PPC_WEAK_FUNC(sub_823B62C4);
PPC_FUNC_IMPL(__imp__sub_823B62C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B62C8"))) PPC_WEAK_FUNC(sub_823B62C8);
PPC_FUNC_IMPL(__imp__sub_823B62C8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x826e4ccc
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	r11.s64 = -3;
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 | 33;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// li r11,64
	r11.s64 = 64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x826e4d7c
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823b6350
	if (!cr0.lt) goto loc_823B6350;
	// bl 0x823ba6d8
	sub_823BA6D8(ctx, base);
	// bl 0x823b6468
	sub_823B6468(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bne cr6,0x823b6348
	if (!cr6.eq) goto loc_823B6348;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x823b9af0
	sub_823B9AF0(ctx, base);
loc_823B6348:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823b63d0
	goto loc_823B63D0;
loc_823B6350:
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x826e4d8c
	__imp__NtQueryVolumeInformationFile(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826e4c4c
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x823b6388
	if (!cr6.lt) goto loc_823B6388;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ba6d8
	sub_823BA6D8(ctx, base);
	// b 0x823b6348
	goto loc_823B6348;
loc_823B6388:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// mulld r10,r10,r11
	ctx.r10.s64 = ctx.r10.s64 * r11.s64;
	// mulld r11,r9,r11
	r11.s64 = ctx.r9.s64 * r11.s64;
	// beq cr6,0x823b63b4
	if (cr6.eq) goto loc_823B63B4;
	// std r10,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r10.u64);
loc_823B63B4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823b63c0
	if (cr6.eq) goto loc_823B63C0;
	// std r11,0(r29)
	PPC_STORE_U64(r29.u32 + 0, r11.u64);
loc_823B63C0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x823b63cc
	if (cr6.eq) goto loc_823B63CC;
	// std r10,0(r28)
	PPC_STORE_U64(r28.u32 + 0, ctx.r10.u64);
loc_823B63CC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823B63D0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823B63D8"))) PPC_WEAK_FUNC(sub_823B63D8);
PPC_FUNC_IMPL(__imp__sub_823B63D8) {
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
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826e4ccc
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	r11.s64 = -3;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,328
	ctx.r5.s64 = 328;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// li r11,64
	r11.s64 = 64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r11,r1,104
	r11.s64 = ctx.r1.s64 + 104;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x823ba4b8
	sub_823BA4B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823b6440
	if (!cr0.lt) goto loc_823B6440;
	// bl 0x823ba6d8
	sub_823BA6D8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823b6450
	goto loc_823B6450;
loc_823B6440:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823ba910
	sub_823BA910(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823B6450:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6464"))) PPC_WEAK_FUNC(sub_823B6464);
PPC_FUNC_IMPL(__imp__sub_823B6464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B6468"))) PPC_WEAK_FUNC(sub_823B6468);
PPC_FUNC_IMPL(__imp__sub_823B6468) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ba710
	sub_823BA710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B646C"))) PPC_WEAK_FUNC(sub_823B646C);
PPC_FUNC_IMPL(__imp__sub_823B646C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B6470"))) PPC_WEAK_FUNC(sub_823B6470);
PPC_FUNC_IMPL(__imp__sub_823B6470) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823ba9c8
	sub_823BA9C8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823b64c0
	if (cr0.eq) goto loc_823B64C0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823b64a4
	if (cr6.eq) goto loc_823B64A4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_823B64A4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x823b64c4
	if (!cr6.eq) goto loc_823B64C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823b9af0
	sub_823B9AF0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x823b64c4
	goto loc_823B64C4;
loc_823B64C0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823B64C4:
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

__attribute__((alias("__imp__sub_823B64D8"))) PPC_WEAK_FUNC(sub_823B64D8);
PPC_FUNC_IMPL(__imp__sub_823B64D8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,259
	cr6.compare<uint32_t>(r11.u32, 259, xer);
	// bne cr6,0x823b6544
	if (!cr6.eq) goto loc_823B6544;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x823b6524
	if (cr6.eq) goto loc_823B6524;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823b6518
	if (cr0.eq) goto loc_823B6518;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_823B6518:
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x823b5b58
	sub_823B5B58(ctx, base);
	// b 0x823b6528
	goto loc_823B6528;
loc_823B6524:
	// li r3,258
	ctx.r3.s64 = 258;
loc_823B6528:
	// cmplwi cr6,r3,258
	cr6.compare<uint32_t>(ctx.r3.u32, 258, xer);
	// bne cr6,0x823b653c
	if (!cr6.eq) goto loc_823B653C;
	// li r3,996
	ctx.r3.s64 = 996;
	// bl 0x823b9af0
	sub_823B9AF0(ctx, base);
	// b 0x823b6564
	goto loc_823B6564;
loc_823B653C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823b6564
	if (!cr6.eq) goto loc_823B6564;
loc_823B6544:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823b6560
	if (cr0.lt) goto loc_823B6560;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823b6568
	goto loc_823B6568;
loc_823B6560:
	// bl 0x823ba6d8
	sub_823BA6D8(ctx, base);
loc_823B6564:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B6568:
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

__attribute__((alias("__imp__sub_823B6580"))) PPC_WEAK_FUNC(sub_823B6580);
PPC_FUNC_IMPL(__imp__sub_823B6580) {
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823b65d4
	if (cr6.eq) goto loc_823B65D4;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b65d4
	if (cr6.eq) goto loc_823B65D4;
	// andi. r11,r6,144
	r11.u64 = ctx.r6.u64 & 144;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi cr6,r11,144
	cr6.compare<uint32_t>(r11.u32, 144, xer);
	// beq cr6,0x823b65d4
	if (cr6.eq) goto loc_823B65D4;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x823b65c4
	if (!cr6.eq) goto loc_823B65C4;
	// rlwinm. r11,r6,0,24,24
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b65c4
	if (!cr0.eq) goto loc_823B65C4;
	// ori r6,r6,16
	ctx.r6.u64 = ctx.r6.u64 | 16;
loc_823B65C4:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826e4abc
	__imp__XamContentCreateEx(ctx, base);
	// b 0x823b65d8
	goto loc_823B65D8;
loc_823B65D4:
	// li r3,87
	ctx.r3.s64 = 87;
loc_823B65D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B65E8"))) PPC_WEAK_FUNC(sub_823B65E8);
PPC_FUNC_IMPL(__imp__sub_823B65E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x826e4acc
	__imp__XamContentClose(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B65EC"))) PPC_WEAK_FUNC(sub_823B65EC);
PPC_FUNC_IMPL(__imp__sub_823B65EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B65F0"))) PPC_WEAK_FUNC(sub_823B65F0);
PPC_FUNC_IMPL(__imp__sub_823B65F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x826e4adc
	__imp__XamContentCreateEnumerator(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B65F4"))) PPC_WEAK_FUNC(sub_823B65F4);
PPC_FUNC_IMPL(__imp__sub_823B65F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B65F8"))) PPC_WEAK_FUNC(sub_823B65F8);
PPC_FUNC_IMPL(__imp__sub_823B65F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x826e4aec
	__imp__XamContentGetDeviceState(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B65FC"))) PPC_WEAK_FUNC(sub_823B65FC);
PPC_FUNC_IMPL(__imp__sub_823B65FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B6600"))) PPC_WEAK_FUNC(sub_823B6600);
PPC_FUNC_IMPL(__imp__sub_823B6600) {
	PPC_FUNC_PROLOGUE();
	// b 0x826e4afc
	__imp__XamContentGetDeviceData(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B6604"))) PPC_WEAK_FUNC(sub_823B6604);
PPC_FUNC_IMPL(__imp__sub_823B6604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B6608"))) PPC_WEAK_FUNC(sub_823B6608);
PPC_FUNC_IMPL(__imp__sub_823B6608) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r11,r1,100
	r11.s64 = ctx.r1.s64 + 100;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x823b6580
	sub_823B6580(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6644"))) PPC_WEAK_FUNC(sub_823B6644);
PPC_FUNC_IMPL(__imp__sub_823B6644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B6648"))) PPC_WEAK_FUNC(sub_823B6648);
PPC_FUNC_IMPL(__imp__sub_823B6648) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826e4b0c
	__imp__XamEnumerate(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B6660"))) PPC_WEAK_FUNC(sub_823B6660);
PPC_FUNC_IMPL(__imp__sub_823B6660) {
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
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(r11.u32, 997, xer);
	// bne cr6,0x823b66cc
	if (!cr6.eq) goto loc_823B66CC;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x823b66a8
	if (cr6.eq) goto loc_823B66A8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823b66a8
	if (cr0.eq) goto loc_823B66A8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x823b5b58
	sub_823B5B58(ctx, base);
	// b 0x823b66ac
	goto loc_823B66AC;
loc_823B66A8:
	// li r3,258
	ctx.r3.s64 = 258;
loc_823B66AC:
	// cmplwi cr6,r3,258
	cr6.compare<uint32_t>(ctx.r3.u32, 258, xer);
	// bne cr6,0x823b66bc
	if (!cr6.eq) goto loc_823B66BC;
	// li r3,996
	ctx.r3.s64 = 996;
	// b 0x823b66e0
	goto loc_823B66E0;
loc_823B66BC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b66cc
	if (cr6.eq) goto loc_823B66CC;
	// bl 0x823b6468
	sub_823B6468(ctx, base);
	// b 0x823b66e0
	goto loc_823B66E0;
loc_823B66CC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823b66dc
	if (cr6.eq) goto loc_823B66DC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_823B66DC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_823B66E0:
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

__attribute__((alias("__imp__sub_823B66F8"))) PPC_WEAK_FUNC(sub_823B66F8);
PPC_FUNC_IMPL(__imp__sub_823B66F8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826e4b1c
	__imp__XMsgCancelIORequest(ctx, base);
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

__attribute__((alias("__imp__sub_823B6720"))) PPC_WEAK_FUNC(sub_823B6720);
PPC_FUNC_IMPL(__imp__sub_823B6720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,996
	ctx.r3.s64 = 996;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b6734
	if (!cr6.eq) goto loc_823B6734;
	// b 0x823b6468
	sub_823B6468(ctx, base);
	return;
loc_823B6734:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,997
	cr6.compare<uint32_t>(ctx.r10.u32, 997, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6748"))) PPC_WEAK_FUNC(sub_823B6748);
PPC_FUNC_IMPL(__imp__sub_823B6748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,256(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r3,332(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 332);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6754"))) PPC_WEAK_FUNC(sub_823B6754);
PPC_FUNC_IMPL(__imp__sub_823B6754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B6758"))) PPC_WEAK_FUNC(sub_823B6758);
PPC_FUNC_IMPL(__imp__sub_823B6758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// addi r10,r10,26456
	ctx.r10.s64 = ctx.r10.s64 + 26456;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x823b67bc
	if (cr6.eq) goto loc_823B67BC;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,15
	cr6.compare<uint32_t>(ctx.r5.u32, 15, xer);
	// ble cr6,0x823b679c
	if (!cr6.gt) goto loc_823B679C;
	// li r11,15
	r11.s64 = 15;
loc_823B679C:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b67c0
	if (cr6.eq) goto loc_823B67C0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8239d2a8
	sub_8239D2A8(ctx, base);
	// b 0x823b67c0
	goto loc_823B67C0;
loc_823B67BC:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
loc_823B67C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e4d9c
	__imp__RtlRaiseException(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B67D8"))) PPC_WEAK_FUNC(sub_823B67D8);
PPC_FUNC_IMPL(__imp__sub_823B67D8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r11,r10,76
	r11.s64 = ctx.r10.s64 + 76;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823b6974
	if (!cr6.eq) goto loc_823B6974;
	// lwz r11,72(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq 0x823b6880
	if (cr0.eq) goto loc_823B6880;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x823b6880
	if (cr6.eq) goto loc_823B6880;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x826e4dac
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823b68b0
	if (cr0.lt) goto loc_823B68B0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x823b6940
	goto loc_823B6940;
loc_823B6880:
	// lis r11,16
	r11.s64 = 1048576;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e4dac
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823b68b8
	if (!cr0.lt) goto loc_823B68B8;
loc_823B68B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823b6980
	goto loc_823B6980;
loc_823B68B8:
	// lis r11,1
	r11.s64 = 65536;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e4dac
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823b6900
	if (!cr0.lt) goto loc_823B6900;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e4dec
	__imp__NtFreeVirtualMemory(ctx, base);
	// b 0x823b68b0
	goto loc_823B68B0;
loc_823B6900:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r11,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, r11.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r10,16
	r11.s64 = ctx.r10.s64 + 16;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
loc_823B6940:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r8,76
	ctx.r10.s64 = ctx.r8.s64 + 76;
	// b 0x823b6960
	goto loc_823B6960;
loc_823B6954:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
loc_823B6960:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x823b6954
	if (cr6.lt) goto loc_823B6954;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,76
	r11.s64 = r11.s64 + 76;
loc_823B6974:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_823B6980:
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

__attribute__((alias("__imp__sub_823B6998"))) PPC_WEAK_FUNC(sub_823B6998);
PPC_FUNC_IMPL(__imp__sub_823B6998) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r28,r31,56
	r28.s64 = r31.s64 + 56;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823b6a3c
	if (cr0.eq) goto loc_823B6A3C;
	// li r8,0
	ctx.r8.s64 = 0;
loc_823B69C4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// bgt cr6,0x823b6a84
	if (cr6.gt) goto loc_823B6A84;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, r29.u32, xer);
	// bne cr6,0x823b6a2c
	if (!cr6.eq) goto loc_823B6A2C;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// add r30,r9,r30
	r30.u64 = ctx.r9.u64 + r30.u64;
	// stw r7,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r7.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r11,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, r11.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// ble cr6,0x823b6a30
	if (!cr6.gt) goto loc_823B6A30;
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// b 0x823b6a30
	goto loc_823B6A30;
loc_823B6A2C:
	// mr r28,r11
	r28.u64 = r11.u64;
loc_823B6A30:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823b69c4
	if (!cr0.eq) goto loc_823B69C4;
loc_823B6A3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823b67d8
	sub_823B67D8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823b6a7c
	if (cr0.eq) goto loc_823B6A7C;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// blt cr6,0x823b6a7c
	if (cr6.lt) goto loc_823B6A7C;
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
loc_823B6A7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
loc_823B6A84:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r10,r29,r30
	ctx.r10.u64 = r29.u64 + r30.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x823b6a3c
	if (!cr6.eq) goto loc_823B6A3C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x823b6a7c
	if (!cr6.gt) goto loc_823B6A7C;
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// b 0x823b6a7c
	goto loc_823B6A7C;
}

__attribute__((alias("__imp__sub_823B6AB8"))) PPC_WEAK_FUNC(sub_823B6AB8);
PPC_FUNC_IMPL(__imp__sub_823B6AB8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// addi r25,r30,56
	r25.s64 = r30.s64 + 56;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r25
	r27.u64 = r25.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r31,0(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x823b6b20
	if (cr0.eq) goto loc_823B6B20;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
loc_823B6AEC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x823b6b0c
	if (cr6.lt) goto loc_823B6B0C;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x823b6b2c
	if (cr6.eq) goto loc_823B6B2C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823b6b2c
	if (cr6.eq) goto loc_823B6B2C;
loc_823B6B0C:
	// mr r29,r31
	r29.u64 = r31.u64;
	// mr r27,r31
	r27.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x823b6aec
	if (!cr0.eq) goto loc_823B6AEC;
loc_823B6B20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B6B24:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
loc_823B6B2C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,1412(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq 0x823b6b54
	if (cr0.eq) goto loc_823B6B54;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823b6b70
	goto loc_823B6B70;
loc_823B6B54:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e4dac
	__imp__NtAllocateVirtualMemory(ctx, base);
loc_823B6B70:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x823b6b20
	if (cr6.lt) goto loc_823B6B20;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x823b6b9c
	if (!cr6.eq) goto loc_823B6B9C;
	// stw r26,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r26.u32);
loc_823B6B9C:
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b6bcc
	if (cr0.eq) goto loc_823B6BCC;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x823b6c38
	if (cr6.eq) goto loc_823B6C38;
loc_823B6BCC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x823b6bdc
	if (!cr6.eq) goto loc_823B6BDC;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// b 0x823b6be8
	goto loc_823B6BE8;
loc_823B6BDC:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_823B6BE8:
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823b6c38
	if (!cr0.eq) goto loc_823B6C38;
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 44);
loc_823B6BF8:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x823b6c2c
	if (!cr6.lt) goto loc_823B6C2C;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x823b6c2c
	if (cr0.eq) goto loc_823B6C2C;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b6bf8
	if (cr0.eq) goto loc_823B6BF8;
	// b 0x823b6c38
	goto loc_823B6C38;
loc_823B6C2C:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x823b6b20
	if (!cr6.eq) goto loc_823B6B20;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_823B6C38:
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// andi. r10,r10,239
	ctx.r10.u64 = ctx.r10.u64 & 239;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r10,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r10.u8);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf. r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bne 0x823b6cc8
	if (!cr0.eq) goto loc_823B6CC8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x823b6c88
	if (!cr6.eq) goto loc_823B6C88;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stw r3,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r3.u32);
	// b 0x823b6c94
	goto loc_823B6C94;
loc_823B6C88:
	// stb r26,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r26.u8);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r10,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r10.u32);
loc_823B6C94:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r31,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, r31.u32);
	// stw r26,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r26.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r26.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r10.u32);
	// b 0x823b6cd4
	goto loc_823B6CD4;
loc_823B6CC8:
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stw r3,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r3.u32);
loc_823B6CD4:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// lbz r9,5(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rlwinm. r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, r11.u16);
	// bne 0x823b6d0c
	if (!cr0.eq) goto loc_823B6D0C;
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// rotlwi r10,r11,4
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 4);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
loc_823B6D0C:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b6b24
	if (!cr6.eq) goto loc_823B6B24;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// b 0x823b6d38
	goto loc_823B6D38;
loc_823B6D20:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x823b6d34
	if (cr6.lt) goto loc_823B6D34;
	// stw r10,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r10.u32);
loc_823B6D34:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823B6D38:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823b6d20
	if (!cr0.eq) goto loc_823B6D20;
	// b 0x823b6b24
	goto loc_823B6B24;
}

__attribute__((alias("__imp__sub_823B6D44"))) PPC_WEAK_FUNC(sub_823B6D44);
PPC_FUNC_IMPL(__imp__sub_823B6D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B6D48"))) PPC_WEAK_FUNC(sub_823B6D48);
PPC_FUNC_IMPL(__imp__sub_823B6D48) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r26,1
	r26.s64 = 1;
	// lhz r11,2(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// subf r31,r11,r30
	r31.s64 = r30.s64 - r11.s64;
	// lis r11,-274
	r11.s64 = -17956864;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// ori r25,r11,65262
	r25.u64 = r11.u64 | 65262;
	// beq cr6,0x823b6f5c
	if (cr6.eq) goto loc_823B6F5C;
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b6f5c
	if (!cr0.eq) goto loc_823B6F5C;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,61440
	cr6.compare<uint32_t>(r11.u32, 61440, xer);
	// bgt cr6,0x823b6f5c
	if (cr6.gt) goto loc_823B6F5C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x823b6e58
	if (cr6.eq) goto loc_823B6E58;
	// addi r9,r30,8
	ctx.r9.s64 = r30.s64 + 8;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x823b6e0c
	if (!cr6.eq) goto loc_823B6E0C;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x823b6e0c
	if (!cr6.eq) goto loc_823B6E0C;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x823b6e0c
	if (!cr6.eq) goto loc_823B6E0C;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x823b6e0c
	if (!cr6.lt) goto loc_823B6E0C;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// slw r9,r26,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r26.u32 << (r11.u8 & 0x3F));
	// addi r11,r10,88
	r11.s64 = ctx.r10.s64 + 88;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r10.u32);
loc_823B6E0C:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b6e44
	if (cr0.eq) goto loc_823B6E44;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// beq 0x823b6e38
	if (cr0.eq) goto loc_823B6E38;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x823b6e38
	if (!cr6.gt) goto loc_823B6E38;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_823B6E38:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x826e4dfc
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_823B6E44:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r11.u32);
loc_823B6E58:
	// addi r9,r31,8
	ctx.r9.s64 = r31.s64 + 8;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x823b6eb8
	if (!cr6.eq) goto loc_823B6EB8;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x823b6eb8
	if (!cr6.eq) goto loc_823B6EB8;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x823b6eb8
	if (!cr6.eq) goto loc_823B6EB8;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x823b6eb8
	if (!cr6.lt) goto loc_823B6EB8;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// slw r9,r26,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r26.u32 << (r11.u8 & 0x3F));
	// addi r11,r10,88
	r11.s64 = ctx.r10.s64 + 88;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r10.u32);
loc_823B6EB8:
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b6ef0
	if (cr0.eq) goto loc_823B6EF0;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// beq 0x823b6ee4
	if (cr0.eq) goto loc_823B6EE4;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x823b6ee4
	if (!cr6.gt) goto loc_823B6EE4;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_823B6EE4:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x826e4dfc
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_823B6EF0:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// beq 0x823b6f14
	if (cr0.eq) goto loc_823B6F14;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// stw r31,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r31.u32);
loc_823B6F14:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r30,r31
	r30.u64 = r31.u64;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r11.u32);
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823b6f5c
	if (!cr0.eq) goto loc_823B6F5C;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
loc_823B6F5C:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b7140
	if (!cr0.eq) goto loc_823B7140;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r30
	r31.u64 = ctx.r10.u64 + r30.u64;
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823b7140
	if (!cr0.eq) goto loc_823B7140;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplwi cr6,r11,61440
	cr6.compare<uint32_t>(r11.u32, 61440, xer);
	// bgt cr6,0x823b7140
	if (cr6.gt) goto loc_823B7140;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x823b7040
	if (cr6.eq) goto loc_823B7040;
	// addi r9,r30,8
	ctx.r9.s64 = r30.s64 + 8;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x823b6ff8
	if (!cr6.eq) goto loc_823B6FF8;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x823b6ff8
	if (!cr6.eq) goto loc_823B6FF8;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x823b6ff8
	if (!cr6.eq) goto loc_823B6FF8;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x823b6ff8
	if (!cr6.lt) goto loc_823B6FF8;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// slw r9,r26,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r26.u32 << (r11.u8 & 0x3F));
	// addi r11,r10,88
	r11.s64 = ctx.r10.s64 + 88;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r10.u32);
loc_823B6FF8:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b7030
	if (cr0.eq) goto loc_823B7030;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// beq 0x823b7024
	if (cr0.eq) goto loc_823B7024;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x823b7024
	if (!cr6.gt) goto loc_823B7024;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_823B7024:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x826e4dfc
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_823B7030:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r11.u32);
loc_823B7040:
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// beq 0x823b7064
	if (cr0.eq) goto loc_823B7064;
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// stw r30,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r30.u32);
loc_823B7064:
	// addi r9,r31,8
	ctx.r9.s64 = r31.s64 + 8;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x823b70c4
	if (!cr6.eq) goto loc_823B70C4;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x823b70c4
	if (!cr6.eq) goto loc_823B70C4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x823b70c4
	if (!cr6.eq) goto loc_823B70C4;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x823b70c4
	if (!cr6.lt) goto loc_823B70C4;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// slw r9,r26,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r26.u32 << (r11.u8 & 0x3F));
	// addi r11,r10,88
	r11.s64 = ctx.r10.s64 + 88;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r10.u32);
loc_823B70C4:
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b70fc
	if (cr0.eq) goto loc_823B70FC;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// beq 0x823b70f0
	if (cr0.eq) goto loc_823B70F0;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x823b70f0
	if (!cr6.gt) goto loc_823B70F0;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_823B70F0:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x826e4dfc
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_823B70FC:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r11.u32);
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823b7140
	if (!cr0.eq) goto loc_823B7140;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
loc_823B7140:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823B714C"))) PPC_WEAK_FUNC(sub_823B714C);
PPC_FUNC_IMPL(__imp__sub_823B714C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B7150"))) PPC_WEAK_FUNC(sub_823B7150);
PPC_FUNC_IMPL(__imp__sub_823B7150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x8239bcfc
	// lbz r30,4(r4)
	r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lhz r7,2(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// lbz r29,5(r4)
	r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r3
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// b 0x823b726c
	goto loc_823B726C;
loc_823B7184:
	// cmplwi cr6,r5,61440
	cr6.compare<uint32_t>(ctx.r5.u32, 61440, xer);
	// ble cr6,0x823b71a8
	if (!cr6.gt) goto loc_823B71A8;
	// li r6,-4096
	ctx.r6.s64 = -4096;
	// cmplwi cr6,r5,61441
	cr6.compare<uint32_t>(ctx.r5.u32, 61441, xer);
	// bne cr6,0x823b719c
	if (!cr6.eq) goto loc_823B719C;
	// li r6,-4112
	ctx.r6.s64 = -4112;
loc_823B719C:
	// li r11,0
	r11.s64 = 0;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, r11.u8);
	// b 0x823b71b0
	goto loc_823B71B0;
loc_823B71A8:
	// clrlwi r6,r5,16
	ctx.r6.u64 = ctx.r5.u32 & 0xFFFF;
	// stb r29,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, r29.u8);
loc_823B71B0:
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r7,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r30,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, r30.u8);
	// sth r6,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r6.u16);
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, r11.u8);
	// bge cr6,0x823b7214
	if (!cr6.lt) goto loc_823B7214;
	// addi r11,r9,48
	r11.s64 = ctx.r9.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823b7238
	if (!cr6.eq) goto loc_823B7238;
	// li r7,1
	ctx.r7.s64 = 1;
	// clrlwi r8,r9,27
	ctx.r8.u64 = ctx.r9.u32 & 0x1F;
	// rlwinm r11,r9,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r11,88
	r11.s64 = r11.s64 + 88;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r7,r11,r3
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// b 0x823b7238
	goto loc_823B7238;
loc_823B7214:
	// addi r11,r3,384
	r11.s64 = ctx.r3.s64 + 384;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x823b7230
	goto loc_823B7230;
loc_823B7220:
	// lhz r8,-8(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + -8);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x823b7238
	if (!cr6.gt) goto loc_823B7238;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_823B7230:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823b7220
	if (!cr6.eq) goto loc_823B7220;
loc_823B7238:
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r5,r9,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r9.s64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r4,8
	r11.s64 = ctx.r4.s64 + 8;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x823b7280
	if (!cr6.lt) goto loc_823B7280;
loc_823B726C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x823b7184
	if (!cr6.eq) goto loc_823B7184;
	// rlwinm. r11,r29,0,27,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b7280
	if (!cr0.eq) goto loc_823B7280;
	// sth r7,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
loc_823B7280:
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823B7284"))) PPC_WEAK_FUNC(sub_823B7284);
PPC_FUNC_IMPL(__imp__sub_823B7284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B7288"))) PPC_WEAK_FUNC(sub_823B7288);
PPC_FUNC_IMPL(__imp__sub_823B7288) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x823b72bc
	if (!cr6.gt) goto loc_823B72BC;
loc_823B72B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823b77f0
	goto loc_823B77F0;
loc_823B72BC:
	// lbz r26,5(r27)
	r26.u64 = PPC_LOAD_U8(r27.u32 + 5);
	// li r25,1
	r25.s64 = 1;
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 4);
	// add r29,r9,r27
	r29.u64 = ctx.r9.u64 + r27.u64;
	// rlwinm. r10,r26,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b7370
	if (cr0.eq) goto loc_823B7370;
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// lbz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// addis r11,r11,1
	r11.s64 = r11.s64 + 65536;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,0,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF0000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// bl 0x823b6ab8
	sub_823B6AB8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x823b72b4
	if (cr0.eq) goto loc_823B72B4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,28,4,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x823b6d48
	sub_823B6D48(ctx, base);
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// lbz r28,5(r4)
	r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bge cr6,0x823b7440
	if (!cr6.lt) goto loc_823B7440;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823b7150
	sub_823B7150(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// b 0x823b77f0
	goto loc_823B77F0;
loc_823B7370:
	// lbz r28,5(r29)
	r28.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823b72b4
	if (!cr0.eq) goto loc_823B72B4;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// blt cr6,0x823b72b4
	if (cr6.lt) goto loc_823B72B4;
	// addi r9,r29,8
	ctx.r9.s64 = r29.s64 + 8;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x823b73f0
	if (!cr6.eq) goto loc_823B73F0;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x823b73f0
	if (!cr6.eq) goto loc_823B73F0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x823b73f0
	if (!cr6.eq) goto loc_823B73F0;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x823b73f0
	if (!cr6.lt) goto loc_823B73F0;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// slw r9,r25,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r25.u32 << (r11.u8 & 0x3F));
	// addi r11,r10,88
	r11.s64 = ctx.r10.s64 + 88;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
loc_823B73F0:
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b742c
	if (cr0.eq) goto loc_823B742C;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// beq 0x823b741c
	if (cr0.eq) goto loc_823B741C;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x823b741c
	if (!cr6.gt) goto loc_823B741C;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_823B741C:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// addi r3,r29,24
	ctx.r3.s64 = r29.s64 + 24;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// bl 0x826e4dfc
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_823B742C:
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823B7440:
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// lbz r9,6(r27)
	ctx.r9.u64 = PPC_LOAD_U8(r27.u32 + 6);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// subf r24,r9,r10
	r24.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bgt cr6,0x823b746c
	if (cr6.gt) goto loc_823B746C;
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_823B746C:
	// rlwinm. r10,r26,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b74a0
	if (cr0.eq) goto loc_823B74A0;
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// ld r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + -16);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r11,-8(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + -8);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r11.u64);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823B74A0:
	// clrlwi r10,r31,16
	ctx.r10.u64 = r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// sth r10,0(r27)
	PPC_STORE_U16(r27.u32 + 0, ctx.r10.u16);
	// bne cr6,0x823b74f8
	if (!cr6.eq) goto loc_823B74F8;
	// lbz r9,5(r27)
	ctx.r9.u64 = PPC_LOAD_U8(r27.u32 + 5);
	// rlwinm. r11,r28,0,27,27
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r8,r31,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | r11.u64;
	// subf r8,r23,r8
	ctx.r8.s64 = ctx.r8.s64 - r23.s64;
	// stb r9,5(r27)
	PPC_STORE_U8(r27.u32 + 5, ctx.r9.u8);
	// stb r8,6(r27)
	PPC_STORE_U8(r27.u32 + 6, ctx.r8.u8);
	// bne 0x823b74e0
	if (!cr0.eq) goto loc_823B74E0;
	// rlwinm r11,r10,4,12,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFF0;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// sth r10,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r10.u16);
	// b 0x823b77bc
	goto loc_823B77BC;
loc_823B74E0:
	// lbz r11,4(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 4);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stw r27,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r27.u32);
	// b 0x823b77bc
	goto loc_823B77BC;
loc_823B74F8:
	// rlwinm r11,r31,4,0,27
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r9,r28,24
	ctx.r9.u64 = r28.u32 & 0xFF;
	// add r31,r11,r27
	r31.u64 = r11.u64 + r27.u64;
	// subf r11,r23,r11
	r11.s64 = r11.s64 - r23.s64;
	// stb r11,6(r27)
	PPC_STORE_U8(r27.u32 + 6, r11.u8);
	// sth r10,2(r31)
	PPC_STORE_U16(r31.u32 + 2, ctx.r10.u16);
	// lbz r11,4(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 4);
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// rlwinm. r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x823b7580
	if (cr0.eq) goto loc_823B7580;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r9,0,24,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF8;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stw r31,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r31.u32);
	// stb r28,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r28.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r10,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r10.u8);
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// blt cr6,0x823b75d4
	if (cr6.lt) goto loc_823B75D4;
	// addi r9,r30,384
	ctx.r9.s64 = r30.s64 + 384;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x823b7574
	goto loc_823B7574;
loc_823B7564:
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// ble cr6,0x823b7784
	if (!cr6.gt) goto loc_823B7784;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823B7574:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x823b7564
	if (!cr6.eq) goto loc_823B7564;
	// b 0x823b7784
	goto loc_823B7784;
loc_823B7580:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r31
	r29.u64 = r11.u64 + r31.u64;
	// lbz r28,5(r29)
	r28.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b7604
	if (cr0.eq) goto loc_823B7604;
	// andi. r11,r9,239
	r11.u64 = ctx.r9.u64 & 239;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// bge cr6,0x823b75dc
	if (!cr6.lt) goto loc_823B75DC;
loc_823B75D4:
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// b 0x823b7724
	goto loc_823B7724;
loc_823B75DC:
	// addi r9,r30,384
	ctx.r9.s64 = r30.s64 + 384;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x823b75f8
	goto loc_823B75F8;
loc_823B75E8:
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// ble cr6,0x823b7784
	if (!cr6.gt) goto loc_823B7784;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823B75F8:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x823b75e8
	if (!cr6.eq) goto loc_823B75E8;
	// b 0x823b7784
	goto loc_823B7784;
loc_823B7604:
	// addi r9,r29,8
	ctx.r9.s64 = r29.s64 + 8;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x823b7664
	if (!cr6.eq) goto loc_823B7664;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x823b7664
	if (!cr6.eq) goto loc_823B7664;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x823b7664
	if (!cr6.eq) goto loc_823B7664;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x823b7664
	if (!cr6.lt) goto loc_823B7664;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// slw r9,r25,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r25.u32 << (r11.u8 & 0x3F));
	// addi r11,r10,88
	r11.s64 = ctx.r10.s64 + 88;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
loc_823B7664:
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b76a0
	if (cr0.eq) goto loc_823B76A0;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// beq 0x823b7690
	if (cr0.eq) goto loc_823B7690;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x823b7690
	if (!cr6.gt) goto loc_823B7690;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_823B7690:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// addi r3,r29,24
	ctx.r3.s64 = r29.s64 + 24;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// bl 0x826e4dfc
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_823B76A0:
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stb r28,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r28.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,61440
	cr6.compare<uint32_t>(ctx.r5.u32, 61440, xer);
	// bgt cr6,0x823b77b0
	if (cr6.gt) goto loc_823B77B0;
	// rlwinm. r10,r28,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// sth r5,0(r31)
	PPC_STORE_U16(r31.u32 + 0, ctx.r5.u16);
	// bne 0x823b76f0
	if (!cr0.eq) goto loc_823B76F0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// b 0x823b7704
	goto loc_823B7704;
loc_823B76F0:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stw r31,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r31.u32);
loc_823B7704:
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// bge cr6,0x823b7760
	if (!cr6.lt) goto loc_823B7760;
	// addi r11,r9,48
	r11.s64 = ctx.r9.s64 + 48;
loc_823B7724:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x823b7784
	if (!cr6.eq) goto loc_823B7784;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// slw r8,r25,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r10.u8 & 0x3F));
	// addi r10,r9,88
	ctx.r10.s64 = ctx.r9.s64 + 88;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// b 0x823b7784
	goto loc_823B7784;
loc_823B7760:
	// addi r10,r30,384
	ctx.r10.s64 = r30.s64 + 384;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x823b777c
	goto loc_823B777C;
loc_823B776C:
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x823b7784
	if (!cr6.gt) goto loc_823B7784;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823B777C:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x823b776c
	if (!cr6.eq) goto loc_823B776C;
loc_823B7784:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// b 0x823b77bc
	goto loc_823B77BC;
loc_823B77B0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823b7150
	sub_823B7150(ctx, base);
loc_823B77BC:
	// rlwinm. r11,r22,0,28,28
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b77e0
	if (cr0.eq) goto loc_823B77E0;
	// cmplw cr6,r23,r24
	cr6.compare<uint32_t>(r23.u32, r24.u32, xer);
	// ble cr6,0x823b77e0
	if (!cr6.gt) goto loc_823B77E0;
	// add r11,r24,r27
	r11.u64 = r24.u64 + r27.u64;
	// subf r5,r24,r23
	ctx.r5.s64 = r23.s64 - r24.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
loc_823B77E0:
	// lbz r11,5(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 5);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r11,r22,28,24,26
	r11.u64 = (__builtin_rotateleft32(r22.u32, 28) & 0xE0) | (r11.u64 & 0xFFFFFFFFFFFFFF1F);
	// stb r11,5(r27)
	PPC_STORE_U8(r27.u32 + 5, r11.u8);
loc_823B77F0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_823B77F8"))) PPC_WEAK_FUNC(sub_823B77F8);
PPC_FUNC_IMPL(__imp__sub_823B77F8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// rlwinm. r11,r11,0,13,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b7848
	if (cr0.eq) goto loc_823B7848;
	// bl 0x826e4ddc
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 379);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x823b7848
	if (cr6.eq) goto loc_823B7848;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,5140
	ctx.r6.s64 = 5140;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x826e4dcc
	__imp__KeBugCheckEx(ctx, base);
loc_823B7848:
	// lbz r11,-11(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + -11);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823b785c
	if (!cr0.eq) goto loc_823B785C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823b7888
	goto loc_823B7888;
loc_823B785C:
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b7878
	if (cr0.eq) goto loc_823B7878;
	// lhz r11,-16(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + -16);
	// lwz r10,-24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + -24);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r3,r11,-48
	ctx.r3.s64 = r11.s64 + -48;
	// b 0x823b7888
	goto loc_823B7888;
loc_823B7878:
	// lhz r11,-16(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + -16);
	// lbz r10,-10(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + -10);
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
loc_823B7888:
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

__attribute__((alias("__imp__sub_823B78A0"))) PPC_WEAK_FUNC(sub_823B78A0);
PPC_FUNC_IMPL(__imp__sub_823B78A0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce0
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// stw r8,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// subf r11,r29,r27
	r11.s64 = r27.s64 - r29.s64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r10,r31,87
	ctx.r10.s64 = r31.s64 + 87;
	// srawi r11,r11,16
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFF) != 0);
	r11.s64 = r11.s32 >> 16;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// rlwinm r30,r10,0,0,27
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// addze r26,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r26.s64 = temp.s64;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// bne cr6,0x823b78ec
	if (!cr6.eq) goto loc_823B78EC;
	// lhz r22,0(r28)
	r22.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// b 0x823b78f0
	goto loc_823B78F0;
loc_823B78EC:
	// li r22,0
	r22.s64 = 0;
loc_823B78F0:
	// subf r10,r31,r30
	ctx.r10.s64 = r30.s64 - r31.s64;
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// clrlwi r24,r10,16
	r24.u64 = ctx.r10.u32 & 0xFFFF;
	// blt cr6,0x823b7958
	if (cr6.lt) goto loc_823B7958;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// blt cr6,0x823b7918
	if (cr6.lt) goto loc_823B7918;
loc_823B7910:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823b7a00
	goto loc_823B7A00;
loc_823B7918:
	// subf r11,r8,r30
	r11.s64 = r30.s64 - ctx.r8.s64;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826e4dac
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823b7910
	if (cr0.lt) goto loc_823B7910;
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// stw r8,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
loc_823B7958:
	// subf r11,r8,r27
	r11.s64 = r27.s64 - ctx.r8.s64;
	// sth r22,2(r31)
	PPC_STORE_U16(r31.u32 + 2, r22.u16);
	// rlwinm r10,r26,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 16) & 0xFFFF0000;
	// sth r24,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r24.u16);
	// srawi r11,r11,16
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFF) != 0);
	r11.s64 = r11.s32 >> 16;
	// stb r25,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r25.u8);
	// lis r7,-18
	ctx.r7.s64 = -1179648;
	// stw r23,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r23.u32);
	// addze. r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r28,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r29,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r29.u32);
	// ori r7,r7,65518
	ctx.r7.u64 = ctx.r7.u64 | 65518;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// stw r26,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r26.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stb r9,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r9.u8);
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// beq 0x823b79c0
	if (cr0.eq) goto loc_823B79C0;
	// rlwinm r5,r11,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF0000;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823b6998
	sub_823B6998(ctx, base);
	// lwz r8,236(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
loc_823B79C0:
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// subf r9,r30,r8
	ctx.r9.s64 = ctx.r8.s64 - r30.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// srawi r5,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stwx r31,r11,r28
	PPC_STORE_U32(r11.u32 + r28.u32, r31.u32);
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// stb r10,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r10.u8);
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// stb r25,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r25.u8);
	// sth r11,2(r30)
	PPC_STORE_U16(r30.u32 + 2, r11.u16);
	// bl 0x823b7150
	sub_823B7150(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_823B7A00:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_823B7A08"))) PPC_WEAK_FUNC(sub_823B7A08);
PPC_FUNC_IMPL(__imp__sub_823B7A08) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addis r10,r28,1
	ctx.r10.s64 = r28.s64 + 65536;
	// li r27,64
	r27.s64 = 64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r11,0
	r11.s64 = 0;
	// rlwinm r29,r10,16,16,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// li r30,0
	r30.s64 = 0;
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_823B7A3C:
	// addi r10,r30,24
	ctx.r10.s64 = r30.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq 0x823b7ac0
	if (cr0.eq) goto loc_823B7AC0;
	// lwz r11,48(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bgt cr6,0x823b7ad0
	if (cr6.gt) goto loc_823B7AD0;
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x823b7ad0
	if (cr6.gt) goto loc_823B7AD0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823b6ab8
	sub_823B6AB8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x823b7ad0
	if (cr0.eq) goto loc_823B7AD0;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r11,28,4,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x823b6d48
	sub_823B6D48(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823b7150
	sub_823B7150(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x823b7c3c
	goto loc_823B7C3C;
loc_823B7AC0:
	// clrlwi r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r10,64
	cr6.compare<uint32_t>(ctx.r10.u32, 64, xer);
	// bne cr6,0x823b7ad0
	if (!cr6.eq) goto loc_823B7AD0;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_823B7AD0:
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmplwi cr6,r30,64
	cr6.compare<uint32_t>(r30.u32, 64, xer);
	// blt cr6,0x823b7a3c
	if (cr6.lt) goto loc_823B7A3C;
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// beq cr6,0x823b7c38
	if (cr6.eq) goto loc_823B7C38;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b7c38
	if (cr0.eq) goto loc_823B7C38;
	// li r11,0
	r11.s64 = 0;
	// addis r30,r28,1
	r30.s64 = r28.s64 + 65536;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bgt cr6,0x823b7b1c
	if (cr6.gt) goto loc_823B7B1C;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_823B7B1C:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826e4dac
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823b7b8c
	if (!cr0.lt) goto loc_823B7B8C;
loc_823B7B40:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x823b7b84
	if (cr6.eq) goto loc_823B7B84;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bge cr6,0x823b7b60
	if (!cr6.lt) goto loc_823B7B60;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_823B7B60:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826e4dac
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823b7b40
	if (cr0.lt) goto loc_823B7B40;
loc_823B7B84:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x823b7c38
	if (cr6.lt) goto loc_823B7C38;
loc_823B7B8C:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// bgt cr6,0x823b7bb0
	if (cr6.gt) goto loc_823B7BB0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
loc_823B7BB0:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826e4dac
	__imp__NtAllocateVirtualMemory(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x823b7c20
	if (cr0.lt) goto loc_823B7C20;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// add r9,r11,r7
	ctx.r9.u64 = r11.u64 + ctx.r7.u64;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r8,r11,r7
	ctx.r8.u64 = r11.u64 + ctx.r7.u64;
	// bl 0x823b78a0
	sub_823B78A0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x823b7c0c
	if (!cr0.eq) goto loc_823B7C0C;
	// lis r30,-16384
	r30.s64 = -1073741824;
	// ori r30,r30,23
	r30.u64 = r30.u64 | 23;
loc_823B7C0C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x823b7c20
	if (cr6.lt) goto loc_823B7C20;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// b 0x823b7c3c
	goto loc_823B7C3C;
loc_823B7C20:
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826e4dec
	__imp__NtFreeVirtualMemory(ctx, base);
loc_823B7C38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B7C3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823B7C44"))) PPC_WEAK_FUNC(sub_823B7C44);
PPC_FUNC_IMPL(__imp__sub_823B7C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B7C48"))) PPC_WEAK_FUNC(sub_823B7C48);
PPC_FUNC_IMPL(__imp__sub_823B7C48) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r11,1412(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 1412);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b7f90
	if (!cr6.eq) goto loc_823B7F90;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// addis r10,r31,1
	ctx.r10.s64 = r31.s64 + 65536;
	// li r19,0
	r19.s64 = 0;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// mr r23,r19
	r23.u64 = r19.u64;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lwzx r26,r11,r29
	r26.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// subf r11,r31,r8
	r11.s64 = ctx.r8.s64 - r31.s64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// clrlwi r27,r11,16
	r27.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// bne cr6,0x823b7cbc
	if (!cr6.eq) goto loc_823B7CBC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// li r27,4097
	r27.s64 = 4097;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// b 0x823b7cd8
	goto loc_823B7CD8;
loc_823B7CBC:
	// lhz r11,2(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823b7cd8
	if (cr0.eq) goto loc_823B7CD8;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, r31.u32, xer);
	// bne cr6,0x823b7cd8
	if (!cr6.eq) goto loc_823B7CD8;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r23,r11,r31
	r23.s64 = r31.s64 - r11.s64;
loc_823B7CD8:
	// rlwinm r11,r24,4,0,27
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r20,r19
	r20.u64 = r19.u64;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// rlwinm r11,r10,0,0,15
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r9,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// clrlwi r25,r9,16
	r25.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x823b7d0c
	if (!cr6.eq) goto loc_823B7D0C;
	// li r25,4097
	r25.s64 = 4097;
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// b 0x823b7d24
	goto loc_823B7D24;
loc_823B7D0C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823b7d24
	if (!cr6.eq) goto loc_823B7D24;
	// lbz r9,5(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm. r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x823b7d24
	if (!cr0.eq) goto loc_823B7D24;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
loc_823B7D24:
	// clrlwi r22,r25,16
	r22.u64 = r25.u32 & 0xFFFF;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// rlwinm r21,r22,4,0,27
	r21.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// subf r28,r21,r10
	r28.s64 = ctx.r10.s64 - r21.s64;
	// bgt cr6,0x823b7d40
	if (cr6.gt) goto loc_823B7D40;
	// mr r11,r19
	r11.u64 = r19.u64;
loc_823B7D40:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b7f90
	if (cr6.eq) goto loc_823B7F90;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823b67d8
	sub_823B67D8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x823b7f90
	if (cr0.eq) goto loc_823B7F90;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826e4dec
	__imp__NtFreeVirtualMemory(ctx, base);
	// lwz r11,24(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,24(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// stw r30,76(r11)
	PPC_STORE_U32(r11.u32 + 76, r30.u32);
	// stw r19,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r19.u32);
	// stw r19,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r19.u32);
	// blt 0x823b7f90
	if (cr0.lt) goto loc_823B7F90;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x823b6998
	sub_823B6998(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,48(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 48);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,48(r26)
	PPC_STORE_U32(r26.u32 + 48, ctx.r10.u32);
	// clrlwi. r11,r27,16
	r11.u64 = r27.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b7e78
	if (cr0.eq) goto loc_823B7E78;
	// li r10,16
	ctx.r10.s64 = 16;
	// sth r27,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r27.u16);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// stb r10,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r10.u8);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// stw r10,48(r29)
	PPC_STORE_U32(r29.u32 + 48, ctx.r10.u32);
	// stw r31,64(r26)
	PPC_STORE_U32(r26.u32 + 64, r31.u32);
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r10,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r10.u8);
	// bge cr6,0x823b7e34
	if (!cr6.lt) goto loc_823B7E34;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x823b7e5c
	if (!cr6.eq) goto loc_823B7E5C;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// slw r7,r8,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// addi r10,r9,88
	ctx.r10.s64 = ctx.r9.s64 + 88;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stwx r9,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r9.u32);
	// b 0x823b7e5c
	goto loc_823B7E5C;
loc_823B7E34:
	// addi r9,r29,384
	ctx.r9.s64 = r29.s64 + 384;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x823b7e50
	goto loc_823B7E50;
loc_823B7E40:
	// lhz r7,-8(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + -8);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// ble cr6,0x823b7e58
	if (!cr6.gt) goto loc_823B7E58;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_823B7E50:
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x823b7e40
	if (!cr6.eq) goto loc_823B7E40;
loc_823B7E58:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_823B7E5C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// b 0x823b7ebc
	goto loc_823B7EBC;
loc_823B7E78:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823b7e94
	if (cr6.eq) goto loc_823B7E94;
	// lbz r11,5(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 5);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stb r11,5(r23)
	PPC_STORE_U8(r23.u32 + 5, r11.u8);
	// stw r23,64(r26)
	PPC_STORE_U32(r26.u32 + 64, r23.u32);
	// b 0x823b7ebc
	goto loc_823B7EBC;
loc_823B7E94:
	// lwz r11,64(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x823b7ebc
	if (cr6.lt) goto loc_823B7EBC;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x823b7ebc
	if (!cr6.lt) goto loc_823B7EBC;
	// lwz r11,40(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 40);
	// stw r11,64(r26)
	PPC_STORE_U32(r26.u32 + 64, r11.u32);
loc_823B7EBC:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x823b7f80
	if (cr6.eq) goto loc_823B7F80;
	// sth r19,2(r28)
	PPC_STORE_U16(r28.u32 + 2, r19.u16);
	// add r11,r21,r28
	r11.u64 = r21.u64 + r28.u64;
	// lbz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U8(r26.u32 + 4);
	// cmplwi cr6,r22,128
	cr6.compare<uint32_t>(r22.u32, 128, xer);
	// stb r19,5(r28)
	PPC_STORE_U8(r28.u32 + 5, r19.u8);
	// sth r25,0(r28)
	PPC_STORE_U16(r28.u32 + 0, r25.u16);
	// stb r10,4(r28)
	PPC_STORE_U8(r28.u32 + 4, ctx.r10.u8);
	// sth r25,2(r11)
	PPC_STORE_U16(r11.u32 + 2, r25.u16);
	// lbz r11,5(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 5);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r28)
	PPC_STORE_U8(r28.u32 + 5, r11.u8);
	// bge cr6,0x823b7f34
	if (!cr6.lt) goto loc_823B7F34;
	// addi r11,r22,48
	r11.s64 = r22.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x823b7f58
	if (!cr6.eq) goto loc_823B7F58;
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// slw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// addi r10,r9,88
	ctx.r10.s64 = ctx.r9.s64 + 88;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r9.u32);
	// b 0x823b7f58
	goto loc_823B7F58;
loc_823B7F34:
	// addi r10,r29,384
	ctx.r10.s64 = r29.s64 + 384;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x823b7f50
	goto loc_823B7F50;
loc_823B7F40:
	// lhz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r22,r9
	cr6.compare<uint32_t>(r22.u32, ctx.r9.u32, xer);
	// ble cr6,0x823b7f58
	if (!cr6.gt) goto loc_823B7F58;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823B7F50:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x823b7f40
	if (!cr6.eq) goto loc_823B7F40;
loc_823B7F58:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r28,8
	ctx.r10.s64 = r28.s64 + 8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r9,12(r28)
	PPC_STORE_U32(r28.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// add r11,r22,r11
	r11.u64 = r22.u64 + r11.u64;
	// stw r11,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r11.u32);
	// b 0x823b7fa0
	goto loc_823B7FA0;
loc_823B7F80:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x823b7fa0
	if (cr6.eq) goto loc_823B7FA0;
	// sth r19,2(r20)
	PPC_STORE_U16(r20.u32 + 2, r19.u16);
	// b 0x823b7fa0
	goto loc_823B7FA0;
loc_823B7F90:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823b7150
	sub_823B7150(ctx, base);
loc_823B7FA0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_823B7FA8"))) PPC_WEAK_FUNC(sub_823B7FA8);
PPC_FUNC_IMPL(__imp__sub_823B7FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r19,19276(r14)
	r19.u64 = PPC_LOAD_U32(r14.u32 + 19276);
	// lwz r16,-14184(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14184);
	// mflr r12
	// bl 0x8239bcdc
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r24,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r24.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r25,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r25.u32);
	// stw r5,308(r31)
	PPC_STORE_U32(r31.u32 + 308, ctx.r5.u32);
	// stw r6,316(r31)
	PPC_STORE_U32(r31.u32 + 316, ctx.r6.u32);
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// stw r21,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r21.u32);
	// li r22,0
	r22.s64 = 0;
	// stw r22,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r22.u32);
	// mr r30,r22
	r30.u64 = r22.u64;
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// li r11,6
	r11.s64 = 6;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_823B7FFC:
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x823b7ffc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823B7FFC;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x823b8074
	if (cr6.eq) {
		// ERROR 823B8074
		return;
	}
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// bne cr6,0x823b8038
	if (!cr6.eq) goto loc_823B8038;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 308);
loc_823B8038:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823b8060
	// ERROR 823B8060
	return;
}

__attribute__((alias("__imp__sub_823B7FB0"))) PPC_WEAK_FUNC(sub_823B7FB0);
PPC_FUNC_IMPL(__imp__sub_823B7FB0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcdc
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r24,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r24.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r25,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r25.u32);
	// stw r5,308(r31)
	PPC_STORE_U32(r31.u32 + 308, ctx.r5.u32);
	// stw r6,316(r31)
	PPC_STORE_U32(r31.u32 + 316, ctx.r6.u32);
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// stw r21,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r21.u32);
	// li r22,0
	r22.s64 = 0;
	// stw r22,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r22.u32);
	// mr r30,r22
	r30.u64 = r22.u64;
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// li r11,6
	r11.s64 = 6;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_823B7FFC:
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x823b7ffc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823B7FFC;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x823b8074
	if (cr6.eq) goto loc_823B8074;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// bne cr6,0x823b8038
	if (!cr6.eq) goto loc_823B8038;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 308);
loc_823B8038:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823b8060
	goto loc_823B8060;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r22,0
	r22.s64 = 0;
	// lwz r21,324(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// lwz r25,300(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// lwz r24,292(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 292);
loc_823B8060:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x823b8070
	if (!cr6.lt) goto loc_823B8070;
loc_823B8068:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823b8540
	goto loc_823B8540;
loc_823B8070:
	// lwz r6,316(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 316);
loc_823B8074:
	// lis r23,-32126
	r23.s64 = -2105409536;
	// lwz r11,15180(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 15180);
	// rlwinm. r11,r11,0,10,10
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b8088
	if (cr0.eq) goto loc_823B8088;
	// ori r24,r24,128
	r24.u64 = r24.u64 | 128;
loc_823B8088:
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b80a0
	if (!cr6.eq) goto loc_823B80A0;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r11,-19212(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19212);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
loc_823B80A0:
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b80b8
	if (!cr6.eq) goto loc_823B80B8;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r11,-19208(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19208);
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
loc_823B80B8:
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b80d0
	if (!cr6.eq) goto loc_823B80D0;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r11,-19200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19200);
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
loc_823B80D0:
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b80e8
	if (!cr6.eq) goto loc_823B80E8;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r11,-19204(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19204);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
loc_823B80E8:
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b8100
	if (!cr6.eq) goto loc_823B8100;
	// lis r11,32764
	r11.s64 = 2147221504;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
loc_823B8100:
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b8118
	if (cr6.eq) goto loc_823B8118;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823b8120
	if (!cr6.gt) goto loc_823B8120;
loc_823B8118:
	// lis r11,15
	r11.s64 = 983040;
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
loc_823B8120:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lis r30,1
	r30.s64 = 65536;
	// bne cr6,0x823b817c
	if (!cr6.eq) goto loc_823B817C;
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x823b814c
	if (!cr6.eq) goto loc_823B814C;
	// lis r11,64
	r11.s64 = 4194304;
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
	// lis r11,0
	r11.s64 = 0;
	// ori r27,r11,65535
	r27.u64 = r11.u64 | 65535;
	// b 0x823b8160
	goto loc_823B8160;
loc_823B814C:
	// lis r11,0
	r11.s64 = 0;
	// ori r27,r11,65535
	r27.u64 = r11.u64 | 65535;
loc_823B8154:
	// add r11,r5,r27
	r11.u64 = ctx.r5.u64 + r27.u64;
	// rlwinm r11,r11,0,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF0000;
loc_823B815C:
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
loc_823B8160:
	// clrlwi. r11,r24,31
	r11.u64 = r24.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r29,1424
	r29.s64 = 1424;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// bne 0x823b81b4
	if (!cr0.eq) goto loc_823B81B4;
	// beq cr6,0x823b81a8
	if (cr6.eq) goto loc_823B81A8;
	// oris r24,r24,32768
	r24.u64 = r24.u64 | 2147483648;
	// b 0x823b81b8
	goto loc_823B81B8;
loc_823B817C:
	// lis r11,0
	r11.s64 = 0;
	// ori r27,r11,65535
	r27.u64 = r11.u64 | 65535;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// add r11,r6,r27
	r11.u64 = ctx.r6.u64 + r27.u64;
	// rlwinm r11,r11,0,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r11,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r11.u32);
	// bne cr6,0x823b8154
	if (!cr6.eq) goto loc_823B8154;
	// addis r11,r11,16
	r11.s64 = r11.s64 + 1048576;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,0,0,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFF00000;
	// b 0x823b815c
	goto loc_823B815C;
loc_823B81A8:
	// li r29,1452
	r29.s64 = 1452;
	// li r21,-1
	r21.s64 = -1;
	// b 0x823b81b8
	goto loc_823B81B8;
loc_823B81B4:
	// bne cr6,0x823b8068
	if (!cr6.eq) goto loc_823B8068;
loc_823B81B8:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// beq cr6,0x823b82c0
	if (cr6.eq) goto loc_823B82C0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b8214
	if (cr6.eq) goto loc_823B8214;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b8068
	if (cr6.eq) goto loc_823B8068;
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b8068
	if (cr6.eq) goto loc_823B8068;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x823b8068
	if (cr6.gt) goto loc_823B8068;
	// rlwinm. r9,r24,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x823b8068
	if (!cr0.eq) goto loc_823B8068;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// add r28,r10,r25
	r28.u64 = ctx.r10.u64 + r25.u64;
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// b 0x823b82b0
	goto loc_823B82B0;
loc_823B8214:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826e4e0c
	__imp__NtQueryVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823b8068
	if (cr0.lt) goto loc_823B8068;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplw cr6,r3,r25
	cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, xer);
	// bne cr6,0x823b8068
	if (!cr6.eq) goto loc_823B8068;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x823b8068
	if (cr6.eq) goto loc_823B8068;
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r11,4096
	cr6.compare<uint32_t>(r11.u32, 4096, xer);
	// bne cr6,0x823b82a8
	if (!cr6.eq) goto loc_823B82A8;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// stw r11,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826e4e0c
	__imp__NtQueryVirtualMemory(ctx, base);
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823b82b0
	if (cr0.lt) goto loc_823B82B0;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r10,8192
	cr6.compare<uint32_t>(ctx.r10.u32, 8192, xer);
	// bne cr6,0x823b82b0
	if (!cr6.eq) goto loc_823B82B0;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
	// b 0x823b82b0
	goto loc_823B82B0;
loc_823B82A8:
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_823B82B0:
	// li r26,1
	r26.s64 = 1;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// b 0x823b830c
	goto loc_823B830C;
loc_823B82C0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b8068
	if (!cr6.eq) goto loc_823B8068;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r31,308
	ctx.r4.s64 = r31.s64 + 308;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x826e4dac
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823b8068
	if (cr0.lt) goto loc_823B8068;
	// mr r26,r22
	r26.u64 = r22.u64;
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b8300
	if (!cr6.eq) goto loc_823B8300;
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
loc_823B8300:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_823B830C:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x823b836c
	if (!cr6.eq) goto loc_823B836C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r31,316
	ctx.r4.s64 = r31.s64 + 316;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x826e4dac
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823b8360
	if (!cr0.lt) goto loc_823B8360;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x823b8068
	if (!cr6.eq) goto loc_823B8068;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,308
	ctx.r4.s64 = r31.s64 + 308;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x826e4dec
	__imp__NtFreeVirtualMemory(ctx, base);
	// b 0x823b8068
	goto loc_823B8068;
loc_823B8360:
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// add r28,r28,r11
	r28.u64 = r28.u64 + r11.u64;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_823B836C:
	// addi r11,r10,1431
	r11.s64 = ctx.r10.s64 + 1431;
	// li r8,8
	ctx.r8.s64 = 8;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r9,r29,128
	ctx.r9.s64 = r29.s64 + 128;
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
loc_823B8380:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne 0x823b8380
	if (!cr0.eq) goto loc_823B8380;
	// mr r29,r11
	r29.u64 = r11.u64;
	// stw r22,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r22.u32);
	// lwz r10,15180(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 15180);
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b83c8
	if (cr0.eq) goto loc_823B83C8;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// addi r9,r9,1548
	ctx.r9.s64 = ctx.r9.s64 + 1548;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 380, r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r11,380(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 380);
	// addi r29,r11,1548
	r29.s64 = r11.s64 + 1548;
loc_823B83C8:
	// addi r11,r9,15
	r11.s64 = ctx.r9.s64 + 15;
	// rlwinm r30,r11,0,0,27
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// lis r11,-4353
	r11.s64 = -285278208;
	// ori r11,r11,61183
	r11.u64 = r11.u64 | 61183;
	// lis r12,24577
	r12.s64 = 1610678272;
	// ori r12,r12,125
	r12.u64 = r12.u64 | 125;
	// and r10,r24,r12
	ctx.r10.u64 = r24.u64 & r12.u64;
	// rlwinm r9,r30,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// sth r9,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r9.u16);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,5(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5, ctx.r8.u8);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r24,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r24.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// sth r27,368(r11)
	PPC_STORE_U16(r11.u32 + 368, r27.u16);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r11,r29
	ctx.r10.s64 = r29.s64 - r11.s64;
	// sth r10,58(r11)
	PPC_STORE_U16(r11.u32 + 58, ctx.r10.u16);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r22,60(r11)
	PPC_STORE_U32(r11.u32 + 60, r22.u32);
	// bl 0x826e4ddc
	__imp__KeGetCurrentProcessType(ctx, base);
	// li r10,128
	ctx.r10.s64 = 128;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stb r3,379(r9)
	PPC_STORE_U8(ctx.r9.u32 + 379, ctx.r3.u8);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,384
	r11.s64 = r11.s64 + 384;
loc_823B8448:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne 0x823b8448
	if (!cr0.eq) goto loc_823B8448;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,88
	r11.s64 = r11.s64 + 88;
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(r21.s32, -1, xer);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// bne cr6,0x823b8480
	if (!cr6.eq) goto loc_823B8480;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r21,r29
	r21.u64 = r29.u64;
	// bl 0x826e4bdc
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_823B8480:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r21,1408(r11)
	PPC_STORE_U32(r11.u32 + 1408, r21.u32);
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r11,308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + r11.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// add r4,r30,r3
	ctx.r4.u64 = r30.u64 + ctx.r3.u64;
	// bl 0x823b78a0
	sub_823B78A0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823b8068
	if (cr0.eq) goto loc_823B8068;
	// rlwinm. r11,r24,0,15,15
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// sth r22,56(r11)
	PPC_STORE_U16(r11.u32 + 56, r22.u16);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, r11.u32);
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, r11.u32);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm r11,r11,28,4,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, r11.u32);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// rlwinm r11,r11,28,4,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, r11.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, r11.u32);
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// addi r11,r11,15
	r11.s64 = r11.s64 + 15;
	// rlwinm r11,r11,28,4,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, r11.u32);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,1412(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1412, r11.u32);
	// li r11,31
	r11.s64 = 31;
	// li r10,-16
	ctx.r10.s64 = -16;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r10,84(r11)
	PPC_STORE_U32(r11.u32 + 84, ctx.r10.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_823B8540:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_823B8048"))) PPC_WEAK_FUNC(sub_823B8048);
PPC_FUNC_IMPL(__imp__sub_823B8048) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r22,0
	r22.s64 = 0;
	// lwz r21,324(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// lwz r25,300(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// lwz r24,292(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x823b8070
	if (!cr6.lt) goto loc_823B8070;
loc_823B8068:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823b8540
	goto loc_823B8540;
loc_823B8070:
	// lwz r6,316(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// lis r23,-32126
	r23.s64 = -2105409536;
	// lwz r11,15180(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 15180);
	// rlwinm. r11,r11,0,10,10
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b8088
	if (cr0.eq) goto loc_823B8088;
	// ori r24,r24,128
	r24.u64 = r24.u64 | 128;
loc_823B8088:
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b80a0
	if (!cr6.eq) goto loc_823B80A0;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r11,-19212(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19212);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
loc_823B80A0:
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b80b8
	if (!cr6.eq) goto loc_823B80B8;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r11,-19208(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19208);
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
loc_823B80B8:
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b80d0
	if (!cr6.eq) goto loc_823B80D0;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r11,-19200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19200);
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
loc_823B80D0:
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b80e8
	if (!cr6.eq) goto loc_823B80E8;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r11,-19204(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19204);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
loc_823B80E8:
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b8100
	if (!cr6.eq) goto loc_823B8100;
	// lis r11,32764
	r11.s64 = 2147221504;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
loc_823B8100:
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b8118
	if (cr6.eq) goto loc_823B8118;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823b8120
	if (!cr6.gt) goto loc_823B8120;
loc_823B8118:
	// lis r11,15
	r11.s64 = 983040;
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
loc_823B8120:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lis r30,1
	r30.s64 = 65536;
	// bne cr6,0x823b817c
	if (!cr6.eq) goto loc_823B817C;
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x823b814c
	if (!cr6.eq) goto loc_823B814C;
	// lis r11,64
	r11.s64 = 4194304;
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
	// lis r11,0
	r11.s64 = 0;
	// ori r27,r11,65535
	r27.u64 = r11.u64 | 65535;
	// b 0x823b8160
	goto loc_823B8160;
loc_823B814C:
	// lis r11,0
	r11.s64 = 0;
	// ori r27,r11,65535
	r27.u64 = r11.u64 | 65535;
loc_823B8154:
	// add r11,r5,r27
	r11.u64 = ctx.r5.u64 + r27.u64;
	// rlwinm r11,r11,0,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF0000;
loc_823B815C:
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
loc_823B8160:
	// clrlwi. r11,r24,31
	r11.u64 = r24.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r29,1424
	r29.s64 = 1424;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// bne 0x823b81b4
	if (!cr0.eq) goto loc_823B81B4;
	// beq cr6,0x823b81a8
	if (cr6.eq) goto loc_823B81A8;
	// oris r24,r24,32768
	r24.u64 = r24.u64 | 2147483648;
	// b 0x823b81b8
	goto loc_823B81B8;
loc_823B817C:
	// lis r11,0
	r11.s64 = 0;
	// ori r27,r11,65535
	r27.u64 = r11.u64 | 65535;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// add r11,r6,r27
	r11.u64 = ctx.r6.u64 + r27.u64;
	// rlwinm r11,r11,0,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r11,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r11.u32);
	// bne cr6,0x823b8154
	if (!cr6.eq) goto loc_823B8154;
	// addis r11,r11,16
	r11.s64 = r11.s64 + 1048576;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,0,0,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFF00000;
	// b 0x823b815c
	goto loc_823B815C;
loc_823B81A8:
	// li r29,1452
	r29.s64 = 1452;
	// li r21,-1
	r21.s64 = -1;
	// b 0x823b81b8
	goto loc_823B81B8;
loc_823B81B4:
	// bne cr6,0x823b8068
	if (!cr6.eq) goto loc_823B8068;
loc_823B81B8:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// beq cr6,0x823b82c0
	if (cr6.eq) goto loc_823B82C0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b8214
	if (cr6.eq) goto loc_823B8214;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b8068
	if (cr6.eq) goto loc_823B8068;
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b8068
	if (cr6.eq) goto loc_823B8068;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x823b8068
	if (cr6.gt) goto loc_823B8068;
	// rlwinm. r9,r24,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x823b8068
	if (!cr0.eq) goto loc_823B8068;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// add r28,r10,r25
	r28.u64 = ctx.r10.u64 + r25.u64;
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// b 0x823b82b0
	goto loc_823B82B0;
loc_823B8214:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826e4e0c
	__imp__NtQueryVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823b8068
	if (cr0.lt) goto loc_823B8068;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplw cr6,r3,r25
	cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, xer);
	// bne cr6,0x823b8068
	if (!cr6.eq) goto loc_823B8068;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x823b8068
	if (cr6.eq) goto loc_823B8068;
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r11,4096
	cr6.compare<uint32_t>(r11.u32, 4096, xer);
	// bne cr6,0x823b82a8
	if (!cr6.eq) goto loc_823B82A8;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// stw r11,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826e4e0c
	__imp__NtQueryVirtualMemory(ctx, base);
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823b82b0
	if (cr0.lt) goto loc_823B82B0;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r10,8192
	cr6.compare<uint32_t>(ctx.r10.u32, 8192, xer);
	// bne cr6,0x823b82b0
	if (!cr6.eq) goto loc_823B82B0;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
	// b 0x823b82b0
	goto loc_823B82B0;
loc_823B82A8:
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_823B82B0:
	// li r26,1
	r26.s64 = 1;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// b 0x823b830c
	goto loc_823B830C;
loc_823B82C0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b8068
	if (!cr6.eq) goto loc_823B8068;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r31,308
	ctx.r4.s64 = r31.s64 + 308;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x826e4dac
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823b8068
	if (cr0.lt) goto loc_823B8068;
	// mr r26,r22
	r26.u64 = r22.u64;
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b8300
	if (!cr6.eq) goto loc_823B8300;
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
loc_823B8300:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_823B830C:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x823b836c
	if (!cr6.eq) goto loc_823B836C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r31,316
	ctx.r4.s64 = r31.s64 + 316;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x826e4dac
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823b8360
	if (!cr0.lt) goto loc_823B8360;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x823b8068
	if (!cr6.eq) goto loc_823B8068;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,308
	ctx.r4.s64 = r31.s64 + 308;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x826e4dec
	__imp__NtFreeVirtualMemory(ctx, base);
	// b 0x823b8068
	goto loc_823B8068;
loc_823B8360:
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// add r28,r28,r11
	r28.u64 = r28.u64 + r11.u64;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_823B836C:
	// addi r11,r10,1431
	r11.s64 = ctx.r10.s64 + 1431;
	// li r8,8
	ctx.r8.s64 = 8;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r9,r29,128
	ctx.r9.s64 = r29.s64 + 128;
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
loc_823B8380:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne 0x823b8380
	if (!cr0.eq) goto loc_823B8380;
	// mr r29,r11
	r29.u64 = r11.u64;
	// stw r22,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r22.u32);
	// lwz r10,15180(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 15180);
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b83c8
	if (cr0.eq) goto loc_823B83C8;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// addi r9,r9,1548
	ctx.r9.s64 = ctx.r9.s64 + 1548;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 380, r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r11,380(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 380);
	// addi r29,r11,1548
	r29.s64 = r11.s64 + 1548;
loc_823B83C8:
	// addi r11,r9,15
	r11.s64 = ctx.r9.s64 + 15;
	// rlwinm r30,r11,0,0,27
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// lis r11,-4353
	r11.s64 = -285278208;
	// ori r11,r11,61183
	r11.u64 = r11.u64 | 61183;
	// lis r12,24577
	r12.s64 = 1610678272;
	// ori r12,r12,125
	r12.u64 = r12.u64 | 125;
	// and r10,r24,r12
	ctx.r10.u64 = r24.u64 & r12.u64;
	// rlwinm r9,r30,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// sth r9,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r9.u16);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,5(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5, ctx.r8.u8);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r24,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r24.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// sth r27,368(r11)
	PPC_STORE_U16(r11.u32 + 368, r27.u16);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r11,r29
	ctx.r10.s64 = r29.s64 - r11.s64;
	// sth r10,58(r11)
	PPC_STORE_U16(r11.u32 + 58, ctx.r10.u16);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r22,60(r11)
	PPC_STORE_U32(r11.u32 + 60, r22.u32);
	// bl 0x826e4ddc
	__imp__KeGetCurrentProcessType(ctx, base);
	// li r10,128
	ctx.r10.s64 = 128;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stb r3,379(r9)
	PPC_STORE_U8(ctx.r9.u32 + 379, ctx.r3.u8);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,384
	r11.s64 = r11.s64 + 384;
loc_823B8448:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne 0x823b8448
	if (!cr0.eq) goto loc_823B8448;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,88
	r11.s64 = r11.s64 + 88;
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(r21.s32, -1, xer);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// bne cr6,0x823b8480
	if (!cr6.eq) goto loc_823B8480;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r21,r29
	r21.u64 = r29.u64;
	// bl 0x826e4bdc
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_823B8480:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r21,1408(r11)
	PPC_STORE_U32(r11.u32 + 1408, r21.u32);
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r11,308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + r11.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// add r4,r30,r3
	ctx.r4.u64 = r30.u64 + ctx.r3.u64;
	// bl 0x823b78a0
	sub_823B78A0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823b8068
	if (cr0.eq) goto loc_823B8068;
	// rlwinm. r11,r24,0,15,15
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// sth r22,56(r11)
	PPC_STORE_U16(r11.u32 + 56, r22.u16);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, r11.u32);
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, r11.u32);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm r11,r11,28,4,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, r11.u32);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// rlwinm r11,r11,28,4,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, r11.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, r11.u32);
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// addi r11,r11,15
	r11.s64 = r11.s64 + 15;
	// rlwinm r11,r11,28,4,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, r11.u32);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,1412(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1412, r11.u32);
	// li r11,31
	r11.s64 = 31;
	// li r10,-16
	ctx.r10.s64 = -16;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r10,84(r11)
	PPC_STORE_U32(r11.u32 + 84, ctx.r10.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_823B8540:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_823B8548"))) PPC_WEAK_FUNC(sub_823B8548);
PPC_FUNC_IMPL(__imp__sub_823B8548) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B8554"))) PPC_WEAK_FUNC(sub_823B8554);
PPC_FUNC_IMPL(__imp__sub_823B8554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B8558"))) PPC_WEAK_FUNC(sub_823B8558);
PPC_FUNC_IMPL(__imp__sub_823B8558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
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
	// lwz r19,19276(r14)
	r19.u64 = PPC_LOAD_U32(r14.u32 + 19276);
	// lwz r16,-14160(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14160);
	// mflr r12
	// bl 0x8239bce0
	// addi r31,r1,-320
	r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r30
	r27.u64 = r30.u64;
	// stw r27,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r27.u32);
	// li r24,0
	r24.s64 = 0;
	// stw r24,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r24.u32);
	// mr r22,r24
	r22.u64 = r24.u64;
	// stw r22,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r22.u32);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// rlwinm. r11,r11,0,13,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b85c8
	if (cr0.eq) goto loc_823B85C8;
	// bl 0x826e4ddc
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 379);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x823b85c8
	if (cr6.eq) goto loc_823B85C8;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1459
	ctx.r6.s64 = 1459;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x826e4dcc
	__imp__KeBugCheckEx(ctx, base);
loc_823B85C8:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// or r23,r11,r29
	r23.u64 = r11.u64 | r29.u64;
	// li r28,1
	r28.s64 = 1;
	// mr r11,r25
	r11.u64 = r25.u64;
	// bne cr6,0x823b85e4
	if (!cr6.eq) goto loc_823B85E4;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823B85E4:
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// rlwinm r4,r11,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// rlwinm r29,r4,28,4,31
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r23,31
	r11.u64 = r23.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b8614
	if (!cr0.eq) goto loc_823B8614;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1408);
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r22,r28
	r22.u64 = r28.u64;
	// stw r22,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r22.u32);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_823B8614:
	// cmplwi cr6,r29,128
	cr6.compare<uint32_t>(r29.u32, 128, xer);
	// bge cr6,0x823b880c
	if (!cr6.lt) goto loc_823B880C;
	// addi r11,r29,48
	r11.s64 = r29.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823b86d0
	if (cr6.eq) goto loc_823B86D0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// stb r6,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r6.u8);
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bne cr6,0x823b86a0
	if (!cr6.eq) goto loc_823B86A0;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x823b86a0
	if (!cr6.eq) goto loc_823B86A0;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bne cr6,0x823b86a0
	if (!cr6.eq) goto loc_823B86A0;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// slw r8,r28,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r10.u8 & 0x3F));
	// addi r10,r9,88
	ctx.r10.s64 = ctx.r9.s64 + 88;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
loc_823B86A0:
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - r29.s64;
	// stw r10,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r10.u32);
	// mr r26,r11
	r26.u64 = r11.u64;
	// stw r26,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r26.u32);
	// rlwimi r6,r28,0,28,26
	ctx.r6.u64 = (__builtin_rotateleft32(r28.u32, 0) & 0xFFFFFFFFFFFFFFEF) | (ctx.r6.u64 & 0x10);
	// stb r6,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r6.u8);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r10,r25,r10
	ctx.r10.s64 = ctx.r10.s64 - r25.s64;
	// stb r10,6(r11)
	PPC_STORE_U8(r11.u32 + 6, ctx.r10.u8);
	// stb r24,7(r11)
	PPC_STORE_U8(r11.u32 + 7, r24.u8);
	// b 0x823b8c78
	goto loc_823B8C78;
loc_823B86D0:
	// clrlwi r8,r29,27
	ctx.r8.u64 = r29.u32 & 0x1F;
	// rlwinm r11,r29,27,5,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x7FFFFFF;
	// addi r10,r11,88
	ctx.r10.s64 = r11.s64 + 88;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + r30.u64;
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// slw r10,r28,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r8.u8 & 0x3F));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ~ctx.r10.u64;
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x823b8720
	if (cr6.lt) goto loc_823B8720;
	// beq cr6,0x823b8740
	if (cr6.eq) goto loc_823B8740;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x823b8760
	if (cr6.lt) goto loc_823B8760;
	// beq cr6,0x823b8780
	if (cr6.eq) goto loc_823B8780;
	// b 0x823b8818
	goto loc_823B8818;
loc_823B8720:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b8730
	if (cr6.eq) goto loc_823B8730;
	// addi r9,r30,384
	ctx.r9.s64 = r30.s64 + 384;
	// b 0x823b878c
	goto loc_823B878C;
loc_823B8730:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
loc_823B8740:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b8750
	if (cr6.eq) goto loc_823B8750;
	// addi r9,r30,640
	ctx.r9.s64 = r30.s64 + 640;
	// b 0x823b878c
	goto loc_823B878C;
loc_823B8750:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
loc_823B8760:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b8770
	if (cr6.eq) goto loc_823B8770;
	// addi r9,r30,896
	ctx.r9.s64 = r30.s64 + 896;
	// b 0x823b878c
	goto loc_823B878C;
loc_823B8770:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
loc_823B8780:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b8818
	if (cr6.eq) goto loc_823B8818;
	// addi r9,r30,1152
	ctx.r9.s64 = r30.s64 + 1152;
loc_823B878C:
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	r11.u64 = ctx.r10.u64 & ~r11.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subfic r11,r11,31
	xer.ca = r11.u32 <= 31;
	r11.s64 = 31 - r11.s64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r3,r11,-8
	ctx.r3.s64 = r11.s64 + -8;
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x823b88b8
	if (!cr6.eq) goto loc_823B88B8;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x823b88b8
	if (!cr6.eq) goto loc_823B88B8;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x823b88b8
	if (!cr6.eq) goto loc_823B88B8;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// slw r9,r28,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r28.u32 << (r11.u8 & 0x3F));
	// addi r11,r10,88
	r11.s64 = ctx.r10.s64 + 88;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// b 0x823b88b8
	goto loc_823B88B8;
loc_823B880C:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bgt cr6,0x823b8cb4
	if (cr6.gt) goto loc_823B8CB4;
loc_823B8818:
	// addi r10,r30,384
	ctx.r10.s64 = r30.s64 + 384;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823b8874
	if (cr6.eq) goto loc_823B8874;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// blt cr6,0x823b8874
	if (cr6.lt) goto loc_823B8874;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
loc_823B8848:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823b8874
	if (cr6.eq) goto loc_823B8874;
	// addi r3,r11,-8
	ctx.r3.s64 = r11.s64 + -8;
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, xer);
	// bge cr6,0x823b8888
	if (!cr6.lt) goto loc_823B8888;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823b8848
	goto loc_823B8848;
loc_823B8874:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823b7a08
	sub_823B7A08(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823b8d80
	if (cr0.eq) goto loc_823B8D80;
loc_823B8888:
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x823b88b4
	if (!cr6.eq) goto loc_823B88B4;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bne cr6,0x823b88b4
	if (!cr6.eq) goto loc_823B88B4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_823B88B4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_823B88B8:
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// lbz r10,5(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// stb r10,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r10.u8);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r8,48(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r9,48(r27)
	PPC_STORE_U32(r27.u32 + 48, ctx.r9.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r26,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r26.u32);
	// stb r28,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r28.u8);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r8,r25,r8
	ctx.r8.s64 = ctx.r8.s64 - r25.s64;
	// subf. r6,r29,r9
	ctx.r6.s64 = ctx.r9.s64 - r29.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// stb r8,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r8.u8);
	// stb r24,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, r24.u8);
	// beq 0x823b8c64
	if (cr0.eq) goto loc_823B8C64;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x823b8924
	if (!cr6.eq) goto loc_823B8924;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, r11.u8);
	// b 0x823b8c64
	goto loc_823B8C64;
loc_823B8924:
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r9,r3
	r30.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stb r10,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r10.u8);
	// sth r11,2(r30)
	PPC_STORE_U16(r30.u32 + 2, r11.u16);
	// lbz r11,4(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r11,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r11.u8);
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r9,0(r30)
	PPC_STORE_U16(r30.u32 + 0, ctx.r9.u16);
	// rlwinm. r11,r10,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b89d8
	if (cr0.eq) goto loc_823B89D8;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// bge cr6,0x823b89a0
	if (!cr6.lt) goto loc_823B89A0;
	// addi r10,r9,48
	ctx.r10.s64 = ctx.r9.s64 + 48;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// rlwinm r11,r10,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r9.u8);
	// add r10,r11,r27
	ctx.r10.u64 = r11.u64 + r27.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823b8a44
	if (!cr6.eq) goto loc_823B8A44;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// slw r8,r28,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (r28.u32 << (r11.u8 & 0x3F));
	// addi r11,r9,88
	r11.s64 = ctx.r9.s64 + 88;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// b 0x823b8a40
	goto loc_823B8A40;
loc_823B89A0:
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// addi r10,r27,384
	ctx.r10.s64 = r27.s64 + 384;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
loc_823B89B4:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823b8a98
	if (cr6.eq) goto loc_823B8A98;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x823b8a98
	if (!cr6.gt) goto loc_823B8A98;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823b89b4
	goto loc_823B89B4;
loc_823B89D8:
	// rlwinm r11,r6,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x823b8abc
	if (cr0.eq) goto loc_823B8ABC;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r9.u16);
	// cmplwi cr6,r8,128
	cr6.compare<uint32_t>(ctx.r8.u32, 128, xer);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// bge cr6,0x823b8a60
	if (!cr6.lt) goto loc_823B8A60;
	// addi r10,r8,48
	ctx.r10.s64 = ctx.r8.s64 + 48;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// rlwinm r11,r10,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r9.u8);
	// add r10,r11,r27
	ctx.r10.u64 = r11.u64 + r27.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823b8a44
	if (!cr6.eq) goto loc_823B8A44;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// slw r8,r28,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (r28.u32 << (r11.u8 & 0x3F));
	// addi r11,r9,88
	r11.s64 = ctx.r9.s64 + 88;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
loc_823B8A40:
	// stwx r9,r11,r27
	PPC_STORE_U32(r11.u32 + r27.u32, ctx.r9.u32);
loc_823B8A44:
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x823b8ab0
	goto loc_823B8AB0;
loc_823B8A60:
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// addi r10,r27,384
	ctx.r10.s64 = r27.s64 + 384;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
loc_823B8A74:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823b8a98
	if (cr6.eq) goto loc_823B8A98;
	// lhz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// ble cr6,0x823b8a98
	if (!cr6.gt) goto loc_823B8A98;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823b8a74
	goto loc_823B8A74;
loc_823B8A98:
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_823B8AB0:
	// lwz r11,48(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// add r11,r6,r11
	r11.u64 = ctx.r6.u64 + r11.u64;
	// b 0x823b8c28
	goto loc_823B8C28;
loc_823B8ABC:
	// stb r10,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r10.u8);
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bne cr6,0x823b8b20
	if (!cr6.eq) goto loc_823B8B20;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x823b8b20
	if (!cr6.eq) goto loc_823B8B20;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bne cr6,0x823b8b20
	if (!cr6.eq) goto loc_823B8B20;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// bge cr6,0x823b8b20
	if (!cr6.lt) goto loc_823B8B20;
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// slw r8,r28,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r10.u8 & 0x3F));
	// addi r10,r9,88
	ctx.r10.s64 = ctx.r9.s64 + 88;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// stwx r9,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r9.u32);
loc_823B8B20:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lwz r9,48(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,48(r27)
	PPC_STORE_U32(r27.u32 + 48, ctx.r10.u32);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// add r5,r11,r6
	ctx.r5.u64 = r11.u64 + ctx.r6.u64;
	// cmplwi cr6,r5,61440
	cr6.compare<uint32_t>(ctx.r5.u32, 61440, xer);
	// bgt cr6,0x823b8c30
	if (cr6.gt) goto loc_823B8C30;
	// clrlwi r11,r5,16
	r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823b8b60
	if (!cr0.eq) goto loc_823B8B60;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
loc_823B8B60:
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// bge cr6,0x823b8bd0
	if (!cr6.lt) goto loc_823B8BD0;
	// addi r10,r9,48
	ctx.r10.s64 = ctx.r9.s64 + 48;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// rlwinm r11,r10,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r9.u8);
	// add r10,r11,r27
	ctx.r10.u64 = r11.u64 + r27.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823b8bb4
	if (!cr6.eq) goto loc_823B8BB4;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// slw r8,r28,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (r28.u32 << (r11.u8 & 0x3F));
	// addi r11,r9,88
	r11.s64 = ctx.r9.s64 + 88;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r27
	PPC_STORE_U32(r11.u32 + r27.u32, ctx.r9.u32);
loc_823B8BB4:
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x823b8c20
	goto loc_823B8C20;
loc_823B8BD0:
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// addi r10,r27,384
	ctx.r10.s64 = r27.s64 + 384;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
loc_823B8BE4:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823b8c08
	if (cr6.eq) goto loc_823B8C08;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x823b8c08
	if (!cr6.gt) goto loc_823B8C08;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823b8be4
	goto loc_823B8BE4;
loc_823B8C08:
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_823B8C20:
	// lwz r11,48(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// add r11,r5,r11
	r11.u64 = ctx.r5.u64 + r11.u64;
loc_823B8C28:
	// stw r11,48(r27)
	PPC_STORE_U32(r27.u32 + 48, r11.u32);
	// b 0x823b8c3c
	goto loc_823B8C3C;
loc_823B8C30:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823b7150
	sub_823B7150(ctx, base);
loc_823B8C3C:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stb r10,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r10.u8);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b8c64
	if (cr0.eq) goto loc_823B8C64;
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	r11.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// stw r30,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r30.u32);
loc_823B8C64:
	// rlwinm. r11,r10,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b8c78
	if (cr0.eq) goto loc_823B8C78;
	// lbz r11,5(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 5);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stb r11,5(r26)
	PPC_STORE_U8(r26.u32 + 5, r11.u8);
loc_823B8C78:
	// addi r30,r26,16
	r30.s64 = r26.s64 + 16;
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x823b8c98
	if (cr6.eq) goto loc_823B8C98;
	// lwz r3,1408(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 1408);
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r22,r24
	r22.u64 = r24.u64;
	// stw r22,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r22.u32);
loc_823B8C98:
	// rlwinm. r11,r23,0,28,28
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b8db4
	if (cr0.eq) goto loc_823B8DB4;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// b 0x823b8db4
	goto loc_823B8DB4;
loc_823B8CB4:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b8d84
	if (cr0.eq) goto loc_823B8D84;
	// rlwinm. r11,r23,0,28,28
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// mr r11,r24
	r11.u64 = r24.u64;
	// bne 0x823b8cdc
	if (!cr0.eq) goto loc_823B8CDC;
	// lis r11,128
	r11.s64 = 8388608;
loc_823B8CDC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// oris r5,r11,24576
	ctx.r5.u64 = r11.u64 | 1610612736;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x826e4dac
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823b8d80
	if (cr0.lt) goto loc_823B8D80;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// addi r11,r30,88
	r11.s64 = r30.s64 + 88;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r10,r25,r10
	ctx.r10.s64 = ctx.r10.s64 - r25.s64;
	// li r9,11
	ctx.r9.s64 = 11;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// sth r10,32(r8)
	PPC_STORE_U16(ctx.r8.u32 + 32, ctx.r10.u16);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stb r9,37(r10)
	PPC_STORE_U8(ctx.r10.u32 + 37, ctx.r9.u8);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r10,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r10,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// b 0x823b8db4
	goto loc_823B8DB4;
loc_823B8D80:
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_823B8D84:
	// rlwinm. r11,r23,0,29,29
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b8db0
	if (cr0.eq) goto loc_823B8DB0;
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,23
	r11.u64 = r11.u64 | 23;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// stw r24,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r24.u32);
	// stw r28,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r28.u32);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// stw r24,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r24.u32);
	// stw r4,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r4.u32);
	// bl 0x826e4d9c
	__imp__RtlRaiseException(ctx, base);
loc_823B8DB0:
	// stw r24,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r24.u32);
loc_823B8DB4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	r12.s64 = r31.s64 + 320;
	// bl 0x823b8df4
	sub_823B8DF4(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r1,r31,320
	ctx.r1.s64 = r31.s64 + 320;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_823B8560"))) PPC_WEAK_FUNC(sub_823B8560);
PPC_FUNC_IMPL(__imp__sub_823B8560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// addi r31,r1,-320
	r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r30
	r27.u64 = r30.u64;
	// stw r27,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r27.u32);
	// li r24,0
	r24.s64 = 0;
	// stw r24,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r24.u32);
	// mr r22,r24
	r22.u64 = r24.u64;
	// stw r22,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r22.u32);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// rlwinm. r11,r11,0,13,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b85c8
	if (cr0.eq) goto loc_823B85C8;
	// bl 0x826e4ddc
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 379);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x823b85c8
	if (cr6.eq) goto loc_823B85C8;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1459
	ctx.r6.s64 = 1459;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x826e4dcc
	__imp__KeBugCheckEx(ctx, base);
loc_823B85C8:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// or r23,r11,r29
	r23.u64 = r11.u64 | r29.u64;
	// li r28,1
	r28.s64 = 1;
	// mr r11,r25
	r11.u64 = r25.u64;
	// bne cr6,0x823b85e4
	if (!cr6.eq) goto loc_823B85E4;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823B85E4:
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// rlwinm r4,r11,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// rlwinm r29,r4,28,4,31
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r23,31
	r11.u64 = r23.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b8614
	if (!cr0.eq) goto loc_823B8614;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1408);
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r22,r28
	r22.u64 = r28.u64;
	// stw r22,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r22.u32);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_823B8614:
	// cmplwi cr6,r29,128
	cr6.compare<uint32_t>(r29.u32, 128, xer);
	// bge cr6,0x823b880c
	if (!cr6.lt) goto loc_823B880C;
	// addi r11,r29,48
	r11.s64 = r29.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823b86d0
	if (cr6.eq) goto loc_823B86D0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// stb r6,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r6.u8);
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bne cr6,0x823b86a0
	if (!cr6.eq) goto loc_823B86A0;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x823b86a0
	if (!cr6.eq) goto loc_823B86A0;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bne cr6,0x823b86a0
	if (!cr6.eq) goto loc_823B86A0;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// slw r8,r28,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r10.u8 & 0x3F));
	// addi r10,r9,88
	ctx.r10.s64 = ctx.r9.s64 + 88;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
loc_823B86A0:
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - r29.s64;
	// stw r10,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r10.u32);
	// mr r26,r11
	r26.u64 = r11.u64;
	// stw r26,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r26.u32);
	// rlwimi r6,r28,0,28,26
	ctx.r6.u64 = (__builtin_rotateleft32(r28.u32, 0) & 0xFFFFFFFFFFFFFFEF) | (ctx.r6.u64 & 0x10);
	// stb r6,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r6.u8);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r10,r25,r10
	ctx.r10.s64 = ctx.r10.s64 - r25.s64;
	// stb r10,6(r11)
	PPC_STORE_U8(r11.u32 + 6, ctx.r10.u8);
	// stb r24,7(r11)
	PPC_STORE_U8(r11.u32 + 7, r24.u8);
	// b 0x823b8c78
	goto loc_823B8C78;
loc_823B86D0:
	// clrlwi r8,r29,27
	ctx.r8.u64 = r29.u32 & 0x1F;
	// rlwinm r11,r29,27,5,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x7FFFFFF;
	// addi r10,r11,88
	ctx.r10.s64 = r11.s64 + 88;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + r30.u64;
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// slw r10,r28,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r8.u8 & 0x3F));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ~ctx.r10.u64;
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x823b8720
	if (cr6.lt) goto loc_823B8720;
	// beq cr6,0x823b8740
	if (cr6.eq) goto loc_823B8740;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x823b8760
	if (cr6.lt) goto loc_823B8760;
	// beq cr6,0x823b8780
	if (cr6.eq) goto loc_823B8780;
	// b 0x823b8818
	goto loc_823B8818;
loc_823B8720:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b8730
	if (cr6.eq) goto loc_823B8730;
	// addi r9,r30,384
	ctx.r9.s64 = r30.s64 + 384;
	// b 0x823b878c
	goto loc_823B878C;
loc_823B8730:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
loc_823B8740:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b8750
	if (cr6.eq) goto loc_823B8750;
	// addi r9,r30,640
	ctx.r9.s64 = r30.s64 + 640;
	// b 0x823b878c
	goto loc_823B878C;
loc_823B8750:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
loc_823B8760:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b8770
	if (cr6.eq) goto loc_823B8770;
	// addi r9,r30,896
	ctx.r9.s64 = r30.s64 + 896;
	// b 0x823b878c
	goto loc_823B878C;
loc_823B8770:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
loc_823B8780:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b8818
	if (cr6.eq) goto loc_823B8818;
	// addi r9,r30,1152
	ctx.r9.s64 = r30.s64 + 1152;
loc_823B878C:
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	r11.u64 = ctx.r10.u64 & ~r11.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subfic r11,r11,31
	xer.ca = r11.u32 <= 31;
	r11.s64 = 31 - r11.s64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r3,r11,-8
	ctx.r3.s64 = r11.s64 + -8;
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x823b88b8
	if (!cr6.eq) goto loc_823B88B8;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x823b88b8
	if (!cr6.eq) goto loc_823B88B8;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x823b88b8
	if (!cr6.eq) goto loc_823B88B8;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// slw r9,r28,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r28.u32 << (r11.u8 & 0x3F));
	// addi r11,r10,88
	r11.s64 = ctx.r10.s64 + 88;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// b 0x823b88b8
	goto loc_823B88B8;
loc_823B880C:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bgt cr6,0x823b8cb4
	if (cr6.gt) goto loc_823B8CB4;
loc_823B8818:
	// addi r10,r30,384
	ctx.r10.s64 = r30.s64 + 384;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823b8874
	if (cr6.eq) goto loc_823B8874;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// blt cr6,0x823b8874
	if (cr6.lt) goto loc_823B8874;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
loc_823B8848:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823b8874
	if (cr6.eq) goto loc_823B8874;
	// addi r3,r11,-8
	ctx.r3.s64 = r11.s64 + -8;
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, xer);
	// bge cr6,0x823b8888
	if (!cr6.lt) goto loc_823B8888;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823b8848
	goto loc_823B8848;
loc_823B8874:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823b7a08
	sub_823B7A08(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823b8d80
	if (cr0.eq) goto loc_823B8D80;
loc_823B8888:
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x823b88b4
	if (!cr6.eq) goto loc_823B88B4;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bne cr6,0x823b88b4
	if (!cr6.eq) goto loc_823B88B4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_823B88B4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_823B88B8:
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// lbz r10,5(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// stb r10,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r10.u8);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r8,48(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r9,48(r27)
	PPC_STORE_U32(r27.u32 + 48, ctx.r9.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r26,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r26.u32);
	// stb r28,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r28.u8);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r8,r25,r8
	ctx.r8.s64 = ctx.r8.s64 - r25.s64;
	// subf. r6,r29,r9
	ctx.r6.s64 = ctx.r9.s64 - r29.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// stb r8,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r8.u8);
	// stb r24,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, r24.u8);
	// beq 0x823b8c64
	if (cr0.eq) goto loc_823B8C64;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x823b8924
	if (!cr6.eq) goto loc_823B8924;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, r11.u8);
	// b 0x823b8c64
	goto loc_823B8C64;
loc_823B8924:
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r9,r3
	r30.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stb r10,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r10.u8);
	// sth r11,2(r30)
	PPC_STORE_U16(r30.u32 + 2, r11.u16);
	// lbz r11,4(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r11,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r11.u8);
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r9,0(r30)
	PPC_STORE_U16(r30.u32 + 0, ctx.r9.u16);
	// rlwinm. r11,r10,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b89d8
	if (cr0.eq) goto loc_823B89D8;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// bge cr6,0x823b89a0
	if (!cr6.lt) goto loc_823B89A0;
	// addi r10,r9,48
	ctx.r10.s64 = ctx.r9.s64 + 48;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// rlwinm r11,r10,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r9.u8);
	// add r10,r11,r27
	ctx.r10.u64 = r11.u64 + r27.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823b8a44
	if (!cr6.eq) goto loc_823B8A44;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// slw r8,r28,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (r28.u32 << (r11.u8 & 0x3F));
	// addi r11,r9,88
	r11.s64 = ctx.r9.s64 + 88;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// b 0x823b8a40
	goto loc_823B8A40;
loc_823B89A0:
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// addi r10,r27,384
	ctx.r10.s64 = r27.s64 + 384;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
loc_823B89B4:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823b8a98
	if (cr6.eq) goto loc_823B8A98;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x823b8a98
	if (!cr6.gt) goto loc_823B8A98;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823b89b4
	goto loc_823B89B4;
loc_823B89D8:
	// rlwinm r11,r6,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x823b8abc
	if (cr0.eq) goto loc_823B8ABC;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r9.u16);
	// cmplwi cr6,r8,128
	cr6.compare<uint32_t>(ctx.r8.u32, 128, xer);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// bge cr6,0x823b8a60
	if (!cr6.lt) goto loc_823B8A60;
	// addi r10,r8,48
	ctx.r10.s64 = ctx.r8.s64 + 48;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// rlwinm r11,r10,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r9.u8);
	// add r10,r11,r27
	ctx.r10.u64 = r11.u64 + r27.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823b8a44
	if (!cr6.eq) goto loc_823B8A44;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// slw r8,r28,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (r28.u32 << (r11.u8 & 0x3F));
	// addi r11,r9,88
	r11.s64 = ctx.r9.s64 + 88;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
loc_823B8A40:
	// stwx r9,r11,r27
	PPC_STORE_U32(r11.u32 + r27.u32, ctx.r9.u32);
loc_823B8A44:
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x823b8ab0
	goto loc_823B8AB0;
loc_823B8A60:
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// addi r10,r27,384
	ctx.r10.s64 = r27.s64 + 384;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
loc_823B8A74:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823b8a98
	if (cr6.eq) goto loc_823B8A98;
	// lhz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// ble cr6,0x823b8a98
	if (!cr6.gt) goto loc_823B8A98;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823b8a74
	goto loc_823B8A74;
loc_823B8A98:
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_823B8AB0:
	// lwz r11,48(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// add r11,r6,r11
	r11.u64 = ctx.r6.u64 + r11.u64;
	// b 0x823b8c28
	goto loc_823B8C28;
loc_823B8ABC:
	// stb r10,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r10.u8);
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bne cr6,0x823b8b20
	if (!cr6.eq) goto loc_823B8B20;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x823b8b20
	if (!cr6.eq) goto loc_823B8B20;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bne cr6,0x823b8b20
	if (!cr6.eq) goto loc_823B8B20;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// bge cr6,0x823b8b20
	if (!cr6.lt) goto loc_823B8B20;
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// slw r8,r28,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r10.u8 & 0x3F));
	// addi r10,r9,88
	ctx.r10.s64 = ctx.r9.s64 + 88;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// stwx r9,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r9.u32);
loc_823B8B20:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lwz r9,48(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,48(r27)
	PPC_STORE_U32(r27.u32 + 48, ctx.r10.u32);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// add r5,r11,r6
	ctx.r5.u64 = r11.u64 + ctx.r6.u64;
	// cmplwi cr6,r5,61440
	cr6.compare<uint32_t>(ctx.r5.u32, 61440, xer);
	// bgt cr6,0x823b8c30
	if (cr6.gt) goto loc_823B8C30;
	// clrlwi r11,r5,16
	r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823b8b60
	if (!cr0.eq) goto loc_823B8B60;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
loc_823B8B60:
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// bge cr6,0x823b8bd0
	if (!cr6.lt) goto loc_823B8BD0;
	// addi r10,r9,48
	ctx.r10.s64 = ctx.r9.s64 + 48;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// rlwinm r11,r10,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r9.u8);
	// add r10,r11,r27
	ctx.r10.u64 = r11.u64 + r27.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823b8bb4
	if (!cr6.eq) goto loc_823B8BB4;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// slw r8,r28,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (r28.u32 << (r11.u8 & 0x3F));
	// addi r11,r9,88
	r11.s64 = ctx.r9.s64 + 88;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r27
	PPC_STORE_U32(r11.u32 + r27.u32, ctx.r9.u32);
loc_823B8BB4:
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x823b8c20
	goto loc_823B8C20;
loc_823B8BD0:
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// addi r10,r27,384
	ctx.r10.s64 = r27.s64 + 384;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
loc_823B8BE4:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823b8c08
	if (cr6.eq) goto loc_823B8C08;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x823b8c08
	if (!cr6.gt) goto loc_823B8C08;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823b8be4
	goto loc_823B8BE4;
loc_823B8C08:
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_823B8C20:
	// lwz r11,48(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// add r11,r5,r11
	r11.u64 = ctx.r5.u64 + r11.u64;
loc_823B8C28:
	// stw r11,48(r27)
	PPC_STORE_U32(r27.u32 + 48, r11.u32);
	// b 0x823b8c3c
	goto loc_823B8C3C;
loc_823B8C30:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823b7150
	sub_823B7150(ctx, base);
loc_823B8C3C:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stb r10,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r10.u8);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b8c64
	if (cr0.eq) goto loc_823B8C64;
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	r11.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// stw r30,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r30.u32);
loc_823B8C64:
	// rlwinm. r11,r10,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b8c78
	if (cr0.eq) goto loc_823B8C78;
	// lbz r11,5(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 5);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stb r11,5(r26)
	PPC_STORE_U8(r26.u32 + 5, r11.u8);
loc_823B8C78:
	// addi r30,r26,16
	r30.s64 = r26.s64 + 16;
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x823b8c98
	if (cr6.eq) goto loc_823B8C98;
	// lwz r3,1408(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 1408);
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r22,r24
	r22.u64 = r24.u64;
	// stw r22,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r22.u32);
loc_823B8C98:
	// rlwinm. r11,r23,0,28,28
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b8db4
	if (cr0.eq) goto loc_823B8DB4;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// b 0x823b8db4
	goto loc_823B8DB4;
loc_823B8CB4:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b8d84
	if (cr0.eq) goto loc_823B8D84;
	// rlwinm. r11,r23,0,28,28
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// mr r11,r24
	r11.u64 = r24.u64;
	// bne 0x823b8cdc
	if (!cr0.eq) goto loc_823B8CDC;
	// lis r11,128
	r11.s64 = 8388608;
loc_823B8CDC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// oris r5,r11,24576
	ctx.r5.u64 = r11.u64 | 1610612736;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x826e4dac
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823b8d80
	if (cr0.lt) goto loc_823B8D80;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// addi r11,r30,88
	r11.s64 = r30.s64 + 88;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r10,r25,r10
	ctx.r10.s64 = ctx.r10.s64 - r25.s64;
	// li r9,11
	ctx.r9.s64 = 11;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// sth r10,32(r8)
	PPC_STORE_U16(ctx.r8.u32 + 32, ctx.r10.u16);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stb r9,37(r10)
	PPC_STORE_U8(ctx.r10.u32 + 37, ctx.r9.u8);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r10,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r10,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// b 0x823b8db4
	goto loc_823B8DB4;
loc_823B8D80:
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_823B8D84:
	// rlwinm. r11,r23,0,29,29
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b8db0
	if (cr0.eq) goto loc_823B8DB0;
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,23
	r11.u64 = r11.u64 | 23;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// stw r24,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r24.u32);
	// stw r28,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r28.u32);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// stw r24,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r24.u32);
	// stw r4,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r4.u32);
	// bl 0x826e4d9c
	__imp__RtlRaiseException(ctx, base);
loc_823B8DB0:
	// stw r24,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r24.u32);
loc_823B8DB4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	r12.s64 = r31.s64 + 320;
	// bl 0x823b8df4
	sub_823B8DF4(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r1,r31,320
	ctx.r1.s64 = r31.s64 + 320;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_823B8DCC"))) PPC_WEAK_FUNC(sub_823B8DCC);
PPC_FUNC_IMPL(__imp__sub_823B8DCC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r22{};
	PPCRegister r27{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// std r27,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r27.u64);
	// std r22,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r22.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,128(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// lwz r22,104(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x823b8e10
	goto loc_823B8E10;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// std r27,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r27.u64);
	// std r22,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r22.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_823B8E10:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x823b8e20
	if (cr6.eq) goto loc_823B8E20;
	// lwz r3,1408(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 1408);
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_823B8E20:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r27,-16(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r22,-24(r1)
	r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B8DF4"))) PPC_WEAK_FUNC(sub_823B8DF4);
PPC_FUNC_IMPL(__imp__sub_823B8DF4) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r22{};
	PPCRegister r27{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// std r27,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r27.u64);
	// std r22,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r22.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x823b8e20
	if (cr6.eq) goto loc_823B8E20;
	// lwz r3,1408(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 1408);
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_823B8E20:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r27,-16(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r22,-24(r1)
	r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B8E3C"))) PPC_WEAK_FUNC(sub_823B8E3C);
PPC_FUNC_IMPL(__imp__sub_823B8E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B8E40"))) PPC_WEAK_FUNC(sub_823B8E40);
PPC_FUNC_IMPL(__imp__sub_823B8E40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r19,19276(r14)
	r19.u64 = PPC_LOAD_U32(r14.u32 + 19276);
	// lwz r16,-14136(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14136);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// li r26,0
	r26.s64 = 0;
	// mr r25,r26
	r25.u64 = r26.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// rlwinm. r11,r11,0,13,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r27,1
	r27.s64 = 1;
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// beq 0x823b8eb0
	if (cr0.eq) goto loc_823B8EB0;
	// bl 0x826e4ddc
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 379);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x823b8eb0
	if (cr6.eq) goto loc_823B8EB0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,4390
	ctx.r6.s64 = 4390;
	// lwz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x826e4dcc
	__imp__KeBugCheckEx(ctx, base);
loc_823B8EB0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x823b8ec0
	if (!cr6.eq) goto loc_823B8EC0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823b90ac
	goto loc_823B90AC;
loc_823B8EC0:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r29,r29,-16
	r29.s64 = r29.s64 + -16;
	// or r11,r11,r28
	r11.u64 = r11.u64 | r28.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b8ee8
	if (!cr0.eq) goto loc_823B8EE8;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1408);
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r25,r27
	r25.u64 = r27.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
loc_823B8EE8:
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b9044
	if (!cr0.eq) goto loc_823B9044;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823b6d48
	sub_823B6D48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r5,128
	cr6.compare<uint32_t>(ctx.r5.u32, 128, xer);
	// bge cr6,0x823b8f94
	if (!cr6.lt) goto loc_823B8F94;
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, r11.u8);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x823b8f70
	if (!cr6.eq) goto loc_823B8F70;
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// slw r8,r27,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r10.u8 & 0x3F));
	// addi r10,r9,88
	ctx.r10.s64 = ctx.r9.s64 + 88;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
loc_823B8F70:
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x823b902c
	goto loc_823B902C;
loc_823B8F94:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// blt cr6,0x823b8fc0
	if (cr6.lt) goto loc_823B8FC0;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x823b8fc0
	if (cr6.lt) goto loc_823B8FC0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823b7c48
	sub_823B7C48(ctx, base);
	// b 0x823b909c
	goto loc_823B909C;
loc_823B8FC0:
	// cmplwi cr6,r5,61440
	cr6.compare<uint32_t>(ctx.r5.u32, 61440, xer);
	// bgt cr6,0x823b9038
	if (cr6.gt) goto loc_823B9038;
	// addi r10,r30,384
	ctx.r10.s64 = r30.s64 + 384;
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, r11.u8);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
loc_823B8FE0:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823b900c
	if (cr6.eq) goto loc_823B900C;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x823b900c
	if (!cr6.gt) goto loc_823B900C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823b8fe0
	goto loc_823B8FE0;
loc_823B900C:
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_823B902C:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// b 0x823b909c
	goto loc_823B909C;
loc_823B9038:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823b7150
	sub_823B7150(ctx, base);
	// b 0x823b909c
	goto loc_823B909C;
loc_823B9044:
	// addi r11,r29,-32
	r11.s64 = r29.s64 + -32;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x823b9074
	if (cr6.eq) goto loc_823B9074;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1408);
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r25,r26
	r25.u64 = r26.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
loc_823B9074:
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// bl 0x826e4dec
	__imp__NtFreeVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823b909c
	if (!cr0.lt) goto loc_823B909C;
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
loc_823B909C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	r12.s64 = r31.s64 + 176;
	// bl 0x823b90dc
	sub_823B90DC(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_823B90AC:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823B8E48"))) PPC_WEAK_FUNC(sub_823B8E48);
PPC_FUNC_IMPL(__imp__sub_823B8E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// li r26,0
	r26.s64 = 0;
	// mr r25,r26
	r25.u64 = r26.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// rlwinm. r11,r11,0,13,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r27,1
	r27.s64 = 1;
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// beq 0x823b8eb0
	if (cr0.eq) goto loc_823B8EB0;
	// bl 0x826e4ddc
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 379);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x823b8eb0
	if (cr6.eq) goto loc_823B8EB0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,4390
	ctx.r6.s64 = 4390;
	// lwz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x826e4dcc
	__imp__KeBugCheckEx(ctx, base);
loc_823B8EB0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x823b8ec0
	if (!cr6.eq) goto loc_823B8EC0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823b90ac
	goto loc_823B90AC;
loc_823B8EC0:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r29,r29,-16
	r29.s64 = r29.s64 + -16;
	// or r11,r11,r28
	r11.u64 = r11.u64 | r28.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b8ee8
	if (!cr0.eq) goto loc_823B8EE8;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1408);
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r25,r27
	r25.u64 = r27.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
loc_823B8EE8:
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b9044
	if (!cr0.eq) goto loc_823B9044;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823b6d48
	sub_823B6D48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r5,128
	cr6.compare<uint32_t>(ctx.r5.u32, 128, xer);
	// bge cr6,0x823b8f94
	if (!cr6.lt) goto loc_823B8F94;
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, r11.u8);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x823b8f70
	if (!cr6.eq) goto loc_823B8F70;
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// slw r8,r27,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r10.u8 & 0x3F));
	// addi r10,r9,88
	ctx.r10.s64 = ctx.r9.s64 + 88;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
loc_823B8F70:
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x823b902c
	goto loc_823B902C;
loc_823B8F94:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// blt cr6,0x823b8fc0
	if (cr6.lt) goto loc_823B8FC0;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x823b8fc0
	if (cr6.lt) goto loc_823B8FC0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823b7c48
	sub_823B7C48(ctx, base);
	// b 0x823b909c
	goto loc_823B909C;
loc_823B8FC0:
	// cmplwi cr6,r5,61440
	cr6.compare<uint32_t>(ctx.r5.u32, 61440, xer);
	// bgt cr6,0x823b9038
	if (cr6.gt) goto loc_823B9038;
	// addi r10,r30,384
	ctx.r10.s64 = r30.s64 + 384;
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, r11.u8);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
loc_823B8FE0:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823b900c
	if (cr6.eq) goto loc_823B900C;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x823b900c
	if (!cr6.gt) goto loc_823B900C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823b8fe0
	goto loc_823B8FE0;
loc_823B900C:
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_823B902C:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// b 0x823b909c
	goto loc_823B909C;
loc_823B9038:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823b7150
	sub_823B7150(ctx, base);
	// b 0x823b909c
	goto loc_823B909C;
loc_823B9044:
	// addi r11,r29,-32
	r11.s64 = r29.s64 + -32;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x823b9074
	if (cr6.eq) goto loc_823B9074;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1408);
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r25,r26
	r25.u64 = r26.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
loc_823B9074:
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// bl 0x826e4dec
	__imp__NtFreeVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823b909c
	if (!cr0.lt) goto loc_823B909C;
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
loc_823B909C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	r12.s64 = r31.s64 + 176;
	// bl 0x823b90dc
	sub_823B90DC(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_823B90AC:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823B90B4"))) PPC_WEAK_FUNC(sub_823B90B4);
PPC_FUNC_IMPL(__imp__sub_823B90B4) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r25{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r25,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r25.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,100(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r25,84(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// b 0x823b90f8
	goto loc_823B90F8;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r25,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r25.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_823B90F8:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x823b9108
	if (cr6.eq) goto loc_823B9108;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1408);
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_823B9108:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r25,-24(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B90DC"))) PPC_WEAK_FUNC(sub_823B90DC);
PPC_FUNC_IMPL(__imp__sub_823B90DC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r25{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r25,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r25.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x823b9108
	if (cr6.eq) goto loc_823B9108;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1408);
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_823B9108:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r25,-24(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B9124"))) PPC_WEAK_FUNC(sub_823B9124);
PPC_FUNC_IMPL(__imp__sub_823B9124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B9128"))) PPC_WEAK_FUNC(sub_823B9128);
PPC_FUNC_IMPL(__imp__sub_823B9128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r16{};
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
	// lwz r19,19276(r14)
	r19.u64 = PPC_LOAD_U32(r14.u32 + 19276);
	// lwz r16,-14112(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14112);
	// mflr r12
	// bl 0x8239bcd4
	// addi r31,r1,-320
	r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r27,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r27.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// stw r20,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r20.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r26,364(r31)
	PPC_STORE_U32(r31.u32 + 364, r26.u32);
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// mr r21,r27
	r21.u64 = r27.u64;
	// stw r21,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r21.u32);
	// li r19,0
	r19.s64 = 0;
	// stw r19,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r19.u32);
	// rlwinm. r11,r11,0,13,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b91a0
	if (cr0.eq) goto loc_823B91A0;
	// bl 0x826e4ddc
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 379);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x823b91a0
	if (cr6.eq) goto loc_823B91A0;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// li r6,3144
	ctx.r6.s64 = 3144;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x826e4dcc
	__imp__KeBugCheckEx(ctx, base);
loc_823B91A0:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x823b91b0
	if (!cr6.eq) goto loc_823B91B0;
loc_823B91A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823b9944
	// ERROR 823B9944
	return;
loc_823B91B0:
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// or r23,r11,r30
	r23.u64 = r11.u64 | r30.u64;
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// bgt cr6,0x823b91a8
	if (cr6.gt) goto loc_823B91A8;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// li r22,1
	r22.s64 = 1;
	// mr r11,r26
	r11.u64 = r26.u64;
	// bne cr6,0x823b91dc
	if (!cr6.eq) goto loc_823B91DC;
	// mr r11,r22
	r11.u64 = r22.u64;
loc_823B91DC:
	// lwz r10,80(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 80);
	// rlwinm r9,r23,0,2,23
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x3FFFFF00;
	// rlwinm. r9,r9,0,23,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC0001FF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r8,84(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 84);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// and r24,r11,r8
	r24.u64 = r11.u64 & ctx.r8.u64;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// bne 0x823b9214
	if (!cr0.eq) goto loc_823B9214;
	// lwz r11,380(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b9214
	if (!cr6.eq) goto loc_823B9214;
	// lbz r11,-11(r20)
	r11.u64 = PPC_LOAD_U8(r20.u32 + -11);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b921c
	if (cr0.eq) goto loc_823B921C;
loc_823B9214:
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
loc_823B921C:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r23,31
	r11.u64 = r23.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b9240
	if (!cr0.eq) goto loc_823B9240;
	// lwz r3,1408(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 1408);
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r22,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r22.u32);
	// xori r23,r23,1
	r23.u64 = r23.u64 ^ 1;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
loc_823B9240:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r20,-16
	r30.s64 = r20.s64 + -16;
	// stw r30,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r30.u32);
	// lbz r8,5(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// clrlwi. r11,r8,31
	r11.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b9918
	if (cr0.eq) {
		// ERROR 823B9918
		return;
	}
	// rlwinm. r7,r8,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// beq 0x823b929c
	if (cr0.eq) goto loc_823B929C;
	// lwz r9,-8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// addi r10,r24,32
	ctx.r10.s64 = r24.s64 + 32;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r25,r9,-48
	r25.s64 = ctx.r9.s64 + -48;
	// rlwinm r29,r6,28,4,31
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r24,r10,0,0,15
	r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x823b92ac
	goto loc_823B92AC;
loc_823B929C:
	// lbz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 6);
	// mr r29,r11
	r29.u64 = r11.u64;
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r25,r10,r9
	r25.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_823B92AC:
	// stw r25,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r25.u32);
	// rlwinm r28,r24,28,4,31
	r28.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 28) & 0xFFFFFFF;
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// bgt cr6,0x823b96e8
	if (cr6.gt) goto loc_823B96E8;
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// bne cr6,0x823b92dc
	if (!cr6.eq) goto loc_823B92DC;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
loc_823B92DC:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823b92f8
	if (cr6.eq) goto loc_823B92F8;
	// subf r11,r26,r24
	r11.s64 = r24.s64 - r26.s64;
	// addis r11,r11,1
	r11.s64 = r11.s64 + 65536;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// b 0x823b9334
	goto loc_823B9334;
loc_823B92F8:
	// rlwinm. r10,r8,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b932c
	if (cr0.eq) goto loc_823B932C;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// subf r9,r26,r24
	ctx.r9.s64 = r24.s64 - r26.s64;
	// ld r8,-16(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + -16);
	// std r8,-16(r10)
	PPC_STORE_U64(ctx.r10.u32 + -16, ctx.r8.u64);
	// ld r11,-8(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + -8);
	// std r11,-8(r10)
	PPC_STORE_U64(ctx.r10.u32 + -8, r11.u64);
	// stb r9,6(r30)
	PPC_STORE_U8(r30.u32 + 6, ctx.r9.u8);
	// b 0x823b9334
	goto loc_823B9334;
loc_823B932C:
	// subf r11,r26,r24
	r11.s64 = r24.s64 - r26.s64;
	// stb r11,6(r30)
	PPC_STORE_U8(r30.u32 + 6, r11.u8);
loc_823B9334:
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(r26.u32, r25.u32, xer);
	// ble cr6,0x823b9354
	if (!cr6.gt) goto loc_823B9354;
	// rlwinm. r11,r23,0,28,28
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b9354
	if (cr0.eq) goto loc_823B9354;
	// subf r5,r25,r26
	ctx.r5.s64 = r26.s64 - r25.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r25,r20
	ctx.r3.u64 = r25.u64 + r20.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
loc_823B9354:
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// beq cr6,0x823b98e4
	if (cr6.eq) {
		// ERROR 823B98E4
		return;
	}
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm. r11,r9,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b93bc
	if (cr0.eq) goto loc_823B93BC;
	// addi r30,r30,-32
	r30.s64 = r30.s64 + -32;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// add r11,r30,r24
	r11.u64 = r30.u64 + r24.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// rlwinm r11,r29,4,0,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r24,r11
	r11.s64 = r11.s64 - r24.s64;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bl 0x826e4dec
	__imp__NtFreeVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823b98e4
	if (cr0.lt) {
		// ERROR 823B98E4
		return;
	}
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// b 0x823b98e4
	// ERROR 823B98E4
	return;
loc_823B93BC:
	// rlwinm r11,r28,4,0,27
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r30
	r29.u64 = r11.u64 + r30.u64;
	// rlwinm. r11,r9,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r10,5(r29)
	PPC_STORE_U8(r29.u32 + 5, ctx.r10.u8);
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// sth r11,2(r29)
	PPC_STORE_U16(r29.u32 + 2, r11.u16);
	// lbz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// stb r10,4(r29)
	PPC_STORE_U8(r29.u32 + 4, ctx.r10.u8);
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// subf r28,r28,r10
	r28.s64 = ctx.r10.s64 - r28.s64;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// beq 0x823b9460
	if (cr0.eq) goto loc_823B9460;
	// lbz r11,4(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 4);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	r11.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// stw r29,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r29.u32);
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// sth r11,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r11.u16);
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// blt cr6,0x823b9498
	if (cr6.lt) goto loc_823B9498;
	// addi r11,r27,384
	r11.s64 = r27.s64 + 384;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
loc_823B943C:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823b94d4
	if (cr6.eq) goto loc_823B94D4;
	// lhz r8,-8(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + -8);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x823b94d4
	if (!cr6.gt) goto loc_823B94D4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823b943c
	goto loc_823B943C;
loc_823B9460:
	// rlwinm r11,r28,4,0,27
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r29
	r30.u64 = r11.u64 + r29.u64;
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b9528
	if (cr0.eq) goto loc_823B9528;
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// sth r11,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r11.u16);
	// sth r11,2(r30)
	PPC_STORE_U16(r30.u32 + 2, r11.u16);
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// bge cr6,0x823b94f8
	if (!cr6.lt) goto loc_823B94F8;
loc_823B9498:
	// addi r11,r9,48
	r11.s64 = ctx.r9.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r27
	ctx.r10.u64 = r11.u64 + r27.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823b94d4
	if (!cr6.eq) goto loc_823B94D4;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// slw r8,r22,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (r22.u32 << (r11.u8 & 0x3F));
	// addi r11,r9,88
	r11.s64 = ctx.r9.s64 + 88;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r27
	PPC_STORE_U32(r11.u32 + r27.u32, ctx.r9.u32);
loc_823B94D4:
	// addi r11,r29,8
	r11.s64 = r29.s64 + 8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r9.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r11,48(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 48);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// b 0x823b96d0
	goto loc_823B96D0;
loc_823B94F8:
	// addi r11,r27,384
	r11.s64 = r27.s64 + 384;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r10.u32);
loc_823B9504:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823b94d4
	if (cr6.eq) goto loc_823B94D4;
	// lhz r8,-8(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + -8);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x823b94d4
	if (!cr6.gt) goto loc_823B94D4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823b9504
	goto loc_823B9504;
loc_823B9528:
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// addi r9,r30,8
	ctx.r9.s64 = r30.s64 + 8;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x823b958c
	if (!cr6.eq) goto loc_823B958C;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x823b958c
	if (!cr6.eq) goto loc_823B958C;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x823b958c
	if (!cr6.eq) goto loc_823B958C;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x823b958c
	if (!cr6.lt) goto loc_823B958C;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// slw r9,r22,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r22.u32 << (r11.u8 & 0x3F));
	// addi r11,r10,88
	r11.s64 = ctx.r10.s64 + 88;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stwx r10,r11,r27
	PPC_STORE_U32(r11.u32 + r27.u32, ctx.r10.u32);
loc_823B958C:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b95d0
	if (cr0.eq) goto loc_823B95D0;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// stw r4,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// beq 0x823b95c0
	if (cr0.eq) goto loc_823B95C0;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x823b95c0
	if (!cr6.gt) goto loc_823B95C0;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r4,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r4.u32);
loc_823B95C0:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x826e4dfc
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_823B95D0:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,48(r27)
	PPC_STORE_U32(r27.u32 + 48, r11.u32);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// add r5,r11,r28
	ctx.r5.u64 = r11.u64 + r28.u64;
	// cmplwi cr6,r5,61440
	cr6.compare<uint32_t>(ctx.r5.u32, 61440, xer);
	// bgt cr6,0x823b96d8
	if (cr6.gt) goto loc_823B96D8;
	// clrlwi r11,r5,16
	r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r11.u16);
	// lbz r10,5(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823b9614
	if (!cr0.eq) goto loc_823B9614;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// b 0x823b9628
	goto loc_823B9628;
loc_823B9614:
	// lbz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 4);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// stw r29,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, r29.u32);
loc_823B9628:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// lbz r10,5(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r10,5(r29)
	PPC_STORE_U8(r29.u32 + 5, ctx.r10.u8);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x823b9680
	if (!cr6.lt) goto loc_823B9680;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r27
	ctx.r10.u64 = r11.u64 + r27.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823b96b0
	if (!cr6.eq) goto loc_823B96B0;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// slw r8,r22,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (r22.u32 << (r11.u8 & 0x3F));
	// addi r11,r9,88
	r11.s64 = ctx.r9.s64 + 88;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r27
	PPC_STORE_U32(r11.u32 + r27.u32, ctx.r9.u32);
	// b 0x823b96b0
	goto loc_823B96B0;
loc_823B9680:
	// addi r9,r27,384
	ctx.r9.s64 = r27.s64 + 384;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r10,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r10.u32);
loc_823B968C:
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x823b96b0
	if (cr6.eq) goto loc_823B96B0;
	// lhz r8,-8(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + -8);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x823b96b0
	if (!cr6.gt) goto loc_823B96B0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823b968c
	goto loc_823B968C;
loc_823B96B0:
	// addi r11,r29,8
	r11.s64 = r29.s64 + 8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r9.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r11,48(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 48);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
loc_823B96D0:
	// stw r11,48(r21)
	PPC_STORE_U32(r21.u32 + 48, r11.u32);
	// b 0x823b98e4
	// ERROR 823B98E4
	return;
loc_823B96D8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823b7150
	sub_823B7150(ctx, base);
	// b 0x823b98e4
	// ERROR 823B98E4
	return;
loc_823B96E8:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x823b9710
	if (!cr6.eq) goto loc_823B9710;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823b7288
	sub_823B7288(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x823b98e4
	if (!cr0.eq) {
		// ERROR 823B98E4
		return;
	}
loc_823B9710:
	// rlwinm. r11,r23,0,27,27
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b9720
	if (cr0.eq) goto loc_823B9720;
	// stw r19,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r19.u32);
	// b 0x823b98ec
	// ERROR 823B98EC
	return;
loc_823B9720:
	// rlwinm r23,r23,0,14,1
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFC003FFFF;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b97e8
	if (cr0.eq) {
		sub_823B97E8(ctx, base);
		return;
	}
	// rlwinm r10,r23,0,23,19
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFF1FF;
	// stw r10,348(r31)
	PPC_STORE_U32(r31.u32 + 348, ctx.r10.u32);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// li r9,256
	ctx.r9.s64 = 256;
	// rlwinm. r8,r11,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// rlwimi r9,r11,4,20,22
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 4) & 0xE00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF1FF);
	// or r23,r9,r10
	r23.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
	// beq 0x823b9764
	if (cr0.eq) goto loc_823B9764;
	// addi r11,r30,-32
	r11.s64 = r30.s64 + -32;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// b 0x823b9774
	goto loc_823B9774;
loc_823B9764:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
loc_823B9774:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r11,2(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823b97a0
	if (cr0.eq) goto loc_823B97A0;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823b97a0
	if (!cr0.eq) goto loc_823B97A0;
	// rlwinm r11,r11,18,0,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	r23.u64 = r11.u64 | r23.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
loc_823B97A0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823b9800
	// ERROR 823B9800
	return;
}

__attribute__((alias("__imp__sub_823B9130"))) PPC_WEAK_FUNC(sub_823B9130);
PPC_FUNC_IMPL(__imp__sub_823B9130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// addi r31,r1,-320
	r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r27,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r27.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// stw r20,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r20.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r26,364(r31)
	PPC_STORE_U32(r31.u32 + 364, r26.u32);
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// mr r21,r27
	r21.u64 = r27.u64;
	// stw r21,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r21.u32);
	// li r19,0
	r19.s64 = 0;
	// stw r19,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r19.u32);
	// rlwinm. r11,r11,0,13,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b91a0
	if (cr0.eq) goto loc_823B91A0;
	// bl 0x826e4ddc
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 379);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x823b91a0
	if (cr6.eq) goto loc_823B91A0;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// li r6,3144
	ctx.r6.s64 = 3144;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x826e4dcc
	__imp__KeBugCheckEx(ctx, base);
loc_823B91A0:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x823b91b0
	if (!cr6.eq) goto loc_823B91B0;
loc_823B91A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823b9944
	goto loc_823B9944;
loc_823B91B0:
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// or r23,r11,r30
	r23.u64 = r11.u64 | r30.u64;
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// bgt cr6,0x823b91a8
	if (cr6.gt) goto loc_823B91A8;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// li r22,1
	r22.s64 = 1;
	// mr r11,r26
	r11.u64 = r26.u64;
	// bne cr6,0x823b91dc
	if (!cr6.eq) goto loc_823B91DC;
	// mr r11,r22
	r11.u64 = r22.u64;
loc_823B91DC:
	// lwz r10,80(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 80);
	// rlwinm r9,r23,0,2,23
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x3FFFFF00;
	// rlwinm. r9,r9,0,23,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC0001FF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r8,84(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 84);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// and r24,r11,r8
	r24.u64 = r11.u64 & ctx.r8.u64;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// bne 0x823b9214
	if (!cr0.eq) goto loc_823B9214;
	// lwz r11,380(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b9214
	if (!cr6.eq) goto loc_823B9214;
	// lbz r11,-11(r20)
	r11.u64 = PPC_LOAD_U8(r20.u32 + -11);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b921c
	if (cr0.eq) goto loc_823B921C;
loc_823B9214:
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
loc_823B921C:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r23,31
	r11.u64 = r23.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b9240
	if (!cr0.eq) goto loc_823B9240;
	// lwz r3,1408(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 1408);
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r22,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r22.u32);
	// xori r23,r23,1
	r23.u64 = r23.u64 ^ 1;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
loc_823B9240:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r20,-16
	r30.s64 = r20.s64 + -16;
	// stw r30,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r30.u32);
	// lbz r8,5(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// clrlwi. r11,r8,31
	r11.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b9918
	if (cr0.eq) goto loc_823B9918;
	// rlwinm. r7,r8,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// beq 0x823b929c
	if (cr0.eq) goto loc_823B929C;
	// lwz r9,-8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// addi r10,r24,32
	ctx.r10.s64 = r24.s64 + 32;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r25,r9,-48
	r25.s64 = ctx.r9.s64 + -48;
	// rlwinm r29,r6,28,4,31
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r24,r10,0,0,15
	r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x823b92ac
	goto loc_823B92AC;
loc_823B929C:
	// lbz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 6);
	// mr r29,r11
	r29.u64 = r11.u64;
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r25,r10,r9
	r25.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_823B92AC:
	// stw r25,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r25.u32);
	// rlwinm r28,r24,28,4,31
	r28.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 28) & 0xFFFFFFF;
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// bgt cr6,0x823b96e8
	if (cr6.gt) goto loc_823B96E8;
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// bne cr6,0x823b92dc
	if (!cr6.eq) goto loc_823B92DC;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
loc_823B92DC:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823b92f8
	if (cr6.eq) goto loc_823B92F8;
	// subf r11,r26,r24
	r11.s64 = r24.s64 - r26.s64;
	// addis r11,r11,1
	r11.s64 = r11.s64 + 65536;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// b 0x823b9334
	goto loc_823B9334;
loc_823B92F8:
	// rlwinm. r10,r8,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b932c
	if (cr0.eq) goto loc_823B932C;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// subf r9,r26,r24
	ctx.r9.s64 = r24.s64 - r26.s64;
	// ld r8,-16(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + -16);
	// std r8,-16(r10)
	PPC_STORE_U64(ctx.r10.u32 + -16, ctx.r8.u64);
	// ld r11,-8(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + -8);
	// std r11,-8(r10)
	PPC_STORE_U64(ctx.r10.u32 + -8, r11.u64);
	// stb r9,6(r30)
	PPC_STORE_U8(r30.u32 + 6, ctx.r9.u8);
	// b 0x823b9334
	goto loc_823B9334;
loc_823B932C:
	// subf r11,r26,r24
	r11.s64 = r24.s64 - r26.s64;
	// stb r11,6(r30)
	PPC_STORE_U8(r30.u32 + 6, r11.u8);
loc_823B9334:
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(r26.u32, r25.u32, xer);
	// ble cr6,0x823b9354
	if (!cr6.gt) goto loc_823B9354;
	// rlwinm. r11,r23,0,28,28
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b9354
	if (cr0.eq) goto loc_823B9354;
	// subf r5,r25,r26
	ctx.r5.s64 = r26.s64 - r25.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r25,r20
	ctx.r3.u64 = r25.u64 + r20.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
loc_823B9354:
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// beq cr6,0x823b98e4
	if (cr6.eq) goto loc_823B98E4;
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm. r11,r9,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b93bc
	if (cr0.eq) goto loc_823B93BC;
	// addi r30,r30,-32
	r30.s64 = r30.s64 + -32;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// add r11,r30,r24
	r11.u64 = r30.u64 + r24.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// rlwinm r11,r29,4,0,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r24,r11
	r11.s64 = r11.s64 - r24.s64;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bl 0x826e4dec
	__imp__NtFreeVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823b98e4
	if (cr0.lt) goto loc_823B98E4;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// b 0x823b98e4
	goto loc_823B98E4;
loc_823B93BC:
	// rlwinm r11,r28,4,0,27
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r30
	r29.u64 = r11.u64 + r30.u64;
	// rlwinm. r11,r9,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r10,5(r29)
	PPC_STORE_U8(r29.u32 + 5, ctx.r10.u8);
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// sth r11,2(r29)
	PPC_STORE_U16(r29.u32 + 2, r11.u16);
	// lbz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// stb r10,4(r29)
	PPC_STORE_U8(r29.u32 + 4, ctx.r10.u8);
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// subf r28,r28,r10
	r28.s64 = ctx.r10.s64 - r28.s64;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// beq 0x823b9460
	if (cr0.eq) goto loc_823B9460;
	// lbz r11,4(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 4);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	r11.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// stw r29,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r29.u32);
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// sth r11,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r11.u16);
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// blt cr6,0x823b9498
	if (cr6.lt) goto loc_823B9498;
	// addi r11,r27,384
	r11.s64 = r27.s64 + 384;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
loc_823B943C:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823b94d4
	if (cr6.eq) goto loc_823B94D4;
	// lhz r8,-8(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + -8);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x823b94d4
	if (!cr6.gt) goto loc_823B94D4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823b943c
	goto loc_823B943C;
loc_823B9460:
	// rlwinm r11,r28,4,0,27
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r29
	r30.u64 = r11.u64 + r29.u64;
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b9528
	if (cr0.eq) goto loc_823B9528;
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// sth r11,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r11.u16);
	// sth r11,2(r30)
	PPC_STORE_U16(r30.u32 + 2, r11.u16);
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// bge cr6,0x823b94f8
	if (!cr6.lt) goto loc_823B94F8;
loc_823B9498:
	// addi r11,r9,48
	r11.s64 = ctx.r9.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r27
	ctx.r10.u64 = r11.u64 + r27.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823b94d4
	if (!cr6.eq) goto loc_823B94D4;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// slw r8,r22,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (r22.u32 << (r11.u8 & 0x3F));
	// addi r11,r9,88
	r11.s64 = ctx.r9.s64 + 88;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r27
	PPC_STORE_U32(r11.u32 + r27.u32, ctx.r9.u32);
loc_823B94D4:
	// addi r11,r29,8
	r11.s64 = r29.s64 + 8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r9.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r11,48(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 48);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// b 0x823b96d0
	goto loc_823B96D0;
loc_823B94F8:
	// addi r11,r27,384
	r11.s64 = r27.s64 + 384;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r10.u32);
loc_823B9504:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823b94d4
	if (cr6.eq) goto loc_823B94D4;
	// lhz r8,-8(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + -8);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x823b94d4
	if (!cr6.gt) goto loc_823B94D4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823b9504
	goto loc_823B9504;
loc_823B9528:
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// addi r9,r30,8
	ctx.r9.s64 = r30.s64 + 8;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x823b958c
	if (!cr6.eq) goto loc_823B958C;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x823b958c
	if (!cr6.eq) goto loc_823B958C;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x823b958c
	if (!cr6.eq) goto loc_823B958C;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x823b958c
	if (!cr6.lt) goto loc_823B958C;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// slw r9,r22,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r22.u32 << (r11.u8 & 0x3F));
	// addi r11,r10,88
	r11.s64 = ctx.r10.s64 + 88;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stwx r10,r11,r27
	PPC_STORE_U32(r11.u32 + r27.u32, ctx.r10.u32);
loc_823B958C:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b95d0
	if (cr0.eq) goto loc_823B95D0;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// stw r4,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// beq 0x823b95c0
	if (cr0.eq) goto loc_823B95C0;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x823b95c0
	if (!cr6.gt) goto loc_823B95C0;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r4,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r4.u32);
loc_823B95C0:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x826e4dfc
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_823B95D0:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,48(r27)
	PPC_STORE_U32(r27.u32 + 48, r11.u32);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// add r5,r11,r28
	ctx.r5.u64 = r11.u64 + r28.u64;
	// cmplwi cr6,r5,61440
	cr6.compare<uint32_t>(ctx.r5.u32, 61440, xer);
	// bgt cr6,0x823b96d8
	if (cr6.gt) goto loc_823B96D8;
	// clrlwi r11,r5,16
	r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r11.u16);
	// lbz r10,5(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823b9614
	if (!cr0.eq) goto loc_823B9614;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// b 0x823b9628
	goto loc_823B9628;
loc_823B9614:
	// lbz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 4);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// stw r29,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, r29.u32);
loc_823B9628:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// lbz r10,5(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r10,5(r29)
	PPC_STORE_U8(r29.u32 + 5, ctx.r10.u8);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x823b9680
	if (!cr6.lt) goto loc_823B9680;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r27
	ctx.r10.u64 = r11.u64 + r27.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823b96b0
	if (!cr6.eq) goto loc_823B96B0;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// slw r8,r22,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (r22.u32 << (r11.u8 & 0x3F));
	// addi r11,r9,88
	r11.s64 = ctx.r9.s64 + 88;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r27
	PPC_STORE_U32(r11.u32 + r27.u32, ctx.r9.u32);
	// b 0x823b96b0
	goto loc_823B96B0;
loc_823B9680:
	// addi r9,r27,384
	ctx.r9.s64 = r27.s64 + 384;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r10,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r10.u32);
loc_823B968C:
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x823b96b0
	if (cr6.eq) goto loc_823B96B0;
	// lhz r8,-8(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + -8);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x823b96b0
	if (!cr6.gt) goto loc_823B96B0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823b968c
	goto loc_823B968C;
loc_823B96B0:
	// addi r11,r29,8
	r11.s64 = r29.s64 + 8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r9.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r11,48(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 48);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
loc_823B96D0:
	// stw r11,48(r21)
	PPC_STORE_U32(r21.u32 + 48, r11.u32);
	// b 0x823b98e4
	goto loc_823B98E4;
loc_823B96D8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823b7150
	sub_823B7150(ctx, base);
	// b 0x823b98e4
	goto loc_823B98E4;
loc_823B96E8:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x823b9710
	if (!cr6.eq) goto loc_823B9710;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823b7288
	sub_823B7288(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x823b98e4
	if (!cr0.eq) goto loc_823B98E4;
loc_823B9710:
	// rlwinm. r11,r23,0,27,27
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b9720
	if (cr0.eq) goto loc_823B9720;
	// stw r19,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r19.u32);
	// b 0x823b98ec
	goto loc_823B98EC;
loc_823B9720:
	// rlwinm r23,r23,0,14,1
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFC003FFFF;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b97e8
	if (cr0.eq) goto loc_823B97E8;
	// rlwinm r10,r23,0,23,19
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFF1FF;
	// stw r10,348(r31)
	PPC_STORE_U32(r31.u32 + 348, ctx.r10.u32);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// li r9,256
	ctx.r9.s64 = 256;
	// rlwinm. r8,r11,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// rlwimi r9,r11,4,20,22
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 4) & 0xE00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF1FF);
	// or r23,r9,r10
	r23.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
	// beq 0x823b9764
	if (cr0.eq) goto loc_823B9764;
	// addi r11,r30,-32
	r11.s64 = r30.s64 + -32;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// b 0x823b9774
	goto loc_823B9774;
loc_823B9764:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
loc_823B9774:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r11,2(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823b97a0
	if (cr0.eq) goto loc_823B97A0;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823b97a0
	if (!cr0.eq) goto loc_823B97A0;
	// rlwinm r11,r11,18,0,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	r23.u64 = r11.u64 | r23.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
loc_823B97A0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823b9800
	goto loc_823B9800;
	// lwz r30,124(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// andi. r11,r11,253
	r11.u64 = r11.u64 & 253;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// li r19,0
	r19.s64 = 0;
	// li r22,1
	r22.s64 = 1;
	// lwz r26,364(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// lwz r20,356(r31)
	r20.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// lwz r23,348(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 348);
	// lwz r27,340(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// lwz r21,84(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r24,80(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r25,92(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// b 0x823b9800
	goto loc_823B9800;
loc_823B97E8:
	// lbz r11,7(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 7);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823b9800
	if (cr0.eq) goto loc_823B9800;
	// rlwinm r11,r11,18,0,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	r23.u64 = r11.u64 | r23.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
loc_823B9800:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r4,r23,0,29,27
	ctx.r4.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823b8560
	sub_823B8560(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x823b98dc
	if (cr0.eq) goto loc_823B98DC;
	// addi r11,r29,-16
	r11.s64 = r29.s64 + -16;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823b9890
	if (cr0.eq) goto loc_823B9890;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b983c
	if (cr0.eq) goto loc_823B983C;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// b 0x823b984c
	goto loc_823B984C;
loc_823B983C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = r11.s64 + -16;
loc_823B984C:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823b9888
	if (cr0.eq) goto loc_823B9888;
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b986c
	if (cr0.eq) goto loc_823B986C;
	// addi r11,r30,-32
	r11.s64 = r30.s64 + -32;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// b 0x823b987c
	goto loc_823B987C;
loc_823B986C:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
loc_823B987C:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x823b9890
	goto loc_823B9890;
loc_823B9888:
	// std r19,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r19.u64);
	// std r19,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r19.u64);
loc_823B9890:
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(r26.u32, r25.u32, xer);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// blt cr6,0x823b98a0
	if (cr6.lt) goto loc_823B98A0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_823B98A0:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(r26.u32, r25.u32, xer);
	// ble cr6,0x823b98cc
	if (!cr6.gt) goto loc_823B98CC;
	// rlwinm. r11,r23,0,28,28
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b98cc
	if (cr0.eq) goto loc_823B98CC;
	// subf r5,r25,r26
	ctx.r5.s64 = r26.s64 - r25.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r25
	ctx.r3.u64 = r29.u64 + r25.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
loc_823B98CC:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823b8e48
	sub_823B8E48(ctx, base);
loc_823B98DC:
	// mr r20,r29
	r20.u64 = r29.u64;
	// stw r20,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r20.u32);
loc_823B98E4:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x823b9918
	if (!cr6.eq) goto loc_823B9918;
loc_823B98EC:
	// rlwinm. r11,r23,0,29,29
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b9918
	if (cr0.eq) goto loc_823B9918;
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,23
	r11.u64 = r11.u64 | 23;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// stw r19,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r19.u32);
	// stw r22,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r22.u32);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// stw r19,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r19.u32);
	// stw r24,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r24.u32);
	// bl 0x826e4d9c
	__imp__RtlRaiseException(ctx, base);
loc_823B9918:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823b9934
	goto loc_823B9934;
	// li r11,0
	r11.s64 = 0;
	// stw r11,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r11.u32);
	// lwz r21,84(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_823B9934:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	r12.s64 = r31.s64 + 320;
	// bl 0x823b996c
	sub_823B996C(ctx, base);
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 356);
loc_823B9944:
	// addi r1,r31,320
	ctx.r1.s64 = r31.s64 + 320;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_823B97B0"))) PPC_WEAK_FUNC(sub_823B97B0);
PPC_FUNC_IMPL(__imp__sub_823B97B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister r30{};
	PPCRegister r31{};
	// lwz r30,124(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// andi. r11,r11,253
	r11.u64 = r11.u64 & 253;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// li r19,0
	r19.s64 = 0;
	// li r22,1
	r22.s64 = 1;
	// lwz r26,364(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// lwz r20,356(r31)
	r20.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// lwz r23,348(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 348);
	// lwz r27,340(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// lwz r21,84(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r24,80(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r25,92(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// b 0x823b9800
	// ERROR 823B9800
	return;
}

__attribute__((alias("__imp__sub_823B97E8"))) PPC_WEAK_FUNC(sub_823B97E8);
PPC_FUNC_IMPL(__imp__sub_823B97E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// lbz r11,7(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 7);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823b9800
	if (cr0.eq) goto loc_823B9800;
	// rlwinm r11,r11,18,0,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	r23.u64 = r11.u64 | r23.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
loc_823B9800:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r4,r23,0,29,27
	ctx.r4.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823b8560
	sub_823B8560(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x823b98dc
	if (cr0.eq) goto loc_823B98DC;
	// addi r11,r29,-16
	r11.s64 = r29.s64 + -16;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823b9890
	if (cr0.eq) goto loc_823B9890;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823b983c
	if (cr0.eq) goto loc_823B983C;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// b 0x823b984c
	goto loc_823B984C;
loc_823B983C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = r11.s64 + -16;
loc_823B984C:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823b9888
	if (cr0.eq) goto loc_823B9888;
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b986c
	if (cr0.eq) goto loc_823B986C;
	// addi r11,r30,-32
	r11.s64 = r30.s64 + -32;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// b 0x823b987c
	goto loc_823B987C;
loc_823B986C:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
loc_823B987C:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x823b9890
	goto loc_823B9890;
loc_823B9888:
	// std r19,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r19.u64);
	// std r19,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r19.u64);
loc_823B9890:
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(r26.u32, r25.u32, xer);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// blt cr6,0x823b98a0
	if (cr6.lt) goto loc_823B98A0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_823B98A0:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(r26.u32, r25.u32, xer);
	// ble cr6,0x823b98cc
	if (!cr6.gt) goto loc_823B98CC;
	// rlwinm. r11,r23,0,28,28
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b98cc
	if (cr0.eq) goto loc_823B98CC;
	// subf r5,r25,r26
	ctx.r5.s64 = r26.s64 - r25.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r25
	ctx.r3.u64 = r29.u64 + r25.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
loc_823B98CC:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823b8e48
	sub_823B8E48(ctx, base);
loc_823B98DC:
	// mr r20,r29
	r20.u64 = r29.u64;
	// stw r20,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r20.u32);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x823b9918
	if (!cr6.eq) goto loc_823B9918;
	// rlwinm. r11,r23,0,29,29
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b9918
	if (cr0.eq) goto loc_823B9918;
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,23
	r11.u64 = r11.u64 | 23;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// stw r19,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r19.u32);
	// stw r22,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r22.u32);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// stw r19,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r19.u32);
	// stw r24,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r24.u32);
	// bl 0x826e4d9c
	__imp__RtlRaiseException(ctx, base);
loc_823B9918:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823b9934
	// ERROR 823B9934
	return;
}

__attribute__((alias("__imp__sub_823B9928"))) PPC_WEAK_FUNC(sub_823B9928);
PPC_FUNC_IMPL(__imp__sub_823B9928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r21{};
	PPCRegister r31{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r11.u32);
	// lwz r21,84(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	r12.s64 = r31.s64 + 320;
	// bl 0x823b996c
	sub_823B996C(ctx, base);
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// addi r1,r31,320
	ctx.r1.s64 = r31.s64 + 320;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_823B994C"))) PPC_WEAK_FUNC(sub_823B994C);
PPC_FUNC_IMPL(__imp__sub_823B994C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r21{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// std r21,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r21.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r21,84(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// b 0x823b9984
	goto loc_823B9984;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// std r21,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r21.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_823B9984:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b9998
	if (cr6.eq) goto loc_823B9998;
	// lwz r3,1408(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 1408);
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_823B9998:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r21,-16(r1)
	r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B996C"))) PPC_WEAK_FUNC(sub_823B996C);
PPC_FUNC_IMPL(__imp__sub_823B996C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r21{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// std r21,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r21.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b9998
	if (cr6.eq) goto loc_823B9998;
	// lwz r3,1408(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 1408);
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_823B9998:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r21,-16(r1)
	r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B99B0"))) PPC_WEAK_FUNC(sub_823B99B0);
PPC_FUNC_IMPL(__imp__sub_823B99B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,23
	ctx.r10.u64 = ctx.r10.u64 | 23;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B99D8"))) PPC_WEAK_FUNC(sub_823B99D8);
PPC_FUNC_IMPL(__imp__sub_823B99D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B99E4"))) PPC_WEAK_FUNC(sub_823B99E4);
PPC_FUNC_IMPL(__imp__sub_823B99E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B99E8"))) PPC_WEAK_FUNC(sub_823B99E8);
PPC_FUNC_IMPL(__imp__sub_823B99E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r3,15168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 15168);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B99F4"))) PPC_WEAK_FUNC(sub_823B99F4);
PPC_FUNC_IMPL(__imp__sub_823B99F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B99F8"))) PPC_WEAK_FUNC(sub_823B99F8);
PPC_FUNC_IMPL(__imp__sub_823B99F8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823b9af8
	sub_823B9AF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e4e1c
	__imp__ExTerminateThread(ctx, base);
}

__attribute__((alias("__imp__sub_823B9A1C"))) PPC_WEAK_FUNC(sub_823B9A1C);
PPC_FUNC_IMPL(__imp__sub_823B9A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B9A20"))) PPC_WEAK_FUNC(sub_823B9A20);
PPC_FUNC_IMPL(__imp__sub_823B9A20) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// b 0x823baa48
	sub_823BAA48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B9A2C"))) PPC_WEAK_FUNC(sub_823B9A2C);
PPC_FUNC_IMPL(__imp__sub_823B9A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B9A30"))) PPC_WEAK_FUNC(sub_823B9A30);
PPC_FUNC_IMPL(__imp__sub_823B9A30) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b9a5c
	if (cr6.eq) goto loc_823B9A5C;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_823B9A5C:
	// cmplwi cr6,r3,65001
	cr6.compare<uint32_t>(ctx.r3.u32, 65001, xer);
	// bne cr6,0x823b9a78
	if (!cr6.eq) goto loc_823B9A78;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823baab8
	sub_823BAAB8(ctx, base);
	// b 0x823b9ae8
	goto loc_823B9AE8;
loc_823B9A78:
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x823b9a90
	if (!cr6.eq) goto loc_823B9A90;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823b4d20
	sub_823B4D20(ctx, base);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// b 0x823b9a94
	goto loc_823B9A94;
loc_823B9A90:
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_823B9A94:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x823b9aa4
	if (!cr6.eq) goto loc_823B9AA4;
loc_823B9A9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x823b9ae8
	goto loc_823B9AE8;
loc_823B9AA4:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x823b9adc
	if (cr6.lt) goto loc_823B9ADC;
	// cmpw cr6,r29,r31
	cr6.compare<int32_t>(r29.s32, r31.s32, xer);
	// blt cr6,0x823b9adc
	if (cr6.lt) goto loc_823B9ADC;
	// rlwinm r7,r31,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826e4e3c
	__imp__RtlUnicodeToMultiByteN(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823b9a9c
	if (!cr0.lt) goto loc_823B9A9C;
	// bl 0x826e4e2c
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x823b9ae0
	goto loc_823B9AE0;
loc_823B9ADC:
	// li r3,122
	ctx.r3.s64 = 122;
loc_823B9AE0:
	// bl 0x823b9af0
	sub_823B9AF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B9AE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823B9AF0"))) PPC_WEAK_FUNC(sub_823B9AF0);
PPC_FUNC_IMPL(__imp__sub_823B9AF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ba6c0
	sub_823BA6C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B9AF4"))) PPC_WEAK_FUNC(sub_823B9AF4);
PPC_FUNC_IMPL(__imp__sub_823B9AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B9AF8"))) PPC_WEAK_FUNC(sub_823B9AF8);
PPC_FUNC_IMPL(__imp__sub_823B9AF8) {
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
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r28,r11,-19196
	r28.s64 = r11.s64 + -19196;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r30,r11,-19168
	r30.s64 = r11.s64 + -19168;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x823b9b40
	goto loc_823B9B40;
loc_823B9B28:
	// mr r11,r31
	r11.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B9B40:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x823b9b28
	if (!cr6.eq) goto loc_823B9B28;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823B9B58"))) PPC_WEAK_FUNC(sub_823B9B58);
PPC_FUNC_IMPL(__imp__sub_823B9B58) {
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
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,-19196
	r29.s64 = r11.s64 + -19196;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x823b9ba4
	if (cr6.eq) goto loc_823B9BA4;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r11,r11,-19168
	r11.s64 = r11.s64 + -19168;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
	// b 0x823b9bb4
	goto loc_823B9BB4;
loc_823B9BA4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_823B9BB4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823B9BC4"))) PPC_WEAK_FUNC(sub_823B9BC4);
PPC_FUNC_IMPL(__imp__sub_823B9BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B9BC8"))) PPC_WEAK_FUNC(sub_823B9BC8);
PPC_FUNC_IMPL(__imp__sub_823B9BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826e4e7c
	__imp__NtSuspendThread(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823b9bf0
	if (!cr0.lt) goto loc_823B9BF0;
	// bl 0x823ba828
	sub_823BA828(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823b9bf4
	goto loc_823B9BF4;
loc_823B9BF0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823B9BF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B9C04"))) PPC_WEAK_FUNC(sub_823B9C04);
PPC_FUNC_IMPL(__imp__sub_823B9C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B9C08"))) PPC_WEAK_FUNC(sub_823B9C08);
PPC_FUNC_IMPL(__imp__sub_823B9C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,15176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 15176);
	// stw r10,15176(r11)
	PPC_STORE_U32(r11.u32 + 15176, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B9C1C"))) PPC_WEAK_FUNC(sub_823B9C1C);
PPC_FUNC_IMPL(__imp__sub_823B9C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B9C20"))) PPC_WEAK_FUNC(sub_823B9C20);
PPC_FUNC_IMPL(__imp__sub_823B9C20) {
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
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(r30.u32, 6, xer);
	// bge cr6,0x823b9c7c
	if (!cr6.lt) goto loc_823B9C7C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,1836(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1836);
	// bl 0x826e4e6c
	__imp__ObReferenceObjectByHandle(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x823b9cac
	if (cr0.lt) goto loc_823B9CAC;
	// li r11,1
	r11.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// slw r4,r11,r30
	ctx.r4.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
	// bl 0x826e4e8c
	__imp__KeSetAffinityThread(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826e4e4c
	__imp__ObDereferenceObject(ctx, base);
	// b 0x823b9c84
	goto loc_823B9C84;
loc_823B9C7C:
	// lis r31,-16384
	r31.s64 = -1073741824;
	// ori r31,r31,13
	r31.u64 = r31.u64 | 13;
loc_823B9C84:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x823b9cac
	if (cr6.lt) goto loc_823B9CAC;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b9ca4
	if (cr6.eq) goto loc_823B9CA4;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subfic r3,r11,31
	xer.ca = r11.u32 <= 31;
	ctx.r3.s64 = 31 - r11.s64;
	// b 0x823b9cb8
	goto loc_823B9CB8;
loc_823B9CA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823b9cb8
	goto loc_823B9CB8;
loc_823B9CAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ba828
	sub_823BA828(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823B9CB8:
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

__attribute__((alias("__imp__sub_823B9CD0"))) PPC_WEAK_FUNC(sub_823B9CD0);
PPC_FUNC_IMPL(__imp__sub_823B9CD0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,268(r13)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B9CD8"))) PPC_WEAK_FUNC(sub_823B9CD8);
PPC_FUNC_IMPL(__imp__sub_823B9CD8) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,1824(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1824);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823b9d18
	if (cr0.eq) goto loc_823B9D18;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,10
	ctx.r3.s64 = 10;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823b9d1c
	goto loc_823B9D1C;
loc_823B9D18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B9D1C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823b9d50
	if (!cr6.eq) goto loc_823B9D50;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r10,15176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 15176);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b9d50
	if (cr6.eq) goto loc_823B9D50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq cr6,0x823b9d54
	if (cr6.eq) goto loc_823B9D54;
loc_823B9D50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B9D54:
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

__attribute__((alias("__imp__sub_823B9D68"))) PPC_WEAK_FUNC(sub_823B9D68);
PPC_FUNC_IMPL(__imp__sub_823B9D68) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,65001
	cr6.compare<uint32_t>(r11.u32, 65001, xer);
	// bne cr6,0x823b9da4
	if (!cr6.eq) goto loc_823B9DA4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x823babf0
	sub_823BABF0(ctx, base);
	// b 0x823b9e2c
	goto loc_823B9E2C;
loc_823B9DA4:
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x823b9dd8
	if (!cr6.eq) goto loc_823B9DD8;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823B9DB4:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x823b9db4
	if (!cr6.eq) goto loc_823B9DB4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// b 0x823b9ddc
	goto loc_823B9DDC;
loc_823B9DD8:
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_823B9DDC:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x823b9dec
	if (!cr6.eq) goto loc_823B9DEC;
loc_823B9DE4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x823b9e2c
	goto loc_823B9E2C;
loc_823B9DEC:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x823b9e20
	if (cr6.lt) goto loc_823B9E20;
	// cmpw cr6,r8,r31
	cr6.compare<int32_t>(ctx.r8.s32, r31.s32, xer);
	// blt cr6,0x823b9e20
	if (cr6.lt) goto loc_823B9E20;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x826e4e9c
	__imp__RtlMultiByteToUnicodeN(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823b9de4
	if (!cr0.lt) goto loc_823B9DE4;
	// bl 0x826e4e2c
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x823b9e24
	goto loc_823B9E24;
loc_823B9E20:
	// li r3,122
	ctx.r3.s64 = 122;
loc_823B9E24:
	// bl 0x823b9af0
	sub_823B9AF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B9E2C:
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

__attribute__((alias("__imp__sub_823B9E40"))) PPC_WEAK_FUNC(sub_823B9E40);
PPC_FUNC_IMPL(__imp__sub_823B9E40) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x823bb048
	sub_823BB048(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823b9e78
	if (cr0.eq) goto loc_823B9E78;
	// bl 0x823b9af0
	sub_823B9AF0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823b9fa8
	goto loc_823B9FA8;
loc_823B9E78:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823b9ebc
	if (!cr6.eq) goto loc_823B9EBC;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r30.u32);
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
loc_823B9EBC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826e4cac
	__imp__KeQuerySystemTime(ctx, base);
	// lhz r11,70(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 70);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823b9fa4
	if (cr0.eq) goto loc_823B9FA4;
	// lhz r11,154(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 154);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823b9fa4
	if (cr0.eq) goto loc_823B9FA4;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x823badf0
	sub_823BADF0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b9fa4
	if (cr0.eq) goto loc_823B9FA4;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x823badf0
	sub_823BADF0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b9fa4
	if (cr0.eq) goto loc_823B9FA4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,152
	r11.s64 = 9961472;
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r8,168(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// mulli r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 * 60;
	// mulli r9,r9,60
	ctx.r9.s64 = ctx.r9.s64 * 60;
	// ori r11,r11,38528
	r11.u64 = r11.u64 | 38528;
	// mulli r8,r8,60
	ctx.r8.s64 = ctx.r8.s64 * 60;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// mulld r10,r10,r11
	ctx.r10.s64 = ctx.r10.s64 * r11.s64;
	// mulld r11,r9,r11
	r11.s64 = ctx.r9.s64 * r11.s64;
	// mulld r9,r8,r7
	ctx.r9.s64 = ctx.r8.s64 * ctx.r7.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(r11.s64, ctx.r10.s64, xer);
	// bge cr6,0x823b9f8c
	if (!cr6.lt) goto loc_823B9F8C;
	// cmpd cr6,r9,r11
	cr6.compare<int64_t>(ctx.r9.s64, r11.s64, xer);
	// blt cr6,0x823b9f84
	if (cr6.lt) goto loc_823B9F84;
	// cmpd cr6,r9,r10
	cr6.compare<int64_t>(ctx.r9.s64, ctx.r10.s64, xer);
	// blt cr6,0x823b9fa0
	if (cr6.lt) goto loc_823B9FA0;
loc_823B9F84:
	// li r30,1
	r30.s64 = 1;
	// b 0x823b9fa4
	goto loc_823B9FA4;
loc_823B9F8C:
	// cmpd cr6,r9,r10
	cr6.compare<int64_t>(ctx.r9.s64, ctx.r10.s64, xer);
	// blt cr6,0x823b9fa0
	if (cr6.lt) goto loc_823B9FA0;
	// cmpd cr6,r9,r11
	cr6.compare<int64_t>(ctx.r9.s64, r11.s64, xer);
	// li r30,1
	r30.s64 = 1;
	// blt cr6,0x823b9fa4
	if (cr6.lt) goto loc_823B9FA4;
loc_823B9FA0:
	// li r30,2
	r30.s64 = 2;
loc_823B9FA4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_823B9FA8:
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

__attribute__((alias("__imp__sub_823B9FC0"))) PPC_WEAK_FUNC(sub_823B9FC0);
PPC_FUNC_IMPL(__imp__sub_823B9FC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826e4eac
	__imp__NtResumeThread(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823b9fe8
	if (!cr0.lt) goto loc_823B9FE8;
	// bl 0x823ba6d8
	sub_823BA6D8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823b9fec
	goto loc_823B9FEC;
loc_823B9FE8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823B9FEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B9FFC"))) PPC_WEAK_FUNC(sub_823B9FFC);
PPC_FUNC_IMPL(__imp__sub_823B9FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BA000"))) PPC_WEAK_FUNC(sub_823BA000);
PPC_FUNC_IMPL(__imp__sub_823BA000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826e4ebc
	__imp__NtFlushBuffersFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823ba024
	if (cr0.lt) goto loc_823BA024;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823ba02c
	goto loc_823BA02C;
loc_823BA024:
	// bl 0x823ba6d8
	sub_823BA6D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823BA02C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BA03C"))) PPC_WEAK_FUNC(sub_823BA03C);
PPC_FUNC_IMPL(__imp__sub_823BA03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BA040"))) PPC_WEAK_FUNC(sub_823BA040);
PPC_FUNC_IMPL(__imp__sub_823BA040) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e4d6c
	__imp__NtQueryInformationFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823ba0c8
	if (cr0.lt) goto loc_823BA0C8;
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// bl 0x826e4d5c
	__imp__NtSetInformationFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823ba0c8
	if (cr0.lt) goto loc_823BA0C8;
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// bl 0x826e4d5c
	__imp__NtSetInformationFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823ba0c8
	if (cr0.lt) goto loc_823BA0C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823ba0d0
	goto loc_823BA0D0;
loc_823BA0C8:
	// bl 0x823ba6d8
	sub_823BA6D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823BA0D0:
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

__attribute__((alias("__imp__sub_823BA0E4"))) PPC_WEAK_FUNC(sub_823BA0E4);
PPC_FUNC_IMPL(__imp__sub_823BA0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BA0E8"))) PPC_WEAK_FUNC(sub_823BA0E8);
PPC_FUNC_IMPL(__imp__sub_823BA0E8) {
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
	// bl 0x823b99e8
	sub_823B99E8(ctx, base);
	// rlwinm r4,r31,29,28,28
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 29) & 0x8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823b8560
	sub_823B8560(ctx, base);
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

__attribute__((alias("__imp__sub_823BA12C"))) PPC_WEAK_FUNC(sub_823BA12C);
PPC_FUNC_IMPL(__imp__sub_823BA12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BA130"))) PPC_WEAK_FUNC(sub_823BA130);
PPC_FUNC_IMPL(__imp__sub_823BA130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x823b99e8
	sub_823B99E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823b8e48
	sub_823B8E48(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x823ba164
	if (!cr0.eq) goto loc_823BA164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823BA164:
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

__attribute__((alias("__imp__sub_823BA178"))) PPC_WEAK_FUNC(sub_823BA178);
PPC_FUNC_IMPL(__imp__sub_823BA178) {
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
	// bl 0x823b99e8
	sub_823B99E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823b77f8
	sub_823B77F8(ctx, base);
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

__attribute__((alias("__imp__sub_823BA1B0"))) PPC_WEAK_FUNC(sub_823BA1B0);
PPC_FUNC_IMPL(__imp__sub_823BA1B0) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r10,-31616(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -31616);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ba1e0
	if (cr6.eq) goto loc_823BA1E0;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823BA1E0:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,720
	r11.s64 = r11.s64 + 720;
	// addi r30,r10,732
	r30.s64 = ctx.r10.s64 + 732;
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bge cr6,0x823ba230
	if (!cr6.lt) goto loc_823BA230;
loc_823BA200:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x823ba278
	if (!cr6.eq) goto loc_823BA278;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823ba21c
	if (cr0.eq) goto loc_823BA21C;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823BA21C:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x823ba200
	if (cr6.lt) goto loc_823BA200;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x823ba278
	if (!cr6.eq) goto loc_823BA278;
loc_823BA230:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// addi r30,r10,716
	r30.s64 = ctx.r10.s64 + 716;
	// mr r31,r11
	r31.u64 = r11.u64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bge cr6,0x823ba274
	if (!cr6.lt) goto loc_823BA274;
loc_823BA24C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823ba268
	if (cr0.eq) goto loc_823BA268;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x823ba268
	if (cr6.eq) goto loc_823BA268;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823BA268:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x823ba24c
	if (cr6.lt) goto loc_823BA24C;
loc_823BA274:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823BA278:
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

__attribute__((alias("__imp__sub_823BA290"))) PPC_WEAK_FUNC(sub_823BA290);
PPC_FUNC_IMPL(__imp__sub_823BA290) {
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
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,0
	r11.s64 = r11.s64 + 0;
	// addi r30,r10,12
	r30.s64 = ctx.r10.s64 + 12;
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bge cr6,0x823ba2ec
	if (!cr6.lt) goto loc_823BA2EC;
loc_823BA2C4:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x823ba2ec
	if (!cr6.eq) goto loc_823BA2EC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823ba2e0
	if (cr0.eq) goto loc_823BA2E0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823BA2E0:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x823ba2c4
	if (cr6.lt) goto loc_823BA2C4;
loc_823BA2EC:
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

__attribute__((alias("__imp__sub_823BA304"))) PPC_WEAK_FUNC(sub_823BA304);
PPC_FUNC_IMPL(__imp__sub_823BA304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BA308"))) PPC_WEAK_FUNC(sub_823BA308);
PPC_FUNC_IMPL(__imp__sub_823BA308) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r30,16
	r30.s64 = 1048576;
	// lwz r11,1804(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1804);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823ba360
	if (cr0.eq) goto loc_823BA360;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// ori r4,r4,1025
	ctx.r4.u64 = ctx.r4.u64 | 1025;
	// bl 0x826e4ecc
	__imp__RtlImageXexHeaderField(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823ba360
	if (cr0.eq) goto loc_823BA360;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x823ba360
	if (!cr0.eq) goto loc_823BA360;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823ba3c4
	goto loc_823BA3C4;
loc_823BA360:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_823BA370:
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x823ba370
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823BA370;
	// lis r31,-32126
	r31.s64 = -2105409536;
	// li r11,48
	r11.s64 = 48;
	// lwz r3,15168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 15168);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823ba3b4
	if (!cr6.eq) goto loc_823BA3B4;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823b7fb0
	sub_823B7FB0(ctx, base);
	// stw r3,15168(r31)
	PPC_STORE_U32(r31.u32 + 15168, ctx.r3.u32);
loc_823BA3B4:
	// addi r11,r3,0
	r11.s64 = ctx.r3.s64 + 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_823BA3C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_823BA3DC"))) PPC_WEAK_FUNC(sub_823BA3DC);
PPC_FUNC_IMPL(__imp__sub_823BA3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BA3E0"))) PPC_WEAK_FUNC(sub_823BA3E0);
PPC_FUNC_IMPL(__imp__sub_823BA3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x823ba308
	sub_823BA308(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823ba428
	if (!cr0.eq) goto loc_823BA428;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1824(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1824);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823ba420
	if (cr0.eq) goto loc_823BA420;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823BA420:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826e4edc
	__imp__HalReturnToFirmware(ctx, base);
loc_823BA428:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BA438"))) PPC_WEAK_FUNC(sub_823BA438);
PPC_FUNC_IMPL(__imp__sub_823BA438) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b9e40
	sub_823B9E40(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x823ba488
	if (cr6.lt) goto loc_823BA488;
	// beq cr6,0x823ba478
	if (cr6.eq) goto loc_823BA478;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x823ba470
	if (cr6.lt) goto loc_823BA470;
	// li r11,0
	r11.s64 = 0;
	// b 0x823ba48c
	goto loc_823BA48C;
loc_823BA470:
	// lwz r11,248(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// b 0x823ba47c
	goto loc_823BA47C;
loc_823BA478:
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_823BA47C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x823ba48c
	goto loc_823BA48C;
loc_823BA488:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823BA48C:
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// ori r10,r10,38528
	ctx.r10.u64 = ctx.r10.u64 | 38528;
	// mulld r11,r11,r10
	r11.s64 = r11.s64 * ctx.r10.s64;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BA4B8"))) PPC_WEAK_FUNC(sub_823BA4B8);
PPC_FUNC_IMPL(__imp__sub_823BA4B8) {
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
	// li r31,0
	r31.s64 = 0;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// ld r11,0(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r11,r1,104
	r11.s64 = ctx.r1.s64 + 104;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// mr. r11,r9
	r11.u64 = ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ba524
	if (cr0.eq) goto loc_823BA524;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
loc_823BA510:
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r7,92
	cr6.compare<uint32_t>(ctx.r7.u32, 92, xer);
	// beq cr6,0x823ba524
	if (cr6.eq) goto loc_823BA524;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823ba510
	if (!cr0.eq) goto loc_823BA510;
loc_823BA524:
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// clrlwi. r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// sth r10,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r10.u16);
	// sth r9,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r9.u16);
	// sth r9,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r9.u16);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// sth r10,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r10.u16);
	// beq 0x823ba610
	if (cr0.eq) goto loc_823BA610;
	// clrlwi. r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823ba610
	if (cr0.eq) goto loc_823BA610;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x823ba584
	if (!cr6.eq) goto loc_823BA584;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,42
	cr6.compare<uint32_t>(ctx.r10.u32, 42, xer);
	// bne cr6,0x823ba584
	if (!cr6.eq) goto loc_823BA584;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplwi cr6,r10,46
	cr6.compare<uint32_t>(ctx.r10.u32, 46, xer);
	// bne cr6,0x823ba584
	if (!cr6.eq) goto loc_823BA584;
	// lbz r11,2(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// cmplwi cr6,r11,42
	cr6.compare<uint32_t>(r11.u32, 42, xer);
	// bne cr6,0x823ba584
	if (!cr6.eq) goto loc_823BA584;
	// sth r31,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, r31.u16);
loc_823BA584:
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r8,16417
	ctx.r8.s64 = 16417;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826e4d7c
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823ba618
	if (cr0.lt) goto loc_823BA618;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826e4eec
	__imp__NtQueryDirectoryFile(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x823ba5ec
	if (!cr0.lt) goto loc_823BA5EC;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x826e4c4c
	__imp__NtClose(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x823ba618
	goto loc_823BA618;
loc_823BA5EC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x823ba600
	if (cr6.eq) goto loc_823BA600;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x823ba608
	goto loc_823BA608;
loc_823BA600:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x826e4c4c
	__imp__NtClose(ctx, base);
loc_823BA608:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x823ba618
	goto loc_823BA618;
loc_823BA610:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
loc_823BA618:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823BA620"))) PPC_WEAK_FUNC(sub_823BA620);
PPC_FUNC_IMPL(__imp__sub_823BA620) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823ba650
	if (cr6.eq) goto loc_823BA650;
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mulli r11,r11,-10000
	r11.s64 = r11.s64 * -10000;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// b 0x823ba660
	goto loc_823BA660;
loc_823BA650:
	// li r11,0
	r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_823BA660:
	// clrlwi r30,r31,24
	r30.u64 = r31.u32 & 0xFF;
loc_823BA664:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826e4efc
	__imp__KeDelayExecutionThread(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823ba684
	if (cr6.eq) goto loc_823BA684;
	// cmpwi cr6,r3,257
	cr6.compare<int32_t>(ctx.r3.s32, 257, xer);
	// beq cr6,0x823ba664
	if (cr6.eq) goto loc_823BA664;
loc_823BA684:
	// cmpwi cr6,r3,192
	cr6.compare<int32_t>(ctx.r3.s32, 192, xer);
	// li r3,192
	ctx.r3.s64 = 192;
	// beq cr6,0x823ba694
	if (cr6.eq) goto loc_823BA694;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823BA694:
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

__attribute__((alias("__imp__sub_823BA6AC"))) PPC_WEAK_FUNC(sub_823BA6AC);
PPC_FUNC_IMPL(__imp__sub_823BA6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BA6B0"))) PPC_WEAK_FUNC(sub_823BA6B0);
PPC_FUNC_IMPL(__imp__sub_823BA6B0) {
	PPC_FUNC_PROLOGUE();
	// lhz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x823bb280
	sub_823BB280(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BA6BC"))) PPC_WEAK_FUNC(sub_823BA6BC);
PPC_FUNC_IMPL(__imp__sub_823BA6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BA6C0"))) PPC_WEAK_FUNC(sub_823BA6C0);
PPC_FUNC_IMPL(__imp__sub_823BA6C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,336(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,256(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// stw r3,352(r11)
	PPC_STORE_U32(r11.u32 + 352, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BA6D8"))) PPC_WEAK_FUNC(sub_823BA6D8);
PPC_FUNC_IMPL(__imp__sub_823BA6D8) {
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
	// bl 0x826e4e2c
	__imp__RtlNtStatusToDosError(ctx, base);
	// lwz r11,336(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823ba6fc
	if (!cr6.eq) goto loc_823BA6FC;
	// lwz r11,256(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// stw r3,352(r11)
	PPC_STORE_U32(r11.u32 + 352, ctx.r3.u32);
loc_823BA6FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BA70C"))) PPC_WEAK_FUNC(sub_823BA70C);
PPC_FUNC_IMPL(__imp__sub_823BA70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BA710"))) PPC_WEAK_FUNC(sub_823BA710);
PPC_FUNC_IMPL(__imp__sub_823BA710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,336(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823ba728
	if (!cr6.eq) goto loc_823BA728;
	// lwz r11,256(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r3,352(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 352);
	// blr 
	return;
loc_823BA728:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BA730"))) PPC_WEAK_FUNC(sub_823BA730);
PPC_FUNC_IMPL(__imp__sub_823BA730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823ba7b8
	if (cr6.eq) goto loc_823BA7B8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r11,-20584
	ctx.r10.s64 = r11.s64 + -20584;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823BA744:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823ba768
	if (cr0.eq) goto loc_823BA768;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823ba744
	if (cr6.eq) goto loc_823BA744;
loc_823BA768:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823ba778
	if (!cr0.eq) goto loc_823BA778;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// b 0x823ba7b4
	goto loc_823BA7B4;
loc_823BA778:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r11,-20604
	ctx.r10.s64 = r11.s64 + -20604;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823BA784:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823ba7a8
	if (cr0.eq) goto loc_823BA7A8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823ba784
	if (cr6.eq) goto loc_823BA784;
loc_823BA7A8:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823ba7b8
	if (!cr0.eq) goto loc_823BA7B8;
	// ori r4,r4,256
	ctx.r4.u64 = ctx.r4.u64 | 256;
loc_823BA7B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823BA7B8:
	// b 0x826e4b2c
	__imp__XamLoaderLaunchTitle(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BA7BC"))) PPC_WEAK_FUNC(sub_823BA7BC);
PPC_FUNC_IMPL(__imp__sub_823BA7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BA7C0"))) PPC_WEAK_FUNC(sub_823BA7C0);
PPC_FUNC_IMPL(__imp__sub_823BA7C0) {
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
	// li r30,1627
	r30.s64 = 1627;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823ba808
	if (cr6.eq) goto loc_823BA808;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e4b3c
	__imp__XamGetExecutionId(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823ba80c
	if (cr0.lt) goto loc_823BA80C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r31,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 16) & 0xFFFF;
	// lhz r11,12(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823ba80c
	if (!cr6.eq) goto loc_823BA80C;
loc_823BA808:
	// li r30,0
	r30.s64 = 0;
loc_823BA80C:
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

__attribute__((alias("__imp__sub_823BA828"))) PPC_WEAK_FUNC(sub_823BA828);
PPC_FUNC_IMPL(__imp__sub_823BA828) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ba6d8
	sub_823BA6D8(ctx, base);
	return;
}

