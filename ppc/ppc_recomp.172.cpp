#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82691C60"))) PPC_WEAK_FUNC(sub_82691C60);
PPC_FUNC_IMPL(__imp__sub_82691C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// addi r4,r4,-8
	ctx.r4.s64 = ctx.r4.s64 + -8;
	// b 0x82377300
	sub_82377300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82691C70"))) PPC_WEAK_FUNC(sub_82691C70);
PPC_FUNC_IMPL(__imp__sub_82691C70) {
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
	// lwz r16,27728(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 27728);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32126
	r27.s64 = -2105409536;
	// lwz r11,-13540(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13540);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82691cf4
	if (!cr0.eq) goto loc_82691CF4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13540(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13540, r11.u32);
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
	// bl 0x822b3270
	sub_822B3270(ctx, base);
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
	// stw r3,-13544(r27)
	PPC_STORE_U32(r27.u32 + -13544, ctx.r3.u32);
	// b 0x82691cf8
	goto loc_82691CF8;
loc_82691CF4:
	// lwz r3,-13544(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -13544);
loc_82691CF8:
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
	// beq 0x82691d34
	if (cr0.eq) goto loc_82691D34;
	// lwz r11,-64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -64);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-64
	ctx.r3.s64 = r11.s64 + -64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x82691db0
	goto loc_82691DB0;
loc_82691D34:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82691d94
	if (!cr0.eq) goto loc_82691D94;
	// addic. r11,r30,-68
	xer.ca = r30.u32 > 67;
	r11.s64 = r30.s64 + -68;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82691d58
	if (!cr0.eq) goto loc_82691D58;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82691d68
	goto loc_82691D68;
loc_82691D58:
	// lwz r11,-64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -64);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-64
	ctx.r3.s64 = r11.s64 + -64;
loc_82691D68:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -64);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-64
	ctx.r4.s64 = r11.s64 + -64;
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
loc_82691D94:
	// lwz r11,-64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -64);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-64
	ctx.r3.s64 = r11.s64 + -64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82691DB0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82691C78"))) PPC_WEAK_FUNC(sub_82691C78);
PPC_FUNC_IMPL(__imp__sub_82691C78) {
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
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32126
	r27.s64 = -2105409536;
	// lwz r11,-13540(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13540);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82691cf4
	if (!cr0.eq) goto loc_82691CF4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13540(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13540, r11.u32);
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
	// bl 0x822b3270
	sub_822B3270(ctx, base);
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
	// stw r3,-13544(r27)
	PPC_STORE_U32(r27.u32 + -13544, ctx.r3.u32);
	// b 0x82691cf8
	goto loc_82691CF8;
loc_82691CF4:
	// lwz r3,-13544(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -13544);
loc_82691CF8:
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
	// beq 0x82691d34
	if (cr0.eq) goto loc_82691D34;
	// lwz r11,-64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -64);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-64
	ctx.r3.s64 = r11.s64 + -64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x82691db0
	goto loc_82691DB0;
loc_82691D34:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82691d94
	if (!cr0.eq) goto loc_82691D94;
	// addic. r11,r30,-68
	xer.ca = r30.u32 > 67;
	r11.s64 = r30.s64 + -68;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82691d58
	if (!cr0.eq) goto loc_82691D58;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82691d68
	goto loc_82691D68;
loc_82691D58:
	// lwz r11,-64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -64);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-64
	ctx.r3.s64 = r11.s64 + -64;
loc_82691D68:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -64);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-64
	ctx.r4.s64 = r11.s64 + -64;
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
loc_82691D94:
	// lwz r11,-64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -64);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-64
	ctx.r3.s64 = r11.s64 + -64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82691DB0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82691DBC"))) PPC_WEAK_FUNC(sub_82691DBC);
PPC_FUNC_IMPL(__imp__sub_82691DBC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13540
	r11.s64 = r11.s64 + -13540;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13540
	ctx.r10.s64 = ctx.r10.s64 + -13540;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82691DE4"))) PPC_WEAK_FUNC(sub_82691DE4);
PPC_FUNC_IMPL(__imp__sub_82691DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691DE8"))) PPC_WEAK_FUNC(sub_82691DE8);
PPC_FUNC_IMPL(__imp__sub_82691DE8) {
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
	// lis r11,-32137
	r11.s64 = -2106130432;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,7976
	r31.s64 = r11.s64 + 7976;
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

__attribute__((alias("__imp__sub_82691E40"))) PPC_WEAK_FUNC(sub_82691E40);
PPC_FUNC_IMPL(__imp__sub_82691E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82691c78
	sub_82691C78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82691E4C"))) PPC_WEAK_FUNC(sub_82691E4C);
PPC_FUNC_IMPL(__imp__sub_82691E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691E50"))) PPC_WEAK_FUNC(sub_82691E50);
PPC_FUNC_IMPL(__imp__sub_82691E50) {
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
	// addi r31,r3,-68
	r31.s64 = ctx.r3.s64 + -68;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x82376478
	sub_82376478(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82691e8c
	if (cr0.eq) goto loc_82691E8C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82691E8C:
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

__attribute__((alias("__imp__sub_82691EA8"))) PPC_WEAK_FUNC(sub_82691EA8);
PPC_FUNC_IMPL(__imp__sub_82691EA8) {
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
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,23536
	ctx.r4.s64 = r11.s64 + 23536;
	// lwz r3,-2968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -2968);
	// bl 0x822caee8
	sub_822CAEE8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r3,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-2968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -2968);
	// addi r4,r11,26632
	ctx.r4.s64 = r11.s64 + 26632;
	// bl 0x82691de8
	sub_82691DE8(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82691F10"))) PPC_WEAK_FUNC(sub_82691F10);
PPC_FUNC_IMPL(__imp__sub_82691F10) {
	PPC_FUNC_PROLOGUE();
	// b 0x82376eb0
	sub_82376EB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82691F14"))) PPC_WEAK_FUNC(sub_82691F14);
PPC_FUNC_IMPL(__imp__sub_82691F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691F18"))) PPC_WEAK_FUNC(sub_82691F18);
PPC_FUNC_IMPL(__imp__sub_82691F18) {
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
	// beq 0x82691f58
	if (cr0.eq) goto loc_82691F58;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r3,r11,8412
	ctx.r3.s64 = r11.s64 + 8412;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82691f60
	goto loc_82691F60;
loc_82691F58:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82691F60:
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

__attribute__((alias("__imp__sub_82691F7C"))) PPC_WEAK_FUNC(sub_82691F7C);
PPC_FUNC_IMPL(__imp__sub_82691F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691F80"))) PPC_WEAK_FUNC(sub_82691F80);
PPC_FUNC_IMPL(__imp__sub_82691F80) {
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
	// beq 0x82691fc0
	if (cr0.eq) goto loc_82691FC0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r3,r11,8436
	ctx.r3.s64 = r11.s64 + 8436;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82691fc8
	goto loc_82691FC8;
loc_82691FC0:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82691FC8:
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

__attribute__((alias("__imp__sub_82691FE4"))) PPC_WEAK_FUNC(sub_82691FE4);
PPC_FUNC_IMPL(__imp__sub_82691FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691FE8"))) PPC_WEAK_FUNC(sub_82691FE8);
PPC_FUNC_IMPL(__imp__sub_82691FE8) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82692060
	if (cr6.eq) goto loc_82692060;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r30,r11,920
	r30.s64 = r11.s64 + 920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,3456
	r29.s64 = r11.s64 + 3456;
loc_82692014:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// bne 0x826920b8
	if (!cr0.eq) goto loc_826920B8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82133060
	sub_82133060(ctx, base);
	// rotlwi r11,r3,0
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82692014
	if (!cr6.eq) goto loc_82692014;
loc_82692060:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826920b0
	if (cr0.eq) goto loc_826920B0;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x8231e310
	sub_8231E310(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// beq 0x826920b0
	if (cr0.eq) goto loc_826920B0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82133060
	sub_82133060(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x82691fe8
	sub_82691FE8(ctx, base);
	// b 0x826920b8
	goto loc_826920B8;
loc_826920B0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_826920B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826920C0"))) PPC_WEAK_FUNC(sub_826920C0);
PPC_FUNC_IMPL(__imp__sub_826920C0) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82692138
	if (cr6.eq) goto loc_82692138;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r30,r11,920
	r30.s64 = r11.s64 + 920;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r29,r11,8340
	r29.s64 = r11.s64 + 8340;
loc_826920EC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// bne 0x82692190
	if (!cr0.eq) goto loc_82692190;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82133060
	sub_82133060(ctx, base);
	// rotlwi r11,r3,0
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826920ec
	if (!cr6.eq) goto loc_826920EC;
loc_82692138:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82692188
	if (cr0.eq) goto loc_82692188;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x8231e310
	sub_8231E310(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// beq 0x82692188
	if (cr0.eq) goto loc_82692188;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82133060
	sub_82133060(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826920c0
	sub_826920C0(ctx, base);
	// b 0x82692190
	goto loc_82692190;
loc_82692188:
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82692190:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82692198"))) PPC_WEAK_FUNC(sub_82692198);
PPC_FUNC_IMPL(__imp__sub_82692198) {
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
	// b 0x826921d8
	goto loc_826921D8;
loc_826921B4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826921d4
	if (cr0.eq) goto loc_826921D4;
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
loc_826921D4:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_826921D8:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x826921b4
	if (!cr6.eq) goto loc_826921B4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826921EC"))) PPC_WEAK_FUNC(sub_826921EC);
PPC_FUNC_IMPL(__imp__sub_826921EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826921F0"))) PPC_WEAK_FUNC(sub_826921F0);
PPC_FUNC_IMPL(__imp__sub_826921F0) {
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
	// b 0x82692230
	goto loc_82692230;
loc_8269220C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8269222c
	if (cr0.eq) goto loc_8269222C;
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
loc_8269222C:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82692230:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x8269220c
	if (!cr6.eq) goto loc_8269220C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82692244"))) PPC_WEAK_FUNC(sub_82692244);
PPC_FUNC_IMPL(__imp__sub_82692244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82692248"))) PPC_WEAK_FUNC(sub_82692248);
PPC_FUNC_IMPL(__imp__sub_82692248) {
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
	// bl 0x82376330
	sub_82376330(ctx, base);
	// lis r27,-32127
	r27.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,-9608(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x826922b8
	if (!cr0.gt) goto loc_826922B8;
	// li r30,0
	r30.s64 = 0;
loc_8269227C:
	// lwz r11,108(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 108);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// lwz r3,-9608(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -9608);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// and r29,r10,r11
	r29.u64 = ctx.r10.u64 & r11.u64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x8269227c
	if (cr6.lt) goto loc_8269227C;
loc_826922B8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826922C4"))) PPC_WEAK_FUNC(sub_826922C4);
PPC_FUNC_IMPL(__imp__sub_826922C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826922C8"))) PPC_WEAK_FUNC(sub_826922C8);
PPC_FUNC_IMPL(__imp__sub_826922C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82692308
	if (cr6.eq) goto loc_82692308;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f2,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82692308:
	// addi r31,r31,84
	r31.s64 = r31.s64 + 84;
	// li r30,0
	r30.s64 = 0;
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
	// beq 0x82692354
	if (cr0.eq) goto loc_82692354;
	// li r29,0
	r29.s64 = 0;
loc_82692328:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x82695988
	sub_82695988(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82692328
	if (cr6.lt) goto loc_82692328;
loc_82692354:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269235C"))) PPC_WEAK_FUNC(sub_8269235C);
PPC_FUNC_IMPL(__imp__sub_8269235C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82692360"))) PPC_WEAK_FUNC(sub_82692360);
PPC_FUNC_IMPL(__imp__sub_82692360) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r31,r28,84
	r31.s64 = r28.s64 + 84;
	// li r30,0
	r30.s64 = 0;
	// lfs f0,17324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// fmuls f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 * f0.f64));
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826923dc
	if (cr0.eq) goto loc_826923DC;
	// li r29,0
	r29.s64 = 0;
loc_826923AC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x82695c08
	sub_82695C08(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x826923ac
	if (cr6.lt) goto loc_826923AC;
loc_826923DC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82377210
	sub_82377210(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826923F0"))) PPC_WEAK_FUNC(sub_826923F0);
PPC_FUNC_IMPL(__imp__sub_826923F0) {
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
	// bl 0x82376588
	sub_82376588(ctx, base);
	// addi r31,r31,84
	r31.s64 = r31.s64 + 84;
	// li r30,0
	r30.s64 = 0;
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
	// beq 0x82692450
	if (cr0.eq) goto loc_82692450;
	// li r29,0
	r29.s64 = 0;
loc_82692424:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x826957f0
	sub_826957F0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82692424
	if (cr6.lt) goto loc_82692424;
loc_82692450:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82692458"))) PPC_WEAK_FUNC(sub_82692458);
PPC_FUNC_IMPL(__imp__sub_82692458) {
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
	// lbz r11,77(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 77);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826924bc
	if (cr0.eq) goto loc_826924BC;
	// addi r31,r3,84
	r31.s64 = ctx.r3.s64 + 84;
	// li r30,0
	r30.s64 = 0;
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
	// beq 0x826924bc
	if (cr0.eq) goto loc_826924BC;
	// li r29,0
	r29.s64 = 0;
loc_82692490:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x82695878
	sub_82695878(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82692490
	if (cr6.lt) goto loc_82692490;
loc_826924BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826924C4"))) PPC_WEAK_FUNC(sub_826924C4);
PPC_FUNC_IMPL(__imp__sub_826924C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826924C8"))) PPC_WEAK_FUNC(sub_826924C8);
PPC_FUNC_IMPL(__imp__sub_826924C8) {
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
	// lis r30,-32137
	r30.s64 = -2106130432;
	// addi r31,r3,84
	r31.s64 = ctx.r3.s64 + 84;
	// li r29,0
	r29.s64 = 0;
	// lbz r11,8462(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8462);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r4,r11,24
	ctx.r4.u64 = r11.u32 & 0xFF;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r4,8462(r30)
	PPC_STORE_U8(r30.u32 + 8462, ctx.r4.u8);
	// beq 0x82692540
	if (cr0.eq) goto loc_82692540;
	// li r28,0
	r28.s64 = 0;
	// b 0x82692514
	goto loc_82692514;
loc_82692510:
	// lbz r4,8462(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 8462);
loc_82692514:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r3,r11,r28
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// bl 0x82695b70
	sub_82695B70(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82692510
	if (cr6.lt) goto loc_82692510;
loc_82692540:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82692548"))) PPC_WEAK_FUNC(sub_82692548);
PPC_FUNC_IMPL(__imp__sub_82692548) {
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
	// lis r30,-32137
	r30.s64 = -2106130432;
	// addi r31,r3,84
	r31.s64 = ctx.r3.s64 + 84;
	// li r29,0
	r29.s64 = 0;
	// lbz r11,8463(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8463);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r4,r11,24
	ctx.r4.u64 = r11.u32 & 0xFF;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r4,8463(r30)
	PPC_STORE_U8(r30.u32 + 8463, ctx.r4.u8);
	// beq 0x826925c0
	if (cr0.eq) goto loc_826925C0;
	// li r28,0
	r28.s64 = 0;
	// b 0x82692594
	goto loc_82692594;
loc_82692590:
	// lbz r4,8463(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 8463);
loc_82692594:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r3,r11,r28
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// bl 0x82695b78
	sub_82695B78(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82692590
	if (cr6.lt) goto loc_82692590;
loc_826925C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826925C8"))) PPC_WEAK_FUNC(sub_826925C8);
PPC_FUNC_IMPL(__imp__sub_826925C8) {
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
	// lis r30,-32137
	r30.s64 = -2106130432;
	// addi r31,r3,84
	r31.s64 = ctx.r3.s64 + 84;
	// li r29,0
	r29.s64 = 0;
	// lbz r11,8464(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8464);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r4,r11,24
	ctx.r4.u64 = r11.u32 & 0xFF;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r4,8464(r30)
	PPC_STORE_U8(r30.u32 + 8464, ctx.r4.u8);
	// beq 0x82692640
	if (cr0.eq) goto loc_82692640;
	// li r28,0
	r28.s64 = 0;
	// b 0x82692614
	goto loc_82692614;
loc_82692610:
	// lbz r4,8464(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 8464);
loc_82692614:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r3,r11,r28
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// bl 0x82695790
	sub_82695790(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82692610
	if (cr6.lt) goto loc_82692610;
loc_82692640:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82692648"))) PPC_WEAK_FUNC(sub_82692648);
PPC_FUNC_IMPL(__imp__sub_82692648) {
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
	// addi r31,r3,84
	r31.s64 = ctx.r3.s64 + 84;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
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
	// beq 0x826926b0
	if (cr0.eq) goto loc_826926B0;
	// li r29,0
	r29.s64 = 0;
loc_8269267C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x82695b90
	sub_82695B90(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8269267c
	if (cr6.lt) goto loc_8269267C;
loc_826926B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826926B8"))) PPC_WEAK_FUNC(sub_826926B8);
PPC_FUNC_IMPL(__imp__sub_826926B8) {
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
	// addi r31,r3,84
	r31.s64 = ctx.r3.s64 + 84;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
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
	// beq 0x82692718
	if (cr0.eq) goto loc_82692718;
	// li r29,0
	r29.s64 = 0;
loc_826926E8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x82695b98
	sub_82695B98(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x826926e8
	if (cr6.lt) goto loc_826926E8;
loc_82692718:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82692720"))) PPC_WEAK_FUNC(sub_82692720);
PPC_FUNC_IMPL(__imp__sub_82692720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82692760
	if (cr6.eq) goto loc_82692760;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f2,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82692760:
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// li r30,0
	r30.s64 = 0;
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
	// beq 0x826927b0
	if (cr0.eq) goto loc_826927B0;
	// li r29,0
	r29.s64 = 0;
loc_82692780:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x82695968
	sub_82695968(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82692780
	if (cr6.lt) goto loc_82692780;
loc_826927B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826927BC"))) PPC_WEAK_FUNC(sub_826927BC);
PPC_FUNC_IMPL(__imp__sub_826927BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826927C0"))) PPC_WEAK_FUNC(sub_826927C0);
PPC_FUNC_IMPL(__imp__sub_826927C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r31,r31,84
	r31.s64 = r31.s64 + 84;
	// li r30,0
	r30.s64 = 0;
	// lfs f0,17324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// fmuls f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 * f0.f64));
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8269283c
	if (cr0.eq) goto loc_8269283C;
	// li r29,0
	r29.s64 = 0;
loc_8269280C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x82695ab0
	sub_82695AB0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8269280c
	if (cr6.lt) goto loc_8269280C;
loc_8269283C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82692848"))) PPC_WEAK_FUNC(sub_82692848);
PPC_FUNC_IMPL(__imp__sub_82692848) {
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
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// bne 0x82692870
	if (!cr0.eq) goto loc_82692870;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82692870:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x826928a4
	if (cr6.eq) goto loc_826928A4;
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82133060
	sub_82133060(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x82691fe8
	sub_82691FE8(ctx, base);
	// b 0x826928ac
	goto loc_826928AC;
loc_826928A4:
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_826928AC:
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

__attribute__((alias("__imp__sub_826928C4"))) PPC_WEAK_FUNC(sub_826928C4);
PPC_FUNC_IMPL(__imp__sub_826928C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826928C8"))) PPC_WEAK_FUNC(sub_826928C8);
PPC_FUNC_IMPL(__imp__sub_826928C8) {
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
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// bne 0x826928f0
	if (!cr0.eq) goto loc_826928F0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_826928F0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82692924
	if (cr6.eq) goto loc_82692924;
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82133060
	sub_82133060(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826920c0
	sub_826920C0(ctx, base);
	// b 0x8269292c
	goto loc_8269292C;
loc_82692924:
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_8269292C:
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

__attribute__((alias("__imp__sub_82692944"))) PPC_WEAK_FUNC(sub_82692944);
PPC_FUNC_IMPL(__imp__sub_82692944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82692948"))) PPC_WEAK_FUNC(sub_82692948);
PPC_FUNC_IMPL(__imp__sub_82692948) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82692988
	if (cr0.eq) goto loc_82692988;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// bl 0x82133060
	sub_82133060(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826920c0
	sub_826920C0(ctx, base);
loc_82692988:
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

__attribute__((alias("__imp__sub_826929A0"))) PPC_WEAK_FUNC(sub_826929A0);
PPC_FUNC_IMPL(__imp__sub_826929A0) {
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
	// blt cr6,0x826929e8
	if (cr6.lt) goto loc_826929E8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_826929E8:
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
	// bl 0x82691f18
	sub_82691F18(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82692a20
	if (cr0.eq) goto loc_82692A20;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_82692A20:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82692a40
	if (cr6.eq) goto loc_82692A40;
loc_82692A2C:
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
	// bne 0x82692a2c
	if (!cr0.eq) goto loc_82692A2C;
loc_82692A40:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x82692a68
	if (!cr0.eq) goto loc_82692A68;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82692a68
	if (cr0.eq) goto loc_82692A68;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_82692A68:
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

__attribute__((alias("__imp__sub_82692A9C"))) PPC_WEAK_FUNC(sub_82692A9C);
PPC_FUNC_IMPL(__imp__sub_82692A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82692AA0"))) PPC_WEAK_FUNC(sub_82692AA0);
PPC_FUNC_IMPL(__imp__sub_82692AA0) {
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
	// blt cr6,0x82692ae8
	if (cr6.lt) goto loc_82692AE8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_82692AE8:
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
	// bl 0x82691f80
	sub_82691F80(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82692b20
	if (cr0.eq) goto loc_82692B20;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_82692B20:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82692b40
	if (cr6.eq) goto loc_82692B40;
loc_82692B2C:
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
	// bne 0x82692b2c
	if (!cr0.eq) goto loc_82692B2C;
loc_82692B40:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x82692b68
	if (!cr0.eq) goto loc_82692B68;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82692b68
	if (cr0.eq) goto loc_82692B68;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_82692B68:
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

__attribute__((alias("__imp__sub_82692B9C"))) PPC_WEAK_FUNC(sub_82692B9C);
PPC_FUNC_IMPL(__imp__sub_82692B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82692BA0"))) PPC_WEAK_FUNC(sub_82692BA0);
PPC_FUNC_IMPL(__imp__sub_82692BA0) {
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
	// lwz r16,28024(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 28024);
	// mflr r12
	// bl 0x8239bcf0
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
	// li r26,1
	r26.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x82692bf8
	if (cr6.eq) goto loc_82692BF8;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,27996
	r11.s64 = r11.s64 + 27996;
	// addi r10,r10,27988
	ctx.r10.s64 = ctx.r10.s64 + 27988;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r10.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
loc_82692BF8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82375fe8
	sub_82375FE8(ctx, base);
	// addi r28,r30,56
	r28.s64 = r30.s64 + 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821e74e8
	sub_821E74E8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,27936
	r11.s64 = r11.s64 + 27936;
	// addi r10,r10,27900
	ctx.r10.s64 = ctx.r10.s64 + 27900;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r9,r9,27836
	ctx.r9.s64 = ctx.r9.s64 + 27836;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r4,r8,27816
	ctx.r4.s64 = ctx.r8.s64 + 27816;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
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
	// addi r10,r11,-120
	ctx.r10.s64 = r11.s64 + -120;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,27792
	ctx.r4.s64 = r11.s64 + 27792;
	// stw r28,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r28.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r10,-20848
	ctx.r4.s64 = ctx.r10.s64 + -20848;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r11,r30,84
	r11.s64 = r30.s64 + 84;
	// stb r26,77(r30)
	PPC_STORE_U8(r30.u32 + 77, r26.u8);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// addi r10,r30,96
	ctx.r10.s64 = r30.s64 + 96;
	// stb r9,76(r30)
	PPC_STORE_U8(r30.u32 + 76, ctx.r9.u8);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// addi r11,r30,108
	r11.s64 = r30.s64 + 108;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r29.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82692BA8"))) PPC_WEAK_FUNC(sub_82692BA8);
PPC_FUNC_IMPL(__imp__sub_82692BA8) {
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
	// li r26,1
	r26.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x82692bf8
	if (cr6.eq) goto loc_82692BF8;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,27996
	r11.s64 = r11.s64 + 27996;
	// addi r10,r10,27988
	ctx.r10.s64 = ctx.r10.s64 + 27988;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r10.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
loc_82692BF8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82375fe8
	sub_82375FE8(ctx, base);
	// addi r28,r30,56
	r28.s64 = r30.s64 + 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821e74e8
	sub_821E74E8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,27936
	r11.s64 = r11.s64 + 27936;
	// addi r10,r10,27900
	ctx.r10.s64 = ctx.r10.s64 + 27900;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r9,r9,27836
	ctx.r9.s64 = ctx.r9.s64 + 27836;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r4,r8,27816
	ctx.r4.s64 = ctx.r8.s64 + 27816;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
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
	// addi r10,r11,-120
	ctx.r10.s64 = r11.s64 + -120;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,27792
	ctx.r4.s64 = r11.s64 + 27792;
	// stw r28,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r28.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r10,-20848
	ctx.r4.s64 = ctx.r10.s64 + -20848;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r11,r30,84
	r11.s64 = r30.s64 + 84;
	// stb r26,77(r30)
	PPC_STORE_U8(r30.u32 + 77, r26.u8);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// addi r10,r30,96
	ctx.r10.s64 = r30.s64 + 96;
	// stb r9,76(r30)
	PPC_STORE_U8(r30.u32 + 76, ctx.r9.u8);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// addi r11,r30,108
	r11.s64 = r30.s64 + 108;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r29.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82692D20"))) PPC_WEAK_FUNC(sub_82692D20);
PPC_FUNC_IMPL(__imp__sub_82692D20) {
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
	// beq 0x82692d54
	if (cr0.eq) goto loc_82692D54;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// addi r3,r11,124
	ctx.r3.s64 = r11.s64 + 124;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_82692D54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82692D64"))) PPC_WEAK_FUNC(sub_82692D64);
PPC_FUNC_IMPL(__imp__sub_82692D64) {
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

__attribute__((alias("__imp__sub_82692D90"))) PPC_WEAK_FUNC(sub_82692D90);
PPC_FUNC_IMPL(__imp__sub_82692D90) {
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
	// bl 0x822b3390
	sub_822B3390(ctx, base);
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

__attribute__((alias("__imp__sub_82692DC0"))) PPC_WEAK_FUNC(sub_82692DC0);
PPC_FUNC_IMPL(__imp__sub_82692DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// b 0x821e7640
	sub_821E7640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82692DD0"))) PPC_WEAK_FUNC(sub_82692DD0);
PPC_FUNC_IMPL(__imp__sub_82692DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-64
	ctx.r3.s64 = ctx.r3.s64 + -64;
	// b 0x82376140
	sub_82376140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82692DE0"))) PPC_WEAK_FUNC(sub_82692DE0);
PPC_FUNC_IMPL(__imp__sub_82692DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-64
	ctx.r3.s64 = ctx.r3.s64 + -64;
	// b 0x82376110
	sub_82376110(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82692DF0"))) PPC_WEAK_FUNC(sub_82692DF0);
PPC_FUNC_IMPL(__imp__sub_82692DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// b 0x821e7cf0
	sub_821E7CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82692E00"))) PPC_WEAK_FUNC(sub_82692E00);
PPC_FUNC_IMPL(__imp__sub_82692E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// b 0x821e76c0
	sub_821E76C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82692E10"))) PPC_WEAK_FUNC(sub_82692E10);
PPC_FUNC_IMPL(__imp__sub_82692E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x826934c0
	sub_826934C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82692E1C"))) PPC_WEAK_FUNC(sub_82692E1C);
PPC_FUNC_IMPL(__imp__sub_82692E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82692E20"))) PPC_WEAK_FUNC(sub_82692E20);
PPC_FUNC_IMPL(__imp__sub_82692E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x82692d90
	sub_82692D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82692E2C"))) PPC_WEAK_FUNC(sub_82692E2C);
PPC_FUNC_IMPL(__imp__sub_82692E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82692E30"))) PPC_WEAK_FUNC(sub_82692E30);
PPC_FUNC_IMPL(__imp__sub_82692E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// b 0x821e96c0
	sub_821E96C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82692E40"))) PPC_WEAK_FUNC(sub_82692E40);
PPC_FUNC_IMPL(__imp__sub_82692E40) {
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
	// lwz r16,28096(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 28096);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32126
	r27.s64 = -2105409536;
	// lwz r11,-13532(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13532);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82692ec4
	if (!cr0.eq) goto loc_82692EC4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13532(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13532, r11.u32);
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
	// bl 0x822b3390
	sub_822B3390(ctx, base);
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
	// stw r3,-13536(r27)
	PPC_STORE_U32(r27.u32 + -13536, ctx.r3.u32);
	// b 0x82692ec8
	goto loc_82692EC8;
loc_82692EC4:
	// lwz r3,-13536(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -13536);
loc_82692EC8:
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
	// beq 0x82692f04
	if (cr0.eq) goto loc_82692F04;
	// lwz r11,-120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -120);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-120
	ctx.r3.s64 = r11.s64 + -120;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x82692f80
	goto loc_82692F80;
loc_82692F04:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82692f64
	if (!cr0.eq) goto loc_82692F64;
	// addic. r11,r30,-124
	xer.ca = r30.u32 > 123;
	r11.s64 = r30.s64 + -124;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82692f28
	if (!cr0.eq) goto loc_82692F28;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82692f38
	goto loc_82692F38;
loc_82692F28:
	// lwz r11,-120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -120);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-120
	ctx.r3.s64 = r11.s64 + -120;
loc_82692F38:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -120);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-120
	ctx.r4.s64 = r11.s64 + -120;
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
loc_82692F64:
	// lwz r11,-120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -120);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-120
	ctx.r3.s64 = r11.s64 + -120;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82692F80:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82692E48"))) PPC_WEAK_FUNC(sub_82692E48);
PPC_FUNC_IMPL(__imp__sub_82692E48) {
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
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32126
	r27.s64 = -2105409536;
	// lwz r11,-13532(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13532);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82692ec4
	if (!cr0.eq) goto loc_82692EC4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13532(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13532, r11.u32);
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
	// bl 0x822b3390
	sub_822B3390(ctx, base);
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
	// stw r3,-13536(r27)
	PPC_STORE_U32(r27.u32 + -13536, ctx.r3.u32);
	// b 0x82692ec8
	goto loc_82692EC8;
loc_82692EC4:
	// lwz r3,-13536(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -13536);
loc_82692EC8:
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
	// beq 0x82692f04
	if (cr0.eq) goto loc_82692F04;
	// lwz r11,-120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -120);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-120
	ctx.r3.s64 = r11.s64 + -120;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x82692f80
	goto loc_82692F80;
loc_82692F04:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82692f64
	if (!cr0.eq) goto loc_82692F64;
	// addic. r11,r30,-124
	xer.ca = r30.u32 > 123;
	r11.s64 = r30.s64 + -124;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82692f28
	if (!cr0.eq) goto loc_82692F28;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82692f38
	goto loc_82692F38;
loc_82692F28:
	// lwz r11,-120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -120);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-120
	ctx.r3.s64 = r11.s64 + -120;
loc_82692F38:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -120);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-120
	ctx.r4.s64 = r11.s64 + -120;
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
loc_82692F64:
	// lwz r11,-120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -120);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-120
	ctx.r3.s64 = r11.s64 + -120;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82692F80:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82692F8C"))) PPC_WEAK_FUNC(sub_82692F8C);
PPC_FUNC_IMPL(__imp__sub_82692F8C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13532
	r11.s64 = r11.s64 + -13532;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13532
	ctx.r10.s64 = ctx.r10.s64 + -13532;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82692FB4"))) PPC_WEAK_FUNC(sub_82692FB4);
PPC_FUNC_IMPL(__imp__sub_82692FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82692FB8"))) PPC_WEAK_FUNC(sub_82692FB8);
PPC_FUNC_IMPL(__imp__sub_82692FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82692e48
	sub_82692E48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82692FC4"))) PPC_WEAK_FUNC(sub_82692FC4);
PPC_FUNC_IMPL(__imp__sub_82692FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82692FC8"))) PPC_WEAK_FUNC(sub_82692FC8);
PPC_FUNC_IMPL(__imp__sub_82692FC8) {
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
	// lwz r16,28184(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 28184);
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,27936
	r11.s64 = r11.s64 + 27936;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r10,r10,27900
	ctx.r10.s64 = ctx.r10.s64 + 27900;
	// addi r9,r9,27836
	ctx.r9.s64 = ctx.r9.s64 + 27836;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,-124(r30)
	PPC_STORE_U32(r30.u32 + -124, r11.u32);
	// lwz r11,-120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -120);
	// stw r10,-68(r30)
	PPC_STORE_U32(r30.u32 + -68, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,-120(r11)
	PPC_STORE_U32(r11.u32 + -120, ctx.r9.u32);
	// lwz r11,-120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -120);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-120
	ctx.r10.s64 = r11.s64 + -120;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-124(r11)
	PPC_STORE_U32(r11.u32 + -124, ctx.r10.u32);
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -16);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82693054
	if (cr0.eq) goto loc_82693054;
	// lwz r11,-8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82693054:
	// lwz r4,-28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -28);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82693074
	if (cr0.eq) goto loc_82693074;
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82693074:
	// lwz r4,-40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -40);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82693094
	if (cr0.eq) goto loc_82693094;
	// lwz r11,-32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -32);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82693094:
	// addi r3,r30,-64
	ctx.r3.s64 = r30.s64 + -64;
	// bl 0x82376478
	sub_82376478(ctx, base);
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

__attribute__((alias("__imp__sub_82692FD0"))) PPC_WEAK_FUNC(sub_82692FD0);
PPC_FUNC_IMPL(__imp__sub_82692FD0) {
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,27936
	r11.s64 = r11.s64 + 27936;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r10,r10,27900
	ctx.r10.s64 = ctx.r10.s64 + 27900;
	// addi r9,r9,27836
	ctx.r9.s64 = ctx.r9.s64 + 27836;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,-124(r30)
	PPC_STORE_U32(r30.u32 + -124, r11.u32);
	// lwz r11,-120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -120);
	// stw r10,-68(r30)
	PPC_STORE_U32(r30.u32 + -68, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,-120(r11)
	PPC_STORE_U32(r11.u32 + -120, ctx.r9.u32);
	// lwz r11,-120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -120);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-120
	ctx.r10.s64 = r11.s64 + -120;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-124(r11)
	PPC_STORE_U32(r11.u32 + -124, ctx.r10.u32);
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -16);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82693054
	if (cr0.eq) goto loc_82693054;
	// lwz r11,-8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82693054:
	// lwz r4,-28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -28);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82693074
	if (cr0.eq) goto loc_82693074;
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82693074:
	// lwz r4,-40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -40);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82693094
	if (cr0.eq) goto loc_82693094;
	// lwz r11,-32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -32);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82693094:
	// addi r3,r30,-64
	ctx.r3.s64 = r30.s64 + -64;
	// bl 0x82376478
	sub_82376478(ctx, base);
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

__attribute__((alias("__imp__sub_826930B4"))) PPC_WEAK_FUNC(sub_826930B4);
PPC_FUNC_IMPL(__imp__sub_826930B4) {
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
	// addi r11,r11,-124
	r11.s64 = r11.s64 + -124;
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

__attribute__((alias("__imp__sub_826930E4"))) PPC_WEAK_FUNC(sub_826930E4);
PPC_FUNC_IMPL(__imp__sub_826930E4) {
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
	// addi r11,r11,-124
	r11.s64 = r11.s64 + -124;
	// addi r3,r11,84
	ctx.r3.s64 = r11.s64 + 84;
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

__attribute__((alias("__imp__sub_82693114"))) PPC_WEAK_FUNC(sub_82693114);
PPC_FUNC_IMPL(__imp__sub_82693114) {
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
	// addi r11,r11,-124
	r11.s64 = r11.s64 + -124;
	// addi r3,r11,96
	ctx.r3.s64 = r11.s64 + 96;
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

__attribute__((alias("__imp__sub_82693144"))) PPC_WEAK_FUNC(sub_82693144);
PPC_FUNC_IMPL(__imp__sub_82693144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82693148"))) PPC_WEAK_FUNC(sub_82693148);
PPC_FUNC_IMPL(__imp__sub_82693148) {
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
	// beq cr6,0x82693188
	if (cr6.eq) goto loc_82693188;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82693178
	if (cr0.eq) goto loc_82693178;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82693178:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x8269319c
	goto loc_8269319C;
loc_82693188:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x826929a0
	sub_826929A0(ctx, base);
loc_8269319C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826931AC"))) PPC_WEAK_FUNC(sub_826931AC);
PPC_FUNC_IMPL(__imp__sub_826931AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826931B0"))) PPC_WEAK_FUNC(sub_826931B0);
PPC_FUNC_IMPL(__imp__sub_826931B0) {
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
	// beq cr6,0x826931f0
	if (cr6.eq) goto loc_826931F0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826931e0
	if (cr0.eq) goto loc_826931E0;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_826931E0:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x82693204
	goto loc_82693204;
loc_826931F0:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82692aa0
	sub_82692AA0(ctx, base);
loc_82693204:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82693214"))) PPC_WEAK_FUNC(sub_82693214);
PPC_FUNC_IMPL(__imp__sub_82693214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82693218"))) PPC_WEAK_FUNC(sub_82693218);
PPC_FUNC_IMPL(__imp__sub_82693218) {
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
	// beq cr6,0x82693260
	if (cr6.eq) goto loc_82693260;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82693258
	if (cr0.eq) goto loc_82693258;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x8269325c
	goto loc_8269325C;
loc_82693258:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8269325C:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_82693260:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269326C"))) PPC_WEAK_FUNC(sub_8269326C);
PPC_FUNC_IMPL(__imp__sub_8269326C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82693270"))) PPC_WEAK_FUNC(sub_82693270);
PPC_FUNC_IMPL(__imp__sub_82693270) {
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
	// beq cr6,0x826932b8
	if (cr6.eq) goto loc_826932B8;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x826932b0
	if (cr0.eq) goto loc_826932B0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x826932b4
	goto loc_826932B4;
loc_826932B0:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_826932B4:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_826932B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826932C4"))) PPC_WEAK_FUNC(sub_826932C4);
PPC_FUNC_IMPL(__imp__sub_826932C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826932C8"))) PPC_WEAK_FUNC(sub_826932C8);
PPC_FUNC_IMPL(__imp__sub_826932C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,28288(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 28288);
	// mflr r12
	// bl 0x8239bcdc
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-32127
	r25.s64 = -2105475072;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r3,-9608(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r30,0
	r30.s64 = 0;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x82693380
	if (!cr0.gt) goto loc_82693380;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r26,r11,27816
	r26.s64 = r11.s64 + 27816;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r24,r11,28264
	r24.s64 = r11.s64 + 28264;
loc_82693318:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,-9608(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// bl 0x8227d638
	sub_8227D638(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82319448
	sub_82319448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 + f31.f64));
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// blt cr6,0x82693318
	if (cr6.lt) goto loc_82693318;
loc_82693380:
	// extsw r11,r29
	r11.s64 = r29.s32;
	// lwz r4,8(r21)
	ctx.r4.u64 = PPC_LOAD_U32(r21.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// lfd f0,88(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fdivs f31,f31,f0
	f31.f64 = double(float(f31.f64 / f0.f64));
	// bl 0x826928c8
	sub_826928C8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82693488
	if (cr6.eq) goto loc_82693488;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r22,r21,84
	r22.s64 = r21.s64 + 84;
	// li r28,0
	r28.s64 = 0;
	// lis r23,-32127
	r23.s64 = -2105475072;
	// addi r24,r11,28256
	r24.s64 = r11.s64 + 28256;
loc_826933CC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,-9608(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822b56e8
	sub_822B56E8(ctx, base);
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82693414
	if (cr0.eq) goto loc_82693414;
	// lwz r11,96(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwzx r6,r28,r11
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x826967b8
	sub_826967B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82693418
	goto loc_82693418;
loc_82693414:
	// li r30,0
	r30.s64 = 0;
loc_82693418:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r26,-2968(r23)
	r26.u64 = PPC_LOAD_U32(r23.u32 + -2968);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,44(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82693148
	sub_82693148(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,-9608(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// bl 0x822b5230
	sub_822B5230(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82692948
	sub_82692948(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826933cc
	if (!cr6.eq) goto loc_826933CC;
loc_82693488:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_826932D0"))) PPC_WEAK_FUNC(sub_826932D0);
PPC_FUNC_IMPL(__imp__sub_826932D0) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcdc
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-32127
	r25.s64 = -2105475072;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r3,-9608(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r30,0
	r30.s64 = 0;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x82693380
	if (!cr0.gt) goto loc_82693380;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r26,r11,27816
	r26.s64 = r11.s64 + 27816;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r24,r11,28264
	r24.s64 = r11.s64 + 28264;
loc_82693318:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,-9608(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// bl 0x8227d638
	sub_8227D638(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82319448
	sub_82319448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 + f31.f64));
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// blt cr6,0x82693318
	if (cr6.lt) goto loc_82693318;
loc_82693380:
	// extsw r11,r29
	r11.s64 = r29.s32;
	// lwz r4,8(r21)
	ctx.r4.u64 = PPC_LOAD_U32(r21.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// lfd f0,88(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fdivs f31,f31,f0
	f31.f64 = double(float(f31.f64 / f0.f64));
	// bl 0x826928c8
	sub_826928C8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82693488
	if (cr6.eq) goto loc_82693488;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r22,r21,84
	r22.s64 = r21.s64 + 84;
	// li r28,0
	r28.s64 = 0;
	// lis r23,-32127
	r23.s64 = -2105475072;
	// addi r24,r11,28256
	r24.s64 = r11.s64 + 28256;
loc_826933CC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,-9608(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822b56e8
	sub_822B56E8(ctx, base);
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82693414
	if (cr0.eq) goto loc_82693414;
	// lwz r11,96(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwzx r6,r28,r11
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x826967b8
	sub_826967B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82693418
	goto loc_82693418;
loc_82693414:
	// li r30,0
	r30.s64 = 0;
loc_82693418:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r26,-2968(r23)
	r26.u64 = PPC_LOAD_U32(r23.u32 + -2968);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,44(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82693148
	sub_82693148(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,-9608(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// bl 0x822b5230
	sub_822B5230(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82692948
	sub_82692948(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826933cc
	if (!cr6.eq) goto loc_826933CC;
loc_82693488:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_82693494"))) PPC_WEAK_FUNC(sub_82693494);
PPC_FUNC_IMPL(__imp__sub_82693494) {
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

__attribute__((alias("__imp__sub_826934BC"))) PPC_WEAK_FUNC(sub_826934BC);
PPC_FUNC_IMPL(__imp__sub_826934BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826934C0"))) PPC_WEAK_FUNC(sub_826934C0);
PPC_FUNC_IMPL(__imp__sub_826934C0) {
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
	// addi r30,r3,-124
	r30.s64 = ctx.r3.s64 + -124;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,124
	r31.s64 = r30.s64 + 124;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82692fd0
	sub_82692FD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826934f8
	if (cr0.eq) goto loc_826934F8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_826934F8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82693504"))) PPC_WEAK_FUNC(sub_82693504);
PPC_FUNC_IMPL(__imp__sub_82693504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82693508"))) PPC_WEAK_FUNC(sub_82693508);
PPC_FUNC_IMPL(__imp__sub_82693508) {
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
	// bl 0x82692198
	sub_82692198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822cc6d0
	sub_822CC6D0(ctx, base);
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

__attribute__((alias("__imp__sub_8269355C"))) PPC_WEAK_FUNC(sub_8269355C);
PPC_FUNC_IMPL(__imp__sub_8269355C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82693560"))) PPC_WEAK_FUNC(sub_82693560);
PPC_FUNC_IMPL(__imp__sub_82693560) {
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
	// bl 0x826921f0
	sub_826921F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82693218
	sub_82693218(ctx, base);
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

__attribute__((alias("__imp__sub_826935B4"))) PPC_WEAK_FUNC(sub_826935B4);
PPC_FUNC_IMPL(__imp__sub_826935B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826935B8"))) PPC_WEAK_FUNC(sub_826935B8);
PPC_FUNC_IMPL(__imp__sub_826935B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x826935f4
	goto loc_826935F4;
loc_826935D4:
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x826935f0
	if (cr0.eq) goto loc_826935F0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821f0e20
	sub_821F0E20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_826935F0:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_826935F4:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bne cr6,0x826935d4
	if (!cr6.eq) goto loc_826935D4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82693270
	sub_82693270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82693614"))) PPC_WEAK_FUNC(sub_82693614);
PPC_FUNC_IMPL(__imp__sub_82693614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82693618"))) PPC_WEAK_FUNC(sub_82693618);
PPC_FUNC_IMPL(__imp__sub_82693618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
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
	// lwz r16,28416(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 28416);
	// mflr r12
	// bl 0x8239bcdc
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r21,r3,108
	r21.s64 = ctx.r3.s64 + 108;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82693508
	sub_82693508(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// li r22,0
	r22.s64 = 0;
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x8269374c
	if (!cr0.gt) goto loc_8269374C;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r23,-32140
	r23.s64 = -2106327040;
	// addi r28,r11,15600
	r28.s64 = r11.s64 + 15600;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r27,r11,6532
	r27.s64 = r11.s64 + 6532;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r26,r11,8200
	r26.s64 = r11.s64 + 8200;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r25,r11,28376
	r25.s64 = r11.s64 + 28376;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r24,r11,28352
	r24.s64 = r11.s64 + 28352;
loc_82693680:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82315578
	sub_82315578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r11,18972(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 18972);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826936dc
	if (cr0.eq) goto loc_826936DC;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r4,60(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
loc_826936DC:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82282798
	sub_82282798(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359d00
	sub_82359D00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82693738
	if (cr6.eq) goto loc_82693738;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x822cc668
	sub_822CC668(ctx, base);
loc_82693738:
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpw cr6,r22,r3
	cr6.compare<int32_t>(r22.s32, ctx.r3.s32, xer);
	// blt cr6,0x82693680
	if (cr6.lt) goto loc_82693680;
loc_8269374C:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_82693620"))) PPC_WEAK_FUNC(sub_82693620);
PPC_FUNC_IMPL(__imp__sub_82693620) {
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r21,r3,108
	r21.s64 = ctx.r3.s64 + 108;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82693508
	sub_82693508(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// li r22,0
	r22.s64 = 0;
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x8269374c
	if (!cr0.gt) goto loc_8269374C;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r23,-32140
	r23.s64 = -2106327040;
	// addi r28,r11,15600
	r28.s64 = r11.s64 + 15600;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r27,r11,6532
	r27.s64 = r11.s64 + 6532;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r26,r11,8200
	r26.s64 = r11.s64 + 8200;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r25,r11,28376
	r25.s64 = r11.s64 + 28376;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r24,r11,28352
	r24.s64 = r11.s64 + 28352;
loc_82693680:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82315578
	sub_82315578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r11,18972(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 18972);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826936dc
	if (cr0.eq) goto loc_826936DC;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// lwz r4,60(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
loc_826936DC:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82282798
	sub_82282798(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359d00
	sub_82359D00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82693738
	if (cr6.eq) goto loc_82693738;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x822cc668
	sub_822CC668(ctx, base);
loc_82693738:
	// lwz r3,-9608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9608);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpw cr6,r22,r3
	cr6.compare<int32_t>(r22.s32, ctx.r3.s32, xer);
	// blt cr6,0x82693680
	if (cr6.lt) goto loc_82693680;
loc_8269374C:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_82693754"))) PPC_WEAK_FUNC(sub_82693754);
PPC_FUNC_IMPL(__imp__sub_82693754) {
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

__attribute__((alias("__imp__sub_8269377C"))) PPC_WEAK_FUNC(sub_8269377C);
PPC_FUNC_IMPL(__imp__sub_8269377C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82693780"))) PPC_WEAK_FUNC(sub_82693780);
PPC_FUNC_IMPL(__imp__sub_82693780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,28504(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 28504);
	// mflr r12
	// bl 0x8239bce4
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82376dd8
	sub_82376DD8(ctx, base);
	// li r25,0
	r25.s64 = 0;
	// lis r23,-32127
	r23.s64 = -2105475072;
	// stb r25,17(r30)
	PPC_STORE_U8(r30.u32 + 17, r25.u8);
	// lwz r3,-9608(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x8269383c
	if (!cr0.gt) goto loc_8269383C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r27,r25
	r27.u64 = r25.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r24,r11,11184
	r24.s64 = r11.s64 + 11184;
loc_826937CC:
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// lwzx r3,r27,r11
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// bl 0x82359808
	sub_82359808(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x82693830
	if (cr0.eq) goto loc_82693830;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x82693814
	if (cr0.eq) goto loc_82693814;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r25,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r25.u32);
	// stw r25,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r25.u32);
	// bl 0x821f0e20
	sub_821F0E20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82693818
	goto loc_82693818;
loc_82693814:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_82693818:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// bl 0x821f1468
	sub_821F1468(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x826931b0
	sub_826931B0(ctx, base);
loc_82693830:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bne 0x826937cc
	if (!cr0.eq) goto loc_826937CC;
loc_8269383C:
	// addi r3,r30,108
	ctx.r3.s64 = r30.s64 + 108;
	// bl 0x82693508
	sub_82693508(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82692848
	sub_82692848(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r4,r11,28480
	ctx.r4.s64 = r11.s64 + 28480;
	// bl 0x826909a8
	sub_826909A8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// beq 0x826938dc
	if (cr0.eq) goto loc_826938DC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,2816
	ctx.r4.s64 = r11.s64 + 2816;
	// lwz r11,-9608(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + -9608);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826938b4
	if (!cr0.eq) goto loc_826938B4;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,27088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 27088);
	// lwz r11,200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x826938dc
	if (!cr6.eq) goto loc_826938DC;
loc_826938B4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f2,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r25,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r25.u32);
loc_826938DC:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82693788"))) PPC_WEAK_FUNC(sub_82693788);
PPC_FUNC_IMPL(__imp__sub_82693788) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce4
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82376dd8
	sub_82376DD8(ctx, base);
	// li r25,0
	r25.s64 = 0;
	// lis r23,-32127
	r23.s64 = -2105475072;
	// stb r25,17(r30)
	PPC_STORE_U8(r30.u32 + 17, r25.u8);
	// lwz r3,-9608(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x8269383c
	if (!cr0.gt) goto loc_8269383C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r27,r25
	r27.u64 = r25.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r24,r11,11184
	r24.s64 = r11.s64 + 11184;
loc_826937CC:
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// lwzx r3,r27,r11
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// bl 0x82359808
	sub_82359808(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x82693830
	if (cr0.eq) goto loc_82693830;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x82693814
	if (cr0.eq) goto loc_82693814;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r25,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r25.u32);
	// stw r25,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r25.u32);
	// bl 0x821f0e20
	sub_821F0E20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82693818
	goto loc_82693818;
loc_82693814:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_82693818:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// bl 0x821f1468
	sub_821F1468(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x826931b0
	sub_826931B0(ctx, base);
loc_82693830:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bne 0x826937cc
	if (!cr0.eq) goto loc_826937CC;
loc_8269383C:
	// addi r3,r30,108
	ctx.r3.s64 = r30.s64 + 108;
	// bl 0x82693508
	sub_82693508(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82692848
	sub_82692848(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r4,r11,28480
	ctx.r4.s64 = r11.s64 + 28480;
	// bl 0x826909a8
	sub_826909A8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// beq 0x826938dc
	if (cr0.eq) goto loc_826938DC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,2816
	ctx.r4.s64 = r11.s64 + 2816;
	// lwz r11,-9608(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + -9608);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826938b4
	if (!cr0.eq) goto loc_826938B4;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,27088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 27088);
	// lwz r11,200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x826938dc
	if (!cr6.eq) goto loc_826938DC;
loc_826938B4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f2,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r25,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r25.u32);
loc_826938DC:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_826938E4"))) PPC_WEAK_FUNC(sub_826938E4);
PPC_FUNC_IMPL(__imp__sub_826938E4) {
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

__attribute__((alias("__imp__sub_8269390C"))) PPC_WEAK_FUNC(sub_8269390C);
PPC_FUNC_IMPL(__imp__sub_8269390C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82693910"))) PPC_WEAK_FUNC(sub_82693910);
PPC_FUNC_IMPL(__imp__sub_82693910) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// b 0x82693560
	sub_82693560(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82693918"))) PPC_WEAK_FUNC(sub_82693918);
PPC_FUNC_IMPL(__imp__sub_82693918) {
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
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82693560
	sub_82693560(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x826935b8
	sub_826935B8(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x82693508
	sub_82693508(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82376c90
	sub_82376C90(ctx, base);
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

__attribute__((alias("__imp__sub_82693968"))) PPC_WEAK_FUNC(sub_82693968);
PPC_FUNC_IMPL(__imp__sub_82693968) {
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
	// bl 0x823769e8
	sub_823769E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82693620
	sub_82693620(ctx, base);
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

__attribute__((alias("__imp__sub_8269399C"))) PPC_WEAK_FUNC(sub_8269399C);
PPC_FUNC_IMPL(__imp__sub_8269399C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826939A0"))) PPC_WEAK_FUNC(sub_826939A0);
PPC_FUNC_IMPL(__imp__sub_826939A0) {
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
	// addi r30,r31,84
	r30.s64 = r31.s64 + 84;
	// stb r4,76(r31)
	PPC_STORE_U8(r31.u32 + 76, ctx.r4.u8);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826939fc
	if (!cr0.eq) goto loc_826939FC;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b37d8
	sub_822B37D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826939fc
	if (cr0.eq) goto loc_826939FC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82693560
	sub_82693560(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826932d0
	sub_826932D0(ctx, base);
loc_826939FC:
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

__attribute__((alias("__imp__sub_82693A14"))) PPC_WEAK_FUNC(sub_82693A14);
PPC_FUNC_IMPL(__imp__sub_82693A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82693A18"))) PPC_WEAK_FUNC(sub_82693A18);
PPC_FUNC_IMPL(__imp__sub_82693A18) {
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
	// lwz r16,28840(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 28840);
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
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
	// lis r30,-32126
	r30.s64 = -2105409536;
	// lwz r11,-13480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13480);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13484
	r28.s64 = ctx.r10.s64 + -13484;
	// bne 0x82693a88
	if (!cr0.eq) goto loc_82693A88;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13480(r30)
	PPC_STORE_U32(r30.u32 + -13480, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,28708
	ctx.r4.s64 = r11.s64 + 28708;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13480);
loc_82693A88:
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
	// beq 0x82693ab0
	if (cr0.eq) goto loc_82693AB0;
	// addi r3,r25,-124
	ctx.r3.s64 = r25.s64 + -124;
	// bl 0x826924c8
	sub_826924C8(ctx, base);
loc_82693AA8:
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// b 0x82693f6c
	goto loc_82693F6C;
loc_82693AB0:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13488
	r28.s64 = ctx.r10.s64 + -13488;
	// bne 0x82693adc
	if (!cr0.eq) goto loc_82693ADC;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-13480(r30)
	PPC_STORE_U32(r30.u32 + -13480, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,28692
	ctx.r4.s64 = r11.s64 + 28692;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13480);
loc_82693ADC:
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
	// beq 0x82693b00
	if (cr0.eq) goto loc_82693B00;
	// addi r3,r25,-124
	ctx.r3.s64 = r25.s64 + -124;
	// bl 0x82692548
	sub_82692548(ctx, base);
	// b 0x82693aa8
	goto loc_82693AA8;
loc_82693B00:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13492
	r28.s64 = ctx.r10.s64 + -13492;
	// bne 0x82693b2c
	if (!cr0.eq) goto loc_82693B2C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-13480(r30)
	PPC_STORE_U32(r30.u32 + -13480, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,28680
	ctx.r4.s64 = r11.s64 + 28680;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13480);
loc_82693B2C:
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
	// beq 0x82693b50
	if (cr0.eq) goto loc_82693B50;
	// addi r3,r25,-124
	ctx.r3.s64 = r25.s64 + -124;
	// bl 0x826925c8
	sub_826925C8(ctx, base);
	// b 0x82693aa8
	goto loc_82693AA8;
loc_82693B50:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13496
	r28.s64 = ctx.r10.s64 + -13496;
	// bne 0x82693b7c
	if (!cr0.eq) goto loc_82693B7C;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-13480(r30)
	PPC_STORE_U32(r30.u32 + -13480, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,28660
	ctx.r4.s64 = r11.s64 + 28660;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13480);
loc_82693B7C:
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
	// beq 0x82693bd8
	if (cr0.eq) goto loc_82693BD8;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r30,r11,1
	r30.u64 = r11.u64 ^ 1;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,-124
	ctx.r3.s64 = r25.s64 + -124;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82692648
	sub_82692648(ctx, base);
	// b 0x82693aa8
	goto loc_82693AA8;
loc_82693BD8:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13500
	r28.s64 = ctx.r10.s64 + -13500;
	// bne 0x82693c04
	if (!cr0.eq) goto loc_82693C04;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-13480(r30)
	PPC_STORE_U32(r30.u32 + -13480, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,28648
	ctx.r4.s64 = r11.s64 + 28648;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13480);
loc_82693C04:
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
	// beq 0x82693c3c
	if (cr0.eq) goto loc_82693C3C;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,-124
	ctx.r3.s64 = r25.s64 + -124;
	// bl 0x826926b8
	sub_826926B8(ctx, base);
	// b 0x82693aa8
	goto loc_82693AA8;
loc_82693C3C:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13504
	r28.s64 = ctx.r10.s64 + -13504;
	// bne 0x82693c68
	if (!cr0.eq) goto loc_82693C68;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-13480(r30)
	PPC_STORE_U32(r30.u32 + -13480, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,28628
	ctx.r4.s64 = r11.s64 + 28628;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13480);
loc_82693C68:
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
	// beq 0x82693c94
	if (cr0.eq) goto loc_82693C94;
	// lbz r11,-48(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + -48);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82693f74
	goto loc_82693F74;
loc_82693C94:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13508
	r28.s64 = ctx.r10.s64 + -13508;
	// bne 0x82693cc0
	if (!cr0.eq) goto loc_82693CC0;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-13480(r30)
	PPC_STORE_U32(r30.u32 + -13480, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,28604
	ctx.r4.s64 = r11.s64 + 28604;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13480);
loc_82693CC0:
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
	// beq 0x82693d04
	if (cr0.eq) goto loc_82693D04;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r25,-124
	ctx.r3.s64 = r25.s64 + -124;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x826939a0
	sub_826939A0(ctx, base);
	// b 0x82693aa8
	goto loc_82693AA8;
loc_82693D04:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13512
	r28.s64 = ctx.r10.s64 + -13512;
	// bne 0x82693d30
	if (!cr0.eq) goto loc_82693D30;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,-13480(r30)
	PPC_STORE_U32(r30.u32 + -13480, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-14424
	ctx.r4.s64 = r11.s64 + -14424;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13480);
loc_82693D30:
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
	// beq 0x82693d60
	if (cr0.eq) goto loc_82693D60;
	// addi r30,r25,-124
	r30.s64 = r25.s64 + -124;
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
	// bl 0x82693560
	sub_82693560(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826932d0
	sub_826932D0(ctx, base);
	// b 0x82693aa8
	goto loc_82693AA8;
loc_82693D60:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13516
	r28.s64 = ctx.r10.s64 + -13516;
	// bne 0x82693d8c
	if (!cr0.eq) goto loc_82693D8C;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,-13480(r30)
	PPC_STORE_U32(r30.u32 + -13480, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,28596
	ctx.r4.s64 = r11.s64 + 28596;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13480);
loc_82693D8C:
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
	// beq 0x82693db0
	if (cr0.eq) goto loc_82693DB0;
	// addi r3,r25,-124
	ctx.r3.s64 = r25.s64 + -124;
	// bl 0x826922c8
	sub_826922C8(ctx, base);
	// b 0x82693aa8
	goto loc_82693AA8;
loc_82693DB0:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13520
	r28.s64 = ctx.r10.s64 + -13520;
	// bne 0x82693ddc
	if (!cr0.eq) goto loc_82693DDC;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,-13480(r30)
	PPC_STORE_U32(r30.u32 + -13480, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,15712
	ctx.r4.s64 = r11.s64 + 15712;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13480);
loc_82693DDC:
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
	// beq 0x82693e30
	if (cr0.eq) goto loc_82693E30;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,-40(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -40);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82696560
	sub_82696560(ctx, base);
	// b 0x82693aa8
	goto loc_82693AA8;
loc_82693E30:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13524
	r28.s64 = ctx.r10.s64 + -13524;
	// bne 0x82693e5c
	if (!cr0.eq) goto loc_82693E5C;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,-13480(r30)
	PPC_STORE_U32(r30.u32 + -13480, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,28584
	ctx.r4.s64 = r11.s64 + 28584;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13480);
loc_82693E5C:
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
	// beq 0x82693e94
	if (cr0.eq) goto loc_82693E94;
	// lbz r11,-47(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + -47);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,-47(r25)
	PPC_STORE_U8(r25.u32 + -47, r11.u8);
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// b 0x82693f74
	goto loc_82693F74;
loc_82693E94:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13528
	r28.s64 = ctx.r10.s64 + -13528;
	// bne 0x82693ebc
	if (!cr0.eq) goto loc_82693EBC;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,-13480(r30)
	PPC_STORE_U32(r30.u32 + -13480, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,28568
	ctx.r4.s64 = r11.s64 + 28568;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82693EBC:
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
	// beq 0x82693ee0
	if (cr0.eq) goto loc_82693EE0;
	// addi r3,r25,-124
	ctx.r3.s64 = r25.s64 + -124;
	// bl 0x826927c0
	sub_826927C0(ctx, base);
	// b 0x82693aa8
	goto loc_82693AA8;
loc_82693EE0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r25,-48
	ctx.r4.s64 = r25.s64 + -48;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e9d00
	sub_821E9D00(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82693f24
	if (cr6.eq) goto loc_82693F24;
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
	// beq 0x82693f70
	if (cr0.eq) goto loc_82693F70;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82693F1C:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82693f70
	goto loc_82693F70;
loc_82693F24:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r25,-64
	ctx.r4.s64 = r25.s64 + -64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82377300
	sub_82377300(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82693f64
	if (cr6.eq) goto loc_82693F64;
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
	// beq 0x82693f70
	if (cr0.eq) goto loc_82693F70;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x82693f1c
	goto loc_82693F1C;
loc_82693F64:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_82693F6C:
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
loc_82693F70:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82693F74:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82693A20"))) PPC_WEAK_FUNC(sub_82693A20);
PPC_FUNC_IMPL(__imp__sub_82693A20) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
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
	// lis r30,-32126
	r30.s64 = -2105409536;
	// lwz r11,-13480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13480);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13484
	r28.s64 = ctx.r10.s64 + -13484;
	// bne 0x82693a88
	if (!cr0.eq) goto loc_82693A88;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13480(r30)
	PPC_STORE_U32(r30.u32 + -13480, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,28708
	ctx.r4.s64 = r11.s64 + 28708;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13480);
loc_82693A88:
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
	// beq 0x82693ab0
	if (cr0.eq) goto loc_82693AB0;
	// addi r3,r25,-124
	ctx.r3.s64 = r25.s64 + -124;
	// bl 0x826924c8
	sub_826924C8(ctx, base);
loc_82693AA8:
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// b 0x82693f6c
	goto loc_82693F6C;
loc_82693AB0:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13488
	r28.s64 = ctx.r10.s64 + -13488;
	// bne 0x82693adc
	if (!cr0.eq) goto loc_82693ADC;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-13480(r30)
	PPC_STORE_U32(r30.u32 + -13480, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,28692
	ctx.r4.s64 = r11.s64 + 28692;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13480);
loc_82693ADC:
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
	// beq 0x82693b00
	if (cr0.eq) goto loc_82693B00;
	// addi r3,r25,-124
	ctx.r3.s64 = r25.s64 + -124;
	// bl 0x82692548
	sub_82692548(ctx, base);
	// b 0x82693aa8
	goto loc_82693AA8;
loc_82693B00:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13492
	r28.s64 = ctx.r10.s64 + -13492;
	// bne 0x82693b2c
	if (!cr0.eq) goto loc_82693B2C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-13480(r30)
	PPC_STORE_U32(r30.u32 + -13480, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,28680
	ctx.r4.s64 = r11.s64 + 28680;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13480);
loc_82693B2C:
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
	// beq 0x82693b50
	if (cr0.eq) goto loc_82693B50;
	// addi r3,r25,-124
	ctx.r3.s64 = r25.s64 + -124;
	// bl 0x826925c8
	sub_826925C8(ctx, base);
	// b 0x82693aa8
	goto loc_82693AA8;
loc_82693B50:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13496
	r28.s64 = ctx.r10.s64 + -13496;
	// bne 0x82693b7c
	if (!cr0.eq) goto loc_82693B7C;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-13480(r30)
	PPC_STORE_U32(r30.u32 + -13480, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,28660
	ctx.r4.s64 = r11.s64 + 28660;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13480);
loc_82693B7C:
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
	// beq 0x82693bd8
	if (cr0.eq) goto loc_82693BD8;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r30,r11,1
	r30.u64 = r11.u64 ^ 1;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,-124
	ctx.r3.s64 = r25.s64 + -124;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82692648
	sub_82692648(ctx, base);
	// b 0x82693aa8
	goto loc_82693AA8;
loc_82693BD8:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13500
	r28.s64 = ctx.r10.s64 + -13500;
	// bne 0x82693c04
	if (!cr0.eq) goto loc_82693C04;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-13480(r30)
	PPC_STORE_U32(r30.u32 + -13480, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,28648
	ctx.r4.s64 = r11.s64 + 28648;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13480);
loc_82693C04:
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
	// beq 0x82693c3c
	if (cr0.eq) goto loc_82693C3C;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,-124
	ctx.r3.s64 = r25.s64 + -124;
	// bl 0x826926b8
	sub_826926B8(ctx, base);
	// b 0x82693aa8
	goto loc_82693AA8;
loc_82693C3C:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13504
	r28.s64 = ctx.r10.s64 + -13504;
	// bne 0x82693c68
	if (!cr0.eq) goto loc_82693C68;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-13480(r30)
	PPC_STORE_U32(r30.u32 + -13480, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,28628
	ctx.r4.s64 = r11.s64 + 28628;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13480);
loc_82693C68:
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
	// beq 0x82693c94
	if (cr0.eq) goto loc_82693C94;
	// lbz r11,-48(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + -48);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82693f74
	goto loc_82693F74;
loc_82693C94:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13508
	r28.s64 = ctx.r10.s64 + -13508;
	// bne 0x82693cc0
	if (!cr0.eq) goto loc_82693CC0;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-13480(r30)
	PPC_STORE_U32(r30.u32 + -13480, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,28604
	ctx.r4.s64 = r11.s64 + 28604;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13480);
loc_82693CC0:
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
	// beq 0x82693d04
	if (cr0.eq) goto loc_82693D04;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r25,-124
	ctx.r3.s64 = r25.s64 + -124;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x826939a0
	sub_826939A0(ctx, base);
	// b 0x82693aa8
	goto loc_82693AA8;
loc_82693D04:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13512
	r28.s64 = ctx.r10.s64 + -13512;
	// bne 0x82693d30
	if (!cr0.eq) goto loc_82693D30;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,-13480(r30)
	PPC_STORE_U32(r30.u32 + -13480, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-14424
	ctx.r4.s64 = r11.s64 + -14424;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13480);
loc_82693D30:
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
	// beq 0x82693d60
	if (cr0.eq) goto loc_82693D60;
	// addi r30,r25,-124
	r30.s64 = r25.s64 + -124;
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
	// bl 0x82693560
	sub_82693560(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826932d0
	sub_826932D0(ctx, base);
	// b 0x82693aa8
	goto loc_82693AA8;
loc_82693D60:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13516
	r28.s64 = ctx.r10.s64 + -13516;
	// bne 0x82693d8c
	if (!cr0.eq) goto loc_82693D8C;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,-13480(r30)
	PPC_STORE_U32(r30.u32 + -13480, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,28596
	ctx.r4.s64 = r11.s64 + 28596;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13480);
loc_82693D8C:
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
	// beq 0x82693db0
	if (cr0.eq) goto loc_82693DB0;
	// addi r3,r25,-124
	ctx.r3.s64 = r25.s64 + -124;
	// bl 0x826922c8
	sub_826922C8(ctx, base);
	// b 0x82693aa8
	goto loc_82693AA8;
loc_82693DB0:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13520
	r28.s64 = ctx.r10.s64 + -13520;
	// bne 0x82693ddc
	if (!cr0.eq) goto loc_82693DDC;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,-13480(r30)
	PPC_STORE_U32(r30.u32 + -13480, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,15712
	ctx.r4.s64 = r11.s64 + 15712;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13480);
loc_82693DDC:
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
	// beq 0x82693e30
	if (cr0.eq) goto loc_82693E30;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,-40(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -40);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82696560
	sub_82696560(ctx, base);
	// b 0x82693aa8
	goto loc_82693AA8;
loc_82693E30:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13524
	r28.s64 = ctx.r10.s64 + -13524;
	// bne 0x82693e5c
	if (!cr0.eq) goto loc_82693E5C;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,-13480(r30)
	PPC_STORE_U32(r30.u32 + -13480, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,28584
	ctx.r4.s64 = r11.s64 + 28584;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13480(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13480);
loc_82693E5C:
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
	// beq 0x82693e94
	if (cr0.eq) goto loc_82693E94;
	// lbz r11,-47(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + -47);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,-47(r25)
	PPC_STORE_U8(r25.u32 + -47, r11.u8);
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// b 0x82693f74
	goto loc_82693F74;
loc_82693E94:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13528
	r28.s64 = ctx.r10.s64 + -13528;
	// bne 0x82693ebc
	if (!cr0.eq) goto loc_82693EBC;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,-13480(r30)
	PPC_STORE_U32(r30.u32 + -13480, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,28568
	ctx.r4.s64 = r11.s64 + 28568;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82693EBC:
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
	// beq 0x82693ee0
	if (cr0.eq) goto loc_82693EE0;
	// addi r3,r25,-124
	ctx.r3.s64 = r25.s64 + -124;
	// bl 0x826927c0
	sub_826927C0(ctx, base);
	// b 0x82693aa8
	goto loc_82693AA8;
loc_82693EE0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r25,-48
	ctx.r4.s64 = r25.s64 + -48;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e9d00
	sub_821E9D00(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82693f24
	if (cr6.eq) goto loc_82693F24;
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
	// beq 0x82693f70
	if (cr0.eq) goto loc_82693F70;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82693F1C:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82693f70
	goto loc_82693F70;
loc_82693F24:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r25,-64
	ctx.r4.s64 = r25.s64 + -64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82377300
	sub_82377300(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82693f64
	if (cr6.eq) goto loc_82693F64;
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
	// beq 0x82693f70
	if (cr0.eq) goto loc_82693F70;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x82693f1c
	goto loc_82693F1C;
loc_82693F64:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_82693F6C:
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
loc_82693F70:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82693F74:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82693F7C"))) PPC_WEAK_FUNC(sub_82693F7C);
PPC_FUNC_IMPL(__imp__sub_82693F7C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13480
	r11.s64 = r11.s64 + -13480;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13480
	ctx.r10.s64 = ctx.r10.s64 + -13480;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82693FA4"))) PPC_WEAK_FUNC(sub_82693FA4);
PPC_FUNC_IMPL(__imp__sub_82693FA4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13480
	r11.s64 = r11.s64 + -13480;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13480
	ctx.r10.s64 = ctx.r10.s64 + -13480;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82693FCC"))) PPC_WEAK_FUNC(sub_82693FCC);
PPC_FUNC_IMPL(__imp__sub_82693FCC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13480
	r11.s64 = r11.s64 + -13480;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13480
	ctx.r10.s64 = ctx.r10.s64 + -13480;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82693FF4"))) PPC_WEAK_FUNC(sub_82693FF4);
PPC_FUNC_IMPL(__imp__sub_82693FF4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13480
	r11.s64 = r11.s64 + -13480;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13480
	ctx.r10.s64 = ctx.r10.s64 + -13480;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269401C"))) PPC_WEAK_FUNC(sub_8269401C);
PPC_FUNC_IMPL(__imp__sub_8269401C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13480
	r11.s64 = r11.s64 + -13480;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13480
	ctx.r10.s64 = ctx.r10.s64 + -13480;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82694044"))) PPC_WEAK_FUNC(sub_82694044);
PPC_FUNC_IMPL(__imp__sub_82694044) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13480
	r11.s64 = r11.s64 + -13480;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13480
	ctx.r10.s64 = ctx.r10.s64 + -13480;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269406C"))) PPC_WEAK_FUNC(sub_8269406C);
PPC_FUNC_IMPL(__imp__sub_8269406C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13480
	r11.s64 = r11.s64 + -13480;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13480
	ctx.r10.s64 = ctx.r10.s64 + -13480;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82694094"))) PPC_WEAK_FUNC(sub_82694094);
PPC_FUNC_IMPL(__imp__sub_82694094) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13480
	r11.s64 = r11.s64 + -13480;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13480
	ctx.r10.s64 = ctx.r10.s64 + -13480;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826940BC"))) PPC_WEAK_FUNC(sub_826940BC);
PPC_FUNC_IMPL(__imp__sub_826940BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13480
	r11.s64 = r11.s64 + -13480;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13480
	ctx.r10.s64 = ctx.r10.s64 + -13480;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826940E4"))) PPC_WEAK_FUNC(sub_826940E4);
PPC_FUNC_IMPL(__imp__sub_826940E4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13480
	r11.s64 = r11.s64 + -13480;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13480
	ctx.r10.s64 = ctx.r10.s64 + -13480;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269410C"))) PPC_WEAK_FUNC(sub_8269410C);
PPC_FUNC_IMPL(__imp__sub_8269410C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13480
	r11.s64 = r11.s64 + -13480;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,22,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13480
	ctx.r10.s64 = ctx.r10.s64 + -13480;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82694134"))) PPC_WEAK_FUNC(sub_82694134);
PPC_FUNC_IMPL(__imp__sub_82694134) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13480
	r11.s64 = r11.s64 + -13480;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,21,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13480
	ctx.r10.s64 = ctx.r10.s64 + -13480;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269415C"))) PPC_WEAK_FUNC(sub_8269415C);
PPC_FUNC_IMPL(__imp__sub_8269415C) {
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

__attribute__((alias("__imp__sub_82694184"))) PPC_WEAK_FUNC(sub_82694184);
PPC_FUNC_IMPL(__imp__sub_82694184) {
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

__attribute__((alias("__imp__sub_826941AC"))) PPC_WEAK_FUNC(sub_826941AC);
PPC_FUNC_IMPL(__imp__sub_826941AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826941B0"))) PPC_WEAK_FUNC(sub_826941B0);
PPC_FUNC_IMPL(__imp__sub_826941B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x82693a20
	sub_82693A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826941BC"))) PPC_WEAK_FUNC(sub_826941BC);
PPC_FUNC_IMPL(__imp__sub_826941BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826941C0"))) PPC_WEAK_FUNC(sub_826941C0);
PPC_FUNC_IMPL(__imp__sub_826941C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r30,-32140
	r30.s64 = -2106327040;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// lwz r3,27088(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 27088);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r29,20
	r29.s64 = 20;
	// addi r28,r11,728
	r28.s64 = r11.s64 + 728;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r27,r11,732
	r27.s64 = r11.s64 + 732;
loc_82694214:
	// li r26,2
	r26.s64 = 2;
loc_82694218:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821b2800
	sub_821B2800(ctx, base);
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bne 0x82694218
	if (!cr0.eq) goto loc_82694218;
	// lwz r3,27088(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 27088);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,27088(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 27088);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822719e8
	sub_822719E8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	f0.f64 = double(temp.f32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822719e8
	sub_822719E8(ctx, base);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	f0.f64 = double(temp.f32);
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// bne 0x82694214
	if (!cr0.eq) goto loc_82694214;
	// lwz r3,27088(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 27088);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f13,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// lfs f0,3008(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3008);
	f0.f64 = double(temp.f32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,64(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r11,29112
	ctx.r4.s64 = r11.s64 + 29112;
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f31,60(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// addi r30,r11,2936
	r30.s64 = r11.s64 + 2936;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82357878
	sub_82357878(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfs f31,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	f31.f64 = double(temp.f32);
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// addi r4,r11,29096
	ctx.r4.s64 = r11.s64 + 29096;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82357878
	sub_82357878(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82694330"))) PPC_WEAK_FUNC(sub_82694330);
PPC_FUNC_IMPL(__imp__sub_82694330) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,29224(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 29224);
	// mflr r12
	// bl 0x8239bcec
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r4,r11,29188
	ctx.r4.s64 = r11.s64 + 29188;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r11,29176
	ctx.r3.s64 = r11.s64 + 29176;
	// bl 0x82358080
	sub_82358080(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// li r27,0
	r27.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82694390
	if (cr0.eq) goto loc_82694390;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823586c0
	sub_823586C0(ctx, base);
	// b 0x82694394
	goto loc_82694394;
loc_82694390:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82694394:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r3,188(r30)
	PPC_STORE_U32(r30.u32 + 188, ctx.r3.u32);
	// addi r4,r11,29168
	ctx.r4.s64 = r11.s64 + 29168;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,29148
	ctx.r4.s64 = r11.s64 + 29148;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r11,3508
	r29.s64 = r11.s64 + 3508;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r28,r11,1688
	r28.s64 = r11.s64 + 1688;
	// bl 0x82325568
	sub_82325568(ctx, base);
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
	// lis r28,-32126
	r28.s64 = -2105409536;
	// stw r3,-13476(r28)
	PPC_STORE_U32(r28.u32 + -13476, ctx.r3.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r26,r11,-5056
	r26.s64 = r11.s64 + -5056;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82312de8
	sub_82312DE8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82379738
	sub_82379738(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,-8684(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8684);
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// bl 0x822cf278
	sub_822CF278(ctx, base);
	// lwz r11,-8684(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8684);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r4,r11,29140
	ctx.r4.s64 = r11.s64 + 29140;
	// stb r27,164(r10)
	PPC_STORE_U8(ctx.r10.u32 + 164, r27.u8);
	// lwz r11,-8684(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8684);
	// stb r27,820(r11)
	PPC_STORE_U8(r11.u32 + 820, r27.u8);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r29,-32140
	r29.s64 = -2106327040;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,27088(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 27088);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r25,0(r10)
	r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82315578
	sub_82315578(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,100(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 100);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// lwz r3,27088(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 27088);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,-13476(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -13476);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,128
	ctx.r4.s64 = r11.s64 + 128;
	// bne cr6,0x826944a8
	if (!cr6.eq) goto loc_826944A8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_826944A8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826941c0
	sub_826941C0(ctx, base);
	// lwz r11,-13476(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -13476);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,128
	ctx.r4.s64 = r11.s64 + 128;
	// bne cr6,0x826944c4
	if (!cr6.eq) goto loc_826944C4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_826944C4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826941c0
	sub_826941C0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823118f8
	sub_823118F8(ctx, base);
	// lwz r3,27088(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 27088);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,27088(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 27088);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// bl 0x82391830
	sub_82391830(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stfs f31,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 72, temp.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r27,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r27.u32);
	// addi r4,r11,29128
	ctx.r4.s64 = r11.s64 + 29128;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,68(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 68, temp.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82315578
	sub_82315578(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stfs f1,176(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 176, temp.u32);
	// stb r11,184(r30)
	PPC_STORE_U8(r30.u32 + 184, r11.u8);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82694338"))) PPC_WEAK_FUNC(sub_82694338);
PPC_FUNC_IMPL(__imp__sub_82694338) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r4,r11,29188
	ctx.r4.s64 = r11.s64 + 29188;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r11,29176
	ctx.r3.s64 = r11.s64 + 29176;
	// bl 0x82358080
	sub_82358080(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// li r27,0
	r27.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82694390
	if (cr0.eq) goto loc_82694390;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823586c0
	sub_823586C0(ctx, base);
	// b 0x82694394
	goto loc_82694394;
loc_82694390:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82694394:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r3,188(r30)
	PPC_STORE_U32(r30.u32 + 188, ctx.r3.u32);
	// addi r4,r11,29168
	ctx.r4.s64 = r11.s64 + 29168;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,29148
	ctx.r4.s64 = r11.s64 + 29148;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r11,3508
	r29.s64 = r11.s64 + 3508;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r28,r11,1688
	r28.s64 = r11.s64 + 1688;
	// bl 0x82325568
	sub_82325568(ctx, base);
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
	// lis r28,-32126
	r28.s64 = -2105409536;
	// stw r3,-13476(r28)
	PPC_STORE_U32(r28.u32 + -13476, ctx.r3.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r26,r11,-5056
	r26.s64 = r11.s64 + -5056;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82312de8
	sub_82312DE8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82379738
	sub_82379738(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,-8684(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8684);
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// bl 0x822cf278
	sub_822CF278(ctx, base);
	// lwz r11,-8684(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8684);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r4,r11,29140
	ctx.r4.s64 = r11.s64 + 29140;
	// stb r27,164(r10)
	PPC_STORE_U8(ctx.r10.u32 + 164, r27.u8);
	// lwz r11,-8684(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8684);
	// stb r27,820(r11)
	PPC_STORE_U8(r11.u32 + 820, r27.u8);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r29,-32140
	r29.s64 = -2106327040;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,27088(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 27088);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r25,0(r10)
	r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82315578
	sub_82315578(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,100(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 100);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// lwz r3,27088(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 27088);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,-13476(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -13476);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,128
	ctx.r4.s64 = r11.s64 + 128;
	// bne cr6,0x826944a8
	if (!cr6.eq) goto loc_826944A8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_826944A8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826941c0
	sub_826941C0(ctx, base);
	// lwz r11,-13476(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -13476);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,128
	ctx.r4.s64 = r11.s64 + 128;
	// bne cr6,0x826944c4
	if (!cr6.eq) goto loc_826944C4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_826944C4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826941c0
	sub_826941C0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823118f8
	sub_823118F8(ctx, base);
	// lwz r3,27088(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 27088);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,27088(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 27088);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// bl 0x82391830
	sub_82391830(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stfs f31,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 72, temp.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r27,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r27.u32);
	// addi r4,r11,29128
	ctx.r4.s64 = r11.s64 + 29128;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,68(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 68, temp.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82315578
	sub_82315578(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stfs f1,176(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 176, temp.u32);
	// stb r11,184(r30)
	PPC_STORE_U8(r30.u32 + 184, r11.u8);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8269458C"))) PPC_WEAK_FUNC(sub_8269458C);
PPC_FUNC_IMPL(__imp__sub_8269458C) {
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

__attribute__((alias("__imp__sub_826945B4"))) PPC_WEAK_FUNC(sub_826945B4);
PPC_FUNC_IMPL(__imp__sub_826945B4) {
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

__attribute__((alias("__imp__sub_826945DC"))) PPC_WEAK_FUNC(sub_826945DC);
PPC_FUNC_IMPL(__imp__sub_826945DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826945E0"))) PPC_WEAK_FUNC(sub_826945E0);
PPC_FUNC_IMPL(__imp__sub_826945E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// bl 0x82357718
	sub_82357718(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82357598
	sub_82357598(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82357598
	sub_82357598(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823573c0
	sub_823573C0(ctx, base);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x82357598
	sub_82357598(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823571b0
	sub_823571B0(ctx, base);
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82694664"))) PPC_WEAK_FUNC(sub_82694664);
PPC_FUNC_IMPL(__imp__sub_82694664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82694668"))) PPC_WEAK_FUNC(sub_82694668);
PPC_FUNC_IMPL(__imp__sub_82694668) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,29368(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 29368);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// beq 0x82694710
	if (cr0.eq) goto loc_82694710;
	// stw r27,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r27.u32);
	// stw r26,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r26.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,29304
	ctx.r4.s64 = r11.s64 + 29304;
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821332a0
	sub_821332A0(ctx, base);
	// li r29,3
	r29.s64 = 3;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// bl 0x82312240
	sub_82312240(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82694714
	goto loc_82694714;
loc_82694710:
	// mr r30,r26
	r30.u64 = r26.u64;
loc_82694714:
	// rlwinm. r11,r29,0,30,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82694738
	if (cr0.eq) goto loc_82694738;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm r29,r29,0,31,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r11,r11,18572
	r11.s64 = r11.s64 + 18572;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82694738:
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82694754
	if (cr0.eq) goto loc_82694754;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82694754
	if (cr0.eq) goto loc_82694754;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82694754:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f1,-27476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27476);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82314420
	sub_82314420(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r26,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r26.u32);
	// stw r26,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r26.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82694670"))) PPC_WEAK_FUNC(sub_82694670);
PPC_FUNC_IMPL(__imp__sub_82694670) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// beq 0x82694710
	if (cr0.eq) goto loc_82694710;
	// stw r27,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r27.u32);
	// stw r26,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r26.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,29304
	ctx.r4.s64 = r11.s64 + 29304;
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821332a0
	sub_821332A0(ctx, base);
	// li r29,3
	r29.s64 = 3;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// bl 0x82312240
	sub_82312240(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82694714
	goto loc_82694714;
loc_82694710:
	// mr r30,r26
	r30.u64 = r26.u64;
loc_82694714:
	// rlwinm. r11,r29,0,30,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82694738
	if (cr0.eq) goto loc_82694738;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm r29,r29,0,31,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r11,r11,18572
	r11.s64 = r11.s64 + 18572;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82694738:
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82694754
	if (cr0.eq) goto loc_82694754;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82694754
	if (cr0.eq) goto loc_82694754;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82694754:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f1,-27476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27476);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82314420
	sub_82314420(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r26,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r26.u32);
	// stw r26,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r26.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82694784"))) PPC_WEAK_FUNC(sub_82694784);
PPC_FUNC_IMPL(__imp__sub_82694784) {
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

__attribute__((alias("__imp__sub_826947AC"))) PPC_WEAK_FUNC(sub_826947AC);
PPC_FUNC_IMPL(__imp__sub_826947AC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826947dc
	if (cr0.eq) goto loc_826947DC;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82120868
	sub_82120868(ctx, base);
loc_826947DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826947EC"))) PPC_WEAK_FUNC(sub_826947EC);
PPC_FUNC_IMPL(__imp__sub_826947EC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8269481c
	if (cr0.eq) goto loc_8269481C;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82273620
	sub_82273620(ctx, base);
loc_8269481C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269482C"))) PPC_WEAK_FUNC(sub_8269482C);
PPC_FUNC_IMPL(__imp__sub_8269482C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82694830"))) PPC_WEAK_FUNC(sub_82694830);
PPC_FUNC_IMPL(__imp__sub_82694830) {
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
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b5750
	sub_822B5750(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x822c6a18
	sub_822C6A18(ctx, base);
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

__attribute__((alias("__imp__sub_826948A0"))) PPC_WEAK_FUNC(sub_826948A0);
PPC_FUNC_IMPL(__imp__sub_826948A0) {
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
	// lwz r16,29488(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 29488);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
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
	// lis r30,-32126
	r30.s64 = -2105409536;
	// lwz r11,-13464(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13464);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13468
	r29.s64 = ctx.r10.s64 + -13468;
	// bne 0x82694910
	if (!cr0.eq) goto loc_82694910;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13464(r30)
	PPC_STORE_U32(r30.u32 + -13464, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20684
	ctx.r4.s64 = r11.s64 + 20684;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13464(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13464);
loc_82694910:
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
	// beq 0x8269496c
	if (cr0.eq) goto loc_8269496C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82694670
	sub_82694670(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82694968
	if (cr6.eq) goto loc_82694968;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82694a34
	if (cr0.eq) goto loc_82694A34;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82694960:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82694a34
	goto loc_82694A34;
loc_82694968:
	// lwz r11,-13464(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13464);
loc_8269496C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13472
	r29.s64 = ctx.r10.s64 + -13472;
	// bne 0x82694994
	if (!cr0.eq) goto loc_82694994;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-13464(r30)
	PPC_STORE_U32(r30.u32 + -13464, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29304
	ctx.r4.s64 = r11.s64 + 29304;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82694994:
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
	// beq 0x826949e8
	if (cr0.eq) goto loc_826949E8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82694830
	sub_82694830(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x826949e8
	if (cr6.eq) goto loc_826949E8;
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
	// beq 0x82694a34
	if (cr0.eq) goto loc_82694A34;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x82694960
	goto loc_82694960;
loc_826949E8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82378fc8
	sub_82378FC8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82694a28
	if (cr6.eq) goto loc_82694A28;
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
	// beq 0x82694a34
	if (cr0.eq) goto loc_82694A34;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x82694960
	goto loc_82694960;
loc_82694A28:
	// li r11,6
	r11.s64 = 6;
	// stw r25,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r25.u32);
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_82694A34:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_826948A8"))) PPC_WEAK_FUNC(sub_826948A8);
PPC_FUNC_IMPL(__imp__sub_826948A8) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
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
	// lis r30,-32126
	r30.s64 = -2105409536;
	// lwz r11,-13464(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13464);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13468
	r29.s64 = ctx.r10.s64 + -13468;
	// bne 0x82694910
	if (!cr0.eq) goto loc_82694910;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13464(r30)
	PPC_STORE_U32(r30.u32 + -13464, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20684
	ctx.r4.s64 = r11.s64 + 20684;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13464(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13464);
loc_82694910:
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
	// beq 0x8269496c
	if (cr0.eq) goto loc_8269496C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82694670
	sub_82694670(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82694968
	if (cr6.eq) goto loc_82694968;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82694a34
	if (cr0.eq) goto loc_82694A34;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82694960:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82694a34
	goto loc_82694A34;
loc_82694968:
	// lwz r11,-13464(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13464);
loc_8269496C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13472
	r29.s64 = ctx.r10.s64 + -13472;
	// bne 0x82694994
	if (!cr0.eq) goto loc_82694994;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-13464(r30)
	PPC_STORE_U32(r30.u32 + -13464, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29304
	ctx.r4.s64 = r11.s64 + 29304;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82694994:
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
	// beq 0x826949e8
	if (cr0.eq) goto loc_826949E8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82694830
	sub_82694830(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x826949e8
	if (cr6.eq) goto loc_826949E8;
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
	// beq 0x82694a34
	if (cr0.eq) goto loc_82694A34;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x82694960
	goto loc_82694960;
loc_826949E8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82378fc8
	sub_82378FC8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82694a28
	if (cr6.eq) goto loc_82694A28;
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
	// beq 0x82694a34
	if (cr0.eq) goto loc_82694A34;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x82694960
	goto loc_82694960;
loc_82694A28:
	// li r11,6
	r11.s64 = 6;
	// stw r25,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r25.u32);
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_82694A34:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82694A40"))) PPC_WEAK_FUNC(sub_82694A40);
PPC_FUNC_IMPL(__imp__sub_82694A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13464
	r11.s64 = r11.s64 + -13464;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13464
	ctx.r10.s64 = ctx.r10.s64 + -13464;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82694A68"))) PPC_WEAK_FUNC(sub_82694A68);
PPC_FUNC_IMPL(__imp__sub_82694A68) {
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

__attribute__((alias("__imp__sub_82694A90"))) PPC_WEAK_FUNC(sub_82694A90);
PPC_FUNC_IMPL(__imp__sub_82694A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13464
	r11.s64 = r11.s64 + -13464;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13464
	ctx.r10.s64 = ctx.r10.s64 + -13464;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82694AB8"))) PPC_WEAK_FUNC(sub_82694AB8);
PPC_FUNC_IMPL(__imp__sub_82694AB8) {
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

__attribute__((alias("__imp__sub_82694AE0"))) PPC_WEAK_FUNC(sub_82694AE0);
PPC_FUNC_IMPL(__imp__sub_82694AE0) {
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

__attribute__((alias("__imp__sub_82694B08"))) PPC_WEAK_FUNC(sub_82694B08);
PPC_FUNC_IMPL(__imp__sub_82694B08) {
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
	// lwz r16,29624(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 29624);
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
	// bne cr6,0x82694b78
	if (!cr6.eq) goto loc_82694B78;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82694b4c
	if (cr0.eq) goto loc_82694B4C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82694B4C:
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
	// beq 0x82694ba8
	if (cr0.eq) goto loc_82694BA8;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82694ba8
	goto loc_82694BA8;
loc_82694B78:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,20360
	r30.s64 = r11.s64 + 20360;
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
loc_82694BA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82694B10"))) PPC_WEAK_FUNC(sub_82694B10);
PPC_FUNC_IMPL(__imp__sub_82694B10) {
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
	// bne cr6,0x82694b78
	if (!cr6.eq) goto loc_82694B78;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82694b4c
	if (cr0.eq) goto loc_82694B4C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82694B4C:
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
	// beq 0x82694ba8
	if (cr0.eq) goto loc_82694BA8;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82694ba8
	goto loc_82694BA8;
loc_82694B78:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,20360
	r30.s64 = r11.s64 + 20360;
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
loc_82694BA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82694BB4"))) PPC_WEAK_FUNC(sub_82694BB4);
PPC_FUNC_IMPL(__imp__sub_82694BB4) {
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

__attribute__((alias("__imp__sub_82694BDC"))) PPC_WEAK_FUNC(sub_82694BDC);
PPC_FUNC_IMPL(__imp__sub_82694BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82694BE0"))) PPC_WEAK_FUNC(sub_82694BE0);
PPC_FUNC_IMPL(__imp__sub_82694BE0) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f31,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f31.f64 = double(temp.f32);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82694c30
	if (cr0.eq) goto loc_82694C30;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f2,f0,f13
	ctx.f2.f64 = double(float(f0.f64 / ctx.f13.f64));
	// b 0x82694c34
	goto loc_82694C34;
loc_82694C30:
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
loc_82694C34:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r11,29720
	ctx.r3.s64 = r11.s64 + 29720;
	// bl 0x821a89c8
	sub_821A89C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r30,0
	r30.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82694d10
	if (cr0.eq) goto loc_82694D10;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r29,0
	r29.s64 = 0;
	// addi r27,r11,29688
	r27.s64 = r11.s64 + 29688;
loc_82694C7C:
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fadds f2,f0,f31
	ctx.f2.f64 = double(float(f0.f64 + f31.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// add r30,r10,r30
	r30.u64 = ctx.r10.u64 + r30.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mulli r11,r30,100
	r11.s64 = r30.s64 * 100;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 / f0.f64));
	// bl 0x826945e0
	sub_826945E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// beq cr6,0x82694d10
	if (cr6.eq) goto loc_82694D10;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// fadds f31,f0,f31
	f31.f64 = double(float(f0.f64 + f31.f64));
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x82694c7c
	if (cr6.lt) goto loc_82694C7C;
loc_82694D10:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82694D1C"))) PPC_WEAK_FUNC(sub_82694D1C);
PPC_FUNC_IMPL(__imp__sub_82694D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82694D20"))) PPC_WEAK_FUNC(sub_82694D20);
PPC_FUNC_IMPL(__imp__sub_82694D20) {
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
	// lwz r16,29776(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 29776);
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
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r11,-13456(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13456);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// addi r29,r9,-13460
	r29.s64 = ctx.r9.s64 + -13460;
	// bne 0x82694d88
	if (!cr0.eq) goto loc_82694D88;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13456(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13456, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29752
	ctx.r4.s64 = r11.s64 + 29752;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82694D88:
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
	// beq 0x82694dbc
	if (cr0.eq) goto loc_82694DBC;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,180
	ctx.r3.s64 = r28.s64 + 180;
	// bl 0x82694b10
	sub_82694B10(ctx, base);
	// b 0x82694de0
	goto loc_82694DE0;
loc_82694DBC:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823150b8
	sub_823150B8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_82694DE0:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82694D28"))) PPC_WEAK_FUNC(sub_82694D28);
PPC_FUNC_IMPL(__imp__sub_82694D28) {
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
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r11,-13456(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13456);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// addi r29,r9,-13460
	r29.s64 = ctx.r9.s64 + -13460;
	// bne 0x82694d88
	if (!cr0.eq) goto loc_82694D88;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13456(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13456, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29752
	ctx.r4.s64 = r11.s64 + 29752;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82694D88:
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
	// beq 0x82694dbc
	if (cr0.eq) goto loc_82694DBC;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,180
	ctx.r3.s64 = r28.s64 + 180;
	// bl 0x82694b10
	sub_82694B10(ctx, base);
	// b 0x82694de0
	goto loc_82694DE0;
loc_82694DBC:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823150b8
	sub_823150B8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_82694DE0:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82694DE8"))) PPC_WEAK_FUNC(sub_82694DE8);
PPC_FUNC_IMPL(__imp__sub_82694DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13456
	r11.s64 = r11.s64 + -13456;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13456
	ctx.r10.s64 = ctx.r10.s64 + -13456;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82694E10"))) PPC_WEAK_FUNC(sub_82694E10);
PPC_FUNC_IMPL(__imp__sub_82694E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82355020
	sub_82355020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82694E30"))) PPC_WEAK_FUNC(sub_82694E30);
PPC_FUNC_IMPL(__imp__sub_82694E30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82694E34"))) PPC_WEAK_FUNC(sub_82694E34);
PPC_FUNC_IMPL(__imp__sub_82694E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82694E38"))) PPC_WEAK_FUNC(sub_82694E38);
PPC_FUNC_IMPL(__imp__sub_82694E38) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r29,0
	r29.s64 = 0;
	// addi r31,r30,20
	r31.s64 = r30.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8218fdf8
	sub_8218FDF8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,29204(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 29204);
	f0.f64 = double(temp.f32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82694ec0
	if (!cr6.lt) goto loc_82694EC0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x8218fdf8
	sub_8218FDF8(ctx, base);
	// b 0x82694ed8
	goto loc_82694ED8;
loc_82694EC0:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x8218fe50
	sub_8218FE50(ctx, base);
loc_82694ED8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82694EE0"))) PPC_WEAK_FUNC(sub_82694EE0);
PPC_FUNC_IMPL(__imp__sub_82694EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// blt cr6,0x82694fec
	if (cr6.lt) goto loc_82694FEC;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82694f1c
	if (!cr6.eq) goto loc_82694F1C;
	// stfs f31,4(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// b 0x82694f38
	goto loc_82694F38;
loc_82694F1C:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x82694f2c
	if (!cr6.lt) goto loc_82694F2C;
	// stfs f31,4(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
loc_82694F2C:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x82694f3c
	if (!cr6.lt) goto loc_82694F3C;
loc_82694F38:
	// stfs f31,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
loc_82694F3C:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fdivs f0,f31,f0
	f0.f64 = double(float(f31.f64 / f0.f64));
	// addi r31,r30,20
	r31.s64 = r30.s64 + 20;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82694fc0
	if (cr6.lt) goto loc_82694FC0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r29,1,0,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r9,r10,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r10.s64;
	// srawi r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82694fa8
	if (!cr6.lt) goto loc_82694FA8;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8218fdf8
	sub_8218FDF8(ctx, base);
	// b 0x82694fc0
	goto loc_82694FC0;
loc_82694FA8:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x8218fe50
	sub_8218FE50(ctx, base);
loc_82694FC0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
loc_82694FEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82694FF8"))) PPC_WEAK_FUNC(sub_82694FF8);
PPC_FUNC_IMPL(__imp__sub_82694FF8) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826952ec
	if (cr6.eq) goto loc_826952EC;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-8684(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -8684);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826952ec
	if (cr6.eq) goto loc_826952EC;
	// lbz r11,184(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 184);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826952ec
	if (cr0.eq) goto loc_826952EC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lfs f13,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,176(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 176);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,72(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// lwz r11,-9288(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,116(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// lfs f13,17324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// lfs f1,72(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-4904(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4904);
	f0.f64 = double(temp.f32);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x823118f8
	sub_823118F8(ctx, base);
	// mftb r11
	r11.u64 = __rdtsc();
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// rotlwi r29,r11,0
	r29.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mftb r11
	r11.u64 = __rdtsc();
	// lis r30,-32140
	r30.s64 = -2106327040;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// lwz r3,27088(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 27088);
	// clrldi r28,r11,32
	r28.u64 = r11.u64 & 0xFFFFFFFF;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r29,2
	r29.s64 = 2;
	// lis r27,-32126
	r27.s64 = -2105409536;
loc_826950F4:
	// lwz r11,-13476(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -13476);
	// addi r3,r11,128
	ctx.r3.s64 = r11.s64 + 128;
	// bl 0x821b2800
	sub_821B2800(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x826950f4
	if (!cr0.eq) goto loc_826950F4;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,27088(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 27088);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,27088(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 27088);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r29,208(r3)
	r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + 208);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,732
	ctx.r4.s64 = r11.s64 + 732;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822719e8
	sub_822719E8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,728
	ctx.r4.s64 = ctx.r10.s64 + 728;
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 - f0.f64));
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822719e8
	sub_822719E8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,27088(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 27088);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	f0.f64 = double(temp.f32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lwz r10,92(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x8269522c
	if (!cr0.eq) goto loc_8269522C;
	// sradi r9,r28,32
	xer.ca = (r28.s64 < 0) & ((r28.u64 & 0xFFFFFFFF) != 0);
	ctx.r9.s64 = r28.s64 >> 32;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// lfs f0,18804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18804);
	f0.f64 = double(temp.f32);
	// clrldi r11,r28,32
	r11.u64 = r28.u64 & 0xFFFFFFFF;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
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
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// bge cr6,0x8269520c
	if (!cr6.lt) goto loc_8269520C;
	// li r11,0
	r11.s64 = 0;
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
loc_8269520C:
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// bl 0x82694ee0
	sub_82694EE0(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82694ee0
	sub_82694EE0(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82694ee0
	sub_82694EE0(ctx, base);
loc_8269522C:
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	f0.f64 = double(temp.f32);
	// lfs f13,68(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x826952ec
	if (!cr6.gt) goto loc_826952EC;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// addi r4,r11,29904
	ctx.r4.s64 = r11.s64 + 29904;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// bl 0x82694be0
	sub_82694BE0(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// addi r4,r11,29884
	ctx.r4.s64 = r11.s64 + 29884;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// bl 0x82694be0
	sub_82694BE0(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// addi r4,r11,29864
	ctx.r4.s64 = r11.s64 + 29864;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// bl 0x82694be0
	sub_82694BE0(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lwz r29,172(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// addi r4,r11,29848
	ctx.r4.s64 = r11.s64 + 29848;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r30,r11,29840
	r30.s64 = r11.s64 + 29840;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82357818
	sub_82357818(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826952dc
	if (cr0.eq) goto loc_826952DC;
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
loc_826952DC:
	// lis r11,-32136
	r11.s64 = -2106064896;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,18840
	ctx.r3.s64 = r11.s64 + 18840;
	// bl 0x82272788
	sub_82272788(ctx, base);
loc_826952EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826952FC"))) PPC_WEAK_FUNC(sub_826952FC);
PPC_FUNC_IMPL(__imp__sub_826952FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82695300"))) PPC_WEAK_FUNC(sub_82695300);
PPC_FUNC_IMPL(__imp__sub_82695300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,29936(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 29936);
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
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,20
	r11.s64 = r30.s64 + 20;
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bl 0x82694e38
	sub_82694E38(ctx, base);
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

__attribute__((alias("__imp__sub_82695308"))) PPC_WEAK_FUNC(sub_82695308);
PPC_FUNC_IMPL(__imp__sub_82695308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,20
	r11.s64 = r30.s64 + 20;
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bl 0x82694e38
	sub_82694E38(ctx, base);
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

__attribute__((alias("__imp__sub_82695360"))) PPC_WEAK_FUNC(sub_82695360);
PPC_FUNC_IMPL(__imp__sub_82695360) {
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
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
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

__attribute__((alias("__imp__sub_8269538C"))) PPC_WEAK_FUNC(sub_8269538C);
PPC_FUNC_IMPL(__imp__sub_8269538C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82695390"))) PPC_WEAK_FUNC(sub_82695390);
PPC_FUNC_IMPL(__imp__sub_82695390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,30104(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 30104);
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
	// bl 0x823799b0
	sub_823799B0(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,29988
	r11.s64 = r11.s64 + 29988;
	// addi r3,r30,76
	ctx.r3.s64 = r30.s64 + 76;
	// lfs f31,5736(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5736);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82695308
	sub_82695308(ctx, base);
	// addi r3,r30,108
	ctx.r3.s64 = r30.s64 + 108;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82695308
	sub_82695308(ctx, base);
	// addi r3,r30,140
	ctx.r3.s64 = r30.s64 + 140;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82695308
	sub_82695308(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,184(r30)
	PPC_STORE_U8(r30.u32 + 184, r11.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82695398"))) PPC_WEAK_FUNC(sub_82695398);
PPC_FUNC_IMPL(__imp__sub_82695398) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x823799b0
	sub_823799B0(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,29988
	r11.s64 = r11.s64 + 29988;
	// addi r3,r30,76
	ctx.r3.s64 = r30.s64 + 76;
	// lfs f31,5736(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5736);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82695308
	sub_82695308(ctx, base);
	// addi r3,r30,108
	ctx.r3.s64 = r30.s64 + 108;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82695308
	sub_82695308(ctx, base);
	// addi r3,r30,140
	ctx.r3.s64 = r30.s64 + 140;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82695308
	sub_82695308(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,184(r30)
	PPC_STORE_U8(r30.u32 + 184, r11.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82695420"))) PPC_WEAK_FUNC(sub_82695420);
PPC_FUNC_IMPL(__imp__sub_82695420) {
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
	// bl 0x822a0550
	sub_822A0550(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82695448"))) PPC_WEAK_FUNC(sub_82695448);
PPC_FUNC_IMPL(__imp__sub_82695448) {
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
	// addi r3,r11,76
	ctx.r3.s64 = r11.s64 + 76;
	// bl 0x82694e10
	sub_82694E10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82695474"))) PPC_WEAK_FUNC(sub_82695474);
PPC_FUNC_IMPL(__imp__sub_82695474) {
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
	// addi r3,r11,108
	ctx.r3.s64 = r11.s64 + 108;
	// bl 0x82694e10
	sub_82694E10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826954A0"))) PPC_WEAK_FUNC(sub_826954A0);
PPC_FUNC_IMPL(__imp__sub_826954A0) {
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
	// bl 0x822b34c0
	sub_822B34C0(ctx, base);
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

__attribute__((alias("__imp__sub_826954D0"))) PPC_WEAK_FUNC(sub_826954D0);
PPC_FUNC_IMPL(__imp__sub_826954D0) {
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
	// lwz r16,30176(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 30176);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lis r28,-32126
	r28.s64 = -2105409536;
	// lwz r11,-13448(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13448);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82695554
	if (!cr0.eq) goto loc_82695554;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13448(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13448, r11.u32);
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
	// bl 0x822b34c0
	sub_822B34C0(ctx, base);
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
	// stw r3,-13452(r28)
	PPC_STORE_U32(r28.u32 + -13452, ctx.r3.u32);
	// b 0x82695558
	goto loc_82695558;
loc_82695554:
	// lwz r3,-13452(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -13452);
loc_82695558:
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
	// beq 0x82695588
	if (cr0.eq) goto loc_82695588;
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
	// b 0x826955d0
	goto loc_826955D0;
loc_82695588:
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
	// bne 0x826955c4
	if (!cr0.eq) goto loc_826955C4;
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
loc_826955C4:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_826955D0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826954D8"))) PPC_WEAK_FUNC(sub_826954D8);
PPC_FUNC_IMPL(__imp__sub_826954D8) {
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
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lis r28,-32126
	r28.s64 = -2105409536;
	// lwz r11,-13448(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13448);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82695554
	if (!cr0.eq) goto loc_82695554;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13448(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13448, r11.u32);
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
	// bl 0x822b34c0
	sub_822B34C0(ctx, base);
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
	// stw r3,-13452(r28)
	PPC_STORE_U32(r28.u32 + -13452, ctx.r3.u32);
	// b 0x82695558
	goto loc_82695558;
loc_82695554:
	// lwz r3,-13452(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -13452);
loc_82695558:
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
	// beq 0x82695588
	if (cr0.eq) goto loc_82695588;
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
	// b 0x826955d0
	goto loc_826955D0;
loc_82695588:
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
	// bne 0x826955c4
	if (!cr0.eq) goto loc_826955C4;
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
loc_826955C4:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_826955D0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826955DC"))) PPC_WEAK_FUNC(sub_826955DC);
PPC_FUNC_IMPL(__imp__sub_826955DC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13448
	r11.s64 = r11.s64 + -13448;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13448
	ctx.r10.s64 = ctx.r10.s64 + -13448;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82695604"))) PPC_WEAK_FUNC(sub_82695604);
PPC_FUNC_IMPL(__imp__sub_82695604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82695608"))) PPC_WEAK_FUNC(sub_82695608);
PPC_FUNC_IMPL(__imp__sub_82695608) {
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
	// lwz r16,30264(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 30264);
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
	// addi r11,r30,140
	r11.s64 = r30.s64 + 140;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82695654
	if (cr0.eq) goto loc_82695654;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82695654:
	// addi r11,r30,108
	r11.s64 = r30.s64 + 108;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82695678
	if (cr0.eq) goto loc_82695678;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82695678:
	// addi r11,r30,76
	r11.s64 = r30.s64 + 76;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269569c
	if (cr0.eq) goto loc_8269569C;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8269569C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822a0550
	sub_822A0550(ctx, base);
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

__attribute__((alias("__imp__sub_82695610"))) PPC_WEAK_FUNC(sub_82695610);
PPC_FUNC_IMPL(__imp__sub_82695610) {
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
	// addi r11,r30,140
	r11.s64 = r30.s64 + 140;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82695654
	if (cr0.eq) goto loc_82695654;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82695654:
	// addi r11,r30,108
	r11.s64 = r30.s64 + 108;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82695678
	if (cr0.eq) goto loc_82695678;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82695678:
	// addi r11,r30,76
	r11.s64 = r30.s64 + 76;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269569c
	if (cr0.eq) goto loc_8269569C;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8269569C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822a0550
	sub_822A0550(ctx, base);
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

__attribute__((alias("__imp__sub_826956BC"))) PPC_WEAK_FUNC(sub_826956BC);
PPC_FUNC_IMPL(__imp__sub_826956BC) {
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
	// bl 0x822a0550
	sub_822A0550(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826956E4"))) PPC_WEAK_FUNC(sub_826956E4);
PPC_FUNC_IMPL(__imp__sub_826956E4) {
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
	// addi r3,r11,76
	ctx.r3.s64 = r11.s64 + 76;
	// bl 0x82694e10
	sub_82694E10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82695710"))) PPC_WEAK_FUNC(sub_82695710);
PPC_FUNC_IMPL(__imp__sub_82695710) {
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
	// addi r3,r11,108
	ctx.r3.s64 = r11.s64 + 108;
	// bl 0x82694e10
	sub_82694E10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269573C"))) PPC_WEAK_FUNC(sub_8269573C);
PPC_FUNC_IMPL(__imp__sub_8269573C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82695740"))) PPC_WEAK_FUNC(sub_82695740);
PPC_FUNC_IMPL(__imp__sub_82695740) {
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
	// bl 0x82695610
	sub_82695610(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82695770
	if (cr0.eq) goto loc_82695770;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82695770:
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

__attribute__((alias("__imp__sub_8269578C"))) PPC_WEAK_FUNC(sub_8269578C);
PPC_FUNC_IMPL(__imp__sub_8269578C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82695790"))) PPC_WEAK_FUNC(sub_82695790);
PPC_FUNC_IMPL(__imp__sub_82695790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,100(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// stb r4,24(r11)
	PPC_STORE_U8(r11.u32 + 24, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269579C"))) PPC_WEAK_FUNC(sub_8269579C);
PPC_FUNC_IMPL(__imp__sub_8269579C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826957A0"))) PPC_WEAK_FUNC(sub_826957A0);
PPC_FUNC_IMPL(__imp__sub_826957A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r10,r3,164
	ctx.r10.s64 = ctx.r3.s64 + 164;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_826957B0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826957b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826957B0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826957C8"))) PPC_WEAK_FUNC(sub_826957C8);
PPC_FUNC_IMPL(__imp__sub_826957C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r10,r3,184
	ctx.r10.s64 = ctx.r3.s64 + 184;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_826957D8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826957d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826957D8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826957F0"))) PPC_WEAK_FUNC(sub_826957F0);
PPC_FUNC_IMPL(__imp__sub_826957F0) {
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
	// lbz r11,148(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 148);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82695824
	if (cr0.eq) goto loc_82695824;
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82695824
	if (cr6.eq) goto loc_82695824;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// b 0x82695828
	goto loc_82695828;
loc_82695824:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
loc_82695828:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x821b2800
	sub_821B2800(ctx, base);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lbz r11,24(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82695860
	if (cr0.eq) goto loc_82695860;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x821b2800
	sub_821B2800(ctx, base);
loc_82695860:
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

__attribute__((alias("__imp__sub_82695874"))) PPC_WEAK_FUNC(sub_82695874);
PPC_FUNC_IMPL(__imp__sub_82695874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82695878"))) PPC_WEAK_FUNC(sub_82695878);
PPC_FUNC_IMPL(__imp__sub_82695878) {
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
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// lbz r11,136(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 136);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826958b8
	if (cr0.eq) goto loc_826958B8;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x826998b8
	sub_826998B8(ctx, base);
loc_826958B8:
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

__attribute__((alias("__imp__sub_826958CC"))) PPC_WEAK_FUNC(sub_826958CC);
PPC_FUNC_IMPL(__imp__sub_826958CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826958D0"))) PPC_WEAK_FUNC(sub_826958D0);
PPC_FUNC_IMPL(__imp__sub_826958D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82699d50
	sub_82699D50(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f30.f64));
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r10,52
	ctx.r3.s64 = ctx.r10.s64 + 52;
	// addi r10,r3,76
	ctx.r10.s64 = ctx.r3.s64 + 76;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
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
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82695964"))) PPC_WEAK_FUNC(sub_82695964);
PPC_FUNC_IMPL(__imp__sub_82695964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82695968"))) PPC_WEAK_FUNC(sub_82695968);
PPC_FUNC_IMPL(__imp__sub_82695968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lfs f2,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82695984"))) PPC_WEAK_FUNC(sub_82695984);
PPC_FUNC_IMPL(__imp__sub_82695984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82695988"))) PPC_WEAK_FUNC(sub_82695988);
PPC_FUNC_IMPL(__imp__sub_82695988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// lfs f31,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// stb r30,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, r30.u8);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// stb r30,136(r11)
	PPC_STORE_U8(r11.u32 + 136, r30.u8);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// stb r29,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r29.u8);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82695a1c
	if (!cr0.eq) goto loc_82695A1C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x82695a2c
	goto loc_82695A2C;
loc_82695A1C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_82695A2C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// bne 0x82695a4c
	if (!cr0.eq) goto loc_82695A4C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82695A4C:
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stb r29,148(r31)
	PPC_STORE_U8(r31.u32 + 148, r29.u8);
	// lfs f0,17324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,152(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82695A8C"))) PPC_WEAK_FUNC(sub_82695A8C);
PPC_FUNC_IMPL(__imp__sub_82695A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82695A90"))) PPC_WEAK_FUNC(sub_82695A90);
PPC_FUNC_IMPL(__imp__sub_82695A90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x826983c0
	sub_826983C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82695A98"))) PPC_WEAK_FUNC(sub_82695A98);
PPC_FUNC_IMPL(__imp__sub_82695A98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x82697958
	sub_82697958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82695AA0"))) PPC_WEAK_FUNC(sub_82695AA0);
PPC_FUNC_IMPL(__imp__sub_82695AA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x82697700
	sub_82697700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82695AA8"))) PPC_WEAK_FUNC(sub_82695AA8);
PPC_FUNC_IMPL(__imp__sub_82695AA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x82697710
	sub_82697710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82695AB0"))) PPC_WEAK_FUNC(sub_82695AB0);
PPC_FUNC_IMPL(__imp__sub_82695AB0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x8269a0c0
	sub_8269A0C0(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82698bb0
	sub_82698BB0(ctx, base);
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

__attribute__((alias("__imp__sub_82695AF8"))) PPC_WEAK_FUNC(sub_82695AF8);
PPC_FUNC_IMPL(__imp__sub_82695AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82695b40
	if (!cr0.eq) goto loc_82695B40;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// lfs f2,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82695B40:
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// addi r5,r31,164
	ctx.r5.s64 = r31.s64 + 164;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r30,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r30.u8);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// nop 
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

__attribute__((alias("__imp__sub_82695B70"))) PPC_WEAK_FUNC(sub_82695B70);
PPC_FUNC_IMPL(__imp__sub_82695B70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x82697410
	sub_82697410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82695B78"))) PPC_WEAK_FUNC(sub_82695B78);
PPC_FUNC_IMPL(__imp__sub_82695B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,204(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// stb r4,136(r11)
	PPC_STORE_U8(r11.u32 + 136, ctx.r4.u8);
	// lwz r11,128(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// stb r4,24(r11)
	PPC_STORE_U8(r11.u32 + 24, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82695B8C"))) PPC_WEAK_FUNC(sub_82695B8C);
PPC_FUNC_IMPL(__imp__sub_82695B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82695B90"))) PPC_WEAK_FUNC(sub_82695B90);
PPC_FUNC_IMPL(__imp__sub_82695B90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x82697400
	sub_82697400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82695B98"))) PPC_WEAK_FUNC(sub_82695B98);
PPC_FUNC_IMPL(__imp__sub_82695B98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x82697408
	sub_82697408(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82695BA0"))) PPC_WEAK_FUNC(sub_82695BA0);
PPC_FUNC_IMPL(__imp__sub_82695BA0) {
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
	// beq 0x82695be0
	if (cr0.eq) goto loc_82695BE0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r3,r11,8508
	ctx.r3.s64 = r11.s64 + 8508;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82695be8
	goto loc_82695BE8;
loc_82695BE0:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82695BE8:
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

__attribute__((alias("__imp__sub_82695C04"))) PPC_WEAK_FUNC(sub_82695C04);
PPC_FUNC_IMPL(__imp__sub_82695C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82695C08"))) PPC_WEAK_FUNC(sub_82695C08);
PPC_FUNC_IMPL(__imp__sub_82695C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lbz r11,148(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 148);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82695c64
	if (cr0.eq) goto loc_82695C64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,152(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 152);
	f0.f64 = double(temp.f32);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 - f0.f64));
	// lfs f2,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2148);
	f0.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82695C64:
	// addi r30,r31,164
	r30.s64 = r31.s64 + 164;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826989a8
	sub_826989A8(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82699f40
	sub_82699F40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x826958d0
	sub_826958D0(ctx, base);
	// addi r6,r31,184
	ctx.r6.s64 = r31.s64 + 184;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8269a2f8
	sub_8269A2F8(ctx, base);
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

__attribute__((alias("__imp__sub_82695CC0"))) PPC_WEAK_FUNC(sub_82695CC0);
PPC_FUNC_IMPL(__imp__sub_82695CC0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x82695d04
	if (!cr6.gt) goto loc_82695D04;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,144(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 144);
	// stw r3,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r3.u32);
loc_82695D04:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,144(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 144);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x8268cae8
	sub_8268CAE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82695D40"))) PPC_WEAK_FUNC(sub_82695D40);
PPC_FUNC_IMPL(__imp__sub_82695D40) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,30488(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 30488);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32126
	r30.s64 = -2105409536;
	// lwz r11,-13416(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13416);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13420
	r29.s64 = ctx.r10.s64 + -13420;
	// bne 0x82695db0
	if (!cr0.eq) goto loc_82695DB0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13416(r30)
	PPC_STORE_U32(r30.u32 + -13416, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,24744
	ctx.r4.s64 = r11.s64 + 24744;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13416(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13416);
loc_82695DB0:
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
	// beq 0x82695e10
	if (cr0.eq) goto loc_82695E10;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82695cc0
	sub_82695CC0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82695e0c
	if (cr6.eq) goto loc_82695E0C;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82695e04
	if (cr0.eq) goto loc_82695E04;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82695E04:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x826960a0
	goto loc_826960A0;
loc_82695E0C:
	// lwz r11,-13416(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13416);
loc_82695E10:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13424
	r29.s64 = ctx.r10.s64 + -13424;
	// bne 0x82695e3c
	if (!cr0.eq) goto loc_82695E3C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-13416(r30)
	PPC_STORE_U32(r30.u32 + -13416, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,30400
	ctx.r4.s64 = r11.s64 + 30400;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13416(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13416);
loc_82695E3C:
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
	// beq 0x82695e70
	if (cr0.eq) goto loc_82695E70;
	// lwz r3,144(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 144);
	// bl 0x8268cba0
	sub_8268CBA0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// b 0x826960a0
	goto loc_826960A0;
loc_82695E70:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13428
	r29.s64 = ctx.r10.s64 + -13428;
	// bne 0x82695e9c
	if (!cr0.eq) goto loc_82695E9C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-13416(r30)
	PPC_STORE_U32(r30.u32 + -13416, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,30384
	ctx.r4.s64 = r11.s64 + 30384;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13416(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13416);
loc_82695E9C:
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
	// beq 0x82695ee0
	if (cr0.eq) goto loc_82695EE0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,80(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 80);
	// bl 0x826977b8
	sub_826977B8(ctx, base);
loc_82695ED0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// b 0x826960a0
	goto loc_826960A0;
loc_82695EE0:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13432
	r29.s64 = ctx.r10.s64 + -13432;
	// bne 0x82695f0c
	if (!cr0.eq) goto loc_82695F0C;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-13416(r30)
	PPC_STORE_U32(r30.u32 + -13416, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,30368
	ctx.r4.s64 = r11.s64 + 30368;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13416(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13416);
loc_82695F0C:
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
	// beq 0x82695f50
	if (cr0.eq) goto loc_82695F50;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
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
	// bl 0x82695af8
	sub_82695AF8(ctx, base);
	// b 0x82695ed0
	goto loc_82695ED0;
loc_82695F50:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13436
	r29.s64 = ctx.r10.s64 + -13436;
	// bne 0x82695f7c
	if (!cr0.eq) goto loc_82695F7C;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-13416(r30)
	PPC_STORE_U32(r30.u32 + -13416, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7080
	ctx.r4.s64 = r11.s64 + 7080;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13416(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13416);
loc_82695F7C:
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
	// beq 0x82695fc4
	if (cr0.eq) goto loc_82695FC4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,108(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 108);
	// lfs f2,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82695ed0
	goto loc_82695ED0;
loc_82695FC4:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13440
	r29.s64 = ctx.r10.s64 + -13440;
	// bne 0x82695ff0
	if (!cr0.eq) goto loc_82695FF0;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-13416(r30)
	PPC_STORE_U32(r30.u32 + -13416, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,30348
	ctx.r4.s64 = r11.s64 + 30348;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13416(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13416);
loc_82695FF0:
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
	// beq 0x82696018
	if (cr0.eq) goto loc_82696018;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// b 0x826960a0
	goto loc_826960A0;
loc_82696018:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13444
	r29.s64 = ctx.r10.s64 + -13444;
	// bne 0x82696040
	if (!cr0.eq) goto loc_82696040;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-13416(r30)
	PPC_STORE_U32(r30.u32 + -13416, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,30336
	ctx.r4.s64 = r11.s64 + 30336;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82696040:
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
	// beq 0x82696090
	if (cr0.eq) goto loc_82696090;
	// lwz r11,108(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8269606c
	if (!cr6.eq) goto loc_8269606C;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x82696080
	goto loc_82696080;
loc_8269606C:
	// lwz r11,108(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 108);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82696080:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// stw r10,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r10.u32);
	// b 0x8269609c
	goto loc_8269609C;
loc_82696090:
	// li r11,6
	r11.s64 = 6;
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_8269609C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_826960A0:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82695D48"))) PPC_WEAK_FUNC(sub_82695D48);
PPC_FUNC_IMPL(__imp__sub_82695D48) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32126
	r30.s64 = -2105409536;
	// lwz r11,-13416(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13416);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13420
	r29.s64 = ctx.r10.s64 + -13420;
	// bne 0x82695db0
	if (!cr0.eq) goto loc_82695DB0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13416(r30)
	PPC_STORE_U32(r30.u32 + -13416, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,24744
	ctx.r4.s64 = r11.s64 + 24744;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13416(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13416);
loc_82695DB0:
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
	// beq 0x82695e10
	if (cr0.eq) goto loc_82695E10;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82695cc0
	sub_82695CC0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82695e0c
	if (cr6.eq) goto loc_82695E0C;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82695e04
	if (cr0.eq) goto loc_82695E04;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82695E04:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x826960a0
	goto loc_826960A0;
loc_82695E0C:
	// lwz r11,-13416(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13416);
loc_82695E10:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13424
	r29.s64 = ctx.r10.s64 + -13424;
	// bne 0x82695e3c
	if (!cr0.eq) goto loc_82695E3C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-13416(r30)
	PPC_STORE_U32(r30.u32 + -13416, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,30400
	ctx.r4.s64 = r11.s64 + 30400;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13416(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13416);
loc_82695E3C:
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
	// beq 0x82695e70
	if (cr0.eq) goto loc_82695E70;
	// lwz r3,144(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 144);
	// bl 0x8268cba0
	sub_8268CBA0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// b 0x826960a0
	goto loc_826960A0;
loc_82695E70:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13428
	r29.s64 = ctx.r10.s64 + -13428;
	// bne 0x82695e9c
	if (!cr0.eq) goto loc_82695E9C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-13416(r30)
	PPC_STORE_U32(r30.u32 + -13416, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,30384
	ctx.r4.s64 = r11.s64 + 30384;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13416(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13416);
loc_82695E9C:
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
	// beq 0x82695ee0
	if (cr0.eq) goto loc_82695EE0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,80(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 80);
	// bl 0x826977b8
	sub_826977B8(ctx, base);
loc_82695ED0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// b 0x826960a0
	goto loc_826960A0;
loc_82695EE0:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13432
	r29.s64 = ctx.r10.s64 + -13432;
	// bne 0x82695f0c
	if (!cr0.eq) goto loc_82695F0C;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-13416(r30)
	PPC_STORE_U32(r30.u32 + -13416, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,30368
	ctx.r4.s64 = r11.s64 + 30368;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13416(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13416);
loc_82695F0C:
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
	// beq 0x82695f50
	if (cr0.eq) goto loc_82695F50;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
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
	// bl 0x82695af8
	sub_82695AF8(ctx, base);
	// b 0x82695ed0
	goto loc_82695ED0;
loc_82695F50:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13436
	r29.s64 = ctx.r10.s64 + -13436;
	// bne 0x82695f7c
	if (!cr0.eq) goto loc_82695F7C;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-13416(r30)
	PPC_STORE_U32(r30.u32 + -13416, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,7080
	ctx.r4.s64 = r11.s64 + 7080;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13416(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13416);
loc_82695F7C:
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
	// beq 0x82695fc4
	if (cr0.eq) goto loc_82695FC4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,108(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 108);
	// lfs f2,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82695ed0
	goto loc_82695ED0;
loc_82695FC4:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13440
	r29.s64 = ctx.r10.s64 + -13440;
	// bne 0x82695ff0
	if (!cr0.eq) goto loc_82695FF0;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-13416(r30)
	PPC_STORE_U32(r30.u32 + -13416, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,30348
	ctx.r4.s64 = r11.s64 + 30348;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13416(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13416);
loc_82695FF0:
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
	// beq 0x82696018
	if (cr0.eq) goto loc_82696018;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// b 0x826960a0
	goto loc_826960A0;
loc_82696018:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13444
	r29.s64 = ctx.r10.s64 + -13444;
	// bne 0x82696040
	if (!cr0.eq) goto loc_82696040;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-13416(r30)
	PPC_STORE_U32(r30.u32 + -13416, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,30336
	ctx.r4.s64 = r11.s64 + 30336;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82696040:
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
	// beq 0x82696090
	if (cr0.eq) goto loc_82696090;
	// lwz r11,108(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8269606c
	if (!cr6.eq) goto loc_8269606C;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x82696080
	goto loc_82696080;
loc_8269606C:
	// lwz r11,108(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 108);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82696080:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// stw r10,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r10.u32);
	// b 0x8269609c
	goto loc_8269609C;
loc_82696090:
	// li r11,6
	r11.s64 = 6;
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_8269609C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_826960A0:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_826960A8"))) PPC_WEAK_FUNC(sub_826960A8);
PPC_FUNC_IMPL(__imp__sub_826960A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13416
	r11.s64 = r11.s64 + -13416;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13416
	ctx.r10.s64 = ctx.r10.s64 + -13416;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826960D0"))) PPC_WEAK_FUNC(sub_826960D0);
PPC_FUNC_IMPL(__imp__sub_826960D0) {
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

__attribute__((alias("__imp__sub_826960F8"))) PPC_WEAK_FUNC(sub_826960F8);
PPC_FUNC_IMPL(__imp__sub_826960F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13416
	r11.s64 = r11.s64 + -13416;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13416
	ctx.r10.s64 = ctx.r10.s64 + -13416;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82696120"))) PPC_WEAK_FUNC(sub_82696120);
PPC_FUNC_IMPL(__imp__sub_82696120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13416
	r11.s64 = r11.s64 + -13416;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13416
	ctx.r10.s64 = ctx.r10.s64 + -13416;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82696148"))) PPC_WEAK_FUNC(sub_82696148);
PPC_FUNC_IMPL(__imp__sub_82696148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13416
	r11.s64 = r11.s64 + -13416;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13416
	ctx.r10.s64 = ctx.r10.s64 + -13416;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82696170"))) PPC_WEAK_FUNC(sub_82696170);
PPC_FUNC_IMPL(__imp__sub_82696170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13416
	r11.s64 = r11.s64 + -13416;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13416
	ctx.r10.s64 = ctx.r10.s64 + -13416;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82696198"))) PPC_WEAK_FUNC(sub_82696198);
PPC_FUNC_IMPL(__imp__sub_82696198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13416
	r11.s64 = r11.s64 + -13416;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13416
	ctx.r10.s64 = ctx.r10.s64 + -13416;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826961C0"))) PPC_WEAK_FUNC(sub_826961C0);
PPC_FUNC_IMPL(__imp__sub_826961C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13416
	r11.s64 = r11.s64 + -13416;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13416
	ctx.r10.s64 = ctx.r10.s64 + -13416;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826961E8"))) PPC_WEAK_FUNC(sub_826961E8);
PPC_FUNC_IMPL(__imp__sub_826961E8) {
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
	// addi r31,r11,12004
	r31.s64 = r11.s64 + 12004;
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

__attribute__((alias("__imp__sub_82696240"))) PPC_WEAK_FUNC(sub_82696240);
PPC_FUNC_IMPL(__imp__sub_82696240) {
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
	// b 0x82696290
	goto loc_82696290;
loc_8269625C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269628c
	if (cr0.eq) goto loc_8269628C;
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
loc_8269628C:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82696290:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x8269625c
	if (!cr6.eq) goto loc_8269625C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826962A4"))) PPC_WEAK_FUNC(sub_826962A4);
PPC_FUNC_IMPL(__imp__sub_826962A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826962A8"))) PPC_WEAK_FUNC(sub_826962A8);
PPC_FUNC_IMPL(__imp__sub_826962A8) {
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,30668
	ctx.r4.s64 = r11.s64 + 30668;
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// bl 0x82254c00
	sub_82254C00(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,30648
	ctx.r4.s64 = r11.s64 + 30648;
	// stw r10,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r10.u32);
	// bl 0x826961e8
	sub_826961E8(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// stw r3,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r3.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82696304
	if (!cr0.eq) goto loc_82696304;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82696314
	goto loc_82696314;
loc_82696304:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82696314:
	// bl 0x8269a690
	sub_8269A690(ctx, base);
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

__attribute__((alias("__imp__sub_8269632C"))) PPC_WEAK_FUNC(sub_8269632C);
PPC_FUNC_IMPL(__imp__sub_8269632C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82696330"))) PPC_WEAK_FUNC(sub_82696330);
PPC_FUNC_IMPL(__imp__sub_82696330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8239d5e8
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r4,r11,-3348
	ctx.r4.s64 = r11.s64 + -3348;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,27816
	ctx.r4.s64 = r11.s64 + 27816;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,30696
	ctx.r4.s64 = r11.s64 + 30696;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r4,r11,30688
	ctx.r4.s64 = r11.s64 + 30688;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// addi r4,r11,29192
	ctx.r4.s64 = r11.s64 + 29192;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// addi r4,r11,29176
	ctx.r4.s64 = r11.s64 + 29176;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// addi r31,r11,3364
	r31.s64 = r11.s64 + 3364;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r29,r11,920
	r29.s64 = r11.s64 + 920;
	// bl 0x8231fac8
	sub_8231FAC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x823173f0
	sub_823173F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f31,704(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 704, temp.u32);
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// stfs f30,708(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 708, temp.u32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lfs f3,700(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 700);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x821d7ce8
	sub_821D7CE8(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// addi r4,r28,52
	ctx.r4.s64 = r28.s64 + 52;
	// bne cr6,0x82696540
	if (!cr6.eq) goto loc_82696540;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82696540:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8239d634
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82696560"))) PPC_WEAK_FUNC(sub_82696560);
PPC_FUNC_IMPL(__imp__sub_82696560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82699988
	sub_82699988(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// addi r10,r30,-2
	ctx.r10.s64 = r30.s64 + -2;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r9
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// bl 0x821e8db0
	sub_821E8DB0(ctx, base);
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

__attribute__((alias("__imp__sub_826965EC"))) PPC_WEAK_FUNC(sub_826965EC);
PPC_FUNC_IMPL(__imp__sub_826965EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826965F0"))) PPC_WEAK_FUNC(sub_826965F0);
PPC_FUNC_IMPL(__imp__sub_826965F0) {
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
	// blt cr6,0x82696638
	if (cr6.lt) goto loc_82696638;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_82696638:
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
	// bl 0x82695ba0
	sub_82695BA0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82696670
	if (cr0.eq) goto loc_82696670;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_82696670:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82696690
	if (cr6.eq) goto loc_82696690;
loc_8269667C:
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
	// bne 0x8269667c
	if (!cr0.eq) goto loc_8269667C;
loc_82696690:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x826966b8
	if (!cr0.eq) goto loc_826966B8;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x826966b8
	if (cr0.eq) goto loc_826966B8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_826966B8:
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

__attribute__((alias("__imp__sub_826966EC"))) PPC_WEAK_FUNC(sub_826966EC);
PPC_FUNC_IMPL(__imp__sub_826966EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826966F0"))) PPC_WEAK_FUNC(sub_826966F0);
PPC_FUNC_IMPL(__imp__sub_826966F0) {
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
	// beq cr6,0x82696730
	if (cr6.eq) goto loc_82696730;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82696720
	if (cr0.eq) goto loc_82696720;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82696720:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x82696744
	goto loc_82696744;
loc_82696730:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x826965f0
	sub_826965F0(ctx, base);
loc_82696744:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82696754"))) PPC_WEAK_FUNC(sub_82696754);
PPC_FUNC_IMPL(__imp__sub_82696754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82696758"))) PPC_WEAK_FUNC(sub_82696758);
PPC_FUNC_IMPL(__imp__sub_82696758) {
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
	// beq cr6,0x826967a0
	if (cr6.eq) goto loc_826967A0;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82696798
	if (cr0.eq) goto loc_82696798;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x8269679c
	goto loc_8269679C;
loc_82696798:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8269679C:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_826967A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826967AC"))) PPC_WEAK_FUNC(sub_826967AC);
PPC_FUNC_IMPL(__imp__sub_826967AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826967B0"))) PPC_WEAK_FUNC(sub_826967B0);
PPC_FUNC_IMPL(__imp__sub_826967B0) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,30984(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 30984);
	// mflr r12
	// bl 0x8239bcd8
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// addi r31,r1,-336
	r31.s64 = ctx.r1.s64 + -336;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// stw r30,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r30.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r21,r30,40
	r21.s64 = r30.s64 + 40;
	// addi r11,r11,30852
	r11.s64 = r11.s64 + 30852;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82699d18
	sub_82699D18(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,27816
	ctx.r4.s64 = r11.s64 + 27816;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// stw r3,76(r30)
	PPC_STORE_U32(r30.u32 + 76, ctx.r3.u32);
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// stw r29,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r29.u32);
	// stw r29,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r29.u32);
	// bl 0x82150688
	sub_82150688(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,30836
	ctx.r4.s64 = r11.s64 + 30836;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r10,96(r30)
	PPC_STORE_U32(r30.u32 + 96, ctx.r10.u32);
	// bl 0x82254c00
	sub_82254C00(ctx, base);
	// stw r3,100(r30)
	PPC_STORE_U32(r30.u32 + 100, ctx.r3.u32);
	// bl 0x82150688
	sub_82150688(ctx, base);
	// addi r22,r30,112
	r22.s64 = r30.s64 + 112;
	// stw r3,104(r30)
	PPC_STORE_U32(r30.u32 + 104, ctx.r3.u32);
	// stw r29,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r29.u32);
	// stw r29,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r29.u32);
	// stw r29,8(r22)
	PPC_STORE_U32(r22.u32 + 8, r29.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r29,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r29.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stb r29,148(r30)
	PPC_STORE_U8(r30.u32 + 148, r29.u8);
	// stw r29,156(r30)
	PPC_STORE_U32(r30.u32 + 156, r29.u32);
	// stw r29,160(r30)
	PPC_STORE_U32(r30.u32 + 160, r29.u32);
	// lfs f30,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stfs f30,152(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 152, temp.u32);
	// stw r29,124(r30)
	PPC_STORE_U32(r30.u32 + 124, r29.u32);
	// stw r29,140(r30)
	PPC_STORE_U32(r30.u32 + 140, r29.u32);
	// stfs f30,168(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 168, temp.u32);
	// stb r29,164(r30)
	PPC_STORE_U8(r30.u32 + 164, r29.u8);
	// addi r4,r11,22636
	ctx.r4.s64 = r11.s64 + 22636;
	// stb r29,165(r30)
	PPC_STORE_U8(r30.u32 + 165, r29.u8);
	// stb r29,172(r30)
	PPC_STORE_U8(r30.u32 + 172, r29.u8);
	// stw r29,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r29.u32);
	// stfs f30,188(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 188, temp.u32);
	// stb r29,184(r30)
	PPC_STORE_U8(r30.u32 + 184, r29.u8);
	// stb r29,185(r30)
	PPC_STORE_U8(r30.u32 + 185, r29.u8);
	// stb r29,192(r30)
	PPC_STORE_U8(r30.u32 + 192, r29.u8);
	// stw r29,196(r30)
	PPC_STORE_U32(r30.u32 + 196, r29.u32);
	// stw r27,204(r30)
	PPC_STORE_U32(r30.u32 + 204, r27.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,20500
	ctx.r4.s64 = r11.s64 + 20500;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823151e0
	sub_823151E0(ctx, base);
	// bl 0x82150688
	sub_82150688(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lwz r3,204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,30828
	ctx.r4.s64 = r11.s64 + 30828;
	// stw r10,92(r30)
	PPC_STORE_U32(r30.u32 + 92, ctx.r10.u32);
	// bl 0x82254c00
	sub_82254C00(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r4,r3,52
	ctx.r4.s64 = ctx.r3.s64 + 52;
	// bne 0x82696938
	if (!cr0.eq) goto loc_82696938;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82696938:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// lwz r3,204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// bl 0x8213aea8
	sub_8213AEA8(ctx, base);
	// lwz r11,204(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// li r24,1
	r24.s64 = 1;
	// stw r3,132(r30)
	PPC_STORE_U32(r30.u32 + 132, ctx.r3.u32);
	// stb r24,136(r11)
	PPC_STORE_U8(r11.u32 + 136, r24.u8);
	// lwz r3,204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// bl 0x82363af8
	sub_82363AF8(ctx, base);
	// lis r25,-32127
	r25.s64 = -2105475072;
	// lwz r3,-9608(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// ble cr6,0x826969fc
	if (!cr6.gt) goto loc_826969FC;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lwz r5,92(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,30808
	ctx.r4.s64 = r11.s64 + 30808;
	// bl 0x82696330
	sub_82696330(ctx, base);
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// stw r3,136(r30)
	PPC_STORE_U32(r30.u32 + 136, ctx.r3.u32);
	// bne cr6,0x82696a00
	if (!cr6.eq) goto loc_82696A00;
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82269700
	sub_82269700(ctx, base);
	// lfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	f0.f64 = double(temp.f32);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stfs f0,104(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// bl 0x82269fc0
	sub_82269FC0(ctx, base);
	// lwz r27,136(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 192);
	f0.f64 = double(temp.f32);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// li r5,64
	ctx.r5.s64 = 64;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// addi r3,r27,28
	ctx.r3.s64 = r27.s64 + 28;
	// stfs f0,192(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 192, temp.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// b 0x82696a00
	goto loc_82696A00;
loc_826969FC:
	// stw r29,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r29.u32);
loc_82696A00:
	// lis r20,-32127
	r20.s64 = -2105475072;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,-9836(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + -9836);
	// bl 0x822b0e18
	sub_822B0E18(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,-9608(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// bl 0x822b5728
	sub_822B5728(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,-9608(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// bl 0x822b5760
	sub_822B5760(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82699e58
	sub_82699E58(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// bl 0x82691348
	sub_82691348(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82699e60
	sub_82699E60(ctx, base);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lis r28,-32126
	r28.s64 = -2105409536;
	// lwz r11,-13408(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13408);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82696a90
	if (!cr0.eq) goto loc_82696A90;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13408(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13408, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,30776
	ctx.r4.s64 = r11.s64 + 30776;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// stw r3,-13412(r28)
	PPC_STORE_U32(r28.u32 + -13412, ctx.r3.u32);
	// b 0x82696a94
	goto loc_82696A94;
loc_82696A90:
	// lwz r3,-13412(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -13412);
loc_82696A94:
	// stw r24,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r24.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// bl 0x82317b88
	sub_82317B88(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82696abc
	if (cr0.eq) goto loc_82696ABC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82696ABC:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82696ad0
	if (cr0.eq) goto loc_82696AD0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,31836(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 31836);
	f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * f0.f64));
loc_82696AD0:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82391848
	sub_82391848(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82699d50
	sub_82699D50(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// lfs f0,17324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bl 0x82363328
	sub_82363328(ctx, base);
	// lwz r28,-9608(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,12292
	ctx.r4.s64 = r11.s64 + 12292;
	// lwz r11,56(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82696b38
	if (cr0.eq) goto loc_82696B38;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b4420
	sub_822B4420(ctx, base);
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// b 0x82696b4c
	goto loc_82696B4C;
loc_82696B38:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// bl 0x82278d30
	sub_82278D30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82696B4C:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82699e68
	sub_82699E68(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82696b7c
	if (cr0.eq) goto loc_82696B7C;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r5,204(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// bl 0x82699b70
	sub_82699B70(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82696b80
	goto loc_82696B80;
loc_82696B7C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82696B80:
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r11,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82696ba8
	if (cr0.eq) goto loc_82696BA8;
	// lwz r4,204(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// bl 0x8269a558
	sub_8269A558(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82696bac
	goto loc_82696BAC;
loc_82696BA8:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82696BAC:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// addi r4,r11,30760
	ctx.r4.s64 = r11.s64 + 30760;
	// stw r10,124(r30)
	PPC_STORE_U32(r30.u32 + 124, ctx.r10.u32);
	// bl 0x82254c00
	sub_82254C00(ctx, base);
	// stw r3,128(r30)
	PPC_STORE_U32(r30.u32 + 128, ctx.r3.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stb r24,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, r24.u8);
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lfs f2,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,128(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// stb r29,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r29.u8);
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82696c08
	if (!cr0.eq) goto loc_82696C08;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x82696c18
	goto loc_82696C18;
loc_82696C08:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_82696C18:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// bne 0x82696c38
	if (!cr0.eq) goto loc_82696C38;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82696C38:
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// addi r4,r11,30748
	ctx.r4.s64 = r11.s64 + 30748;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r28,r11,5336
	r28.s64 = r11.s64 + 5336;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r25,r11,920
	r25.s64 = r11.s64 + 920;
	// bl 0x8231fac8
	sub_8231FAC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x823173f0
	sub_823173F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r28,140(r30)
	PPC_STORE_U32(r30.u32 + 140, r28.u32);
	// addi r3,r11,252
	ctx.r3.s64 = r11.s64 + 252;
	// bl 0x82150008
	sub_82150008(ctx, base);
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// bne 0x82696cfc
	if (!cr0.eq) goto loc_82696CFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82696CFC:
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// addi r4,r11,30724
	ctx.r4.s64 = r11.s64 + 30724;
	// bl 0x82124710
	sub_82124710(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r27,2
	r27.s64 = 2;
	// stw r3,108(r30)
	PPC_STORE_U32(r30.u32 + 108, ctx.r3.u32);
	// addi r24,r11,1384
	r24.s64 = r11.s64 + 1384;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r23,r11,30704
	r23.s64 = r11.s64 + 30704;
loc_82696D38:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// bl 0x8231fac8
	sub_8231FAC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x823173f0
	sub_823173F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
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
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// bl 0x826966f0
	sub_826966F0(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(r27.s32, 4, xer);
	// ble cr6,0x82696d38
	if (!cr6.gt) goto loc_82696D38;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82696e3c
	if (cr0.eq) goto loc_82696E3C;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r5,204(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// bl 0x8269a1a8
	sub_8269A1A8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82696e40
	goto loc_82696E40;
loc_82696E3C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82696E40:
	// li r3,284
	ctx.r3.s64 = 284;
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82696e70
	if (cr0.eq) goto loc_82696E70;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// lwz r7,204(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// lwz r5,104(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// bl 0x82699538
	sub_82699538(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82696E70:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// bl 0x826962a8
	sub_826962A8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,30348
	ctx.r4.s64 = r11.s64 + 30348;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r29,18972(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,-9836(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + -9836);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823262c8
	sub_823262C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,336
	ctx.r1.s64 = r31.s64 + 336;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_826967B8"))) PPC_WEAK_FUNC(sub_826967B8);
PPC_FUNC_IMPL(__imp__sub_826967B8) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd8
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// addi r31,r1,-336
	r31.s64 = ctx.r1.s64 + -336;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// stw r30,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r30.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r21,r30,40
	r21.s64 = r30.s64 + 40;
	// addi r11,r11,30852
	r11.s64 = r11.s64 + 30852;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82699d18
	sub_82699D18(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,27816
	ctx.r4.s64 = r11.s64 + 27816;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// stw r3,76(r30)
	PPC_STORE_U32(r30.u32 + 76, ctx.r3.u32);
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// stw r29,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r29.u32);
	// stw r29,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r29.u32);
	// bl 0x82150688
	sub_82150688(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,30836
	ctx.r4.s64 = r11.s64 + 30836;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r10,96(r30)
	PPC_STORE_U32(r30.u32 + 96, ctx.r10.u32);
	// bl 0x82254c00
	sub_82254C00(ctx, base);
	// stw r3,100(r30)
	PPC_STORE_U32(r30.u32 + 100, ctx.r3.u32);
	// bl 0x82150688
	sub_82150688(ctx, base);
	// addi r22,r30,112
	r22.s64 = r30.s64 + 112;
	// stw r3,104(r30)
	PPC_STORE_U32(r30.u32 + 104, ctx.r3.u32);
	// stw r29,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r29.u32);
	// stw r29,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r29.u32);
	// stw r29,8(r22)
	PPC_STORE_U32(r22.u32 + 8, r29.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r29,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r29.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stb r29,148(r30)
	PPC_STORE_U8(r30.u32 + 148, r29.u8);
	// stw r29,156(r30)
	PPC_STORE_U32(r30.u32 + 156, r29.u32);
	// stw r29,160(r30)
	PPC_STORE_U32(r30.u32 + 160, r29.u32);
	// lfs f30,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stfs f30,152(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 152, temp.u32);
	// stw r29,124(r30)
	PPC_STORE_U32(r30.u32 + 124, r29.u32);
	// stw r29,140(r30)
	PPC_STORE_U32(r30.u32 + 140, r29.u32);
	// stfs f30,168(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 168, temp.u32);
	// stb r29,164(r30)
	PPC_STORE_U8(r30.u32 + 164, r29.u8);
	// addi r4,r11,22636
	ctx.r4.s64 = r11.s64 + 22636;
	// stb r29,165(r30)
	PPC_STORE_U8(r30.u32 + 165, r29.u8);
	// stb r29,172(r30)
	PPC_STORE_U8(r30.u32 + 172, r29.u8);
	// stw r29,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r29.u32);
	// stfs f30,188(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 188, temp.u32);
	// stb r29,184(r30)
	PPC_STORE_U8(r30.u32 + 184, r29.u8);
	// stb r29,185(r30)
	PPC_STORE_U8(r30.u32 + 185, r29.u8);
	// stb r29,192(r30)
	PPC_STORE_U8(r30.u32 + 192, r29.u8);
	// stw r29,196(r30)
	PPC_STORE_U32(r30.u32 + 196, r29.u32);
	// stw r27,204(r30)
	PPC_STORE_U32(r30.u32 + 204, r27.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,20500
	ctx.r4.s64 = r11.s64 + 20500;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823151e0
	sub_823151E0(ctx, base);
	// bl 0x82150688
	sub_82150688(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lwz r3,204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,30828
	ctx.r4.s64 = r11.s64 + 30828;
	// stw r10,92(r30)
	PPC_STORE_U32(r30.u32 + 92, ctx.r10.u32);
	// bl 0x82254c00
	sub_82254C00(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r4,r3,52
	ctx.r4.s64 = ctx.r3.s64 + 52;
	// bne 0x82696938
	if (!cr0.eq) goto loc_82696938;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82696938:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// lwz r3,204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// bl 0x8213aea8
	sub_8213AEA8(ctx, base);
	// lwz r11,204(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// li r24,1
	r24.s64 = 1;
	// stw r3,132(r30)
	PPC_STORE_U32(r30.u32 + 132, ctx.r3.u32);
	// stb r24,136(r11)
	PPC_STORE_U8(r11.u32 + 136, r24.u8);
	// lwz r3,204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// bl 0x82363af8
	sub_82363AF8(ctx, base);
	// lis r25,-32127
	r25.s64 = -2105475072;
	// lwz r3,-9608(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// ble cr6,0x826969fc
	if (!cr6.gt) goto loc_826969FC;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lwz r5,92(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,30808
	ctx.r4.s64 = r11.s64 + 30808;
	// bl 0x82696330
	sub_82696330(ctx, base);
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// stw r3,136(r30)
	PPC_STORE_U32(r30.u32 + 136, ctx.r3.u32);
	// bne cr6,0x82696a00
	if (!cr6.eq) goto loc_82696A00;
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82269700
	sub_82269700(ctx, base);
	// lfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	f0.f64 = double(temp.f32);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stfs f0,104(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// bl 0x82269fc0
	sub_82269FC0(ctx, base);
	// lwz r27,136(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 192);
	f0.f64 = double(temp.f32);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// li r5,64
	ctx.r5.s64 = 64;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// addi r3,r27,28
	ctx.r3.s64 = r27.s64 + 28;
	// stfs f0,192(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 192, temp.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// b 0x82696a00
	goto loc_82696A00;
loc_826969FC:
	// stw r29,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r29.u32);
loc_82696A00:
	// lis r20,-32127
	r20.s64 = -2105475072;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,-9836(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + -9836);
	// bl 0x822b0e18
	sub_822B0E18(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,-9608(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// bl 0x822b5728
	sub_822B5728(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,-9608(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// bl 0x822b5760
	sub_822B5760(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82699e58
	sub_82699E58(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// bl 0x82691348
	sub_82691348(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82699e60
	sub_82699E60(ctx, base);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lis r28,-32126
	r28.s64 = -2105409536;
	// lwz r11,-13408(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13408);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82696a90
	if (!cr0.eq) goto loc_82696A90;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13408(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13408, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,30776
	ctx.r4.s64 = r11.s64 + 30776;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// stw r3,-13412(r28)
	PPC_STORE_U32(r28.u32 + -13412, ctx.r3.u32);
	// b 0x82696a94
	goto loc_82696A94;
loc_82696A90:
	// lwz r3,-13412(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -13412);
loc_82696A94:
	// stw r24,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r24.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// bl 0x82317b88
	sub_82317B88(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82696abc
	if (cr0.eq) goto loc_82696ABC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82696ABC:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82696ad0
	if (cr0.eq) goto loc_82696AD0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,31836(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 31836);
	f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * f0.f64));
loc_82696AD0:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82391848
	sub_82391848(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82699d50
	sub_82699D50(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// lfs f0,17324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bl 0x82363328
	sub_82363328(ctx, base);
	// lwz r28,-9608(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,12292
	ctx.r4.s64 = r11.s64 + 12292;
	// lwz r11,56(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82696b38
	if (cr0.eq) goto loc_82696B38;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b4420
	sub_822B4420(ctx, base);
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// b 0x82696b4c
	goto loc_82696B4C;
loc_82696B38:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// bl 0x82278d30
	sub_82278D30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82696B4C:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82699e68
	sub_82699E68(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82696b7c
	if (cr0.eq) goto loc_82696B7C;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r5,204(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// bl 0x82699b70
	sub_82699B70(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82696b80
	goto loc_82696B80;
loc_82696B7C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82696B80:
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r11,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82696ba8
	if (cr0.eq) goto loc_82696BA8;
	// lwz r4,204(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// bl 0x8269a558
	sub_8269A558(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82696bac
	goto loc_82696BAC;
loc_82696BA8:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82696BAC:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// addi r4,r11,30760
	ctx.r4.s64 = r11.s64 + 30760;
	// stw r10,124(r30)
	PPC_STORE_U32(r30.u32 + 124, ctx.r10.u32);
	// bl 0x82254c00
	sub_82254C00(ctx, base);
	// stw r3,128(r30)
	PPC_STORE_U32(r30.u32 + 128, ctx.r3.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stb r24,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, r24.u8);
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lfs f2,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,128(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// stb r29,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r29.u8);
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82696c08
	if (!cr0.eq) goto loc_82696C08;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x82696c18
	goto loc_82696C18;
loc_82696C08:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_82696C18:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// bne 0x82696c38
	if (!cr0.eq) goto loc_82696C38;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82696C38:
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// addi r4,r11,30748
	ctx.r4.s64 = r11.s64 + 30748;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r28,r11,5336
	r28.s64 = r11.s64 + 5336;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r25,r11,920
	r25.s64 = r11.s64 + 920;
	// bl 0x8231fac8
	sub_8231FAC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x823173f0
	sub_823173F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r28,140(r30)
	PPC_STORE_U32(r30.u32 + 140, r28.u32);
	// addi r3,r11,252
	ctx.r3.s64 = r11.s64 + 252;
	// bl 0x82150008
	sub_82150008(ctx, base);
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// bne 0x82696cfc
	if (!cr0.eq) goto loc_82696CFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82696CFC:
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// addi r4,r11,30724
	ctx.r4.s64 = r11.s64 + 30724;
	// bl 0x82124710
	sub_82124710(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r27,2
	r27.s64 = 2;
	// stw r3,108(r30)
	PPC_STORE_U32(r30.u32 + 108, ctx.r3.u32);
	// addi r24,r11,1384
	r24.s64 = r11.s64 + 1384;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r23,r11,30704
	r23.s64 = r11.s64 + 30704;
loc_82696D38:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// bl 0x8231fac8
	sub_8231FAC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x823173f0
	sub_823173F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
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
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// bl 0x826966f0
	sub_826966F0(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(r27.s32, 4, xer);
	// ble cr6,0x82696d38
	if (!cr6.gt) goto loc_82696D38;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82696e3c
	if (cr0.eq) goto loc_82696E3C;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r5,204(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// bl 0x8269a1a8
	sub_8269A1A8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82696e40
	goto loc_82696E40;
loc_82696E3C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82696E40:
	// li r3,284
	ctx.r3.s64 = 284;
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82696e70
	if (cr0.eq) goto loc_82696E70;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// lwz r7,204(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// lwz r5,104(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// bl 0x82699538
	sub_82699538(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82696E70:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// bl 0x826962a8
	sub_826962A8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,30348
	ctx.r4.s64 = r11.s64 + 30348;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r29,18972(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,-9836(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + -9836);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823262c8
	sub_823262C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,336
	ctx.r1.s64 = r31.s64 + 336;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_82696EC0"))) PPC_WEAK_FUNC(sub_82696EC0);
PPC_FUNC_IMPL(__imp__sub_82696EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-336
	r31.s64 = r12.s64 + -336;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 356);
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

__attribute__((alias("__imp__sub_82696EE8"))) PPC_WEAK_FUNC(sub_82696EE8);
PPC_FUNC_IMPL(__imp__sub_82696EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-336
	r31.s64 = r12.s64 + -336;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,356(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// addi r3,r11,112
	ctx.r3.s64 = r11.s64 + 112;
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

__attribute__((alias("__imp__sub_82696F14"))) PPC_WEAK_FUNC(sub_82696F14);
PPC_FUNC_IMPL(__imp__sub_82696F14) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13408
	r11.s64 = r11.s64 + -13408;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13408
	ctx.r10.s64 = ctx.r10.s64 + -13408;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82696F3C"))) PPC_WEAK_FUNC(sub_82696F3C);
PPC_FUNC_IMPL(__imp__sub_82696F3C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-336
	r31.s64 = r12.s64 + -336;
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

__attribute__((alias("__imp__sub_82696F64"))) PPC_WEAK_FUNC(sub_82696F64);
PPC_FUNC_IMPL(__imp__sub_82696F64) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-336
	r31.s64 = r12.s64 + -336;
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

__attribute__((alias("__imp__sub_82696F8C"))) PPC_WEAK_FUNC(sub_82696F8C);
PPC_FUNC_IMPL(__imp__sub_82696F8C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-336
	r31.s64 = r12.s64 + -336;
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

__attribute__((alias("__imp__sub_82696FB4"))) PPC_WEAK_FUNC(sub_82696FB4);
PPC_FUNC_IMPL(__imp__sub_82696FB4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-336
	r31.s64 = r12.s64 + -336;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82696FDC"))) PPC_WEAK_FUNC(sub_82696FDC);
PPC_FUNC_IMPL(__imp__sub_82696FDC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-336
	r31.s64 = r12.s64 + -336;
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

__attribute__((alias("__imp__sub_82697004"))) PPC_WEAK_FUNC(sub_82697004);
PPC_FUNC_IMPL(__imp__sub_82697004) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-336
	r31.s64 = r12.s64 + -336;
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

__attribute__((alias("__imp__sub_8269702C"))) PPC_WEAK_FUNC(sub_8269702C);
PPC_FUNC_IMPL(__imp__sub_8269702C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82697030"))) PPC_WEAK_FUNC(sub_82697030);
PPC_FUNC_IMPL(__imp__sub_82697030) {
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
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269706c
	if (cr0.eq) goto loc_8269706C;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8269706C:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8269707c
	if (cr0.eq) goto loc_8269707C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8269707C:
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

__attribute__((alias("__imp__sub_82697098"))) PPC_WEAK_FUNC(sub_82697098);
PPC_FUNC_IMPL(__imp__sub_82697098) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x826970d4
	if (cr0.eq) goto loc_826970D4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_826970D4:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826970e4
	if (cr0.eq) goto loc_826970E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_826970E4:
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

__attribute__((alias("__imp__sub_82697100"))) PPC_WEAK_FUNC(sub_82697100);
PPC_FUNC_IMPL(__imp__sub_82697100) {
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
	// bl 0x82696240
	sub_82696240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82696758
	sub_82696758(ctx, base);
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

__attribute__((alias("__imp__sub_82697154"))) PPC_WEAK_FUNC(sub_82697154);
PPC_FUNC_IMPL(__imp__sub_82697154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

