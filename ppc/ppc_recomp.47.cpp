#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8220918C"))) PPC_WEAK_FUNC(sub_8220918C);
PPC_FUNC_IMPL(__imp__sub_8220918C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12920
	r11.s64 = r11.s64 + 12920;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12920
	ctx.r10.s64 = ctx.r10.s64 + 12920;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822091B4"))) PPC_WEAK_FUNC(sub_822091B4);
PPC_FUNC_IMPL(__imp__sub_822091B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822091B8"))) PPC_WEAK_FUNC(sub_822091B8);
PPC_FUNC_IMPL(__imp__sub_822091B8) {
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
	// bl 0x82208e48
	sub_82208E48(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822091e8
	if (cr0.eq) goto loc_822091E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_822091E8:
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

__attribute__((alias("__imp__sub_82209204"))) PPC_WEAK_FUNC(sub_82209204);
PPC_FUNC_IMPL(__imp__sub_82209204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82209208"))) PPC_WEAK_FUNC(sub_82209208);
PPC_FUNC_IMPL(__imp__sub_82209208) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,172
	ctx.r3.s64 = r31.s64 + 172;
	// lbz r28,178(r31)
	r28.u64 = PPC_LOAD_U8(r31.u32 + 178);
	// lwz r25,180(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lhz r29,0(r3)
	r29.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// bl 0x821effb8
	sub_821EFFB8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x82209244
	if (!cr6.eq) goto loc_82209244;
loc_82209238:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// b 0x822092c8
	goto loc_822092C8;
loc_82209244:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d57c8
	sub_821D57C8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82209238
	if (!cr0.eq) goto loc_82209238;
	// li r26,1
	r26.s64 = 1;
	// addi r30,r31,200
	r30.s64 = r31.s64 + 200;
loc_82209270:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bne cr6,0x82209238
	if (!cr6.eq) goto loc_82209238;
	// lbz r11,6(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 6);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bne cr6,0x82209238
	if (!cr6.eq) goto loc_82209238;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(r11.s32, r25.s32, xer);
	// bne cr6,0x82209238
	if (!cr6.eq) goto loc_82209238;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821effb8
	sub_821EFFB8(ctx, base);
	// cmpw cr6,r3,r27
	cr6.compare<int32_t>(ctx.r3.s32, r27.s32, xer);
	// bne cr6,0x82209238
	if (!cr6.eq) goto loc_82209238;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// cmpwi cr6,r26,6
	cr6.compare<int32_t>(r26.s32, 6, xer);
	// blt cr6,0x82209270
	if (cr6.lt) goto loc_82209270;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r29,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r29.u32);
	// stw r28,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r28.u32);
	// stw r27,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r27.u32);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
loc_822092C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822092DC"))) PPC_WEAK_FUNC(sub_822092DC);
PPC_FUNC_IMPL(__imp__sub_822092DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822092E0"))) PPC_WEAK_FUNC(sub_822092E0);
PPC_FUNC_IMPL(__imp__sub_822092E0) {
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r29,r11,12924
	r29.s64 = r11.s64 + 12924;
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
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,14128(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14128);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82209390
	if (cr6.gt) goto loc_82209390;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82315350
	sub_82315350(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,40
	ctx.r4.s64 = r30.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,44
	ctx.r4.s64 = r30.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r30,52
	r30.s64 = r30.s64 + 52;
	// li r28,6
	r28.s64 = 6;
	// addi r29,r11,15600
	r29.s64 = r11.s64 + 15600;
loc_8220935C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82132d78
	sub_82132D78(ctx, base);
	// lbz r11,12(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82209384
	if (!cr0.eq) goto loc_82209384;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359d00
	sub_82359D00(ctx, base);
loc_82209384:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// bne 0x8220935c
	if (!cr0.eq) goto loc_8220935C;
loc_82209390:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82209398"))) PPC_WEAK_FUNC(sub_82209398);
PPC_FUNC_IMPL(__imp__sub_82209398) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// addi r6,r11,12236
	ctx.r6.s64 = r11.s64 + 12236;
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
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8220943c
	if (cr0.eq) goto loc_8220943C;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r27,r31,172
	r27.s64 = r31.s64 + 172;
	// addi r30,r3,178
	r30.s64 = ctx.r3.s64 + 178;
	// addi r29,r31,52
	r29.s64 = r31.s64 + 52;
	// subf r26,r31,r3
	r26.s64 = ctx.r3.s64 - r31.s64;
	// li r28,6
	r28.s64 = 6;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
loc_82209404:
	// add r4,r26,r29
	ctx.r4.u64 = r26.u64 + r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r30,-6
	ctx.r4.s64 = r30.s64 + -6;
	// lwz r6,2(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 2);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// bl 0x821f20e8
	sub_821F20E8(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// addi r27,r27,28
	r27.s64 = r27.s64 + 28;
	// bne 0x82209404
	if (!cr0.eq) goto loc_82209404;
loc_8220943C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82209208
	sub_82209208(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8220944C"))) PPC_WEAK_FUNC(sub_8220944C);
PPC_FUNC_IMPL(__imp__sub_8220944C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82209450"))) PPC_WEAK_FUNC(sub_82209450);
PPC_FUNC_IMPL(__imp__sub_82209450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	// lwz r16,25160(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 25160);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822094d0
	if (cr6.eq) goto loc_822094D0;
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
	// beq 0x822094dc
	if (cr0.eq) goto loc_822094DC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822094dc
	goto loc_822094DC;
loc_822094D0:
	// li r11,6
	r11.s64 = 6;
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_822094DC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82209458"))) PPC_WEAK_FUNC(sub_82209458);
PPC_FUNC_IMPL(__imp__sub_82209458) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822094d0
	if (cr6.eq) goto loc_822094D0;
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
	// beq 0x822094dc
	if (cr0.eq) goto loc_822094DC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822094dc
	goto loc_822094DC;
loc_822094D0:
	// li r11,6
	r11.s64 = 6;
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_822094DC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822094E8"))) PPC_WEAK_FUNC(sub_822094E8);
PPC_FUNC_IMPL(__imp__sub_822094E8) {
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

__attribute__((alias("__imp__sub_82209510"))) PPC_WEAK_FUNC(sub_82209510);
PPC_FUNC_IMPL(__imp__sub_82209510) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mulli r11,r30,20
	r11.s64 = r30.s64 * 20;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r27,r11,52
	r27.s64 = r11.s64 + 52;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,15600
	ctx.r3.s64 = r11.s64 + 15600;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r29,r11,8200
	r29.s64 = r11.s64 + 8200;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r28,r11,6532
	r28.s64 = r11.s64 + 6532;
	// bl 0x8235a608
	sub_8235A608(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82209590
	if (cr0.eq) goto loc_82209590;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359808
	sub_82359808(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82209594
	goto loc_82209594;
loc_82209590:
	// li r29,0
	r29.s64 = 0;
loc_82209594:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x822095b4
	if (cr6.eq) goto loc_822095B4;
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
loc_822095B4:
	// mulli r11,r30,28
	r11.s64 = r30.s64 * 28;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r31,r11,172
	r31.s64 = r11.s64 + 172;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82209604
	if (cr6.eq) goto loc_82209604;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821f1468
	sub_821F1468(ctx, base);
	// lhz r11,2(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82209608
	if (cr6.eq) goto loc_82209608;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82209604:
	// bl 0x821f0e20
	sub_821F0E20(ctx, base);
loc_82209608:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82209208
	sub_82209208(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82209618"))) PPC_WEAK_FUNC(sub_82209618);
PPC_FUNC_IMPL(__imp__sub_82209618) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r31,52
	r29.s64 = r31.s64 + 52;
	// addi r28,r31,172
	r28.s64 = r31.s64 + 172;
	// addi r26,r11,15600
	r26.s64 = r11.s64 + 15600;
loc_8220964C:
	// lbz r11,12(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82209670
	if (cr0.eq) goto loc_82209670;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821f1f38
	sub_821F1F38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82209208
	sub_82209208(ctx, base);
	// b 0x82209698
	goto loc_82209698;
loc_82209670:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82209698
	if (!cr0.eq) goto loc_82209698;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82209510
	sub_82209510(ctx, base);
loc_82209698:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,28
	r28.s64 = r28.s64 + 28;
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
	// cmpwi cr6,r30,6
	cr6.compare<int32_t>(r30.s32, 6, xer);
	// blt cr6,0x8220964c
	if (cr6.lt) goto loc_8220964C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822096B4"))) PPC_WEAK_FUNC(sub_822096B4);
PPC_FUNC_IMPL(__imp__sub_822096B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822096B8"))) PPC_WEAK_FUNC(sub_822096B8);
PPC_FUNC_IMPL(__imp__sub_822096B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	// lwz r16,25416(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 25416);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-384
	r31.s64 = ctx.r1.s64 + -384;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,12952(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12952);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12948
	r29.s64 = ctx.r10.s64 + 12948;
	// bne 0x82209720
	if (!cr0.eq) goto loc_82209720;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12952(r30)
	PPC_STORE_U32(r30.u32 + 12952, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25260
	ctx.r4.s64 = r11.s64 + 25260;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12952(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12952);
loc_82209720:
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
	// beq 0x822097bc
	if (cr0.eq) goto loc_822097BC;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x82209774
	if (!cr6.eq) goto loc_82209774;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r5,r31,144
	ctx.r5.s64 = r31.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82209510
	sub_82209510(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
loc_8220976C:
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// b 0x822097b4
	goto loc_822097B4;
loc_82209774:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,68(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 68);
	// addi r11,r11,-2060
	r11.s64 = r11.s64 + -2060;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82276d50
	sub_82276D50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82317a20
	sub_82317A20(ctx, base);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822097b4
	if (cr0.eq) goto loc_822097B4;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
loc_822097B0:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822097B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82209b68
	goto loc_82209B68;
loc_822097BC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12944
	r29.s64 = ctx.r10.s64 + 12944;
	// bne 0x822097e8
	if (!cr0.eq) goto loc_822097E8;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,12952(r30)
	PPC_STORE_U32(r30.u32 + 12952, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25252
	ctx.r4.s64 = r11.s64 + 25252;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12952(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12952);
loc_822097E8:
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
	// beq 0x82209878
	if (cr0.eq) goto loc_82209878;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x82209838
	if (!cr6.eq) goto loc_82209838;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r5,r31,208
	ctx.r5.s64 = r31.s64 + 208;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82209510
	sub_82209510(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// b 0x8220976c
	goto loc_8220976C;
loc_82209838:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,88(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 88);
	// addi r11,r11,-2060
	r11.s64 = r11.s64 + -2060;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82276d50
	sub_82276D50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82317a20
	sub_82317A20(ctx, base);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822097b4
	if (cr0.eq) goto loc_822097B4;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x822097b0
	goto loc_822097B0;
loc_82209878:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12940
	r29.s64 = ctx.r10.s64 + 12940;
	// bne 0x822098a4
	if (!cr0.eq) goto loc_822098A4;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,12952(r30)
	PPC_STORE_U32(r30.u32 + 12952, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25248
	ctx.r4.s64 = r11.s64 + 25248;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12952(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12952);
loc_822098A4:
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
	// beq 0x82209934
	if (cr0.eq) goto loc_82209934;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x822098f4
	if (!cr6.eq) goto loc_822098F4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r5,r31,272
	ctx.r5.s64 = r31.s64 + 272;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82209510
	sub_82209510(ctx, base);
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// b 0x8220976c
	goto loc_8220976C;
loc_822098F4:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,108(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 108);
	// addi r11,r11,-2060
	r11.s64 = r11.s64 + -2060;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82276d50
	sub_82276D50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82317a20
	sub_82317A20(ctx, base);
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822097b4
	if (cr0.eq) goto loc_822097B4;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x822097b0
	goto loc_822097B0;
loc_82209934:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12936
	r29.s64 = ctx.r10.s64 + 12936;
	// bne 0x82209960
	if (!cr0.eq) goto loc_82209960;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,12952(r30)
	PPC_STORE_U32(r30.u32 + 12952, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25240
	ctx.r4.s64 = r11.s64 + 25240;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12952(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12952);
loc_82209960:
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
	// beq 0x822099f0
	if (cr0.eq) goto loc_822099F0;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x822099b0
	if (!cr6.eq) goto loc_822099B0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r5,r31,176
	ctx.r5.s64 = r31.s64 + 176;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82209510
	sub_82209510(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// b 0x8220976c
	goto loc_8220976C;
loc_822099B0:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,128(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 128);
	// addi r11,r11,-2060
	r11.s64 = r11.s64 + -2060;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82276d50
	sub_82276D50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82317a20
	sub_82317A20(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822097b4
	if (cr0.eq) goto loc_822097B4;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x822097b0
	goto loc_822097B0;
loc_822099F0:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12932
	r29.s64 = ctx.r10.s64 + 12932;
	// bne 0x82209a1c
	if (!cr0.eq) goto loc_82209A1C;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,12952(r30)
	PPC_STORE_U32(r30.u32 + 12952, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25232
	ctx.r4.s64 = r11.s64 + 25232;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12952(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12952);
loc_82209A1C:
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
	// beq 0x82209aac
	if (cr0.eq) goto loc_82209AAC;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x82209a6c
	if (!cr6.eq) goto loc_82209A6C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r5,r31,240
	ctx.r5.s64 = r31.s64 + 240;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82209510
	sub_82209510(ctx, base);
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// b 0x8220976c
	goto loc_8220976C;
loc_82209A6C:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,148(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 148);
	// addi r11,r11,-2060
	r11.s64 = r11.s64 + -2060;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82276d50
	sub_82276D50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82317a20
	sub_82317A20(ctx, base);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822097b4
	if (cr0.eq) goto loc_822097B4;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x822097b0
	goto loc_822097B0;
loc_82209AAC:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12928
	r29.s64 = ctx.r10.s64 + 12928;
	// bne 0x82209ad4
	if (!cr0.eq) goto loc_82209AD4;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,12952(r30)
	PPC_STORE_U32(r30.u32 + 12952, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25224
	ctx.r4.s64 = r11.s64 + 25224;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82209AD4:
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
	// beq 0x82209b64
	if (cr0.eq) goto loc_82209B64;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x82209b24
	if (!cr6.eq) goto loc_82209B24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,304
	ctx.r3.s64 = r31.s64 + 304;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r5,r31,304
	ctx.r5.s64 = r31.s64 + 304;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82209510
	sub_82209510(ctx, base);
	// addi r3,r31,304
	ctx.r3.s64 = r31.s64 + 304;
	// b 0x8220976c
	goto loc_8220976C;
loc_82209B24:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,168(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 168);
	// addi r11,r11,-2060
	r11.s64 = r11.s64 + -2060;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82276d50
	sub_82276D50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82317a20
	sub_82317A20(ctx, base);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822097b4
	if (cr0.eq) goto loc_822097B4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// b 0x822097b0
	goto loc_822097B0;
loc_82209B64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82209B68:
	// addi r1,r31,384
	ctx.r1.s64 = r31.s64 + 384;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822096C0"))) PPC_WEAK_FUNC(sub_822096C0);
PPC_FUNC_IMPL(__imp__sub_822096C0) {
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
	// addi r31,r1,-384
	r31.s64 = ctx.r1.s64 + -384;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,12952(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12952);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12948
	r29.s64 = ctx.r10.s64 + 12948;
	// bne 0x82209720
	if (!cr0.eq) goto loc_82209720;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12952(r30)
	PPC_STORE_U32(r30.u32 + 12952, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25260
	ctx.r4.s64 = r11.s64 + 25260;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12952(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12952);
loc_82209720:
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
	// beq 0x822097bc
	if (cr0.eq) goto loc_822097BC;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x82209774
	if (!cr6.eq) goto loc_82209774;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r5,r31,144
	ctx.r5.s64 = r31.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82209510
	sub_82209510(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
loc_8220976C:
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// b 0x822097b4
	goto loc_822097B4;
loc_82209774:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,68(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 68);
	// addi r11,r11,-2060
	r11.s64 = r11.s64 + -2060;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82276d50
	sub_82276D50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82317a20
	sub_82317A20(ctx, base);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822097b4
	if (cr0.eq) goto loc_822097B4;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
loc_822097B0:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822097B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82209b68
	goto loc_82209B68;
loc_822097BC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12944
	r29.s64 = ctx.r10.s64 + 12944;
	// bne 0x822097e8
	if (!cr0.eq) goto loc_822097E8;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,12952(r30)
	PPC_STORE_U32(r30.u32 + 12952, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25252
	ctx.r4.s64 = r11.s64 + 25252;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12952(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12952);
loc_822097E8:
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
	// beq 0x82209878
	if (cr0.eq) goto loc_82209878;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x82209838
	if (!cr6.eq) goto loc_82209838;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r5,r31,208
	ctx.r5.s64 = r31.s64 + 208;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82209510
	sub_82209510(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// b 0x8220976c
	goto loc_8220976C;
loc_82209838:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,88(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 88);
	// addi r11,r11,-2060
	r11.s64 = r11.s64 + -2060;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82276d50
	sub_82276D50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82317a20
	sub_82317A20(ctx, base);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822097b4
	if (cr0.eq) goto loc_822097B4;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x822097b0
	goto loc_822097B0;
loc_82209878:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12940
	r29.s64 = ctx.r10.s64 + 12940;
	// bne 0x822098a4
	if (!cr0.eq) goto loc_822098A4;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,12952(r30)
	PPC_STORE_U32(r30.u32 + 12952, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25248
	ctx.r4.s64 = r11.s64 + 25248;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12952(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12952);
loc_822098A4:
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
	// beq 0x82209934
	if (cr0.eq) goto loc_82209934;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x822098f4
	if (!cr6.eq) goto loc_822098F4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r5,r31,272
	ctx.r5.s64 = r31.s64 + 272;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82209510
	sub_82209510(ctx, base);
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// b 0x8220976c
	goto loc_8220976C;
loc_822098F4:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,108(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 108);
	// addi r11,r11,-2060
	r11.s64 = r11.s64 + -2060;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82276d50
	sub_82276D50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82317a20
	sub_82317A20(ctx, base);
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822097b4
	if (cr0.eq) goto loc_822097B4;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x822097b0
	goto loc_822097B0;
loc_82209934:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12936
	r29.s64 = ctx.r10.s64 + 12936;
	// bne 0x82209960
	if (!cr0.eq) goto loc_82209960;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,12952(r30)
	PPC_STORE_U32(r30.u32 + 12952, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25240
	ctx.r4.s64 = r11.s64 + 25240;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12952(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12952);
loc_82209960:
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
	// beq 0x822099f0
	if (cr0.eq) goto loc_822099F0;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x822099b0
	if (!cr6.eq) goto loc_822099B0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r5,r31,176
	ctx.r5.s64 = r31.s64 + 176;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82209510
	sub_82209510(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// b 0x8220976c
	goto loc_8220976C;
loc_822099B0:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,128(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 128);
	// addi r11,r11,-2060
	r11.s64 = r11.s64 + -2060;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82276d50
	sub_82276D50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82317a20
	sub_82317A20(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822097b4
	if (cr0.eq) goto loc_822097B4;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x822097b0
	goto loc_822097B0;
loc_822099F0:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12932
	r29.s64 = ctx.r10.s64 + 12932;
	// bne 0x82209a1c
	if (!cr0.eq) goto loc_82209A1C;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,12952(r30)
	PPC_STORE_U32(r30.u32 + 12952, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25232
	ctx.r4.s64 = r11.s64 + 25232;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12952(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12952);
loc_82209A1C:
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
	// beq 0x82209aac
	if (cr0.eq) goto loc_82209AAC;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x82209a6c
	if (!cr6.eq) goto loc_82209A6C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r5,r31,240
	ctx.r5.s64 = r31.s64 + 240;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82209510
	sub_82209510(ctx, base);
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// b 0x8220976c
	goto loc_8220976C;
loc_82209A6C:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,148(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 148);
	// addi r11,r11,-2060
	r11.s64 = r11.s64 + -2060;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82276d50
	sub_82276D50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82317a20
	sub_82317A20(ctx, base);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822097b4
	if (cr0.eq) goto loc_822097B4;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x822097b0
	goto loc_822097B0;
loc_82209AAC:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12928
	r29.s64 = ctx.r10.s64 + 12928;
	// bne 0x82209ad4
	if (!cr0.eq) goto loc_82209AD4;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,12952(r30)
	PPC_STORE_U32(r30.u32 + 12952, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25224
	ctx.r4.s64 = r11.s64 + 25224;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82209AD4:
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
	// beq 0x82209b64
	if (cr0.eq) goto loc_82209B64;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x82209b24
	if (!cr6.eq) goto loc_82209B24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,304
	ctx.r3.s64 = r31.s64 + 304;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r5,r31,304
	ctx.r5.s64 = r31.s64 + 304;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82209510
	sub_82209510(ctx, base);
	// addi r3,r31,304
	ctx.r3.s64 = r31.s64 + 304;
	// b 0x8220976c
	goto loc_8220976C;
loc_82209B24:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,168(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 168);
	// addi r11,r11,-2060
	r11.s64 = r11.s64 + -2060;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82276d50
	sub_82276D50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82317a20
	sub_82317A20(ctx, base);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822097b4
	if (cr0.eq) goto loc_822097B4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// b 0x822097b0
	goto loc_822097B0;
loc_82209B64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82209B68:
	// addi r1,r31,384
	ctx.r1.s64 = r31.s64 + 384;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82209B70"))) PPC_WEAK_FUNC(sub_82209B70);
PPC_FUNC_IMPL(__imp__sub_82209B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12952
	r11.s64 = r11.s64 + 12952;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12952
	ctx.r10.s64 = ctx.r10.s64 + 12952;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209B98"))) PPC_WEAK_FUNC(sub_82209B98);
PPC_FUNC_IMPL(__imp__sub_82209B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
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

__attribute__((alias("__imp__sub_82209BC0"))) PPC_WEAK_FUNC(sub_82209BC0);
PPC_FUNC_IMPL(__imp__sub_82209BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
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

__attribute__((alias("__imp__sub_82209BE8"))) PPC_WEAK_FUNC(sub_82209BE8);
PPC_FUNC_IMPL(__imp__sub_82209BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12952
	r11.s64 = r11.s64 + 12952;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12952
	ctx.r10.s64 = ctx.r10.s64 + 12952;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209C10"))) PPC_WEAK_FUNC(sub_82209C10);
PPC_FUNC_IMPL(__imp__sub_82209C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
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

__attribute__((alias("__imp__sub_82209C38"))) PPC_WEAK_FUNC(sub_82209C38);
PPC_FUNC_IMPL(__imp__sub_82209C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
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

__attribute__((alias("__imp__sub_82209C60"))) PPC_WEAK_FUNC(sub_82209C60);
PPC_FUNC_IMPL(__imp__sub_82209C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12952
	r11.s64 = r11.s64 + 12952;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12952
	ctx.r10.s64 = ctx.r10.s64 + 12952;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209C88"))) PPC_WEAK_FUNC(sub_82209C88);
PPC_FUNC_IMPL(__imp__sub_82209C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
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

__attribute__((alias("__imp__sub_82209CB0"))) PPC_WEAK_FUNC(sub_82209CB0);
PPC_FUNC_IMPL(__imp__sub_82209CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
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

__attribute__((alias("__imp__sub_82209CD8"))) PPC_WEAK_FUNC(sub_82209CD8);
PPC_FUNC_IMPL(__imp__sub_82209CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12952
	r11.s64 = r11.s64 + 12952;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12952
	ctx.r10.s64 = ctx.r10.s64 + 12952;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209D00"))) PPC_WEAK_FUNC(sub_82209D00);
PPC_FUNC_IMPL(__imp__sub_82209D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
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

__attribute__((alias("__imp__sub_82209D28"))) PPC_WEAK_FUNC(sub_82209D28);
PPC_FUNC_IMPL(__imp__sub_82209D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
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

__attribute__((alias("__imp__sub_82209D50"))) PPC_WEAK_FUNC(sub_82209D50);
PPC_FUNC_IMPL(__imp__sub_82209D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12952
	r11.s64 = r11.s64 + 12952;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12952
	ctx.r10.s64 = ctx.r10.s64 + 12952;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209D78"))) PPC_WEAK_FUNC(sub_82209D78);
PPC_FUNC_IMPL(__imp__sub_82209D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
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

__attribute__((alias("__imp__sub_82209DA0"))) PPC_WEAK_FUNC(sub_82209DA0);
PPC_FUNC_IMPL(__imp__sub_82209DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
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

__attribute__((alias("__imp__sub_82209DC8"))) PPC_WEAK_FUNC(sub_82209DC8);
PPC_FUNC_IMPL(__imp__sub_82209DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12952
	r11.s64 = r11.s64 + 12952;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12952
	ctx.r10.s64 = ctx.r10.s64 + 12952;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209DF0"))) PPC_WEAK_FUNC(sub_82209DF0);
PPC_FUNC_IMPL(__imp__sub_82209DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,304
	ctx.r3.s64 = r31.s64 + 304;
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

__attribute__((alias("__imp__sub_82209E18"))) PPC_WEAK_FUNC(sub_82209E18);
PPC_FUNC_IMPL(__imp__sub_82209E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-384
	r31.s64 = r12.s64 + -384;
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

__attribute__((alias("__imp__sub_82209E40"))) PPC_WEAK_FUNC(sub_82209E40);
PPC_FUNC_IMPL(__imp__sub_82209E40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82209e74
	if (!cr6.eq) goto loc_82209E74;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82209e74
	if (!cr6.eq) goto loc_82209E74;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x82209e78
	if (cr6.eq) goto loc_82209E78;
loc_82209E74:
	// li r11,0
	r11.s64 = 0;
loc_82209E78:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82209f04
	if (cr0.eq) goto loc_82209F04;
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82209eb4
	if (!cr6.eq) goto loc_82209EB4;
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82209eb4
	if (!cr6.eq) goto loc_82209EB4;
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x82209eb8
	if (cr6.eq) goto loc_82209EB8;
loc_82209EB4:
	// li r11,0
	r11.s64 = 0;
loc_82209EB8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82209f04
	if (cr0.eq) goto loc_82209F04;
	// lfs f0,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82209ef4
	if (!cr6.eq) goto loc_82209EF4;
	// lfs f0,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	f0.f64 = double(temp.f32);
	// lfs f13,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82209ef4
	if (!cr6.eq) goto loc_82209EF4;
	// lfs f0,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x82209ef8
	if (cr6.eq) goto loc_82209EF8;
loc_82209EF4:
	// li r11,0
	r11.s64 = 0;
loc_82209EF8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x82209f08
	if (!cr0.eq) goto loc_82209F08;
loc_82209F04:
	// li r11,0
	r11.s64 = 0;
loc_82209F08:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209F10"))) PPC_WEAK_FUNC(sub_82209F10);
PPC_FUNC_IMPL(__imp__sub_82209F10) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82209e40
	sub_82209E40(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82209f7c
	if (cr0.eq) goto loc_82209F7C;
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 48);
	f0.f64 = double(temp.f32);
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82209f6c
	if (!cr6.eq) goto loc_82209F6C;
	// lfs f0,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	f0.f64 = double(temp.f32);
	// lfs f13,52(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82209f6c
	if (!cr6.eq) goto loc_82209F6C;
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,56(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x82209f70
	if (cr6.eq) goto loc_82209F70;
loc_82209F6C:
	// li r11,0
	r11.s64 = 0;
loc_82209F70:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x82209f80
	if (!cr0.eq) goto loc_82209F80;
loc_82209F7C:
	// li r11,0
	r11.s64 = 0;
loc_82209F80:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82209F9C"))) PPC_WEAK_FUNC(sub_82209F9C);
PPC_FUNC_IMPL(__imp__sub_82209F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82209FA0"))) PPC_WEAK_FUNC(sub_82209FA0);
PPC_FUNC_IMPL(__imp__sub_82209FA0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-48
	ctx.r3.s64 = r30.s64 + -48;
	// bl 0x821b3420
	sub_821B3420(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82209FF8"))) PPC_WEAK_FUNC(sub_82209FF8);
PPC_FUNC_IMPL(__imp__sub_82209FF8) {
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
	// beq 0x8220a038
	if (cr0.eq) goto loc_8220A038;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,14140
	ctx.r3.s64 = r11.s64 + 14140;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8220a040
	goto loc_8220A040;
loc_8220A038:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_8220A040:
	// mulli r3,r31,72
	ctx.r3.s64 = r31.s64 * 72;
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

__attribute__((alias("__imp__sub_8220A05C"))) PPC_WEAK_FUNC(sub_8220A05C);
PPC_FUNC_IMPL(__imp__sub_8220A05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220A060"))) PPC_WEAK_FUNC(sub_8220A060);
PPC_FUNC_IMPL(__imp__sub_8220A060) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,68(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r29.u32 + 68, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8220A0A4"))) PPC_WEAK_FUNC(sub_8220A0A4);
PPC_FUNC_IMPL(__imp__sub_8220A0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220A0A8"))) PPC_WEAK_FUNC(sub_8220A0A8);
PPC_FUNC_IMPL(__imp__sub_8220A0A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82209ff8
	sub_82209FF8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addic. r3,r31,8
	xer.ca = r31.u32 > 4294967287;
	ctx.r3.s64 = r31.s64 + 8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8220a0e4
	if (cr0.eq) goto loc_8220A0E4;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_8220A0E4:
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

__attribute__((alias("__imp__sub_8220A100"))) PPC_WEAK_FUNC(sub_8220A100);
PPC_FUNC_IMPL(__imp__sub_8220A100) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// lwz r11,14136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14136);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lwz r11,-84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -84);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-84
	ctx.r3.s64 = r11.s64 + -84;
	// bl 0x82314ff8
	sub_82314FF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-48
	ctx.r3.s64 = r31.s64 + -48;
	// bl 0x821b2a18
	sub_821B2A18(ctx, base);
	// lwz r11,-28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -28);
	// addi r4,r31,-52
	ctx.r4.s64 = r31.s64 + -52;
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82359440
	sub_82359440(ctx, base);
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
	// li r5,4
	ctx.r5.s64 = 4;
	// lfs f0,-20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -20);
	f0.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359440
	sub_82359440(ctx, base);
	// addi r4,r31,-40
	ctx.r4.s64 = r31.s64 + -40;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f6000
	sub_821F6000(ctx, base);
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

__attribute__((alias("__imp__sub_8220A1D4"))) PPC_WEAK_FUNC(sub_8220A1D4);
PPC_FUNC_IMPL(__imp__sub_8220A1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220A1D8"))) PPC_WEAK_FUNC(sub_8220A1D8);
PPC_FUNC_IMPL(__imp__sub_8220A1D8) {
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
	// bl 0x8220a0a8
	sub_8220A0A8(ctx, base);
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

__attribute__((alias("__imp__sub_8220A23C"))) PPC_WEAK_FUNC(sub_8220A23C);
PPC_FUNC_IMPL(__imp__sub_8220A23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220A240"))) PPC_WEAK_FUNC(sub_8220A240);
PPC_FUNC_IMPL(__imp__sub_8220A240) {
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
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,72
	ctx.r3.s64 = 72;
	// lwz r31,0(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x82355020
	sub_82355020(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
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

__attribute__((alias("__imp__sub_8220A294"))) PPC_WEAK_FUNC(sub_8220A294);
PPC_FUNC_IMPL(__imp__sub_8220A294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220A298"))) PPC_WEAK_FUNC(sub_8220A298);
PPC_FUNC_IMPL(__imp__sub_8220A298) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8220a2c8
	goto loc_8220A2C8;
loc_8220A2B8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8220A2C8:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x8220a2b8
	if (!cr6.eq) goto loc_8220A2B8;
	// stw r30,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r30.u32);
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

__attribute__((alias("__imp__sub_8220A2F0"))) PPC_WEAK_FUNC(sub_8220A2F0);
PPC_FUNC_IMPL(__imp__sub_8220A2F0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,-84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-84
	ctx.r3.s64 = r11.s64 + -84;
	// bl 0x82315258
	sub_82315258(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-48
	ctx.r3.s64 = r31.s64 + -48;
	// bl 0x821b2938
	sub_821B2938(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,12864
	ctx.r6.s64 = r11.s64 + 12864;
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
	// beq 0x8220a38c
	if (cr0.eq) goto loc_8220A38C;
	// addi r3,r31,-52
	ctx.r3.s64 = r31.s64 + -52;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82126cc8
	sub_82126CC8(ctx, base);
	// addi r3,r31,-40
	ctx.r3.s64 = r31.s64 + -40;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x8212dc78
	sub_8212DC78(ctx, base);
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// addi r3,r31,-16
	ctx.r3.s64 = r31.s64 + -16;
	// stw r11,-28(r31)
	PPC_STORE_U32(r31.u32 + -28, r11.u32);
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// stw r11,-24(r31)
	PPC_STORE_U32(r31.u32 + -24, r11.u32);
	// lfs f0,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 68);
	f0.f64 = double(temp.f32);
	// stfs f0,-20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -20, temp.u32);
	// bl 0x8220a298
	sub_8220A298(ctx, base);
loc_8220A38C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8220A394"))) PPC_WEAK_FUNC(sub_8220A394);
PPC_FUNC_IMPL(__imp__sub_8220A394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220A398"))) PPC_WEAK_FUNC(sub_8220A398);
PPC_FUNC_IMPL(__imp__sub_8220A398) {
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r29,r11,12956
	r29.s64 = r11.s64 + 12956;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,14136(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14136);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8220a46c
	if (cr6.gt) goto loc_8220A46C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x8220a3f8
	if (!cr6.gt) goto loc_8220A3F8;
	// lwz r11,-84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -84);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-84
	ctx.r3.s64 = r11.s64 + -84;
	// bl 0x82315350
	sub_82315350(ctx, base);
loc_8220A3F8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-48
	ctx.r3.s64 = r31.s64 + -48;
	// bl 0x821b36c0
	sub_821B36C0(ctx, base);
	// addi r4,r31,-52
	ctx.r4.s64 = r31.s64 + -52;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82127810
	sub_82127810(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-28
	ctx.r4.s64 = r31.s64 + -28;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-24
	ctx.r4.s64 = r31.s64 + -24;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8220a450
	if (!cr6.gt) goto loc_8220A450;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-20
	ctx.r4.s64 = r31.s64 + -20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_8220A450:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8220a464
	if (!cr6.gt) goto loc_8220A464;
	// addi r4,r31,-40
	ctx.r4.s64 = r31.s64 + -40;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f60b0
	sub_821F60B0(ctx, base);
loc_8220A464:
	// addi r3,r31,-16
	ctx.r3.s64 = r31.s64 + -16;
	// bl 0x8220a298
	sub_8220A298(ctx, base);
loc_8220A46C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8220A474"))) PPC_WEAK_FUNC(sub_8220A474);
PPC_FUNC_IMPL(__imp__sub_8220A474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220A478"))) PPC_WEAK_FUNC(sub_8220A478);
PPC_FUNC_IMPL(__imp__sub_8220A478) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x8220a4a4
	if (cr6.lt) goto loc_8220A4A4;
	// addi r11,r1,124
	r11.s64 = ctx.r1.s64 + 124;
loc_8220A4A4:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r10,72
	ctx.r3.s64 = ctx.r10.s64 + 72;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, r11.u32);
	// bl 0x8220a298
	sub_8220A298(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220A4C4"))) PPC_WEAK_FUNC(sub_8220A4C4);
PPC_FUNC_IMPL(__imp__sub_8220A4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220A4C8"))) PPC_WEAK_FUNC(sub_8220A4C8);
PPC_FUNC_IMPL(__imp__sub_8220A4C8) {
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
	// li r11,1
	r11.s64 = 1;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x8220a4f4
	if (cr6.lt) goto loc_8220A4F4;
	// addi r11,r1,124
	r11.s64 = ctx.r1.s64 + 124;
loc_8220A4F4:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r10,72
	ctx.r3.s64 = ctx.r10.s64 + 72;
	// stw r11,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, r11.u32);
	// bl 0x8220a298
	sub_8220A298(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220A514"))) PPC_WEAK_FUNC(sub_8220A514);
PPC_FUNC_IMPL(__imp__sub_8220A514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220A518"))) PPC_WEAK_FUNC(sub_8220A518);
PPC_FUNC_IMPL(__imp__sub_8220A518) {
	PPC_FUNC_PROLOGUE();
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
	// li r30,0
	r30.s64 = 0;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8220a478
	sub_8220A478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8220A564"))) PPC_WEAK_FUNC(sub_8220A564);
PPC_FUNC_IMPL(__imp__sub_8220A564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220A568"))) PPC_WEAK_FUNC(sub_8220A568);
PPC_FUNC_IMPL(__imp__sub_8220A568) {
	PPC_FUNC_PROLOGUE();
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
	// li r30,0
	r30.s64 = 0;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8220a4c8
	sub_8220A4C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8220A5B4"))) PPC_WEAK_FUNC(sub_8220A5B4);
PPC_FUNC_IMPL(__imp__sub_8220A5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220A5B8"))) PPC_WEAK_FUNC(sub_8220A5B8);
PPC_FUNC_IMPL(__imp__sub_8220A5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
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
	// bl 0x8239bce8
	// addi r12,r1,-72
	r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8239d5e8
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,27088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 27088);
	// lwz r11,204(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8220a870
	if (!cr6.eq) goto loc_8220A870;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8220a5fc
	if (!cr0.eq) goto loc_8220A5FC;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220a870
	if (cr0.eq) goto loc_8220A870;
loc_8220A5FC:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220a60c
	if (cr0.eq) goto loc_8220A60C;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_8220A60C:
	// bl 0x821b2800
	sub_821B2800(ctx, base);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8220a870
	if (cr6.eq) goto loc_8220A870;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// li r28,0
	r28.s64 = 0;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220a644
	if (cr0.eq) goto loc_8220A644;
	// lwz r11,240(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220a870
	if (cr0.eq) goto loc_8220A870;
	// lwz r28,48(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x8220a870
	if (cr0.eq) goto loc_8220A870;
loc_8220A644:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8220a668
	if (cr0.eq) goto loc_8220A668;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8220a870
	if (cr0.eq) goto loc_8220A870;
loc_8220A668:
	// lwz r24,68(r28)
	r24.u64 = PPC_LOAD_U32(r28.u32 + 68);
	// cmpwi r24,0
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// beq 0x8220a688
	if (cr0.eq) goto loc_8220A688;
	// li r11,2
	r11.s64 = 2;
	// stw r11,68(r28)
	PPC_STORE_U32(r28.u32 + 68, r11.u32);
	// lwz r11,260(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 260);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,260(r28)
	PPC_STORE_U32(r28.u32 + 260, r11.u32);
loc_8220A688:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8220a69c
	if (cr0.eq) goto loc_8220A69C;
	// addi r26,r10,36
	r26.s64 = ctx.r10.s64 + 36;
	// b 0x8220a6b0
	goto loc_8220A6B0;
loc_8220A69C:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r26,r11,36
	r26.s64 = r11.s64 + 36;
	// bne 0x8220a6b0
	if (!cr0.eq) goto loc_8220A6B0;
	// li r26,0
	r26.s64 = 0;
loc_8220A6B0:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// bne cr6,0x8220a6c0
	if (!cr6.eq) goto loc_8220A6C0;
	// lwz r25,44(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 44);
loc_8220A6C0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
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
	// lfs f29,60(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 60);
	f29.f64 = double(temp.f32);
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	f0.f64 = double(temp.f32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// fmuls f0,f0,f29
	f0.f64 = double(float(f0.f64 * f29.f64));
	// addi r30,r31,72
	r30.s64 = r31.s64 + 72;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// subf r8,r29,r30
	ctx.r8.s64 = r30.s64 - r29.s64;
	// lwa r11,60(r31)
	r11.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 60));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// extsw r9,r11
	ctx.r9.s64 = r11.s32;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// cntlzw r9,r8
	ctx.r9.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r11,r9,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// fdivs f30,f0,f13
	f30.f64 = double(float(f0.f64 / ctx.f13.f64));
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f30,f13
	ctx.f13.f64 = double(float(f30.f64 / ctx.f13.f64));
	// fnmsubs f31,f13,f12,f0
	f31.f64 = double(float(-(ctx.f13.f64 * ctx.f12.f64 - f0.f64)));
	// beq 0x8220a7d0
	if (cr0.eq) goto loc_8220A7D0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f28,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f28.f64 = double(temp.f32);
loc_8220A76C:
	// addi r27,r29,8
	r27.s64 = r29.s64 + 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82209f10
	sub_82209F10(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8220a7ac
	if (!cr0.eq) goto loc_8220A7AC;
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f28.f64);
	// beq cr6,0x8220a7ac
	if (cr6.eq) goto loc_8220A7AC;
	// lwz r11,260(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 260);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stfs f31,60(r28)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r28.u32 + 60, temp.u32);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,260(r28)
	PPC_STORE_U32(r28.u32 + 260, r11.u32);
	// bl 0x821af870
	sub_821AF870(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821b2800
	sub_821B2800(ctx, base);
loc_8220A7AC:
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// fsubs f31,f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 - f30.f64));
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
	// bne 0x8220a76c
	if (!cr0.eq) goto loc_8220A76C;
loc_8220A7D0:
	// lwz r11,260(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 260);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stfs f29,60(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r28.u32 + 60, temp.u32);
	// ori r11,r11,3
	r11.u64 = r11.u64 | 3;
	// stw r24,68(r28)
	PPC_STORE_U32(r28.u32 + 68, r24.u32);
	// stw r11,260(r28)
	PPC_STORE_U32(r28.u32 + 260, r11.u32);
	// bl 0x821af870
	sub_821AF870(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8220a870
	if (!cr6.eq) goto loc_8220A870;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8220a810
	goto loc_8220A810;
loc_8220A808:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8220A810:
	// subf r9,r11,r30
	ctx.r9.s64 = r30.s64 - r11.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x8220a808
	if (!cr0.eq) goto loc_8220A808;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8220a84c
	if (!cr6.eq) goto loc_8220A84C;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x8220a240
	sub_8220A240(ctx, base);
loc_8220A84C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x8220a1d8
	sub_8220A1D8(ctx, base);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8220A870:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-72
	r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8239d634
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8220A880"))) PPC_WEAK_FUNC(sub_8220A880);
PPC_FUNC_IMPL(__imp__sub_8220A880) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220a8c0
	if (cr0.eq) goto loc_8220A8C0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82152a80
	sub_82152A80(ctx, base);
loc_8220A8C0:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220a8e8
	if (cr0.eq) goto loc_8220A8E8;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82152a80
	sub_82152A80(ctx, base);
loc_8220A8E8:
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

__attribute__((alias("__imp__sub_8220A900"))) PPC_WEAK_FUNC(sub_8220A900);
PPC_FUNC_IMPL(__imp__sub_8220A900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	// lwz r16,25856(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 25856);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,12972(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12972);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12968
	r29.s64 = ctx.r10.s64 + 12968;
	// bne 0x8220a970
	if (!cr0.eq) goto loc_8220A970;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12972(r30)
	PPC_STORE_U32(r30.u32 + 12972, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25776
	ctx.r4.s64 = r11.s64 + 25776;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12972(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12972);
loc_8220A970:
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
	// beq 0x8220a9cc
	if (cr0.eq) goto loc_8220A9CC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8220a518
	sub_8220A518(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8220a9c8
	if (cr6.eq) goto loc_8220A9C8;
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
	// beq 0x8220ab64
	if (cr0.eq) goto loc_8220AB64;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_8220A9C0:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8220ab64
	goto loc_8220AB64;
loc_8220A9C8:
	// lwz r11,12972(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12972);
loc_8220A9CC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12964
	r29.s64 = ctx.r10.s64 + 12964;
	// bne 0x8220a9f8
	if (!cr0.eq) goto loc_8220A9F8;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,12972(r30)
	PPC_STORE_U32(r30.u32 + 12972, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25764
	ctx.r4.s64 = r11.s64 + 25764;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12972(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12972);
loc_8220A9F8:
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
	// beq 0x8220aa50
	if (cr0.eq) goto loc_8220AA50;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8220a568
	sub_8220A568(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8220aa4c
	if (cr6.eq) goto loc_8220AA4C;
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
	// beq 0x8220ab64
	if (cr0.eq) goto loc_8220AB64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x8220a9c0
	goto loc_8220A9C0;
loc_8220AA4C:
	// lwz r11,12972(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12972);
loc_8220AA50:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12960
	r29.s64 = ctx.r10.s64 + 12960;
	// bne 0x8220aa78
	if (!cr0.eq) goto loc_8220AA78;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,12972(r30)
	PPC_STORE_U32(r30.u32 + 12972, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25752
	ctx.r4.s64 = r11.s64 + 25752;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8220AA78:
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
	// beq 0x8220aacc
	if (cr0.eq) goto loc_8220AACC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8220a060
	sub_8220A060(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8220aacc
	if (cr6.eq) goto loc_8220AACC;
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
	// beq 0x8220ab64
	if (cr0.eq) goto loc_8220AB64;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x8220a9c0
	goto loc_8220A9C0;
loc_8220AACC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-48
	ctx.r4.s64 = r27.s64 + -48;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x821b3888
	sub_821B3888(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8220ab0c
	if (cr6.eq) goto loc_8220AB0C;
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
	// beq 0x8220ab64
	if (cr0.eq) goto loc_8220AB64;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x8220a9c0
	goto loc_8220A9C0;
loc_8220AB0C:
	// lwz r11,-84(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -84);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r4,r11,-84
	ctx.r4.s64 = r11.s64 + -84;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8220ab58
	if (cr6.eq) goto loc_8220AB58;
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
	// beq 0x8220ab64
	if (cr0.eq) goto loc_8220AB64;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x8220a9c0
	goto loc_8220A9C0;
loc_8220AB58:
	// li r11,6
	r11.s64 = 6;
	// stw r25,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r25.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
loc_8220AB64:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8220A908"))) PPC_WEAK_FUNC(sub_8220A908);
PPC_FUNC_IMPL(__imp__sub_8220A908) {
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
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,12972(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12972);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12968
	r29.s64 = ctx.r10.s64 + 12968;
	// bne 0x8220a970
	if (!cr0.eq) goto loc_8220A970;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12972(r30)
	PPC_STORE_U32(r30.u32 + 12972, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25776
	ctx.r4.s64 = r11.s64 + 25776;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12972(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12972);
loc_8220A970:
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
	// beq 0x8220a9cc
	if (cr0.eq) goto loc_8220A9CC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8220a518
	sub_8220A518(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8220a9c8
	if (cr6.eq) goto loc_8220A9C8;
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
	// beq 0x8220ab64
	if (cr0.eq) goto loc_8220AB64;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_8220A9C0:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8220ab64
	goto loc_8220AB64;
loc_8220A9C8:
	// lwz r11,12972(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12972);
loc_8220A9CC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12964
	r29.s64 = ctx.r10.s64 + 12964;
	// bne 0x8220a9f8
	if (!cr0.eq) goto loc_8220A9F8;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,12972(r30)
	PPC_STORE_U32(r30.u32 + 12972, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25764
	ctx.r4.s64 = r11.s64 + 25764;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,12972(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12972);
loc_8220A9F8:
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
	// beq 0x8220aa50
	if (cr0.eq) goto loc_8220AA50;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8220a568
	sub_8220A568(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8220aa4c
	if (cr6.eq) goto loc_8220AA4C;
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
	// beq 0x8220ab64
	if (cr0.eq) goto loc_8220AB64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x8220a9c0
	goto loc_8220A9C0;
loc_8220AA4C:
	// lwz r11,12972(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12972);
loc_8220AA50:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12960
	r29.s64 = ctx.r10.s64 + 12960;
	// bne 0x8220aa78
	if (!cr0.eq) goto loc_8220AA78;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,12972(r30)
	PPC_STORE_U32(r30.u32 + 12972, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25752
	ctx.r4.s64 = r11.s64 + 25752;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8220AA78:
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
	// beq 0x8220aacc
	if (cr0.eq) goto loc_8220AACC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-88
	ctx.r4.s64 = r27.s64 + -88;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8220a060
	sub_8220A060(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8220aacc
	if (cr6.eq) goto loc_8220AACC;
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
	// beq 0x8220ab64
	if (cr0.eq) goto loc_8220AB64;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x8220a9c0
	goto loc_8220A9C0;
loc_8220AACC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-48
	ctx.r4.s64 = r27.s64 + -48;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x821b3888
	sub_821B3888(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8220ab0c
	if (cr6.eq) goto loc_8220AB0C;
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
	// beq 0x8220ab64
	if (cr0.eq) goto loc_8220AB64;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x8220a9c0
	goto loc_8220A9C0;
loc_8220AB0C:
	// lwz r11,-84(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -84);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r4,r11,-84
	ctx.r4.s64 = r11.s64 + -84;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8220ab58
	if (cr6.eq) goto loc_8220AB58;
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
	// beq 0x8220ab64
	if (cr0.eq) goto loc_8220AB64;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x8220a9c0
	goto loc_8220A9C0;
loc_8220AB58:
	// li r11,6
	r11.s64 = 6;
	// stw r25,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r25.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
loc_8220AB64:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8220AB70"))) PPC_WEAK_FUNC(sub_8220AB70);
PPC_FUNC_IMPL(__imp__sub_8220AB70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12972
	r11.s64 = r11.s64 + 12972;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12972
	ctx.r10.s64 = ctx.r10.s64 + 12972;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220AB98"))) PPC_WEAK_FUNC(sub_8220AB98);
PPC_FUNC_IMPL(__imp__sub_8220AB98) {
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

__attribute__((alias("__imp__sub_8220ABC0"))) PPC_WEAK_FUNC(sub_8220ABC0);
PPC_FUNC_IMPL(__imp__sub_8220ABC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12972
	r11.s64 = r11.s64 + 12972;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12972
	ctx.r10.s64 = ctx.r10.s64 + 12972;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220ABE8"))) PPC_WEAK_FUNC(sub_8220ABE8);
PPC_FUNC_IMPL(__imp__sub_8220ABE8) {
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

__attribute__((alias("__imp__sub_8220AC10"))) PPC_WEAK_FUNC(sub_8220AC10);
PPC_FUNC_IMPL(__imp__sub_8220AC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12972
	r11.s64 = r11.s64 + 12972;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12972
	ctx.r10.s64 = ctx.r10.s64 + 12972;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220AC38"))) PPC_WEAK_FUNC(sub_8220AC38);
PPC_FUNC_IMPL(__imp__sub_8220AC38) {
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

__attribute__((alias("__imp__sub_8220AC60"))) PPC_WEAK_FUNC(sub_8220AC60);
PPC_FUNC_IMPL(__imp__sub_8220AC60) {
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

__attribute__((alias("__imp__sub_8220AC88"))) PPC_WEAK_FUNC(sub_8220AC88);
PPC_FUNC_IMPL(__imp__sub_8220AC88) {
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

__attribute__((alias("__imp__sub_8220ACB0"))) PPC_WEAK_FUNC(sub_8220ACB0);
PPC_FUNC_IMPL(__imp__sub_8220ACB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	// lwz r16,26200(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 26200);
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
	// beq cr6,0x8220ad30
	if (cr6.eq) goto loc_8220AD30;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,26152
	r11.s64 = r11.s64 + 26152;
	// addi r10,r10,26144
	ctx.r10.s64 = ctx.r10.s64 + 26144;
	// addi r3,r30,88
	ctx.r3.s64 = r30.s64 + 88;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,136(r30)
	PPC_STORE_U32(r30.u32 + 136, ctx.r10.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,132
	r11.s64 = r30.s64 + 132;
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
loc_8220AD30:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b2dd0
	sub_821B2DD0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,26108
	r11.s64 = r11.s64 + 26108;
	// addi r10,r10,26044
	ctx.r10.s64 = ctx.r10.s64 + 26044;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,26036
	ctx.r9.s64 = ctx.r9.s64 + 26036;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-84
	ctx.r10.s64 = r11.s64 + -84;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-128
	ctx.r10.s64 = r11.s64 + -128;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// stw r29,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r29.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,8892
	r11.s64 = r11.s64 + 8892;
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r9,14812
	ctx.r9.s64 = ctx.r9.s64 + 14812;
	// std r29,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r29.u64);
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// ld r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// addi r11,r30,72
	r11.s64 = r30.s64 + 72;
	// stw r9,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r9.u32);
	// stfs f0,68(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 68, temp.u32);
	// stw r8,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r8.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8220ACB8"))) PPC_WEAK_FUNC(sub_8220ACB8);
PPC_FUNC_IMPL(__imp__sub_8220ACB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// beq cr6,0x8220ad30
	if (cr6.eq) goto loc_8220AD30;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,26152
	r11.s64 = r11.s64 + 26152;
	// addi r10,r10,26144
	ctx.r10.s64 = ctx.r10.s64 + 26144;
	// addi r3,r30,88
	ctx.r3.s64 = r30.s64 + 88;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,136(r30)
	PPC_STORE_U32(r30.u32 + 136, ctx.r10.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,132
	r11.s64 = r30.s64 + 132;
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
loc_8220AD30:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b2dd0
	sub_821B2DD0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,26108
	r11.s64 = r11.s64 + 26108;
	// addi r10,r10,26044
	ctx.r10.s64 = ctx.r10.s64 + 26044;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,26036
	ctx.r9.s64 = ctx.r9.s64 + 26036;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-84
	ctx.r10.s64 = r11.s64 + -84;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-128
	ctx.r10.s64 = r11.s64 + -128;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// stw r29,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r29.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,8892
	r11.s64 = r11.s64 + 8892;
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r9,14812
	ctx.r9.s64 = ctx.r9.s64 + 14812;
	// std r29,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r29.u64);
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// ld r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// addi r11,r30,72
	r11.s64 = r30.s64 + 72;
	// stw r9,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r9.u32);
	// stfs f0,68(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 68, temp.u32);
	// stw r8,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r8.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8220AE28"))) PPC_WEAK_FUNC(sub_8220AE28);
PPC_FUNC_IMPL(__imp__sub_8220AE28) {
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
	// beq 0x8220ae5c
	if (cr0.eq) goto loc_8220AE5C;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_8220AE5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220AE6C"))) PPC_WEAK_FUNC(sub_8220AE6C);
PPC_FUNC_IMPL(__imp__sub_8220AE6C) {
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
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
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

__attribute__((alias("__imp__sub_8220AE94"))) PPC_WEAK_FUNC(sub_8220AE94);
PPC_FUNC_IMPL(__imp__sub_8220AE94) {
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
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
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

__attribute__((alias("__imp__sub_8220AEC0"))) PPC_WEAK_FUNC(sub_8220AEC0);
PPC_FUNC_IMPL(__imp__sub_8220AEC0) {
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
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
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

__attribute__((alias("__imp__sub_8220AEE8"))) PPC_WEAK_FUNC(sub_8220AEE8);
PPC_FUNC_IMPL(__imp__sub_8220AEE8) {
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
	// bl 0x821e1110
	sub_821E1110(ctx, base);
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

__attribute__((alias("__imp__sub_8220AF18"))) PPC_WEAK_FUNC(sub_8220AF18);
PPC_FUNC_IMPL(__imp__sub_8220AF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x8220aee8
	sub_8220AEE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220AF24"))) PPC_WEAK_FUNC(sub_8220AF24);
PPC_FUNC_IMPL(__imp__sub_8220AF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220AF28"))) PPC_WEAK_FUNC(sub_8220AF28);
PPC_FUNC_IMPL(__imp__sub_8220AF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// b 0x821b2890
	sub_821B2890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220AF38"))) PPC_WEAK_FUNC(sub_8220AF38);
PPC_FUNC_IMPL(__imp__sub_8220AF38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8220b1d8
	sub_8220B1D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220AF44"))) PPC_WEAK_FUNC(sub_8220AF44);
PPC_FUNC_IMPL(__imp__sub_8220AF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220AF48"))) PPC_WEAK_FUNC(sub_8220AF48);
PPC_FUNC_IMPL(__imp__sub_8220AF48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82209fa0
	sub_82209FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220AF54"))) PPC_WEAK_FUNC(sub_8220AF54);
PPC_FUNC_IMPL(__imp__sub_8220AF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220AF58"))) PPC_WEAK_FUNC(sub_8220AF58);
PPC_FUNC_IMPL(__imp__sub_8220AF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r2{};
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
	// lwz r16,26256(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 26256);
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
	// lwz r11,12980(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12980);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8220afdc
	if (!cr0.eq) goto loc_8220AFDC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12980(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12980, r11.u32);
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
	// bl 0x821e1110
	sub_821E1110(ctx, base);
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
	// stw r3,12976(r27)
	PPC_STORE_U32(r27.u32 + 12976, ctx.r3.u32);
	// b 0x8220afe0
	goto loc_8220AFE0;
loc_8220AFDC:
	// lwz r3,12976(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 12976);
loc_8220AFE0:
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
	// beq 0x8220b01c
	if (cr0.eq) goto loc_8220B01C;
	// lwz r11,-84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -84);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-84
	ctx.r3.s64 = r11.s64 + -84;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8220b098
	goto loc_8220B098;
loc_8220B01C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8220b07c
	if (!cr0.eq) goto loc_8220B07C;
	// addic. r11,r30,-88
	xer.ca = r30.u32 > 87;
	r11.s64 = r30.s64 + -88;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8220b040
	if (!cr0.eq) goto loc_8220B040;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8220b050
	goto loc_8220B050;
loc_8220B040:
	// lwz r11,-84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-84
	ctx.r3.s64 = r11.s64 + -84;
loc_8220B050:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -84);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-84
	ctx.r4.s64 = r11.s64 + -84;
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
loc_8220B07C:
	// lwz r11,-84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-84
	ctx.r3.s64 = r11.s64 + -84;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8220B098:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8220AF60"))) PPC_WEAK_FUNC(sub_8220AF60);
PPC_FUNC_IMPL(__imp__sub_8220AF60) {
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
	// lwz r11,12980(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12980);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8220afdc
	if (!cr0.eq) goto loc_8220AFDC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12980(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12980, r11.u32);
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
	// bl 0x821e1110
	sub_821E1110(ctx, base);
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
	// stw r3,12976(r27)
	PPC_STORE_U32(r27.u32 + 12976, ctx.r3.u32);
	// b 0x8220afe0
	goto loc_8220AFE0;
loc_8220AFDC:
	// lwz r3,12976(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 12976);
loc_8220AFE0:
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
	// beq 0x8220b01c
	if (cr0.eq) goto loc_8220B01C;
	// lwz r11,-84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -84);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-84
	ctx.r3.s64 = r11.s64 + -84;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8220b098
	goto loc_8220B098;
loc_8220B01C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8220b07c
	if (!cr0.eq) goto loc_8220B07C;
	// addic. r11,r30,-88
	xer.ca = r30.u32 > 87;
	r11.s64 = r30.s64 + -88;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8220b040
	if (!cr0.eq) goto loc_8220B040;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8220b050
	goto loc_8220B050;
loc_8220B040:
	// lwz r11,-84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-84
	ctx.r3.s64 = r11.s64 + -84;
loc_8220B050:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -84);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-84
	ctx.r4.s64 = r11.s64 + -84;
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
loc_8220B07C:
	// lwz r11,-84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-84
	ctx.r3.s64 = r11.s64 + -84;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8220B098:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8220B0A4"))) PPC_WEAK_FUNC(sub_8220B0A4);
PPC_FUNC_IMPL(__imp__sub_8220B0A4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12980
	r11.s64 = r11.s64 + 12980;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12980
	ctx.r10.s64 = ctx.r10.s64 + 12980;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220B0CC"))) PPC_WEAK_FUNC(sub_8220B0CC);
PPC_FUNC_IMPL(__imp__sub_8220B0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B0D0"))) PPC_WEAK_FUNC(sub_8220B0D0);
PPC_FUNC_IMPL(__imp__sub_8220B0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8220af60
	sub_8220AF60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220B0DC"))) PPC_WEAK_FUNC(sub_8220B0DC);
PPC_FUNC_IMPL(__imp__sub_8220B0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B0E0"))) PPC_WEAK_FUNC(sub_8220B0E0);
PPC_FUNC_IMPL(__imp__sub_8220B0E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8220a100
	sub_8220A100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220B0EC"))) PPC_WEAK_FUNC(sub_8220B0EC);
PPC_FUNC_IMPL(__imp__sub_8220B0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B0F0"))) PPC_WEAK_FUNC(sub_8220B0F0);
PPC_FUNC_IMPL(__imp__sub_8220B0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8220a398
	sub_8220A398(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220B0FC"))) PPC_WEAK_FUNC(sub_8220B0FC);
PPC_FUNC_IMPL(__imp__sub_8220B0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B100"))) PPC_WEAK_FUNC(sub_8220B100);
PPC_FUNC_IMPL(__imp__sub_8220B100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8220a2f0
	sub_8220A2F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220B10C"))) PPC_WEAK_FUNC(sub_8220B10C);
PPC_FUNC_IMPL(__imp__sub_8220B10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B110"))) PPC_WEAK_FUNC(sub_8220B110);
PPC_FUNC_IMPL(__imp__sub_8220B110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x8220a908
	sub_8220A908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220B11C"))) PPC_WEAK_FUNC(sub_8220B11C);
PPC_FUNC_IMPL(__imp__sub_8220B11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B120"))) PPC_WEAK_FUNC(sub_8220B120);
PPC_FUNC_IMPL(__imp__sub_8220B120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r2{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,26336(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 26336);
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
	// addi r3,r30,-16
	ctx.r3.s64 = r30.s64 + -16;
	// bl 0x8220a298
	sub_8220A298(ctx, base);
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x8212da10
	sub_8212DA10(ctx, base);
	// addi r3,r30,-52
	ctx.r3.s64 = r30.s64 + -52;
	// bl 0x821268c0
	sub_821268C0(ctx, base);
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

__attribute__((alias("__imp__sub_8220B128"))) PPC_WEAK_FUNC(sub_8220B128);
PPC_FUNC_IMPL(__imp__sub_8220B128) {
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
	// addi r3,r30,-16
	ctx.r3.s64 = r30.s64 + -16;
	// bl 0x8220a298
	sub_8220A298(ctx, base);
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x8212da10
	sub_8212DA10(ctx, base);
	// addi r3,r30,-52
	ctx.r3.s64 = r30.s64 + -52;
	// bl 0x821268c0
	sub_821268C0(ctx, base);
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

__attribute__((alias("__imp__sub_8220B178"))) PPC_WEAK_FUNC(sub_8220B178);
PPC_FUNC_IMPL(__imp__sub_8220B178) {
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
	// addi r11,r11,-88
	r11.s64 = r11.s64 + -88;
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
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

__attribute__((alias("__imp__sub_8220B1A8"))) PPC_WEAK_FUNC(sub_8220B1A8);
PPC_FUNC_IMPL(__imp__sub_8220B1A8) {
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
	// addi r11,r11,-88
	r11.s64 = r11.s64 + -88;
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// bl 0x8212deb8
	sub_8212DEB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220B1D8"))) PPC_WEAK_FUNC(sub_8220B1D8);
PPC_FUNC_IMPL(__imp__sub_8220B1D8) {
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
	// addi r30,r3,-88
	r30.s64 = ctx.r3.s64 + -88;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,88
	r31.s64 = r30.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8220b128
	sub_8220B128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220b210
	if (cr0.eq) goto loc_8220B210;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_8220B210:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8220B21C"))) PPC_WEAK_FUNC(sub_8220B21C);
PPC_FUNC_IMPL(__imp__sub_8220B21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B220"))) PPC_WEAK_FUNC(sub_8220B220);
PPC_FUNC_IMPL(__imp__sub_8220B220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// srawi r10,r4,8
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// srawi r9,r4,16
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 16;
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	f0.f64 = double(temp.f32);
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// frsp f11,f0
	ctx.f11.f64 = double(float(f0.f64));
	// lfs f0,5048(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5048);
	f0.f64 = double(temp.f32);
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fmuls f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f13,f12,f1
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220B2D0"))) PPC_WEAK_FUNC(sub_8220B2D0);
PPC_FUNC_IMPL(__imp__sub_8220B2D0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8239d5e4
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r7,12(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r7.u32);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lfs f13,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fsubs f31,f11,f13
	f31.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f12,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f30,f11,f12
	f30.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f0,196(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 196);
	f0.f64 = double(temp.f32);
	// lfs f13,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f28,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f28.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(f0.f64, f28.f64);
	// fsubs f29,f12,f13
	f29.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// ble cr6,0x8220b360
	if (!cr6.gt) goto loc_8220B360;
	// fmr f27,f0
	f27.f64 = f0.f64;
	// b 0x8220b368
	goto loc_8220B368;
loc_8220B360:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f27,29188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 29188);
	f27.f64 = double(temp.f32);
loc_8220B368:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,216(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 216);
	f0.f64 = double(temp.f32);
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fmuls f11,f11,f29
	ctx.f11.f64 = double(float(ctx.f11.f64 * f29.f64));
	// lfs f10,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fdivs f9,f12,f27
	ctx.f9.f64 = double(float(ctx.f12.f64 / f27.f64));
	// lfs f8,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f0,f9
	ctx.f7.f64 = double(float(f0.f64 * ctx.f9.f64));
	// fmadds f0,f10,f30,f11
	f0.f64 = double(float(ctx.f10.f64 * f30.f64 + ctx.f11.f64));
	// lfs f11,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f8,f31,f0
	f0.f64 = double(float(ctx.f8.f64 * f31.f64 + f0.f64));
	// fmadds f13,f7,f0,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x8220b3c4
	if (!cr6.lt) goto loc_8220B3C4;
	// stfs f28,0(r30)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f28,4(r30)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// b 0x8220b46c
	goto loc_8220B46C;
loc_8220B3C4:
	// fmuls f10,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(f31.f64 * f31.f64));
	// lfs f11,260(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 260);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f28
	cr6.compare(ctx.f11.f64, f28.f64);
	// fmadds f10,f30,f30,f10
	ctx.f10.f64 = double(float(f30.f64 * f30.f64 + ctx.f10.f64));
	// fmadds f10,f29,f29,f10
	ctx.f10.f64 = double(float(f29.f64 * f29.f64 + ctx.f10.f64));
	// fnmsubs f10,f0,f0,f10
	ctx.f10.f64 = double(float(-(f0.f64 * f0.f64 - ctx.f10.f64)));
	// fsqrts f10,f10
	ctx.f10.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// ble cr6,0x8220b3f4
	if (!cr6.gt) goto loc_8220B3F4;
	// lfs f13,256(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f13,f10,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f11.f64));
	// b 0x8220b410
	goto loc_8220B410;
loc_8220B3F4:
	// lfs f13,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f10,f13
	cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// ble cr6,0x8220b40c
	if (!cr6.gt) goto loc_8220B40C;
	// fmr f13,f28
	ctx.f13.f64 = f28.f64;
	// b 0x8220b410
	goto loc_8220B410;
loc_8220B40C:
	// fmr f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64;
loc_8220B410:
	// lfs f11,220(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 220);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f13,f28
	cr6.compare(ctx.f13.f64, f28.f64);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fnmsubs f0,f9,f0,f12
	f0.f64 = double(float(-(ctx.f9.f64 * f0.f64 - ctx.f12.f64)));
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// bgt cr6,0x8220b430
	if (cr6.gt) goto loc_8220B430;
	// fmr f13,f28
	ctx.f13.f64 = f28.f64;
	// b 0x8220b43c
	goto loc_8220B43C;
loc_8220B430:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x8220b43c
	if (cr6.lt) goto loc_8220B43C;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_8220B43C:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f28.f64);
	// bgt cr6,0x8220b44c
	if (cr6.gt) goto loc_8220B44C;
	// fmr f12,f28
	ctx.f12.f64 = f28.f64;
	// b 0x8220b458
	goto loc_8220B458;
loc_8220B44C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f12.f64);
	// bge cr6,0x8220b458
	if (!cr6.lt) goto loc_8220B458;
	// fmr f12,f0
	ctx.f12.f64 = f0.f64;
loc_8220B458:
	// fmuls f0,f12,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
loc_8220B46C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8239d630
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

__attribute__((alias("__imp__sub_8220B490"))) PPC_WEAK_FUNC(sub_8220B490);
PPC_FUNC_IMPL(__imp__sub_8220B490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
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
	// lwz r11,200(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8220b5e8
	if (!cr6.eq) goto loc_8220B5E8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8220b4d0
	if (!cr6.eq) goto loc_8220B4D0;
loc_8220B4C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8220b5ec
	goto loc_8220B5EC;
loc_8220B4D0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8220b2d0
	sub_8220B2D0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f31.f64 = double(temp.f32);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// blt cr6,0x8220b4c8
	if (cr6.lt) goto loc_8220B4C8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r7.u32);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	f0.f64 = double(temp.f32);
	// fsubs f30,f12,f0
	f30.f64 = double(float(ctx.f12.f64 - f0.f64));
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f29,f12,f13
	f29.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f28,f13,f0
	f28.f64 = double(float(ctx.f13.f64 - f0.f64));
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fsubs f13,f30,f13
	ctx.f13.f64 = double(float(f30.f64 - ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f13,f29,f12
	ctx.f13.f64 = double(float(f29.f64 - ctx.f12.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f0,f28,f0
	f0.f64 = double(float(f28.f64 - f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8214f728
	sub_8214F728(ctx, base);
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 192);
	f0.f64 = double(temp.f32);
	// lfs f13,188(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// lfs f12,184(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f11,180(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfs f0,12(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 12, temp.u32);
	// stfs f11,0(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r29.u32 + 8, temp.u32);
	// stfs f12,4(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
loc_8220B5E8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8220B5EC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8239d634
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8220B5FC"))) PPC_WEAK_FUNC(sub_8220B5FC);
PPC_FUNC_IMPL(__imp__sub_8220B5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B600"))) PPC_WEAK_FUNC(sub_8220B600);
PPC_FUNC_IMPL(__imp__sub_8220B600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
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
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	f0.f64 = double(temp.f32);
	// fneg f31,f0
	f31.u64 = f0.u64 ^ 0x8000000000000000;
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	f0.f64 = double(temp.f32);
	// fneg f30,f13
	f30.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f29,f0
	f29.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lfs f8,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,212(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f7,216(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 216);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,196(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 196);
	ctx.f6.f64 = double(temp.f32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f10,f8
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f10,f31
	ctx.f4.f64 = double(float(ctx.f10.f64 * f31.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f31,4(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f9,16(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// fmadds f0,f12,f0,f5
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f5.f64));
	// fmadds f8,f12,f29,f4
	ctx.f8.f64 = double(float(ctx.f12.f64 * f29.f64 + ctx.f4.f64));
	// stfs f30,20(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f29,36(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// fnmadds f0,f11,f9,f0
	f0.f64 = double(float(-(ctx.f11.f64 * ctx.f9.f64 + f0.f64)));
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// fnmadds f0,f11,f30,f8
	f0.f64 = double(float(-(ctx.f11.f64 * f30.f64 + ctx.f8.f64)));
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// fsubs f0,f7,f13
	f0.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// fdivs f0,f0,f6
	f0.f64 = double(float(f0.f64 / ctx.f6.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * f0.f64));
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fmuls f8,f0,f8
	ctx.f8.f64 = double(float(f0.f64 * ctx.f8.f64));
	// stfs f8,40(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// fmuls f0,f7,f0
	f0.f64 = double(float(ctx.f7.f64 * f0.f64));
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// fmuls f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmadds f12,f12,f8,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fmadds f0,f11,f0,f12
	f0.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f12.f64));
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f29,-48(r1)
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
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

__attribute__((alias("__imp__sub_8220B7E0"))) PPC_WEAK_FUNC(sub_8220B7E0);
PPC_FUNC_IMPL(__imp__sub_8220B7E0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8220b81c
	if (cr0.eq) goto loc_8220B81C;
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
loc_8220B81C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// beq cr6,0x8220b840
	if (cr6.eq) goto loc_8220B840;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_8220B840:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8220B848"))) PPC_WEAK_FUNC(sub_8220B848);
PPC_FUNC_IMPL(__imp__sub_8220B848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	// lwz r16,26416(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 26416);
	// mflr r12
	// bl 0x8239bcf4
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r29,-84
	ctx.r4.s64 = r29.s64 + -84;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821b1158
	sub_821B1158(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8220b8c8
	if (cr6.eq) goto loc_8220B8C8;
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
	// beq 0x8220b920
	if (cr0.eq) goto loc_8220B920;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_8220B8C0:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8220b920
	goto loc_8220B920;
loc_8220B8C8:
	// lwz r11,-264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -264);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r4,r11,-264
	ctx.r4.s64 = r11.s64 + -264;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8220b914
	if (cr6.eq) goto loc_8220B914;
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
	// beq 0x8220b920
	if (cr0.eq) goto loc_8220B920;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x8220b8c0
	goto loc_8220B8C0;
loc_8220B914:
	// li r11,6
	r11.s64 = 6;
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_8220B920:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8220B850"))) PPC_WEAK_FUNC(sub_8220B850);
PPC_FUNC_IMPL(__imp__sub_8220B850) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r29,-84
	ctx.r4.s64 = r29.s64 + -84;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821b1158
	sub_821B1158(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8220b8c8
	if (cr6.eq) goto loc_8220B8C8;
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
	// beq 0x8220b920
	if (cr0.eq) goto loc_8220B920;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_8220B8C0:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8220b920
	goto loc_8220B920;
loc_8220B8C8:
	// lwz r11,-264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -264);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r4,r11,-264
	ctx.r4.s64 = r11.s64 + -264;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8220b914
	if (cr6.eq) goto loc_8220B914;
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
	// beq 0x8220b920
	if (cr0.eq) goto loc_8220B920;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x8220b8c0
	goto loc_8220B8C0;
loc_8220B914:
	// li r11,6
	r11.s64 = 6;
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_8220B920:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8220B92C"))) PPC_WEAK_FUNC(sub_8220B92C);
PPC_FUNC_IMPL(__imp__sub_8220B92C) {
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

__attribute__((alias("__imp__sub_8220B954"))) PPC_WEAK_FUNC(sub_8220B954);
PPC_FUNC_IMPL(__imp__sub_8220B954) {
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

__attribute__((alias("__imp__sub_8220B97C"))) PPC_WEAK_FUNC(sub_8220B97C);
PPC_FUNC_IMPL(__imp__sub_8220B97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B980"))) PPC_WEAK_FUNC(sub_8220B980);
PPC_FUNC_IMPL(__imp__sub_8220B980) {
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
	// beq 0x8220ba0c
	if (cr0.eq) goto loc_8220BA0C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r11,9120
	r29.s64 = r11.s64 + 9120;
loc_8220B9C8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220b9ec
	if (cr0.eq) goto loc_8220B9EC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// b 0x8220b9f0
	goto loc_8220B9F0;
loc_8220B9EC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_8220B9F0:
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
	// bne 0x8220b9c8
	if (!cr0.eq) goto loc_8220B9C8;
loc_8220BA0C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8220BA18"))) PPC_WEAK_FUNC(sub_8220BA18);
PPC_FUNC_IMPL(__imp__sub_8220BA18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	// lwz r16,26504(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 26504);
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
	// bne cr6,0x8220ba88
	if (!cr6.eq) goto loc_8220BA88;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8220ba5c
	if (cr0.eq) goto loc_8220BA5C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8220BA5C:
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
	// beq 0x8220bab8
	if (cr0.eq) goto loc_8220BAB8;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8220bab8
	goto loc_8220BAB8;
loc_8220BA88:
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
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
loc_8220BAB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8220BA20"))) PPC_WEAK_FUNC(sub_8220BA20);
PPC_FUNC_IMPL(__imp__sub_8220BA20) {
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
	// bne cr6,0x8220ba88
	if (!cr6.eq) goto loc_8220BA88;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8220ba5c
	if (cr0.eq) goto loc_8220BA5C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8220BA5C:
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
	// beq 0x8220bab8
	if (cr0.eq) goto loc_8220BAB8;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8220bab8
	goto loc_8220BAB8;
loc_8220BA88:
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
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
loc_8220BAB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8220BAC4"))) PPC_WEAK_FUNC(sub_8220BAC4);
PPC_FUNC_IMPL(__imp__sub_8220BAC4) {
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

__attribute__((alias("__imp__sub_8220BAEC"))) PPC_WEAK_FUNC(sub_8220BAEC);
PPC_FUNC_IMPL(__imp__sub_8220BAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220BAF0"))) PPC_WEAK_FUNC(sub_8220BAF0);
PPC_FUNC_IMPL(__imp__sub_8220BAF0) {
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
	// lwz r11,14196(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14196);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lwz r11,-264(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -264);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-264
	ctx.r3.s64 = r11.s64 + -264;
	// bl 0x82314ff8
	sub_82314FF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-84
	ctx.r3.s64 = r31.s64 + -84;
	// bl 0x821afb80
	sub_821AFB80(ctx, base);
	// addi r4,r31,-88
	ctx.r4.s64 = r31.s64 + -88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,-72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -72);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82132e90
	sub_82132E90(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lwz r11,-68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -68);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lbz r11,-64(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + -64);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x823592f0
	sub_823592F0(ctx, base);
	// lbz r11,-63(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + -63);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x823592f0
	sub_823592F0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lfs f0,-56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -56);
	f0.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359440
	sub_82359440(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f0,-52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -52);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lfs f0,-60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -60);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,-48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -48);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// addi r4,r31,-44
	ctx.r4.s64 = r31.s64 + -44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r31,-32
	r31.s64 = r31.s64 + -32;
	// bl 0x821d78e0
	sub_821D78E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8220b980
	sub_8220B980(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8220BC30"))) PPC_WEAK_FUNC(sub_8220BC30);
PPC_FUNC_IMPL(__imp__sub_8220BC30) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r3,188
	r11.s64 = ctx.r3.s64 + 188;
	// addi r9,r3,180
	ctx.r9.s64 = ctx.r3.s64 + 180;
	// lfs f0,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f0.f64 = double(temp.f32);
	// addi r10,r3,184
	ctx.r10.s64 = ctx.r3.s64 + 184;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x8220bc5c
	if (cr6.lt) goto loc_8220BC5C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8220BC5C:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x8220bc70
	if (cr6.lt) goto loc_8220BC70;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8220BC70:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x8220bc80
	if (cr6.gt) goto loc_8220BC80;
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
loc_8220BC80:
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220BC88"))) PPC_WEAK_FUNC(sub_8220BC88);
PPC_FUNC_IMPL(__imp__sub_8220BC88) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// beq cr6,0x8220bd48
	if (cr6.eq) goto loc_8220BD48;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x8220bce4
	if (!cr6.gt) goto loc_8220BCE4;
loc_8220BCB4:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821500f8
	sub_821500F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8220bcb4
	if (cr6.gt) goto loc_8220BCB4;
loc_8220BCE4:
	// lwz r30,8(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8220bd1c
	if (cr0.eq) goto loc_8220BD1C;
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
loc_8220BCF8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x8220b7e0
	sub_8220B7E0(ctx, base);
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x8220bcf8
	if (!cr0.eq) goto loc_8220BCF8;
loc_8220BD1C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8220bd48
	if (cr6.eq) goto loc_8220BD48;
	// li r30,0
	r30.s64 = 0;
loc_8220BD28:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82151040
	sub_82151040(ctx, base);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x8220bd28
	if (!cr0.eq) goto loc_8220BD28;
loc_8220BD48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8220BD50"))) PPC_WEAK_FUNC(sub_8220BD50);
PPC_FUNC_IMPL(__imp__sub_8220BD50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	// lwz r16,26576(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 26576);
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
	// bne cr6,0x8220bdc0
	if (!cr6.eq) goto loc_8220BDC0;
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
	// beq 0x8220bdb8
	if (cr0.eq) goto loc_8220BDB8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8220BDB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220bec4
	goto loc_8220BEC4;
loc_8220BDC0:
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
	// ble 0x8220bdf0
	if (!cr0.gt) goto loc_8220BDF0;
loc_8220BDE4:
	// lwz r28,4(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x8220bde4
	if (cr0.gt) goto loc_8220BDE4;
loc_8220BDF0:
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(r25.s32, 1, xer);
	// beq cr6,0x8220bea8
	if (cr6.eq) goto loc_8220BEA8;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// beq cr6,0x8220be68
	if (cr6.eq) goto loc_8220BE68;
	// cmpwi cr6,r25,4
	cr6.compare<int32_t>(r25.s32, 4, xer);
	// beq cr6,0x8220be2c
	if (cr6.eq) goto loc_8220BE2C;
	// cmpwi cr6,r25,8
	cr6.compare<int32_t>(r25.s32, 8, xer);
	// bne cr6,0x8220bea0
	if (!cr6.eq) goto loc_8220BEA0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821500f8
	sub_821500F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
	// b 0x8220bdb8
	goto loc_8220BDB8;
loc_8220BE2C:
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
	// bl 0x8220ba20
	sub_8220BA20(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220bea0
	if (cr0.eq) goto loc_8220BEA0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82151040
	sub_82151040(ctx, base);
	// b 0x8220bdb8
	goto loc_8220BDB8;
loc_8220BE68:
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
	// bl 0x8220ba20
	sub_8220BA20(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220bea0
	if (cr0.eq) goto loc_8220BEA0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8220b7e0
	sub_8220B7E0(ctx, base);
	// b 0x8220bdb8
	goto loc_8220BDB8;
loc_8220BEA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8220bec4
	goto loc_8220BEC4;
loc_8220BEA8:
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
	// bl 0x8220ba20
	sub_8220BA20(ctx, base);
loc_8220BEC4:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8220BD58"))) PPC_WEAK_FUNC(sub_8220BD58);
PPC_FUNC_IMPL(__imp__sub_8220BD58) {
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
	// bne cr6,0x8220bdc0
	if (!cr6.eq) goto loc_8220BDC0;
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
	// beq 0x8220bdb8
	if (cr0.eq) goto loc_8220BDB8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8220BDB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220bec4
	goto loc_8220BEC4;
loc_8220BDC0:
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
	// ble 0x8220bdf0
	if (!cr0.gt) goto loc_8220BDF0;
loc_8220BDE4:
	// lwz r28,4(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x8220bde4
	if (cr0.gt) goto loc_8220BDE4;
loc_8220BDF0:
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(r25.s32, 1, xer);
	// beq cr6,0x8220bea8
	if (cr6.eq) goto loc_8220BEA8;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// beq cr6,0x8220be68
	if (cr6.eq) goto loc_8220BE68;
	// cmpwi cr6,r25,4
	cr6.compare<int32_t>(r25.s32, 4, xer);
	// beq cr6,0x8220be2c
	if (cr6.eq) goto loc_8220BE2C;
	// cmpwi cr6,r25,8
	cr6.compare<int32_t>(r25.s32, 8, xer);
	// bne cr6,0x8220bea0
	if (!cr6.eq) goto loc_8220BEA0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821500f8
	sub_821500F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
	// b 0x8220bdb8
	goto loc_8220BDB8;
loc_8220BE2C:
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
	// bl 0x8220ba20
	sub_8220BA20(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220bea0
	if (cr0.eq) goto loc_8220BEA0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82151040
	sub_82151040(ctx, base);
	// b 0x8220bdb8
	goto loc_8220BDB8;
loc_8220BE68:
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
	// bl 0x8220ba20
	sub_8220BA20(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220bea0
	if (cr0.eq) goto loc_8220BEA0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8220b7e0
	sub_8220B7E0(ctx, base);
	// b 0x8220bdb8
	goto loc_8220BDB8;
loc_8220BEA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8220bec4
	goto loc_8220BEC4;
loc_8220BEA8:
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
	// bl 0x8220ba20
	sub_8220BA20(ctx, base);
loc_8220BEC4:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8220BECC"))) PPC_WEAK_FUNC(sub_8220BECC);
PPC_FUNC_IMPL(__imp__sub_8220BECC) {
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

__attribute__((alias("__imp__sub_8220BEF4"))) PPC_WEAK_FUNC(sub_8220BEF4);
PPC_FUNC_IMPL(__imp__sub_8220BEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220BEF8"))) PPC_WEAK_FUNC(sub_8220BEF8);
PPC_FUNC_IMPL(__imp__sub_8220BEF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	// lwz r16,26768(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 26768);
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
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq cr6,0x8220bf78
	if (cr6.eq) goto loc_8220BF78;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,26740
	r11.s64 = r11.s64 + 26740;
	// addi r10,r10,26732
	ctx.r10.s64 = ctx.r10.s64 + 26732;
	// addi r3,r30,268
	ctx.r3.s64 = r30.s64 + 268;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,316(r30)
	PPC_STORE_U32(r30.u32 + 316, ctx.r10.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,312
	r11.s64 = r30.s64 + 312;
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
loc_8220BF78:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b21a0
	sub_821B21A0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,26716
	r11.s64 = r11.s64 + 26716;
	// addi r29,r30,224
	r29.s64 = r30.s64 + 224;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f0,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r9,r10,26652
	ctx.r9.s64 = ctx.r10.s64 + 26652;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r10,26644
	ctx.r8.s64 = ctx.r10.s64 + 26644;
	// lfs f11,8748(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8748);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lfs f12,17324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17324);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lfs f13,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r11,-264
	ctx.r9.s64 = r11.s64 + -264;
	// stwx r9,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r9,r11,-308
	ctx.r9.s64 = r11.s64 + -308;
	// stwx r9,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r9.u32);
	// stfs f0,180(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 180, temp.u32);
	// stfs f0,184(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 184, temp.u32);
	// stfs f0,188(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 188, temp.u32);
	// stfs f0,192(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 192, temp.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stfs f12,196(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 196, temp.u32);
	// stw r10,200(r30)
	PPC_STORE_U32(r30.u32 + 200, ctx.r10.u32);
	// stfs f13,208(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 208, temp.u32);
	// stb r10,204(r30)
	PPC_STORE_U8(r30.u32 + 204, ctx.r10.u8);
	// stfs f13,212(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 212, temp.u32);
	// stb r10,205(r30)
	PPC_STORE_U8(r30.u32 + 205, ctx.r10.u8);
	// stfs f11,216(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 216, temp.u32);
	// stfs f13,220(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 220, temp.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x821d7228
	sub_821D7228(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-7284
	r11.s64 = r11.s64 + -7284;
	// addi r10,r10,-21064
	ctx.r10.s64 = ctx.r10.s64 + -21064;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,236(r30)
	PPC_STORE_U32(r30.u32 + 236, ctx.r10.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r28,240(r30)
	PPC_STORE_U32(r30.u32 + 240, r28.u32);
	// stw r28,244(r30)
	PPC_STORE_U32(r30.u32 + 244, r28.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r28,252(r30)
	PPC_STORE_U32(r30.u32 + 252, r28.u32);
	// stw r11,248(r30)
	PPC_STORE_U32(r30.u32 + 248, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8220BF00"))) PPC_WEAK_FUNC(sub_8220BF00);
PPC_FUNC_IMPL(__imp__sub_8220BF00) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq cr6,0x8220bf78
	if (cr6.eq) goto loc_8220BF78;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,26740
	r11.s64 = r11.s64 + 26740;
	// addi r10,r10,26732
	ctx.r10.s64 = ctx.r10.s64 + 26732;
	// addi r3,r30,268
	ctx.r3.s64 = r30.s64 + 268;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,316(r30)
	PPC_STORE_U32(r30.u32 + 316, ctx.r10.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,312
	r11.s64 = r30.s64 + 312;
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
loc_8220BF78:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b21a0
	sub_821B21A0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,26716
	r11.s64 = r11.s64 + 26716;
	// addi r29,r30,224
	r29.s64 = r30.s64 + 224;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f0,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r9,r10,26652
	ctx.r9.s64 = ctx.r10.s64 + 26652;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r10,26644
	ctx.r8.s64 = ctx.r10.s64 + 26644;
	// lfs f11,8748(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8748);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lfs f12,17324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17324);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lfs f13,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r11,-264
	ctx.r9.s64 = r11.s64 + -264;
	// stwx r9,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r9,r11,-308
	ctx.r9.s64 = r11.s64 + -308;
	// stwx r9,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r9.u32);
	// stfs f0,180(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 180, temp.u32);
	// stfs f0,184(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 184, temp.u32);
	// stfs f0,188(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 188, temp.u32);
	// stfs f0,192(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 192, temp.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stfs f12,196(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 196, temp.u32);
	// stw r10,200(r30)
	PPC_STORE_U32(r30.u32 + 200, ctx.r10.u32);
	// stfs f13,208(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 208, temp.u32);
	// stb r10,204(r30)
	PPC_STORE_U8(r30.u32 + 204, ctx.r10.u8);
	// stfs f13,212(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 212, temp.u32);
	// stb r10,205(r30)
	PPC_STORE_U8(r30.u32 + 205, ctx.r10.u8);
	// stfs f11,216(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 216, temp.u32);
	// stfs f13,220(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 220, temp.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x821d7228
	sub_821D7228(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-7284
	r11.s64 = r11.s64 + -7284;
	// addi r10,r10,-21064
	ctx.r10.s64 = ctx.r10.s64 + -21064;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,236(r30)
	PPC_STORE_U32(r30.u32 + 236, ctx.r10.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r28,240(r30)
	PPC_STORE_U32(r30.u32 + 240, r28.u32);
	// stw r28,244(r30)
	PPC_STORE_U32(r30.u32 + 244, r28.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r28,252(r30)
	PPC_STORE_U32(r30.u32 + 252, r28.u32);
	// stw r11,248(r30)
	PPC_STORE_U32(r30.u32 + 248, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8220C098"))) PPC_WEAK_FUNC(sub_8220C098);
PPC_FUNC_IMPL(__imp__sub_8220C098) {
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
	// beq 0x8220c0cc
	if (cr0.eq) goto loc_8220C0CC;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,268
	ctx.r3.s64 = r11.s64 + 268;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_8220C0CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220C0DC"))) PPC_WEAK_FUNC(sub_8220C0DC);
PPC_FUNC_IMPL(__imp__sub_8220C0DC) {
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

__attribute__((alias("__imp__sub_8220C108"))) PPC_WEAK_FUNC(sub_8220C108);
PPC_FUNC_IMPL(__imp__sub_8220C108) {
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
	// bl 0x821e1220
	sub_821E1220(ctx, base);
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

__attribute__((alias("__imp__sub_8220C138"))) PPC_WEAK_FUNC(sub_8220C138);
PPC_FUNC_IMPL(__imp__sub_8220C138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,196(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220C140"))) PPC_WEAK_FUNC(sub_8220C140);
PPC_FUNC_IMPL(__imp__sub_8220C140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x8220c108
	sub_8220C108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220C14C"))) PPC_WEAK_FUNC(sub_8220C14C);
PPC_FUNC_IMPL(__imp__sub_8220C14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220C150"))) PPC_WEAK_FUNC(sub_8220C150);
PPC_FUNC_IMPL(__imp__sub_8220C150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-84
	ctx.r3.s64 = ctx.r3.s64 + -84;
	// b 0x821afb18
	sub_821AFB18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220C160"))) PPC_WEAK_FUNC(sub_8220C160);
PPC_FUNC_IMPL(__imp__sub_8220C160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-84
	ctx.r3.s64 = ctx.r3.s64 + -84;
	// b 0x821b0888
	sub_821B0888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220C170"))) PPC_WEAK_FUNC(sub_8220C170);
PPC_FUNC_IMPL(__imp__sub_8220C170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8220d2a0
	sub_8220D2A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220C17C"))) PPC_WEAK_FUNC(sub_8220C17C);
PPC_FUNC_IMPL(__imp__sub_8220C17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220C180"))) PPC_WEAK_FUNC(sub_8220C180);
PPC_FUNC_IMPL(__imp__sub_8220C180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r2{};
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
	// lwz r16,26840(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 26840);
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
	// lwz r11,12988(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12988);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8220c204
	if (!cr0.eq) goto loc_8220C204;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12988, r11.u32);
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
	// bl 0x821e1220
	sub_821E1220(ctx, base);
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
	// stw r3,12984(r27)
	PPC_STORE_U32(r27.u32 + 12984, ctx.r3.u32);
	// b 0x8220c208
	goto loc_8220C208;
loc_8220C204:
	// lwz r3,12984(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 12984);
loc_8220C208:
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
	// beq 0x8220c244
	if (cr0.eq) goto loc_8220C244;
	// lwz r11,-264(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -264);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-264
	ctx.r3.s64 = r11.s64 + -264;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8220c2c0
	goto loc_8220C2C0;
loc_8220C244:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8220c2a4
	if (!cr0.eq) goto loc_8220C2A4;
	// addic. r11,r30,-268
	xer.ca = r30.u32 > 267;
	r11.s64 = r30.s64 + -268;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8220c268
	if (!cr0.eq) goto loc_8220C268;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8220c278
	goto loc_8220C278;
loc_8220C268:
	// lwz r11,-264(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -264);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-264
	ctx.r3.s64 = r11.s64 + -264;
loc_8220C278:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-264(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -264);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-264
	ctx.r4.s64 = r11.s64 + -264;
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
loc_8220C2A4:
	// lwz r11,-264(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -264);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-264
	ctx.r3.s64 = r11.s64 + -264;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8220C2C0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8220C188"))) PPC_WEAK_FUNC(sub_8220C188);
PPC_FUNC_IMPL(__imp__sub_8220C188) {
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
	// lwz r11,12988(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12988);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8220c204
	if (!cr0.eq) goto loc_8220C204;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12988, r11.u32);
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
	// bl 0x821e1220
	sub_821E1220(ctx, base);
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
	// stw r3,12984(r27)
	PPC_STORE_U32(r27.u32 + 12984, ctx.r3.u32);
	// b 0x8220c208
	goto loc_8220C208;
loc_8220C204:
	// lwz r3,12984(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 12984);
loc_8220C208:
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
	// beq 0x8220c244
	if (cr0.eq) goto loc_8220C244;
	// lwz r11,-264(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -264);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-264
	ctx.r3.s64 = r11.s64 + -264;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8220c2c0
	goto loc_8220C2C0;
loc_8220C244:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8220c2a4
	if (!cr0.eq) goto loc_8220C2A4;
	// addic. r11,r30,-268
	xer.ca = r30.u32 > 267;
	r11.s64 = r30.s64 + -268;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8220c268
	if (!cr0.eq) goto loc_8220C268;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8220c278
	goto loc_8220C278;
loc_8220C268:
	// lwz r11,-264(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -264);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-264
	ctx.r3.s64 = r11.s64 + -264;
loc_8220C278:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-264(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -264);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-264
	ctx.r4.s64 = r11.s64 + -264;
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
loc_8220C2A4:
	// lwz r11,-264(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -264);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-264
	ctx.r3.s64 = r11.s64 + -264;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8220C2C0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8220C2CC"))) PPC_WEAK_FUNC(sub_8220C2CC);
PPC_FUNC_IMPL(__imp__sub_8220C2CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,12988
	r11.s64 = r11.s64 + 12988;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,12988
	ctx.r10.s64 = ctx.r10.s64 + 12988;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220C2F4"))) PPC_WEAK_FUNC(sub_8220C2F4);
PPC_FUNC_IMPL(__imp__sub_8220C2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220C2F8"))) PPC_WEAK_FUNC(sub_8220C2F8);
PPC_FUNC_IMPL(__imp__sub_8220C2F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x8220b850
	sub_8220B850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220C304"))) PPC_WEAK_FUNC(sub_8220C304);
PPC_FUNC_IMPL(__imp__sub_8220C304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220C308"))) PPC_WEAK_FUNC(sub_8220C308);
PPC_FUNC_IMPL(__imp__sub_8220C308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8220c188
	sub_8220C188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220C314"))) PPC_WEAK_FUNC(sub_8220C314);
PPC_FUNC_IMPL(__imp__sub_8220C314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220C318"))) PPC_WEAK_FUNC(sub_8220C318);
PPC_FUNC_IMPL(__imp__sub_8220C318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8220baf0
	sub_8220BAF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220C324"))) PPC_WEAK_FUNC(sub_8220C324);
PPC_FUNC_IMPL(__imp__sub_8220C324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220C328"))) PPC_WEAK_FUNC(sub_8220C328);
PPC_FUNC_IMPL(__imp__sub_8220C328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r2{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,26920(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 26920);
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
	// addi r3,r30,-32
	ctx.r3.s64 = r30.s64 + -32;
	// bl 0x821537f8
	sub_821537F8(ctx, base);
	// addi r3,r30,-44
	ctx.r3.s64 = r30.s64 + -44;
	// bl 0x821c54f0
	sub_821C54F0(ctx, base);
	// addi r3,r30,-84
	ctx.r3.s64 = r30.s64 + -84;
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

__attribute__((alias("__imp__sub_8220C330"))) PPC_WEAK_FUNC(sub_8220C330);
PPC_FUNC_IMPL(__imp__sub_8220C330) {
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
	// addi r3,r30,-32
	ctx.r3.s64 = r30.s64 + -32;
	// bl 0x821537f8
	sub_821537F8(ctx, base);
	// addi r3,r30,-44
	ctx.r3.s64 = r30.s64 + -44;
	// bl 0x821c54f0
	sub_821C54F0(ctx, base);
	// addi r3,r30,-84
	ctx.r3.s64 = r30.s64 + -84;
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

__attribute__((alias("__imp__sub_8220C380"))) PPC_WEAK_FUNC(sub_8220C380);
PPC_FUNC_IMPL(__imp__sub_8220C380) {
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
	// addi r11,r11,-268
	r11.s64 = r11.s64 + -268;
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

__attribute__((alias("__imp__sub_8220C3B0"))) PPC_WEAK_FUNC(sub_8220C3B0);
PPC_FUNC_IMPL(__imp__sub_8220C3B0) {
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
	// addi r11,r11,-268
	r11.s64 = r11.s64 + -268;
	// addi r3,r11,224
	ctx.r3.s64 = r11.s64 + 224;
	// bl 0x821c7408
	sub_821C7408(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220C3E0"))) PPC_WEAK_FUNC(sub_8220C3E0);
PPC_FUNC_IMPL(__imp__sub_8220C3E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	// lwz r16,27000(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 27000);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r11,14196(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14196);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bgt cr6,0x8220c684
	if (cr6.gt) goto loc_8220C684;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// ble cr6,0x8220c444
	if (!cr6.gt) goto loc_8220C444;
	// lwz r11,-264(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -264);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-264
	ctx.r3.s64 = r11.s64 + -264;
	// bl 0x82315350
	sub_82315350(ctx, base);
loc_8220C444:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-84
	ctx.r3.s64 = r30.s64 + -84;
	// bl 0x821b0a28
	sub_821B0A28(ctx, base);
	// addi r4,r30,-88
	ctx.r4.s64 = r30.s64 + -88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x8220c480
	if (!cr6.lt) goto loc_8220C480;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r31,144
	r28.s64 = r31.s64 + 144;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
loc_8220C480:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x8220c4ac
	if (!cr6.lt) goto loc_8220C4AC;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,92
	ctx.r4.s64 = r31.s64 + 92;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_8220C4AC:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-72
	ctx.r4.s64 = r30.s64 + -72;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x8220c4fc
	if (!cr6.lt) goto loc_8220C4FC;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,100
	ctx.r4.s64 = r31.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_8220C4FC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8220c518
	if (!cr6.gt) goto loc_8220C518;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-68
	ctx.r4.s64 = r30.s64 + -68;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_8220C518:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x8220c544
	if (!cr6.gt) goto loc_8220C544;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bge cr6,0x8220c548
	if (!cr6.lt) goto loc_8220C548;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// stb r11,-64(r30)
	PPC_STORE_U8(r30.u32 + -64, r11.u8);
	// stb r11,-63(r30)
	PPC_STORE_U8(r30.u32 + -63, r11.u8);
	// b 0x8220c564
	goto loc_8220C564;
loc_8220C544:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
loc_8220C548:
	// ble cr6,0x8220c568
	if (!cr6.gt) goto loc_8220C568;
	// addi r4,r30,-64
	ctx.r4.s64 = r30.s64 + -64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// addi r4,r30,-63
	ctx.r4.s64 = r30.s64 + -63;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
loc_8220C564:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_8220C568:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// ble cr6,0x8220c5ec
	if (!cr6.gt) goto loc_8220C5EC;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-56
	ctx.r4.s64 = r30.s64 + -56;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-52
	ctx.r4.s64 = r30.s64 + -52;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-60
	ctx.r4.s64 = r30.s64 + -60;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-48
	ctx.r4.s64 = r30.s64 + -48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,-60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -60);
	f0.f64 = double(temp.f32);
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8220c5d4
	if (!cr6.gt) goto loc_8220C5D4;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,-25364(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// b 0x8220c5dc
	goto loc_8220C5DC;
loc_8220C5D4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
loc_8220C5DC:
	// stfs f0,-12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + -12, temp.u32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stfs f0,-8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + -8, temp.u32);
loc_8220C5EC:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// ble cr6,0x8220c684
	if (!cr6.gt) goto loc_8220C684;
	// addi r4,r30,-44
	ctx.r4.s64 = r30.s64 + -44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d7930
	sub_821D7930(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// ble cr6,0x8220c61c
	if (!cr6.gt) goto loc_8220C61C;
	// addi r4,r30,-32
	ctx.r4.s64 = r30.s64 + -32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821539d0
	sub_821539D0(ctx, base);
	// b 0x8220c684
	goto loc_8220C684;
loc_8220C61C:
	// addic. r11,r30,-268
	xer.ca = r30.u32 > 267;
	r11.s64 = r30.s64 + -268;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8220c62c
	if (!cr0.eq) goto loc_8220C62C;
	// li r11,0
	r11.s64 = 0;
	// b 0x8220c63c
	goto loc_8220C63C;
loc_8220C62C:
	// lwz r11,-264(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -264);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-264
	r11.s64 = r11.s64 + -264;
loc_8220C63C:
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,-4892
	r11.s64 = r11.s64 + -4892;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821db088
	sub_821DB088(ctx, base);
	// lwz r6,120(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8220c67c
	if (cr6.eq) goto loc_8220C67C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,-32
	ctx.r4.s64 = r30.s64 + -32;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x82151040
	sub_82151040(ctx, base);
loc_8220C67C:
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x821dae68
	sub_821DAE68(ctx, base);
loc_8220C684:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8220C3E8"))) PPC_WEAK_FUNC(sub_8220C3E8);
PPC_FUNC_IMPL(__imp__sub_8220C3E8) {
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r11,14196(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14196);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bgt cr6,0x8220c684
	if (cr6.gt) goto loc_8220C684;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// ble cr6,0x8220c444
	if (!cr6.gt) goto loc_8220C444;
	// lwz r11,-264(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -264);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-264
	ctx.r3.s64 = r11.s64 + -264;
	// bl 0x82315350
	sub_82315350(ctx, base);
loc_8220C444:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-84
	ctx.r3.s64 = r30.s64 + -84;
	// bl 0x821b0a28
	sub_821B0A28(ctx, base);
	// addi r4,r30,-88
	ctx.r4.s64 = r30.s64 + -88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x8220c480
	if (!cr6.lt) goto loc_8220C480;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r31,144
	r28.s64 = r31.s64 + 144;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
loc_8220C480:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x8220c4ac
	if (!cr6.lt) goto loc_8220C4AC;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,92
	ctx.r4.s64 = r31.s64 + 92;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_8220C4AC:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-72
	ctx.r4.s64 = r30.s64 + -72;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x8220c4fc
	if (!cr6.lt) goto loc_8220C4FC;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,100
	ctx.r4.s64 = r31.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_8220C4FC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8220c518
	if (!cr6.gt) goto loc_8220C518;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-68
	ctx.r4.s64 = r30.s64 + -68;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_8220C518:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x8220c544
	if (!cr6.gt) goto loc_8220C544;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bge cr6,0x8220c548
	if (!cr6.lt) goto loc_8220C548;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// stb r11,-64(r30)
	PPC_STORE_U8(r30.u32 + -64, r11.u8);
	// stb r11,-63(r30)
	PPC_STORE_U8(r30.u32 + -63, r11.u8);
	// b 0x8220c564
	goto loc_8220C564;
loc_8220C544:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
loc_8220C548:
	// ble cr6,0x8220c568
	if (!cr6.gt) goto loc_8220C568;
	// addi r4,r30,-64
	ctx.r4.s64 = r30.s64 + -64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// addi r4,r30,-63
	ctx.r4.s64 = r30.s64 + -63;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
loc_8220C564:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_8220C568:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// ble cr6,0x8220c5ec
	if (!cr6.gt) goto loc_8220C5EC;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-56
	ctx.r4.s64 = r30.s64 + -56;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-52
	ctx.r4.s64 = r30.s64 + -52;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-60
	ctx.r4.s64 = r30.s64 + -60;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-48
	ctx.r4.s64 = r30.s64 + -48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,-60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -60);
	f0.f64 = double(temp.f32);
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8220c5d4
	if (!cr6.gt) goto loc_8220C5D4;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,-25364(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// b 0x8220c5dc
	goto loc_8220C5DC;
loc_8220C5D4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
loc_8220C5DC:
	// stfs f0,-12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + -12, temp.u32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stfs f0,-8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + -8, temp.u32);
loc_8220C5EC:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// ble cr6,0x8220c684
	if (!cr6.gt) goto loc_8220C684;
	// addi r4,r30,-44
	ctx.r4.s64 = r30.s64 + -44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d7930
	sub_821D7930(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// ble cr6,0x8220c61c
	if (!cr6.gt) goto loc_8220C61C;
	// addi r4,r30,-32
	ctx.r4.s64 = r30.s64 + -32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821539d0
	sub_821539D0(ctx, base);
	// b 0x8220c684
	goto loc_8220C684;
loc_8220C61C:
	// addic. r11,r30,-268
	xer.ca = r30.u32 > 267;
	r11.s64 = r30.s64 + -268;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8220c62c
	if (!cr0.eq) goto loc_8220C62C;
	// li r11,0
	r11.s64 = 0;
	// b 0x8220c63c
	goto loc_8220C63C;
loc_8220C62C:
	// lwz r11,-264(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -264);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-264
	r11.s64 = r11.s64 + -264;
loc_8220C63C:
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,-4892
	r11.s64 = r11.s64 + -4892;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821db088
	sub_821DB088(ctx, base);
	// lwz r6,120(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8220c67c
	if (cr6.eq) goto loc_8220C67C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,-32
	ctx.r4.s64 = r30.s64 + -32;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x82151040
	sub_82151040(ctx, base);
loc_8220C67C:
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x821dae68
	sub_821DAE68(ctx, base);
loc_8220C684:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8220C68C"))) PPC_WEAK_FUNC(sub_8220C68C);
PPC_FUNC_IMPL(__imp__sub_8220C68C) {
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

__attribute__((alias("__imp__sub_8220C6B4"))) PPC_WEAK_FUNC(sub_8220C6B4);
PPC_FUNC_IMPL(__imp__sub_8220C6B4) {
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

__attribute__((alias("__imp__sub_8220C6DC"))) PPC_WEAK_FUNC(sub_8220C6DC);
PPC_FUNC_IMPL(__imp__sub_8220C6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220C6E0"))) PPC_WEAK_FUNC(sub_8220C6E0);
PPC_FUNC_IMPL(__imp__sub_8220C6E0) {
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
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r6,r11,10732
	ctx.r6.s64 = r11.s64 + 10732;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r5,r11,920
	ctx.r5.s64 = r11.s64 + 920;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// lwz r11,-264(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -264);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-264
	ctx.r3.s64 = r11.s64 + -264;
	// bl 0x82315258
	sub_82315258(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,-84
	ctx.r3.s64 = r31.s64 + -84;
	// bl 0x821b0908
	sub_821B0908(ctx, base);
	// addi r11,r30,180
	r11.s64 = r30.s64 + 180;
	// addi r10,r31,-88
	ctx.r10.s64 = r31.s64 + -88;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
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
	// lwz r11,200(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 200);
	// stw r11,-68(r31)
	PPC_STORE_U32(r31.u32 + -68, r11.u32);
	// lbz r11,204(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 204);
	// stb r11,-64(r31)
	PPC_STORE_U8(r31.u32 + -64, r11.u8);
	// lbz r11,205(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 205);
	// stb r11,-63(r31)
	PPC_STORE_U8(r31.u32 + -63, r11.u8);
	// beq cr6,0x8220c798
	if (cr6.eq) goto loc_8220C798;
	// lfs f0,196(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 196);
	f0.f64 = double(temp.f32);
	// stfs f0,-72(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -72, temp.u32);
loc_8220C798:
	// lfs f0,208(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 208);
	f0.f64 = double(temp.f32);
	// addi r3,r31,-44
	ctx.r3.s64 = r31.s64 + -44;
	// stfs f0,-60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -60, temp.u32);
	// lfs f0,212(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 212);
	f0.f64 = double(temp.f32);
	// stfs f0,-56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -56, temp.u32);
	// lfs f0,216(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 216);
	f0.f64 = double(temp.f32);
	// stfs f0,-52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -52, temp.u32);
	// lfs f0,220(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 220);
	f0.f64 = double(temp.f32);
	// stfs f0,-48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -48, temp.u32);
	// lfs f0,256(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 256);
	f0.f64 = double(temp.f32);
	// stfs f0,-12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -12, temp.u32);
	// lfs f0,260(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 260);
	f0.f64 = double(temp.f32);
	// stfs f0,-8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -8, temp.u32);
	// lwz r4,232(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// bl 0x821c55d0
	sub_821C55D0(ctx, base);
	// addi r4,r30,236
	ctx.r4.s64 = r30.s64 + 236;
	// addi r3,r31,-32
	ctx.r3.s64 = r31.s64 + -32;
	// bl 0x8220bc88
	sub_8220BC88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8220C7E8"))) PPC_WEAK_FUNC(sub_8220C7E8);
PPC_FUNC_IMPL(__imp__sub_8220C7E8) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x8220bc30
	sub_8220BC30(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,188(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f12,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fdivs f0,f0,f1
	f0.f64 = double(float(f0.f64 / ctx.f1.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lfs f0,-30144(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -30144);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// fctiwz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r3,r11,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220C87C"))) PPC_WEAK_FUNC(sub_8220C87C);
PPC_FUNC_IMPL(__imp__sub_8220C87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220C880"))) PPC_WEAK_FUNC(sub_8220C880);
PPC_FUNC_IMPL(__imp__sub_8220C880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	// lwz r16,27352(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 27352);
	// mflr r12
	// bl 0x8239bcec
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,13040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13040);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13036
	r29.s64 = ctx.r10.s64 + 13036;
	// bne 0x8220c8f0
	if (!cr0.eq) goto loc_8220C8F0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,13040(r30)
	PPC_STORE_U32(r30.u32 + 13040, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,27172
	ctx.r4.s64 = r11.s64 + 27172;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13040);
loc_8220C8F0:
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
	// beq 0x8220c924
	if (cr0.eq) goto loc_8220C924;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,-64
	ctx.r3.s64 = r28.s64 + -64;
loc_8220C91C:
	// bl 0x8212de00
	sub_8212DE00(ctx, base);
	// b 0x8220cf6c
	goto loc_8220CF6C;
loc_8220C924:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13032
	r29.s64 = ctx.r10.s64 + 13032;
	// bne 0x8220c950
	if (!cr0.eq) goto loc_8220C950;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,13040(r30)
	PPC_STORE_U32(r30.u32 + 13040, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,27140
	ctx.r4.s64 = r11.s64 + 27140;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13040);
loc_8220C950:
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
	// beq 0x8220c980
	if (cr0.eq) goto loc_8220C980;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,-63
	ctx.r3.s64 = r28.s64 + -63;
	// b 0x8220c91c
	goto loc_8220C91C;
loc_8220C980:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13028
	r29.s64 = ctx.r10.s64 + 13028;
	// bne 0x8220c9ac
	if (!cr0.eq) goto loc_8220C9AC;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,13040(r30)
	PPC_STORE_U32(r30.u32 + 13040, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,24272
	ctx.r4.s64 = r11.s64 + 24272;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13040);
loc_8220C9AC:
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
	// beq 0x8220ca30
	if (cr0.eq) goto loc_8220CA30;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8220c9f8
	if (!cr6.eq) goto loc_8220C9F8;
	// addi r30,r28,-268
	r30.s64 = r28.s64 + -268;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8220ca28
	goto loc_8220CA28;
loc_8220C9F8:
	// lwz r11,-68(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -68);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220ca28
	if (cr0.eq) goto loc_8220CA28;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_8220CA24:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8220CA28:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220cf6c
	goto loc_8220CF6C;
loc_8220CA30:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13024
	r29.s64 = ctx.r10.s64 + 13024;
	// bne 0x8220ca5c
	if (!cr0.eq) goto loc_8220CA5C;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,13040(r30)
	PPC_STORE_U32(r30.u32 + 13040, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31076
	ctx.r4.s64 = r11.s64 + 31076;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13040);
loc_8220CA5C:
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
	// beq 0x8220cad4
	if (cr0.eq) goto loc_8220CAD4;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8220caa4
	if (!cr6.eq) goto loc_8220CAA4;
	// addi r30,r28,-268
	r30.s64 = r28.s64 + -268;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8220ca28
	goto loc_8220CA28;
loc_8220CAA4:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-72(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -72);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220ca28
	if (cr0.eq) goto loc_8220CA28;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x8220ca24
	goto loc_8220CA24;
loc_8220CAD4:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13020
	r29.s64 = ctx.r10.s64 + 13020;
	// bne 0x8220cb00
	if (!cr0.eq) goto loc_8220CB00;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,13040(r30)
	PPC_STORE_U32(r30.u32 + 13040, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19376
	ctx.r4.s64 = r11.s64 + 19376;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13040);
loc_8220CB00:
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
	// beq 0x8220cb84
	if (cr0.eq) goto loc_8220CB84;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8220cb50
	if (!cr6.eq) goto loc_8220CB50;
	// addi r30,r28,-268
	r30.s64 = r28.s64 + -268;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8220bc30
	sub_8220BC30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_8220CB40:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8220b220
	sub_8220B220(ctx, base);
	// b 0x8220ca28
	goto loc_8220CA28;
loc_8220CB50:
	// addi r3,r28,-268
	ctx.r3.s64 = r28.s64 + -268;
	// bl 0x8220c7e8
	sub_8220C7E8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220ca28
	if (cr0.eq) goto loc_8220CA28;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x8220ca24
	goto loc_8220CA24;
loc_8220CB84:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13016
	r29.s64 = ctx.r10.s64 + 13016;
	// bne 0x8220cbb0
	if (!cr0.eq) goto loc_8220CBB0;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,13040(r30)
	PPC_STORE_U32(r30.u32 + 13040, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7912
	ctx.r4.s64 = r11.s64 + 7912;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13040);
loc_8220CBB0:
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
	// beq 0x8220cc28
	if (cr0.eq) goto loc_8220CC28;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8220cbf4
	if (!cr6.eq) goto loc_8220CBF4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r30,r28,-268
	r30.s64 = r28.s64 + -268;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f1.f64;
	// bl 0x8220c7e8
	sub_8220C7E8(ctx, base);
	// fmr f1,f10
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f10.f64;
	// b 0x8220cb40
	goto loc_8220CB40;
loc_8220CBF4:
	// addi r3,r28,-268
	ctx.r3.s64 = r28.s64 + -268;
	// bl 0x8220bc30
	sub_8220BC30(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stfs f1,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220ca28
	if (cr0.eq) goto loc_8220CA28;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x8220ca24
	goto loc_8220CA24;
loc_8220CC28:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13012
	r29.s64 = ctx.r10.s64 + 13012;
	// bne 0x8220cc54
	if (!cr0.eq) goto loc_8220CC54;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,13040(r30)
	PPC_STORE_U32(r30.u32 + 13040, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,27128
	ctx.r4.s64 = r11.s64 + 27128;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13040);
loc_8220CC54:
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
	// beq 0x8220ccf0
	if (cr0.eq) goto loc_8220CCF0;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8220ccc0
	if (!cr6.eq) goto loc_8220CCC0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,-56(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r28.u32 + -56, temp.u32);
loc_8220CC84:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,-60(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -60);
	f0.f64 = double(temp.f32);
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8220cca8
	if (!cr6.gt) goto loc_8220CCA8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,-25364(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// b 0x8220ccb0
	goto loc_8220CCB0;
loc_8220CCA8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
loc_8220CCB0:
	// stfs f0,-12(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + -12, temp.u32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,-8(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + -8, temp.u32);
	// b 0x8220ca28
	goto loc_8220CA28;
loc_8220CCC0:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-56(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -56);
	f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220ca28
	if (cr0.eq) goto loc_8220CA28;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x8220ca24
	goto loc_8220CA24;
loc_8220CCF0:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13008
	r29.s64 = ctx.r10.s64 + 13008;
	// bne 0x8220cd1c
	if (!cr0.eq) goto loc_8220CD1C;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,13040(r30)
	PPC_STORE_U32(r30.u32 + 13040, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,27116
	ctx.r4.s64 = r11.s64 + 27116;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13040);
loc_8220CD1C:
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
	// beq 0x8220cd80
	if (cr0.eq) goto loc_8220CD80;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8220cd50
	if (!cr6.eq) goto loc_8220CD50;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,-52(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r28.u32 + -52, temp.u32);
	// b 0x8220cc84
	goto loc_8220CC84;
loc_8220CD50:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-52(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -52);
	f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220ca28
	if (cr0.eq) goto loc_8220CA28;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x8220ca24
	goto loc_8220CA24;
loc_8220CD80:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13004
	r29.s64 = ctx.r10.s64 + 13004;
	// bne 0x8220cdac
	if (!cr0.eq) goto loc_8220CDAC;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,13040(r30)
	PPC_STORE_U32(r30.u32 + 13040, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,27104
	ctx.r4.s64 = r11.s64 + 27104;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13040);
loc_8220CDAC:
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
	// beq 0x8220ce2c
	if (cr0.eq) goto loc_8220CE2C;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8220cdfc
	if (!cr6.eq) goto loc_8220CDFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f1,-60(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r28.u32 + -60, temp.u32);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x8220cca8
	if (!cr6.gt) goto loc_8220CCA8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-25364(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f1
	f0.f64 = double(float(f0.f64 / ctx.f1.f64));
	// b 0x8220ccb0
	goto loc_8220CCB0;
loc_8220CDFC:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-60(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -60);
	f0.f64 = double(temp.f32);
	// stfs f0,136(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220ca28
	if (cr0.eq) goto loc_8220CA28;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x8220ca24
	goto loc_8220CA24;
loc_8220CE2C:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13000
	r29.s64 = ctx.r10.s64 + 13000;
	// bne 0x8220ce58
	if (!cr0.eq) goto loc_8220CE58;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,13040(r30)
	PPC_STORE_U32(r30.u32 + 13040, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,27088
	ctx.r4.s64 = r11.s64 + 27088;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13040);
loc_8220CE58:
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
	// beq 0x8220ce8c
	if (cr0.eq) goto loc_8220CE8C;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,-48
	ctx.r3.s64 = r28.s64 + -48;
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x8220cf6c
	goto loc_8220CF6C;
loc_8220CE8C:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12996
	r29.s64 = ctx.r10.s64 + 12996;
	// bne 0x8220ceb8
	if (!cr0.eq) goto loc_8220CEB8;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,13040(r30)
	PPC_STORE_U32(r30.u32 + 13040, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,27080
	ctx.r4.s64 = r11.s64 + 27080;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13040);
loc_8220CEB8:
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
	// beq 0x8220ceec
	if (cr0.eq) goto loc_8220CEEC;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,-44
	ctx.r3.s64 = r28.s64 + -44;
	// bl 0x821eaef0
	sub_821EAEF0(ctx, base);
	// b 0x8220cf6c
	goto loc_8220CF6C;
loc_8220CEEC:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12992
	r29.s64 = ctx.r10.s64 + 12992;
	// bne 0x8220cf14
	if (!cr0.eq) goto loc_8220CF14;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,13040(r30)
	PPC_STORE_U32(r30.u32 + 13040, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,27064
	ctx.r4.s64 = r11.s64 + 27064;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8220CF14:
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
	// beq 0x8220cf48
	if (cr0.eq) goto loc_8220CF48;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,-32
	ctx.r3.s64 = r28.s64 + -32;
	// bl 0x8220bd58
	sub_8220BD58(ctx, base);
	// b 0x8220cf6c
	goto loc_8220CF6C;
loc_8220CF48:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r28,-84
	ctx.r3.s64 = r28.s64 + -84;
	// bl 0x821aec48
	sub_821AEC48(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_8220CF6C:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8220C888"))) PPC_WEAK_FUNC(sub_8220C888);
PPC_FUNC_IMPL(__imp__sub_8220C888) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,13040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13040);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13036
	r29.s64 = ctx.r10.s64 + 13036;
	// bne 0x8220c8f0
	if (!cr0.eq) goto loc_8220C8F0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,13040(r30)
	PPC_STORE_U32(r30.u32 + 13040, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,27172
	ctx.r4.s64 = r11.s64 + 27172;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13040);
loc_8220C8F0:
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
	// beq 0x8220c924
	if (cr0.eq) goto loc_8220C924;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,-64
	ctx.r3.s64 = r28.s64 + -64;
loc_8220C91C:
	// bl 0x8212de00
	sub_8212DE00(ctx, base);
	// b 0x8220cf6c
	goto loc_8220CF6C;
loc_8220C924:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13032
	r29.s64 = ctx.r10.s64 + 13032;
	// bne 0x8220c950
	if (!cr0.eq) goto loc_8220C950;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,13040(r30)
	PPC_STORE_U32(r30.u32 + 13040, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,27140
	ctx.r4.s64 = r11.s64 + 27140;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13040);
loc_8220C950:
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
	// beq 0x8220c980
	if (cr0.eq) goto loc_8220C980;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,-63
	ctx.r3.s64 = r28.s64 + -63;
	// b 0x8220c91c
	goto loc_8220C91C;
loc_8220C980:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13028
	r29.s64 = ctx.r10.s64 + 13028;
	// bne 0x8220c9ac
	if (!cr0.eq) goto loc_8220C9AC;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,13040(r30)
	PPC_STORE_U32(r30.u32 + 13040, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,24272
	ctx.r4.s64 = r11.s64 + 24272;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13040);
loc_8220C9AC:
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
	// beq 0x8220ca30
	if (cr0.eq) goto loc_8220CA30;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8220c9f8
	if (!cr6.eq) goto loc_8220C9F8;
	// addi r30,r28,-268
	r30.s64 = r28.s64 + -268;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8220ca28
	goto loc_8220CA28;
loc_8220C9F8:
	// lwz r11,-68(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -68);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220ca28
	if (cr0.eq) goto loc_8220CA28;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_8220CA24:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8220CA28:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220cf6c
	goto loc_8220CF6C;
loc_8220CA30:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13024
	r29.s64 = ctx.r10.s64 + 13024;
	// bne 0x8220ca5c
	if (!cr0.eq) goto loc_8220CA5C;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,13040(r30)
	PPC_STORE_U32(r30.u32 + 13040, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31076
	ctx.r4.s64 = r11.s64 + 31076;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13040);
loc_8220CA5C:
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
	// beq 0x8220cad4
	if (cr0.eq) goto loc_8220CAD4;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8220caa4
	if (!cr6.eq) goto loc_8220CAA4;
	// addi r30,r28,-268
	r30.s64 = r28.s64 + -268;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8220ca28
	goto loc_8220CA28;
loc_8220CAA4:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-72(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -72);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220ca28
	if (cr0.eq) goto loc_8220CA28;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x8220ca24
	goto loc_8220CA24;
loc_8220CAD4:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13020
	r29.s64 = ctx.r10.s64 + 13020;
	// bne 0x8220cb00
	if (!cr0.eq) goto loc_8220CB00;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,13040(r30)
	PPC_STORE_U32(r30.u32 + 13040, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19376
	ctx.r4.s64 = r11.s64 + 19376;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13040);
loc_8220CB00:
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
	// beq 0x8220cb84
	if (cr0.eq) goto loc_8220CB84;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8220cb50
	if (!cr6.eq) goto loc_8220CB50;
	// addi r30,r28,-268
	r30.s64 = r28.s64 + -268;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8220bc30
	sub_8220BC30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_8220CB40:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8220b220
	sub_8220B220(ctx, base);
	// b 0x8220ca28
	goto loc_8220CA28;
loc_8220CB50:
	// addi r3,r28,-268
	ctx.r3.s64 = r28.s64 + -268;
	// bl 0x8220c7e8
	sub_8220C7E8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220ca28
	if (cr0.eq) goto loc_8220CA28;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x8220ca24
	goto loc_8220CA24;
loc_8220CB84:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13016
	r29.s64 = ctx.r10.s64 + 13016;
	// bne 0x8220cbb0
	if (!cr0.eq) goto loc_8220CBB0;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,13040(r30)
	PPC_STORE_U32(r30.u32 + 13040, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7912
	ctx.r4.s64 = r11.s64 + 7912;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13040);
loc_8220CBB0:
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
	// beq 0x8220cc28
	if (cr0.eq) goto loc_8220CC28;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8220cbf4
	if (!cr6.eq) goto loc_8220CBF4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r30,r28,-268
	r30.s64 = r28.s64 + -268;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f1.f64;
	// bl 0x8220c7e8
	sub_8220C7E8(ctx, base);
	// fmr f1,f10
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f10.f64;
	// b 0x8220cb40
	goto loc_8220CB40;
loc_8220CBF4:
	// addi r3,r28,-268
	ctx.r3.s64 = r28.s64 + -268;
	// bl 0x8220bc30
	sub_8220BC30(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stfs f1,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220ca28
	if (cr0.eq) goto loc_8220CA28;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x8220ca24
	goto loc_8220CA24;
loc_8220CC28:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13012
	r29.s64 = ctx.r10.s64 + 13012;
	// bne 0x8220cc54
	if (!cr0.eq) goto loc_8220CC54;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,13040(r30)
	PPC_STORE_U32(r30.u32 + 13040, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,27128
	ctx.r4.s64 = r11.s64 + 27128;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13040);
loc_8220CC54:
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
	// beq 0x8220ccf0
	if (cr0.eq) goto loc_8220CCF0;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8220ccc0
	if (!cr6.eq) goto loc_8220CCC0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,-56(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r28.u32 + -56, temp.u32);
loc_8220CC84:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,-60(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -60);
	f0.f64 = double(temp.f32);
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8220cca8
	if (!cr6.gt) goto loc_8220CCA8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,-25364(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// b 0x8220ccb0
	goto loc_8220CCB0;
loc_8220CCA8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
loc_8220CCB0:
	// stfs f0,-12(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + -12, temp.u32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,-8(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + -8, temp.u32);
	// b 0x8220ca28
	goto loc_8220CA28;
loc_8220CCC0:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-56(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -56);
	f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220ca28
	if (cr0.eq) goto loc_8220CA28;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x8220ca24
	goto loc_8220CA24;
loc_8220CCF0:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13008
	r29.s64 = ctx.r10.s64 + 13008;
	// bne 0x8220cd1c
	if (!cr0.eq) goto loc_8220CD1C;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,13040(r30)
	PPC_STORE_U32(r30.u32 + 13040, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,27116
	ctx.r4.s64 = r11.s64 + 27116;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13040);
loc_8220CD1C:
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
	// beq 0x8220cd80
	if (cr0.eq) goto loc_8220CD80;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8220cd50
	if (!cr6.eq) goto loc_8220CD50;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,-52(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r28.u32 + -52, temp.u32);
	// b 0x8220cc84
	goto loc_8220CC84;
loc_8220CD50:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-52(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -52);
	f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220ca28
	if (cr0.eq) goto loc_8220CA28;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x8220ca24
	goto loc_8220CA24;
loc_8220CD80:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13004
	r29.s64 = ctx.r10.s64 + 13004;
	// bne 0x8220cdac
	if (!cr0.eq) goto loc_8220CDAC;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,13040(r30)
	PPC_STORE_U32(r30.u32 + 13040, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,27104
	ctx.r4.s64 = r11.s64 + 27104;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13040);
loc_8220CDAC:
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
	// beq 0x8220ce2c
	if (cr0.eq) goto loc_8220CE2C;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8220cdfc
	if (!cr6.eq) goto loc_8220CDFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f1,-60(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r28.u32 + -60, temp.u32);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x8220cca8
	if (!cr6.gt) goto loc_8220CCA8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-25364(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f1
	f0.f64 = double(float(f0.f64 / ctx.f1.f64));
	// b 0x8220ccb0
	goto loc_8220CCB0;
loc_8220CDFC:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-60(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -60);
	f0.f64 = double(temp.f32);
	// stfs f0,136(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220ca28
	if (cr0.eq) goto loc_8220CA28;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x8220ca24
	goto loc_8220CA24;
loc_8220CE2C:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13000
	r29.s64 = ctx.r10.s64 + 13000;
	// bne 0x8220ce58
	if (!cr0.eq) goto loc_8220CE58;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,13040(r30)
	PPC_STORE_U32(r30.u32 + 13040, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,27088
	ctx.r4.s64 = r11.s64 + 27088;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13040);
loc_8220CE58:
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
	// beq 0x8220ce8c
	if (cr0.eq) goto loc_8220CE8C;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,-48
	ctx.r3.s64 = r28.s64 + -48;
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x8220cf6c
	goto loc_8220CF6C;
loc_8220CE8C:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12996
	r29.s64 = ctx.r10.s64 + 12996;
	// bne 0x8220ceb8
	if (!cr0.eq) goto loc_8220CEB8;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,13040(r30)
	PPC_STORE_U32(r30.u32 + 13040, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,27080
	ctx.r4.s64 = r11.s64 + 27080;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13040);
loc_8220CEB8:
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
	// beq 0x8220ceec
	if (cr0.eq) goto loc_8220CEEC;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,-44
	ctx.r3.s64 = r28.s64 + -44;
	// bl 0x821eaef0
	sub_821EAEF0(ctx, base);
	// b 0x8220cf6c
	goto loc_8220CF6C;
loc_8220CEEC:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,12992
	r29.s64 = ctx.r10.s64 + 12992;
	// bne 0x8220cf14
	if (!cr0.eq) goto loc_8220CF14;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,13040(r30)
	PPC_STORE_U32(r30.u32 + 13040, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,27064
	ctx.r4.s64 = r11.s64 + 27064;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8220CF14:
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
	// beq 0x8220cf48
	if (cr0.eq) goto loc_8220CF48;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,-32
	ctx.r3.s64 = r28.s64 + -32;
	// bl 0x8220bd58
	sub_8220BD58(ctx, base);
	// b 0x8220cf6c
	goto loc_8220CF6C;
loc_8220CF48:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r28,-84
	ctx.r3.s64 = r28.s64 + -84;
	// bl 0x821aec48
	sub_821AEC48(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_8220CF6C:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8220CF78"))) PPC_WEAK_FUNC(sub_8220CF78);
PPC_FUNC_IMPL(__imp__sub_8220CF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13040
	r11.s64 = r11.s64 + 13040;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13040
	ctx.r10.s64 = ctx.r10.s64 + 13040;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220CFA0"))) PPC_WEAK_FUNC(sub_8220CFA0);
PPC_FUNC_IMPL(__imp__sub_8220CFA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13040
	r11.s64 = r11.s64 + 13040;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13040
	ctx.r10.s64 = ctx.r10.s64 + 13040;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220CFC8"))) PPC_WEAK_FUNC(sub_8220CFC8);
PPC_FUNC_IMPL(__imp__sub_8220CFC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13040
	r11.s64 = r11.s64 + 13040;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13040
	ctx.r10.s64 = ctx.r10.s64 + 13040;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220CFF0"))) PPC_WEAK_FUNC(sub_8220CFF0);
PPC_FUNC_IMPL(__imp__sub_8220CFF0) {
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

__attribute__((alias("__imp__sub_8220D018"))) PPC_WEAK_FUNC(sub_8220D018);
PPC_FUNC_IMPL(__imp__sub_8220D018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13040
	r11.s64 = r11.s64 + 13040;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13040
	ctx.r10.s64 = ctx.r10.s64 + 13040;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220D040"))) PPC_WEAK_FUNC(sub_8220D040);
PPC_FUNC_IMPL(__imp__sub_8220D040) {
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

__attribute__((alias("__imp__sub_8220D068"))) PPC_WEAK_FUNC(sub_8220D068);
PPC_FUNC_IMPL(__imp__sub_8220D068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13040
	r11.s64 = r11.s64 + 13040;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13040
	ctx.r10.s64 = ctx.r10.s64 + 13040;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220D090"))) PPC_WEAK_FUNC(sub_8220D090);
PPC_FUNC_IMPL(__imp__sub_8220D090) {
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

__attribute__((alias("__imp__sub_8220D0B8"))) PPC_WEAK_FUNC(sub_8220D0B8);
PPC_FUNC_IMPL(__imp__sub_8220D0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13040
	r11.s64 = r11.s64 + 13040;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13040
	ctx.r10.s64 = ctx.r10.s64 + 13040;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220D0E0"))) PPC_WEAK_FUNC(sub_8220D0E0);
PPC_FUNC_IMPL(__imp__sub_8220D0E0) {
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

__attribute__((alias("__imp__sub_8220D108"))) PPC_WEAK_FUNC(sub_8220D108);
PPC_FUNC_IMPL(__imp__sub_8220D108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13040
	r11.s64 = r11.s64 + 13040;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13040
	ctx.r10.s64 = ctx.r10.s64 + 13040;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220D130"))) PPC_WEAK_FUNC(sub_8220D130);
PPC_FUNC_IMPL(__imp__sub_8220D130) {
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

__attribute__((alias("__imp__sub_8220D158"))) PPC_WEAK_FUNC(sub_8220D158);
PPC_FUNC_IMPL(__imp__sub_8220D158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13040
	r11.s64 = r11.s64 + 13040;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13040
	ctx.r10.s64 = ctx.r10.s64 + 13040;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220D180"))) PPC_WEAK_FUNC(sub_8220D180);
PPC_FUNC_IMPL(__imp__sub_8220D180) {
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

__attribute__((alias("__imp__sub_8220D1A8"))) PPC_WEAK_FUNC(sub_8220D1A8);
PPC_FUNC_IMPL(__imp__sub_8220D1A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13040
	r11.s64 = r11.s64 + 13040;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13040
	ctx.r10.s64 = ctx.r10.s64 + 13040;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220D1D0"))) PPC_WEAK_FUNC(sub_8220D1D0);
PPC_FUNC_IMPL(__imp__sub_8220D1D0) {
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

__attribute__((alias("__imp__sub_8220D1F8"))) PPC_WEAK_FUNC(sub_8220D1F8);
PPC_FUNC_IMPL(__imp__sub_8220D1F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13040
	r11.s64 = r11.s64 + 13040;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13040
	ctx.r10.s64 = ctx.r10.s64 + 13040;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220D220"))) PPC_WEAK_FUNC(sub_8220D220);
PPC_FUNC_IMPL(__imp__sub_8220D220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13040
	r11.s64 = r11.s64 + 13040;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,22,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13040
	ctx.r10.s64 = ctx.r10.s64 + 13040;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220D248"))) PPC_WEAK_FUNC(sub_8220D248);
PPC_FUNC_IMPL(__imp__sub_8220D248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13040
	r11.s64 = r11.s64 + 13040;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,21,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13040
	ctx.r10.s64 = ctx.r10.s64 + 13040;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220D270"))) PPC_WEAK_FUNC(sub_8220D270);
PPC_FUNC_IMPL(__imp__sub_8220D270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8220c6e0
	sub_8220C6E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220D27C"))) PPC_WEAK_FUNC(sub_8220D27C);
PPC_FUNC_IMPL(__imp__sub_8220D27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220D280"))) PPC_WEAK_FUNC(sub_8220D280);
PPC_FUNC_IMPL(__imp__sub_8220D280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8220c3e8
	sub_8220C3E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220D28C"))) PPC_WEAK_FUNC(sub_8220D28C);
PPC_FUNC_IMPL(__imp__sub_8220D28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220D290"))) PPC_WEAK_FUNC(sub_8220D290);
PPC_FUNC_IMPL(__imp__sub_8220D290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8220c888
	sub_8220C888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220D29C"))) PPC_WEAK_FUNC(sub_8220D29C);
PPC_FUNC_IMPL(__imp__sub_8220D29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220D2A0"))) PPC_WEAK_FUNC(sub_8220D2A0);
PPC_FUNC_IMPL(__imp__sub_8220D2A0) {
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
	// addi r30,r3,-268
	r30.s64 = ctx.r3.s64 + -268;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,268
	r31.s64 = r30.s64 + 268;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8220c330
	sub_8220C330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220d2d8
	if (cr0.eq) goto loc_8220D2D8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_8220D2D8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8220D2E4"))) PPC_WEAK_FUNC(sub_8220D2E4);
PPC_FUNC_IMPL(__imp__sub_8220D2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220D2E8"))) PPC_WEAK_FUNC(sub_8220D2E8);
PPC_FUNC_IMPL(__imp__sub_8220D2E8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-76
	ctx.r3.s64 = r30.s64 + -76;
	// bl 0x821aec48
	sub_821AEC48(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220d338
	if (cr0.eq) goto loc_8220D338;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220d35c
	goto loc_8220D35C;
loc_8220D338:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x821b3420
	sub_821B3420(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_8220D35C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8220D364"))) PPC_WEAK_FUNC(sub_8220D364);
PPC_FUNC_IMPL(__imp__sub_8220D364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220D368"))) PPC_WEAK_FUNC(sub_8220D368);
PPC_FUNC_IMPL(__imp__sub_8220D368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r2{};
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
	// lwz r16,27840(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 27840);
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r10,r10,27788
	ctx.r10.s64 = ctx.r10.s64 + 27788;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r30,-260
	ctx.r4.s64 = r30.s64 + -260;
	// addi r11,r11,27780
	r11.s64 = r11.s64 + 27780;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r10,-80(r30)
	PPC_STORE_U32(r30.u32 + -80, ctx.r10.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r10,-256(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -256);
	// addi r9,r9,27716
	ctx.r9.s64 = ctx.r9.s64 + 27716;
	// addi r8,r8,27708
	ctx.r8.s64 = ctx.r8.s64 + 27708;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,-256(r11)
	PPC_STORE_U32(r11.u32 + -256, ctx.r9.u32);
	// lwz r11,-256(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -256);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,-256(r11)
	PPC_STORE_U32(r11.u32 + -256, ctx.r8.u32);
	// lwz r11,-256(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -256);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-256
	ctx.r10.s64 = r11.s64 + -256;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-260(r11)
	PPC_STORE_U32(r11.u32 + -260, ctx.r10.u32);
	// lwz r11,-256(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -256);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-300
	ctx.r10.s64 = r11.s64 + -300;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-260(r11)
	PPC_STORE_U32(r11.u32 + -260, ctx.r10.u32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,27088(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 27088);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r30,-32
	ctx.r3.s64 = r30.s64 + -32;
	// bl 0x821266e8
	sub_821266E8(ctx, base);
	// addi r3,r30,-76
	ctx.r3.s64 = r30.s64 + -76;
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

__attribute__((alias("__imp__sub_8220D370"))) PPC_WEAK_FUNC(sub_8220D370);
PPC_FUNC_IMPL(__imp__sub_8220D370) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r10,r10,27788
	ctx.r10.s64 = ctx.r10.s64 + 27788;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r30,-260
	ctx.r4.s64 = r30.s64 + -260;
	// addi r11,r11,27780
	r11.s64 = r11.s64 + 27780;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r10,-80(r30)
	PPC_STORE_U32(r30.u32 + -80, ctx.r10.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r10,-256(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -256);
	// addi r9,r9,27716
	ctx.r9.s64 = ctx.r9.s64 + 27716;
	// addi r8,r8,27708
	ctx.r8.s64 = ctx.r8.s64 + 27708;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,-256(r11)
	PPC_STORE_U32(r11.u32 + -256, ctx.r9.u32);
	// lwz r11,-256(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -256);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,-256(r11)
	PPC_STORE_U32(r11.u32 + -256, ctx.r8.u32);
	// lwz r11,-256(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -256);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-256
	ctx.r10.s64 = r11.s64 + -256;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-260(r11)
	PPC_STORE_U32(r11.u32 + -260, ctx.r10.u32);
	// lwz r11,-256(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -256);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-300
	ctx.r10.s64 = r11.s64 + -300;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-260(r11)
	PPC_STORE_U32(r11.u32 + -260, ctx.r10.u32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,27088(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 27088);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r30,-32
	ctx.r3.s64 = r30.s64 + -32;
	// bl 0x821266e8
	sub_821266E8(ctx, base);
	// addi r3,r30,-76
	ctx.r3.s64 = r30.s64 + -76;
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

__attribute__((alias("__imp__sub_8220D444"))) PPC_WEAK_FUNC(sub_8220D444);
PPC_FUNC_IMPL(__imp__sub_8220D444) {
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
	// addi r11,r11,-260
	r11.s64 = r11.s64 + -260;
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

__attribute__((alias("__imp__sub_8220D474"))) PPC_WEAK_FUNC(sub_8220D474);
PPC_FUNC_IMPL(__imp__sub_8220D474) {
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
	// addi r11,r11,-260
	r11.s64 = r11.s64 + -260;
	// addi r3,r11,228
	ctx.r3.s64 = r11.s64 + 228;
	// bl 0x82126e78
	sub_82126E78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220D4A4"))) PPC_WEAK_FUNC(sub_8220D4A4);
PPC_FUNC_IMPL(__imp__sub_8220D4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220D4A8"))) PPC_WEAK_FUNC(sub_8220D4A8);
PPC_FUNC_IMPL(__imp__sub_8220D4A8) {
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
	// bl 0x821e13b8
	sub_821E13B8(ctx, base);
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

__attribute__((alias("__imp__sub_8220D4D8"))) PPC_WEAK_FUNC(sub_8220D4D8);
PPC_FUNC_IMPL(__imp__sub_8220D4D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x821b2890
	sub_821B2890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220D4E0"))) PPC_WEAK_FUNC(sub_8220D4E0);
PPC_FUNC_IMPL(__imp__sub_8220D4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x8220d4a8
	sub_8220D4A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220D4EC"))) PPC_WEAK_FUNC(sub_8220D4EC);
PPC_FUNC_IMPL(__imp__sub_8220D4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220D4F0"))) PPC_WEAK_FUNC(sub_8220D4F0);
PPC_FUNC_IMPL(__imp__sub_8220D4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8220d4d8
	sub_8220D4D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220D4FC"))) PPC_WEAK_FUNC(sub_8220D4FC);
PPC_FUNC_IMPL(__imp__sub_8220D4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220D500"))) PPC_WEAK_FUNC(sub_8220D500);
PPC_FUNC_IMPL(__imp__sub_8220D500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8220e1b8
	sub_8220E1B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220D50C"))) PPC_WEAK_FUNC(sub_8220D50C);
PPC_FUNC_IMPL(__imp__sub_8220D50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220D510"))) PPC_WEAK_FUNC(sub_8220D510);
PPC_FUNC_IMPL(__imp__sub_8220D510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8220d2e8
	sub_8220D2E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220D51C"))) PPC_WEAK_FUNC(sub_8220D51C);
PPC_FUNC_IMPL(__imp__sub_8220D51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220D520"))) PPC_WEAK_FUNC(sub_8220D520);
PPC_FUNC_IMPL(__imp__sub_8220D520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-76
	ctx.r3.s64 = ctx.r3.s64 + -76;
	// b 0x821b0888
	sub_821B0888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220D530"))) PPC_WEAK_FUNC(sub_8220D530);
PPC_FUNC_IMPL(__imp__sub_8220D530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r2{};
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
	// lwz r16,27912(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 27912);
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
	// lwz r11,13048(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13048);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8220d5b4
	if (!cr0.eq) goto loc_8220D5B4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,13048(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13048, r11.u32);
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
	// bl 0x821e13b8
	sub_821E13B8(ctx, base);
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
	// stw r3,13044(r27)
	PPC_STORE_U32(r27.u32 + 13044, ctx.r3.u32);
	// b 0x8220d5b8
	goto loc_8220D5B8;
loc_8220D5B4:
	// lwz r3,13044(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 13044);
loc_8220D5B8:
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
	// beq 0x8220d5f4
	if (cr0.eq) goto loc_8220D5F4;
	// lwz r11,-256(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -256);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-256
	ctx.r3.s64 = r11.s64 + -256;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8220d670
	goto loc_8220D670;
loc_8220D5F4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8220d654
	if (!cr0.eq) goto loc_8220D654;
	// addic. r11,r30,-260
	xer.ca = r30.u32 > 259;
	r11.s64 = r30.s64 + -260;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8220d618
	if (!cr0.eq) goto loc_8220D618;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8220d628
	goto loc_8220D628;
loc_8220D618:
	// lwz r11,-256(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -256);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-256
	ctx.r3.s64 = r11.s64 + -256;
loc_8220D628:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-256(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -256);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-256
	ctx.r4.s64 = r11.s64 + -256;
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
loc_8220D654:
	// lwz r11,-256(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -256);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-256
	ctx.r3.s64 = r11.s64 + -256;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8220D670:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8220D538"))) PPC_WEAK_FUNC(sub_8220D538);
PPC_FUNC_IMPL(__imp__sub_8220D538) {
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
	// lwz r11,13048(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13048);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8220d5b4
	if (!cr0.eq) goto loc_8220D5B4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,13048(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13048, r11.u32);
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
	// bl 0x821e13b8
	sub_821E13B8(ctx, base);
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
	// stw r3,13044(r27)
	PPC_STORE_U32(r27.u32 + 13044, ctx.r3.u32);
	// b 0x8220d5b8
	goto loc_8220D5B8;
loc_8220D5B4:
	// lwz r3,13044(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 13044);
loc_8220D5B8:
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
	// beq 0x8220d5f4
	if (cr0.eq) goto loc_8220D5F4;
	// lwz r11,-256(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -256);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-256
	ctx.r3.s64 = r11.s64 + -256;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8220d670
	goto loc_8220D670;
loc_8220D5F4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8220d654
	if (!cr0.eq) goto loc_8220D654;
	// addic. r11,r30,-260
	xer.ca = r30.u32 > 259;
	r11.s64 = r30.s64 + -260;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8220d618
	if (!cr0.eq) goto loc_8220D618;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8220d628
	goto loc_8220D628;
loc_8220D618:
	// lwz r11,-256(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -256);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-256
	ctx.r3.s64 = r11.s64 + -256;
loc_8220D628:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-256(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -256);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-256
	ctx.r4.s64 = r11.s64 + -256;
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
loc_8220D654:
	// lwz r11,-256(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -256);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-256
	ctx.r3.s64 = r11.s64 + -256;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8220D670:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8220D67C"))) PPC_WEAK_FUNC(sub_8220D67C);
PPC_FUNC_IMPL(__imp__sub_8220D67C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13048
	r11.s64 = r11.s64 + 13048;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13048
	ctx.r10.s64 = ctx.r10.s64 + 13048;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220D6A4"))) PPC_WEAK_FUNC(sub_8220D6A4);
PPC_FUNC_IMPL(__imp__sub_8220D6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220D6A8"))) PPC_WEAK_FUNC(sub_8220D6A8);
PPC_FUNC_IMPL(__imp__sub_8220D6A8) {
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
	PPCRegister f0{};
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r30,r4,24
	r30.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// lis r28,-32140
	r28.s64 = -2106327040;
	// beq 0x8220d6e8
	if (cr0.eq) goto loc_8220D6E8;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,27088(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 27088);
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// bl 0x821e6f48
	sub_821E6F48(ctx, base);
loc_8220D6E8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8220d710
	if (cr6.eq) goto loc_8220D710;
	// lbz r11,217(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 217);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8220d708
	if (cr0.eq) goto loc_8220D708;
	// lbz r11,216(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 216);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8220d710
	if (cr0.eq) goto loc_8220D710;
loc_8220D708:
	// li r11,0
	r11.s64 = 0;
	// b 0x8220d714
	goto loc_8220D714;
loc_8220D710:
	// li r11,1
	r11.s64 = 1;
loc_8220D714:
	// lwz r9,252(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// rlwinm r11,r11,1,23,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1FE;
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8220d738
	if (!cr6.gt) goto loc_8220D738;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// b 0x8220d744
	goto loc_8220D744;
loc_8220D738:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x8220d744
	if (!cr6.lt) goto loc_8220D744;
	// li r11,0
	r11.s64 = 0;
loc_8220D744:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
	// beq cr6,0x8220da2c
	if (cr6.eq) goto loc_8220DA2C;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// lwz r29,11556(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 11556);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x821d7030
	sub_821D7030(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// bgt cr6,0x8220d794
	if (cr6.gt) goto loc_8220D794;
	// li r11,0
	r11.s64 = 0;
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
	// b 0x8220da2c
	goto loc_8220DA2C;
loc_8220D794:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lfs f29,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f29.f64 = double(temp.f32);
	// beq 0x8220d86c
	if (cr0.eq) goto loc_8220D86C;
	// lfs f13,240(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,244(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 244);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x8220d7c8
	if (cr6.eq) goto loc_8220D7C8;
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - f0.f64));
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fdivs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 / f0.f64));
	// b 0x8220d7cc
	goto loc_8220D7CC;
loc_8220D7C8:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = f29.f64;
loc_8220D7CC:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f29.f64);
	// ble cr6,0x8220d7dc
	if (!cr6.gt) goto loc_8220D7DC;
	// fmr f0,f29
	f0.f64 = f29.f64;
	// b 0x8220d7e8
	goto loc_8220D7E8;
loc_8220D7DC:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x8220d7e8
	if (!cr6.lt) goto loc_8220D7E8;
	// fmr f0,f31
	f0.f64 = f31.f64;
loc_8220D7E8:
	// lwa r10,252(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 252));
	// lwa r9,248(r31)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 248));
	// lbz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 64);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fdivs f0,f0,f12
	f0.f64 = double(float(f0.f64 / ctx.f12.f64));
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = f0.f64;
	// beq 0x8220d854
	if (cr0.eq) goto loc_8220D854;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r10,11632(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11632);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8220d854
	if (cr6.eq) goto loc_8220D854;
	// lfs f13,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f11,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
loc_8220D854:
	// stfs f13,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// stfs f12,52(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,260(r11)
	PPC_STORE_U32(r11.u32 + 260, ctx.r10.u32);
loc_8220D86C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lfs f30,5736(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5736);
	f30.f64 = double(temp.f32);
	// beq 0x8220d8cc
	if (cr0.eq) goto loc_8220D8CC;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8220d8cc
	if (!cr6.eq) goto loc_8220D8CC;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r11,84
	ctx.r4.s64 = r11.s64 + 84;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fsubs f1,f0,f30
	ctx.f1.f64 = double(float(f0.f64 - f30.f64));
	// bl 0x821a50e8
	sub_821A50E8(ctx, base);
	// lwz r30,236(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,260(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 260);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,260(r30)
	PPC_STORE_U32(r30.u32 + 260, r11.u32);
loc_8220D8CC:
	// lfs f0,220(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 220);
	f0.f64 = double(temp.f32);
	// lfs f13,224(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x8220d940
	if (cr6.eq) goto loc_8220D940;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lfs f11,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	f0.f64 = double(temp.f32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f0,f11
	f0.f64 = double(float(f0.f64 * ctx.f11.f64));
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f0,f13,f11,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + f0.f64));
	// fnmadds f0,f12,f10,f0
	f0.f64 = double(float(-(ctx.f12.f64 * ctx.f10.f64 + f0.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bgt cr6,0x8220d92c
	if (cr6.gt) goto loc_8220D92C;
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_8220D92C:
	// lfs f0,220(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 220);
	f0.f64 = double(temp.f32);
	// lfs f13,224(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + f0.f64));
loc_8220D940:
	// lwz r3,27088(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 27088);
	// lwa r11,60(r3)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 60));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwa r11,64(r3)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 64));
	// lwa r10,60(r3)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 60));
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r9,128(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fdivs f31,f0,f12
	f31.f64 = double(float(f0.f64 / ctx.f12.f64));
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,27088(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 27088);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f0.f64 = double(temp.f32);
	// lwz r6,236(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(f0.f64 * f30.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f31,f1
	f0.f64 = double(float(f31.f64 / ctx.f1.f64));
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// lwa r11,60(r3)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 60));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmsubs f13,f10,f13,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 - ctx.f12.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwa r11,64(r3)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 64));
	// stfs f29,128(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f29,132(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f29,136(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f29,140(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmsubs f0,f13,f11,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - f0.f64));
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8220DA2C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
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

__attribute__((alias("__imp__sub_8220DA40"))) PPC_WEAK_FUNC(sub_8220DA40);
PPC_FUNC_IMPL(__imp__sub_8220DA40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	// li r11,1
	r11.s64 = 1;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
	// addi r11,r1,28
	r11.s64 = ctx.r1.s64 + 28;
	// bgt cr6,0x8220da5c
	if (cr6.gt) goto loc_8220DA5C;
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
loc_8220DA5C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,252(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// lwz r10,248(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8220da78
	if (!cr6.eq) goto loc_8220DA78;
	// stw r9,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r9.u32);
	// b 0x8220dabc
	goto loc_8220DABC;
loc_8220DA78:
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// lfd f13,-8(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r7
	PPC_STORE_U32(ctx.r7.u32, f0.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, r11.u32);
loc_8220DABC:
	// stw r9,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220DAC4"))) PPC_WEAK_FUNC(sub_8220DAC4);
PPC_FUNC_IMPL(__imp__sub_8220DAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220DAC8"))) PPC_WEAK_FUNC(sub_8220DAC8);
PPC_FUNC_IMPL(__imp__sub_8220DAC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	// lwz r16,28024(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 28024);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
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
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,13056(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13056);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r27,r9,13052
	r27.s64 = ctx.r9.s64 + 13052;
	// bne 0x8220db34
	if (!cr0.eq) goto loc_8220DB34;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,13056(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13056, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,27976
	ctx.r4.s64 = r11.s64 + 27976;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8220DB34:
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
	// beq 0x8220db70
	if (cr0.eq) goto loc_8220DB70;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,-260
	ctx.r3.s64 = r28.s64 + -260;
	// bl 0x8220da40
	sub_8220DA40(ctx, base);
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// b 0x8220dc48
	goto loc_8220DC48;
loc_8220DB70:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r28,-76
	ctx.r4.s64 = r28.s64 + -76;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821b1158
	sub_821B1158(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8220dbb4
	if (cr6.eq) goto loc_8220DBB4;
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
	// beq 0x8220dc4c
	if (cr0.eq) goto loc_8220DC4C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_8220DBAC:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8220dc4c
	goto loc_8220DC4C;
loc_8220DBB4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r28,-40
	ctx.r4.s64 = r28.s64 + -40;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821b3888
	sub_821B3888(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8220dbf4
	if (cr6.eq) goto loc_8220DBF4;
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
	// beq 0x8220dc4c
	if (cr0.eq) goto loc_8220DC4C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x8220dbac
	goto loc_8220DBAC;
loc_8220DBF4:
	// lwz r11,-256(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -256);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r4,r11,-256
	ctx.r4.s64 = r11.s64 + -256;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8220dc40
	if (cr6.eq) goto loc_8220DC40;
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
	// beq 0x8220dc4c
	if (cr0.eq) goto loc_8220DC4C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x8220dbac
	goto loc_8220DBAC;
loc_8220DC40:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_8220DC48:
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
loc_8220DC4C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8220DAD0"))) PPC_WEAK_FUNC(sub_8220DAD0);
PPC_FUNC_IMPL(__imp__sub_8220DAD0) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
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
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,13056(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13056);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r27,r9,13052
	r27.s64 = ctx.r9.s64 + 13052;
	// bne 0x8220db34
	if (!cr0.eq) goto loc_8220DB34;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,13056(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13056, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,27976
	ctx.r4.s64 = r11.s64 + 27976;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8220DB34:
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
	// beq 0x8220db70
	if (cr0.eq) goto loc_8220DB70;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,-260
	ctx.r3.s64 = r28.s64 + -260;
	// bl 0x8220da40
	sub_8220DA40(ctx, base);
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// b 0x8220dc48
	goto loc_8220DC48;
loc_8220DB70:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r28,-76
	ctx.r4.s64 = r28.s64 + -76;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821b1158
	sub_821B1158(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8220dbb4
	if (cr6.eq) goto loc_8220DBB4;
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
	// beq 0x8220dc4c
	if (cr0.eq) goto loc_8220DC4C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_8220DBAC:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8220dc4c
	goto loc_8220DC4C;
loc_8220DBB4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r28,-40
	ctx.r4.s64 = r28.s64 + -40;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821b3888
	sub_821B3888(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8220dbf4
	if (cr6.eq) goto loc_8220DBF4;
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
	// beq 0x8220dc4c
	if (cr0.eq) goto loc_8220DC4C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x8220dbac
	goto loc_8220DBAC;
loc_8220DBF4:
	// lwz r11,-256(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -256);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r4,r11,-256
	ctx.r4.s64 = r11.s64 + -256;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8220dc40
	if (cr6.eq) goto loc_8220DC40;
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
	// beq 0x8220dc4c
	if (cr0.eq) goto loc_8220DC4C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x8220dbac
	goto loc_8220DBAC;
loc_8220DC40:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_8220DC48:
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
loc_8220DC4C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8220DC58"))) PPC_WEAK_FUNC(sub_8220DC58);
PPC_FUNC_IMPL(__imp__sub_8220DC58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13056
	r11.s64 = r11.s64 + 13056;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13056
	ctx.r10.s64 = ctx.r10.s64 + 13056;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220DC80"))) PPC_WEAK_FUNC(sub_8220DC80);
PPC_FUNC_IMPL(__imp__sub_8220DC80) {
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

__attribute__((alias("__imp__sub_8220DCA8"))) PPC_WEAK_FUNC(sub_8220DCA8);
PPC_FUNC_IMPL(__imp__sub_8220DCA8) {
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

__attribute__((alias("__imp__sub_8220DCD0"))) PPC_WEAK_FUNC(sub_8220DCD0);
PPC_FUNC_IMPL(__imp__sub_8220DCD0) {
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

__attribute__((alias("__imp__sub_8220DCF8"))) PPC_WEAK_FUNC(sub_8220DCF8);
PPC_FUNC_IMPL(__imp__sub_8220DCF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x8220dad0
	sub_8220DAD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220DD04"))) PPC_WEAK_FUNC(sub_8220DD04);
PPC_FUNC_IMPL(__imp__sub_8220DD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220DD08"))) PPC_WEAK_FUNC(sub_8220DD08);
PPC_FUNC_IMPL(__imp__sub_8220DD08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8220d538
	sub_8220D538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220DD14"))) PPC_WEAK_FUNC(sub_8220DD14);
PPC_FUNC_IMPL(__imp__sub_8220DD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220DD18"))) PPC_WEAK_FUNC(sub_8220DD18);
PPC_FUNC_IMPL(__imp__sub_8220DD18) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,14204(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14204);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lwz r11,-256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -256);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-256
	ctx.r3.s64 = r11.s64 + -256;
	// bl 0x82314ff8
	sub_82314FF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-76
	ctx.r3.s64 = r31.s64 + -76;
	// bl 0x821afb80
	sub_821AFB80(ctx, base);
	// addi r29,r31,-40
	r29.s64 = r31.s64 + -40;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b2a18
	sub_821B2A18(ctx, base);
	// lwz r11,-12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -12);
	// addi r4,r31,-32
	ctx.r4.s64 = r31.s64 + -32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r31,-20
	r31.s64 = r31.s64 + -20;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82127738
	sub_82127738(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821bbc48
	sub_821BBC48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821bbc48
	sub_821BBC48(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82359440
	sub_82359440(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8220DDB8"))) PPC_WEAK_FUNC(sub_8220DDB8);
PPC_FUNC_IMPL(__imp__sub_8220DDB8) {
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r29,r11,13060
	r29.s64 = r11.s64 + 13060;
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
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,14204(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14204);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8220de9c
	if (cr6.gt) goto loc_8220DE9C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x8220de18
	if (!cr6.gt) goto loc_8220DE18;
	// lwz r11,-256(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -256);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-256
	ctx.r3.s64 = r11.s64 + -256;
	// bl 0x82315350
	sub_82315350(ctx, base);
loc_8220DE18:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-76
	ctx.r3.s64 = r30.s64 + -76;
	// bl 0x821b0a28
	sub_821B0A28(ctx, base);
	// addi r28,r30,-40
	r28.s64 = r30.s64 + -40;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821b36c0
	sub_821B36C0(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8220de50
	if (!cr6.gt) goto loc_8220DE50;
	// addi r4,r30,-32
	ctx.r4.s64 = r30.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82127898
	sub_82127898(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_8220DE50:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ble cr6,0x8220de68
	if (!cr6.gt) goto loc_8220DE68;
	// bl 0x821bbcb0
	sub_821BBCB0(ctx, base);
	// b 0x8220de78
	goto loc_8220DE78;
loc_8220DE68:
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,-36(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + -36, temp.u32);
loc_8220DE78:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8220de9c
	if (!cr6.gt) goto loc_8220DE9C;
	// addi r4,r30,-20
	ctx.r4.s64 = r30.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bbcb0
	sub_821BBCB0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-12
	ctx.r4.s64 = r30.s64 + -12;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_8220DE9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8220DEA4"))) PPC_WEAK_FUNC(sub_8220DEA4);
PPC_FUNC_IMPL(__imp__sub_8220DEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220DEA8"))) PPC_WEAK_FUNC(sub_8220DEA8);
PPC_FUNC_IMPL(__imp__sub_8220DEA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	// lwz r16,28184(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 28184);
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
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq cr6,0x8220df34
	if (cr6.eq) goto loc_8220DF34;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r11,r11,28156
	r11.s64 = r11.s64 + 28156;
	// addi r10,r10,28144
	ctx.r10.s64 = ctx.r10.s64 + 28144;
	// addi r9,r9,28136
	ctx.r9.s64 = ctx.r9.s64 + 28136;
	// addi r3,r30,260
	ctx.r3.s64 = r30.s64 + 260;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,184(r30)
	PPC_STORE_U32(r30.u32 + 184, ctx.r10.u32);
	// stw r9,308(r30)
	PPC_STORE_U32(r30.u32 + 308, ctx.r9.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,304
	r11.s64 = r30.s64 + 304;
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
loc_8220DF34:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b21a0
	sub_821B21A0(ctx, base);
	// addi r29,r30,180
	r29.s64 = r30.s64 + 180;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b2dd0
	sub_821B2DD0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r11,r11,27780
	r11.s64 = r11.s64 + 27780;
	// addi r9,r9,27716
	ctx.r9.s64 = ctx.r9.s64 + 27716;
	// lfs f0,24112(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24112);
	f0.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r10,r10,27788
	ctx.r10.s64 = ctx.r10.s64 + 27788;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r8,r8,27708
	ctx.r8.s64 = ctx.r8.s64 + 27708;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r29,r30,228
	r29.s64 = r30.s64 + 228;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-256
	ctx.r10.s64 = r11.s64 + -256;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-300
	ctx.r10.s64 = r11.s64 + -300;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stb r28,216(r30)
	PPC_STORE_U8(r30.u32 + 216, r28.u8);
	// stb r28,217(r30)
	PPC_STORE_U8(r30.u32 + 217, r28.u8);
	// stfs f0,220(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 220, temp.u32);
	// stfs f0,224(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 224, temp.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x82126aa8
	sub_82126AA8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,8860
	r11.s64 = r11.s64 + 8860;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stfs f0,240(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 240, temp.u32);
	// stfs f0,244(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 244, temp.u32);
	// stw r28,252(r30)
	PPC_STORE_U32(r30.u32 + 252, r28.u32);
	// stw r10,248(r30)
	PPC_STORE_U32(r30.u32 + 248, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8220DEB0"))) PPC_WEAK_FUNC(sub_8220DEB0);
PPC_FUNC_IMPL(__imp__sub_8220DEB0) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq cr6,0x8220df34
	if (cr6.eq) goto loc_8220DF34;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r11,r11,28156
	r11.s64 = r11.s64 + 28156;
	// addi r10,r10,28144
	ctx.r10.s64 = ctx.r10.s64 + 28144;
	// addi r9,r9,28136
	ctx.r9.s64 = ctx.r9.s64 + 28136;
	// addi r3,r30,260
	ctx.r3.s64 = r30.s64 + 260;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,184(r30)
	PPC_STORE_U32(r30.u32 + 184, ctx.r10.u32);
	// stw r9,308(r30)
	PPC_STORE_U32(r30.u32 + 308, ctx.r9.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,304
	r11.s64 = r30.s64 + 304;
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
loc_8220DF34:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b21a0
	sub_821B21A0(ctx, base);
	// addi r29,r30,180
	r29.s64 = r30.s64 + 180;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b2dd0
	sub_821B2DD0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r11,r11,27780
	r11.s64 = r11.s64 + 27780;
	// addi r9,r9,27716
	ctx.r9.s64 = ctx.r9.s64 + 27716;
	// lfs f0,24112(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24112);
	f0.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r10,r10,27788
	ctx.r10.s64 = ctx.r10.s64 + 27788;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r8,r8,27708
	ctx.r8.s64 = ctx.r8.s64 + 27708;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r29,r30,228
	r29.s64 = r30.s64 + 228;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-256
	ctx.r10.s64 = r11.s64 + -256;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-300
	ctx.r10.s64 = r11.s64 + -300;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stb r28,216(r30)
	PPC_STORE_U8(r30.u32 + 216, r28.u8);
	// stb r28,217(r30)
	PPC_STORE_U8(r30.u32 + 217, r28.u8);
	// stfs f0,220(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 220, temp.u32);
	// stfs f0,224(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 224, temp.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x82126aa8
	sub_82126AA8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,8860
	r11.s64 = r11.s64 + 8860;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stfs f0,240(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 240, temp.u32);
	// stfs f0,244(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 244, temp.u32);
	// stw r28,252(r30)
	PPC_STORE_U32(r30.u32 + 252, r28.u32);
	// stw r10,248(r30)
	PPC_STORE_U32(r30.u32 + 248, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8220E024"))) PPC_WEAK_FUNC(sub_8220E024);
PPC_FUNC_IMPL(__imp__sub_8220E024) {
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
	// beq 0x8220e058
	if (cr0.eq) goto loc_8220E058;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,260
	ctx.r3.s64 = r11.s64 + 260;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_8220E058:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220E068"))) PPC_WEAK_FUNC(sub_8220E068);
PPC_FUNC_IMPL(__imp__sub_8220E068) {
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

__attribute__((alias("__imp__sub_8220E094"))) PPC_WEAK_FUNC(sub_8220E094);
PPC_FUNC_IMPL(__imp__sub_8220E094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220E098"))) PPC_WEAK_FUNC(sub_8220E098);
PPC_FUNC_IMPL(__imp__sub_8220E098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,27088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 27088);
	// lwz r11,204(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,-180
	ctx.r3.s64 = ctx.r3.s64 + -180;
	// b 0x8220d6a8
	sub_8220D6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220E0B8"))) PPC_WEAK_FUNC(sub_8220E0B8);
PPC_FUNC_IMPL(__imp__sub_8220E0B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220E0BC"))) PPC_WEAK_FUNC(sub_8220E0BC);
PPC_FUNC_IMPL(__imp__sub_8220E0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220E0C0"))) PPC_WEAK_FUNC(sub_8220E0C0);
PPC_FUNC_IMPL(__imp__sub_8220E0C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,228
	ctx.r3.s64 = ctx.r3.s64 + 228;
	// b 0x82126b38
	sub_82126B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220E0C8"))) PPC_WEAK_FUNC(sub_8220E0C8);
PPC_FUNC_IMPL(__imp__sub_8220E0C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8220dd18
	sub_8220DD18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220E0D4"))) PPC_WEAK_FUNC(sub_8220E0D4);
PPC_FUNC_IMPL(__imp__sub_8220E0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220E0D8"))) PPC_WEAK_FUNC(sub_8220E0D8);
PPC_FUNC_IMPL(__imp__sub_8220E0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8220ddb8
	sub_8220DDB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220E0E4"))) PPC_WEAK_FUNC(sub_8220E0E4);
PPC_FUNC_IMPL(__imp__sub_8220E0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220E0E8"))) PPC_WEAK_FUNC(sub_8220E0E8);
PPC_FUNC_IMPL(__imp__sub_8220E0E8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r6,r11,14208
	ctx.r6.s64 = r11.s64 + 14208;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r5,r11,920
	ctx.r5.s64 = r11.s64 + 920;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// lwz r11,-256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -256);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-256
	ctx.r3.s64 = r11.s64 + -256;
	// bl 0x82315258
	sub_82315258(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,-76
	ctx.r3.s64 = r31.s64 + -76;
	// bl 0x821b0908
	sub_821B0908(ctx, base);
	// addi r27,r31,-40
	r27.s64 = r31.s64 + -40;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821b2938
	sub_821B2938(ctx, base);
	// addi r11,r30,220
	r11.s64 = r30.s64 + 220;
	// addi r3,r31,-32
	ctx.r3.s64 = r31.s64 + -32;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
	// lwz r4,236(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// bl 0x82126b38
	sub_82126B38(ctx, base);
	// lbz r11,217(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 217);
	// addi r10,r30,240
	ctx.r10.s64 = r30.s64 + 240;
	// addi r9,r31,-20
	ctx.r9.s64 = r31.s64 + -20;
	// stb r11,-43(r31)
	PPC_STORE_U8(r31.u32 + -43, r11.u8);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// lwz r11,248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 248);
	// stw r11,-12(r31)
	PPC_STORE_U32(r31.u32 + -12, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8220E1B4"))) PPC_WEAK_FUNC(sub_8220E1B4);
PPC_FUNC_IMPL(__imp__sub_8220E1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220E1B8"))) PPC_WEAK_FUNC(sub_8220E1B8);
PPC_FUNC_IMPL(__imp__sub_8220E1B8) {
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
	// addi r30,r3,-260
	r30.s64 = ctx.r3.s64 + -260;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,260
	r31.s64 = r30.s64 + 260;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8220d370
	sub_8220D370(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8220e1f0
	if (cr0.eq) goto loc_8220E1F0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_8220E1F0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8220E1FC"))) PPC_WEAK_FUNC(sub_8220E1FC);
PPC_FUNC_IMPL(__imp__sub_8220E1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220E200"))) PPC_WEAK_FUNC(sub_8220E200);
PPC_FUNC_IMPL(__imp__sub_8220E200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8220e0e8
	sub_8220E0E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220E20C"))) PPC_WEAK_FUNC(sub_8220E20C);
PPC_FUNC_IMPL(__imp__sub_8220E20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220E210"))) PPC_WEAK_FUNC(sub_8220E210);
PPC_FUNC_IMPL(__imp__sub_8220E210) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,-52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -52);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-52
	ctx.r3.s64 = r11.s64 + -52;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,-52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -52);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-52
	ctx.r3.s64 = r11.s64 + -52;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_8220E288"))) PPC_WEAK_FUNC(sub_8220E288);
PPC_FUNC_IMPL(__imp__sub_8220E288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,13064(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 13064);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// ble cr6,0x8220e2bc
	if (!cr6.gt) goto loc_8220E2BC;
	// addi r4,r31,-19
	ctx.r4.s64 = r31.s64 + -19;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// b 0x8220e2d0
	goto loc_8220E2D0;
loc_8220E2BC:
	// bne cr6,0x8220e2d0
	if (!cr6.eq) goto loc_8220E2D0;
	// lbz r11,-20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + -20);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,-19(r31)
	PPC_STORE_U8(r31.u32 + -19, r11.u8);
loc_8220E2D0:
	// addi r3,r31,-56
	ctx.r3.s64 = r31.s64 + -56;
	// lbz r5,-20(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + -20);
	// addi r4,r31,-40
	ctx.r4.s64 = r31.s64 + -40;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
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

__attribute__((alias("__imp__sub_8220E300"))) PPC_WEAK_FUNC(sub_8220E300);
PPC_FUNC_IMPL(__imp__sub_8220E300) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x8220e360
	if (!cr6.eq) goto loc_8220E360;
	// addi r31,r11,-56
	r31.s64 = r11.s64 + -56;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,5092
	ctx.r6.s64 = r11.s64 + 5092;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r11,920
	ctx.r5.s64 = r11.s64 + 920;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8220E360:
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

__attribute__((alias("__imp__sub_8220E378"))) PPC_WEAK_FUNC(sub_8220E378);
PPC_FUNC_IMPL(__imp__sub_8220E378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	// lwz r16,28264(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 28264);
	// mflr r12
	// bl 0x8239bcf4
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r29,-36
	ctx.r4.s64 = r29.s64 + -36;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e9d00
	sub_821E9D00(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8220e3f8
	if (cr6.eq) goto loc_8220E3F8;
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
	// beq 0x8220e450
	if (cr0.eq) goto loc_8220E450;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_8220E3F0:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8220e450
	goto loc_8220E450;
loc_8220E3F8:
	// lwz r11,-52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -52);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r4,r11,-52
	ctx.r4.s64 = r11.s64 + -52;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8220e444
	if (cr6.eq) goto loc_8220E444;
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
	// beq 0x8220e450
	if (cr0.eq) goto loc_8220E450;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x8220e3f0
	goto loc_8220E3F0;
loc_8220E444:
	// li r11,6
	r11.s64 = 6;
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_8220E450:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

