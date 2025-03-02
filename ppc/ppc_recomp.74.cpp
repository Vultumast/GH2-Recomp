#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82298318"))) PPC_WEAK_FUNC(sub_82298318);
PPC_FUNC_IMPL(__imp__sub_82298318) {
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
	// beq cr6,0x8229835c
	if (cr6.eq) goto loc_8229835C;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
	// addi r11,r11,-16096
	r11.s64 = r11.s64 + -16096;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8229835C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82290b48
	sub_82290B48(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-16148
	r11.s64 = r11.s64 + -16148;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r9,r10,-16212
	ctx.r9.s64 = ctx.r10.s64 + -16212;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r11,-80
	ctx.r9.s64 = r11.s64 + -80;
	// stwx r9,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r9.u32);
	// stfs f0,76(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 76, temp.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// stw r10,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r10.u32);
	// stw r10,68(r30)
	PPC_STORE_U32(r30.u32 + 68, ctx.r10.u32);
	// stw r10,72(r30)
	PPC_STORE_U32(r30.u32 + 72, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822983CC"))) PPC_WEAK_FUNC(sub_822983CC);
PPC_FUNC_IMPL(__imp__sub_822983CC) {
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
	// beq 0x82298400
	if (cr0.eq) goto loc_82298400;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,84
	ctx.r3.s64 = r11.s64 + 84;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_82298400:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82298410"))) PPC_WEAK_FUNC(sub_82298410);
PPC_FUNC_IMPL(__imp__sub_82298410) {
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
	// bl 0x822837f0
	sub_822837F0(ctx, base);
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

__attribute__((alias("__imp__sub_82298440"))) PPC_WEAK_FUNC(sub_82298440);
PPC_FUNC_IMPL(__imp__sub_82298440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82298cc8
	sub_82298CC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229844C"))) PPC_WEAK_FUNC(sub_8229844C);
PPC_FUNC_IMPL(__imp__sub_8229844C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82298450"))) PPC_WEAK_FUNC(sub_82298450);
PPC_FUNC_IMPL(__imp__sub_82298450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x82298410
	sub_82298410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229845C"))) PPC_WEAK_FUNC(sub_8229845C);
PPC_FUNC_IMPL(__imp__sub_8229845C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82298460"))) PPC_WEAK_FUNC(sub_82298460);
PPC_FUNC_IMPL(__imp__sub_82298460) {
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
	// lwz r16,-16024(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16024);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32128
	r27.s64 = -2105540608;
	// lwz r11,24304(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24304);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822984e4
	if (!cr0.eq) goto loc_822984E4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,24304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24304, r11.u32);
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
	// bl 0x822837f0
	sub_822837F0(ctx, base);
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
	// stw r3,24300(r27)
	PPC_STORE_U32(r27.u32 + 24300, ctx.r3.u32);
	// b 0x822984e8
	goto loc_822984E8;
loc_822984E4:
	// lwz r3,24300(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 24300);
loc_822984E8:
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
	// beq 0x82298524
	if (cr0.eq) goto loc_82298524;
	// lwz r11,-80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-80
	ctx.r3.s64 = r11.s64 + -80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x822985a0
	goto loc_822985A0;
loc_82298524:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82298584
	if (!cr0.eq) goto loc_82298584;
	// addic. r11,r30,-84
	xer.ca = r30.u32 > 83;
	r11.s64 = r30.s64 + -84;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82298548
	if (!cr0.eq) goto loc_82298548;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82298558
	goto loc_82298558;
loc_82298548:
	// lwz r11,-80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -80);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-80
	ctx.r3.s64 = r11.s64 + -80;
loc_82298558:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -80);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-80
	ctx.r4.s64 = r11.s64 + -80;
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
loc_82298584:
	// lwz r11,-80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -80);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-80
	ctx.r3.s64 = r11.s64 + -80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_822985A0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82298468"))) PPC_WEAK_FUNC(sub_82298468);
PPC_FUNC_IMPL(__imp__sub_82298468) {
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
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32128
	r27.s64 = -2105540608;
	// lwz r11,24304(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24304);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822984e4
	if (!cr0.eq) goto loc_822984E4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,24304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24304, r11.u32);
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
	// bl 0x822837f0
	sub_822837F0(ctx, base);
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
	// stw r3,24300(r27)
	PPC_STORE_U32(r27.u32 + 24300, ctx.r3.u32);
	// b 0x822984e8
	goto loc_822984E8;
loc_822984E4:
	// lwz r3,24300(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 24300);
loc_822984E8:
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
	// beq 0x82298524
	if (cr0.eq) goto loc_82298524;
	// lwz r11,-80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-80
	ctx.r3.s64 = r11.s64 + -80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x822985a0
	goto loc_822985A0;
loc_82298524:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82298584
	if (!cr0.eq) goto loc_82298584;
	// addic. r11,r30,-84
	xer.ca = r30.u32 > 83;
	r11.s64 = r30.s64 + -84;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82298548
	if (!cr0.eq) goto loc_82298548;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82298558
	goto loc_82298558;
loc_82298548:
	// lwz r11,-80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -80);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-80
	ctx.r3.s64 = r11.s64 + -80;
loc_82298558:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -80);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-80
	ctx.r4.s64 = r11.s64 + -80;
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
loc_82298584:
	// lwz r11,-80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -80);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-80
	ctx.r3.s64 = r11.s64 + -80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_822985A0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822985AC"))) PPC_WEAK_FUNC(sub_822985AC);
PPC_FUNC_IMPL(__imp__sub_822985AC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	r11.s64 = -2105540608;
	// addi r11,r11,24304
	r11.s64 = r11.s64 + 24304;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,24304
	ctx.r10.s64 = ctx.r10.s64 + 24304;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822985D4"))) PPC_WEAK_FUNC(sub_822985D4);
PPC_FUNC_IMPL(__imp__sub_822985D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822985D8"))) PPC_WEAK_FUNC(sub_822985D8);
PPC_FUNC_IMPL(__imp__sub_822985D8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82298704
	if (!cr6.eq) goto loc_82298704;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// bl 0x82379de8
	sub_82379DE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r3.u32);
	// bne 0x82298620
	if (!cr0.eq) goto loc_82298620;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stb r29,8(r11)
	PPC_STORE_U8(r11.u32 + 8, r29.u8);
	// b 0x82298704
	goto loc_82298704;
loc_82298620:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// bl 0x82379df0
	sub_82379DF0(ctx, base);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r3.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r3,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r9,8(r8)
	PPC_STORE_U8(ctx.r8.u32 + 8, ctx.r9.u8);
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	f0.f64 = double(temp.f32);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r3,r9,36
	ctx.r3.s64 = ctx.r9.s64 + 36;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r9,r9,112
	ctx.r9.s64 = ctx.r9.s64 + 112;
	// lwa r8,68(r31)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 68));
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// addi r8,r3,76
	ctx.r8.s64 = ctx.r3.s64 + 76;
	// stw r5,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r5.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fnmsubs f0,f13,f0,f12
	f0.f64 = double(float(-(ctx.f13.f64 * f0.f64 - ctx.f12.f64)));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r7,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	f0.f64 = double(temp.f32);
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r11,264(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 264);
	// lwz r11,216(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// stfs f0,72(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 72, temp.u32);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,264(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 264);
	// lwz r11,216(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// stfs f0,200(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 200, temp.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82298704:
	// li r11,6
	r11.s64 = 6;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8229871C"))) PPC_WEAK_FUNC(sub_8229871C);
PPC_FUNC_IMPL(__imp__sub_8229871C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82298720"))) PPC_WEAK_FUNC(sub_82298720);
PPC_FUNC_IMPL(__imp__sub_82298720) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r30,64(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x82379de8
	sub_82379DE8(ctx, base);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x8229876c
	if (!cr6.lt) goto loc_8229876C;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// b 0x822988a4
	goto loc_822988A4;
loc_8229876C:
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x82298898
	if (cr6.eq) goto loc_82298898;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// bl 0x82379df0
	sub_82379DF0(ctx, base);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// bne cr6,0x82298828
	if (!cr6.eq) goto loc_82298828;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82298828
	if (cr0.eq) goto loc_82298828;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r3,r9,36
	ctx.r3.s64 = ctx.r9.s64 + 36;
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	f0.f64 = double(temp.f32);
	// addi r9,r8,112
	ctx.r9.s64 = ctx.r8.s64 + 112;
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// addi r6,r3,76
	ctx.r6.s64 = ctx.r3.s64 + 76;
	// stw r7,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r7.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r5.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fnmsubs f0,f0,f13,f12
	f0.f64 = double(float(-(f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r7,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// b 0x82298834
	goto loc_82298834;
loc_82298828:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// bl 0x82379df0
	sub_82379DF0(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r3.u32);
loc_82298834:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	f0.f64 = double(temp.f32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// li r4,31
	ctx.r4.s64 = 31;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,264(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 264);
	// lwz r11,216(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fnmsubs f0,f13,f0,f12
	f0.f64 = double(float(-(ctx.f13.f64 * f0.f64 - ctx.f12.f64)));
	// stfs f0,72(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 72, temp.u32);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,264(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 264);
	// lwz r11,216(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// stfs f0,200(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 200, temp.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82298898:
	// li r11,6
	r11.s64 = 6;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_822988A4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822988B0"))) PPC_WEAK_FUNC(sub_822988B0);
PPC_FUNC_IMPL(__imp__sub_822988B0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82298908
	if (cr6.eq) goto loc_82298908;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82298908
	if (!cr6.eq) goto loc_82298908;
	// li r11,-1
	r11.s64 = -1;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stb r30,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r30.u8);
loc_82298908:
	// li r11,6
	r11.s64 = 6;
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82298920"))) PPC_WEAK_FUNC(sub_82298920);
PPC_FUNC_IMPL(__imp__sub_82298920) {
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
	// lwz r16,-15880(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + -15880);
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
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82144e68
	sub_82144E68(ctx, base);
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
	// beq 0x822989e0
	if (cr0.eq) goto loc_822989E0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// addi r11,r11,-31204
	r11.s64 = r11.s64 + -31204;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lhz r11,10(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 10);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,10(r30)
	PPC_STORE_U16(r30.u32 + 10, r11.u16);
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// addi r4,r29,-84
	ctx.r4.s64 = r29.s64 + -84;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822985d8
	sub_822985D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822989e0
	if (cr6.eq) goto loc_822989E0;
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
	// beq 0x82298b2c
	if (cr0.eq) goto loc_82298B2C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_822989D8:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82298b2c
	goto loc_82298B2C;
loc_822989E0:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821418e0
	sub_821418E0(ctx, base);
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
	// beq 0x82298a60
	if (cr0.eq) goto loc_82298A60;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// addi r11,r11,31548
	r11.s64 = r11.s64 + 31548;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lhz r11,10(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 10);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,10(r30)
	PPC_STORE_U16(r30.u32 + 10, r11.u16);
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// addi r4,r29,-84
	ctx.r4.s64 = r29.s64 + -84;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82298720
	sub_82298720(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82298a60
	if (cr6.eq) goto loc_82298A60;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82298b2c
	if (cr0.eq) goto loc_82298B2C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x822989d8
	goto loc_822989D8;
loc_82298A60:
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
	// beq 0x82298ae0
	if (cr0.eq) goto loc_82298AE0;
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
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// addi r4,r29,-84
	ctx.r4.s64 = r29.s64 + -84;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x822988b0
	sub_822988B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82298ae0
	if (cr6.eq) goto loc_82298AE0;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82298b2c
	if (cr0.eq) goto loc_82298B2C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x822989d8
	goto loc_822989D8;
loc_82298AE0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r29,-24
	ctx.r4.s64 = r29.s64 + -24;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82291040
	sub_82291040(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82298b20
	if (cr6.eq) goto loc_82298B20;
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82298b2c
	if (cr0.eq) goto loc_82298B2C;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x822989d8
	goto loc_822989D8;
loc_82298B20:
	// li r11,6
	r11.s64 = 6;
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_82298B2C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82298928"))) PPC_WEAK_FUNC(sub_82298928);
PPC_FUNC_IMPL(__imp__sub_82298928) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82144e68
	sub_82144E68(ctx, base);
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
	// beq 0x822989e0
	if (cr0.eq) goto loc_822989E0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// addi r11,r11,-31204
	r11.s64 = r11.s64 + -31204;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lhz r11,10(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 10);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,10(r30)
	PPC_STORE_U16(r30.u32 + 10, r11.u16);
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// addi r4,r29,-84
	ctx.r4.s64 = r29.s64 + -84;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822985d8
	sub_822985D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822989e0
	if (cr6.eq) goto loc_822989E0;
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
	// beq 0x82298b2c
	if (cr0.eq) goto loc_82298B2C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_822989D8:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82298b2c
	goto loc_82298B2C;
loc_822989E0:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821418e0
	sub_821418E0(ctx, base);
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
	// beq 0x82298a60
	if (cr0.eq) goto loc_82298A60;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// addi r11,r11,31548
	r11.s64 = r11.s64 + 31548;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lhz r11,10(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 10);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,10(r30)
	PPC_STORE_U16(r30.u32 + 10, r11.u16);
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// addi r4,r29,-84
	ctx.r4.s64 = r29.s64 + -84;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82298720
	sub_82298720(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82298a60
	if (cr6.eq) goto loc_82298A60;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82298b2c
	if (cr0.eq) goto loc_82298B2C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x822989d8
	goto loc_822989D8;
loc_82298A60:
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
	// beq 0x82298ae0
	if (cr0.eq) goto loc_82298AE0;
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
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// addi r4,r29,-84
	ctx.r4.s64 = r29.s64 + -84;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x822988b0
	sub_822988B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82298ae0
	if (cr6.eq) goto loc_82298AE0;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82298b2c
	if (cr0.eq) goto loc_82298B2C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x822989d8
	goto loc_822989D8;
loc_82298AE0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r29,-24
	ctx.r4.s64 = r29.s64 + -24;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82291040
	sub_82291040(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82298b20
	if (cr6.eq) goto loc_82298B20;
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82298b2c
	if (cr0.eq) goto loc_82298B2C;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x822989d8
	goto loc_822989D8;
loc_82298B20:
	// li r11,6
	r11.s64 = 6;
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_82298B2C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82298B38"))) PPC_WEAK_FUNC(sub_82298B38);
PPC_FUNC_IMPL(__imp__sub_82298B38) {
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

__attribute__((alias("__imp__sub_82298B60"))) PPC_WEAK_FUNC(sub_82298B60);
PPC_FUNC_IMPL(__imp__sub_82298B60) {
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

__attribute__((alias("__imp__sub_82298B88"))) PPC_WEAK_FUNC(sub_82298B88);
PPC_FUNC_IMPL(__imp__sub_82298B88) {
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

__attribute__((alias("__imp__sub_82298BB0"))) PPC_WEAK_FUNC(sub_82298BB0);
PPC_FUNC_IMPL(__imp__sub_82298BB0) {
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

__attribute__((alias("__imp__sub_82298BD8"))) PPC_WEAK_FUNC(sub_82298BD8);
PPC_FUNC_IMPL(__imp__sub_82298BD8) {
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

__attribute__((alias("__imp__sub_82298C00"))) PPC_WEAK_FUNC(sub_82298C00);
PPC_FUNC_IMPL(__imp__sub_82298C00) {
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

__attribute__((alias("__imp__sub_82298C28"))) PPC_WEAK_FUNC(sub_82298C28);
PPC_FUNC_IMPL(__imp__sub_82298C28) {
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

__attribute__((alias("__imp__sub_82298C50"))) PPC_WEAK_FUNC(sub_82298C50);
PPC_FUNC_IMPL(__imp__sub_82298C50) {
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
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,21476
	r31.s64 = r11.s64 + 21476;
	// lis r11,-32140
	r11.s64 = -2106327040;
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

__attribute__((alias("__imp__sub_82298CA8"))) PPC_WEAK_FUNC(sub_82298CA8);
PPC_FUNC_IMPL(__imp__sub_82298CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82298468
	sub_82298468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82298CB4"))) PPC_WEAK_FUNC(sub_82298CB4);
PPC_FUNC_IMPL(__imp__sub_82298CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82298CB8"))) PPC_WEAK_FUNC(sub_82298CB8);
PPC_FUNC_IMPL(__imp__sub_82298CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x82298928
	sub_82298928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82298CC4"))) PPC_WEAK_FUNC(sub_82298CC4);
PPC_FUNC_IMPL(__imp__sub_82298CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82298CC8"))) PPC_WEAK_FUNC(sub_82298CC8);
PPC_FUNC_IMPL(__imp__sub_82298CC8) {
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
	// addi r31,r3,-84
	r31.s64 = ctx.r3.s64 + -84;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x82376478
	sub_82376478(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82298d04
	if (cr0.eq) goto loc_82298D04;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82298D04:
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

__attribute__((alias("__imp__sub_82298D20"))) PPC_WEAK_FUNC(sub_82298D20);
PPC_FUNC_IMPL(__imp__sub_82298D20) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82376dd8
	sub_82376DD8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-15728
	ctx.r4.s64 = r11.s64 + -15728;
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-15744
	ctx.r4.s64 = r11.s64 + -15744;
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// bl 0x82298c50
	sub_82298C50(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// bl 0x82379de0
	sub_82379DE0(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f1,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// stb r10,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82298DA4"))) PPC_WEAK_FUNC(sub_82298DA4);
PPC_FUNC_IMPL(__imp__sub_82298DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82298DA8"))) PPC_WEAK_FUNC(sub_82298DA8);
PPC_FUNC_IMPL(__imp__sub_82298DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-15704
	r11.s64 = r11.s64 + -15704;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82298DB8"))) PPC_WEAK_FUNC(sub_82298DB8);
PPC_FUNC_IMPL(__imp__sub_82298DB8) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-15704
	r11.s64 = r11.s64 + -15704;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82298de4
	if (cr0.eq) goto loc_82298DE4;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82298DE4:
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

__attribute__((alias("__imp__sub_82298DFC"))) PPC_WEAK_FUNC(sub_82298DFC);
PPC_FUNC_IMPL(__imp__sub_82298DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82298E00"))) PPC_WEAK_FUNC(sub_82298E00);
PPC_FUNC_IMPL(__imp__sub_82298E00) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32128
	r30.s64 = -2105540608;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,24316(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24316);
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r10,24316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24316);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r10,36
	ctx.r3.s64 = ctx.r10.s64 + 36;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r7.u32);
	// bl 0x821af870
	sub_821AF870(ctx, base);
	// lwz r3,24316(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24316);
	// bl 0x821b2800
	sub_821B2800(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_82298E8C"))) PPC_WEAK_FUNC(sub_82298E8C);
PPC_FUNC_IMPL(__imp__sub_82298E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82298E90"))) PPC_WEAK_FUNC(sub_82298E90);
PPC_FUNC_IMPL(__imp__sub_82298E90) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32128
	r31.s64 = -2105540608;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,24320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24320);
	// addi r3,r10,36
	ctx.r3.s64 = ctx.r10.s64 + 36;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r7.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	f0.f64 = double(float(f0.f64 + ctx.f1.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r9,24320(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24320);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r9,36
	ctx.r3.s64 = ctx.r9.s64 + 36;
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
	// bl 0x821af870
	sub_821AF870(ctx, base);
	// lwz r3,24320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24320);
	// bl 0x821b2800
	sub_821B2800(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82298F44"))) PPC_WEAK_FUNC(sub_82298F44);
PPC_FUNC_IMPL(__imp__sub_82298F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82298F48"))) PPC_WEAK_FUNC(sub_82298F48);
PPC_FUNC_IMPL(__imp__sub_82298F48) {
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
	// lwz r16,-15640(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + -15640);
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-15676
	r11.s64 = r11.s64 + -15676;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82298fac
	if (cr0.eq) goto loc_82298FAC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82298FAC:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-15704
	r11.s64 = r11.s64 + -15704;
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

__attribute__((alias("__imp__sub_82298F50"))) PPC_WEAK_FUNC(sub_82298F50);
PPC_FUNC_IMPL(__imp__sub_82298F50) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-15676
	r11.s64 = r11.s64 + -15676;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82298fac
	if (cr0.eq) goto loc_82298FAC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82298FAC:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-15704
	r11.s64 = r11.s64 + -15704;
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

__attribute__((alias("__imp__sub_82298FD0"))) PPC_WEAK_FUNC(sub_82298FD0);
PPC_FUNC_IMPL(__imp__sub_82298FD0) {
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
	// bl 0x82298da8
	sub_82298DA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82298FF8"))) PPC_WEAK_FUNC(sub_82298FF8);
PPC_FUNC_IMPL(__imp__sub_82298FF8) {
	PPC_FUNC_PROLOGUE();
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
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,276(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// bl 0x821cf790
	sub_821CF790(ctx, base);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 * ctx.f1.f64));
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

__attribute__((alias("__imp__sub_82299040"))) PPC_WEAK_FUNC(sub_82299040);
PPC_FUNC_IMPL(__imp__sub_82299040) {
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
	// lwz r16,-15552(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + -15552);
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-15588
	r11.s64 = r11.s64 + -15588;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822990a4
	if (cr0.eq) goto loc_822990A4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822990A4:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-15704
	r11.s64 = r11.s64 + -15704;
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

__attribute__((alias("__imp__sub_82299048"))) PPC_WEAK_FUNC(sub_82299048);
PPC_FUNC_IMPL(__imp__sub_82299048) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-15588
	r11.s64 = r11.s64 + -15588;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822990a4
	if (cr0.eq) goto loc_822990A4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822990A4:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-15704
	r11.s64 = r11.s64 + -15704;
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

__attribute__((alias("__imp__sub_822990C8"))) PPC_WEAK_FUNC(sub_822990C8);
PPC_FUNC_IMPL(__imp__sub_822990C8) {
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
	// bl 0x82298da8
	sub_82298DA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822990F0"))) PPC_WEAK_FUNC(sub_822990F0);
PPC_FUNC_IMPL(__imp__sub_822990F0) {
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
	// lwz r16,-15464(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + -15464);
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-15500
	r11.s64 = r11.s64 + -15500;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82299154
	if (cr0.eq) goto loc_82299154;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82299154:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-15704
	r11.s64 = r11.s64 + -15704;
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

__attribute__((alias("__imp__sub_822990F8"))) PPC_WEAK_FUNC(sub_822990F8);
PPC_FUNC_IMPL(__imp__sub_822990F8) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-15500
	r11.s64 = r11.s64 + -15500;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82299154
	if (cr0.eq) goto loc_82299154;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82299154:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-15704
	r11.s64 = r11.s64 + -15704;
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

__attribute__((alias("__imp__sub_82299178"))) PPC_WEAK_FUNC(sub_82299178);
PPC_FUNC_IMPL(__imp__sub_82299178) {
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
	// bl 0x82298da8
	sub_82298DA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822991A0"))) PPC_WEAK_FUNC(sub_822991A0);
PPC_FUNC_IMPL(__imp__sub_822991A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// addi r11,r3,76
	r11.s64 = ctx.r3.s64 + 76;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x821af800
	sub_821AF800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822991D0"))) PPC_WEAK_FUNC(sub_822991D0);
PPC_FUNC_IMPL(__imp__sub_822991D0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r29,r30,-96
	r29.s64 = r30.s64 + -96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82376140
	sub_82376140(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15352
	ctx.r4.s64 = r11.s64 + -15352;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,-88
	ctx.r5.s64 = r30.s64 + -88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15364
	ctx.r4.s64 = r11.s64 + -15364;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,-84
	ctx.r5.s64 = r30.s64 + -84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15380
	ctx.r4.s64 = r11.s64 + -15380;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,-100
	ctx.r5.s64 = r30.s64 + -100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15400
	ctx.r4.s64 = r11.s64 + -15400;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,-92
	ctx.r5.s64 = r30.s64 + -92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15416
	ctx.r4.s64 = r11.s64 + -15416;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822992C0"))) PPC_WEAK_FUNC(sub_822992C0);
PPC_FUNC_IMPL(__imp__sub_822992C0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822992C8"))) PPC_WEAK_FUNC(sub_822992C8);
PPC_FUNC_IMPL(__imp__sub_822992C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 148, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822992D4"))) PPC_WEAK_FUNC(sub_822992D4);
PPC_FUNC_IMPL(__imp__sub_822992D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822992D8"))) PPC_WEAK_FUNC(sub_822992D8);
PPC_FUNC_IMPL(__imp__sub_822992D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 148, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822992E4"))) PPC_WEAK_FUNC(sub_822992E4);
PPC_FUNC_IMPL(__imp__sub_822992E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822992E8"))) PPC_WEAK_FUNC(sub_822992E8);
PPC_FUNC_IMPL(__imp__sub_822992E8) {
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
	// beq 0x82299328
	if (cr0.eq) goto loc_82299328;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,21632
	ctx.r3.s64 = r11.s64 + 21632;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82299330
	goto loc_82299330;
loc_82299328:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82299330:
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

__attribute__((alias("__imp__sub_8229934C"))) PPC_WEAK_FUNC(sub_8229934C);
PPC_FUNC_IMPL(__imp__sub_8229934C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299350"))) PPC_WEAK_FUNC(sub_82299350);
PPC_FUNC_IMPL(__imp__sub_82299350) {
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
	// beq 0x82299390
	if (cr0.eq) goto loc_82299390;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,21664
	ctx.r3.s64 = r11.s64 + 21664;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82299398
	goto loc_82299398;
loc_82299390:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82299398:
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

__attribute__((alias("__imp__sub_822993B4"))) PPC_WEAK_FUNC(sub_822993B4);
PPC_FUNC_IMPL(__imp__sub_822993B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822993B8"))) PPC_WEAK_FUNC(sub_822993B8);
PPC_FUNC_IMPL(__imp__sub_822993B8) {
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
	// beq 0x822993f8
	if (cr0.eq) goto loc_822993F8;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,21696
	ctx.r3.s64 = r11.s64 + 21696;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82299400
	goto loc_82299400;
loc_822993F8:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82299400:
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

__attribute__((alias("__imp__sub_8229941C"))) PPC_WEAK_FUNC(sub_8229941C);
PPC_FUNC_IMPL(__imp__sub_8229941C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299420"))) PPC_WEAK_FUNC(sub_82299420);
PPC_FUNC_IMPL(__imp__sub_82299420) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32128
	r30.s64 = -2105540608;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,24312(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24312);
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 264);
	// lwz r11,216(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	// lfs f13,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fdivs f0,f1,f13
	f0.f64 = double(float(ctx.f1.f64 / ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x821c5238
	sub_821C5238(ctx, base);
	// lwz r11,24312(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24312);
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
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
	// lwz r10,24312(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24312);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r10,36
	ctx.r3.s64 = ctx.r10.s64 + 36;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r7.u32);
	// bl 0x821af870
	sub_821AF870(ctx, base);
	// lwz r3,24312(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24312);
	// bl 0x821b2800
	sub_821B2800(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_822994E8"))) PPC_WEAK_FUNC(sub_822994E8);
PPC_FUNC_IMPL(__imp__sub_822994E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// lwz r16,-15328(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + -15328);
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-15676
	r11.s64 = r11.s64 + -15676;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x821425d0
	sub_821425D0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// bne cr6,0x82299530
	if (!cr6.eq) goto loc_82299530;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82299540
	goto loc_82299540;
loc_82299530:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_82299540:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r29,292
	r11.s64 = r29.s64 + 292;
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
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
	// lfs f0,64(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 64);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822994F0"))) PPC_WEAK_FUNC(sub_822994F0);
PPC_FUNC_IMPL(__imp__sub_822994F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-15676
	r11.s64 = r11.s64 + -15676;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x821425d0
	sub_821425D0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// bne cr6,0x82299530
	if (!cr6.eq) goto loc_82299530;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82299540
	goto loc_82299540;
loc_82299530:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_82299540:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r29,292
	r11.s64 = r29.s64 + 292;
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
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
	// lfs f0,64(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 64);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822995A0"))) PPC_WEAK_FUNC(sub_822995A0);
PPC_FUNC_IMPL(__imp__sub_822995A0) {
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
	// bl 0x82298da8
	sub_82298DA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822995C8"))) PPC_WEAK_FUNC(sub_822995C8);
PPC_FUNC_IMPL(__imp__sub_822995C8) {
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
	// bl 0x82298f50
	sub_82298F50(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822995f8
	if (cr0.eq) goto loc_822995F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822995F8:
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

__attribute__((alias("__imp__sub_82299614"))) PPC_WEAK_FUNC(sub_82299614);
PPC_FUNC_IMPL(__imp__sub_82299614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299618"))) PPC_WEAK_FUNC(sub_82299618);
PPC_FUNC_IMPL(__imp__sub_82299618) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,-1332
	ctx.r3.s64 = r11.s64 + -1332;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82356db0
	sub_82356DB0(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r10,276(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 276);
loc_8229964C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r7,r7,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82299670
	if (cr0.eq) goto loc_82299670;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x8229964c
	if (cr6.eq) goto loc_8229964C;
loc_82299670:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82299680
	if (cr0.eq) goto loc_82299680;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x821d1710
	sub_821D1710(ctx, base);
loc_82299680:
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

__attribute__((alias("__imp__sub_82299694"))) PPC_WEAK_FUNC(sub_82299694);
PPC_FUNC_IMPL(__imp__sub_82299694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299698"))) PPC_WEAK_FUNC(sub_82299698);
PPC_FUNC_IMPL(__imp__sub_82299698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// bl 0x82299420
	sub_82299420(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// bl 0x82298e90
	sub_82298E90(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,240(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stfs f12,48(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// stfs f13,52(r11)
	temp.f32 = float(ctx.f13.f64);
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x821b2800
	sub_821B2800(ctx, base);
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

__attribute__((alias("__imp__sub_8229976C"))) PPC_WEAK_FUNC(sub_8229976C);
PPC_FUNC_IMPL(__imp__sub_8229976C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299770"))) PPC_WEAK_FUNC(sub_82299770);
PPC_FUNC_IMPL(__imp__sub_82299770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-15272(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + -15272);
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// addi r11,r11,-15588
	r11.s64 = r11.s64 + -15588;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82140908
	sub_82140908(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// bne cr6,0x822997bc
	if (!cr6.eq) goto loc_822997BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822997cc
	goto loc_822997CC;
loc_822997BC:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_822997CC:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82299778"))) PPC_WEAK_FUNC(sub_82299778);
PPC_FUNC_IMPL(__imp__sub_82299778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// addi r11,r11,-15588
	r11.s64 = r11.s64 + -15588;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82140908
	sub_82140908(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// bne cr6,0x822997bc
	if (!cr6.eq) goto loc_822997BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822997cc
	goto loc_822997CC;
loc_822997BC:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_822997CC:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822997FC"))) PPC_WEAK_FUNC(sub_822997FC);
PPC_FUNC_IMPL(__imp__sub_822997FC) {
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
	// bl 0x82298da8
	sub_82298DA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82299824"))) PPC_WEAK_FUNC(sub_82299824);
PPC_FUNC_IMPL(__imp__sub_82299824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299828"))) PPC_WEAK_FUNC(sub_82299828);
PPC_FUNC_IMPL(__imp__sub_82299828) {
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
	// bl 0x82299048
	sub_82299048(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82299858
	if (cr0.eq) goto loc_82299858;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82299858:
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

__attribute__((alias("__imp__sub_82299874"))) PPC_WEAK_FUNC(sub_82299874);
PPC_FUNC_IMPL(__imp__sub_82299874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299878"))) PPC_WEAK_FUNC(sub_82299878);
PPC_FUNC_IMPL(__imp__sub_82299878) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,-15224
	ctx.r3.s64 = r11.s64 + -15224;
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// lis r11,-32128
	r11.s64 = -2105540608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,24324(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24324);
	// bl 0x82141298
	sub_82141298(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x821bd9e8
	sub_821BD9E8(ctx, base);
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

__attribute__((alias("__imp__sub_822998CC"))) PPC_WEAK_FUNC(sub_822998CC);
PPC_FUNC_IMPL(__imp__sub_822998CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822998D0"))) PPC_WEAK_FUNC(sub_822998D0);
PPC_FUNC_IMPL(__imp__sub_822998D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lfs f31,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f31.f64 = double(temp.f32);
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// bl 0x82299420
	sub_82299420(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// bl 0x82298e00
	sub_82298E00(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x821b2800
	sub_821B2800(ctx, base);
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

__attribute__((alias("__imp__sub_82299948"))) PPC_WEAK_FUNC(sub_82299948);
PPC_FUNC_IMPL(__imp__sub_82299948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-15200(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + -15200);
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// addi r11,r11,-15500
	r11.s64 = r11.s64 + -15500;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82140908
	sub_82140908(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// bne cr6,0x82299994
	if (!cr6.eq) goto loc_82299994;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822999a4
	goto loc_822999A4;
loc_82299994:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_822999A4:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82299950"))) PPC_WEAK_FUNC(sub_82299950);
PPC_FUNC_IMPL(__imp__sub_82299950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// addi r11,r11,-15500
	r11.s64 = r11.s64 + -15500;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82140908
	sub_82140908(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// bne cr6,0x82299994
	if (!cr6.eq) goto loc_82299994;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822999a4
	goto loc_822999A4;
loc_82299994:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_822999A4:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822999D4"))) PPC_WEAK_FUNC(sub_822999D4);
PPC_FUNC_IMPL(__imp__sub_822999D4) {
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
	// bl 0x82298da8
	sub_82298DA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822999FC"))) PPC_WEAK_FUNC(sub_822999FC);
PPC_FUNC_IMPL(__imp__sub_822999FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299A00"))) PPC_WEAK_FUNC(sub_82299A00);
PPC_FUNC_IMPL(__imp__sub_82299A00) {
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
	// bl 0x822990f8
	sub_822990F8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82299a30
	if (cr0.eq) goto loc_82299A30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82299A30:
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

__attribute__((alias("__imp__sub_82299A4C"))) PPC_WEAK_FUNC(sub_82299A4C);
PPC_FUNC_IMPL(__imp__sub_82299A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299A50"))) PPC_WEAK_FUNC(sub_82299A50);
PPC_FUNC_IMPL(__imp__sub_82299A50) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,-15224
	ctx.r3.s64 = r11.s64 + -15224;
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// lis r11,-32128
	r11.s64 = -2105540608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,24324(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24324);
	// bl 0x82141298
	sub_82141298(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x821bd9e8
	sub_821BD9E8(ctx, base);
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

__attribute__((alias("__imp__sub_82299AA4"))) PPC_WEAK_FUNC(sub_82299AA4);
PPC_FUNC_IMPL(__imp__sub_82299AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299AA8"))) PPC_WEAK_FUNC(sub_82299AA8);
PPC_FUNC_IMPL(__imp__sub_82299AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lfs f31,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f31.f64 = double(temp.f32);
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// bl 0x82299420
	sub_82299420(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// bl 0x82298e00
	sub_82298E00(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x821b2800
	sub_821B2800(ctx, base);
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

__attribute__((alias("__imp__sub_82299B20"))) PPC_WEAK_FUNC(sub_82299B20);
PPC_FUNC_IMPL(__imp__sub_82299B20) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r11,17(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82299b90
	if (cr0.eq) goto loc_82299B90;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,16016
	r11.s64 = r11.s64 + 16016;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82299b90
	if (!cr0.eq) goto loc_82299B90;
	// lwz r31,132(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// b 0x82299b84
	goto loc_82299B84;
loc_82299B6C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82299B84:
	// lwz r11,136(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82299b6c
	if (!cr6.eq) goto loc_82299B6C;
loc_82299B90:
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

__attribute__((alias("__imp__sub_82299BA8"))) PPC_WEAK_FUNC(sub_82299BA8);
PPC_FUNC_IMPL(__imp__sub_82299BA8) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// b 0x82299be8
	goto loc_82299BE8;
loc_82299BC4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82299be4
	if (cr0.eq) goto loc_82299BE4;
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
loc_82299BE4:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82299BE8:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82299bc4
	if (!cr6.eq) goto loc_82299BC4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82299BFC"))) PPC_WEAK_FUNC(sub_82299BFC);
PPC_FUNC_IMPL(__imp__sub_82299BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299C00"))) PPC_WEAK_FUNC(sub_82299C00);
PPC_FUNC_IMPL(__imp__sub_82299C00) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// b 0x82299c40
	goto loc_82299C40;
loc_82299C1C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82299c3c
	if (cr0.eq) goto loc_82299C3C;
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
loc_82299C3C:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82299C40:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82299c1c
	if (!cr6.eq) goto loc_82299C1C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82299C54"))) PPC_WEAK_FUNC(sub_82299C54);
PPC_FUNC_IMPL(__imp__sub_82299C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299C58"))) PPC_WEAK_FUNC(sub_82299C58);
PPC_FUNC_IMPL(__imp__sub_82299C58) {
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
	// lis r31,-32128
	r31.s64 = -2105540608;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-15112
	ctx.r4.s64 = r11.s64 + -15112;
	// lwz r3,24324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24324);
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-15132
	ctx.r4.s64 = r11.s64 + -15132;
	// lis r11,-32128
	r11.s64 = -2105540608;
	// stw r3,24312(r11)
	PPC_STORE_U32(r11.u32 + 24312, ctx.r3.u32);
	// lwz r3,24324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24324);
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-15152
	ctx.r4.s64 = r11.s64 + -15152;
	// lis r11,-32128
	r11.s64 = -2105540608;
	// stw r3,24316(r11)
	PPC_STORE_U32(r11.u32 + 24316, ctx.r3.u32);
	// lwz r3,24324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24324);
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// lis r11,-32128
	r11.s64 = -2105540608;
	// stw r3,24320(r11)
	PPC_STORE_U32(r11.u32 + 24320, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82299CD4"))) PPC_WEAK_FUNC(sub_82299CD4);
PPC_FUNC_IMPL(__imp__sub_82299CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299CD8"))) PPC_WEAK_FUNC(sub_82299CD8);
PPC_FUNC_IMPL(__imp__sub_82299CD8) {
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
	// bl 0x82376eb0
	sub_82376EB0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-15068
	ctx.r4.s64 = r11.s64 + -15068;
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// stb r30,8(r11)
	PPC_STORE_U8(r11.u32 + 8, r30.u8);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r10,r31,100
	ctx.r10.s64 = r31.s64 + 100;
	// addi r9,r11,48
	ctx.r9.s64 = r11.s64 + 48;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r9,-15092
	ctx.r4.s64 = ctx.r9.s64 + -15092;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// stb r30,8(r11)
	PPC_STORE_U8(r11.u32 + 8, r30.u8);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// addi r11,r31,116
	r11.s64 = r31.s64 + 116;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82299DB4"))) PPC_WEAK_FUNC(sub_82299DB4);
PPC_FUNC_IMPL(__imp__sub_82299DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299DB8"))) PPC_WEAK_FUNC(sub_82299DB8);
PPC_FUNC_IMPL(__imp__sub_82299DB8) {
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
	// blt cr6,0x82299e00
	if (cr6.lt) goto loc_82299E00;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_82299E00:
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
	// bl 0x822992e8
	sub_822992E8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82299e38
	if (cr0.eq) goto loc_82299E38;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_82299E38:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82299e58
	if (cr6.eq) goto loc_82299E58;
loc_82299E44:
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
	// bne 0x82299e44
	if (!cr0.eq) goto loc_82299E44;
loc_82299E58:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x82299e80
	if (!cr0.eq) goto loc_82299E80;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82299e80
	if (cr0.eq) goto loc_82299E80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_82299E80:
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

__attribute__((alias("__imp__sub_82299EB4"))) PPC_WEAK_FUNC(sub_82299EB4);
PPC_FUNC_IMPL(__imp__sub_82299EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299EB8"))) PPC_WEAK_FUNC(sub_82299EB8);
PPC_FUNC_IMPL(__imp__sub_82299EB8) {
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
	// blt cr6,0x82299f00
	if (cr6.lt) goto loc_82299F00;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_82299F00:
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
	// bl 0x82299350
	sub_82299350(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82299f38
	if (cr0.eq) goto loc_82299F38;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_82299F38:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82299f58
	if (cr6.eq) goto loc_82299F58;
loc_82299F44:
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
	// bne 0x82299f44
	if (!cr0.eq) goto loc_82299F44;
loc_82299F58:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x82299f80
	if (!cr0.eq) goto loc_82299F80;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82299f80
	if (cr0.eq) goto loc_82299F80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_82299F80:
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

__attribute__((alias("__imp__sub_82299FB4"))) PPC_WEAK_FUNC(sub_82299FB4);
PPC_FUNC_IMPL(__imp__sub_82299FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82299FB8"))) PPC_WEAK_FUNC(sub_82299FB8);
PPC_FUNC_IMPL(__imp__sub_82299FB8) {
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
	// blt cr6,0x8229a000
	if (cr6.lt) goto loc_8229A000;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8229A000:
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
	// bl 0x822993b8
	sub_822993B8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8229a038
	if (cr0.eq) goto loc_8229A038;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_8229A038:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8229a058
	if (cr6.eq) goto loc_8229A058;
loc_8229A044:
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
	// bne 0x8229a044
	if (!cr0.eq) goto loc_8229A044;
loc_8229A058:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x8229a080
	if (!cr0.eq) goto loc_8229A080;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8229a080
	if (cr0.eq) goto loc_8229A080;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_8229A080:
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

__attribute__((alias("__imp__sub_8229A0B4"))) PPC_WEAK_FUNC(sub_8229A0B4);
PPC_FUNC_IMPL(__imp__sub_8229A0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229A0B8"))) PPC_WEAK_FUNC(sub_8229A0B8);
PPC_FUNC_IMPL(__imp__sub_8229A0B8) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-14896(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14896);
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
	// beq cr6,0x8229a104
	if (cr6.eq) goto loc_8229A104;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r30,156
	ctx.r3.s64 = r30.s64 + 156;
	// addi r11,r11,-14916
	r11.s64 = r11.s64 + -14916;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8229A104:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82375fe8
	sub_82375FE8(ctx, base);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r7,r7,-14980
	ctx.r7.s64 = ctx.r7.s64 + -14980;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f12,-14920(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -14920);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r8,r8,-15040
	ctx.r8.s64 = ctx.r8.s64 + -15040;
	// lfs f0,-25388(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25388);
	f0.f64 = double(temp.f32);
	// addi r11,r30,76
	r11.s64 = r30.s64 + 76;
	// addi r10,r30,88
	ctx.r10.s64 = r30.s64 + 88;
	// lfs f13,-14988(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14988);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r30,132
	ctx.r9.s64 = r30.s64 + 132;
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r7,r8,-152
	ctx.r7.s64 = ctx.r8.s64 + -152;
	// stwx r7,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + r30.u32, ctx.r7.u32);
	// stfs f0,56(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 56, temp.u32);
	// stfs f13,60(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 60, temp.u32);
	// stw r6,68(r30)
	PPC_STORE_U32(r30.u32 + 68, ctx.r6.u32);
	// stfs f12,64(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 64, temp.u32);
	// stw r6,72(r30)
	PPC_STORE_U32(r30.u32 + 72, ctx.r6.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// lis r11,-32128
	r11.s64 = -2105540608;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r29.u32);
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r29.u32);
	// stw r29,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r29.u32);
	// stw r29,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r29.u32);
	// stw r29,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r29.u32);
	// stw r30,24308(r11)
	PPC_STORE_U32(r11.u32 + 24308, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8229A0C0"))) PPC_WEAK_FUNC(sub_8229A0C0);
PPC_FUNC_IMPL(__imp__sub_8229A0C0) {
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
	// beq cr6,0x8229a104
	if (cr6.eq) goto loc_8229A104;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r30,156
	ctx.r3.s64 = r30.s64 + 156;
	// addi r11,r11,-14916
	r11.s64 = r11.s64 + -14916;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8229A104:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82375fe8
	sub_82375FE8(ctx, base);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r7,r7,-14980
	ctx.r7.s64 = ctx.r7.s64 + -14980;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f12,-14920(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -14920);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r8,r8,-15040
	ctx.r8.s64 = ctx.r8.s64 + -15040;
	// lfs f0,-25388(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25388);
	f0.f64 = double(temp.f32);
	// addi r11,r30,76
	r11.s64 = r30.s64 + 76;
	// addi r10,r30,88
	ctx.r10.s64 = r30.s64 + 88;
	// lfs f13,-14988(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14988);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r30,132
	ctx.r9.s64 = r30.s64 + 132;
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r7,r8,-152
	ctx.r7.s64 = ctx.r8.s64 + -152;
	// stwx r7,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + r30.u32, ctx.r7.u32);
	// stfs f0,56(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 56, temp.u32);
	// stfs f13,60(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 60, temp.u32);
	// stw r6,68(r30)
	PPC_STORE_U32(r30.u32 + 68, ctx.r6.u32);
	// stfs f12,64(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 64, temp.u32);
	// stw r6,72(r30)
	PPC_STORE_U32(r30.u32 + 72, ctx.r6.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// lis r11,-32128
	r11.s64 = -2105540608;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r29.u32);
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r29.u32);
	// stw r29,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r29.u32);
	// stw r29,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r29.u32);
	// stw r29,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r29.u32);
	// stw r30,24308(r11)
	PPC_STORE_U32(r11.u32 + 24308, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8229A1BC"))) PPC_WEAK_FUNC(sub_8229A1BC);
PPC_FUNC_IMPL(__imp__sub_8229A1BC) {
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
	// beq 0x8229a1f0
	if (cr0.eq) goto loc_8229A1F0;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,156
	ctx.r3.s64 = r11.s64 + 156;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_8229A1F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229A200"))) PPC_WEAK_FUNC(sub_8229A200);
PPC_FUNC_IMPL(__imp__sub_8229A200) {
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
	// bl 0x82283910
	sub_82283910(ctx, base);
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

__attribute__((alias("__imp__sub_8229A230"))) PPC_WEAK_FUNC(sub_8229A230);
PPC_FUNC_IMPL(__imp__sub_8229A230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x8229a200
	sub_8229A200(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229A23C"))) PPC_WEAK_FUNC(sub_8229A23C);
PPC_FUNC_IMPL(__imp__sub_8229A23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229A240"))) PPC_WEAK_FUNC(sub_8229A240);
PPC_FUNC_IMPL(__imp__sub_8229A240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x822991d0
	sub_822991D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229A24C"))) PPC_WEAK_FUNC(sub_8229A24C);
PPC_FUNC_IMPL(__imp__sub_8229A24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229A250"))) PPC_WEAK_FUNC(sub_8229A250);
PPC_FUNC_IMPL(__imp__sub_8229A250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8229ae80
	sub_8229AE80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229A25C"))) PPC_WEAK_FUNC(sub_8229A25C);
PPC_FUNC_IMPL(__imp__sub_8229A25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229A260"))) PPC_WEAK_FUNC(sub_8229A260);
PPC_FUNC_IMPL(__imp__sub_8229A260) {
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
	// lwz r16,-14840(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14840);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32128
	r27.s64 = -2105540608;
	// lwz r11,24332(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24332);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8229a2e4
	if (!cr0.eq) goto loc_8229A2E4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,24332(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24332, r11.u32);
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
	// bl 0x82283910
	sub_82283910(ctx, base);
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
	// stw r3,24328(r27)
	PPC_STORE_U32(r27.u32 + 24328, ctx.r3.u32);
	// b 0x8229a2e8
	goto loc_8229A2E8;
loc_8229A2E4:
	// lwz r3,24328(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 24328);
loc_8229A2E8:
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
	// beq 0x8229a324
	if (cr0.eq) goto loc_8229A324;
	// lwz r11,-152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -152);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-152
	ctx.r3.s64 = r11.s64 + -152;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8229a3a0
	goto loc_8229A3A0;
loc_8229A324:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8229a384
	if (!cr0.eq) goto loc_8229A384;
	// addic. r11,r30,-156
	xer.ca = r30.u32 > 155;
	r11.s64 = r30.s64 + -156;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8229a348
	if (!cr0.eq) goto loc_8229A348;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8229a358
	goto loc_8229A358;
loc_8229A348:
	// lwz r11,-152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -152);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-152
	ctx.r3.s64 = r11.s64 + -152;
loc_8229A358:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -152);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-152
	ctx.r4.s64 = r11.s64 + -152;
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
loc_8229A384:
	// lwz r11,-152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -152);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-152
	ctx.r3.s64 = r11.s64 + -152;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8229A3A0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8229A268"))) PPC_WEAK_FUNC(sub_8229A268);
PPC_FUNC_IMPL(__imp__sub_8229A268) {
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
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32128
	r27.s64 = -2105540608;
	// lwz r11,24332(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24332);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8229a2e4
	if (!cr0.eq) goto loc_8229A2E4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,24332(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24332, r11.u32);
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
	// bl 0x82283910
	sub_82283910(ctx, base);
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
	// stw r3,24328(r27)
	PPC_STORE_U32(r27.u32 + 24328, ctx.r3.u32);
	// b 0x8229a2e8
	goto loc_8229A2E8;
loc_8229A2E4:
	// lwz r3,24328(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 24328);
loc_8229A2E8:
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
	// beq 0x8229a324
	if (cr0.eq) goto loc_8229A324;
	// lwz r11,-152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -152);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-152
	ctx.r3.s64 = r11.s64 + -152;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8229a3a0
	goto loc_8229A3A0;
loc_8229A324:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8229a384
	if (!cr0.eq) goto loc_8229A384;
	// addic. r11,r30,-156
	xer.ca = r30.u32 > 155;
	r11.s64 = r30.s64 + -156;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8229a348
	if (!cr0.eq) goto loc_8229A348;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8229a358
	goto loc_8229A358;
loc_8229A348:
	// lwz r11,-152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -152);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-152
	ctx.r3.s64 = r11.s64 + -152;
loc_8229A358:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -152);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-152
	ctx.r4.s64 = r11.s64 + -152;
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
loc_8229A384:
	// lwz r11,-152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -152);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-152
	ctx.r3.s64 = r11.s64 + -152;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8229A3A0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8229A3AC"))) PPC_WEAK_FUNC(sub_8229A3AC);
PPC_FUNC_IMPL(__imp__sub_8229A3AC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	r11.s64 = -2105540608;
	// addi r11,r11,24332
	r11.s64 = r11.s64 + 24332;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,24332
	ctx.r10.s64 = ctx.r10.s64 + 24332;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229A3D4"))) PPC_WEAK_FUNC(sub_8229A3D4);
PPC_FUNC_IMPL(__imp__sub_8229A3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229A3D8"))) PPC_WEAK_FUNC(sub_8229A3D8);
PPC_FUNC_IMPL(__imp__sub_8229A3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8229a268
	sub_8229A268(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229A3E4"))) PPC_WEAK_FUNC(sub_8229A3E4);
PPC_FUNC_IMPL(__imp__sub_8229A3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229A3E8"))) PPC_WEAK_FUNC(sub_8229A3E8);
PPC_FUNC_IMPL(__imp__sub_8229A3E8) {
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
	// beq cr6,0x8229a428
	if (cr6.eq) goto loc_8229A428;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8229a418
	if (cr0.eq) goto loc_8229A418;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8229A418:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x8229a43c
	goto loc_8229A43C;
loc_8229A428:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82299db8
	sub_82299DB8(ctx, base);
loc_8229A43C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229A44C"))) PPC_WEAK_FUNC(sub_8229A44C);
PPC_FUNC_IMPL(__imp__sub_8229A44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229A450"))) PPC_WEAK_FUNC(sub_8229A450);
PPC_FUNC_IMPL(__imp__sub_8229A450) {
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
	// beq cr6,0x8229a490
	if (cr6.eq) goto loc_8229A490;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8229a480
	if (cr0.eq) goto loc_8229A480;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8229A480:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x8229a4a4
	goto loc_8229A4A4;
loc_8229A490:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82299eb8
	sub_82299EB8(ctx, base);
loc_8229A4A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229A4B4"))) PPC_WEAK_FUNC(sub_8229A4B4);
PPC_FUNC_IMPL(__imp__sub_8229A4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229A4B8"))) PPC_WEAK_FUNC(sub_8229A4B8);
PPC_FUNC_IMPL(__imp__sub_8229A4B8) {
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
	// beq cr6,0x8229a4f8
	if (cr6.eq) goto loc_8229A4F8;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8229a4e8
	if (cr0.eq) goto loc_8229A4E8;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8229A4E8:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x8229a50c
	goto loc_8229A50C;
loc_8229A4F8:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82299fb8
	sub_82299FB8(ctx, base);
loc_8229A50C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229A51C"))) PPC_WEAK_FUNC(sub_8229A51C);
PPC_FUNC_IMPL(__imp__sub_8229A51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229A520"))) PPC_WEAK_FUNC(sub_8229A520);
PPC_FUNC_IMPL(__imp__sub_8229A520) {
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
	// beq cr6,0x8229a568
	if (cr6.eq) goto loc_8229A568;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8229a560
	if (cr0.eq) goto loc_8229A560;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x8229a564
	goto loc_8229A564;
loc_8229A560:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8229A564:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_8229A568:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8229A574"))) PPC_WEAK_FUNC(sub_8229A574);
PPC_FUNC_IMPL(__imp__sub_8229A574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229A578"))) PPC_WEAK_FUNC(sub_8229A578);
PPC_FUNC_IMPL(__imp__sub_8229A578) {
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
	// beq cr6,0x8229a5c0
	if (cr6.eq) goto loc_8229A5C0;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8229a5b8
	if (cr0.eq) goto loc_8229A5B8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x8229a5bc
	goto loc_8229A5BC;
loc_8229A5B8:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8229A5BC:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_8229A5C0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8229A5CC"))) PPC_WEAK_FUNC(sub_8229A5CC);
PPC_FUNC_IMPL(__imp__sub_8229A5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229A5D0"))) PPC_WEAK_FUNC(sub_8229A5D0);
PPC_FUNC_IMPL(__imp__sub_8229A5D0) {
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
	// beq cr6,0x8229a618
	if (cr6.eq) goto loc_8229A618;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8229a610
	if (cr0.eq) goto loc_8229A610;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x8229a614
	goto loc_8229A614;
loc_8229A610:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8229A614:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_8229A618:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8229A624"))) PPC_WEAK_FUNC(sub_8229A624);
PPC_FUNC_IMPL(__imp__sub_8229A624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229A628"))) PPC_WEAK_FUNC(sub_8229A628);
PPC_FUNC_IMPL(__imp__sub_8229A628) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-14696(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14696);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82376dd8
	sub_82376DD8(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// stw r11,24324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24324, r11.u32);
	// bl 0x82299c58
	sub_82299C58(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-14740
	ctx.r4.s64 = r11.s64 + -14740;
	// bl 0x8212e060
	sub_8212E060(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
	// bl 0x821d1710
	sub_821D1710(ctx, base);
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8229a6d8
	if (!cr6.gt) goto loc_8229A6D8;
	// addi r27,r30,76
	r27.s64 = r30.s64 + 76;
loc_8229A690:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8229a6b4
	if (cr0.eq) goto loc_8229A6B4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822994f0
	sub_822994F0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8229a6b8
	goto loc_8229A6B8;
loc_8229A6B4:
	// li r11,0
	r11.s64 = 0;
loc_8229A6B8:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x8229a3e8
	sub_8229A3E8(ctx, base);
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8229a690
	if (cr6.lt) goto loc_8229A690;
loc_8229A6D8:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-14756
	ctx.r4.s64 = r11.s64 + -14756;
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8229a750
	if (!cr6.gt) goto loc_8229A750;
	// addi r27,r30,88
	r27.s64 = r30.s64 + 88;
loc_8229A704:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8229a72c
	if (cr0.eq) goto loc_8229A72C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lfs f1,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82299778
	sub_82299778(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8229a730
	goto loc_8229A730;
loc_8229A72C:
	// li r11,0
	r11.s64 = 0;
loc_8229A730:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x8229a450
	sub_8229A450(ctx, base);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8229a704
	if (cr6.lt) goto loc_8229A704;
loc_8229A750:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-14776
	ctx.r4.s64 = r11.s64 + -14776;
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8229a78c
	if (cr0.eq) goto loc_8229A78C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f1,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82299950
	sub_82299950(ctx, base);
	// b 0x8229a790
	goto loc_8229A790;
loc_8229A78C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8229A790:
	// stw r3,144(r30)
	PPC_STORE_U32(r30.u32 + 144, ctx.r3.u32);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8229A630"))) PPC_WEAK_FUNC(sub_8229A630);
PPC_FUNC_IMPL(__imp__sub_8229A630) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82376dd8
	sub_82376DD8(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// stw r11,24324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24324, r11.u32);
	// bl 0x82299c58
	sub_82299C58(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-14740
	ctx.r4.s64 = r11.s64 + -14740;
	// bl 0x8212e060
	sub_8212E060(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
	// bl 0x821d1710
	sub_821D1710(ctx, base);
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8229a6d8
	if (!cr6.gt) goto loc_8229A6D8;
	// addi r27,r30,76
	r27.s64 = r30.s64 + 76;
loc_8229A690:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8229a6b4
	if (cr0.eq) goto loc_8229A6B4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822994f0
	sub_822994F0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8229a6b8
	goto loc_8229A6B8;
loc_8229A6B4:
	// li r11,0
	r11.s64 = 0;
loc_8229A6B8:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x8229a3e8
	sub_8229A3E8(ctx, base);
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8229a690
	if (cr6.lt) goto loc_8229A690;
loc_8229A6D8:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-14756
	ctx.r4.s64 = r11.s64 + -14756;
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8229a750
	if (!cr6.gt) goto loc_8229A750;
	// addi r27,r30,88
	r27.s64 = r30.s64 + 88;
loc_8229A704:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8229a72c
	if (cr0.eq) goto loc_8229A72C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lfs f1,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82299778
	sub_82299778(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8229a730
	goto loc_8229A730;
loc_8229A72C:
	// li r11,0
	r11.s64 = 0;
loc_8229A730:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x8229a450
	sub_8229A450(ctx, base);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8229a704
	if (cr6.lt) goto loc_8229A704;
loc_8229A750:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-14776
	ctx.r4.s64 = r11.s64 + -14776;
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8229a78c
	if (cr0.eq) goto loc_8229A78C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f1,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82299950
	sub_82299950(ctx, base);
	// b 0x8229a790
	goto loc_8229A790;
loc_8229A78C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8229A790:
	// stw r3,144(r30)
	PPC_STORE_U32(r30.u32 + 144, ctx.r3.u32);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8229A79C"))) PPC_WEAK_FUNC(sub_8229A79C);
PPC_FUNC_IMPL(__imp__sub_8229A79C) {
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

__attribute__((alias("__imp__sub_8229A7C4"))) PPC_WEAK_FUNC(sub_8229A7C4);
PPC_FUNC_IMPL(__imp__sub_8229A7C4) {
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

__attribute__((alias("__imp__sub_8229A7EC"))) PPC_WEAK_FUNC(sub_8229A7EC);
PPC_FUNC_IMPL(__imp__sub_8229A7EC) {
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

__attribute__((alias("__imp__sub_8229A814"))) PPC_WEAK_FUNC(sub_8229A814);
PPC_FUNC_IMPL(__imp__sub_8229A814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229A818"))) PPC_WEAK_FUNC(sub_8229A818);
PPC_FUNC_IMPL(__imp__sub_8229A818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r6,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r31.u32);
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r29,132
	ctx.r3.s64 = r29.s64 + 132;
	// bl 0x8229a4b8
	sub_8229A4B8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 + f0.f64));
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8229A8C0"))) PPC_WEAK_FUNC(sub_8229A8C0);
PPC_FUNC_IMPL(__imp__sub_8229A8C0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd0
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8229a520
	sub_8229A520(ctx, base);
	// addi r11,r31,100
	r11.s64 = r31.s64 + 100;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r19,0
	r19.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// lha r9,8(r26)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(r26.u32 + 8));
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x8229aa98
	if (!cr0.gt) goto loc_8229AA98;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r29,0
	r29.s64 = 0;
	// addi r25,r11,-14584
	r25.s64 = r11.s64 + -14584;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r28,0
	r28.s64 = 0;
	// addi r24,r11,24280
	r24.s64 = r11.s64 + 24280;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r20,0
	r20.s64 = 0;
	// addi r23,r11,-14592
	r23.s64 = r11.s64 + -14592;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r22,r11,-14600
	r22.s64 = r11.s64 + -14600;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r21,r11,-14608
	r21.s64 = r11.s64 + -14608;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r27,r11,7116
	r27.s64 = r11.s64 + 7116;
loc_8229A958:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r20,r11
	ctx.r3.u64 = r20.u64 + r11.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8229aa60
	if (!cr0.eq) goto loc_8229AA60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8229aa3c
	if (!cr0.eq) goto loc_8229AA3C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8229aa3c
	if (!cr0.eq) goto loc_8229AA3C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8229aa3c
	if (!cr0.eq) goto loc_8229AA3C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8229aa3c
	if (!cr0.eq) goto loc_8229AA3C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8229aa84
	if (cr0.eq) goto loc_8229AA84;
	// addi r10,r31,116
	ctx.r10.s64 = r31.s64 + 116;
	// lfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r18,8(r10)
	r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// stw r18,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r18.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// bl 0x8229a818
	sub_8229A818(ctx, base);
	// b 0x8229aa60
	goto loc_8229AA60;
loc_8229AA3C:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lfs f1,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// bl 0x8229a818
	sub_8229A818(ctx, base);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
loc_8229AA60:
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lfs f1,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x8229a818
	sub_8229A818(ctx, base);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
loc_8229AA84:
	// lha r11,8(r26)
	r11.s64 = int16_t(PPC_LOAD_U16(r26.u32 + 8));
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// addi r20,r20,8
	r20.s64 = r20.s64 + 8;
	// cmpw cr6,r19,r11
	cr6.compare<int32_t>(r19.s32, r11.s32, xer);
	// blt cr6,0x8229a958
	if (cr6.lt) goto loc_8229A958;
loc_8229AA98:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_8229AAA0"))) PPC_WEAK_FUNC(sub_8229AAA0);
PPC_FUNC_IMPL(__imp__sub_8229AAA0) {
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
	// lwz r16,-14544(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14544);
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
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lwz r11,24340(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24340);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// addi r28,r9,24336
	r28.s64 = ctx.r9.s64 + 24336;
	// bne 0x8229ab0c
	if (!cr0.eq) goto loc_8229AB0C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,24340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24340, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-14576
	ctx.r4.s64 = r11.s64 + -14576;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8229AB0C:
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
	// beq 0x8229ab48
	if (cr0.eq) goto loc_8229AB48;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r26,-156
	ctx.r3.s64 = r26.s64 + -156;
	// bl 0x8229a8c0
	sub_8229A8C0(ctx, base);
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
	// b 0x8229ab94
	goto loc_8229AB94;
loc_8229AB48:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r26,-96
	ctx.r4.s64 = r26.s64 + -96;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82377300
	sub_82377300(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8229ab8c
	if (cr6.eq) goto loc_8229AB8C;
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
	// beq 0x8229ab98
	if (cr0.eq) goto loc_8229AB98;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8229ab98
	goto loc_8229AB98;
loc_8229AB8C:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_8229AB94:
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
loc_8229AB98:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8229AAA8"))) PPC_WEAK_FUNC(sub_8229AAA8);
PPC_FUNC_IMPL(__imp__sub_8229AAA8) {
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
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lwz r11,24340(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24340);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// addi r28,r9,24336
	r28.s64 = ctx.r9.s64 + 24336;
	// bne 0x8229ab0c
	if (!cr0.eq) goto loc_8229AB0C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,24340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24340, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-14576
	ctx.r4.s64 = r11.s64 + -14576;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8229AB0C:
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
	// beq 0x8229ab48
	if (cr0.eq) goto loc_8229AB48;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r26,-156
	ctx.r3.s64 = r26.s64 + -156;
	// bl 0x8229a8c0
	sub_8229A8C0(ctx, base);
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
	// b 0x8229ab94
	goto loc_8229AB94;
loc_8229AB48:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r26,-96
	ctx.r4.s64 = r26.s64 + -96;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82377300
	sub_82377300(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8229ab8c
	if (cr6.eq) goto loc_8229AB8C;
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
	// beq 0x8229ab98
	if (cr0.eq) goto loc_8229AB98;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8229ab98
	goto loc_8229AB98;
loc_8229AB8C:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_8229AB94:
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
loc_8229AB98:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8229ABA4"))) PPC_WEAK_FUNC(sub_8229ABA4);
PPC_FUNC_IMPL(__imp__sub_8229ABA4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	r11.s64 = -2105540608;
	// addi r11,r11,24340
	r11.s64 = r11.s64 + 24340;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,24340
	ctx.r10.s64 = ctx.r10.s64 + 24340;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229ABCC"))) PPC_WEAK_FUNC(sub_8229ABCC);
PPC_FUNC_IMPL(__imp__sub_8229ABCC) {
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

__attribute__((alias("__imp__sub_8229ABF4"))) PPC_WEAK_FUNC(sub_8229ABF4);
PPC_FUNC_IMPL(__imp__sub_8229ABF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229ABF8"))) PPC_WEAK_FUNC(sub_8229ABF8);
PPC_FUNC_IMPL(__imp__sub_8229ABF8) {
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82299ba8
	sub_82299BA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8229a5d0
	sub_8229A5D0(ctx, base);
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

__attribute__((alias("__imp__sub_8229AC4C"))) PPC_WEAK_FUNC(sub_8229AC4C);
PPC_FUNC_IMPL(__imp__sub_8229AC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229AC50"))) PPC_WEAK_FUNC(sub_8229AC50);
PPC_FUNC_IMPL(__imp__sub_8229AC50) {
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82299c00
	sub_82299C00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8229a578
	sub_8229A578(ctx, base);
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

__attribute__((alias("__imp__sub_8229ACA4"))) PPC_WEAK_FUNC(sub_8229ACA4);
PPC_FUNC_IMPL(__imp__sub_8229ACA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229ACA8"))) PPC_WEAK_FUNC(sub_8229ACA8);
PPC_FUNC_IMPL(__imp__sub_8229ACA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x8229aaa8
	sub_8229AAA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229ACB4"))) PPC_WEAK_FUNC(sub_8229ACB4);
PPC_FUNC_IMPL(__imp__sub_8229ACB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229ACB8"))) PPC_WEAK_FUNC(sub_8229ACB8);
PPC_FUNC_IMPL(__imp__sub_8229ACB8) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-14432(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14432);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-15040
	r11.s64 = r11.s64 + -15040;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,-14980
	ctx.r10.s64 = ctx.r10.s64 + -14980;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,-156(r30)
	PPC_STORE_U32(r30.u32 + -156, r11.u32);
	// lwz r11,-152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -152);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-152(r11)
	PPC_STORE_U32(r11.u32 + -152, ctx.r10.u32);
	// lwz r11,-152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -152);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-152
	ctx.r10.s64 = r11.s64 + -152;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-156(r11)
	PPC_STORE_U32(r11.u32 + -156, ctx.r10.u32);
	// addi r29,r30,-68
	r29.s64 = r30.s64 + -68;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8229abf8
	sub_8229ABF8(ctx, base);
	// addi r28,r30,-80
	r28.s64 = r30.s64 + -80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8229ac50
	sub_8229AC50(ctx, base);
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8229ad48
	if (cr0.eq) goto loc_8229AD48;
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
loc_8229AD48:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-12(r30)
	PPC_STORE_U32(r30.u32 + -12, r11.u32);
	// lwz r4,-24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -24);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8229ad70
	if (cr0.eq) goto loc_8229AD70;
	// lwz r11,-16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -16);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8229AD70:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8229ad90
	if (cr0.eq) goto loc_8229AD90;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8229AD90:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8229adb0
	if (cr0.eq) goto loc_8229ADB0;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8229ADB0:
	// addi r3,r30,-96
	ctx.r3.s64 = r30.s64 + -96;
	// bl 0x82376478
	sub_82376478(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8229ACC0"))) PPC_WEAK_FUNC(sub_8229ACC0);
PPC_FUNC_IMPL(__imp__sub_8229ACC0) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-15040
	r11.s64 = r11.s64 + -15040;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,-14980
	ctx.r10.s64 = ctx.r10.s64 + -14980;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,-156(r30)
	PPC_STORE_U32(r30.u32 + -156, r11.u32);
	// lwz r11,-152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -152);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-152(r11)
	PPC_STORE_U32(r11.u32 + -152, ctx.r10.u32);
	// lwz r11,-152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -152);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-152
	ctx.r10.s64 = r11.s64 + -152;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-156(r11)
	PPC_STORE_U32(r11.u32 + -156, ctx.r10.u32);
	// addi r29,r30,-68
	r29.s64 = r30.s64 + -68;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8229abf8
	sub_8229ABF8(ctx, base);
	// addi r28,r30,-80
	r28.s64 = r30.s64 + -80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8229ac50
	sub_8229AC50(ctx, base);
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8229ad48
	if (cr0.eq) goto loc_8229AD48;
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
loc_8229AD48:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-12(r30)
	PPC_STORE_U32(r30.u32 + -12, r11.u32);
	// lwz r4,-24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -24);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8229ad70
	if (cr0.eq) goto loc_8229AD70;
	// lwz r11,-16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -16);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8229AD70:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8229ad90
	if (cr0.eq) goto loc_8229AD90;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8229AD90:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8229adb0
	if (cr0.eq) goto loc_8229ADB0;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8229ADB0:
	// addi r3,r30,-96
	ctx.r3.s64 = r30.s64 + -96;
	// bl 0x82376478
	sub_82376478(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8229ADC0"))) PPC_WEAK_FUNC(sub_8229ADC0);
PPC_FUNC_IMPL(__imp__sub_8229ADC0) {
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
	// addi r11,r11,-156
	r11.s64 = r11.s64 + -156;
	// addi r3,r11,60
	ctx.r3.s64 = r11.s64 + 60;
	// bl 0x82376478
	sub_82376478(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229ADF0"))) PPC_WEAK_FUNC(sub_8229ADF0);
PPC_FUNC_IMPL(__imp__sub_8229ADF0) {
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
	// addi r11,r11,-156
	r11.s64 = r11.s64 + -156;
	// addi r3,r11,76
	ctx.r3.s64 = r11.s64 + 76;
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

__attribute__((alias("__imp__sub_8229AE20"))) PPC_WEAK_FUNC(sub_8229AE20);
PPC_FUNC_IMPL(__imp__sub_8229AE20) {
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
	// addi r11,r11,-156
	r11.s64 = r11.s64 + -156;
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
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

__attribute__((alias("__imp__sub_8229AE50"))) PPC_WEAK_FUNC(sub_8229AE50);
PPC_FUNC_IMPL(__imp__sub_8229AE50) {
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
	// addi r11,r11,-156
	r11.s64 = r11.s64 + -156;
	// addi r3,r11,132
	ctx.r3.s64 = r11.s64 + 132;
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

__attribute__((alias("__imp__sub_8229AE80"))) PPC_WEAK_FUNC(sub_8229AE80);
PPC_FUNC_IMPL(__imp__sub_8229AE80) {
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
	// addi r30,r3,-156
	r30.s64 = ctx.r3.s64 + -156;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,156
	r31.s64 = r30.s64 + 156;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229acc0
	sub_8229ACC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8229aeb8
	if (cr0.eq) goto loc_8229AEB8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8229AEB8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8229AEC4"))) PPC_WEAK_FUNC(sub_8229AEC4);
PPC_FUNC_IMPL(__imp__sub_8229AEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229AEC8"))) PPC_WEAK_FUNC(sub_8229AEC8);
PPC_FUNC_IMPL(__imp__sub_8229AEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229AED8"))) PPC_WEAK_FUNC(sub_8229AED8);
PPC_FUNC_IMPL(__imp__sub_8229AED8) {
	PPC_FUNC_PROLOGUE();
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229AEE0"))) PPC_WEAK_FUNC(sub_8229AEE0);
PPC_FUNC_IMPL(__imp__sub_8229AEE0) {
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
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,18972(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
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

__attribute__((alias("__imp__sub_8229AF18"))) PPC_WEAK_FUNC(sub_8229AF18);
PPC_FUNC_IMPL(__imp__sub_8229AF18) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,0
	r30.s64 = 0;
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// ble 0x8229af84
	if (!cr0.gt) goto loc_8229AF84;
loc_8229AF48:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8229af90
	if (!cr0.eq) goto loc_8229AF90;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// blt cr6,0x8229af48
	if (cr6.lt) goto loc_8229AF48;
loc_8229AF84:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8229AF88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
loc_8229AF90:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8229af88
	goto loc_8229AF88;
}

__attribute__((alias("__imp__sub_8229AF98"))) PPC_WEAK_FUNC(sub_8229AF98);
PPC_FUNC_IMPL(__imp__sub_8229AF98) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x8229afc4
	if (cr0.eq) goto loc_8229AFC4;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8229AFC4:
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

__attribute__((alias("__imp__sub_8229AFDC"))) PPC_WEAK_FUNC(sub_8229AFDC);
PPC_FUNC_IMPL(__imp__sub_8229AFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229AFE0"))) PPC_WEAK_FUNC(sub_8229AFE0);
PPC_FUNC_IMPL(__imp__sub_8229AFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,-22924
	r11.s64 = r11.s64 + -22924;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229AFF0"))) PPC_WEAK_FUNC(sub_8229AFF0);
PPC_FUNC_IMPL(__imp__sub_8229AFF0) {
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
	// lwz r16,-14096(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14096);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-14164
	r11.s64 = r11.s64 + -14164;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// addi r10,r10,-14220
	ctx.r10.s64 = ctx.r10.s64 + -14220;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r9,r9,-14284
	ctx.r9.s64 = ctx.r9.s64 + -14284;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-156
	ctx.r10.s64 = r11.s64 + -156;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8229b078
	if (cr0.eq) goto loc_8229B078;
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
loc_8229B078:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,-22924
	r11.s64 = r11.s64 + -22924;
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// addi r3,r29,60
	ctx.r3.s64 = r29.s64 + 60;
	// bl 0x82376478
	sub_82376478(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8229AFF8"))) PPC_WEAK_FUNC(sub_8229AFF8);
PPC_FUNC_IMPL(__imp__sub_8229AFF8) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-14164
	r11.s64 = r11.s64 + -14164;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// addi r10,r10,-14220
	ctx.r10.s64 = ctx.r10.s64 + -14220;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r9,r9,-14284
	ctx.r9.s64 = ctx.r9.s64 + -14284;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-156
	ctx.r10.s64 = r11.s64 + -156;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8229b078
	if (cr0.eq) goto loc_8229B078;
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
loc_8229B078:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,-22924
	r11.s64 = r11.s64 + -22924;
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// addi r3,r29,60
	ctx.r3.s64 = r29.s64 + 60;
	// bl 0x82376478
	sub_82376478(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8229B0A0"))) PPC_WEAK_FUNC(sub_8229B0A0);
PPC_FUNC_IMPL(__imp__sub_8229B0A0) {
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
	// bl 0x8229aec8
	sub_8229AEC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229B0C8"))) PPC_WEAK_FUNC(sub_8229B0C8);
PPC_FUNC_IMPL(__imp__sub_8229B0C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8229b0f4
	if (cr6.eq) goto loc_8229B0F4;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x8229b0fc
	goto loc_8229B0FC;
loc_8229B0F4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8229B0FC:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r3,r11,60
	ctx.r3.s64 = r11.s64 + 60;
	// bl 0x82376478
	sub_82376478(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229B118"))) PPC_WEAK_FUNC(sub_8229B118);
PPC_FUNC_IMPL(__imp__sub_8229B118) {
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
	// addi r3,r11,80
	ctx.r3.s64 = r11.s64 + 80;
	// bl 0x8229afe0
	sub_8229AFE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229B144"))) PPC_WEAK_FUNC(sub_8229B144);
PPC_FUNC_IMPL(__imp__sub_8229B144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229B148"))) PPC_WEAK_FUNC(sub_8229B148);
PPC_FUNC_IMPL(__imp__sub_8229B148) {
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
	// bl 0x82283a30
	sub_82283A30(ctx, base);
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

__attribute__((alias("__imp__sub_8229B178"))) PPC_WEAK_FUNC(sub_8229B178);
PPC_FUNC_IMPL(__imp__sub_8229B178) {
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
	// bl 0x82376330
	sub_82376330(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8229b1b8
	if (cr0.eq) goto loc_8229B1B8;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8229b1bc
	if (!cr0.eq) goto loc_8229B1BC;
loc_8229B1B8:
	// li r11,0
	r11.s64 = 0;
loc_8229B1BC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_8229B1D4"))) PPC_WEAK_FUNC(sub_8229B1D4);
PPC_FUNC_IMPL(__imp__sub_8229B1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229B1D8"))) PPC_WEAK_FUNC(sub_8229B1D8);
PPC_FUNC_IMPL(__imp__sub_8229B1D8) {
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
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8229b208
	if (cr0.eq) goto loc_8229B208;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8229B208:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8229b228
	if (cr0.eq) goto loc_8229B228;
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
loc_8229B228:
	// li r11,0
	r11.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
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

__attribute__((alias("__imp__sub_8229B244"))) PPC_WEAK_FUNC(sub_8229B244);
PPC_FUNC_IMPL(__imp__sub_8229B244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229B248"))) PPC_WEAK_FUNC(sub_8229B248);
PPC_FUNC_IMPL(__imp__sub_8229B248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bgt cr6,0x8229b288
	if (cr6.gt) goto loc_8229B288;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f0,-14040(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -14040);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x8229b28c
	if (!cr6.lt) goto loc_8229B28C;
loc_8229B288:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = f0.f64;
loc_8229B28C:
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// li r31,0
	r31.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x8229b2f4
	if (!cr0.gt) goto loc_8229B2F4;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,560(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	f0.f64 = double(temp.f32);
	// fsubs f31,f31,f0
	f31.f64 = double(float(f31.f64 - f0.f64));
loc_8229B2B8:
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x8229b2b8
	if (cr6.lt) goto loc_8229B2B8;
loc_8229B2F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_8229B310"))) PPC_WEAK_FUNC(sub_8229B310);
PPC_FUNC_IMPL(__imp__sub_8229B310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// bl 0x8229b1d8
	sub_8229B1D8(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-7564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7564);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r11,-14036
	ctx.r4.s64 = r11.s64 + -14036;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f2,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lwz r11,148(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r3,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f31,-14040(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -14040);
	f31.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,-25364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	f31.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f30,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f30.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229B478"))) PPC_WEAK_FUNC(sub_8229B478);
PPC_FUNC_IMPL(__imp__sub_8229B478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// addi r31,r30,32
	r31.s64 = r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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
	// bne 0x8229b4c8
	if (!cr0.eq) goto loc_8229B4C8;
	// mftb r11
	r11.u64 = __rdtsc();
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8229B4C8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// lfs f3,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f3.f64 = double(temp.f32);
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fdivs f4,f0,f30
	ctx.f4.f64 = double(float(f0.f64 / f30.f64));
	// bl 0x8226f5b8
	sub_8226F5B8(ctx, base);
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

__attribute__((alias("__imp__sub_8229B524"))) PPC_WEAK_FUNC(sub_8229B524);
PPC_FUNC_IMPL(__imp__sub_8229B524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229B528"))) PPC_WEAK_FUNC(sub_8229B528);
PPC_FUNC_IMPL(__imp__sub_8229B528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lfs f12,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,18804(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18804);
	f0.f64 = double(temp.f32);
	// ld r11,40(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// sradi r11,r11,32
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0xFFFFFFFF) != 0);
	r11.s64 = r11.s64 >> 32;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// std r11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r11.u64);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f11,-8(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// lfs f13,18800(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18800);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// li r11,1
	r11.s64 = 1;
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f0,f11,f0,f13
	f0.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// blt cr6,0x8229b588
	if (cr6.lt) goto loc_8229B588;
	// li r11,0
	r11.s64 = 0;
loc_8229B588:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229B590"))) PPC_WEAK_FUNC(sub_8229B590);
PPC_FUNC_IMPL(__imp__sub_8229B590) {
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
	// lwz r4,64(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r11,r5,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(r30.u32, 1, xer);
	// blt cr6,0x8229b628
	if (cr6.lt) goto loc_8229B628;
	// beq cr6,0x8229b5fc
	if (cr6.eq) goto loc_8229B5FC;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(r30.u32, 3, xer);
	// blt cr6,0x8229b5f0
	if (cr6.lt) goto loc_8229B5F0;
	// bne cr6,0x8229b608
	if (!cr6.eq) goto loc_8229B608;
	// lhz r11,8(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
loc_8229B5E0:
	// bne cr6,0x8229b608
	if (!cr6.eq) goto loc_8229B608;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// b 0x8229b654
	goto loc_8229B654;
loc_8229B5F0:
	// lhz r11,8(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// b 0x8229b5e0
	goto loc_8229B5E0;
loc_8229B5FC:
	// lhz r11,8(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8229b650
	if (cr6.eq) goto loc_8229B650;
loc_8229B608:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,18972(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18972);
loc_8229B610:
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
loc_8229B628:
	// lhz r11,8(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x8229b608
	if (!cr6.eq) goto loc_8229B608;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8229b608
	if (cr6.eq) goto loc_8229B608;
loc_8229B650:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8229B654:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// b 0x8229b610
	goto loc_8229B610;
}

__attribute__((alias("__imp__sub_8229B660"))) PPC_WEAK_FUNC(sub_8229B660);
PPC_FUNC_IMPL(__imp__sub_8229B660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lha r3,8(r11)
	ctx.r3.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 8));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229B66C"))) PPC_WEAK_FUNC(sub_8229B66C);
PPC_FUNC_IMPL(__imp__sub_8229B66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229B670"))) PPC_WEAK_FUNC(sub_8229B670);
PPC_FUNC_IMPL(__imp__sub_8229B670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x8229b148
	sub_8229B148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229B67C"))) PPC_WEAK_FUNC(sub_8229B67C);
PPC_FUNC_IMPL(__imp__sub_8229B67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229B680"))) PPC_WEAK_FUNC(sub_8229B680);
PPC_FUNC_IMPL(__imp__sub_8229B680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-164
	ctx.r3.s64 = ctx.r3.s64 + -164;
	// b 0x8229bda0
	sub_8229BDA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229B690"))) PPC_WEAK_FUNC(sub_8229B690);
PPC_FUNC_IMPL(__imp__sub_8229B690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-100
	ctx.r3.s64 = ctx.r3.s64 + -100;
	// b 0x82376140
	sub_82376140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229B6A0"))) PPC_WEAK_FUNC(sub_8229B6A0);
PPC_FUNC_IMPL(__imp__sub_8229B6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-100
	ctx.r3.s64 = ctx.r3.s64 + -100;
	// b 0x82376110
	sub_82376110(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229B6B0"))) PPC_WEAK_FUNC(sub_8229B6B0);
PPC_FUNC_IMPL(__imp__sub_8229B6B0) {
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
	// lwz r16,-14008(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14008);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32128
	r27.s64 = -2105540608;
	// lwz r11,24348(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24348);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8229b734
	if (!cr0.eq) goto loc_8229B734;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,24348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24348, r11.u32);
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
	// bl 0x82283a30
	sub_82283A30(ctx, base);
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
	// stw r3,24344(r27)
	PPC_STORE_U32(r27.u32 + 24344, ctx.r3.u32);
	// b 0x8229b738
	goto loc_8229B738;
loc_8229B734:
	// lwz r3,24344(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 24344);
loc_8229B738:
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
	// beq 0x8229b774
	if (cr0.eq) goto loc_8229B774;
	// lwz r11,-156(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -156);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-156
	ctx.r3.s64 = r11.s64 + -156;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8229b7f0
	goto loc_8229B7F0;
loc_8229B774:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8229b7d4
	if (!cr0.eq) goto loc_8229B7D4;
	// addic. r11,r30,-164
	xer.ca = r30.u32 > 163;
	r11.s64 = r30.s64 + -164;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8229b798
	if (!cr0.eq) goto loc_8229B798;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8229b7a8
	goto loc_8229B7A8;
loc_8229B798:
	// lwz r11,-156(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -156);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-156
	ctx.r3.s64 = r11.s64 + -156;
loc_8229B7A8:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-156(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -156);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-156
	ctx.r4.s64 = r11.s64 + -156;
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
loc_8229B7D4:
	// lwz r11,-156(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -156);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-156
	ctx.r3.s64 = r11.s64 + -156;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8229B7F0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8229B6B8"))) PPC_WEAK_FUNC(sub_8229B6B8);
PPC_FUNC_IMPL(__imp__sub_8229B6B8) {
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
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32128
	r27.s64 = -2105540608;
	// lwz r11,24348(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24348);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8229b734
	if (!cr0.eq) goto loc_8229B734;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,24348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24348, r11.u32);
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
	// bl 0x82283a30
	sub_82283A30(ctx, base);
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
	// stw r3,24344(r27)
	PPC_STORE_U32(r27.u32 + 24344, ctx.r3.u32);
	// b 0x8229b738
	goto loc_8229B738;
loc_8229B734:
	// lwz r3,24344(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 24344);
loc_8229B738:
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
	// beq 0x8229b774
	if (cr0.eq) goto loc_8229B774;
	// lwz r11,-156(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -156);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-156
	ctx.r3.s64 = r11.s64 + -156;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8229b7f0
	goto loc_8229B7F0;
loc_8229B774:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8229b7d4
	if (!cr0.eq) goto loc_8229B7D4;
	// addic. r11,r30,-164
	xer.ca = r30.u32 > 163;
	r11.s64 = r30.s64 + -164;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8229b798
	if (!cr0.eq) goto loc_8229B798;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8229b7a8
	goto loc_8229B7A8;
loc_8229B798:
	// lwz r11,-156(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -156);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-156
	ctx.r3.s64 = r11.s64 + -156;
loc_8229B7A8:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-156(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -156);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-156
	ctx.r4.s64 = r11.s64 + -156;
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
loc_8229B7D4:
	// lwz r11,-156(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -156);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-156
	ctx.r3.s64 = r11.s64 + -156;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8229B7F0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8229B7FC"))) PPC_WEAK_FUNC(sub_8229B7FC);
PPC_FUNC_IMPL(__imp__sub_8229B7FC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	r11.s64 = -2105540608;
	// addi r11,r11,24348
	r11.s64 = r11.s64 + 24348;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,24348
	ctx.r10.s64 = ctx.r10.s64 + 24348;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229B824"))) PPC_WEAK_FUNC(sub_8229B824);
PPC_FUNC_IMPL(__imp__sub_8229B824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229B828"))) PPC_WEAK_FUNC(sub_8229B828);
PPC_FUNC_IMPL(__imp__sub_8229B828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8226f8e8
	sub_8226F8E8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stfs f31,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// stfs f31,52(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r11.u64);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// lwz r10,18972(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18972);
	// stw r10,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// stfs f31,72(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_8229B8AC"))) PPC_WEAK_FUNC(sub_8229B8AC);
PPC_FUNC_IMPL(__imp__sub_8229B8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229B8B0"))) PPC_WEAK_FUNC(sub_8229B8B0);
PPC_FUNC_IMPL(__imp__sub_8229B8B0) {
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
	// lwz r16,-13912(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13912);
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
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x8229b8fc
	if (cr6.eq) goto loc_8229B8FC;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r30,164
	ctx.r3.s64 = r30.s64 + 164;
	// addi r11,r11,-13944
	r11.s64 = r11.s64 + -13944;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8229B8FC:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r28,r30,4
	r28.s64 = r30.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82375fe8
	sub_82375FE8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-14164
	r11.s64 = r11.s64 + -14164;
	// addi r10,r10,-14220
	ctx.r10.s64 = ctx.r10.s64 + -14220;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r9,r9,-14284
	ctx.r9.s64 = ctx.r9.s64 + -14284;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r3,r30,80
	ctx.r3.s64 = r30.s64 + 80;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-156
	ctx.r10.s64 = r11.s64 + -156;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
	// stw r29,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r29.u32);
	// stw r29,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r29.u32);
	// bl 0x8229b828
	sub_8229B828(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8229B8B8"))) PPC_WEAK_FUNC(sub_8229B8B8);
PPC_FUNC_IMPL(__imp__sub_8229B8B8) {
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
	// beq cr6,0x8229b8fc
	if (cr6.eq) goto loc_8229B8FC;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r30,164
	ctx.r3.s64 = r30.s64 + 164;
	// addi r11,r11,-13944
	r11.s64 = r11.s64 + -13944;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8229B8FC:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r28,r30,4
	r28.s64 = r30.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82375fe8
	sub_82375FE8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-14164
	r11.s64 = r11.s64 + -14164;
	// addi r10,r10,-14220
	ctx.r10.s64 = ctx.r10.s64 + -14220;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r9,r9,-14284
	ctx.r9.s64 = ctx.r9.s64 + -14284;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r3,r30,80
	ctx.r3.s64 = r30.s64 + 80;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-156
	ctx.r10.s64 = r11.s64 + -156;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
	// stw r29,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r29.u32);
	// stw r29,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r29.u32);
	// bl 0x8229b828
	sub_8229B828(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8229B984"))) PPC_WEAK_FUNC(sub_8229B984);
PPC_FUNC_IMPL(__imp__sub_8229B984) {
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
	// beq 0x8229b9b8
	if (cr0.eq) goto loc_8229B9B8;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,164
	ctx.r3.s64 = r11.s64 + 164;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_8229B9B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229B9C8"))) PPC_WEAK_FUNC(sub_8229B9C8);
PPC_FUNC_IMPL(__imp__sub_8229B9C8) {
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
	// bl 0x8229aec8
	sub_8229AEC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229B9F0"))) PPC_WEAK_FUNC(sub_8229B9F0);
PPC_FUNC_IMPL(__imp__sub_8229B9F0) {
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
	// bl 0x82376478
	sub_82376478(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229BA1C"))) PPC_WEAK_FUNC(sub_8229BA1C);
PPC_FUNC_IMPL(__imp__sub_8229BA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229BA20"))) PPC_WEAK_FUNC(sub_8229BA20);
PPC_FUNC_IMPL(__imp__sub_8229BA20) {
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
	// lwz r16,-13800(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13800);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// bl 0x823769e8
	sub_823769E8(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// beq 0x8229ba8c
	if (cr0.eq) goto loc_8229BA8C;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-13848
	ctx.r4.s64 = r11.s64 + -13848;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// bl 0x8231b358
	sub_8231B358(ctx, base);
	// b 0x8229ba90
	goto loc_8229BA90;
loc_8229BA8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8229BA90:
	// stw r3,56(r28)
	PPC_STORE_U32(r28.u32 + 56, ctx.r3.u32);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8229baa4
	if (cr0.eq) goto loc_8229BAA4;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_8229BAA4:
	// addi r3,r28,-4
	ctx.r3.s64 = r28.s64 + -4;
	// bl 0x8229b1d8
	sub_8229B1D8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,68(r28)
	PPC_STORE_U32(r28.u32 + 68, r11.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8229BA28"))) PPC_WEAK_FUNC(sub_8229BA28);
PPC_FUNC_IMPL(__imp__sub_8229BA28) {
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
	// li r29,0
	r29.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// bl 0x823769e8
	sub_823769E8(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// beq 0x8229ba8c
	if (cr0.eq) goto loc_8229BA8C;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-13848
	ctx.r4.s64 = r11.s64 + -13848;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// bl 0x8231b358
	sub_8231B358(ctx, base);
	// b 0x8229ba90
	goto loc_8229BA90;
loc_8229BA8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8229BA90:
	// stw r3,56(r28)
	PPC_STORE_U32(r28.u32 + 56, ctx.r3.u32);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8229baa4
	if (cr0.eq) goto loc_8229BAA4;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_8229BAA4:
	// addi r3,r28,-4
	ctx.r3.s64 = r28.s64 + -4;
	// bl 0x8229b1d8
	sub_8229B1D8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,68(r28)
	PPC_STORE_U32(r28.u32 + 68, r11.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8229BABC"))) PPC_WEAK_FUNC(sub_8229BABC);
PPC_FUNC_IMPL(__imp__sub_8229BABC) {
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

__attribute__((alias("__imp__sub_8229BAE4"))) PPC_WEAK_FUNC(sub_8229BAE4);
PPC_FUNC_IMPL(__imp__sub_8229BAE4) {
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
	// beq 0x8229bb14
	if (cr0.eq) goto loc_8229BB14;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8235d458
	sub_8235D458(ctx, base);
loc_8229BB14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229BB24"))) PPC_WEAK_FUNC(sub_8229BB24);
PPC_FUNC_IMPL(__imp__sub_8229BB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229BB28"))) PPC_WEAK_FUNC(sub_8229BB28);
PPC_FUNC_IMPL(__imp__sub_8229BB28) {
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
	// bl 0x82376c90
	sub_82376C90(ctx, base);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8229bb58
	if (cr0.eq) goto loc_8229BB58;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
loc_8229BB58:
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bl 0x8229b1d8
	sub_8229B1D8(ctx, base);
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

__attribute__((alias("__imp__sub_8229BB74"))) PPC_WEAK_FUNC(sub_8229BB74);
PPC_FUNC_IMPL(__imp__sub_8229BB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229BB78"))) PPC_WEAK_FUNC(sub_8229BB78);
PPC_FUNC_IMPL(__imp__sub_8229BB78) {
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
	// bl 0x82376eb0
	sub_82376EB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// bl 0x82379f48
	sub_82379F48(ctx, base);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bl 0x8229b310
	sub_8229B310(ctx, base);
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

__attribute__((alias("__imp__sub_8229BBB8"))) PPC_WEAK_FUNC(sub_8229BBB8);
PPC_FUNC_IMPL(__imp__sub_8229BBB8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82377078
	sub_82377078(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// lfs f1,-14040(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -14040);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32128
	r11.s64 = -2105540608;
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// lfs f2,24360(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24360);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8229b478
	sub_8229B478(ctx, base);
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

__attribute__((alias("__imp__sub_8229BC04"))) PPC_WEAK_FUNC(sub_8229BC04);
PPC_FUNC_IMPL(__imp__sub_8229BC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229BC08"))) PPC_WEAK_FUNC(sub_8229BC08);
PPC_FUNC_IMPL(__imp__sub_8229BC08) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r9,76
	ctx.r3.s64 = ctx.r9.s64 + 76;
	// bl 0x8229b528
	sub_8229B528(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8229bc3c
	if (!cr0.eq) goto loc_8229BC3C;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82376560
	sub_82376560(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x8229bc40
	if (cr0.eq) goto loc_8229BC40;
loc_8229BC3C:
	// li r11,1
	r11.s64 = 1;
loc_8229BC40:
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

__attribute__((alias("__imp__sub_8229BC54"))) PPC_WEAK_FUNC(sub_8229BC54);
PPC_FUNC_IMPL(__imp__sub_8229BC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229BC58"))) PPC_WEAK_FUNC(sub_8229BC58);
PPC_FUNC_IMPL(__imp__sub_8229BC58) {
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
	// addi r9,r31,32
	ctx.r9.s64 = r31.s64 + 32;
	// mftb r11
	r11.u64 = __rdtsc();
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// ld r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// bl 0x8229b528
	sub_8229B528(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8229bd08
	if (cr0.eq) goto loc_8229BD08;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lfs f0,18804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18804);
	f0.f64 = double(temp.f32);
	// ld r11,8(r9)
	r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// sradi r11,r11,32
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0xFFFFFFFF) != 0);
	r11.s64 = r11.s64 >> 32;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f13,18800(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18800);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8229b248
	sub_8229B248(ctx, base);
loc_8229BD08:
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

__attribute__((alias("__imp__sub_8229BD1C"))) PPC_WEAK_FUNC(sub_8229BD1C);
PPC_FUNC_IMPL(__imp__sub_8229BD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229BD20"))) PPC_WEAK_FUNC(sub_8229BD20);
PPC_FUNC_IMPL(__imp__sub_8229BD20) {
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
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x8229bd6c
	if (!cr6.eq) goto loc_8229BD6C;
	// li r11,6
	r11.s64 = 6;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x8229bd78
	goto loc_8229BD78;
loc_8229BD6C:
	// li r11,1
	r11.s64 = 1;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8229BD78:
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

__attribute__((alias("__imp__sub_8229BD90"))) PPC_WEAK_FUNC(sub_8229BD90);
PPC_FUNC_IMPL(__imp__sub_8229BD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8229b6b8
	sub_8229B6B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229BD9C"))) PPC_WEAK_FUNC(sub_8229BD9C);
PPC_FUNC_IMPL(__imp__sub_8229BD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229BDA0"))) PPC_WEAK_FUNC(sub_8229BDA0);
PPC_FUNC_IMPL(__imp__sub_8229BDA0) {
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
	// bl 0x8229aff8
	sub_8229AFF8(ctx, base);
	// addi r3,r31,164
	ctx.r3.s64 = r31.s64 + 164;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8229bdd8
	if (cr0.eq) goto loc_8229BDD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8229BDD8:
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

__attribute__((alias("__imp__sub_8229BDF4"))) PPC_WEAK_FUNC(sub_8229BDF4);
PPC_FUNC_IMPL(__imp__sub_8229BDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229BDF8"))) PPC_WEAK_FUNC(sub_8229BDF8);
PPC_FUNC_IMPL(__imp__sub_8229BDF8) {
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
	// bl 0x82376dd8
	sub_82376DD8(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x8231b2f8
	sub_8231B2F8(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// lhz r11,10(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, r11.u16);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8229be48
	if (cr0.eq) goto loc_8229BE48;
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
loc_8229BE48:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-13728
	ctx.r4.s64 = r11.s64 + -13728;
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// bl 0x82298c50
	sub_82298C50(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// stw r3,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r3.u32);
	// bl 0x8237a758
	sub_8237A758(ctx, base);
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

__attribute__((alias("__imp__sub_8229BE84"))) PPC_WEAK_FUNC(sub_8229BE84);
PPC_FUNC_IMPL(__imp__sub_8229BE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229BE88"))) PPC_WEAK_FUNC(sub_8229BE88);
PPC_FUNC_IMPL(__imp__sub_8229BE88) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82377210
	sub_82377210(ctx, base);
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8229bfe4
	if (cr6.lt) goto loc_8229BFE4;
	// beq cr6,0x8229bf58
	if (cr6.eq) goto loc_8229BF58;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x8229bf34
	if (cr6.lt) goto loc_8229BF34;
	// beq cr6,0x8229bef8
	if (cr6.eq) goto loc_8229BEF8;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bge cr6,0x8229bfec
	if (!cr6.lt) goto loc_8229BFEC;
	// addi r30,r31,76
	r30.s64 = r31.s64 + 76;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8229bc58
	sub_8229BC58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8229b528
	sub_8229B528(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8229bfec
	if (!cr0.eq) goto loc_8229BFEC;
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bl 0x8229b1d8
	sub_8229B1D8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// b 0x8229bfdc
	goto loc_8229BFDC;
loc_8229BEF8:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8229bfec
	if (cr0.eq) goto loc_8229BFEC;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// bl 0x82379df8
	sub_82379DF8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8229bfec
	if (!cr0.eq) goto loc_8229BFEC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// bl 0x82379f80
	sub_82379F80(ctx, base);
	// b 0x8229bfec
	goto loc_8229BFEC;
loc_8229BF34:
	// addi r30,r31,76
	r30.s64 = r31.s64 + 76;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8229bc58
	sub_8229BC58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8229b528
	sub_8229B528(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8229bfec
	if (!cr0.eq) goto loc_8229BFEC;
	// li r11,3
	r11.s64 = 3;
	// b 0x8229bfdc
	goto loc_8229BFDC;
loc_8229BF58:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8229bfec
	if (cr0.eq) goto loc_8229BFEC;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// lfs f1,-14040(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -14040);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8229b248
	sub_8229B248(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// lfs f2,21760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21760);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8229b478
	sub_8229B478(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// lfs f1,-9640(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9640);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,2
	r11.s64 = 2;
loc_8229BFDC:
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// b 0x8229bfec
	goto loc_8229BFEC;
loc_8229BFE4:
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bl 0x8229b310
	sub_8229B310(ctx, base);
loc_8229BFEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_8229C008"))) PPC_WEAK_FUNC(sub_8229C008);
PPC_FUNC_IMPL(__imp__sub_8229C008) {
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
	// lwz r16,-13664(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13664);
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
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
	// beq 0x8229c0c8
	if (cr0.eq) goto loc_8229C0C8;
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
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// addi r4,r27,-164
	ctx.r4.s64 = r27.s64 + -164;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8229bd20
	sub_8229BD20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8229c0c8
	if (cr6.eq) goto loc_8229C0C8;
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
	// beq 0x8229c180
	if (cr0.eq) goto loc_8229C180;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_8229C0C0:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8229c180
	goto loc_8229C180;
loc_8229C0C8:
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lwz r11,24356(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24356);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// addi r29,r9,24352
	r29.s64 = ctx.r9.s64 + 24352;
	// bne 0x8229c0f8
	if (!cr0.eq) goto loc_8229C0F8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,24356(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24356, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-13716
	ctx.r4.s64 = r11.s64 + -13716;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8229C0F8:
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
	// beq 0x8229c134
	if (cr0.eq) goto loc_8229C134;
	// addi r3,r27,-164
	ctx.r3.s64 = r27.s64 + -164;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x8229c180
	goto loc_8229C180;
loc_8229C134:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r27,-100
	ctx.r4.s64 = r27.s64 + -100;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82377300
	sub_82377300(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8229c174
	if (cr6.eq) goto loc_8229C174;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8229c180
	if (cr0.eq) goto loc_8229C180;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x8229c0c0
	goto loc_8229C0C0;
loc_8229C174:
	// li r11,6
	r11.s64 = 6;
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_8229C180:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8229C010"))) PPC_WEAK_FUNC(sub_8229C010);
PPC_FUNC_IMPL(__imp__sub_8229C010) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
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
	// beq 0x8229c0c8
	if (cr0.eq) goto loc_8229C0C8;
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
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// addi r4,r27,-164
	ctx.r4.s64 = r27.s64 + -164;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8229bd20
	sub_8229BD20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8229c0c8
	if (cr6.eq) goto loc_8229C0C8;
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
	// beq 0x8229c180
	if (cr0.eq) goto loc_8229C180;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_8229C0C0:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8229c180
	goto loc_8229C180;
loc_8229C0C8:
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lwz r11,24356(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24356);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// addi r29,r9,24352
	r29.s64 = ctx.r9.s64 + 24352;
	// bne 0x8229c0f8
	if (!cr0.eq) goto loc_8229C0F8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,24356(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24356, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-13716
	ctx.r4.s64 = r11.s64 + -13716;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8229C0F8:
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
	// beq 0x8229c134
	if (cr0.eq) goto loc_8229C134;
	// addi r3,r27,-164
	ctx.r3.s64 = r27.s64 + -164;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x8229c180
	goto loc_8229C180;
loc_8229C134:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r27,-100
	ctx.r4.s64 = r27.s64 + -100;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82377300
	sub_82377300(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8229c174
	if (cr6.eq) goto loc_8229C174;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8229c180
	if (cr0.eq) goto loc_8229C180;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x8229c0c0
	goto loc_8229C0C0;
loc_8229C174:
	// li r11,6
	r11.s64 = 6;
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_8229C180:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8229C18C"))) PPC_WEAK_FUNC(sub_8229C18C);
PPC_FUNC_IMPL(__imp__sub_8229C18C) {
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

__attribute__((alias("__imp__sub_8229C1B4"))) PPC_WEAK_FUNC(sub_8229C1B4);
PPC_FUNC_IMPL(__imp__sub_8229C1B4) {
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

__attribute__((alias("__imp__sub_8229C1DC"))) PPC_WEAK_FUNC(sub_8229C1DC);
PPC_FUNC_IMPL(__imp__sub_8229C1DC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	r11.s64 = -2105540608;
	// addi r11,r11,24356
	r11.s64 = r11.s64 + 24356;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,24356
	ctx.r10.s64 = ctx.r10.s64 + 24356;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229C204"))) PPC_WEAK_FUNC(sub_8229C204);
PPC_FUNC_IMPL(__imp__sub_8229C204) {
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

__attribute__((alias("__imp__sub_8229C22C"))) PPC_WEAK_FUNC(sub_8229C22C);
PPC_FUNC_IMPL(__imp__sub_8229C22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229C230"))) PPC_WEAK_FUNC(sub_8229C230);
PPC_FUNC_IMPL(__imp__sub_8229C230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x8229c010
	sub_8229C010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229C23C"))) PPC_WEAK_FUNC(sub_8229C23C);
PPC_FUNC_IMPL(__imp__sub_8229C23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229C240"))) PPC_WEAK_FUNC(sub_8229C240);
PPC_FUNC_IMPL(__imp__sub_8229C240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// divw r3,r11,r10
	ctx.r3.s32 = r11.s32 / ctx.r10.s32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229C25C"))) PPC_WEAK_FUNC(sub_8229C25C);
PPC_FUNC_IMPL(__imp__sub_8229C25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229C260"))) PPC_WEAK_FUNC(sub_8229C260);
PPC_FUNC_IMPL(__imp__sub_8229C260) {
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
	// lwz r16,-13528(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13528);
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
	// li r26,0
	r26.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
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
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lwz r11,24368(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24368);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// addi r28,r9,24364
	r28.s64 = ctx.r9.s64 + 24364;
	// bne 0x8229c2cc
	if (!cr0.eq) goto loc_8229C2CC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,24368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24368, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-13560
	ctx.r4.s64 = r11.s64 + -13560;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8229C2CC:
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
	// beq 0x8229c308
	if (cr0.eq) goto loc_8229C308;
	// addi r3,r27,40
	ctx.r3.s64 = r27.s64 + 40;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x8229c358
	goto loc_8229C358;
loc_8229C308:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8229c34c
	if (cr6.eq) goto loc_8229C34C;
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
	// beq 0x8229c358
	if (cr0.eq) goto loc_8229C358;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8229c358
	goto loc_8229C358;
loc_8229C34C:
	// li r11,6
	r11.s64 = 6;
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_8229C358:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8229C268"))) PPC_WEAK_FUNC(sub_8229C268);
PPC_FUNC_IMPL(__imp__sub_8229C268) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
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
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lwz r11,24368(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24368);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// addi r28,r9,24364
	r28.s64 = ctx.r9.s64 + 24364;
	// bne 0x8229c2cc
	if (!cr0.eq) goto loc_8229C2CC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,24368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24368, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-13560
	ctx.r4.s64 = r11.s64 + -13560;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8229C2CC:
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
	// beq 0x8229c308
	if (cr0.eq) goto loc_8229C308;
	// addi r3,r27,40
	ctx.r3.s64 = r27.s64 + 40;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x8229c358
	goto loc_8229C358;
loc_8229C308:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8229c34c
	if (cr6.eq) goto loc_8229C34C;
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
	// beq 0x8229c358
	if (cr0.eq) goto loc_8229C358;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8229c358
	goto loc_8229C358;
loc_8229C34C:
	// li r11,6
	r11.s64 = 6;
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_8229C358:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8229C364"))) PPC_WEAK_FUNC(sub_8229C364);
PPC_FUNC_IMPL(__imp__sub_8229C364) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	r11.s64 = -2105540608;
	// addi r11,r11,24368
	r11.s64 = r11.s64 + 24368;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,24368
	ctx.r10.s64 = ctx.r10.s64 + 24368;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229C38C"))) PPC_WEAK_FUNC(sub_8229C38C);
PPC_FUNC_IMPL(__imp__sub_8229C38C) {
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

__attribute__((alias("__imp__sub_8229C3B4"))) PPC_WEAK_FUNC(sub_8229C3B4);
PPC_FUNC_IMPL(__imp__sub_8229C3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229C3B8"))) PPC_WEAK_FUNC(sub_8229C3B8);
PPC_FUNC_IMPL(__imp__sub_8229C3B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,44(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// li r31,12
	r31.s64 = 12;
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,100
	ctx.r6.s64 = 100;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r7.u32);
	// stw r6,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r6.u32);
	// divw. r11,r11,r31
	r11.s32 = r11.s32 / r31.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8229c47c
	if (!cr0.gt) goto loc_8229C47C;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
loc_8229C3F0:
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8229c450
	if (!cr0.gt) goto loc_8229C450;
	// lwz r10,-4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// twllei r11,0
	// mulli r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 * 100;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r11
	ctx.r10.s32 = ctx.r10.s32 / r11.s32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// andc r11,r11,r9
	r11.u64 = r11.u64 & ~ctx.r9.u64;
	// twlgei r11,-1
	// stw r10,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r10.u32);
	// addi r11,r1,-28
	r11.s64 = ctx.r1.s64 + -28;
	// blt cr6,0x8229c430
	if (cr6.lt) goto loc_8229C430;
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
loc_8229C430:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// addi r11,r1,-28
	r11.s64 = ctx.r1.s64 + -28;
	// stw r7,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r7.u32);
	// blt cr6,0x8229c448
	if (cr6.lt) goto loc_8229C448;
	// addi r11,r1,-24
	r11.s64 = ctx.r1.s64 + -24;
loc_8229C448:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r6,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r6.u32);
loc_8229C450:
	// lwz r11,44(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r31
	r11.s32 = r11.s32 / r31.s32;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, r11.s32, xer);
	// blt cr6,0x8229c3f0
	if (cr6.lt) goto loc_8229C3F0;
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// bne cr6,0x8229c47c
	if (!cr6.eq) goto loc_8229C47C;
	// li r6,-1
	ctx.r6.s64 = -1;
loc_8229C47C:
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229C48C"))) PPC_WEAK_FUNC(sub_8229C48C);
PPC_FUNC_IMPL(__imp__sub_8229C48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229C490"))) PPC_WEAK_FUNC(sub_8229C490);
PPC_FUNC_IMPL(__imp__sub_8229C490) {
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
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x8229c4c8
	if (!cr6.eq) goto loc_8229C4C8;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r10,r28,12
	ctx.r10.s64 = r28.s64 * 12;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x823708a8
	sub_823708A8(ctx, base);
	// b 0x8229c5fc
	goto loc_8229C5FC;
loc_8229C4C8:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b37d8
	sub_822B37D8(ctx, base);
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8229c4f0
	if (cr0.eq) goto loc_8229C4F0;
	// blt cr6,0x8229c4f4
	if (cr6.lt) goto loc_8229C4F4;
	// li r30,1
	r30.s64 = 1;
	// b 0x8229c4f4
	goto loc_8229C4F4;
loc_8229C4F0:
	// blt cr6,0x8229c5f4
	if (cr6.lt) goto loc_8229C5F4;
loc_8229C4F4:
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// mulli r10,r28,12
	ctx.r10.s64 = r28.s64 * 12;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,-1
	ctx.r9.s64 = r31.s64 + -1;
	// li r8,3
	ctx.r8.s64 = 3;
	// divw r8,r9,r8
	ctx.r8.s32 = ctx.r9.s32 / ctx.r8.s32;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// mulli r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 * 3;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// subf r28,r8,r9
	r28.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8229c560
	if (!cr6.eq) goto loc_8229C560;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x8229c5f4
	if (!cr6.eq) goto loc_8229C5F4;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13428
	ctx.r4.s64 = r11.s64 + -13428;
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
	// b 0x8229c5fc
	goto loc_8229C5FC;
loc_8229C560:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13448
	ctx.r4.s64 = r11.s64 + -13448;
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mulli r11,r11,100
	r11.s64 = r11.s64 * 100;
	// divw r4,r11,r9
	ctx.r4.s32 = r11.s32 / ctx.r9.s32;
	// rotlwi r11,r11,1
	r11.u64 = __builtin_rotateleft32(r11.u32, 1);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// twllei r9,0
	// andc r11,r9,r11
	r11.u64 = ctx.r9.u64 & ~r11.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// twlgei r11,-1
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// bne cr6,0x8229c5c8
	if (!cr6.eq) goto loc_8229C5C8;
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// b 0x8229c5e8
	goto loc_8229C5E8;
loc_8229C5C8:
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bne cr6,0x8229c5e4
	if (!cr6.eq) goto loc_8229C5E4;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// b 0x8229c5e8
	goto loc_8229C5E8;
loc_8229C5E4:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
loc_8229C5E8:
	// bne cr6,0x8229c5f4
	if (!cr6.eq) goto loc_8229C5F4;
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// b 0x8229c5fc
	goto loc_8229C5FC;
loc_8229C5F4:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,18972(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18972);
loc_8229C5FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8229C604"))) PPC_WEAK_FUNC(sub_8229C604);
PPC_FUNC_IMPL(__imp__sub_8229C604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229C608"))) PPC_WEAK_FUNC(sub_8229C608);
PPC_FUNC_IMPL(__imp__sub_8229C608) {
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
	// lwz r16,-13280(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13280);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-13356
	r11.s64 = r11.s64 + -13356;
	// addi r10,r10,-13400
	ctx.r10.s64 = ctx.r10.s64 + -13400;
	// addi r29,r30,52
	r29.s64 = r30.s64 + 52;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r28,0
	r28.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// mr r11,r29
	r11.u64 = r29.u64;
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
loc_8229C660:
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bge 0x8229c660
	if (!cr0.lt) goto loc_8229C660;
	// lis r26,-32127
	r26.s64 = -2105475072;
	// lwz r3,-9608(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x8229c6dc
	if (!cr0.gt) goto loc_8229C6DC;
	// addi r27,r30,44
	r27.s64 = r30.s64 + 44;
loc_8229C68C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,-9608(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,176(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// stw r4,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r4.u32);
	// bl 0x8229c3b8
	sub_8229C3B8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// lwz r3,-9608(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpw cr6,r28,r3
	cr6.compare<int32_t>(r28.s32, ctx.r3.s32, xer);
	// blt cr6,0x8229c68c
	if (cr6.lt) goto loc_8229C68C;
loc_8229C6DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8229C610"))) PPC_WEAK_FUNC(sub_8229C610);
PPC_FUNC_IMPL(__imp__sub_8229C610) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-13356
	r11.s64 = r11.s64 + -13356;
	// addi r10,r10,-13400
	ctx.r10.s64 = ctx.r10.s64 + -13400;
	// addi r29,r30,52
	r29.s64 = r30.s64 + 52;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r28,0
	r28.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// mr r11,r29
	r11.u64 = r29.u64;
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
loc_8229C660:
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bge 0x8229c660
	if (!cr0.lt) goto loc_8229C660;
	// lis r26,-32127
	r26.s64 = -2105475072;
	// lwz r3,-9608(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x8229c6dc
	if (!cr0.gt) goto loc_8229C6DC;
	// addi r27,r30,44
	r27.s64 = r30.s64 + 44;
loc_8229C68C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,-9608(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,176(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// stw r4,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r4.u32);
	// bl 0x8229c3b8
	sub_8229C3B8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// lwz r3,-9608(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpw cr6,r28,r3
	cr6.compare<int32_t>(r28.s32, ctx.r3.s32, xer);
	// blt cr6,0x8229c68c
	if (cr6.lt) goto loc_8229C68C;
loc_8229C6DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8229C6E8"))) PPC_WEAK_FUNC(sub_8229C6E8);
PPC_FUNC_IMPL(__imp__sub_8229C6E8) {
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

__attribute__((alias("__imp__sub_8229C710"))) PPC_WEAK_FUNC(sub_8229C710);
PPC_FUNC_IMPL(__imp__sub_8229C710) {
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
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x8229aec8
	sub_8229AEC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229C73C"))) PPC_WEAK_FUNC(sub_8229C73C);
PPC_FUNC_IMPL(__imp__sub_8229C73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8229C740"))) PPC_WEAK_FUNC(sub_8229C740);
PPC_FUNC_IMPL(__imp__sub_8229C740) {
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
	// bl 0x82283b50
	sub_82283B50(ctx, base);
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

__attribute__((alias("__imp__sub_8229C770"))) PPC_WEAK_FUNC(sub_8229C770);
PPC_FUNC_IMPL(__imp__sub_8229C770) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x8229c8b0
	sub_8229C8B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8229C778"))) PPC_WEAK_FUNC(sub_8229C778);
PPC_FUNC_IMPL(__imp__sub_8229C778) {
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
	// lwz r16,-13216(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13216);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lis r28,-32128
	r28.s64 = -2105540608;
	// lwz r11,24376(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24376);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8229c7fc
	if (!cr0.eq) goto loc_8229C7FC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,24376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24376, r11.u32);
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
	// bl 0x82283b50
	sub_82283B50(ctx, base);
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
	// stw r3,24372(r28)
	PPC_STORE_U32(r28.u32 + 24372, ctx.r3.u32);
	// b 0x8229c800
	goto loc_8229C800;
loc_8229C7FC:
	// lwz r3,24372(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 24372);
loc_8229C800:
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
	// beq 0x8229c830
	if (cr0.eq) goto loc_8229C830;
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
	// b 0x8229c878
	goto loc_8229C878;
loc_8229C830:
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
	// bne 0x8229c86c
	if (!cr0.eq) goto loc_8229C86C;
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
loc_8229C86C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8229C878:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8229C780"))) PPC_WEAK_FUNC(sub_8229C780);
PPC_FUNC_IMPL(__imp__sub_8229C780) {
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
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lis r28,-32128
	r28.s64 = -2105540608;
	// lwz r11,24376(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24376);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8229c7fc
	if (!cr0.eq) goto loc_8229C7FC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,24376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24376, r11.u32);
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
	// bl 0x82283b50
	sub_82283B50(ctx, base);
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
	// stw r3,24372(r28)
	PPC_STORE_U32(r28.u32 + 24372, ctx.r3.u32);
	// b 0x8229c800
	goto loc_8229C800;
loc_8229C7FC:
	// lwz r3,24372(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 24372);
loc_8229C800:
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
	// beq 0x8229c830
	if (cr0.eq) goto loc_8229C830;
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
	// b 0x8229c878
	goto loc_8229C878;
loc_8229C830:
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
	// bne 0x8229c86c
	if (!cr0.eq) goto loc_8229C86C;
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
loc_8229C86C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8229C878:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8229C884"))) PPC_WEAK_FUNC(sub_8229C884);
PPC_FUNC_IMPL(__imp__sub_8229C884) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	r11.s64 = -2105540608;
	// addi r11,r11,24376
	r11.s64 = r11.s64 + 24376;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,24376
	ctx.r10.s64 = ctx.r10.s64 + 24376;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8229C8AC"))) PPC_WEAK_FUNC(sub_8229C8AC);
PPC_FUNC_IMPL(__imp__sub_8229C8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

