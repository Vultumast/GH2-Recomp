#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_822138CC"))) PPC_WEAK_FUNC(sub_822138CC);
PPC_FUNC_IMPL(__imp__sub_822138CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822138D0"))) PPC_WEAK_FUNC(sub_822138D0);
PPC_FUNC_IMPL(__imp__sub_822138D0) {
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
	// li r3,24
	ctx.r3.s64 = 24;
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

__attribute__((alias("__imp__sub_82213924"))) PPC_WEAK_FUNC(sub_82213924);
PPC_FUNC_IMPL(__imp__sub_82213924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213928"))) PPC_WEAK_FUNC(sub_82213928);
PPC_FUNC_IMPL(__imp__sub_82213928) {
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
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// stw r5,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r5.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// beq cr6,0x822139ec
	if (cr6.eq) goto loc_822139EC;
	// clrlwi. r11,r5,31
	r11.u64 = ctx.r5.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822139a0
	if (cr0.eq) goto loc_822139A0;
	// lis r11,372
	r11.s64 = 24379392;
	// mulli r3,r31,176
	ctx.r3.s64 = r31.s64 * 176;
	// ori r11,r11,23831
	r11.u64 = r11.u64 | 23831;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82213974
	if (!cr6.gt) goto loc_82213974;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82213974:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,30896
	ctx.r4.s64 = r11.s64 + 30896;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_82213988:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r3,116(r11)
	PPC_STORE_U32(r11.u32 + 116, ctx.r3.u32);
	// bne 0x82213988
	if (!cr0.eq) goto loc_82213988;
	// b 0x822139e0
	goto loc_822139E0;
loc_822139A0:
	// lis r11,511
	r11.s64 = 33488896;
	// rlwinm r3,r31,7,0,24
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 7) & 0xFFFFFF80;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x822139b8
	if (!cr6.gt) goto loc_822139B8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822139B8:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,30896
	ctx.r4.s64 = r11.s64 + 30896;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_822139CC:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r3,116(r11)
	PPC_STORE_U32(r11.u32 + 116, ctx.r3.u32);
	// bne 0x822139cc
	if (!cr0.eq) goto loc_822139CC;
loc_822139E0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,116(r11)
	PPC_STORE_U32(r11.u32 + 116, ctx.r10.u32);
	// b 0x822139f4
	goto loc_822139F4;
loc_822139EC:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_822139F4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_82213A18"))) PPC_WEAK_FUNC(sub_82213A18);
PPC_FUNC_IMPL(__imp__sub_82213A18) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,30920(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 30920);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r25,0
	r25.s64 = 0;
	// lwz r30,260(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 260);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82213a70
	if (!cr0.eq) goto loc_82213A70;
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x82213a6c
	if (cr0.eq) goto loc_82213A6C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82213A6C:
	// stw r25,260(r29)
	PPC_STORE_U32(r29.u32 + 260, r25.u32);
loc_82213A70:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82213a80
	if (cr6.eq) goto loc_82213A80;
	// stw r28,260(r29)
	PPC_STORE_U32(r29.u32 + 260, r28.u32);
	// b 0x82213abc
	goto loc_82213ABC;
loc_82213A80:
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// bne cr6,0x82213a90
	if (!cr6.eq) goto loc_82213A90;
	// li r30,1
	r30.s64 = 1;
loc_82213A90:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82213ab4
	if (cr0.eq) goto loc_82213AB4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82213928
	sub_82213928(ctx, base);
	// b 0x82213ab8
	goto loc_82213AB8;
loc_82213AB4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_82213AB8:
	// stw r3,260(r29)
	PPC_STORE_U32(r29.u32 + 260, ctx.r3.u32);
loc_82213ABC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r26,264(r29)
	PPC_STORE_U32(r29.u32 + 264, r26.u32);
	// stw r25,240(r29)
	PPC_STORE_U32(r29.u32 + 240, r25.u32);
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,244(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 244, temp.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82213A20"))) PPC_WEAK_FUNC(sub_82213A20);
PPC_FUNC_IMPL(__imp__sub_82213A20) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r25,0
	r25.s64 = 0;
	// lwz r30,260(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 260);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82213a70
	if (!cr0.eq) goto loc_82213A70;
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x82213a6c
	if (cr0.eq) goto loc_82213A6C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82213A6C:
	// stw r25,260(r29)
	PPC_STORE_U32(r29.u32 + 260, r25.u32);
loc_82213A70:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82213a80
	if (cr6.eq) goto loc_82213A80;
	// stw r28,260(r29)
	PPC_STORE_U32(r29.u32 + 260, r28.u32);
	// b 0x82213abc
	goto loc_82213ABC;
loc_82213A80:
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// bne cr6,0x82213a90
	if (!cr6.eq) goto loc_82213A90;
	// li r30,1
	r30.s64 = 1;
loc_82213A90:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82213ab4
	if (cr0.eq) goto loc_82213AB4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82213928
	sub_82213928(ctx, base);
	// b 0x82213ab8
	goto loc_82213AB8;
loc_82213AB4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_82213AB8:
	// stw r3,260(r29)
	PPC_STORE_U32(r29.u32 + 260, ctx.r3.u32);
loc_82213ABC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r26,264(r29)
	PPC_STORE_U32(r29.u32 + 264, r26.u32);
	// stw r25,240(r29)
	PPC_STORE_U32(r29.u32 + 240, r25.u32);
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,244(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 244, temp.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82213AD8"))) PPC_WEAK_FUNC(sub_82213AD8);
PPC_FUNC_IMPL(__imp__sub_82213AD8) {
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

__attribute__((alias("__imp__sub_82213B00"))) PPC_WEAK_FUNC(sub_82213B00);
PPC_FUNC_IMPL(__imp__sub_82213B00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,14464(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14464);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lwz r11,-700(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -700);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-700
	ctx.r3.s64 = r11.s64 + -700;
	// bl 0x82314ff8
	sub_82314FF8(ctx, base);
	// lwz r11,-700(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -700);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-700
	ctx.r3.s64 = r11.s64 + -700;
	// bl 0x82314ff8
	sub_82314FF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-684
	ctx.r3.s64 = r31.s64 + -684;
	// bl 0x821e7640
	sub_821E7640(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-496
	ctx.r3.s64 = r31.s64 + -496;
	// bl 0x821afb80
	sub_821AFB80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-460
	ctx.r3.s64 = r31.s64 + -460;
	// bl 0x821b2a18
	sub_821B2A18(ctx, base);
	// addi r4,r31,-420
	ctx.r4.s64 = r31.s64 + -420;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bbc48
	sub_821BBC48(ctx, base);
	// addi r4,r31,-412
	ctx.r4.s64 = r31.s64 + -412;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8213d5e8
	sub_8213D5E8(ctx, base);
	// addi r4,r31,-396
	ctx.r4.s64 = r31.s64 + -396;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8213d5e8
	sub_8213D5E8(ctx, base);
	// addi r4,r31,-380
	ctx.r4.s64 = r31.s64 + -380;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bbc48
	sub_821BBC48(ctx, base);
	// addi r4,r31,-372
	ctx.r4.s64 = r31.s64 + -372;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bbc48
	sub_821BBC48(ctx, base);
	// addi r4,r31,-364
	ctx.r4.s64 = r31.s64 + -364;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bbc48
	sub_821BBC48(ctx, base);
	// addi r4,r31,-356
	ctx.r4.s64 = r31.s64 + -356;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bbc48
	sub_821BBC48(ctx, base);
	// addi r4,r31,-348
	ctx.r4.s64 = r31.s64 + -348;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bbc48
	sub_821BBC48(ctx, base);
	// addi r4,r31,-340
	ctx.r4.s64 = r31.s64 + -340;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bbc48
	sub_821BBC48(ctx, base);
	// addi r4,r31,-332
	ctx.r4.s64 = r31.s64 + -332;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82132e90
	sub_82132E90(ctx, base);
	// addi r4,r31,-316
	ctx.r4.s64 = r31.s64 + -316;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82132e90
	sub_82132E90(ctx, base);
	// addi r4,r31,-300
	ctx.r4.s64 = r31.s64 + -300;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82132e90
	sub_82132E90(ctx, base);
	// addi r4,r31,-284
	ctx.r4.s64 = r31.s64 + -284;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82132e90
	sub_82132E90(ctx, base);
	// addi r4,r31,-96
	ctx.r4.s64 = r31.s64 + -96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8213e3e8
	sub_8213E3E8(ctx, base);
	// addi r4,r31,-84
	ctx.r4.s64 = r31.s64 + -84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8213d5e8
	sub_8213D5E8(ctx, base);
	// addi r4,r31,-256
	ctx.r4.s64 = r31.s64 + -256;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82127738
	sub_82127738(ctx, base);
	// lwz r11,-440(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -440);
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
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f0,-48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -48);
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
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f0,-44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -44);
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
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f0,-40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -40);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = r31.s64 + -36;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82132e90
	sub_82132E90(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = r31.s64 + -20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82132e90
	sub_82132E90(ctx, base);
	// lwz r11,-444(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -444);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// addi r4,r31,-436
	ctx.r4.s64 = r31.s64 + -436;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bbc48
	sub_821BBC48(ctx, base);
	// addi r4,r31,-428
	ctx.r4.s64 = r31.s64 + -428;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bbc48
	sub_821BBC48(ctx, base);
	// lbz r11,-68(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + -68);
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
	// lbz r11,-65(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + -65);
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
	// addi r4,r31,-64
	ctx.r4.s64 = r31.s64 + -64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bbc48
	sub_821BBC48(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f0,-56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -56);
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
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f0,-112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -112);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// addi r4,r31,-108
	ctx.r4.s64 = r31.s64 + -108;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8213e3e8
	sub_8213E3E8(ctx, base);
	// addi r4,r31,-268
	ctx.r4.s64 = r31.s64 + -268;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821276e0
	sub_821276E0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r11,-456(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + -456);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x823592f0
	sub_823592F0(ctx, base);
	// lbz r11,-67(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + -67);
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
	// lbz r11,-244(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + -244);
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
	// lbz r11,-67(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + -67);
	// lbz r10,-244(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + -244);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r11,-66(r31)
	PPC_STORE_U8(r31.u32 + -66, r11.u8);
	// beq 0x82213e40
	if (cr0.eq) goto loc_82213E40;
	// lwz r11,-464(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -464);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82213e04
	goto loc_82213E04;
loc_82213DFC:
	// lwz r11,116(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82213E04:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82213dfc
	if (!cr0.eq) goto loc_82213DFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lwz r31,-464(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + -464);
	// b 0x82213e38
	goto loc_82213E38;
loc_82213E28:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822126a8
	sub_822126A8(ctx, base);
	// lwz r31,116(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 116);
loc_82213E38:
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x82213e28
	if (!cr0.eq) goto loc_82213E28;
loc_82213E40:
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

__attribute__((alias("__imp__sub_82213E58"))) PPC_WEAK_FUNC(sub_82213E58);
PPC_FUNC_IMPL(__imp__sub_82213E58) {
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
	PPCRegister f0{};
	PPCRegister f27{};
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
	// bl 0x8239d5e4
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stfs f27,92(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// lfs f2,288(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 288);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,284(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 284);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fadds f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 + f0.f64));
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lwz r3,444(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 444);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lfs f28,-25408(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25408);
	f28.f64 = double(temp.f32);
	// beq 0x82213ee0
	if (cr0.eq) goto loc_82213EE0;
	// lwz r11,264(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// lwz r11,228(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82213ee0
	if (!cr0.eq) goto loc_82213EE0;
	// addi r29,r31,48
	r29.s64 = r31.s64 + 48;
	// addi r27,r31,32
	r27.s64 = r31.s64 + 32;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x821c6000
	sub_821C6000(ctx, base);
	// b 0x82213f7c
	goto loc_82213F7C;
loc_82213EE0:
	// lfs f2,308(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 308);
	ctx.f2.f64 = double(temp.f32);
	// addi r27,r31,32
	r27.s64 = r31.s64 + 32;
	// lfs f1,292(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 292);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// lfs f2,312(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 312);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,296(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 296);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// stfs f1,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f2,316(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 316);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,300(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 300);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// stfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f2,336(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 336);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,332(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 332);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfs f2,344(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 344);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,340(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 340);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// fadds f1,f31,f28
	ctx.f1.f64 = double(float(f31.f64 + f28.f64));
	// bl 0x8226e1d8
	sub_8226E1D8(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// addi r29,r31,48
	r29.s64 = r31.s64 + 48;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x8226e1d8
	sub_8226E1D8(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// fadds f1,f30,f28
	ctx.f1.f64 = double(float(f30.f64 + f28.f64));
	// fmuls f0,f0,f29
	f0.f64 = double(float(f0.f64 * f29.f64));
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// bl 0x8226e1d8
	sub_8226E1D8(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmuls f0,f0,f29
	f0.f64 = double(float(f0.f64 * f29.f64));
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// bl 0x8226e1d8
	sub_8226E1D8(ctx, base);
	// stfs f1,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
loc_82213F7C:
	// lfs f2,328(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 328);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,324(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 324);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f0,4(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r29.u32 + 8, temp.u32);
	// lbz r11,636(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 636);
	// lfs f30,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f30.f64 = double(temp.f32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f31,32744(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32744);
	f31.f64 = double(temp.f32);
	// beq 0x82214090
	if (cr0.eq) goto loc_82214090;
	// lfs f2,272(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 272);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,268(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 268);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// fdivs f0,f31,f0
	f0.f64 = double(float(f31.f64 / f0.f64));
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// stfs f1,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// fadds f1,f29,f28
	ctx.f1.f64 = double(float(f29.f64 + f28.f64));
	// bl 0x8226e1d8
	sub_8226E1D8(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x8226e1d8
	sub_8226E1D8(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// lfs f2,280(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 280);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,276(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 276);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// fmuls f0,f29,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f29.f64 * ctx.f1.f64));
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// fmuls f0,f1,f30
	f0.f64 = double(float(ctx.f1.f64 * f30.f64));
	// stfs f0,68(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// fmuls f0,f1,f28
	f0.f64 = double(float(ctx.f1.f64 * f28.f64));
	// stfs f0,72(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// lfs f1,84(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226e1d8
	sub_8226E1D8(ctx, base);
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	f0.f64 = double(temp.f32);
	// lfs f13,72(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// lfs f12,64(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f11,8(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 + f0.f64));
	// stfs f0,4(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 4, temp.u32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,8(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r27.u32 + 8, temp.u32);
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f12,0(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// lfs f0,84(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	f0.f64 = double(temp.f32);
	// lfs f13,80(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f13,f27,f0
	f0.f64 = double(float(-(ctx.f13.f64 * f27.f64 - f0.f64)));
	// stfs f0,84(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
loc_82214090:
	// lbz r11,639(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 639);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822140e4
	if (cr0.eq) goto loc_822140E4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// stfs f1,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// lfs f2,644(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 644);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,640(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 640);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f0,30968(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 30968);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,108(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// bl 0x8226dc60
	sub_8226DC60(ctx, base);
	// rlwinm. r11,r3,0,11,11
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x100000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822140ec
	if (cr0.eq) goto loc_822140EC;
	// lfs f0,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 108);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,108(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// b 0x822140ec
	goto loc_822140EC;
loc_822140E4:
	// stfs f30,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// stfs f30,108(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
loc_822140EC:
	// lfs f2,388(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 388);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,372(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 372);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f2,392(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 392);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,376(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f2,396(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 396);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,380(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 380);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f2,400(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 400);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,384(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 384);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f2,360(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 360);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,356(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 356);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,92(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f1,96(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lfs f2,368(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 368);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,364(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 364);
	ctx.f1.f64 = double(temp.f32);
	// lfs f29,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f29.f64 = double(temp.f32);
	// fdivs f31,f29,f0
	f31.f64 = double(float(f29.f64 / f0.f64));
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f1,100(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x82214178
	if (!cr6.lt) goto loc_82214178;
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
loc_82214178:
	// lfs f2,420(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 420);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,404(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 404);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// stfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f2,424(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 424);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,408(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 408);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// stfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f2,428(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 428);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,412(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 412);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// stfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f2,432(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 432);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,416(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 416);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// stfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lwz r11,264(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x822143c4
	if (!cr6.eq) goto loc_822143C4;
	// lfs f13,656(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 656);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,92(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, f30.f64);
	// beq cr6,0x822141f8
	if (cr6.eq) goto loc_822141F8;
	// lfs f12,88(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// lfs f11,96(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f12,f13,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + f0.f64));
	// stfs f13,128(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fdivs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// b 0x82214200
	goto loc_82214200;
loc_822141F8:
	// stfs f30,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f0,128(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
loc_82214200:
	// lfs f12,660(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 660);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,88(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f29
	cr6.compare(ctx.f12.f64, f29.f64);
	// beq cr6,0x82214238
	if (cr6.eq) goto loc_82214238;
	// lfs f10,96(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,100(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fmadds f12,f10,f12,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + f0.f64));
	// stfs f12,136(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fdivs f12,f11,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// stfs f12,140(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// b 0x82214240
	goto loc_82214240;
loc_82214238:
	// stfs f30,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// stfs f13,136(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
loc_82214240:
	// lfs f12,656(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 656);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f30
	cr6.compare(ctx.f12.f64, f30.f64);
	// beq cr6,0x82214250
	if (cr6.eq) goto loc_82214250;
	// stfs f30,96(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
loc_82214250:
	// lfs f11,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f12,136(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,664(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 664);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f13,f11,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + f0.f64));
	// stfs f0,160(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// lfs f2,684(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 684);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,668(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 668);
	ctx.f1.f64 = double(temp.f32);
	// fdivs f31,f29,f12
	f31.f64 = double(float(f29.f64 / ctx.f12.f64));
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// stfs f1,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// lfs f2,688(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 688);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,672(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 672);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// stfs f1,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// lfs f2,692(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 692);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,676(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 676);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// stfs f1,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// lfs f2,696(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 696);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,680(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 680);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// stfs f1,156(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,144(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f13,152(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,148(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f13,160(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,88(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f0,f29,f0
	f0.f64 = double(float(f29.f64 / f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f11,20(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// fmuls f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f0,160(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 160);
	f0.f64 = double(temp.f32);
	// lfs f13,92(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x82214424
	if (cr6.eq) goto loc_82214424;
	// lfs f10,156(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 156);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// fsubs f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 - f0.f64));
	// lfs f10,148(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f10,144(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,152(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// stfs f0,156(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// stfs f11,144(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f12,148(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// lfs f13,92(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,160(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 160);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f12,152(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,156(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,148(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,144(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f0,f29,f0
	f0.f64 = double(float(f29.f64 / f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f12,152(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f11,148(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// fmuls f0,f0,f10
	f0.f64 = double(float(f0.f64 * ctx.f10.f64));
	// stfs f0,144(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// b 0x82214424
	goto loc_82214424;
loc_822143C4:
	// lfs f10,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// fsubs f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 - f0.f64));
	// lfs f10,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
loc_82214424:
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 100);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// bne cr6,0x82214448
	if (!cr6.eq) goto loc_82214448;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82212820
	sub_82212820(ctx, base);
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
loc_82214448:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8214f950
	sub_8214F950(ctx, base);
	// lfs f13,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,24(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f4,16(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,8(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f11,0(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,36(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,40(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,32(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f10,f8,f12,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f9,f7,f0,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 * f0.f64 + ctx.f9.f64));
	// fmadds f11,f12,f11,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmadds f13,f6,f0,f10
	ctx.f13.f64 = double(float(ctx.f6.f64 * f0.f64 + ctx.f10.f64));
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r29.u32 + 8, temp.u32);
	// fmadds f12,f5,f12,f9
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f12,4(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// fmadds f0,f0,f3,f11
	f0.f64 = double(float(f0.f64 * ctx.f3.f64 + ctx.f11.f64));
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// lbz r11,636(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 636);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82214524
	if (cr0.eq) goto loc_82214524;
	// lfs f13,68(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,24(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f5,16(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// lfs f12,64(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,8(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	f0.f64 = double(temp.f32);
	// lfs f8,36(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,0(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f7,40(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,32(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f11,f9,f12,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f10,f8,f0,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * f0.f64 + ctx.f10.f64));
	// fmadds f9,f12,f4,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f13.f64));
	// fmadds f13,f7,f0,f11
	ctx.f13.f64 = double(float(ctx.f7.f64 * f0.f64 + ctx.f11.f64));
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// fmadds f12,f6,f12,f10
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f12,68(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// fmadds f0,f0,f3,f9
	f0.f64 = double(float(f0.f64 * ctx.f3.f64 + ctx.f9.f64));
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
loc_82214524:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8239d630
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82214534"))) PPC_WEAK_FUNC(sub_82214534);
PPC_FUNC_IMPL(__imp__sub_82214534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214538"))) PPC_WEAK_FUNC(sub_82214538);
PPC_FUNC_IMPL(__imp__sub_82214538) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82214568
	if (cr6.eq) goto loc_82214568;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82214578
	goto loc_82214578;
loc_82214568:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// bne cr6,0x82214578
	if (!cr6.eq) goto loc_82214578;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82214578:
	// addi r3,r31,596
	ctx.r3.s64 = r31.s64 + 596;
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 604);
	// stfs f30,592(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 592, temp.u32);
	// lfs f31,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	cr6.compare(f30.f64, f31.f64);
	// bne cr6,0x822145b0
	if (!cr6.eq) goto loc_822145B0;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,464
	ctx.r3.s64 = r31.s64 + 464;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// b 0x82214600
	goto loc_82214600;
loc_822145B0:
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,528
	ctx.r3.s64 = r31.s64 + 528;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r31,464
	r11.s64 = r31.s64 + 464;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f31,0(r11)
	temp.f32 = float(f31.f64);
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
	// stfs f31,20(r11)
	temp.f32 = float(f31.f64);
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
	// stfs f31,40(r11)
	temp.f32 = float(f31.f64);
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
loc_82214600:
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

__attribute__((alias("__imp__sub_8221461C"))) PPC_WEAK_FUNC(sub_8221461C);
PPC_FUNC_IMPL(__imp__sub_8221461C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214620"))) PPC_WEAK_FUNC(sub_82214620);
PPC_FUNC_IMPL(__imp__sub_82214620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lfs f29,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f29.f64 = double(temp.f32);
	// fcmpu cr6,f31,f29
	cr6.compare(f31.f64, f29.f64);
	// ble cr6,0x822146c8
	if (!cr6.gt) goto loc_822146C8;
	// lfs f2,352(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 352);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,348(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 348);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// lfs f0,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 244);
	f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmadds f0,f1,f31,f0
	f0.f64 = double(float(ctx.f1.f64 * f31.f64 + f0.f64));
	// stfs f0,244(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 244, temp.u32);
	// bl 0x82212820
	sub_82212820(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f31.f64 = double(temp.f32);
	// b 0x822146b4
	goto loc_822146B4;
loc_82214688:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82212400
	sub_82212400(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x822146c4
	if (cr0.eq) goto loc_822146C4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82213e58
	sub_82213E58(ctx, base);
	// lfs f0,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 244);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	f0.f64 = double(float(f0.f64 - f31.f64));
	// stfs f0,244(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 244, temp.u32);
loc_822146B4:
	// lfs f0,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 244);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x82214688
	if (!cr6.lt) goto loc_82214688;
	// b 0x822146c8
	goto loc_822146C8;
loc_822146C4:
	// stfs f29,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 244, temp.u32);
loc_822146C8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_822146E8"))) PPC_WEAK_FUNC(sub_822146E8);
PPC_FUNC_IMPL(__imp__sub_822146E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// lfs f13,348(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,352(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 352);
	f0.f64 = double(temp.f32);
	// stb r11,638(r31)
	PPC_STORE_U8(r31.u32 + 638, r11.u8);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(f0.f64 * ctx.f12.f64));
	// lfs f0,-31584(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31584);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82214808
	if (cr6.lt) goto loc_82214808;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f11,288(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 288);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,284(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 284);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwa r11,12(r10)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r10.u32 + 12));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// blt cr6,0x8221478c
	if (cr6.lt) goto loc_8221478C;
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_8221478C:
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// bgt cr6,0x822147a4
	if (cr6.gt) goto loc_822147A4;
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_822147A4:
	// lbz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 248);
	// lfs f29,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f29.f64 = double(temp.f32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x822147bc
	if (cr0.eq) goto loc_822147BC;
	// lfs f30,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f30.f64 = double(temp.f32);
	// b 0x822147d4
	goto loc_822147D4;
loc_822147BC:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,8748(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8748);
	f0.f64 = double(temp.f32);
	// fmuls f30,f1,f0
	f30.f64 = double(float(ctx.f1.f64 * f0.f64));
loc_822147D4:
	// fsubs f31,f30,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f30.f64 - f31.f64));
	// b 0x82214800
	goto loc_82214800;
loc_822147DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82212a48
	sub_82212A48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82214620
	sub_82214620(ctx, base);
	// fadds f31,f31,f29
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 + f29.f64));
loc_82214800:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f30.f64);
	// ble cr6,0x822147dc
	if (!cr6.gt) goto loc_822147DC;
loc_82214808:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82214828"))) PPC_WEAK_FUNC(sub_82214828);
PPC_FUNC_IMPL(__imp__sub_82214828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r16,31200(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 31200);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r8,r8,31124
	ctx.r8.s64 = ctx.r8.s64 + 31124;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r11,r11,31080
	r11.s64 = r11.s64 + 31080;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r8,-500(r30)
	PPC_STORE_U32(r30.u32 + -500, ctx.r8.u32);
	// addi r10,r10,31060
	ctx.r10.s64 = ctx.r10.s64 + 31060;
	// addi r3,r30,-688
	ctx.r3.s64 = r30.s64 + -688;
	// lwz r8,-700(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// addi r28,r30,-680
	r28.s64 = r30.s64 + -680;
	// addi r9,r9,31052
	ctx.r9.s64 = ctx.r9.s64 + 31052;
	// stw r11,-704(r30)
	PPC_STORE_U32(r30.u32 + -704, r11.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r7,r7,30988
	ctx.r7.s64 = ctx.r7.s64 + 30988;
	// addi r11,r11,30976
	r11.s64 = r11.s64 + 30976;
	// stw r9,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r7,-700(r10)
	PPC_STORE_U32(ctx.r10.u32 + -700, ctx.r7.u32);
	// lwz r10,-700(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,-700(r10)
	PPC_STORE_U32(ctx.r10.u32 + -700, r11.u32);
	// lwz r11,-700(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-700
	ctx.r10.s64 = r11.s64 + -700;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-704(r11)
	PPC_STORE_U32(r11.u32 + -704, ctx.r10.u32);
	// lwz r11,-700(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-744
	ctx.r10.s64 = r11.s64 + -744;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-704(r11)
	PPC_STORE_U32(r11.u32 + -704, ctx.r10.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,-444(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + -444);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82214910
	if (!cr0.eq) goto loc_82214910;
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82214910
	if (cr0.eq) goto loc_82214910;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82214910:
	// addi r3,r30,-96
	ctx.r3.s64 = r30.s64 + -96;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// addi r3,r30,-108
	ctx.r3.s64 = r30.s64 + -108;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// addi r3,r30,-256
	ctx.r3.s64 = r30.s64 + -256;
	// bl 0x821266e8
	sub_821266E8(ctx, base);
	// addi r3,r30,-268
	ctx.r3.s64 = r30.s64 + -268;
	// bl 0x821268c0
	sub_821268C0(ctx, base);
	// addic. r11,r30,-704
	xer.ca = r30.u32 > 703;
	r11.s64 = r30.s64 + -704;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8221493c
	if (!cr0.eq) goto loc_8221493C;
	// li r28,0
	r28.s64 = 0;
loc_8221493C:
	// addi r3,r28,184
	ctx.r3.s64 = r28.s64 + 184;
	// bl 0x821b24f8
	sub_821B24F8(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82214830"))) PPC_WEAK_FUNC(sub_82214830);
PPC_FUNC_IMPL(__imp__sub_82214830) {
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
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r8,r8,31124
	ctx.r8.s64 = ctx.r8.s64 + 31124;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r11,r11,31080
	r11.s64 = r11.s64 + 31080;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r8,-500(r30)
	PPC_STORE_U32(r30.u32 + -500, ctx.r8.u32);
	// addi r10,r10,31060
	ctx.r10.s64 = ctx.r10.s64 + 31060;
	// addi r3,r30,-688
	ctx.r3.s64 = r30.s64 + -688;
	// lwz r8,-700(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// addi r28,r30,-680
	r28.s64 = r30.s64 + -680;
	// addi r9,r9,31052
	ctx.r9.s64 = ctx.r9.s64 + 31052;
	// stw r11,-704(r30)
	PPC_STORE_U32(r30.u32 + -704, r11.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r7,r7,30988
	ctx.r7.s64 = ctx.r7.s64 + 30988;
	// addi r11,r11,30976
	r11.s64 = r11.s64 + 30976;
	// stw r9,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r7,-700(r10)
	PPC_STORE_U32(ctx.r10.u32 + -700, ctx.r7.u32);
	// lwz r10,-700(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,-700(r10)
	PPC_STORE_U32(ctx.r10.u32 + -700, r11.u32);
	// lwz r11,-700(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-700
	ctx.r10.s64 = r11.s64 + -700;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-704(r11)
	PPC_STORE_U32(r11.u32 + -704, ctx.r10.u32);
	// lwz r11,-700(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-744
	ctx.r10.s64 = r11.s64 + -744;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-704(r11)
	PPC_STORE_U32(r11.u32 + -704, ctx.r10.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,-444(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + -444);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82214910
	if (!cr0.eq) goto loc_82214910;
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82214910
	if (cr0.eq) goto loc_82214910;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82214910:
	// addi r3,r30,-96
	ctx.r3.s64 = r30.s64 + -96;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// addi r3,r30,-108
	ctx.r3.s64 = r30.s64 + -108;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// addi r3,r30,-256
	ctx.r3.s64 = r30.s64 + -256;
	// bl 0x821266e8
	sub_821266E8(ctx, base);
	// addi r3,r30,-268
	ctx.r3.s64 = r30.s64 + -268;
	// bl 0x821268c0
	sub_821268C0(ctx, base);
	// addic. r11,r30,-704
	xer.ca = r30.u32 > 703;
	r11.s64 = r30.s64 + -704;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8221493c
	if (!cr0.eq) goto loc_8221493C;
	// li r28,0
	r28.s64 = 0;
loc_8221493C:
	// addi r3,r28,184
	ctx.r3.s64 = r28.s64 + 184;
	// bl 0x821b24f8
	sub_821B24F8(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8221494C"))) PPC_WEAK_FUNC(sub_8221494C);
PPC_FUNC_IMPL(__imp__sub_8221494C) {
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
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r11,-704
	xer.ca = r11.u32 > 703;
	r11.s64 = r11.s64 + -704;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8221497c
	if (cr0.eq) goto loc_8221497C;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r11,r11,-704
	r11.s64 = r11.s64 + -704;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x82214984
	goto loc_82214984;
loc_8221497C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_82214984:
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

__attribute__((alias("__imp__sub_822149A0"))) PPC_WEAK_FUNC(sub_822149A0);
PPC_FUNC_IMPL(__imp__sub_822149A0) {
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
	// addi r11,r11,-704
	r11.s64 = r11.s64 + -704;
	// addi r3,r11,436
	ctx.r3.s64 = r11.s64 + 436;
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

__attribute__((alias("__imp__sub_822149D0"))) PPC_WEAK_FUNC(sub_822149D0);
PPC_FUNC_IMPL(__imp__sub_822149D0) {
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
	// addi r11,r11,-704
	r11.s64 = r11.s64 + -704;
	// addi r3,r11,448
	ctx.r3.s64 = r11.s64 + 448;
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

__attribute__((alias("__imp__sub_82214A00"))) PPC_WEAK_FUNC(sub_82214A00);
PPC_FUNC_IMPL(__imp__sub_82214A00) {
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
	// addi r11,r11,-704
	r11.s64 = r11.s64 + -704;
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
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

__attribute__((alias("__imp__sub_82214A30"))) PPC_WEAK_FUNC(sub_82214A30);
PPC_FUNC_IMPL(__imp__sub_82214A30) {
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
	// addi r11,r11,-704
	r11.s64 = r11.s64 + -704;
	// addi r3,r11,608
	ctx.r3.s64 = r11.s64 + 608;
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

__attribute__((alias("__imp__sub_82214A60"))) PPC_WEAK_FUNC(sub_82214A60);
PPC_FUNC_IMPL(__imp__sub_82214A60) {
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
	// bl 0x821e16e8
	sub_821E16E8(ctx, base);
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

__attribute__((alias("__imp__sub_82214A90"))) PPC_WEAK_FUNC(sub_82214A90);
PPC_FUNC_IMPL(__imp__sub_82214A90) {
	PPC_FUNC_PROLOGUE();
	// stb r4,460(r3)
	PPC_STORE_U8(ctx.r3.u32 + 460, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214A98"))) PPC_WEAK_FUNC(sub_82214A98);
PPC_FUNC_IMPL(__imp__sub_82214A98) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-460
	ctx.r3.s64 = ctx.r3.s64 + -460;
	// b 0x821b2890
	sub_821B2890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214AA0"))) PPC_WEAK_FUNC(sub_82214AA0);
PPC_FUNC_IMPL(__imp__sub_82214AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82212760
	sub_82212760(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214AAC"))) PPC_WEAK_FUNC(sub_82214AAC);
PPC_FUNC_IMPL(__imp__sub_82214AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214AB0"))) PPC_WEAK_FUNC(sub_82214AB0);
PPC_FUNC_IMPL(__imp__sub_82214AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x82214a60
	sub_82214A60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214ABC"))) PPC_WEAK_FUNC(sub_82214ABC);
PPC_FUNC_IMPL(__imp__sub_82214ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214AC0"))) PPC_WEAK_FUNC(sub_82214AC0);
PPC_FUNC_IMPL(__imp__sub_82214AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82214a98
	sub_82214A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214ACC"))) PPC_WEAK_FUNC(sub_82214ACC);
PPC_FUNC_IMPL(__imp__sub_82214ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214AD0"))) PPC_WEAK_FUNC(sub_82214AD0);
PPC_FUNC_IMPL(__imp__sub_82214AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82215980
	sub_82215980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214ADC"))) PPC_WEAK_FUNC(sub_82214ADC);
PPC_FUNC_IMPL(__imp__sub_82214ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214AE0"))) PPC_WEAK_FUNC(sub_82214AE0);
PPC_FUNC_IMPL(__imp__sub_82214AE0) {
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
	// lwz r16,31304(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 31304);
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
	// lwz r11,13200(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13200);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82214b64
	if (!cr0.eq) goto loc_82214B64;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,13200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13200, r11.u32);
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
	// bl 0x821e16e8
	sub_821E16E8(ctx, base);
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
	// stw r3,13196(r27)
	PPC_STORE_U32(r27.u32 + 13196, ctx.r3.u32);
	// b 0x82214b68
	goto loc_82214B68;
loc_82214B64:
	// lwz r3,13196(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 13196);
loc_82214B68:
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
	// beq 0x82214ba4
	if (cr0.eq) goto loc_82214BA4;
	// lwz r11,-700(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-700
	ctx.r3.s64 = r11.s64 + -700;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x82214c20
	goto loc_82214C20;
loc_82214BA4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82214c04
	if (!cr0.eq) goto loc_82214C04;
	// addic. r11,r30,-704
	xer.ca = r30.u32 > 703;
	r11.s64 = r30.s64 + -704;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82214bc8
	if (!cr0.eq) goto loc_82214BC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82214bd8
	goto loc_82214BD8;
loc_82214BC8:
	// lwz r11,-700(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-700
	ctx.r3.s64 = r11.s64 + -700;
loc_82214BD8:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-700(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-700
	ctx.r4.s64 = r11.s64 + -700;
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
loc_82214C04:
	// lwz r11,-700(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-700
	ctx.r3.s64 = r11.s64 + -700;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82214C20:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82214AE8"))) PPC_WEAK_FUNC(sub_82214AE8);
PPC_FUNC_IMPL(__imp__sub_82214AE8) {
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
	// lwz r11,13200(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13200);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82214b64
	if (!cr0.eq) goto loc_82214B64;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,13200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13200, r11.u32);
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
	// bl 0x821e16e8
	sub_821E16E8(ctx, base);
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
	// stw r3,13196(r27)
	PPC_STORE_U32(r27.u32 + 13196, ctx.r3.u32);
	// b 0x82214b68
	goto loc_82214B68;
loc_82214B64:
	// lwz r3,13196(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 13196);
loc_82214B68:
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
	// beq 0x82214ba4
	if (cr0.eq) goto loc_82214BA4;
	// lwz r11,-700(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-700
	ctx.r3.s64 = r11.s64 + -700;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x82214c20
	goto loc_82214C20;
loc_82214BA4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82214c04
	if (!cr0.eq) goto loc_82214C04;
	// addic. r11,r30,-704
	xer.ca = r30.u32 > 703;
	r11.s64 = r30.s64 + -704;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82214bc8
	if (!cr0.eq) goto loc_82214BC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82214bd8
	goto loc_82214BD8;
loc_82214BC8:
	// lwz r11,-700(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-700
	ctx.r3.s64 = r11.s64 + -700;
loc_82214BD8:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-700(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-700
	ctx.r4.s64 = r11.s64 + -700;
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
loc_82214C04:
	// lwz r11,-700(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-700
	ctx.r3.s64 = r11.s64 + -700;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82214C20:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82214C2C"))) PPC_WEAK_FUNC(sub_82214C2C);
PPC_FUNC_IMPL(__imp__sub_82214C2C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13200
	r11.s64 = r11.s64 + 13200;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13200
	ctx.r10.s64 = ctx.r10.s64 + 13200;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214C54"))) PPC_WEAK_FUNC(sub_82214C54);
PPC_FUNC_IMPL(__imp__sub_82214C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214C58"))) PPC_WEAK_FUNC(sub_82214C58);
PPC_FUNC_IMPL(__imp__sub_82214C58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,252(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214C60"))) PPC_WEAK_FUNC(sub_82214C60);
PPC_FUNC_IMPL(__imp__sub_82214C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82214ae8
	sub_82214AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214C6C"))) PPC_WEAK_FUNC(sub_82214C6C);
PPC_FUNC_IMPL(__imp__sub_82214C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214C70"))) PPC_WEAK_FUNC(sub_82214C70);
PPC_FUNC_IMPL(__imp__sub_82214C70) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,31504(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 31504);
	// mflr r12
	// bl 0x8239bcf0
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x82214d1c
	if (cr6.eq) goto loc_82214D1C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r11,r11,31408
	r11.s64 = r11.s64 + 31408;
	// addi r10,r10,31400
	ctx.r10.s64 = ctx.r10.s64 + 31400;
	// addi r9,r9,31388
	ctx.r9.s64 = ctx.r9.s64 + 31388;
	// addi r8,r8,31376
	ctx.r8.s64 = ctx.r8.s64 + 31376;
	// addi r7,r7,31368
	ctx.r7.s64 = ctx.r7.s64 + 31368;
	// addi r3,r30,704
	ctx.r3.s64 = r30.s64 + 704;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// stw r9,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r9.u32);
	// stw r8,208(r30)
	PPC_STORE_U32(r30.u32 + 208, ctx.r8.u32);
	// stw r7,752(r30)
	PPC_STORE_U32(r30.u32 + 752, ctx.r7.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,748
	r11.s64 = r30.s64 + 748;
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
loc_82214D1C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e74e8
	sub_821E74E8(ctx, base);
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-11084
	r11.s64 = r11.s64 + -11084;
	// addi r10,r10,-11148
	ctx.r10.s64 = ctx.r10.s64 + -11148;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r27,r30,24
	r27.s64 = r30.s64 + 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bl 0x821b21a0
	sub_821B21A0(ctx, base);
	// addi r26,r30,204
	r26.s64 = r30.s64 + 204;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821b2dd0
	sub_821B2DD0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r11,r11,31080
	r11.s64 = r11.s64 + 31080;
	// lfs f30,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f30.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r9,31052
	ctx.r9.s64 = ctx.r9.s64 + 31052;
	// addi r10,r10,31060
	ctx.r10.s64 = ctx.r10.s64 + 31060;
	// addi r8,r8,31124
	ctx.r8.s64 = ctx.r8.s64 + 31124;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r9,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// addi r7,r7,30988
	ctx.r7.s64 = ctx.r7.s64 + 30988;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r11,r11,30976
	r11.s64 = r11.s64 + 30976;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r8,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r8.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-700
	ctx.r10.s64 = r11.s64 + -700;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-744
	ctx.r10.s64 = r11.s64 + -744;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stfs f30,244(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 244, temp.u32);
	// stfs f30,252(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 252, temp.u32);
	// stw r29,240(r30)
	PPC_STORE_U32(r30.u32 + 240, r29.u32);
	// stb r29,248(r30)
	PPC_STORE_U8(r30.u32 + 248, r29.u8);
	// stw r29,256(r30)
	PPC_STORE_U32(r30.u32 + 256, r29.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82214e34
	if (cr0.eq) goto loc_82214E34;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// b 0x82214e38
	goto loc_82214E38;
loc_82214E34:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82214E38:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r10,260(r30)
	PPC_STORE_U32(r30.u32 + 260, ctx.r10.u32);
	// stw r29,264(r30)
	PPC_STORE_U32(r30.u32 + 264, r29.u32);
	// lfs f0,29204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 29204);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,268(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 268, temp.u32);
	// stfs f0,272(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 272, temp.u32);
	// lfs f31,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,276(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 276, temp.u32);
	// stfs f31,280(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 280, temp.u32);
	// lfs f13,17320(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17320);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,284(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 284, temp.u32);
	// stfs f13,288(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 288, temp.u32);
	// stfs f30,292(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 292, temp.u32);
	// stfs f30,296(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 296, temp.u32);
	// stfs f30,300(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 300, temp.u32);
	// stfs f30,308(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 308, temp.u32);
	// stfs f30,312(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 312, temp.u32);
	// stfs f30,316(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 316, temp.u32);
	// stfs f31,324(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 324, temp.u32);
	// stfs f31,328(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 328, temp.u32);
	// stfs f30,332(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 332, temp.u32);
	// stfs f30,336(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 336, temp.u32);
	// stfs f30,340(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 340, temp.u32);
	// stfs f30,344(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 344, temp.u32);
	// stfs f31,348(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 348, temp.u32);
	// stfs f31,352(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 352, temp.u32);
	// stfs f31,356(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 356, temp.u32);
	// stfs f31,360(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 360, temp.u32);
	// stfs f30,364(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 364, temp.u32);
	// stfs f30,368(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 368, temp.u32);
	// stfs f31,372(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 372, temp.u32);
	// stfs f31,376(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 376, temp.u32);
	// stfs f31,380(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 380, temp.u32);
	// stfs f31,384(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 384, temp.u32);
	// stfs f31,388(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 388, temp.u32);
	// stfs f31,392(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 392, temp.u32);
	// stfs f31,396(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 396, temp.u32);
	// stfs f31,400(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 400, temp.u32);
	// stfs f31,404(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 404, temp.u32);
	// stfs f31,408(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 408, temp.u32);
	// stfs f31,412(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 412, temp.u32);
	// stfs f31,416(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 416, temp.u32);
	// stfs f31,420(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 420, temp.u32);
	// stfs f31,424(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 424, temp.u32);
	// stfs f31,428(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 428, temp.u32);
	// stfs f31,432(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 432, temp.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,440(r30)
	PPC_STORE_U32(r30.u32 + 440, r11.u32);
	// stw r29,444(r30)
	PPC_STORE_U32(r30.u32 + 444, r29.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,8892
	r11.s64 = r11.s64 + 8892;
	// stw r11,436(r30)
	PPC_STORE_U32(r30.u32 + 436, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r28,r30,448
	r28.s64 = r30.s64 + 448;
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
	// bl 0x82126aa8
	sub_82126AA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,8860
	r11.s64 = r11.s64 + 8860;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stb r29,460(r30)
	PPC_STORE_U8(r30.u32 + 460, r29.u8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,600(r30)
	PPC_STORE_U32(r30.u32 + 600, r11.u32);
	// stw r29,604(r30)
	PPC_STORE_U32(r30.u32 + 604, r29.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,27884
	r11.s64 = r11.s64 + 27884;
	// stw r11,596(r30)
	PPC_STORE_U32(r30.u32 + 596, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,612(r30)
	PPC_STORE_U32(r30.u32 + 612, r11.u32);
	// stw r29,616(r30)
	PPC_STORE_U32(r30.u32 + 616, r29.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-20968
	r11.s64 = r11.s64 + -20968;
	// stw r11,608(r30)
	PPC_STORE_U32(r30.u32 + 608, r11.u32);
	// stfs f30,620(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 620, temp.u32);
	// stfs f30,624(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 624, temp.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stfs f30,628(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 628, temp.u32);
	// stb r29,636(r30)
	PPC_STORE_U8(r30.u32 + 636, r29.u8);
	// stb r29,637(r30)
	PPC_STORE_U8(r30.u32 + 637, r29.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,638(r30)
	PPC_STORE_U8(r30.u32 + 638, r29.u8);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stb r29,639(r30)
	PPC_STORE_U8(r30.u32 + 639, r29.u8);
	// stfs f30,640(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 640, temp.u32);
	// stfs f30,644(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 644, temp.u32);
	// stfs f30,648(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 648, temp.u32);
	// stfs f30,652(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 652, temp.u32);
	// stfs f30,656(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 656, temp.u32);
	// stfs f31,660(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 660, temp.u32);
	// stfs f30,664(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 664, temp.u32);
	// stfs f31,668(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 668, temp.u32);
	// stfs f31,672(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 672, temp.u32);
	// stfs f31,676(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 676, temp.u32);
	// stfs f31,680(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 680, temp.u32);
	// stfs f31,684(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 684, temp.u32);
	// stfs f31,688(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 688, temp.u32);
	// stfs f31,692(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 692, temp.u32);
	// stfs f31,696(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 696, temp.u32);
	// bl 0x82214538
	sub_82214538(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82214C78"))) PPC_WEAK_FUNC(sub_82214C78);
PPC_FUNC_IMPL(__imp__sub_82214C78) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x82214d1c
	if (cr6.eq) goto loc_82214D1C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r11,r11,31408
	r11.s64 = r11.s64 + 31408;
	// addi r10,r10,31400
	ctx.r10.s64 = ctx.r10.s64 + 31400;
	// addi r9,r9,31388
	ctx.r9.s64 = ctx.r9.s64 + 31388;
	// addi r8,r8,31376
	ctx.r8.s64 = ctx.r8.s64 + 31376;
	// addi r7,r7,31368
	ctx.r7.s64 = ctx.r7.s64 + 31368;
	// addi r3,r30,704
	ctx.r3.s64 = r30.s64 + 704;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// stw r9,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r9.u32);
	// stw r8,208(r30)
	PPC_STORE_U32(r30.u32 + 208, ctx.r8.u32);
	// stw r7,752(r30)
	PPC_STORE_U32(r30.u32 + 752, ctx.r7.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,748
	r11.s64 = r30.s64 + 748;
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
loc_82214D1C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e74e8
	sub_821E74E8(ctx, base);
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-11084
	r11.s64 = r11.s64 + -11084;
	// addi r10,r10,-11148
	ctx.r10.s64 = ctx.r10.s64 + -11148;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r27,r30,24
	r27.s64 = r30.s64 + 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bl 0x821b21a0
	sub_821B21A0(ctx, base);
	// addi r26,r30,204
	r26.s64 = r30.s64 + 204;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821b2dd0
	sub_821B2DD0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r11,r11,31080
	r11.s64 = r11.s64 + 31080;
	// lfs f30,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f30.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r9,31052
	ctx.r9.s64 = ctx.r9.s64 + 31052;
	// addi r10,r10,31060
	ctx.r10.s64 = ctx.r10.s64 + 31060;
	// addi r8,r8,31124
	ctx.r8.s64 = ctx.r8.s64 + 31124;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r9,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// addi r7,r7,30988
	ctx.r7.s64 = ctx.r7.s64 + 30988;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r11,r11,30976
	r11.s64 = r11.s64 + 30976;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r8,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r8.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-700
	ctx.r10.s64 = r11.s64 + -700;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-744
	ctx.r10.s64 = r11.s64 + -744;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stfs f30,244(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 244, temp.u32);
	// stfs f30,252(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 252, temp.u32);
	// stw r29,240(r30)
	PPC_STORE_U32(r30.u32 + 240, r29.u32);
	// stb r29,248(r30)
	PPC_STORE_U8(r30.u32 + 248, r29.u8);
	// stw r29,256(r30)
	PPC_STORE_U32(r30.u32 + 256, r29.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82214e34
	if (cr0.eq) goto loc_82214E34;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// b 0x82214e38
	goto loc_82214E38;
loc_82214E34:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82214E38:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r10,260(r30)
	PPC_STORE_U32(r30.u32 + 260, ctx.r10.u32);
	// stw r29,264(r30)
	PPC_STORE_U32(r30.u32 + 264, r29.u32);
	// lfs f0,29204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 29204);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,268(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 268, temp.u32);
	// stfs f0,272(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 272, temp.u32);
	// lfs f31,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,276(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 276, temp.u32);
	// stfs f31,280(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 280, temp.u32);
	// lfs f13,17320(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17320);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,284(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 284, temp.u32);
	// stfs f13,288(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 288, temp.u32);
	// stfs f30,292(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 292, temp.u32);
	// stfs f30,296(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 296, temp.u32);
	// stfs f30,300(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 300, temp.u32);
	// stfs f30,308(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 308, temp.u32);
	// stfs f30,312(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 312, temp.u32);
	// stfs f30,316(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 316, temp.u32);
	// stfs f31,324(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 324, temp.u32);
	// stfs f31,328(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 328, temp.u32);
	// stfs f30,332(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 332, temp.u32);
	// stfs f30,336(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 336, temp.u32);
	// stfs f30,340(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 340, temp.u32);
	// stfs f30,344(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 344, temp.u32);
	// stfs f31,348(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 348, temp.u32);
	// stfs f31,352(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 352, temp.u32);
	// stfs f31,356(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 356, temp.u32);
	// stfs f31,360(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 360, temp.u32);
	// stfs f30,364(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 364, temp.u32);
	// stfs f30,368(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 368, temp.u32);
	// stfs f31,372(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 372, temp.u32);
	// stfs f31,376(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 376, temp.u32);
	// stfs f31,380(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 380, temp.u32);
	// stfs f31,384(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 384, temp.u32);
	// stfs f31,388(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 388, temp.u32);
	// stfs f31,392(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 392, temp.u32);
	// stfs f31,396(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 396, temp.u32);
	// stfs f31,400(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 400, temp.u32);
	// stfs f31,404(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 404, temp.u32);
	// stfs f31,408(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 408, temp.u32);
	// stfs f31,412(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 412, temp.u32);
	// stfs f31,416(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 416, temp.u32);
	// stfs f31,420(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 420, temp.u32);
	// stfs f31,424(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 424, temp.u32);
	// stfs f31,428(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 428, temp.u32);
	// stfs f31,432(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 432, temp.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,440(r30)
	PPC_STORE_U32(r30.u32 + 440, r11.u32);
	// stw r29,444(r30)
	PPC_STORE_U32(r30.u32 + 444, r29.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,8892
	r11.s64 = r11.s64 + 8892;
	// stw r11,436(r30)
	PPC_STORE_U32(r30.u32 + 436, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r28,r30,448
	r28.s64 = r30.s64 + 448;
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
	// bl 0x82126aa8
	sub_82126AA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,8860
	r11.s64 = r11.s64 + 8860;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stb r29,460(r30)
	PPC_STORE_U8(r30.u32 + 460, r29.u8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,600(r30)
	PPC_STORE_U32(r30.u32 + 600, r11.u32);
	// stw r29,604(r30)
	PPC_STORE_U32(r30.u32 + 604, r29.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,27884
	r11.s64 = r11.s64 + 27884;
	// stw r11,596(r30)
	PPC_STORE_U32(r30.u32 + 596, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,612(r30)
	PPC_STORE_U32(r30.u32 + 612, r11.u32);
	// stw r29,616(r30)
	PPC_STORE_U32(r30.u32 + 616, r29.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-20968
	r11.s64 = r11.s64 + -20968;
	// stw r11,608(r30)
	PPC_STORE_U32(r30.u32 + 608, r11.u32);
	// stfs f30,620(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 620, temp.u32);
	// stfs f30,624(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 624, temp.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stfs f30,628(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 628, temp.u32);
	// stb r29,636(r30)
	PPC_STORE_U8(r30.u32 + 636, r29.u8);
	// stb r29,637(r30)
	PPC_STORE_U8(r30.u32 + 637, r29.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,638(r30)
	PPC_STORE_U8(r30.u32 + 638, r29.u8);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stb r29,639(r30)
	PPC_STORE_U8(r30.u32 + 639, r29.u8);
	// stfs f30,640(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 640, temp.u32);
	// stfs f30,644(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 644, temp.u32);
	// stfs f30,648(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 648, temp.u32);
	// stfs f30,652(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 652, temp.u32);
	// stfs f30,656(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 656, temp.u32);
	// stfs f31,660(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 660, temp.u32);
	// stfs f30,664(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 664, temp.u32);
	// stfs f31,668(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 668, temp.u32);
	// stfs f31,672(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 672, temp.u32);
	// stfs f31,676(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 676, temp.u32);
	// stfs f31,680(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 680, temp.u32);
	// stfs f31,684(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 684, temp.u32);
	// stfs f31,688(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 688, temp.u32);
	// stfs f31,692(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 692, temp.u32);
	// stfs f31,696(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 696, temp.u32);
	// bl 0x82214538
	sub_82214538(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82215010"))) PPC_WEAK_FUNC(sub_82215010);
PPC_FUNC_IMPL(__imp__sub_82215010) {
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
	// beq 0x82215044
	if (cr0.eq) goto loc_82215044;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// addi r3,r11,704
	ctx.r3.s64 = r11.s64 + 704;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_82215044:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82215054"))) PPC_WEAK_FUNC(sub_82215054);
PPC_FUNC_IMPL(__imp__sub_82215054) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// addi r3,r11,208
	ctx.r3.s64 = r11.s64 + 208;
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

__attribute__((alias("__imp__sub_82215080"))) PPC_WEAK_FUNC(sub_82215080);
PPC_FUNC_IMPL(__imp__sub_82215080) {
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

__attribute__((alias("__imp__sub_822150A8"))) PPC_WEAK_FUNC(sub_822150A8);
PPC_FUNC_IMPL(__imp__sub_822150A8) {
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

__attribute__((alias("__imp__sub_822150D0"))) PPC_WEAK_FUNC(sub_822150D0);
PPC_FUNC_IMPL(__imp__sub_822150D0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// addi r3,r11,436
	ctx.r3.s64 = r11.s64 + 436;
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

__attribute__((alias("__imp__sub_822150FC"))) PPC_WEAK_FUNC(sub_822150FC);
PPC_FUNC_IMPL(__imp__sub_822150FC) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// addi r3,r11,448
	ctx.r3.s64 = r11.s64 + 448;
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

__attribute__((alias("__imp__sub_82215128"))) PPC_WEAK_FUNC(sub_82215128);
PPC_FUNC_IMPL(__imp__sub_82215128) {
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

__attribute__((alias("__imp__sub_82215150"))) PPC_WEAK_FUNC(sub_82215150);
PPC_FUNC_IMPL(__imp__sub_82215150) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
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

__attribute__((alias("__imp__sub_8221517C"))) PPC_WEAK_FUNC(sub_8221517C);
PPC_FUNC_IMPL(__imp__sub_8221517C) {
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

__attribute__((alias("__imp__sub_822151A4"))) PPC_WEAK_FUNC(sub_822151A4);
PPC_FUNC_IMPL(__imp__sub_822151A4) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// addi r3,r11,608
	ctx.r3.s64 = r11.s64 + 608;
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

__attribute__((alias("__imp__sub_822151D0"))) PPC_WEAK_FUNC(sub_822151D0);
PPC_FUNC_IMPL(__imp__sub_822151D0) {
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
	// addi r3,r31,-496
	ctx.r3.s64 = r31.s64 + -496;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x821b0888
	sub_821B0888(ctx, base);
	// lwz r11,-100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -100);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8221520c
	if (cr0.eq) goto loc_8221520C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8221520C:
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82215244
	if (!cr6.eq) goto loc_82215244;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,1232
	ctx.r6.s64 = r11.s64 + 1232;
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,-704
	ctx.r3.s64 = r31.s64 + -704;
	// lfs f1,-112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82214538
	sub_82214538(ctx, base);
loc_82215244:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8221524C"))) PPC_WEAK_FUNC(sub_8221524C);
PPC_FUNC_IMPL(__imp__sub_8221524C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215250"))) PPC_WEAK_FUNC(sub_82215250);
PPC_FUNC_IMPL(__imp__sub_82215250) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,448
	ctx.r3.s64 = ctx.r3.s64 + 448;
	// b 0x82126b38
	sub_82126B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215258"))) PPC_WEAK_FUNC(sub_82215258);
PPC_FUNC_IMPL(__imp__sub_82215258) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82215290
	if (cr6.eq) goto loc_82215290;
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,36
	ctx.r4.s64 = r29.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x822152b4
	goto loc_822152B4;
loc_82215290:
	// lwz r11,444(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 444);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x822152c4
	if (cr6.eq) goto loc_822152C4;
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_822152B4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821afaa0
	sub_821AFAA0(ctx, base);
loc_822152C4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,436
	ctx.r3.s64 = r31.s64 + 436;
	// bl 0x82126cc8
	sub_82126CC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822152D8"))) PPC_WEAK_FUNC(sub_822152D8);
PPC_FUNC_IMPL(__imp__sub_822152D8) {
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
	// bl 0x821bc638
	sub_821BC638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,448
	ctx.r3.s64 = r29.s64 + 448;
	// bl 0x82126b38
	sub_82126B38(ctx, base);
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

__attribute__((alias("__imp__sub_82215324"))) PPC_WEAK_FUNC(sub_82215324);
PPC_FUNC_IMPL(__imp__sub_82215324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215328"))) PPC_WEAK_FUNC(sub_82215328);
PPC_FUNC_IMPL(__imp__sub_82215328) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// b 0x82215368
	goto loc_82215368;
loc_82215348:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x822138d0
	sub_822138D0(ctx, base);
loc_82215368:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
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
	// bne 0x82215348
	if (!cr0.eq) goto loc_82215348;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8221539C"))) PPC_WEAK_FUNC(sub_8221539C);
PPC_FUNC_IMPL(__imp__sub_8221539C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822153A0"))) PPC_WEAK_FUNC(sub_822153A0);
PPC_FUNC_IMPL(__imp__sub_822153A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x822151d0
	sub_822151D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822153AC"))) PPC_WEAK_FUNC(sub_822153AC);
PPC_FUNC_IMPL(__imp__sub_822153AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822153B0"))) PPC_WEAK_FUNC(sub_822153B0);
PPC_FUNC_IMPL(__imp__sub_822153B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82213b00
	sub_82213B00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822153BC"))) PPC_WEAK_FUNC(sub_822153BC);
PPC_FUNC_IMPL(__imp__sub_822153BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822153C0"))) PPC_WEAK_FUNC(sub_822153C0);
PPC_FUNC_IMPL(__imp__sub_822153C0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r6,r11,10624
	ctx.r6.s64 = r11.s64 + 10624;
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
	// lwz r11,-700(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -700);
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
	// addi r3,r11,-700
	ctx.r3.s64 = r11.s64 + -700;
	// bl 0x82315258
	sub_82315258(ctx, base);
	// lwz r11,-700(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -700);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-700
	ctx.r3.s64 = r11.s64 + -700;
	// bl 0x82315258
	sub_82315258(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,-684
	ctx.r3.s64 = r31.s64 + -684;
	// bl 0x821e76c0
	sub_821E76C0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,-496
	ctx.r3.s64 = r31.s64 + -496;
	// bl 0x821b0908
	sub_821B0908(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,-460
	ctx.r3.s64 = r31.s64 + -460;
	// bl 0x821b2938
	sub_821B2938(ctx, base);
	// lbz r11,460(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 460);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stb r11,-244(r31)
	PPC_STORE_U8(r31.u32 + -244, r11.u8);
	// beq 0x822154d8
	if (cr0.eq) goto loc_822154D8;
	// lwz r11,260(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 260);
	// addi r26,r31,-704
	r26.s64 = r31.s64 + -704;
	// lwz r5,264(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r27,240(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// b 0x822154d0
	goto loc_822154D0;
loc_822154A4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82212400
	sub_82212400(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r25,116(r29)
	r25.u64 = PPC_LOAD_U32(r29.u32 + 116);
	// lwz r24,112(r29)
	r24.u64 = PPC_LOAD_U32(r29.u32 + 112);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// stw r25,116(r29)
	PPC_STORE_U32(r29.u32 + 116, r25.u32);
	// stw r24,112(r29)
	PPC_STORE_U32(r29.u32 + 112, r24.u32);
	// lwz r27,116(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 116);
loc_822154D0:
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// bne 0x822154a4
	if (!cr0.eq) goto loc_822154A4;
loc_822154D8:
	// lfs f0,-696(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -696);
	f0.f64 = double(temp.f32);
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// stfs f0,-452(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -452, temp.u32);
	// beq cr6,0x8221583c
	if (cr6.eq) goto loc_8221583C;
	// addi r7,r30,284
	ctx.r7.s64 = r30.s64 + 284;
	// addi r6,r31,-420
	ctx.r6.s64 = r31.s64 + -420;
	// addi r11,r30,292
	r11.s64 = r30.s64 + 292;
	// addi r10,r31,-412
	ctx.r10.s64 = r31.s64 + -412;
	// addi r9,r30,308
	ctx.r9.s64 = r30.s64 + 308;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r8,r31,-396
	ctx.r8.s64 = r31.s64 + -396;
	// addi r4,r30,324
	ctx.r4.s64 = r30.s64 + 324;
	// addi r3,r31,-380
	ctx.r3.s64 = r31.s64 + -380;
	// addi r29,r30,332
	r29.s64 = r30.s64 + 332;
	// addi r28,r31,-372
	r28.s64 = r31.s64 + -372;
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// addi r27,r30,340
	r27.s64 = r30.s64 + 340;
	// lwz r26,4(r7)
	r26.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r5,r31,-364
	ctx.r5.s64 = r31.s64 + -364;
	// addi r25,r30,348
	r25.s64 = r30.s64 + 348;
	// addi r23,r31,-356
	r23.s64 = r31.s64 + -356;
	// addi r24,r31,-332
	r24.s64 = r31.s64 + -332;
	// addi r22,r30,364
	r22.s64 = r30.s64 + 364;
	// stw r26,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r26.u32);
	// addi r26,r30,356
	r26.s64 = r30.s64 + 356;
	// lwz r20,0(r11)
	r20.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r24,r31,-348
	r24.s64 = r31.s64 + -348;
	// addi r21,r31,-340
	r21.s64 = r31.s64 + -340;
	// addi r7,r30,372
	ctx.r7.s64 = r30.s64 + 372;
	// stw r20,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r20.u32);
	// lwz r20,4(r11)
	r20.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r20,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r20.u32);
	// lwz r20,8(r11)
	r20.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r20,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r20.u32);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r31,-316
	ctx.r10.s64 = r31.s64 + -316;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r11.u32);
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r9,r30,404
	ctx.r9.s64 = r30.s64 + 404;
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r8,r31,-300
	ctx.r8.s64 = r31.s64 + -300;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// stw r11,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r11.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r11,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r11.u32);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// stw r11,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r11.u32);
	// lwz r11,4(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// stw r11,4(r21)
	PPC_STORE_U32(r21.u32 + 4, r11.u32);
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// lwz r11,4(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r11.u32);
	// lwz r11,8(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r11.u32);
	// lwz r11,12(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// addi r7,r30,420
	ctx.r7.s64 = r30.s64 + 420;
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, r11.u32);
	// addi r11,r30,388
	r11.s64 = r30.s64 + 388;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r6,r31,-284
	ctx.r6.s64 = r31.s64 + -284;
	// addi r3,r31,-96
	ctx.r3.s64 = r31.s64 + -96;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r11.u32);
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// lwz r11,4(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r11.u32);
	// lwz r11,8(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r11.u32);
	// lwz r11,12(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, r11.u32);
	// lwz r4,616(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 616);
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// addi r11,r30,620
	r11.s64 = r30.s64 + 620;
	// addi r10,r31,-84
	ctx.r10.s64 = r31.s64 + -84;
	// addi r3,r31,-256
	ctx.r3.s64 = r31.s64 + -256;
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
	// lwz r4,456(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 456);
	// bl 0x82126b38
	sub_82126B38(ctx, base);
	// addi r11,r30,268
	r11.s64 = r30.s64 + 268;
	// addi r10,r31,-436
	ctx.r10.s64 = r31.s64 + -436;
	// addi r9,r30,276
	ctx.r9.s64 = r30.s64 + 276;
	// addi r8,r31,-428
	ctx.r8.s64 = r31.s64 + -428;
	// addi r7,r30,640
	ctx.r7.s64 = r30.s64 + 640;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r5,r31,-64
	ctx.r5.s64 = r31.s64 + -64;
	// addi r3,r31,-268
	ctx.r3.s64 = r31.s64 + -268;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// addi r10,r31,-36
	ctx.r10.s64 = r31.s64 + -36;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r9,r30,684
	ctx.r9.s64 = r30.s64 + 684;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// addi r8,r31,-20
	ctx.r8.s64 = r31.s64 + -20;
	// lbz r11,636(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 636);
	// stb r11,-68(r31)
	PPC_STORE_U8(r31.u32 + -68, r11.u8);
	// lbz r11,639(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 639);
	// stb r11,-65(r31)
	PPC_STORE_U8(r31.u32 + -65, r11.u8);
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r11,4(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// lfs f0,648(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 648);
	f0.f64 = double(temp.f32);
	// stfs f0,-56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -56, temp.u32);
	// addi r11,r30,668
	r11.s64 = r30.s64 + 668;
	// lfs f0,652(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 652);
	f0.f64 = double(temp.f32);
	// stfs f0,-52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -52, temp.u32);
	// lbz r7,637(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 637);
	// stb r7,-67(r31)
	PPC_STORE_U8(r31.u32 + -67, ctx.r7.u8);
	// stb r7,-66(r31)
	PPC_STORE_U8(r31.u32 + -66, ctx.r7.u8);
	// lfs f0,656(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 656);
	f0.f64 = double(temp.f32);
	// stfs f0,-48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -48, temp.u32);
	// lfs f0,660(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 660);
	f0.f64 = double(temp.f32);
	// stfs f0,-44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -44, temp.u32);
	// lfs f0,664(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 664);
	f0.f64 = double(temp.f32);
	// stfs f0,-40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -40, temp.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r11.u32);
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// lwz r4,444(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 444);
	// bl 0x82126cc8
	sub_82126CC8(ctx, base);
	// lbz r11,248(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 248);
	// lbz r10,-244(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + -244);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r11,-456(r31)
	PPC_STORE_U8(r31.u32 + -456, r11.u8);
	// bne 0x822157e4
	if (!cr0.eq) goto loc_822157E4;
	// lwz r11,260(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 260);
	// addi r3,r31,-704
	ctx.r3.s64 = r31.s64 + -704;
	// lwz r5,264(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822157E4:
	// lwz r5,604(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 604);
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne 0x822157f8
	if (!cr0.eq) goto loc_822157F8;
	// li r11,0
	r11.s64 = 0;
	// b 0x82215808
	goto loc_82215808;
loc_822157F8:
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82215808:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82215830
	if (!cr6.eq) goto loc_82215830;
	// addic. r11,r31,-704
	xer.ca = r31.u32 > 703;
	r11.s64 = r31.s64 + -704;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r5,r31,-680
	ctx.r5.s64 = r31.s64 + -680;
	// bne 0x82215830
	if (!cr0.eq) goto loc_82215830;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82215830:
	// addi r3,r31,-704
	ctx.r3.s64 = r31.s64 + -704;
	// lfs f1,592(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 592);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82214538
	sub_82214538(ctx, base);
loc_8221583C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_82215844"))) PPC_WEAK_FUNC(sub_82215844);
PPC_FUNC_IMPL(__imp__sub_82215844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215848"))) PPC_WEAK_FUNC(sub_82215848);
PPC_FUNC_IMPL(__imp__sub_82215848) {
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
	// lbz r11,248(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 248);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82215874
	if (cr0.eq) goto loc_82215874;
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8221588c
	goto loc_8221588C;
loc_82215874:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,8748(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8748);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
loc_8221588C:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82213e58
	sub_82213E58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822158A4"))) PPC_WEAK_FUNC(sub_822158A4);
PPC_FUNC_IMPL(__imp__sub_822158A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822158A8"))) PPC_WEAK_FUNC(sub_822158A8);
PPC_FUNC_IMPL(__imp__sub_822158A8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,460(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 460);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82215960
	if (!cr0.eq) goto loc_82215960;
	// lbz r11,638(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 638);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822158e8
	if (cr0.eq) goto loc_822158E8;
	// bl 0x822146e8
	sub_822146E8(ctx, base);
	// b 0x82215960
	goto loc_82215960;
loc_822158E8:
	// lbz r11,248(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 248);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lfs f31,8748(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8748);
	f31.f64 = double(temp.f32);
	// addi r30,r11,-5056
	r30.s64 = r11.s64 + -5056;
	// beq 0x8221590c
	if (cr0.eq) goto loc_8221590C;
	// lfs f30,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f30.f64 = double(temp.f32);
	// b 0x82215918
	goto loc_82215918;
loc_8221590C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// fmuls f30,f1,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64 * f31.f64));
loc_82215918:
	// lbz r11,248(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 248);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82215934
	if (cr0.eq) goto loc_82215934;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,252(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f0,f13
	f31.f64 = double(float(f0.f64 - ctx.f13.f64));
	// b 0x82215940
	goto loc_82215940;
loc_82215934:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82311970
	sub_82311970(ctx, base);
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 * f31.f64));
loc_82215940:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82212a48
	sub_82212A48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82214620
	sub_82214620(ctx, base);
loc_82215960:
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

__attribute__((alias("__imp__sub_82215980"))) PPC_WEAK_FUNC(sub_82215980);
PPC_FUNC_IMPL(__imp__sub_82215980) {
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
	// addi r30,r3,-704
	r30.s64 = ctx.r3.s64 + -704;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,704
	r31.s64 = r30.s64 + 704;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82214830
	sub_82214830(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822159b8
	if (cr0.eq) goto loc_822159B8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_822159B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822159C4"))) PPC_WEAK_FUNC(sub_822159C4);
PPC_FUNC_IMPL(__imp__sub_822159C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822159C8"))) PPC_WEAK_FUNC(sub_822159C8);
PPC_FUNC_IMPL(__imp__sub_822159C8) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,32064(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 32064);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-288
	r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
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
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
	// clrlwi. r11,r9,31
	r11.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13264
	r29.s64 = r11.s64 + 13264;
	// bne 0x82215a38
	if (!cr0.eq) goto loc_82215A38;
	// ori r11,r9,1
	r11.u64 = ctx.r9.u64 | 1;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31784
	ctx.r4.s64 = r11.s64 + 31784;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215A38:
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
	// beq 0x82215a84
	if (cr0.eq) goto loc_82215A84;
	// addi r11,r27,-352
	r11.s64 = r27.s64 + -352;
	// addi r10,r27,-356
	ctx.r10.s64 = r27.s64 + -356;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82215a6c
	if (cr6.lt) goto loc_82215A6C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82215A6C:
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 0, temp.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r10,4(r26)
	PPC_STORE_U32(r26.u32 + 4, ctx.r10.u32);
	// b 0x82216338
	goto loc_82216338;
loc_82215A84:
	// rlwinm. r11,r9,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13260
	r29.s64 = r11.s64 + 13260;
	// bne 0x82215ab0
	if (!cr0.eq) goto loc_82215AB0;
	// ori r11,r9,2
	r11.u64 = ctx.r9.u64 | 2;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31768
	ctx.r4.s64 = r11.s64 + 31768;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215AB0:
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
	// beq 0x82215b0c
	if (cr0.eq) goto loc_82215B0C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-704
	ctx.r4.s64 = r27.s64 + -704;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82212ef8
	sub_82212EF8(ctx, base);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82215b08
	if (cr6.eq) goto loc_82215B08;
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 208);
loc_82215B00:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82216334
	goto loc_82216334;
loc_82215B08:
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215B0C:
	// rlwinm. r11,r9,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13256
	r29.s64 = r11.s64 + 13256;
	// bne 0x82215b38
	if (!cr0.eq) goto loc_82215B38;
	// ori r11,r9,4
	r11.u64 = ctx.r9.u64 | 4;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31752
	ctx.r4.s64 = r11.s64 + 31752;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215B38:
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
	// beq 0x82215b90
	if (cr0.eq) goto loc_82215B90;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-704
	ctx.r4.s64 = r27.s64 + -704;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82213210
	sub_82213210(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82215b8c
	if (cr6.eq) goto loc_82215B8C;
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
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// b 0x82215b00
	goto loc_82215B00;
loc_82215B8C:
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215B90:
	// rlwinm. r11,r9,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13252
	r29.s64 = r11.s64 + 13252;
	// bne 0x82215bbc
	if (!cr0.eq) goto loc_82215BBC;
	// ori r11,r9,8
	r11.u64 = ctx.r9.u64 | 8;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31732
	ctx.r4.s64 = r11.s64 + 31732;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215BBC:
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
	// beq 0x82215c14
	if (cr0.eq) goto loc_82215C14;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-704
	ctx.r4.s64 = r27.s64 + -704;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82213070
	sub_82213070(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82215c10
	if (cr6.eq) goto loc_82215C10;
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
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x82215b00
	goto loc_82215B00;
loc_82215C10:
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215C14:
	// rlwinm. r11,r9,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13248
	r29.s64 = r11.s64 + 13248;
	// bne 0x82215c40
	if (!cr0.eq) goto loc_82215C40;
	// ori r11,r9,16
	r11.u64 = ctx.r9.u64 | 16;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31712
	ctx.r4.s64 = r11.s64 + 31712;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215C40:
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
	// beq 0x82215c98
	if (cr0.eq) goto loc_82215C98;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-704
	ctx.r4.s64 = r27.s64 + -704;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82213388
	sub_82213388(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82215c94
	if (cr6.eq) goto loc_82215C94;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// b 0x82215b00
	goto loc_82215B00;
loc_82215C94:
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215C98:
	// rlwinm. r11,r9,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13244
	r29.s64 = r11.s64 + 13244;
	// bne 0x82215cc4
	if (!cr0.eq) goto loc_82215CC4;
	// ori r11,r9,32
	r11.u64 = ctx.r9.u64 | 32;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31696
	ctx.r4.s64 = r11.s64 + 31696;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215CC4:
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
	// beq 0x82215d1c
	if (cr0.eq) goto loc_82215D1C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-704
	ctx.r4.s64 = r27.s64 + -704;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82213528
	sub_82213528(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82215d18
	if (cr6.eq) goto loc_82215D18;
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
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x82215b00
	goto loc_82215B00;
loc_82215D18:
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215D1C:
	// rlwinm. r11,r9,0,25,25
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13240
	r29.s64 = r11.s64 + 13240;
	// bne 0x82215d48
	if (!cr0.eq) goto loc_82215D48;
	// ori r11,r9,64
	r11.u64 = ctx.r9.u64 | 64;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31680
	ctx.r4.s64 = r11.s64 + 31680;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215D48:
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
	// beq 0x82215da0
	if (cr0.eq) goto loc_82215DA0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-704
	ctx.r4.s64 = r27.s64 + -704;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82213590
	sub_82213590(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82215d9c
	if (cr6.eq) goto loc_82215D9C;
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// b 0x82215b00
	goto loc_82215B00;
loc_82215D9C:
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215DA0:
	// rlwinm. r11,r9,0,24,24
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13236
	r29.s64 = r11.s64 + 13236;
	// bne 0x82215dcc
	if (!cr0.eq) goto loc_82215DCC;
	// ori r11,r9,128
	r11.u64 = ctx.r9.u64 | 128;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31668
	ctx.r4.s64 = r11.s64 + 31668;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215DCC:
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
	// beq 0x82215e24
	if (cr0.eq) goto loc_82215E24;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-704
	ctx.r4.s64 = r27.s64 + -704;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82213650
	sub_82213650(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82215e20
	if (cr6.eq) goto loc_82215E20;
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
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// b 0x82215b00
	goto loc_82215B00;
loc_82215E20:
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215E24:
	// rlwinm. r11,r9,0,23,23
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13232
	r29.s64 = r11.s64 + 13232;
	// bne 0x82215e50
	if (!cr0.eq) goto loc_82215E50;
	// ori r11,r9,256
	r11.u64 = ctx.r9.u64 | 256;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31656
	ctx.r4.s64 = r11.s64 + 31656;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215E50:
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
	// beq 0x82215ea8
	if (cr0.eq) goto loc_82215EA8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-704
	ctx.r4.s64 = r27.s64 + -704;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822136b8
	sub_822136B8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82215ea4
	if (cr6.eq) goto loc_82215EA4;
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
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// b 0x82215b00
	goto loc_82215B00;
loc_82215EA4:
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215EA8:
	// rlwinm. r11,r9,0,22,22
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13228
	r29.s64 = r11.s64 + 13228;
	// bne 0x82215ed4
	if (!cr0.eq) goto loc_82215ED4;
	// ori r11,r9,512
	r11.u64 = ctx.r9.u64 | 512;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31640
	ctx.r4.s64 = r11.s64 + 31640;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215ED4:
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
	// beq 0x82215f2c
	if (cr0.eq) goto loc_82215F2C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-704
	ctx.r4.s64 = r27.s64 + -704;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82213720
	sub_82213720(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82215f28
	if (cr6.eq) goto loc_82215F28;
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
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x82215b00
	goto loc_82215B00;
loc_82215F28:
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215F2C:
	// rlwinm. r11,r9,0,21,21
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13224
	r29.s64 = r11.s64 + 13224;
	// bne 0x82215f58
	if (!cr0.eq) goto loc_82215F58;
	// ori r11,r9,1024
	r11.u64 = ctx.r9.u64 | 1024;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-15300
	ctx.r4.s64 = r11.s64 + -15300;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215F58:
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
	// beq 0x82215fb0
	if (cr0.eq) goto loc_82215FB0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-704
	ctx.r4.s64 = r27.s64 + -704;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x822152d8
	sub_822152D8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82215fac
	if (cr6.eq) goto loc_82215FAC;
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
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x82215b00
	goto loc_82215B00;
loc_82215FAC:
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215FB0:
	// rlwinm. r11,r9,0,20,20
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13220
	r29.s64 = r11.s64 + 13220;
	// bne 0x82215fdc
	if (!cr0.eq) goto loc_82215FDC;
	// ori r11,r9,2048
	r11.u64 = ctx.r9.u64 | 2048;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,12728
	ctx.r4.s64 = r11.s64 + 12728;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215FDC:
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
	// beq 0x82216034
	if (cr0.eq) goto loc_82216034;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-704
	ctx.r4.s64 = r27.s64 + -704;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82213788
	sub_82213788(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82216030
	if (cr6.eq) goto loc_82216030;
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
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x82215b00
	goto loc_82215B00;
loc_82216030:
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82216034:
	// rlwinm. r11,r9,0,19,19
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13216
	r29.s64 = r11.s64 + 13216;
	// bne 0x82216060
	if (!cr0.eq) goto loc_82216060;
	// ori r11,r9,4096
	r11.u64 = ctx.r9.u64 | 4096;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,12664
	ctx.r4.s64 = r11.s64 + 12664;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82216060:
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
	// beq 0x8221609c
	if (cr0.eq) goto loc_8221609C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x821bc5e0
	sub_821BC5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r27,-704
	ctx.r3.s64 = r27.s64 + -704;
	// bl 0x82215258
	sub_82215258(ctx, base);
loc_82216094:
	// stw r25,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r25.u32);
	// b 0x82216330
	goto loc_82216330;
loc_8221609C:
	// rlwinm. r11,r9,0,18,18
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13212
	r29.s64 = r11.s64 + 13212;
	// bne 0x822160c8
	if (!cr0.eq) goto loc_822160C8;
	// ori r11,r9,8192
	r11.u64 = ctx.r9.u64 | 8192;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31620
	ctx.r4.s64 = r11.s64 + 31620;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_822160C8:
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
	// beq 0x8221611c
	if (cr0.eq) goto loc_8221611C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-704
	ctx.r4.s64 = r27.s64 + -704;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x822138a8
	sub_822138A8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8221611c
	if (cr6.eq) goto loc_8221611C;
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
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x82215b00
	goto loc_82215B00;
loc_8221611C:
	// rlwinm. r11,r9,0,17,17
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13208
	r29.s64 = r11.s64 + 13208;
	// bne 0x82216148
	if (!cr0.eq) goto loc_82216148;
	// ori r11,r9,16384
	r11.u64 = ctx.r9.u64 | 16384;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31604
	ctx.r4.s64 = r11.s64 + 31604;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82216148:
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
	// beq 0x82216178
	if (cr0.eq) goto loc_82216178;
	// lwz r11,-444(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -444);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r25,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r25.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// b 0x82216338
	goto loc_82216338;
loc_82216178:
	// rlwinm. r11,r9,0,16,16
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13204
	r29.s64 = r11.s64 + 13204;
	// bne 0x822161a0
	if (!cr0.eq) goto loc_822161A0;
	// ori r11,r9,32768
	r11.u64 = ctx.r9.u64 | 32768;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31584
	ctx.r4.s64 = r11.s64 + 31584;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822161A0:
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
	// beq 0x822161dc
	if (cr0.eq) goto loc_822161DC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82150450
	sub_82150450(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r27,-704
	ctx.r3.s64 = r27.s64 + -704;
	// lfs f1,-112(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + -112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82214538
	sub_82214538(ctx, base);
	// b 0x82216094
	goto loc_82216094;
loc_822161DC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-460
	ctx.r4.s64 = r27.s64 + -460;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x821b3888
	sub_821B3888(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8221621c
	if (cr6.eq) goto loc_8221621C;
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
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// b 0x82215b00
	goto loc_82215B00;
loc_8221621C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-684
	ctx.r4.s64 = r27.s64 + -684;
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x821e9d00
	sub_821E9D00(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8221625c
	if (cr6.eq) goto loc_8221625C;
	// addi r4,r31,168
	ctx.r4.s64 = r31.s64 + 168;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// b 0x82215b00
	goto loc_82215B00;
loc_8221625C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-496
	ctx.r4.s64 = r27.s64 + -496;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x821b1158
	sub_821B1158(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8221629c
	if (cr6.eq) goto loc_8221629C;
	// addi r4,r31,184
	ctx.r4.s64 = r31.s64 + 184;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// b 0x82215b00
	goto loc_82215B00;
loc_8221629C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-680
	ctx.r4.s64 = r27.s64 + -680;
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x821b3e18
	sub_821B3E18(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822162dc
	if (cr6.eq) goto loc_822162DC;
	// addi r4,r31,200
	ctx.r4.s64 = r31.s64 + 200;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// b 0x82215b00
	goto loc_82215B00;
loc_822162DC:
	// lwz r11,-700(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -700);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r4,r11,-700
	ctx.r4.s64 = r11.s64 + -700;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82216328
	if (cr6.eq) goto loc_82216328;
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// b 0x82215b00
	goto loc_82215B00;
loc_82216328:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
loc_82216330:
	// stw r25,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r25.u32);
loc_82216334:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82216338:
	// addi r1,r31,288
	ctx.r1.s64 = r31.s64 + 288;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822159D0"))) PPC_WEAK_FUNC(sub_822159D0);
PPC_FUNC_IMPL(__imp__sub_822159D0) {
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
	// addi r31,r1,-288
	r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
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
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
	// clrlwi. r11,r9,31
	r11.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13264
	r29.s64 = r11.s64 + 13264;
	// bne 0x82215a38
	if (!cr0.eq) goto loc_82215A38;
	// ori r11,r9,1
	r11.u64 = ctx.r9.u64 | 1;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31784
	ctx.r4.s64 = r11.s64 + 31784;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215A38:
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
	// beq 0x82215a84
	if (cr0.eq) goto loc_82215A84;
	// addi r11,r27,-352
	r11.s64 = r27.s64 + -352;
	// addi r10,r27,-356
	ctx.r10.s64 = r27.s64 + -356;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82215a6c
	if (cr6.lt) goto loc_82215A6C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82215A6C:
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 0, temp.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r10,4(r26)
	PPC_STORE_U32(r26.u32 + 4, ctx.r10.u32);
	// b 0x82216338
	goto loc_82216338;
loc_82215A84:
	// rlwinm. r11,r9,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13260
	r29.s64 = r11.s64 + 13260;
	// bne 0x82215ab0
	if (!cr0.eq) goto loc_82215AB0;
	// ori r11,r9,2
	r11.u64 = ctx.r9.u64 | 2;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31768
	ctx.r4.s64 = r11.s64 + 31768;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215AB0:
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
	// beq 0x82215b0c
	if (cr0.eq) goto loc_82215B0C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-704
	ctx.r4.s64 = r27.s64 + -704;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82212ef8
	sub_82212EF8(ctx, base);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82215b08
	if (cr6.eq) goto loc_82215B08;
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 208);
loc_82215B00:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82216334
	goto loc_82216334;
loc_82215B08:
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215B0C:
	// rlwinm. r11,r9,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13256
	r29.s64 = r11.s64 + 13256;
	// bne 0x82215b38
	if (!cr0.eq) goto loc_82215B38;
	// ori r11,r9,4
	r11.u64 = ctx.r9.u64 | 4;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31752
	ctx.r4.s64 = r11.s64 + 31752;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215B38:
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
	// beq 0x82215b90
	if (cr0.eq) goto loc_82215B90;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-704
	ctx.r4.s64 = r27.s64 + -704;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82213210
	sub_82213210(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82215b8c
	if (cr6.eq) goto loc_82215B8C;
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
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// b 0x82215b00
	goto loc_82215B00;
loc_82215B8C:
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215B90:
	// rlwinm. r11,r9,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13252
	r29.s64 = r11.s64 + 13252;
	// bne 0x82215bbc
	if (!cr0.eq) goto loc_82215BBC;
	// ori r11,r9,8
	r11.u64 = ctx.r9.u64 | 8;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31732
	ctx.r4.s64 = r11.s64 + 31732;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215BBC:
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
	// beq 0x82215c14
	if (cr0.eq) goto loc_82215C14;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-704
	ctx.r4.s64 = r27.s64 + -704;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82213070
	sub_82213070(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82215c10
	if (cr6.eq) goto loc_82215C10;
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
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x82215b00
	goto loc_82215B00;
loc_82215C10:
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215C14:
	// rlwinm. r11,r9,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13248
	r29.s64 = r11.s64 + 13248;
	// bne 0x82215c40
	if (!cr0.eq) goto loc_82215C40;
	// ori r11,r9,16
	r11.u64 = ctx.r9.u64 | 16;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31712
	ctx.r4.s64 = r11.s64 + 31712;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215C40:
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
	// beq 0x82215c98
	if (cr0.eq) goto loc_82215C98;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-704
	ctx.r4.s64 = r27.s64 + -704;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82213388
	sub_82213388(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82215c94
	if (cr6.eq) goto loc_82215C94;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// b 0x82215b00
	goto loc_82215B00;
loc_82215C94:
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215C98:
	// rlwinm. r11,r9,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13244
	r29.s64 = r11.s64 + 13244;
	// bne 0x82215cc4
	if (!cr0.eq) goto loc_82215CC4;
	// ori r11,r9,32
	r11.u64 = ctx.r9.u64 | 32;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31696
	ctx.r4.s64 = r11.s64 + 31696;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215CC4:
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
	// beq 0x82215d1c
	if (cr0.eq) goto loc_82215D1C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-704
	ctx.r4.s64 = r27.s64 + -704;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82213528
	sub_82213528(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82215d18
	if (cr6.eq) goto loc_82215D18;
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
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x82215b00
	goto loc_82215B00;
loc_82215D18:
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215D1C:
	// rlwinm. r11,r9,0,25,25
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13240
	r29.s64 = r11.s64 + 13240;
	// bne 0x82215d48
	if (!cr0.eq) goto loc_82215D48;
	// ori r11,r9,64
	r11.u64 = ctx.r9.u64 | 64;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31680
	ctx.r4.s64 = r11.s64 + 31680;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215D48:
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
	// beq 0x82215da0
	if (cr0.eq) goto loc_82215DA0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-704
	ctx.r4.s64 = r27.s64 + -704;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82213590
	sub_82213590(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82215d9c
	if (cr6.eq) goto loc_82215D9C;
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// b 0x82215b00
	goto loc_82215B00;
loc_82215D9C:
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215DA0:
	// rlwinm. r11,r9,0,24,24
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13236
	r29.s64 = r11.s64 + 13236;
	// bne 0x82215dcc
	if (!cr0.eq) goto loc_82215DCC;
	// ori r11,r9,128
	r11.u64 = ctx.r9.u64 | 128;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31668
	ctx.r4.s64 = r11.s64 + 31668;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215DCC:
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
	// beq 0x82215e24
	if (cr0.eq) goto loc_82215E24;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-704
	ctx.r4.s64 = r27.s64 + -704;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82213650
	sub_82213650(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82215e20
	if (cr6.eq) goto loc_82215E20;
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
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// b 0x82215b00
	goto loc_82215B00;
loc_82215E20:
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215E24:
	// rlwinm. r11,r9,0,23,23
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13232
	r29.s64 = r11.s64 + 13232;
	// bne 0x82215e50
	if (!cr0.eq) goto loc_82215E50;
	// ori r11,r9,256
	r11.u64 = ctx.r9.u64 | 256;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31656
	ctx.r4.s64 = r11.s64 + 31656;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215E50:
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
	// beq 0x82215ea8
	if (cr0.eq) goto loc_82215EA8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-704
	ctx.r4.s64 = r27.s64 + -704;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822136b8
	sub_822136B8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82215ea4
	if (cr6.eq) goto loc_82215EA4;
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
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// b 0x82215b00
	goto loc_82215B00;
loc_82215EA4:
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215EA8:
	// rlwinm. r11,r9,0,22,22
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13228
	r29.s64 = r11.s64 + 13228;
	// bne 0x82215ed4
	if (!cr0.eq) goto loc_82215ED4;
	// ori r11,r9,512
	r11.u64 = ctx.r9.u64 | 512;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31640
	ctx.r4.s64 = r11.s64 + 31640;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215ED4:
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
	// beq 0x82215f2c
	if (cr0.eq) goto loc_82215F2C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-704
	ctx.r4.s64 = r27.s64 + -704;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82213720
	sub_82213720(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82215f28
	if (cr6.eq) goto loc_82215F28;
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
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x82215b00
	goto loc_82215B00;
loc_82215F28:
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215F2C:
	// rlwinm. r11,r9,0,21,21
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13224
	r29.s64 = r11.s64 + 13224;
	// bne 0x82215f58
	if (!cr0.eq) goto loc_82215F58;
	// ori r11,r9,1024
	r11.u64 = ctx.r9.u64 | 1024;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-15300
	ctx.r4.s64 = r11.s64 + -15300;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215F58:
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
	// beq 0x82215fb0
	if (cr0.eq) goto loc_82215FB0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-704
	ctx.r4.s64 = r27.s64 + -704;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x822152d8
	sub_822152D8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82215fac
	if (cr6.eq) goto loc_82215FAC;
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
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x82215b00
	goto loc_82215B00;
loc_82215FAC:
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215FB0:
	// rlwinm. r11,r9,0,20,20
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13220
	r29.s64 = r11.s64 + 13220;
	// bne 0x82215fdc
	if (!cr0.eq) goto loc_82215FDC;
	// ori r11,r9,2048
	r11.u64 = ctx.r9.u64 | 2048;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,12728
	ctx.r4.s64 = r11.s64 + 12728;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82215FDC:
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
	// beq 0x82216034
	if (cr0.eq) goto loc_82216034;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-704
	ctx.r4.s64 = r27.s64 + -704;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82213788
	sub_82213788(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82216030
	if (cr6.eq) goto loc_82216030;
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
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x82215b00
	goto loc_82215B00;
loc_82216030:
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82216034:
	// rlwinm. r11,r9,0,19,19
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13216
	r29.s64 = r11.s64 + 13216;
	// bne 0x82216060
	if (!cr0.eq) goto loc_82216060;
	// ori r11,r9,4096
	r11.u64 = ctx.r9.u64 | 4096;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,12664
	ctx.r4.s64 = r11.s64 + 12664;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82216060:
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
	// beq 0x8221609c
	if (cr0.eq) goto loc_8221609C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x821bc5e0
	sub_821BC5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r27,-704
	ctx.r3.s64 = r27.s64 + -704;
	// bl 0x82215258
	sub_82215258(ctx, base);
loc_82216094:
	// stw r25,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r25.u32);
	// b 0x82216330
	goto loc_82216330;
loc_8221609C:
	// rlwinm. r11,r9,0,18,18
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13212
	r29.s64 = r11.s64 + 13212;
	// bne 0x822160c8
	if (!cr0.eq) goto loc_822160C8;
	// ori r11,r9,8192
	r11.u64 = ctx.r9.u64 | 8192;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31620
	ctx.r4.s64 = r11.s64 + 31620;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_822160C8:
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
	// beq 0x8221611c
	if (cr0.eq) goto loc_8221611C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-704
	ctx.r4.s64 = r27.s64 + -704;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x822138a8
	sub_822138A8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8221611c
	if (cr6.eq) goto loc_8221611C;
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
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x82215b00
	goto loc_82215B00;
loc_8221611C:
	// rlwinm. r11,r9,0,17,17
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13208
	r29.s64 = r11.s64 + 13208;
	// bne 0x82216148
	if (!cr0.eq) goto loc_82216148;
	// ori r11,r9,16384
	r11.u64 = ctx.r9.u64 | 16384;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31604
	ctx.r4.s64 = r11.s64 + 31604;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r9,13268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 13268);
loc_82216148:
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
	// beq 0x82216178
	if (cr0.eq) goto loc_82216178;
	// lwz r11,-444(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -444);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r25,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r25.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// b 0x82216338
	goto loc_82216338;
loc_82216178:
	// rlwinm. r11,r9,0,16,16
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,13204
	r29.s64 = r11.s64 + 13204;
	// bne 0x822161a0
	if (!cr0.eq) goto loc_822161A0;
	// ori r11,r9,32768
	r11.u64 = ctx.r9.u64 | 32768;
	// stw r11,13268(r30)
	PPC_STORE_U32(r30.u32 + 13268, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31584
	ctx.r4.s64 = r11.s64 + 31584;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822161A0:
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
	// beq 0x822161dc
	if (cr0.eq) goto loc_822161DC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82150450
	sub_82150450(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r27,-704
	ctx.r3.s64 = r27.s64 + -704;
	// lfs f1,-112(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + -112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82214538
	sub_82214538(ctx, base);
	// b 0x82216094
	goto loc_82216094;
loc_822161DC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-460
	ctx.r4.s64 = r27.s64 + -460;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x821b3888
	sub_821B3888(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8221621c
	if (cr6.eq) goto loc_8221621C;
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
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// b 0x82215b00
	goto loc_82215B00;
loc_8221621C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-684
	ctx.r4.s64 = r27.s64 + -684;
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x821e9d00
	sub_821E9D00(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8221625c
	if (cr6.eq) goto loc_8221625C;
	// addi r4,r31,168
	ctx.r4.s64 = r31.s64 + 168;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// b 0x82215b00
	goto loc_82215B00;
loc_8221625C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-496
	ctx.r4.s64 = r27.s64 + -496;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x821b1158
	sub_821B1158(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8221629c
	if (cr6.eq) goto loc_8221629C;
	// addi r4,r31,184
	ctx.r4.s64 = r31.s64 + 184;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// b 0x82215b00
	goto loc_82215B00;
loc_8221629C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-680
	ctx.r4.s64 = r27.s64 + -680;
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x821b3e18
	sub_821B3E18(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822162dc
	if (cr6.eq) goto loc_822162DC;
	// addi r4,r31,200
	ctx.r4.s64 = r31.s64 + 200;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// b 0x82215b00
	goto loc_82215B00;
loc_822162DC:
	// lwz r11,-700(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -700);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r4,r11,-700
	ctx.r4.s64 = r11.s64 + -700;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82216328
	if (cr6.eq) goto loc_82216328;
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82216334
	if (cr0.eq) goto loc_82216334;
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// b 0x82215b00
	goto loc_82215B00;
loc_82216328:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
loc_82216330:
	// stw r25,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r25.u32);
loc_82216334:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82216338:
	// addi r1,r31,288
	ctx.r1.s64 = r31.s64 + 288;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82216340"))) PPC_WEAK_FUNC(sub_82216340);
PPC_FUNC_IMPL(__imp__sub_82216340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13268
	r11.s64 = r11.s64 + 13268;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13268
	ctx.r10.s64 = ctx.r10.s64 + 13268;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82216368"))) PPC_WEAK_FUNC(sub_82216368);
PPC_FUNC_IMPL(__imp__sub_82216368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13268
	r11.s64 = r11.s64 + 13268;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13268
	ctx.r10.s64 = ctx.r10.s64 + 13268;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82216390"))) PPC_WEAK_FUNC(sub_82216390);
PPC_FUNC_IMPL(__imp__sub_82216390) {
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
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
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

__attribute__((alias("__imp__sub_822163B8"))) PPC_WEAK_FUNC(sub_822163B8);
PPC_FUNC_IMPL(__imp__sub_822163B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13268
	r11.s64 = r11.s64 + 13268;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13268
	ctx.r10.s64 = ctx.r10.s64 + 13268;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822163E0"))) PPC_WEAK_FUNC(sub_822163E0);
PPC_FUNC_IMPL(__imp__sub_822163E0) {
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

__attribute__((alias("__imp__sub_82216408"))) PPC_WEAK_FUNC(sub_82216408);
PPC_FUNC_IMPL(__imp__sub_82216408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13268
	r11.s64 = r11.s64 + 13268;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13268
	ctx.r10.s64 = ctx.r10.s64 + 13268;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82216430"))) PPC_WEAK_FUNC(sub_82216430);
PPC_FUNC_IMPL(__imp__sub_82216430) {
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

__attribute__((alias("__imp__sub_82216458"))) PPC_WEAK_FUNC(sub_82216458);
PPC_FUNC_IMPL(__imp__sub_82216458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13268
	r11.s64 = r11.s64 + 13268;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13268
	ctx.r10.s64 = ctx.r10.s64 + 13268;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82216480"))) PPC_WEAK_FUNC(sub_82216480);
PPC_FUNC_IMPL(__imp__sub_82216480) {
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
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
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

__attribute__((alias("__imp__sub_822164A8"))) PPC_WEAK_FUNC(sub_822164A8);
PPC_FUNC_IMPL(__imp__sub_822164A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13268
	r11.s64 = r11.s64 + 13268;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13268
	ctx.r10.s64 = ctx.r10.s64 + 13268;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822164D0"))) PPC_WEAK_FUNC(sub_822164D0);
PPC_FUNC_IMPL(__imp__sub_822164D0) {
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

__attribute__((alias("__imp__sub_822164F8"))) PPC_WEAK_FUNC(sub_822164F8);
PPC_FUNC_IMPL(__imp__sub_822164F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13268
	r11.s64 = r11.s64 + 13268;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13268
	ctx.r10.s64 = ctx.r10.s64 + 13268;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82216520"))) PPC_WEAK_FUNC(sub_82216520);
PPC_FUNC_IMPL(__imp__sub_82216520) {
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
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
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

__attribute__((alias("__imp__sub_82216548"))) PPC_WEAK_FUNC(sub_82216548);
PPC_FUNC_IMPL(__imp__sub_82216548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13268
	r11.s64 = r11.s64 + 13268;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13268
	ctx.r10.s64 = ctx.r10.s64 + 13268;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82216570"))) PPC_WEAK_FUNC(sub_82216570);
PPC_FUNC_IMPL(__imp__sub_82216570) {
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

__attribute__((alias("__imp__sub_82216598"))) PPC_WEAK_FUNC(sub_82216598);
PPC_FUNC_IMPL(__imp__sub_82216598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13268
	r11.s64 = r11.s64 + 13268;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13268
	ctx.r10.s64 = ctx.r10.s64 + 13268;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822165C0"))) PPC_WEAK_FUNC(sub_822165C0);
PPC_FUNC_IMPL(__imp__sub_822165C0) {
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

__attribute__((alias("__imp__sub_822165E8"))) PPC_WEAK_FUNC(sub_822165E8);
PPC_FUNC_IMPL(__imp__sub_822165E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13268
	r11.s64 = r11.s64 + 13268;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13268
	ctx.r10.s64 = ctx.r10.s64 + 13268;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82216610"))) PPC_WEAK_FUNC(sub_82216610);
PPC_FUNC_IMPL(__imp__sub_82216610) {
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

__attribute__((alias("__imp__sub_82216638"))) PPC_WEAK_FUNC(sub_82216638);
PPC_FUNC_IMPL(__imp__sub_82216638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13268
	r11.s64 = r11.s64 + 13268;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,22,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13268
	ctx.r10.s64 = ctx.r10.s64 + 13268;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82216660"))) PPC_WEAK_FUNC(sub_82216660);
PPC_FUNC_IMPL(__imp__sub_82216660) {
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

__attribute__((alias("__imp__sub_82216688"))) PPC_WEAK_FUNC(sub_82216688);
PPC_FUNC_IMPL(__imp__sub_82216688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13268
	r11.s64 = r11.s64 + 13268;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,21,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13268
	ctx.r10.s64 = ctx.r10.s64 + 13268;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822166B0"))) PPC_WEAK_FUNC(sub_822166B0);
PPC_FUNC_IMPL(__imp__sub_822166B0) {
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

__attribute__((alias("__imp__sub_822166D8"))) PPC_WEAK_FUNC(sub_822166D8);
PPC_FUNC_IMPL(__imp__sub_822166D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13268
	r11.s64 = r11.s64 + 13268;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,20,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13268
	ctx.r10.s64 = ctx.r10.s64 + 13268;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82216700"))) PPC_WEAK_FUNC(sub_82216700);
PPC_FUNC_IMPL(__imp__sub_82216700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13268
	r11.s64 = r11.s64 + 13268;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,19,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13268
	ctx.r10.s64 = ctx.r10.s64 + 13268;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82216728"))) PPC_WEAK_FUNC(sub_82216728);
PPC_FUNC_IMPL(__imp__sub_82216728) {
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

__attribute__((alias("__imp__sub_82216750"))) PPC_WEAK_FUNC(sub_82216750);
PPC_FUNC_IMPL(__imp__sub_82216750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13268
	r11.s64 = r11.s64 + 13268;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,18,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13268
	ctx.r10.s64 = ctx.r10.s64 + 13268;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82216778"))) PPC_WEAK_FUNC(sub_82216778);
PPC_FUNC_IMPL(__imp__sub_82216778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13268
	r11.s64 = r11.s64 + 13268;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,17,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13268
	ctx.r10.s64 = ctx.r10.s64 + 13268;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822167A0"))) PPC_WEAK_FUNC(sub_822167A0);
PPC_FUNC_IMPL(__imp__sub_822167A0) {
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

__attribute__((alias("__imp__sub_822167C8"))) PPC_WEAK_FUNC(sub_822167C8);
PPC_FUNC_IMPL(__imp__sub_822167C8) {
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
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
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

__attribute__((alias("__imp__sub_822167F0"))) PPC_WEAK_FUNC(sub_822167F0);
PPC_FUNC_IMPL(__imp__sub_822167F0) {
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
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
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

__attribute__((alias("__imp__sub_82216818"))) PPC_WEAK_FUNC(sub_82216818);
PPC_FUNC_IMPL(__imp__sub_82216818) {
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
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
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

__attribute__((alias("__imp__sub_82216840"))) PPC_WEAK_FUNC(sub_82216840);
PPC_FUNC_IMPL(__imp__sub_82216840) {
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
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
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

__attribute__((alias("__imp__sub_82216868"))) PPC_WEAK_FUNC(sub_82216868);
PPC_FUNC_IMPL(__imp__sub_82216868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x822153c0
	sub_822153C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82216874"))) PPC_WEAK_FUNC(sub_82216874);
PPC_FUNC_IMPL(__imp__sub_82216874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82216878"))) PPC_WEAK_FUNC(sub_82216878);
PPC_FUNC_IMPL(__imp__sub_82216878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x822159d0
	sub_822159D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82216884"))) PPC_WEAK_FUNC(sub_82216884);
PPC_FUNC_IMPL(__imp__sub_82216884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82216888"))) PPC_WEAK_FUNC(sub_82216888);
PPC_FUNC_IMPL(__imp__sub_82216888) {
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
	// lbz r11,44(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 44);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822168b8
	if (cr0.eq) goto loc_822168B8;
	// addi r3,r31,-204
	ctx.r3.s64 = r31.s64 + -204;
	// bl 0x822128d8
	sub_822128D8(ctx, base);
	// b 0x822168e0
	goto loc_822168E0;
loc_822168B8:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x822168d8
	if (!cr6.gt) goto loc_822168D8;
	// addi r30,r31,-204
	r30.s64 = r31.s64 + -204;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822128d8
	sub_822128D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822158a8
	sub_822158A8(ctx, base);
loc_822168D8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
loc_822168E0:
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

__attribute__((alias("__imp__sub_822168F8"))) PPC_WEAK_FUNC(sub_822168F8);
PPC_FUNC_IMPL(__imp__sub_822168F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lbz r11,248(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 248);
	// stfs f31,8(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8221692c
	if (cr0.eq) goto loc_8221692C;
	// bl 0x822158a8
	sub_822158A8(ctx, base);
	// stfs f31,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 252, temp.u32);
loc_8221692C:
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

__attribute__((alias("__imp__sub_82216944"))) PPC_WEAK_FUNC(sub_82216944);
PPC_FUNC_IMPL(__imp__sub_82216944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82216948"))) PPC_WEAK_FUNC(sub_82216948);
PPC_FUNC_IMPL(__imp__sub_82216948) {
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
	// lbz r11,232(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 232);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822169a4
	if (!cr0.eq) goto loc_822169A4;
	// lbz r11,196(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 196);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82216998
	if (cr0.eq) goto loc_82216998;
	// lwz r11,240(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82216998
	if (!cr6.eq) goto loc_82216998;
	// addi r30,r31,-16
	r30.s64 = r31.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822128d8
	sub_822128D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822158a8
	sub_822158A8(ctx, base);
loc_82216998:
	// lwz r11,240(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r11.u32);
loc_822169A4:
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

__attribute__((alias("__imp__sub_822169BC"))) PPC_WEAK_FUNC(sub_822169BC);
PPC_FUNC_IMPL(__imp__sub_822169BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822169C0"))) PPC_WEAK_FUNC(sub_822169C0);
PPC_FUNC_IMPL(__imp__sub_822169C0) {
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
	// b 0x822169ec
	goto loc_822169EC;
loc_822169E0:
	// bge cr6,0x82216a08
	if (!cr6.lt) goto loc_82216A08;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_822169EC:
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
	// bne 0x822169e0
	if (!cr0.eq) goto loc_822169E0;
loc_82216A08:
	// bne cr6,0x82216a2c
	if (!cr6.eq) goto loc_82216A2C;
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
	// bl 0x82215328
	sub_82215328(ctx, base);
	// b 0x82216a54
	goto loc_82216A54;
loc_82216A2C:
	// subf. r30,r11,r4
	r30.s64 = ctx.r4.s64 - r11.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82216a54
	if (cr0.eq) goto loc_82216A54;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
loc_82216A38:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821be1b8
	sub_821BE1B8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82216a38
	if (!cr0.eq) goto loc_82216A38;
loc_82216A54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82216A5C"))) PPC_WEAK_FUNC(sub_82216A5C);
PPC_FUNC_IMPL(__imp__sub_82216A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82216A60"))) PPC_WEAK_FUNC(sub_82216A60);
PPC_FUNC_IMPL(__imp__sub_82216A60) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822169c0
	sub_822169C0(ctx, base);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82216aa4
	goto loc_82216AA4;
loc_82216A98:
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// bl 0x82212390
	sub_82212390(ctx, base);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82216AA4:
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82216a98
	if (!cr0.eq) goto loc_82216A98;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82216AC8"))) PPC_WEAK_FUNC(sub_82216AC8);
PPC_FUNC_IMPL(__imp__sub_82216AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,32648(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 32648);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-464
	r31.s64 = ctx.r1.s64 + -464;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r27,r11,13272
	r27.s64 = r11.s64 + 13272;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r10,14464(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14464);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82217274
	if (cr6.gt) goto loc_82217274;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(r11.s32, 22, xer);
	// ble cr6,0x82216b38
	if (!cr6.gt) goto loc_82216B38;
	// lwz r11,-700(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-700
	ctx.r3.s64 = r11.s64 + -700;
	// bl 0x82315350
	sub_82315350(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_82216B38:
	// cmpwi cr6,r11,27
	cr6.compare<int32_t>(r11.s32, 27, xer);
	// ble cr6,0x82216b5c
	if (!cr6.gt) goto loc_82216B5C;
	// lwz r11,-700(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-700
	ctx.r3.s64 = r11.s64 + -700;
	// bl 0x82315350
	sub_82315350(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_82216B5C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82216b88
	if (!cr6.gt) goto loc_82216B88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-684
	ctx.r3.s64 = r30.s64 + -684;
	// bl 0x821e96c0
	sub_821E96C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-496
	ctx.r3.s64 = r30.s64 + -496;
	// bl 0x821b0a28
	sub_821B0A28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-460
	ctx.r3.s64 = r30.s64 + -460;
	// bl 0x821b36c0
	sub_821B36C0(ctx, base);
loc_82216B88:
	// addi r4,r30,-420
	ctx.r4.s64 = r30.s64 + -420;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821bbcb0
	sub_821BBCB0(ctx, base);
	// addi r4,r30,-412
	ctx.r4.s64 = r30.s64 + -412;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r30,-396
	ctx.r4.s64 = r30.s64 + -396;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r30,-380
	ctx.r4.s64 = r30.s64 + -380;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821bbcb0
	sub_821BBCB0(ctx, base);
	// addi r4,r30,-372
	ctx.r4.s64 = r30.s64 + -372;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821bbcb0
	sub_821BBCB0(ctx, base);
	// addi r4,r30,-364
	ctx.r4.s64 = r30.s64 + -364;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821bbcb0
	sub_821BBCB0(ctx, base);
	// addi r4,r30,-356
	ctx.r4.s64 = r30.s64 + -356;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821bbcb0
	sub_821BBCB0(ctx, base);
	// addi r4,r30,-348
	ctx.r4.s64 = r30.s64 + -348;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821bbcb0
	sub_821BBCB0(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// ble cr6,0x82216c00
	if (!cr6.gt) goto loc_82216C00;
	// addi r4,r30,-340
	ctx.r4.s64 = r30.s64 + -340;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821bbcb0
	sub_821BBCB0(ctx, base);
loc_82216C00:
	// addi r4,r30,-332
	ctx.r4.s64 = r30.s64 + -332;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// addi r4,r30,-316
	ctx.r4.s64 = r30.s64 + -316;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// addi r4,r30,-300
	ctx.r4.s64 = r30.s64 + -300;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// addi r4,r30,-284
	ctx.r4.s64 = r30.s64 + -284;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(r11.s32, 25, xer);
	// ble cr6,0x82216c50
	if (!cr6.gt) goto loc_82216C50;
	// addi r4,r30,-96
	ctx.r4.s64 = r30.s64 + -96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// b 0x82216e90
	goto loc_82216E90;
loc_82216C50:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82216e5c
	if (!cr6.gt) goto loc_82216E5C;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// ble cr6,0x82216c80
	if (!cr6.gt) goto loc_82216C80;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// bl 0x82212390
	sub_82212390(ctx, base);
	// b 0x82216ce0
	goto loc_82216CE0;
loc_82216C80:
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,100
	ctx.r4.s64 = r31.s64 + 100;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lfs f11,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,104(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f0,100(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 100);
	f0.f64 = double(temp.f32);
	// lfs f13,164(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,160(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	f0.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fnmadds f0,f11,f10,f0
	f0.f64 = double(float(-(ctx.f11.f64 * ctx.f10.f64 + f0.f64)));
	// stfs f0,108(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
loc_82216CE0:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82216e90
	if (cr0.eq) goto loc_82216E90;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r28,r11,15600
	r28.s64 = r11.s64 + 15600;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r26,13(r28)
	r26.u64 = PPC_LOAD_U8(r28.u32 + 13);
	// bl 0x823599f0
	sub_823599F0(ctx, base);
	// lwz r11,-700(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r3,-676(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -676);
	// bl 0x82275ef0
	sub_82275EF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,32616
	r11.s64 = r11.s64 + 32616;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// lwz r11,-700(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r3,-672(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -672);
	// bl 0x821a3888
	sub_821A3888(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,-96
	ctx.r3.s64 = r30.s64 + -96;
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823599f0
	sub_823599F0(ctx, base);
	// lfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	f0.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(f0.f64 * f0.f64));
	// lfs f12,100(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,96(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,128
	r11.s64 = r31.s64 + 128;
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// addi r9,r31,240
	ctx.r9.s64 = r31.s64 + 240;
	// addi r8,r31,224
	ctx.r8.s64 = r31.s64 + 224;
	// lfs f11,2480(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2480);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(f0.f64 * ctx.f11.f64));
	// fmuls f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// fmadds f10,f12,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// fmsubs f11,f13,f11,f9
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f9.f64));
	// lfs f9,108(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f10,f13,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fdivs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fsubs f9,f8,f13
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fmuls f7,f0,f10
	ctx.f7.f64 = double(float(f0.f64 * ctx.f10.f64));
	// stfs f7,136(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// fmuls f6,f12,f10
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f6,132(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f10,128(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// fsubs f10,f0,f8
	ctx.f10.f64 = double(float(f0.f64 - ctx.f8.f64));
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lwz r28,8(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// fmuls f6,f0,f11
	ctx.f6.f64 = double(float(f0.f64 * ctx.f11.f64));
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// stw r3,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// stw r28,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r28.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r11.u32);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// stw r5,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// stfs f10,192(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 192, temp.u32);
	// stfs f11,196(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 196, temp.u32);
	// stfs f9,200(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 200, temp.u32);
	// fmsubs f13,f11,f13,f8
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 - ctx.f8.f64));
	// fmsubs f0,f0,f10,f7
	f0.f64 = double(float(f0.f64 * ctx.f10.f64 - ctx.f7.f64));
	// stfs f13,216(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 216, temp.u32);
	// fmsubs f12,f12,f9,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 - ctx.f6.f64));
	// stfs f0,212(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 212, temp.u32);
	// stfs f12,208(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 208, temp.u32);
	// bl 0x8214f728
	sub_8214F728(ctx, base);
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x8214f728
	sub_8214F728(ctx, base);
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// lwz r3,-88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -88);
	// bl 0x821af870
	sub_821AF870(ctx, base);
	// b 0x82216e90
	goto loc_82216E90;
loc_82216E5C:
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// std r25,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r25.u64);
	// ld r11,88(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82216a60
	sub_82216A60(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821bde40
	sub_821BDE40(ctx, base);
loc_82216E90:
	// addi r4,r30,-84
	ctx.r4.s64 = r30.s64 + -84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r28,r30,-256
	r28.s64 = r30.s64 + -256;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82127898
	sub_82127898(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addic. r10,r11,-24
	xer.ca = r11.u32 > 23;
	ctx.r10.s64 = r11.s64 + -24;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82216f08
	if (!cr0.eq) goto loc_82216F08;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,256
	ctx.r4.s64 = r31.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823595e0
	sub_823595E0(ctx, base);
	// lwz r11,-248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -248);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82216f04
	if (!cr0.eq) goto loc_82216F04;
	// lbz r11,256(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 256);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82216f04
	if (cr0.eq) goto loc_82216F04;
	// lwz r11,-700(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r4,-672(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -672);
	// bl 0x821ecbb0
	sub_821ECBB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82126b38
	sub_82126B38(ctx, base);
loc_82216F04:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_82216F08:
	// cmpwi cr6,r11,17
	cr6.compare<int32_t>(r11.s32, 17, xer);
	// ble cr6,0x82216f6c
	if (!cr6.gt) goto loc_82216F6C;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-440
	ctx.r4.s64 = r30.s64 + -440;
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
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-44
	ctx.r4.s64 = r30.s64 + -44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-40
	ctx.r4.s64 = r30.s64 + -40;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r30,-36
	ctx.r4.s64 = r30.s64 + -36;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r30,-20
	r28.s64 = r30.s64 + -20;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// b 0x82216f84
	goto loc_82216F84;
loc_82216F6C:
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// bge cr6,0x82216f84
	if (!cr6.lt) goto loc_82216F84;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,152
	ctx.r4.s64 = r31.s64 + 152;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_82216F84:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,116
	ctx.r4.s64 = r31.s64 + 116;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r26,r30,-704
	r26.s64 = r30.s64 + -704;
	// lwz r5,-440(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + -440);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x82216ff0
	if (!cr6.gt) goto loc_82216FF0;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bge cr6,0x82216fd4
	if (!cr6.lt) goto loc_82216FD4;
	// addi r4,r31,180
	ctx.r4.s64 = r31.s64 + 180;
	// b 0x82216fe0
	goto loc_82216FE0;
loc_82216FD4:
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// bge cr6,0x82216ff0
	if (!cr6.lt) goto loc_82216FF0;
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
loc_82216FE0:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_82216FF0:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x82217020
	if (!cr6.gt) goto loc_82217020;
	// addi r4,r30,-436
	ctx.r4.s64 = r30.s64 + -436;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r30,-68
	r28.s64 = r30.s64 + -68;
	// addi r24,r30,-428
	r24.s64 = r30.s64 + -428;
	// bl 0x821bbcb0
	sub_821BBCB0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x821bbcb0
	sub_821BBCB0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_82217020:
	// cmpwi cr6,r11,29
	cr6.compare<int32_t>(r11.s32, 29, xer);
	// ble cr6,0x82217064
	if (!cr6.gt) goto loc_82217064;
	// addi r4,r30,-65
	ctx.r4.s64 = r30.s64 + -65;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r30,-64
	r28.s64 = r30.s64 + -64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821bbcb0
	sub_821BBCB0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-56
	ctx.r4.s64 = r30.s64 + -56;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-52
	ctx.r4.s64 = r30.s64 + -52;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_82217064:
	// addi r10,r11,-5
	ctx.r10.s64 = r11.s64 + -5;
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// bgt cr6,0x822170ac
	if (cr6.gt) goto loc_822170AC;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lbz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// lwz r11,-248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -248);
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// beq 0x822170a8
	if (cr0.eq) goto loc_822170A8;
	// stw r10,68(r11)
	PPC_STORE_U32(r11.u32 + 68, ctx.r10.u32);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,260(r11)
	PPC_STORE_U32(r11.u32 + 260, ctx.r10.u32);
loc_822170A8:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_822170AC:
	// addi r10,r11,-6
	ctx.r10.s64 = r11.s64 + -6;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bgt cr6,0x822170d8
	if (cr6.gt) goto loc_822170D8;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359680
	sub_82359680(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_822170D8:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bne cr6,0x822170f0
	if (!cr6.eq) goto loc_822170F0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_822170F0:
	// addic. r10,r11,-13
	xer.ca = r11.u32 > 12;
	ctx.r10.s64 = r11.s64 + -13;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8221710c
	if (!cr0.eq) goto loc_8221710C;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,148
	ctx.r4.s64 = r31.s64 + 148;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_8221710C:
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(r11.s32, 19, xer);
	// ble cr6,0x82217128
	if (!cr6.gt) goto loc_82217128;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-112
	ctx.r4.s64 = r30.s64 + -112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// b 0x82217154
	goto loc_82217154;
loc_82217128:
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// ble cr6,0x82217158
	if (!cr6.gt) goto loc_82217158;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// std r11,128(r31)
	PPC_STORE_U64(r31.u32 + 128, r11.u64);
	// lfd f0,128(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 128);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,-112(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + -112, temp.u32);
loc_82217154:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_82217158:
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(r11.s32, 26, xer);
	// ble cr6,0x8221716c
	if (!cr6.gt) goto loc_8221716C;
	// addi r4,r30,-108
	ctx.r4.s64 = r30.s64 + -108;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
loc_8221716C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,-100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + -100);
	// lfs f1,-112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82214538
	sub_82214538(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(r11.s32, 18, xer);
	// ble cr6,0x82217198
	if (!cr6.gt) goto loc_82217198;
	// addi r4,r30,-268
	ctx.r4.s64 = r30.s64 + -268;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82127810
	sub_82127810(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_82217198:
	// cmpwi cr6,r11,21
	cr6.compare<int32_t>(r11.s32, 21, xer);
	// bne cr6,0x822171b4
	if (!cr6.eq) goto loc_822171B4;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,156
	ctx.r4.s64 = r31.s64 + 156;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_822171B4:
	// cmpwi cr6,r11,27
	cr6.compare<int32_t>(r11.s32, 27, xer);
	// ble cr6,0x822171cc
	if (!cr6.gt) goto loc_822171CC;
	// addi r4,r30,-456
	ctx.r4.s64 = r30.s64 + -456;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// b 0x822171d4
	goto loc_822171D4;
loc_822171CC:
	// li r11,1
	r11.s64 = 1;
	// stb r11,-456(r30)
	PPC_STORE_U8(r30.u32 + -456, r11.u8);
loc_822171D4:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r28,r30,-67
	r28.s64 = r30.s64 + -67;
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(r11.s32, 28, xer);
	// ble cr6,0x822171f4
	if (!cr6.gt) goto loc_822171F4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// b 0x822171f8
	goto loc_822171F8;
loc_822171F4:
	// stb r25,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r25.u8);
loc_822171F8:
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// stb r11,-66(r30)
	PPC_STORE_U8(r30.u32 + -66, r11.u8);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// ble cr6,0x8221726c
	if (!cr6.gt) goto loc_8221726C;
	// addi r28,r30,-244
	r28.s64 = r30.s64 + -244;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8221726c
	if (cr0.eq) goto loc_8221726C;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8221726c
	if (!cr6.gt) goto loc_8221726C;
loc_82217248:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82212400
	sub_82212400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82212708
	sub_82212708(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82217248
	if (cr6.lt) goto loc_82217248;
loc_8221726C:
	// lfs f0,-696(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -696);
	f0.f64 = double(temp.f32);
	// stfs f0,-452(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + -452, temp.u32);
loc_82217274:
	// addi r1,r31,464
	ctx.r1.s64 = r31.s64 + 464;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82216AD0"))) PPC_WEAK_FUNC(sub_82216AD0);
PPC_FUNC_IMPL(__imp__sub_82216AD0) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-464
	r31.s64 = ctx.r1.s64 + -464;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r27,r11,13272
	r27.s64 = r11.s64 + 13272;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r10,14464(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14464);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82217274
	if (cr6.gt) goto loc_82217274;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(r11.s32, 22, xer);
	// ble cr6,0x82216b38
	if (!cr6.gt) goto loc_82216B38;
	// lwz r11,-700(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-700
	ctx.r3.s64 = r11.s64 + -700;
	// bl 0x82315350
	sub_82315350(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_82216B38:
	// cmpwi cr6,r11,27
	cr6.compare<int32_t>(r11.s32, 27, xer);
	// ble cr6,0x82216b5c
	if (!cr6.gt) goto loc_82216B5C;
	// lwz r11,-700(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-700
	ctx.r3.s64 = r11.s64 + -700;
	// bl 0x82315350
	sub_82315350(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_82216B5C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82216b88
	if (!cr6.gt) goto loc_82216B88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-684
	ctx.r3.s64 = r30.s64 + -684;
	// bl 0x821e96c0
	sub_821E96C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-496
	ctx.r3.s64 = r30.s64 + -496;
	// bl 0x821b0a28
	sub_821B0A28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-460
	ctx.r3.s64 = r30.s64 + -460;
	// bl 0x821b36c0
	sub_821B36C0(ctx, base);
loc_82216B88:
	// addi r4,r30,-420
	ctx.r4.s64 = r30.s64 + -420;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821bbcb0
	sub_821BBCB0(ctx, base);
	// addi r4,r30,-412
	ctx.r4.s64 = r30.s64 + -412;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r30,-396
	ctx.r4.s64 = r30.s64 + -396;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r30,-380
	ctx.r4.s64 = r30.s64 + -380;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821bbcb0
	sub_821BBCB0(ctx, base);
	// addi r4,r30,-372
	ctx.r4.s64 = r30.s64 + -372;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821bbcb0
	sub_821BBCB0(ctx, base);
	// addi r4,r30,-364
	ctx.r4.s64 = r30.s64 + -364;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821bbcb0
	sub_821BBCB0(ctx, base);
	// addi r4,r30,-356
	ctx.r4.s64 = r30.s64 + -356;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821bbcb0
	sub_821BBCB0(ctx, base);
	// addi r4,r30,-348
	ctx.r4.s64 = r30.s64 + -348;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821bbcb0
	sub_821BBCB0(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// ble cr6,0x82216c00
	if (!cr6.gt) goto loc_82216C00;
	// addi r4,r30,-340
	ctx.r4.s64 = r30.s64 + -340;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821bbcb0
	sub_821BBCB0(ctx, base);
loc_82216C00:
	// addi r4,r30,-332
	ctx.r4.s64 = r30.s64 + -332;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// addi r4,r30,-316
	ctx.r4.s64 = r30.s64 + -316;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// addi r4,r30,-300
	ctx.r4.s64 = r30.s64 + -300;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// addi r4,r30,-284
	ctx.r4.s64 = r30.s64 + -284;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(r11.s32, 25, xer);
	// ble cr6,0x82216c50
	if (!cr6.gt) goto loc_82216C50;
	// addi r4,r30,-96
	ctx.r4.s64 = r30.s64 + -96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// b 0x82216e90
	goto loc_82216E90;
loc_82216C50:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82216e5c
	if (!cr6.gt) goto loc_82216E5C;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// ble cr6,0x82216c80
	if (!cr6.gt) goto loc_82216C80;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// bl 0x82212390
	sub_82212390(ctx, base);
	// b 0x82216ce0
	goto loc_82216CE0;
loc_82216C80:
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,100
	ctx.r4.s64 = r31.s64 + 100;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lfs f11,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,104(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f0,100(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 100);
	f0.f64 = double(temp.f32);
	// lfs f13,164(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,160(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	f0.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fnmadds f0,f11,f10,f0
	f0.f64 = double(float(-(ctx.f11.f64 * ctx.f10.f64 + f0.f64)));
	// stfs f0,108(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
loc_82216CE0:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82216e90
	if (cr0.eq) goto loc_82216E90;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r28,r11,15600
	r28.s64 = r11.s64 + 15600;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r26,13(r28)
	r26.u64 = PPC_LOAD_U8(r28.u32 + 13);
	// bl 0x823599f0
	sub_823599F0(ctx, base);
	// lwz r11,-700(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r3,-676(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -676);
	// bl 0x82275ef0
	sub_82275EF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,32616
	r11.s64 = r11.s64 + 32616;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// lwz r11,-700(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r3,-672(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -672);
	// bl 0x821a3888
	sub_821A3888(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,-96
	ctx.r3.s64 = r30.s64 + -96;
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823599f0
	sub_823599F0(ctx, base);
	// lfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	f0.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(f0.f64 * f0.f64));
	// lfs f12,100(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,96(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,128
	r11.s64 = r31.s64 + 128;
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// addi r9,r31,240
	ctx.r9.s64 = r31.s64 + 240;
	// addi r8,r31,224
	ctx.r8.s64 = r31.s64 + 224;
	// lfs f11,2480(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2480);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(f0.f64 * ctx.f11.f64));
	// fmuls f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// fmadds f10,f12,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// fmsubs f11,f13,f11,f9
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f9.f64));
	// lfs f9,108(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f10,f13,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fdivs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fsubs f9,f8,f13
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fmuls f7,f0,f10
	ctx.f7.f64 = double(float(f0.f64 * ctx.f10.f64));
	// stfs f7,136(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// fmuls f6,f12,f10
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f6,132(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f10,128(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// fsubs f10,f0,f8
	ctx.f10.f64 = double(float(f0.f64 - ctx.f8.f64));
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lwz r28,8(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// fmuls f6,f0,f11
	ctx.f6.f64 = double(float(f0.f64 * ctx.f11.f64));
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// stw r3,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// stw r28,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r28.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r11.u32);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// stw r5,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// stfs f10,192(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 192, temp.u32);
	// stfs f11,196(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 196, temp.u32);
	// stfs f9,200(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 200, temp.u32);
	// fmsubs f13,f11,f13,f8
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 - ctx.f8.f64));
	// fmsubs f0,f0,f10,f7
	f0.f64 = double(float(f0.f64 * ctx.f10.f64 - ctx.f7.f64));
	// stfs f13,216(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 216, temp.u32);
	// fmsubs f12,f12,f9,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 - ctx.f6.f64));
	// stfs f0,212(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 212, temp.u32);
	// stfs f12,208(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 208, temp.u32);
	// bl 0x8214f728
	sub_8214F728(ctx, base);
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x8214f728
	sub_8214F728(ctx, base);
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// lwz r3,-88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -88);
	// bl 0x821af870
	sub_821AF870(ctx, base);
	// b 0x82216e90
	goto loc_82216E90;
loc_82216E5C:
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// std r25,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r25.u64);
	// ld r11,88(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82216a60
	sub_82216A60(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821bde40
	sub_821BDE40(ctx, base);
loc_82216E90:
	// addi r4,r30,-84
	ctx.r4.s64 = r30.s64 + -84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r28,r30,-256
	r28.s64 = r30.s64 + -256;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82127898
	sub_82127898(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addic. r10,r11,-24
	xer.ca = r11.u32 > 23;
	ctx.r10.s64 = r11.s64 + -24;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82216f08
	if (!cr0.eq) goto loc_82216F08;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,256
	ctx.r4.s64 = r31.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823595e0
	sub_823595E0(ctx, base);
	// lwz r11,-248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -248);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82216f04
	if (!cr0.eq) goto loc_82216F04;
	// lbz r11,256(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 256);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82216f04
	if (cr0.eq) goto loc_82216F04;
	// lwz r11,-700(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -700);
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r4,-672(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -672);
	// bl 0x821ecbb0
	sub_821ECBB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82126b38
	sub_82126B38(ctx, base);
loc_82216F04:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_82216F08:
	// cmpwi cr6,r11,17
	cr6.compare<int32_t>(r11.s32, 17, xer);
	// ble cr6,0x82216f6c
	if (!cr6.gt) goto loc_82216F6C;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-440
	ctx.r4.s64 = r30.s64 + -440;
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
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-44
	ctx.r4.s64 = r30.s64 + -44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-40
	ctx.r4.s64 = r30.s64 + -40;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r30,-36
	ctx.r4.s64 = r30.s64 + -36;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r30,-20
	r28.s64 = r30.s64 + -20;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// b 0x82216f84
	goto loc_82216F84;
loc_82216F6C:
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// bge cr6,0x82216f84
	if (!cr6.lt) goto loc_82216F84;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,152
	ctx.r4.s64 = r31.s64 + 152;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_82216F84:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,116
	ctx.r4.s64 = r31.s64 + 116;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r26,r30,-704
	r26.s64 = r30.s64 + -704;
	// lwz r5,-440(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + -440);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x82216ff0
	if (!cr6.gt) goto loc_82216FF0;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bge cr6,0x82216fd4
	if (!cr6.lt) goto loc_82216FD4;
	// addi r4,r31,180
	ctx.r4.s64 = r31.s64 + 180;
	// b 0x82216fe0
	goto loc_82216FE0;
loc_82216FD4:
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// bge cr6,0x82216ff0
	if (!cr6.lt) goto loc_82216FF0;
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
loc_82216FE0:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_82216FF0:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x82217020
	if (!cr6.gt) goto loc_82217020;
	// addi r4,r30,-436
	ctx.r4.s64 = r30.s64 + -436;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r30,-68
	r28.s64 = r30.s64 + -68;
	// addi r24,r30,-428
	r24.s64 = r30.s64 + -428;
	// bl 0x821bbcb0
	sub_821BBCB0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x821bbcb0
	sub_821BBCB0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_82217020:
	// cmpwi cr6,r11,29
	cr6.compare<int32_t>(r11.s32, 29, xer);
	// ble cr6,0x82217064
	if (!cr6.gt) goto loc_82217064;
	// addi r4,r30,-65
	ctx.r4.s64 = r30.s64 + -65;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r30,-64
	r28.s64 = r30.s64 + -64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821bbcb0
	sub_821BBCB0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-56
	ctx.r4.s64 = r30.s64 + -56;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-52
	ctx.r4.s64 = r30.s64 + -52;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_82217064:
	// addi r10,r11,-5
	ctx.r10.s64 = r11.s64 + -5;
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// bgt cr6,0x822170ac
	if (cr6.gt) goto loc_822170AC;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lbz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// lwz r11,-248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -248);
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// beq 0x822170a8
	if (cr0.eq) goto loc_822170A8;
	// stw r10,68(r11)
	PPC_STORE_U32(r11.u32 + 68, ctx.r10.u32);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,260(r11)
	PPC_STORE_U32(r11.u32 + 260, ctx.r10.u32);
loc_822170A8:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_822170AC:
	// addi r10,r11,-6
	ctx.r10.s64 = r11.s64 + -6;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bgt cr6,0x822170d8
	if (cr6.gt) goto loc_822170D8;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359680
	sub_82359680(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_822170D8:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bne cr6,0x822170f0
	if (!cr6.eq) goto loc_822170F0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_822170F0:
	// addic. r10,r11,-13
	xer.ca = r11.u32 > 12;
	ctx.r10.s64 = r11.s64 + -13;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8221710c
	if (!cr0.eq) goto loc_8221710C;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,148
	ctx.r4.s64 = r31.s64 + 148;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_8221710C:
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(r11.s32, 19, xer);
	// ble cr6,0x82217128
	if (!cr6.gt) goto loc_82217128;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-112
	ctx.r4.s64 = r30.s64 + -112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// b 0x82217154
	goto loc_82217154;
loc_82217128:
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// ble cr6,0x82217158
	if (!cr6.gt) goto loc_82217158;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// std r11,128(r31)
	PPC_STORE_U64(r31.u32 + 128, r11.u64);
	// lfd f0,128(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 128);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,-112(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + -112, temp.u32);
loc_82217154:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_82217158:
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(r11.s32, 26, xer);
	// ble cr6,0x8221716c
	if (!cr6.gt) goto loc_8221716C;
	// addi r4,r30,-108
	ctx.r4.s64 = r30.s64 + -108;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
loc_8221716C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,-100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + -100);
	// lfs f1,-112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82214538
	sub_82214538(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(r11.s32, 18, xer);
	// ble cr6,0x82217198
	if (!cr6.gt) goto loc_82217198;
	// addi r4,r30,-268
	ctx.r4.s64 = r30.s64 + -268;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82127810
	sub_82127810(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_82217198:
	// cmpwi cr6,r11,21
	cr6.compare<int32_t>(r11.s32, 21, xer);
	// bne cr6,0x822171b4
	if (!cr6.eq) goto loc_822171B4;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,156
	ctx.r4.s64 = r31.s64 + 156;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_822171B4:
	// cmpwi cr6,r11,27
	cr6.compare<int32_t>(r11.s32, 27, xer);
	// ble cr6,0x822171cc
	if (!cr6.gt) goto loc_822171CC;
	// addi r4,r30,-456
	ctx.r4.s64 = r30.s64 + -456;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// b 0x822171d4
	goto loc_822171D4;
loc_822171CC:
	// li r11,1
	r11.s64 = 1;
	// stb r11,-456(r30)
	PPC_STORE_U8(r30.u32 + -456, r11.u8);
loc_822171D4:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r28,r30,-67
	r28.s64 = r30.s64 + -67;
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(r11.s32, 28, xer);
	// ble cr6,0x822171f4
	if (!cr6.gt) goto loc_822171F4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// b 0x822171f8
	goto loc_822171F8;
loc_822171F4:
	// stb r25,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r25.u8);
loc_822171F8:
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// stb r11,-66(r30)
	PPC_STORE_U8(r30.u32 + -66, r11.u8);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// ble cr6,0x8221726c
	if (!cr6.gt) goto loc_8221726C;
	// addi r28,r30,-244
	r28.s64 = r30.s64 + -244;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8221726c
	if (cr0.eq) goto loc_8221726C;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8221726c
	if (!cr6.gt) goto loc_8221726C;
loc_82217248:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82212400
	sub_82212400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82212708
	sub_82212708(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82217248
	if (cr6.lt) goto loc_82217248;
loc_8221726C:
	// lfs f0,-696(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -696);
	f0.f64 = double(temp.f32);
	// stfs f0,-452(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + -452, temp.u32);
loc_82217274:
	// addi r1,r31,464
	ctx.r1.s64 = r31.s64 + 464;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8221727C"))) PPC_WEAK_FUNC(sub_8221727C);
PPC_FUNC_IMPL(__imp__sub_8221727C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-464
	r31.s64 = r12.s64 + -464;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821be3d0
	sub_821BE3D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822172A4"))) PPC_WEAK_FUNC(sub_822172A4);
PPC_FUNC_IMPL(__imp__sub_822172A4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-464
	r31.s64 = r12.s64 + -464;
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

__attribute__((alias("__imp__sub_822172CC"))) PPC_WEAK_FUNC(sub_822172CC);
PPC_FUNC_IMPL(__imp__sub_822172CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822172D0"))) PPC_WEAK_FUNC(sub_822172D0);
PPC_FUNC_IMPL(__imp__sub_822172D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82216ad0
	sub_82216AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822172DC"))) PPC_WEAK_FUNC(sub_822172DC);
PPC_FUNC_IMPL(__imp__sub_822172DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822172E0"))) PPC_WEAK_FUNC(sub_822172E0);
PPC_FUNC_IMPL(__imp__sub_822172E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,328(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// addi r9,r11,32
	ctx.r9.s64 = r11.s64 + 32;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
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
	// lwz r11,328(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// lwz r11,116(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// stw r11,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221732C"))) PPC_WEAK_FUNC(sub_8221732C);
PPC_FUNC_IMPL(__imp__sub_8221732C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217330"))) PPC_WEAK_FUNC(sub_82217330);
PPC_FUNC_IMPL(__imp__sub_82217330) {
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
	// addi r3,r31,-180
	ctx.r3.s64 = r31.s64 + -180;
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
loc_822173A0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822173a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_822173A0;
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

__attribute__((alias("__imp__sub_822173CC"))) PPC_WEAK_FUNC(sub_822173CC);
PPC_FUNC_IMPL(__imp__sub_822173CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822173D0"))) PPC_WEAK_FUNC(sub_822173D0);
PPC_FUNC_IMPL(__imp__sub_822173D0) {
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
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x821b3420
	sub_821B3420(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82217420
	if (cr0.eq) goto loc_82217420;
loc_82217418:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82217460
	goto loc_82217460;
loc_82217420:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-140
	ctx.r3.s64 = r30.s64 + -140;
	// bl 0x821aec48
	sub_821AEC48(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82217418
	if (!cr0.eq) goto loc_82217418;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-320
	ctx.r3.s64 = r30.s64 + -320;
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
loc_82217460:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82217468"))) PPC_WEAK_FUNC(sub_82217468);
PPC_FUNC_IMPL(__imp__sub_82217468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r16,32752(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + 32752);
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
	// addi r11,r11,32732
	r11.s64 = r11.s64 + 32732;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822174c0
	if (cr0.eq) goto loc_822174C0;
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
loc_822174C0:
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

__attribute__((alias("__imp__sub_82217470"))) PPC_WEAK_FUNC(sub_82217470);
PPC_FUNC_IMPL(__imp__sub_82217470) {
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
	// addi r11,r11,32732
	r11.s64 = r11.s64 + 32732;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822174c0
	if (cr0.eq) goto loc_822174C0;
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
loc_822174C0:
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

__attribute__((alias("__imp__sub_822174E4"))) PPC_WEAK_FUNC(sub_822174E4);
PPC_FUNC_IMPL(__imp__sub_822174E4) {
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

__attribute__((alias("__imp__sub_8221750C"))) PPC_WEAK_FUNC(sub_8221750C);
PPC_FUNC_IMPL(__imp__sub_8221750C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217510"))) PPC_WEAK_FUNC(sub_82217510);
PPC_FUNC_IMPL(__imp__sub_82217510) {
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
	// bl 0x82217470
	sub_82217470(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82217540
	if (cr0.eq) goto loc_82217540;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82217540:
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

__attribute__((alias("__imp__sub_8221755C"))) PPC_WEAK_FUNC(sub_8221755C);
PPC_FUNC_IMPL(__imp__sub_8221755C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217560"))) PPC_WEAK_FUNC(sub_82217560);
PPC_FUNC_IMPL(__imp__sub_82217560) {
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
	// beq cr6,0x822175cc
	if (cr6.eq) goto loc_822175CC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822175a8
	if (cr6.eq) goto loc_822175A8;
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
loc_822175A8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// beq cr6,0x822175cc
	if (cr6.eq) goto loc_822175CC;
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
loc_822175CC:
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

__attribute__((alias("__imp__sub_822175E4"))) PPC_WEAK_FUNC(sub_822175E4);
PPC_FUNC_IMPL(__imp__sub_822175E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822175E8"))) PPC_WEAK_FUNC(sub_822175E8);
PPC_FUNC_IMPL(__imp__sub_822175E8) {
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
	// beq 0x82217628
	if (cr0.eq) goto loc_82217628;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,14520
	ctx.r3.s64 = r11.s64 + 14520;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82217630
	goto loc_82217630;
loc_82217628:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82217630:
	// mulli r3,r31,92
	ctx.r3.s64 = r31.s64 * 92;
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

__attribute__((alias("__imp__sub_8221764C"))) PPC_WEAK_FUNC(sub_8221764C);
PPC_FUNC_IMPL(__imp__sub_8221764C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217650"))) PPC_WEAK_FUNC(sub_82217650);
PPC_FUNC_IMPL(__imp__sub_82217650) {
	PPC_FUNC_PROLOGUE();
	// b 0x82217470
	sub_82217470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82217654"))) PPC_WEAK_FUNC(sub_82217654);
PPC_FUNC_IMPL(__imp__sub_82217654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217658"))) PPC_WEAK_FUNC(sub_82217658);
PPC_FUNC_IMPL(__imp__sub_82217658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r3,248(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82217674
	if (cr0.eq) goto loc_82217674;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82217674:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82217680"))) PPC_WEAK_FUNC(sub_82217680);
PPC_FUNC_IMPL(__imp__sub_82217680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r3,248(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8221769c
	if (cr0.eq) goto loc_8221769C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_8221769C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822176A8"))) PPC_WEAK_FUNC(sub_822176A8);
PPC_FUNC_IMPL(__imp__sub_822176A8) {
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
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// bl 0x821af870
	sub_821AF870(ctx, base);
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x821b2800
	sub_821B2800(ctx, base);
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

__attribute__((alias("__imp__sub_822176E4"))) PPC_WEAK_FUNC(sub_822176E4);
PPC_FUNC_IMPL(__imp__sub_822176E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822176E8"))) PPC_WEAK_FUNC(sub_822176E8);
PPC_FUNC_IMPL(__imp__sub_822176E8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	// beq 0x822177e0
	if (cr0.eq) goto loc_822177E0;
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
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x822177d8
	if (cr0.eq) goto loc_822177D8;
	// bl 0x821c7740
	sub_821C7740(ctx, base);
	// lfs f11,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f31
	cr6.compare(ctx.f11.f64, f31.f64);
	// beq cr6,0x822177d8
	if (cr6.eq) goto loc_822177D8;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82217768
	if (!cr0.eq) goto loc_82217768;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8221779c
	if (cr0.eq) goto loc_8221779C;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8221779c
	if (cr0.eq) goto loc_8221779C;
loc_82217768:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lfs f10,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + f0.f64));
	// fsqrts f0,f0
	f0.f64 = double(float(sqrt(f0.f64)));
	// fadds f0,f0,f9
	f0.f64 = double(float(f0.f64 + ctx.f9.f64));
	// fmadds f0,f0,f10,f11
	f0.f64 = double(float(f0.f64 * ctx.f10.f64 + ctx.f11.f64));
	// b 0x822177d4
	goto loc_822177D4;
loc_8221779C:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x822177d8
	if (cr6.eq) goto loc_822177D8;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r10,r11,360
	ctx.r10.s64 = r11.s64 + 360;
	// addi r11,r11,356
	r11.s64 = r11.s64 + 356;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x822177c8
	if (!cr6.lt) goto loc_822177C8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_822177C8:
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f11
	f0.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f11.f64));
loc_822177D4:
	// stfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
loc_822177D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82217818
	goto loc_82217818;
loc_822177E0:
	// lfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x82217814
	if (cr6.eq) goto loc_82217814;
	// addi r3,r31,-180
	ctx.r3.s64 = r31.s64 + -180;
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
	// b 0x822177d4
	goto loc_822177D4;
loc_82217814:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82217818:
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

__attribute__((alias("__imp__sub_82217834"))) PPC_WEAK_FUNC(sub_82217834);
PPC_FUNC_IMPL(__imp__sub_82217834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217838"))) PPC_WEAK_FUNC(sub_82217838);
PPC_FUNC_IMPL(__imp__sub_82217838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,300(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r29.u32 + 300, temp.u32);
	// stfs f31,304(r29)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r29.u32 + 304, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822178A0"))) PPC_WEAK_FUNC(sub_822178A0);
PPC_FUNC_IMPL(__imp__sub_822178A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,308(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r29.u32 + 308, temp.u32);
	// stfs f31,312(r29)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r29.u32 + 312, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82217908"))) PPC_WEAK_FUNC(sub_82217908);
PPC_FUNC_IMPL(__imp__sub_82217908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,316(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r29.u32 + 316, temp.u32);
	// stfs f30,320(r29)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r29.u32 + 320, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f31,324(r29)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r29.u32 + 324, temp.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82217990"))) PPC_WEAK_FUNC(sub_82217990);
PPC_FUNC_IMPL(__imp__sub_82217990) {
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
	// beq cr6,0x822179c8
	if (cr6.eq) goto loc_822179C8;
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
loc_822179C8:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x822179f8
	if (!cr6.eq) goto loc_822179F8;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,10656
	ctx.r6.s64 = r11.s64 + 10656;
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
	// bl 0x82217560
	sub_82217560(ctx, base);
loc_822179F8:
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

__attribute__((alias("__imp__sub_82217A0C"))) PPC_WEAK_FUNC(sub_82217A0C);
PPC_FUNC_IMPL(__imp__sub_82217A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217A10"))) PPC_WEAK_FUNC(sub_82217A10);
PPC_FUNC_IMPL(__imp__sub_82217A10) {
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
	// bl 0x82217470
	sub_82217470(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82217a40
	if (cr0.eq) goto loc_82217A40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82217A40:
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

__attribute__((alias("__imp__sub_82217A5C"))) PPC_WEAK_FUNC(sub_82217A5C);
PPC_FUNC_IMPL(__imp__sub_82217A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217A60"))) PPC_WEAK_FUNC(sub_82217A60);
PPC_FUNC_IMPL(__imp__sub_82217A60) {
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
	// bl 0x822175e8
	sub_822175E8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addic. r3,r31,8
	xer.ca = r31.u32 > 4294967287;
	ctx.r3.s64 = r31.s64 + 8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82217a9c
	if (cr0.eq) goto loc_82217A9C;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_82217A9C:
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

__attribute__((alias("__imp__sub_82217AB8"))) PPC_WEAK_FUNC(sub_82217AB8);
PPC_FUNC_IMPL(__imp__sub_82217AB8) {
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
	// beq 0x82217aec
	if (cr0.eq) goto loc_82217AEC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// b 0x82217af4
	goto loc_82217AF4;
loc_82217AEC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
loc_82217AF4:
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

__attribute__((alias("__imp__sub_82217B10"))) PPC_WEAK_FUNC(sub_82217B10);
PPC_FUNC_IMPL(__imp__sub_82217B10) {
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
	// beq 0x82217b80
	if (cr0.eq) goto loc_82217B80;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82217b80
	if (cr0.eq) goto loc_82217B80;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,10656
	r31.s64 = r11.s64 + 10656;
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
	// b 0x82217b84
	goto loc_82217B84;
loc_82217B80:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82217B84:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82217560
	sub_82217560(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82217B98"))) PPC_WEAK_FUNC(sub_82217B98);
PPC_FUNC_IMPL(__imp__sub_82217B98) {
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
	// lwz r11,14472(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14472);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lwz r11,-336(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -336);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-336
	ctx.r3.s64 = r11.s64 + -336;
	// bl 0x82314ff8
	sub_82314FF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-140
	ctx.r3.s64 = r31.s64 + -140;
	// bl 0x821afb80
	sub_821AFB80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-104
	ctx.r3.s64 = r31.s64 + -104;
	// bl 0x821b2a18
	sub_821B2A18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-320
	ctx.r3.s64 = r31.s64 + -320;
	// bl 0x821e7640
	sub_821E7640(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = r31.s64 + -80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r31,-100
	r29.s64 = r31.s64 + -100;
	// bl 0x821276e0
	sub_821276E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821b49f8
	sub_821B49F8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,-40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -40);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f0,-36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -36);
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
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f0,-32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -32);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lfs f0,-28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -28);
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
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lfs f0,-24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -24);
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
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f0,-20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -20);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f0,-16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -16);
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
	// lfs f0,-84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -84);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lfs f0,-88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -88);
	f0.f64 = double(temp.f32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// addi r4,r31,-68
	ctx.r4.s64 = r31.s64 + -68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r31,-56
	r31.s64 = r31.s64 + -56;
	// bl 0x82217ab8
	sub_82217AB8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821fedc0
	sub_821FEDC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82217D14"))) PPC_WEAK_FUNC(sub_82217D14);
PPC_FUNC_IMPL(__imp__sub_82217D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217D18"))) PPC_WEAK_FUNC(sub_82217D18);
PPC_FUNC_IMPL(__imp__sub_82217D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x821b4430
	sub_821B4430(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lfs f30,-25364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	f30.f64 = double(temp.f32);
	// beq 0x82217d7c
	if (cr0.eq) goto loc_82217D7C;
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// bne cr6,0x82217d7c
	if (!cr6.eq) goto loc_82217D7C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f1,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 252, temp.u32);
	// b 0x82217d80
	goto loc_82217D80;
loc_82217D7C:
	// stfs f31,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 252, temp.u32);
loc_82217D80:
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82217dac
	if (cr0.eq) goto loc_82217DAC;
	// fcmpu cr6,f29,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f29.f64, f30.f64);
	// bne cr6,0x82217dac
	if (!cr6.eq) goto loc_82217DAC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f1,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 256, temp.u32);
	// b 0x82217db0
	goto loc_82217DB0;
loc_82217DAC:
	// stfs f29,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 256, temp.u32);
loc_82217DB0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82217DD0"))) PPC_WEAK_FUNC(sub_82217DD0);
PPC_FUNC_IMPL(__imp__sub_82217DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,332(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r10.u32);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// b 0x8239ce50
	sub_8239CE50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82217DE8"))) PPC_WEAK_FUNC(sub_82217DE8);
PPC_FUNC_IMPL(__imp__sub_82217DE8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lfs f31,-25364(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25364);
	f31.f64 = double(temp.f32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x821b44b8
	sub_821B44B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x82217d18
	sub_82217D18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82217E4C"))) PPC_WEAK_FUNC(sub_82217E4C);
PPC_FUNC_IMPL(__imp__sub_82217E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217E50"))) PPC_WEAK_FUNC(sub_82217E50);
PPC_FUNC_IMPL(__imp__sub_82217E50) {
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
	// li r3,92
	ctx.r3.s64 = 92;
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

__attribute__((alias("__imp__sub_82217EA4"))) PPC_WEAK_FUNC(sub_82217EA4);
PPC_FUNC_IMPL(__imp__sub_82217EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217EA8"))) PPC_WEAK_FUNC(sub_82217EA8);
PPC_FUNC_IMPL(__imp__sub_82217EA8) {
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
	// bl 0x82217a60
	sub_82217A60(ctx, base);
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

__attribute__((alias("__imp__sub_82217F0C"))) PPC_WEAK_FUNC(sub_82217F0C);
PPC_FUNC_IMPL(__imp__sub_82217F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217F10"))) PPC_WEAK_FUNC(sub_82217F10);
PPC_FUNC_IMPL(__imp__sub_82217F10) {
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
	// b 0x82217f40
	goto loc_82217F40;
loc_82217F30:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82217F40:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82217f30
	if (!cr6.eq) goto loc_82217F30;
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

__attribute__((alias("__imp__sub_82217F68"))) PPC_WEAK_FUNC(sub_82217F68);
PPC_FUNC_IMPL(__imp__sub_82217F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r16,-32712(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -32712);
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
	// addi r3,r30,232
	ctx.r3.s64 = r30.s64 + 232;
	// bl 0x82217f10
	sub_82217F10(ctx, base);
	// lwz r11,292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 292);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82217fb4
	if (cr0.eq) goto loc_82217FB4;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82217FB4:
	// lwz r30,280(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 280);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x82217fd8
	if (cr0.eq) goto loc_82217FD8;
	// addi r3,r30,48
	ctx.r3.s64 = r30.s64 + 48;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// bl 0x821c9180
	sub_821C9180(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f3168
	sub_821F3168(ctx, base);
loc_82217FD8:
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

__attribute__((alias("__imp__sub_82217F70"))) PPC_WEAK_FUNC(sub_82217F70);
PPC_FUNC_IMPL(__imp__sub_82217F70) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r30,232
	ctx.r3.s64 = r30.s64 + 232;
	// bl 0x82217f10
	sub_82217F10(ctx, base);
	// lwz r11,292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 292);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82217fb4
	if (cr0.eq) goto loc_82217FB4;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82217FB4:
	// lwz r30,280(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 280);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x82217fd8
	if (cr0.eq) goto loc_82217FD8;
	// addi r3,r30,48
	ctx.r3.s64 = r30.s64 + 48;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// bl 0x821c9180
	sub_821C9180(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f3168
	sub_821F3168(ctx, base);
loc_82217FD8:
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

__attribute__((alias("__imp__sub_82217FF0"))) PPC_WEAK_FUNC(sub_82217FF0);
PPC_FUNC_IMPL(__imp__sub_82217FF0) {
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
	// bl 0x821c4928
	sub_821C4928(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218018"))) PPC_WEAK_FUNC(sub_82218018);
PPC_FUNC_IMPL(__imp__sub_82218018) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r6,r11,10756
	ctx.r6.s64 = r11.s64 + 10756;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r5,r11,920
	ctx.r5.s64 = r11.s64 + 920;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// lwz r11,-336(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -336);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-336
	ctx.r3.s64 = r11.s64 + -336;
	// bl 0x82315258
	sub_82315258(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-140
	ctx.r3.s64 = r31.s64 + -140;
	// bl 0x821b0908
	sub_821B0908(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-104
	ctx.r3.s64 = r31.s64 + -104;
	// bl 0x821b2938
	sub_821B2938(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-320
	ctx.r3.s64 = r31.s64 + -320;
	// bl 0x821e76c0
	sub_821E76C0(ctx, base);
	// addi r3,r31,-340
	ctx.r3.s64 = r31.s64 + -340;
	// bl 0x82217f70
	sub_82217F70(ctx, base);
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// beq cr6,0x82218128
	if (cr6.eq) goto loc_82218128;
	// addi r3,r31,-80
	ctx.r3.s64 = r31.s64 + -80;
	// lwz r4,268(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 268);
	// bl 0x82126cc8
	sub_82126CC8(ctx, base);
	// addi r3,r31,-100
	ctx.r3.s64 = r31.s64 + -100;
	// lwz r4,248(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 248);
	// bl 0x821b4430
	sub_821B4430(ctx, base);
	// lfs f0,300(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 300);
	f0.f64 = double(temp.f32);
	// stfs f0,-40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -40, temp.u32);
	// addi r3,r31,-68
	ctx.r3.s64 = r31.s64 + -68;
	// lfs f0,304(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 304);
	f0.f64 = double(temp.f32);
	// stfs f0,-36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -36, temp.u32);
	// lfs f0,308(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 308);
	f0.f64 = double(temp.f32);
	// stfs f0,-32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -32, temp.u32);
	// lfs f0,312(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 312);
	f0.f64 = double(temp.f32);
	// stfs f0,-28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -28, temp.u32);
	// lfs f0,316(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 316);
	f0.f64 = double(temp.f32);
	// stfs f0,-24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -24, temp.u32);
	// lfs f0,320(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 320);
	f0.f64 = double(temp.f32);
	// stfs f0,-20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -20, temp.u32);
	// lfs f0,324(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 324);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -16, temp.u32);
	// lfs f0,256(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 256);
	f0.f64 = double(temp.f32);
	// stfs f0,-84(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -84, temp.u32);
	// lfs f0,252(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 252);
	f0.f64 = double(temp.f32);
	// stfs f0,-88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -88, temp.u32);
	// lwz r4,280(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 280);
	// bl 0x82217560
	sub_82217560(ctx, base);
	// addi r3,r31,-56
	ctx.r3.s64 = r31.s64 + -56;
	// lwz r4,292(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 292);
	// bl 0x821fe850
	sub_821FE850(ctx, base);
loc_82218128:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82218130"))) PPC_WEAK_FUNC(sub_82218130);
PPC_FUNC_IMPL(__imp__sub_82218130) {
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
	// lwz r16,-32624(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -32624);
	// mflr r12
	// bl 0x8239bcf0
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
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
	// lwz r11,14472(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14472);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bgt cr6,0x822184d0
	if (cr6.gt) goto loc_822184D0;
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// ble cr6,0x8221819c
	if (!cr6.gt) goto loc_8221819C;
	// lwz r11,-336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -336);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-336
	ctx.r3.s64 = r11.s64 + -336;
	// bl 0x82315350
	sub_82315350(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_8221819C:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// ble cr6,0x822181c8
	if (!cr6.gt) goto loc_822181C8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-140
	ctx.r3.s64 = r30.s64 + -140;
	// bl 0x821b0a28
	sub_821B0A28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x821b36c0
	sub_821B36C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-320
	ctx.r3.s64 = r30.s64 + -320;
	// bl 0x821e96c0
	sub_821E96C0(ctx, base);
loc_822181C8:
	// addi r3,r30,-340
	ctx.r3.s64 = r30.s64 + -340;
	// bl 0x82217f70
	sub_82217F70(ctx, base);
	// addi r4,r30,-80
	ctx.r4.s64 = r30.s64 + -80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r30,-100
	r28.s64 = r30.s64 + -100;
	// bl 0x82127810
	sub_82127810(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821b4a50
	sub_821B4A50(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bge cr6,0x82218200
	if (!cr6.lt) goto loc_82218200;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
loc_82218200:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x8221822c
	if (!cr6.lt) goto loc_8221822C;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-36
	ctx.r4.s64 = r30.s64 + -36;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-28
	ctx.r4.s64 = r30.s64 + -28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_8221822C:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bge cr6,0x822182a0
	if (!cr6.lt) goto loc_822182A0;
	// addic. r11,r30,-340
	xer.ca = r30.u32 > 339;
	r11.s64 = r30.s64 + -340;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82218248
	if (!cr0.eq) goto loc_82218248;
	// li r11,0
	r11.s64 = 0;
	// b 0x82218258
	goto loc_82218258;
loc_82218248:
	// lwz r11,-336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -336);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-336
	r11.s64 = r11.s64 + -336;
loc_82218258:
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,24652
	r11.s64 = r11.s64 + 24652;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8213a8a0
	sub_8213A8A0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8213a0b0
	sub_8213A0B0(ctx, base);
loc_822182A0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// ble cr6,0x8221836c
	if (!cr6.gt) goto loc_8221836C;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-40
	ctx.r4.s64 = r30.s64 + -40;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-36
	ctx.r4.s64 = r30.s64 + -36;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-32
	ctx.r4.s64 = r30.s64 + -32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-28
	ctx.r4.s64 = r30.s64 + -28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r28,r30,-24
	r28.s64 = r30.s64 + -24;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r27,r30,-20
	r27.s64 = r30.s64 + -20;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r26,r30,-16
	r26.s64 = r30.s64 + -16;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// bge cr6,0x82218388
	if (!cr6.lt) goto loc_82218388;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-25404(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25404);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,0(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f12,0(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f0,0(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 0, temp.u32);
	// b 0x82218388
	goto loc_82218388;
loc_8221836C:
	// lfs f0,-36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -36);
	f0.f64 = double(temp.f32);
	// lfs f13,-28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,-40(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + -40, temp.u32);
	// stfs f13,-32(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + -32, temp.u32);
	// stfs f31,-16(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + -16, temp.u32);
	// stfs f31,-20(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + -20, temp.u32);
	// stfs f31,-24(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + -24, temp.u32);
loc_82218388:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// addi r28,r11,-29764
	r28.s64 = r11.s64 + -29764;
	// bne cr6,0x822183e8
	if (!cr6.eq) goto loc_822183E8;
	// addic. r11,r30,-340
	xer.ca = r30.u32 > 339;
	r11.s64 = r30.s64 + -340;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822183a8
	if (!cr0.eq) goto loc_822183A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822183b8
	goto loc_822183B8;
loc_822183A8:
	// lwz r11,-336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -336);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-336
	ctx.r4.s64 = r11.s64 + -336;
loc_822183B8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82146cb0
	sub_82146CB0(ctx, base);
	// stw r28,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r28.u32);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821471e0
	sub_821471E0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,92
	ctx.r4.s64 = r31.s64 + 92;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82146bc8
	sub_82146BC8(ctx, base);
loc_822183E8:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// bgt cr6,0x8221843c
	if (cr6.gt) goto loc_8221843C;
	// addic. r11,r30,-340
	xer.ca = r30.u32 > 339;
	r11.s64 = r30.s64 + -340;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82218408
	if (!cr0.eq) goto loc_82218408;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82218418
	goto loc_82218418;
loc_82218408:
	// lwz r11,-336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -336);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-336
	ctx.r4.s64 = r11.s64 + -336;
loc_82218418:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82146cb0
	sub_82146CB0(ctx, base);
	// stw r28,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r28.u32);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821471e0
	sub_821471E0(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82146bc8
	sub_82146BC8(ctx, base);
loc_8221843C:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r11,r11,-5
	r11.s64 = r11.s64 + -5;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bgt cr6,0x82218458
	if (cr6.gt) goto loc_82218458;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
loc_82218458:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// ble cr6,0x82218488
	if (!cr6.gt) goto loc_82218488;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-84
	ctx.r4.s64 = r30.s64 + -84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-88
	ctx.r4.s64 = r30.s64 + -88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// b 0x822184ac
	goto loc_822184AC;
loc_82218488:
	// lwz r3,-92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -92);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x822184a8
	if (cr0.eq) goto loc_822184A8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f1,-84(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + -84, temp.u32);
loc_822184A8:
	// stfs f31,-88(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + -88, temp.u32);
loc_822184AC:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// ble cr6,0x822184d0
	if (!cr6.gt) goto loc_822184D0;
	// addi r4,r30,-68
	ctx.r4.s64 = r30.s64 + -68;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r30,r30,-56
	r30.s64 = r30.s64 + -56;
	// bl 0x82217b10
	sub_82217B10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821fef60
	sub_821FEF60(ctx, base);
loc_822184D0:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82218138"))) PPC_WEAK_FUNC(sub_82218138);
PPC_FUNC_IMPL(__imp__sub_82218138) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
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
	// lwz r11,14472(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14472);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bgt cr6,0x822184d0
	if (cr6.gt) goto loc_822184D0;
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// ble cr6,0x8221819c
	if (!cr6.gt) goto loc_8221819C;
	// lwz r11,-336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -336);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-336
	ctx.r3.s64 = r11.s64 + -336;
	// bl 0x82315350
	sub_82315350(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_8221819C:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// ble cr6,0x822181c8
	if (!cr6.gt) goto loc_822181C8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-140
	ctx.r3.s64 = r30.s64 + -140;
	// bl 0x821b0a28
	sub_821B0A28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-104
	ctx.r3.s64 = r30.s64 + -104;
	// bl 0x821b36c0
	sub_821B36C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-320
	ctx.r3.s64 = r30.s64 + -320;
	// bl 0x821e96c0
	sub_821E96C0(ctx, base);
loc_822181C8:
	// addi r3,r30,-340
	ctx.r3.s64 = r30.s64 + -340;
	// bl 0x82217f70
	sub_82217F70(ctx, base);
	// addi r4,r30,-80
	ctx.r4.s64 = r30.s64 + -80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r30,-100
	r28.s64 = r30.s64 + -100;
	// bl 0x82127810
	sub_82127810(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821b4a50
	sub_821B4A50(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bge cr6,0x82218200
	if (!cr6.lt) goto loc_82218200;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
loc_82218200:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x8221822c
	if (!cr6.lt) goto loc_8221822C;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-36
	ctx.r4.s64 = r30.s64 + -36;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-28
	ctx.r4.s64 = r30.s64 + -28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_8221822C:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bge cr6,0x822182a0
	if (!cr6.lt) goto loc_822182A0;
	// addic. r11,r30,-340
	xer.ca = r30.u32 > 339;
	r11.s64 = r30.s64 + -340;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82218248
	if (!cr0.eq) goto loc_82218248;
	// li r11,0
	r11.s64 = 0;
	// b 0x82218258
	goto loc_82218258;
loc_82218248:
	// lwz r11,-336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -336);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-336
	r11.s64 = r11.s64 + -336;
loc_82218258:
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,24652
	r11.s64 = r11.s64 + 24652;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8213a8a0
	sub_8213A8A0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8213a0b0
	sub_8213A0B0(ctx, base);
loc_822182A0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// ble cr6,0x8221836c
	if (!cr6.gt) goto loc_8221836C;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-40
	ctx.r4.s64 = r30.s64 + -40;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-36
	ctx.r4.s64 = r30.s64 + -36;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-32
	ctx.r4.s64 = r30.s64 + -32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-28
	ctx.r4.s64 = r30.s64 + -28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r28,r30,-24
	r28.s64 = r30.s64 + -24;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r27,r30,-20
	r27.s64 = r30.s64 + -20;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r26,r30,-16
	r26.s64 = r30.s64 + -16;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// bge cr6,0x82218388
	if (!cr6.lt) goto loc_82218388;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-25404(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25404);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,0(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f12,0(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f0,0(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 0, temp.u32);
	// b 0x82218388
	goto loc_82218388;
loc_8221836C:
	// lfs f0,-36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -36);
	f0.f64 = double(temp.f32);
	// lfs f13,-28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,-40(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + -40, temp.u32);
	// stfs f13,-32(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + -32, temp.u32);
	// stfs f31,-16(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + -16, temp.u32);
	// stfs f31,-20(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + -20, temp.u32);
	// stfs f31,-24(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + -24, temp.u32);
loc_82218388:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// addi r28,r11,-29764
	r28.s64 = r11.s64 + -29764;
	// bne cr6,0x822183e8
	if (!cr6.eq) goto loc_822183E8;
	// addic. r11,r30,-340
	xer.ca = r30.u32 > 339;
	r11.s64 = r30.s64 + -340;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822183a8
	if (!cr0.eq) goto loc_822183A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822183b8
	goto loc_822183B8;
loc_822183A8:
	// lwz r11,-336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -336);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-336
	ctx.r4.s64 = r11.s64 + -336;
loc_822183B8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82146cb0
	sub_82146CB0(ctx, base);
	// stw r28,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r28.u32);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821471e0
	sub_821471E0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,92
	ctx.r4.s64 = r31.s64 + 92;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82146bc8
	sub_82146BC8(ctx, base);
loc_822183E8:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// bgt cr6,0x8221843c
	if (cr6.gt) goto loc_8221843C;
	// addic. r11,r30,-340
	xer.ca = r30.u32 > 339;
	r11.s64 = r30.s64 + -340;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82218408
	if (!cr0.eq) goto loc_82218408;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82218418
	goto loc_82218418;
loc_82218408:
	// lwz r11,-336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -336);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-336
	ctx.r4.s64 = r11.s64 + -336;
loc_82218418:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82146cb0
	sub_82146CB0(ctx, base);
	// stw r28,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r28.u32);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821471e0
	sub_821471E0(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82146bc8
	sub_82146BC8(ctx, base);
loc_8221843C:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r11,r11,-5
	r11.s64 = r11.s64 + -5;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bgt cr6,0x82218458
	if (cr6.gt) goto loc_82218458;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
loc_82218458:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// ble cr6,0x82218488
	if (!cr6.gt) goto loc_82218488;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-84
	ctx.r4.s64 = r30.s64 + -84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-88
	ctx.r4.s64 = r30.s64 + -88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// b 0x822184ac
	goto loc_822184AC;
loc_82218488:
	// lwz r3,-92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -92);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x822184a8
	if (cr0.eq) goto loc_822184A8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f1,-84(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + -84, temp.u32);
loc_822184A8:
	// stfs f31,-88(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + -88, temp.u32);
loc_822184AC:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// ble cr6,0x822184d0
	if (!cr6.gt) goto loc_822184D0;
	// addi r4,r30,-68
	ctx.r4.s64 = r30.s64 + -68;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r30,r30,-56
	r30.s64 = r30.s64 + -56;
	// bl 0x82217b10
	sub_82217B10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821fef60
	sub_821FEF60(ctx, base);
loc_822184D0:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822184DC"))) PPC_WEAK_FUNC(sub_822184DC);
PPC_FUNC_IMPL(__imp__sub_822184DC) {
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

__attribute__((alias("__imp__sub_82218504"))) PPC_WEAK_FUNC(sub_82218504);
PPC_FUNC_IMPL(__imp__sub_82218504) {
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
	// bl 0x8213a5c8
	sub_8213A5C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221852C"))) PPC_WEAK_FUNC(sub_8221852C);
PPC_FUNC_IMPL(__imp__sub_8221852C) {
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
	// bl 0x82221420
	sub_82221420(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218554"))) PPC_WEAK_FUNC(sub_82218554);
PPC_FUNC_IMPL(__imp__sub_82218554) {
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
	// bl 0x82221420
	sub_82221420(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221857C"))) PPC_WEAK_FUNC(sub_8221857C);
PPC_FUNC_IMPL(__imp__sub_8221857C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82218580"))) PPC_WEAK_FUNC(sub_82218580);
PPC_FUNC_IMPL(__imp__sub_82218580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f2,316(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 316);
	ctx.f2.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f29,f31
	f29.f64 = f31.f64;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f30,f31
	f30.f64 = f31.f64;
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fcmpu cr6,f2,f31
	cr6.compare(ctx.f2.f64, f31.f64);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// ble cr6,0x82218608
	if (!cr6.gt) goto loc_82218608;
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
loc_82218608:
	// lfs f2,320(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 320);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f2,f31
	cr6.compare(ctx.f2.f64, f31.f64);
	// ble cr6,0x82218620
	if (!cr6.gt) goto loc_82218620;
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
loc_82218620:
	// lfs f2,324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 324);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f2,f31
	cr6.compare(ctx.f2.f64, f31.f64);
	// ble cr6,0x82218638
	if (!cr6.gt) goto loc_82218638;
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
loc_82218638:
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// stfs f29,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82269fc0
	sub_82269FC0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r30,r1,116
	r30.s64 = ctx.r1.s64 + 116;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8226a630
	sub_8226A630(ctx, base);
	// lfs f1,308(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 308);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,312(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 312);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f1,f2
	cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// bge cr6,0x82218680
	if (!cr6.lt) goto loc_82218680;
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
loc_82218680:
	// addi r4,r31,232
	ctx.r4.s64 = r31.s64 + 232;
	// stfs f1,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f1,184(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f1,188(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82217ea8
	sub_82217EA8(ctx, base);
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x822186cc
	if (cr0.eq) goto loc_822186CC;
	// bl 0x82212400
	sub_82212400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// stw r4,328(r31)
	PPC_STORE_U32(r31.u32 + 328, ctx.r4.u32);
	// bl 0x82215848
	sub_82215848(ctx, base);
loc_822186CC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
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

__attribute__((alias("__imp__sub_822186F0"))) PPC_WEAK_FUNC(sub_822186F0);
PPC_FUNC_IMPL(__imp__sub_822186F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x8239bcfc
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f13,296(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 296);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-32528(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -32528);
	f0.f64 = double(temp.f32);
	// stfs f31,8(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82218730
	if (!cr6.eq) goto loc_82218730;
	// stfs f31,296(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 296, temp.u32);
	// b 0x822188b4
	goto loc_822188B4;
loc_82218730:
	// lfs f0,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 256);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,252(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bgt cr6,0x82218754
	if (cr6.gt) goto loc_82218754;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82218754:
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82218768
	if (cr0.eq) goto loc_82218768;
	// lwz r11,240(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// b 0x8221876c
	goto loc_8221876C;
loc_82218768:
	// li r11,0
	r11.s64 = 0;
loc_8221876C:
	// addi r29,r31,232
	r29.s64 = r31.s64 + 232;
	// stw r11,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r11.u32);
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r9,r30,r29
	ctx.r9.s64 = r29.s64 - r30.s64;
	// cntlzw r11,r9
	r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8221883c
	if (cr0.eq) goto loc_8221883C;
	// extsw r11,r10
	r11.s64 = ctx.r10.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f29,f0
	f29.f64 = double(float(f0.f64));
loc_822187A4:
	// lfs f12,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,256(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 256);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	f0.f64 = double(float(f0.f64 - ctx.f12.f64));
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f29
	ctx.f12.f64 = double(float(f0.f64 * f29.f64));
	// fsubs f0,f31,f13
	f0.f64 = double(float(f31.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bgt cr6,0x822187e8
	if (cr6.gt) goto loc_822187E8;
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// blt cr6,0x822187e8
	if (cr6.lt) goto loc_822187E8;
	// lwz r11,328(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82218824
	if (cr0.eq) goto loc_82218824;
	// lwz r11,116(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// stw r11,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r11.u32);
	// b 0x82218824
	goto loc_82218824;
loc_822187E8:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f30.f64);
	// bge cr6,0x822187f4
	if (!cr6.lt) goto loc_822187F4;
	// stfs f13,296(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 296, temp.u32);
loc_822187F4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82217e50
	sub_82217E50(ctx, base);
	// lwz r4,328(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82218824
	if (cr0.eq) goto loc_82218824;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// bl 0x82212448
	sub_82212448(ctx, base);
	// stw r3,328(r31)
	PPC_STORE_U32(r31.u32 + 328, ctx.r3.u32);
loc_82218824:
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
	// bne 0x822187a4
	if (!cr0.eq) goto loc_822187A4;
loc_8221883C:
	// lfs f0,300(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 300);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// blt cr6,0x822188b4
	if (cr6.lt) goto loc_822188B4;
	// lfs f13,252(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,256(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 256);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f13,296(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 296);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fsubs f0,f31,f0
	f0.f64 = double(float(f31.f64 - f0.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8221886c
	if (!cr6.gt) goto loc_8221886C;
	// stfs f0,296(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 296, temp.u32);
loc_8221886C:
	// lfs f0,304(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 304);
	f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	f0.f64 = double(float(f31.f64 + f0.f64));
	// lfs f13,296(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 296);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x822188a8
	if (!cr6.lt) goto loc_822188A8;
	// b 0x822188a4
	goto loc_822188A4;
loc_82218884:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 296);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82218580
	sub_82218580(ctx, base);
	// lfs f2,304(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 304);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,300(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 300);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// lfs f0,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 296);
	f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 + f0.f64));
loc_822188A4:
	// stfs f0,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 296, temp.u32);
loc_822188A8:
	// lfs f0,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 296);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x82218884
	if (!cr6.lt) goto loc_82218884;
loc_822188B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822188C8"))) PPC_WEAK_FUNC(sub_822188C8);
PPC_FUNC_IMPL(__imp__sub_822188C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,248(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822188f8
	if (cr0.eq) goto loc_822188F8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821b98c8
	sub_821B98C8(ctx, base);
loc_822188F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218908"))) PPC_WEAK_FUNC(sub_82218908);
PPC_FUNC_IMPL(__imp__sub_82218908) {
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
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82218948
	if (cr0.eq) goto loc_82218948;
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
loc_82218948:
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82218970
	if (cr0.eq) goto loc_82218970;
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
loc_82218970:
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8221899c
	if (cr0.eq) goto loc_8221899C;
	// addi r11,r11,204
	r11.s64 = r11.s64 + 204;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82152a80
	sub_82152A80(ctx, base);
loc_8221899C:
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

__attribute__((alias("__imp__sub_822189B4"))) PPC_WEAK_FUNC(sub_822189B4);
PPC_FUNC_IMPL(__imp__sub_822189B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822189B8"))) PPC_WEAK_FUNC(sub_822189B8);
PPC_FUNC_IMPL(__imp__sub_822189B8) {
	PPC_FUNC_PROLOGUE();
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
	// li r30,0
	r30.s64 = 0;
	// lfs f1,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x82218580
	sub_82218580(ctx, base);
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

__attribute__((alias("__imp__sub_82218A08"))) PPC_WEAK_FUNC(sub_82218A08);
PPC_FUNC_IMPL(__imp__sub_82218A08) {
	PPC_FUNC_PROLOGUE();
	// b 0x82217f10
	sub_82217F10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82218A0C"))) PPC_WEAK_FUNC(sub_82218A0C);
PPC_FUNC_IMPL(__imp__sub_82218A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82218A10"))) PPC_WEAK_FUNC(sub_82218A10);
PPC_FUNC_IMPL(__imp__sub_82218A10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-32240(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -32240);
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
	// beq cr6,0x82218aa8
	if (cr6.eq) goto loc_82218AA8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r11,r11,-32332
	r11.s64 = r11.s64 + -32332;
	// addi r10,r10,-32344
	ctx.r10.s64 = ctx.r10.s64 + -32344;
	// addi r9,r9,-32356
	ctx.r9.s64 = ctx.r9.s64 + -32356;
	// addi r8,r8,-32364
	ctx.r8.s64 = ctx.r8.s64 + -32364;
	// addi r3,r30,340
	ctx.r3.s64 = r30.s64 + 340;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// stw r9,200(r30)
	PPC_STORE_U32(r30.u32 + 200, ctx.r9.u32);
	// stw r8,388(r30)
	PPC_STORE_U32(r30.u32 + 388, ctx.r8.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,384
	r11.s64 = r30.s64 + 384;
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
loc_82218AA8:
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
	// bl 0x821b21a0
	sub_821B21A0(ctx, base);
	// addi r27,r30,196
	r27.s64 = r30.s64 + 196;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821b2dd0
	sub_821B2DD0(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r9,r9,-32400
	ctx.r9.s64 = ctx.r9.s64 + -32400;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,-32436
	r11.s64 = r11.s64 + -32436;
	// addi r10,r10,-32444
	ctx.r10.s64 = ctx.r10.s64 + -32444;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stw r9,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r8,-32508
	ctx.r8.s64 = ctx.r8.s64 + -32508;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r7,r7,-32520
	ctx.r7.s64 = ctx.r7.s64 + -32520;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// addi r11,r30,232
	r11.s64 = r30.s64 + 232;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// std r29,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r29.u64);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// ld r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r8,r10,-336
	ctx.r8.s64 = ctx.r10.s64 + -336;
	// stwx r8,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r8.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r8,r10,-380
	ctx.r8.s64 = ctx.r10.s64 + -380;
	// stwx r8,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r8.u32);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,244(r30)
	PPC_STORE_U32(r30.u32 + 244, r11.u32);
	// stw r29,248(r30)
	PPC_STORE_U32(r30.u32 + 248, r29.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,29140
	r11.s64 = r11.s64 + 29140;
	// stw r11,240(r30)
	PPC_STORE_U32(r30.u32 + 240, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,252(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 252, temp.u32);
	// stfs f0,256(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 256, temp.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,264(r30)
	PPC_STORE_U32(r30.u32 + 264, r11.u32);
	// stw r29,268(r30)
	PPC_STORE_U32(r30.u32 + 268, r29.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,8892
	r11.s64 = r11.s64 + 8892;
	// stw r11,260(r30)
	PPC_STORE_U32(r30.u32 + 260, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,276(r30)
	PPC_STORE_U32(r30.u32 + 276, r11.u32);
	// stw r29,280(r30)
	PPC_STORE_U32(r30.u32 + 280, r29.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,-32732
	r11.s64 = r11.s64 + -32732;
	// stw r11,272(r30)
	PPC_STORE_U32(r30.u32 + 272, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,288(r30)
	PPC_STORE_U32(r30.u32 + 288, r11.u32);
	// stw r29,292(r30)
	PPC_STORE_U32(r30.u32 + 292, r29.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,-32528(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -32528);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f13,17320(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17320);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,18828
	r11.s64 = r11.s64 + 18828;
	// lfs f12,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,284(r30)
	PPC_STORE_U32(r30.u32 + 284, r11.u32);
	// stfs f11,296(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 296, temp.u32);
	// stfs f13,300(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 300, temp.u32);
	// stfs f13,304(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 304, temp.u32);
	// stfs f12,308(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 308, temp.u32);
	// stfs f12,312(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 312, temp.u32);
	// stfs f0,316(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 316, temp.u32);
	// stfs f0,320(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 320, temp.u32);
	// stfs f0,324(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 324, temp.u32);
	// stw r29,332(r30)
	PPC_STORE_U32(r30.u32 + 332, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82218A18"))) PPC_WEAK_FUNC(sub_82218A18);
PPC_FUNC_IMPL(__imp__sub_82218A18) {
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
	// beq cr6,0x82218aa8
	if (cr6.eq) goto loc_82218AA8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r11,r11,-32332
	r11.s64 = r11.s64 + -32332;
	// addi r10,r10,-32344
	ctx.r10.s64 = ctx.r10.s64 + -32344;
	// addi r9,r9,-32356
	ctx.r9.s64 = ctx.r9.s64 + -32356;
	// addi r8,r8,-32364
	ctx.r8.s64 = ctx.r8.s64 + -32364;
	// addi r3,r30,340
	ctx.r3.s64 = r30.s64 + 340;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// stw r9,200(r30)
	PPC_STORE_U32(r30.u32 + 200, ctx.r9.u32);
	// stw r8,388(r30)
	PPC_STORE_U32(r30.u32 + 388, ctx.r8.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,384
	r11.s64 = r30.s64 + 384;
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
loc_82218AA8:
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
	// bl 0x821b21a0
	sub_821B21A0(ctx, base);
	// addi r27,r30,196
	r27.s64 = r30.s64 + 196;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821b2dd0
	sub_821B2DD0(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r9,r9,-32400
	ctx.r9.s64 = ctx.r9.s64 + -32400;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,-32436
	r11.s64 = r11.s64 + -32436;
	// addi r10,r10,-32444
	ctx.r10.s64 = ctx.r10.s64 + -32444;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stw r9,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r8,-32508
	ctx.r8.s64 = ctx.r8.s64 + -32508;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r7,r7,-32520
	ctx.r7.s64 = ctx.r7.s64 + -32520;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// addi r11,r30,232
	r11.s64 = r30.s64 + 232;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// std r29,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r29.u64);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// ld r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r8,r10,-336
	ctx.r8.s64 = ctx.r10.s64 + -336;
	// stwx r8,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r8.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r8,r10,-380
	ctx.r8.s64 = ctx.r10.s64 + -380;
	// stwx r8,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r8.u32);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,244(r30)
	PPC_STORE_U32(r30.u32 + 244, r11.u32);
	// stw r29,248(r30)
	PPC_STORE_U32(r30.u32 + 248, r29.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,29140
	r11.s64 = r11.s64 + 29140;
	// stw r11,240(r30)
	PPC_STORE_U32(r30.u32 + 240, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,252(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 252, temp.u32);
	// stfs f0,256(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 256, temp.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,264(r30)
	PPC_STORE_U32(r30.u32 + 264, r11.u32);
	// stw r29,268(r30)
	PPC_STORE_U32(r30.u32 + 268, r29.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,8892
	r11.s64 = r11.s64 + 8892;
	// stw r11,260(r30)
	PPC_STORE_U32(r30.u32 + 260, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,276(r30)
	PPC_STORE_U32(r30.u32 + 276, r11.u32);
	// stw r29,280(r30)
	PPC_STORE_U32(r30.u32 + 280, r29.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,-32732
	r11.s64 = r11.s64 + -32732;
	// stw r11,272(r30)
	PPC_STORE_U32(r30.u32 + 272, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,288(r30)
	PPC_STORE_U32(r30.u32 + 288, r11.u32);
	// stw r29,292(r30)
	PPC_STORE_U32(r30.u32 + 292, r29.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,-32528(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -32528);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f13,17320(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17320);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,18828
	r11.s64 = r11.s64 + 18828;
	// lfs f12,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,284(r30)
	PPC_STORE_U32(r30.u32 + 284, r11.u32);
	// stfs f11,296(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 296, temp.u32);
	// stfs f13,300(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 300, temp.u32);
	// stfs f13,304(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 304, temp.u32);
	// stfs f12,308(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 308, temp.u32);
	// stfs f12,312(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 312, temp.u32);
	// stfs f0,316(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 316, temp.u32);
	// stfs f0,320(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 320, temp.u32);
	// stfs f0,324(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 324, temp.u32);
	// stw r29,332(r30)
	PPC_STORE_U32(r30.u32 + 332, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82218C4C"))) PPC_WEAK_FUNC(sub_82218C4C);
PPC_FUNC_IMPL(__imp__sub_82218C4C) {
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
	// beq 0x82218c80
	if (cr0.eq) goto loc_82218C80;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// addi r3,r11,340
	ctx.r3.s64 = r11.s64 + 340;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_82218C80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218C90"))) PPC_WEAK_FUNC(sub_82218C90);
PPC_FUNC_IMPL(__imp__sub_82218C90) {
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
	// addi r3,r11,200
	ctx.r3.s64 = r11.s64 + 200;
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

__attribute__((alias("__imp__sub_82218CBC"))) PPC_WEAK_FUNC(sub_82218CBC);
PPC_FUNC_IMPL(__imp__sub_82218CBC) {
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
	// bl 0x82218a08
	sub_82218A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218CE8"))) PPC_WEAK_FUNC(sub_82218CE8);
PPC_FUNC_IMPL(__imp__sub_82218CE8) {
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

__attribute__((alias("__imp__sub_82218D10"))) PPC_WEAK_FUNC(sub_82218D10);
PPC_FUNC_IMPL(__imp__sub_82218D10) {
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
	// addi r3,r11,240
	ctx.r3.s64 = r11.s64 + 240;
	// bl 0x8220f2e0
	sub_8220F2E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218D3C"))) PPC_WEAK_FUNC(sub_82218D3C);
PPC_FUNC_IMPL(__imp__sub_82218D3C) {
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

__attribute__((alias("__imp__sub_82218D64"))) PPC_WEAK_FUNC(sub_82218D64);
PPC_FUNC_IMPL(__imp__sub_82218D64) {
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
	// addi r3,r11,260
	ctx.r3.s64 = r11.s64 + 260;
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

__attribute__((alias("__imp__sub_82218D90"))) PPC_WEAK_FUNC(sub_82218D90);
PPC_FUNC_IMPL(__imp__sub_82218D90) {
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

__attribute__((alias("__imp__sub_82218DB8"))) PPC_WEAK_FUNC(sub_82218DB8);
PPC_FUNC_IMPL(__imp__sub_82218DB8) {
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
	// addi r3,r11,272
	ctx.r3.s64 = r11.s64 + 272;
	// bl 0x82217650
	sub_82217650(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218DE4"))) PPC_WEAK_FUNC(sub_82218DE4);
PPC_FUNC_IMPL(__imp__sub_82218DE4) {
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
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
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

__attribute__((alias("__imp__sub_82218E0C"))) PPC_WEAK_FUNC(sub_82218E0C);
PPC_FUNC_IMPL(__imp__sub_82218E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82218E10"))) PPC_WEAK_FUNC(sub_82218E10);
PPC_FUNC_IMPL(__imp__sub_82218E10) {
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
	// bl 0x821e1770
	sub_821E1770(ctx, base);
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

__attribute__((alias("__imp__sub_82218E40"))) PPC_WEAK_FUNC(sub_82218E40);
PPC_FUNC_IMPL(__imp__sub_82218E40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-104
	ctx.r3.s64 = ctx.r3.s64 + -104;
	// b 0x821b2890
	sub_821B2890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82218E48"))) PPC_WEAK_FUNC(sub_82218E48);
PPC_FUNC_IMPL(__imp__sub_82218E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x82218e10
	sub_82218E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82218E54"))) PPC_WEAK_FUNC(sub_82218E54);
PPC_FUNC_IMPL(__imp__sub_82218E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82218E58"))) PPC_WEAK_FUNC(sub_82218E58);
PPC_FUNC_IMPL(__imp__sub_82218E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-140
	ctx.r3.s64 = ctx.r3.s64 + -140;
	// b 0x821b0888
	sub_821B0888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82218E68"))) PPC_WEAK_FUNC(sub_82218E68);
PPC_FUNC_IMPL(__imp__sub_82218E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82219bb0
	sub_82219BB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82218E74"))) PPC_WEAK_FUNC(sub_82218E74);
PPC_FUNC_IMPL(__imp__sub_82218E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82218E78"))) PPC_WEAK_FUNC(sub_82218E78);
PPC_FUNC_IMPL(__imp__sub_82218E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x822173d0
	sub_822173D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82218E84"))) PPC_WEAK_FUNC(sub_82218E84);
PPC_FUNC_IMPL(__imp__sub_82218E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82218E88"))) PPC_WEAK_FUNC(sub_82218E88);
PPC_FUNC_IMPL(__imp__sub_82218E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82218e40
	sub_82218E40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82218E94"))) PPC_WEAK_FUNC(sub_82218E94);
PPC_FUNC_IMPL(__imp__sub_82218E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82218E98"))) PPC_WEAK_FUNC(sub_82218E98);
PPC_FUNC_IMPL(__imp__sub_82218E98) {
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
	// lwz r16,-32168(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -32168);
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
	// lwz r11,13280(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13280);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82218f1c
	if (!cr0.eq) goto loc_82218F1C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,13280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13280, r11.u32);
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
	// bl 0x821e1770
	sub_821E1770(ctx, base);
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
	// stw r3,13276(r27)
	PPC_STORE_U32(r27.u32 + 13276, ctx.r3.u32);
	// b 0x82218f20
	goto loc_82218F20;
loc_82218F1C:
	// lwz r3,13276(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 13276);
loc_82218F20:
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
	// beq 0x82218f5c
	if (cr0.eq) goto loc_82218F5C;
	// lwz r11,-336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -336);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-336
	ctx.r3.s64 = r11.s64 + -336;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x82218fd8
	goto loc_82218FD8;
loc_82218F5C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82218fbc
	if (!cr0.eq) goto loc_82218FBC;
	// addic. r11,r30,-340
	xer.ca = r30.u32 > 339;
	r11.s64 = r30.s64 + -340;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82218f80
	if (!cr0.eq) goto loc_82218F80;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82218f90
	goto loc_82218F90;
loc_82218F80:
	// lwz r11,-336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -336);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-336
	ctx.r3.s64 = r11.s64 + -336;
loc_82218F90:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -336);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-336
	ctx.r4.s64 = r11.s64 + -336;
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
loc_82218FBC:
	// lwz r11,-336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -336);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-336
	ctx.r3.s64 = r11.s64 + -336;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82218FD8:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82218EA0"))) PPC_WEAK_FUNC(sub_82218EA0);
PPC_FUNC_IMPL(__imp__sub_82218EA0) {
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
	// lwz r11,13280(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13280);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82218f1c
	if (!cr0.eq) goto loc_82218F1C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,13280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13280, r11.u32);
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
	// bl 0x821e1770
	sub_821E1770(ctx, base);
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
	// stw r3,13276(r27)
	PPC_STORE_U32(r27.u32 + 13276, ctx.r3.u32);
	// b 0x82218f20
	goto loc_82218F20;
loc_82218F1C:
	// lwz r3,13276(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 13276);
loc_82218F20:
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
	// beq 0x82218f5c
	if (cr0.eq) goto loc_82218F5C;
	// lwz r11,-336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -336);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-336
	ctx.r3.s64 = r11.s64 + -336;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x82218fd8
	goto loc_82218FD8;
loc_82218F5C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82218fbc
	if (!cr0.eq) goto loc_82218FBC;
	// addic. r11,r30,-340
	xer.ca = r30.u32 > 339;
	r11.s64 = r30.s64 + -340;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82218f80
	if (!cr0.eq) goto loc_82218F80;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82218f90
	goto loc_82218F90;
loc_82218F80:
	// lwz r11,-336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -336);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-336
	ctx.r3.s64 = r11.s64 + -336;
loc_82218F90:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -336);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-336
	ctx.r4.s64 = r11.s64 + -336;
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
loc_82218FBC:
	// lwz r11,-336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -336);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-336
	ctx.r3.s64 = r11.s64 + -336;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82218FD8:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82218FE4"))) PPC_WEAK_FUNC(sub_82218FE4);
PPC_FUNC_IMPL(__imp__sub_82218FE4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13280
	r11.s64 = r11.s64 + 13280;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13280
	ctx.r10.s64 = ctx.r10.s64 + 13280;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221900C"))) PPC_WEAK_FUNC(sub_8221900C);
PPC_FUNC_IMPL(__imp__sub_8221900C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219010"))) PPC_WEAK_FUNC(sub_82219010);
PPC_FUNC_IMPL(__imp__sub_82219010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82218ea0
	sub_82218EA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221901C"))) PPC_WEAK_FUNC(sub_8221901C);
PPC_FUNC_IMPL(__imp__sub_8221901C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219020"))) PPC_WEAK_FUNC(sub_82219020);
PPC_FUNC_IMPL(__imp__sub_82219020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82217b98
	sub_82217B98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221902C"))) PPC_WEAK_FUNC(sub_8221902C);
PPC_FUNC_IMPL(__imp__sub_8221902C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219030"))) PPC_WEAK_FUNC(sub_82219030);
PPC_FUNC_IMPL(__imp__sub_82219030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82218138
	sub_82218138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221903C"))) PPC_WEAK_FUNC(sub_8221903C);
PPC_FUNC_IMPL(__imp__sub_8221903C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219040"))) PPC_WEAK_FUNC(sub_82219040);
PPC_FUNC_IMPL(__imp__sub_82219040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82218018
	sub_82218018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221904C"))) PPC_WEAK_FUNC(sub_8221904C);
PPC_FUNC_IMPL(__imp__sub_8221904C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219050"))) PPC_WEAK_FUNC(sub_82219050);
PPC_FUNC_IMPL(__imp__sub_82219050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r2{};
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
	// lwz r16,-32056(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -32056);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r9,r9,-32400
	ctx.r9.s64 = ctx.r9.s64 + -32400;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,-32436
	r11.s64 = r11.s64 + -32436;
	// addi r10,r10,-32444
	ctx.r10.s64 = ctx.r10.s64 + -32444;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r9,-144(r30)
	PPC_STORE_U32(r30.u32 + -144, ctx.r9.u32);
	// addi r3,r30,-340
	ctx.r3.s64 = r30.s64 + -340;
	// addi r29,r30,-324
	r29.s64 = r30.s64 + -324;
	// lwz r9,-336(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + -336);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r8,r8,-32508
	ctx.r8.s64 = ctx.r8.s64 + -32508;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r7,r7,-32520
	ctx.r7.s64 = ctx.r7.s64 + -32520;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,-336(r11)
	PPC_STORE_U32(r11.u32 + -336, ctx.r8.u32);
	// lwz r11,-336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -336);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r7,-336(r11)
	PPC_STORE_U32(r11.u32 + -336, ctx.r7.u32);
	// lwz r11,-336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -336);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-336
	ctx.r10.s64 = r11.s64 + -336;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-340(r11)
	PPC_STORE_U32(r11.u32 + -340, ctx.r10.u32);
	// lwz r11,-336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -336);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-380
	ctx.r10.s64 = r11.s64 + -380;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-340(r11)
	PPC_STORE_U32(r11.u32 + -340, ctx.r10.u32);
	// bl 0x82217f70
	sub_82217F70(ctx, base);
	// addi r3,r30,-56
	ctx.r3.s64 = r30.s64 + -56;
	// bl 0x821fe668
	sub_821FE668(ctx, base);
	// addi r3,r30,-68
	ctx.r3.s64 = r30.s64 + -68;
	// bl 0x82217470
	sub_82217470(ctx, base);
	// addi r3,r30,-80
	ctx.r3.s64 = r30.s64 + -80;
	// bl 0x821268c0
	sub_821268C0(ctx, base);
	// addi r3,r30,-100
	ctx.r3.s64 = r30.s64 + -100;
	// bl 0x821b42a0
	sub_821B42A0(ctx, base);
	// addi r3,r30,-108
	ctx.r3.s64 = r30.s64 + -108;
	// bl 0x82217f10
	sub_82217F10(ctx, base);
	// addic. r11,r30,-340
	xer.ca = r30.u32 > 339;
	r11.s64 = r30.s64 + -340;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8221912c
	if (!cr0.eq) goto loc_8221912C;
	// li r29,0
	r29.s64 = 0;
loc_8221912C:
	// addi r3,r29,184
	ctx.r3.s64 = r29.s64 + 184;
	// bl 0x821b24f8
	sub_821B24F8(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82219058"))) PPC_WEAK_FUNC(sub_82219058);
PPC_FUNC_IMPL(__imp__sub_82219058) {
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
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r9,r9,-32400
	ctx.r9.s64 = ctx.r9.s64 + -32400;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,-32436
	r11.s64 = r11.s64 + -32436;
	// addi r10,r10,-32444
	ctx.r10.s64 = ctx.r10.s64 + -32444;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r9,-144(r30)
	PPC_STORE_U32(r30.u32 + -144, ctx.r9.u32);
	// addi r3,r30,-340
	ctx.r3.s64 = r30.s64 + -340;
	// addi r29,r30,-324
	r29.s64 = r30.s64 + -324;
	// lwz r9,-336(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + -336);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r8,r8,-32508
	ctx.r8.s64 = ctx.r8.s64 + -32508;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r7,r7,-32520
	ctx.r7.s64 = ctx.r7.s64 + -32520;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,-336(r11)
	PPC_STORE_U32(r11.u32 + -336, ctx.r8.u32);
	// lwz r11,-336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -336);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r7,-336(r11)
	PPC_STORE_U32(r11.u32 + -336, ctx.r7.u32);
	// lwz r11,-336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -336);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-336
	ctx.r10.s64 = r11.s64 + -336;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-340(r11)
	PPC_STORE_U32(r11.u32 + -340, ctx.r10.u32);
	// lwz r11,-336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -336);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-380
	ctx.r10.s64 = r11.s64 + -380;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-340(r11)
	PPC_STORE_U32(r11.u32 + -340, ctx.r10.u32);
	// bl 0x82217f70
	sub_82217F70(ctx, base);
	// addi r3,r30,-56
	ctx.r3.s64 = r30.s64 + -56;
	// bl 0x821fe668
	sub_821FE668(ctx, base);
	// addi r3,r30,-68
	ctx.r3.s64 = r30.s64 + -68;
	// bl 0x82217470
	sub_82217470(ctx, base);
	// addi r3,r30,-80
	ctx.r3.s64 = r30.s64 + -80;
	// bl 0x821268c0
	sub_821268C0(ctx, base);
	// addi r3,r30,-100
	ctx.r3.s64 = r30.s64 + -100;
	// bl 0x821b42a0
	sub_821B42A0(ctx, base);
	// addi r3,r30,-108
	ctx.r3.s64 = r30.s64 + -108;
	// bl 0x82217f10
	sub_82217F10(ctx, base);
	// addic. r11,r30,-340
	xer.ca = r30.u32 > 339;
	r11.s64 = r30.s64 + -340;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8221912c
	if (!cr0.eq) goto loc_8221912C;
	// li r29,0
	r29.s64 = 0;
loc_8221912C:
	// addi r3,r29,184
	ctx.r3.s64 = r29.s64 + 184;
	// bl 0x821b24f8
	sub_821B24F8(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8221913C"))) PPC_WEAK_FUNC(sub_8221913C);
PPC_FUNC_IMPL(__imp__sub_8221913C) {
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
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r11,-340
	xer.ca = r11.u32 > 339;
	r11.s64 = r11.s64 + -340;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8221916c
	if (cr0.eq) goto loc_8221916C;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r11,r11,-340
	r11.s64 = r11.s64 + -340;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x82219174
	goto loc_82219174;
loc_8221916C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_82219174:
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

__attribute__((alias("__imp__sub_82219190"))) PPC_WEAK_FUNC(sub_82219190);
PPC_FUNC_IMPL(__imp__sub_82219190) {
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
	// addi r11,r11,-340
	r11.s64 = r11.s64 + -340;
	// addi r3,r11,232
	ctx.r3.s64 = r11.s64 + 232;
	// bl 0x82218a08
	sub_82218A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822191C0"))) PPC_WEAK_FUNC(sub_822191C0);
PPC_FUNC_IMPL(__imp__sub_822191C0) {
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
	// addi r11,r11,-340
	r11.s64 = r11.s64 + -340;
	// addi r3,r11,240
	ctx.r3.s64 = r11.s64 + 240;
	// bl 0x8220f2e0
	sub_8220F2E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822191F0"))) PPC_WEAK_FUNC(sub_822191F0);
PPC_FUNC_IMPL(__imp__sub_822191F0) {
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
	// addi r11,r11,-340
	r11.s64 = r11.s64 + -340;
	// addi r3,r11,260
	ctx.r3.s64 = r11.s64 + 260;
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

__attribute__((alias("__imp__sub_82219220"))) PPC_WEAK_FUNC(sub_82219220);
PPC_FUNC_IMPL(__imp__sub_82219220) {
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
	// addi r11,r11,-340
	r11.s64 = r11.s64 + -340;
	// addi r3,r11,272
	ctx.r3.s64 = r11.s64 + 272;
	// bl 0x82217650
	sub_82217650(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219250"))) PPC_WEAK_FUNC(sub_82219250);
PPC_FUNC_IMPL(__imp__sub_82219250) {
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
	// addi r11,r11,-340
	r11.s64 = r11.s64 + -340;
	// addi r3,r11,284
	ctx.r3.s64 = r11.s64 + 284;
	// bl 0x821fec70
	sub_821FEC70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219280"))) PPC_WEAK_FUNC(sub_82219280);
PPC_FUNC_IMPL(__imp__sub_82219280) {
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
	// lwz r16,-31776(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -31776);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
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
	// lwz r11,13304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13304);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13300
	r29.s64 = ctx.r10.s64 + 13300;
	// bne 0x822192f0
	if (!cr0.eq) goto loc_822192F0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,13304(r30)
	PPC_STORE_U32(r30.u32 + 13304, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31900
	ctx.r4.s64 = r11.s64 + -31900;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13304);
loc_822192F0:
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
	// beq 0x8221934c
	if (cr0.eq) goto loc_8221934C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-340
	ctx.r4.s64 = r27.s64 + -340;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82217de8
	sub_82217DE8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82219348
	if (cr6.eq) goto loc_82219348;
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
	// beq 0x8221966c
	if (cr0.eq) goto loc_8221966C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82219340:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8221966c
	goto loc_8221966C;
loc_82219348:
	// lwz r11,13304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13304);
loc_8221934C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13296
	r29.s64 = ctx.r10.s64 + 13296;
	// bne 0x82219378
	if (!cr0.eq) goto loc_82219378;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,13304(r30)
	PPC_STORE_U32(r30.u32 + 13304, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31912
	ctx.r4.s64 = r11.s64 + -31912;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13304);
loc_82219378:
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
	// beq 0x822193d0
	if (cr0.eq) goto loc_822193D0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-340
	ctx.r4.s64 = r27.s64 + -340;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82217838
	sub_82217838(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822193cc
	if (cr6.eq) goto loc_822193CC;
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
	// beq 0x8221966c
	if (cr0.eq) goto loc_8221966C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x82219340
	goto loc_82219340;
loc_822193CC:
	// lwz r11,13304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13304);
loc_822193D0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13292
	r29.s64 = ctx.r10.s64 + 13292;
	// bne 0x822193fc
	if (!cr0.eq) goto loc_822193FC;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,13304(r30)
	PPC_STORE_U32(r30.u32 + 13304, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31928
	ctx.r4.s64 = r11.s64 + -31928;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13304);
loc_822193FC:
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
	// beq 0x82219454
	if (cr0.eq) goto loc_82219454;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-340
	ctx.r4.s64 = r27.s64 + -340;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x822178a0
	sub_822178A0(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82219450
	if (cr6.eq) goto loc_82219450;
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
	// beq 0x8221966c
	if (cr0.eq) goto loc_8221966C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x82219340
	goto loc_82219340;
loc_82219450:
	// lwz r11,13304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13304);
loc_82219454:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13288
	r29.s64 = ctx.r10.s64 + 13288;
	// bne 0x82219480
	if (!cr0.eq) goto loc_82219480;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,13304(r30)
	PPC_STORE_U32(r30.u32 + 13304, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31940
	ctx.r4.s64 = r11.s64 + -31940;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13304);
loc_82219480:
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
	// beq 0x822194d8
	if (cr0.eq) goto loc_822194D8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-340
	ctx.r4.s64 = r27.s64 + -340;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82217908
	sub_82217908(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822194d4
	if (cr6.eq) goto loc_822194D4;
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
	// beq 0x8221966c
	if (cr0.eq) goto loc_8221966C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x82219340
	goto loc_82219340;
loc_822194D4:
	// lwz r11,13304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13304);
loc_822194D8:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13284
	r29.s64 = ctx.r10.s64 + 13284;
	// bne 0x82219500
	if (!cr0.eq) goto loc_82219500;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,13304(r30)
	PPC_STORE_U32(r30.u32 + 13304, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31952
	ctx.r4.s64 = r11.s64 + -31952;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82219500:
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
	// beq 0x82219554
	if (cr0.eq) goto loc_82219554;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-340
	ctx.r4.s64 = r27.s64 + -340;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x822189b8
	sub_822189B8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82219554
	if (cr6.eq) goto loc_82219554;
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
	// beq 0x8221966c
	if (cr0.eq) goto loc_8221966C;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x82219340
	goto loc_82219340;
loc_82219554:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-104
	ctx.r4.s64 = r27.s64 + -104;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x821b3888
	sub_821B3888(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82219594
	if (cr6.eq) goto loc_82219594;
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
	// beq 0x8221966c
	if (cr0.eq) goto loc_8221966C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x82219340
	goto loc_82219340;
loc_82219594:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-140
	ctx.r4.s64 = r27.s64 + -140;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x821b1158
	sub_821B1158(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822195d4
	if (cr6.eq) goto loc_822195D4;
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
	// beq 0x8221966c
	if (cr0.eq) goto loc_8221966C;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x82219340
	goto loc_82219340;
loc_822195D4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-320
	ctx.r4.s64 = r27.s64 + -320;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821e9d00
	sub_821E9D00(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82219614
	if (cr6.eq) goto loc_82219614;
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
	// beq 0x8221966c
	if (cr0.eq) goto loc_8221966C;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// b 0x82219340
	goto loc_82219340;
loc_82219614:
	// lwz r11,-336(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -336);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r4,r11,-336
	ctx.r4.s64 = r11.s64 + -336;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82219660
	if (cr6.eq) goto loc_82219660;
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
	// beq 0x8221966c
	if (cr0.eq) goto loc_8221966C;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// b 0x82219340
	goto loc_82219340;
loc_82219660:
	// li r11,6
	r11.s64 = 6;
	// stw r25,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r25.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
loc_8221966C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82219288"))) PPC_WEAK_FUNC(sub_82219288);
PPC_FUNC_IMPL(__imp__sub_82219288) {
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
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
	// lwz r11,13304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13304);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13300
	r29.s64 = ctx.r10.s64 + 13300;
	// bne 0x822192f0
	if (!cr0.eq) goto loc_822192F0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,13304(r30)
	PPC_STORE_U32(r30.u32 + 13304, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31900
	ctx.r4.s64 = r11.s64 + -31900;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13304);
loc_822192F0:
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
	// beq 0x8221934c
	if (cr0.eq) goto loc_8221934C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-340
	ctx.r4.s64 = r27.s64 + -340;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82217de8
	sub_82217DE8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82219348
	if (cr6.eq) goto loc_82219348;
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
	// beq 0x8221966c
	if (cr0.eq) goto loc_8221966C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82219340:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8221966c
	goto loc_8221966C;
loc_82219348:
	// lwz r11,13304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13304);
loc_8221934C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13296
	r29.s64 = ctx.r10.s64 + 13296;
	// bne 0x82219378
	if (!cr0.eq) goto loc_82219378;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,13304(r30)
	PPC_STORE_U32(r30.u32 + 13304, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31912
	ctx.r4.s64 = r11.s64 + -31912;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13304);
loc_82219378:
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
	// beq 0x822193d0
	if (cr0.eq) goto loc_822193D0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-340
	ctx.r4.s64 = r27.s64 + -340;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82217838
	sub_82217838(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822193cc
	if (cr6.eq) goto loc_822193CC;
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
	// beq 0x8221966c
	if (cr0.eq) goto loc_8221966C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x82219340
	goto loc_82219340;
loc_822193CC:
	// lwz r11,13304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13304);
loc_822193D0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13292
	r29.s64 = ctx.r10.s64 + 13292;
	// bne 0x822193fc
	if (!cr0.eq) goto loc_822193FC;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,13304(r30)
	PPC_STORE_U32(r30.u32 + 13304, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31928
	ctx.r4.s64 = r11.s64 + -31928;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13304);
loc_822193FC:
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
	// beq 0x82219454
	if (cr0.eq) goto loc_82219454;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-340
	ctx.r4.s64 = r27.s64 + -340;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x822178a0
	sub_822178A0(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82219450
	if (cr6.eq) goto loc_82219450;
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
	// beq 0x8221966c
	if (cr0.eq) goto loc_8221966C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x82219340
	goto loc_82219340;
loc_82219450:
	// lwz r11,13304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13304);
loc_82219454:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13288
	r29.s64 = ctx.r10.s64 + 13288;
	// bne 0x82219480
	if (!cr0.eq) goto loc_82219480;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,13304(r30)
	PPC_STORE_U32(r30.u32 + 13304, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31940
	ctx.r4.s64 = r11.s64 + -31940;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,13304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13304);
loc_82219480:
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
	// beq 0x822194d8
	if (cr0.eq) goto loc_822194D8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-340
	ctx.r4.s64 = r27.s64 + -340;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82217908
	sub_82217908(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822194d4
	if (cr6.eq) goto loc_822194D4;
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
	// beq 0x8221966c
	if (cr0.eq) goto loc_8221966C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x82219340
	goto loc_82219340;
loc_822194D4:
	// lwz r11,13304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13304);
loc_822194D8:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,13284
	r29.s64 = ctx.r10.s64 + 13284;
	// bne 0x82219500
	if (!cr0.eq) goto loc_82219500;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,13304(r30)
	PPC_STORE_U32(r30.u32 + 13304, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-31952
	ctx.r4.s64 = r11.s64 + -31952;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82219500:
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
	// beq 0x82219554
	if (cr0.eq) goto loc_82219554;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-340
	ctx.r4.s64 = r27.s64 + -340;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x822189b8
	sub_822189B8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82219554
	if (cr6.eq) goto loc_82219554;
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
	// beq 0x8221966c
	if (cr0.eq) goto loc_8221966C;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x82219340
	goto loc_82219340;
loc_82219554:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-104
	ctx.r4.s64 = r27.s64 + -104;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x821b3888
	sub_821B3888(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82219594
	if (cr6.eq) goto loc_82219594;
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
	// beq 0x8221966c
	if (cr0.eq) goto loc_8221966C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x82219340
	goto loc_82219340;
loc_82219594:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-140
	ctx.r4.s64 = r27.s64 + -140;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x821b1158
	sub_821B1158(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822195d4
	if (cr6.eq) goto loc_822195D4;
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
	// beq 0x8221966c
	if (cr0.eq) goto loc_8221966C;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x82219340
	goto loc_82219340;
loc_822195D4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-320
	ctx.r4.s64 = r27.s64 + -320;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821e9d00
	sub_821E9D00(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82219614
	if (cr6.eq) goto loc_82219614;
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
	// beq 0x8221966c
	if (cr0.eq) goto loc_8221966C;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// b 0x82219340
	goto loc_82219340;
loc_82219614:
	// lwz r11,-336(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -336);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r4,r11,-336
	ctx.r4.s64 = r11.s64 + -336;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82219660
	if (cr6.eq) goto loc_82219660;
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
	// beq 0x8221966c
	if (cr0.eq) goto loc_8221966C;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// b 0x82219340
	goto loc_82219340;
loc_82219660:
	// li r11,6
	r11.s64 = 6;
	// stw r25,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r25.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
loc_8221966C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82219678"))) PPC_WEAK_FUNC(sub_82219678);
PPC_FUNC_IMPL(__imp__sub_82219678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13304
	r11.s64 = r11.s64 + 13304;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13304
	ctx.r10.s64 = ctx.r10.s64 + 13304;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822196A0"))) PPC_WEAK_FUNC(sub_822196A0);
PPC_FUNC_IMPL(__imp__sub_822196A0) {
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

__attribute__((alias("__imp__sub_822196C8"))) PPC_WEAK_FUNC(sub_822196C8);
PPC_FUNC_IMPL(__imp__sub_822196C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13304
	r11.s64 = r11.s64 + 13304;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13304
	ctx.r10.s64 = ctx.r10.s64 + 13304;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822196F0"))) PPC_WEAK_FUNC(sub_822196F0);
PPC_FUNC_IMPL(__imp__sub_822196F0) {
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

__attribute__((alias("__imp__sub_82219718"))) PPC_WEAK_FUNC(sub_82219718);
PPC_FUNC_IMPL(__imp__sub_82219718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13304
	r11.s64 = r11.s64 + 13304;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13304
	ctx.r10.s64 = ctx.r10.s64 + 13304;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219740"))) PPC_WEAK_FUNC(sub_82219740);
PPC_FUNC_IMPL(__imp__sub_82219740) {
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

__attribute__((alias("__imp__sub_82219768"))) PPC_WEAK_FUNC(sub_82219768);
PPC_FUNC_IMPL(__imp__sub_82219768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13304
	r11.s64 = r11.s64 + 13304;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13304
	ctx.r10.s64 = ctx.r10.s64 + 13304;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219790"))) PPC_WEAK_FUNC(sub_82219790);
PPC_FUNC_IMPL(__imp__sub_82219790) {
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

__attribute__((alias("__imp__sub_822197B8"))) PPC_WEAK_FUNC(sub_822197B8);
PPC_FUNC_IMPL(__imp__sub_822197B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,13304
	r11.s64 = r11.s64 + 13304;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,13304
	ctx.r10.s64 = ctx.r10.s64 + 13304;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822197E0"))) PPC_WEAK_FUNC(sub_822197E0);
PPC_FUNC_IMPL(__imp__sub_822197E0) {
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

__attribute__((alias("__imp__sub_82219808"))) PPC_WEAK_FUNC(sub_82219808);
PPC_FUNC_IMPL(__imp__sub_82219808) {
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

__attribute__((alias("__imp__sub_82219830"))) PPC_WEAK_FUNC(sub_82219830);
PPC_FUNC_IMPL(__imp__sub_82219830) {
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

__attribute__((alias("__imp__sub_82219858"))) PPC_WEAK_FUNC(sub_82219858);
PPC_FUNC_IMPL(__imp__sub_82219858) {
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

__attribute__((alias("__imp__sub_82219880"))) PPC_WEAK_FUNC(sub_82219880);
PPC_FUNC_IMPL(__imp__sub_82219880) {
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

__attribute__((alias("__imp__sub_822198A8"))) PPC_WEAK_FUNC(sub_822198A8);
PPC_FUNC_IMPL(__imp__sub_822198A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x82219288
	sub_82219288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822198B4"))) PPC_WEAK_FUNC(sub_822198B4);
PPC_FUNC_IMPL(__imp__sub_822198B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822198B8"))) PPC_WEAK_FUNC(sub_822198B8);
PPC_FUNC_IMPL(__imp__sub_822198B8) {
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
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82219b98
	if (cr6.eq) goto loc_82219B98;
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82219904
	if (!cr0.eq) goto loc_82219904;
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82219904
	if (!cr6.eq) goto loc_82219904;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82219b98
	if (cr6.eq) goto loc_82219B98;
loc_82219904:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82219920
	if (cr6.eq) goto loc_82219920;
	// lis r11,-32223
	r11.s64 = -2111766528;
	// li r28,0
	r28.s64 = 0;
	// addi r27,r11,30376
	r27.s64 = r11.s64 + 30376;
	// li r29,0
	r29.s64 = 0;
	// b 0x82219a1c
	goto loc_82219A1C;
loc_82219920:
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822199e8
	if (cr0.eq) goto loc_822199E8;
	// addi r31,r11,48
	r31.s64 = r11.s64 + 48;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x82219944
	goto loc_82219944;
loc_8221993C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82219944:
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
	// bne 0x8221993c
	if (!cr0.eq) goto loc_8221993C;
	// addi r11,r30,36
	r11.s64 = r30.s64 + 36;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82219974
	goto loc_82219974;
loc_8221996C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82219974:
	// subf r7,r10,r11
	ctx.r7.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 ^ 1;
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne 0x8221996c
	if (!cr0.eq) goto loc_8221996C;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x822199cc
	if (cr6.eq) goto loc_822199CC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822199a8
	goto loc_822199A8;
loc_822199A0:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_822199A8:
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
	// bne 0x822199a0
	if (!cr0.eq) goto loc_822199A0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f3c08
	sub_821F3C08(ctx, base);
loc_822199CC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32223
	r11.s64 = -2111766528;
	// li r28,0
	r28.s64 = 0;
	// addi r27,r11,32208
	r27.s64 = r11.s64 + 32208;
	// li r29,0
	r29.s64 = 0;
	// stw r10,136(r30)
	PPC_STORE_U32(r30.u32 + 136, ctx.r10.u32);
	// b 0x82219a1c
	goto loc_82219A1C;
loc_822199E8:
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82219a10
	if (cr0.eq) goto loc_82219A10;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// lis r11,-32223
	r11.s64 = -2111766528;
	// li r28,0
	r28.s64 = 0;
	// addi r27,r11,29408
	r27.s64 = r11.s64 + 29408;
	// li r29,0
	r29.s64 = 0;
	// stw r10,132(r30)
	PPC_STORE_U32(r30.u32 + 132, ctx.r10.u32);
	// b 0x82219a1c
	goto loc_82219A1C;
loc_82219A10:
	// lwz r29,88(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,80(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82219A1C:
	// lfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 60);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,56(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82219a40
	if (cr6.gt) goto loc_82219A40;
	// li r11,-1
	r11.s64 = -1;
loc_82219A40:
	// addi r26,r30,36
	r26.s64 = r30.s64 + 36;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// subf r10,r31,r26
	ctx.r10.s64 = r26.s64 - r31.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82219b6c
	if (cr0.eq) goto loc_82219B6C;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f30.f64 = double(temp.f32);
	// frsp f29,f0
	f29.f64 = double(float(f0.f64));
loc_82219A7C:
	// lfs f0,-188(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -188);
	f0.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fsubs f31,f0,f13
	f31.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	f0.f64 = double(temp.f32);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmadds f1,f29,f31,f0
	ctx.f1.f64 = double(float(f29.f64 * f31.f64 + f0.f64));
	// bl 0x821b6b00
	sub_821B6B00(ctx, base);
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,80(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,84(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	f0.f64 = double(temp.f32);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x8226a630
	sub_8226A630(ctx, base);
	// lwz r11,-192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r31,r26
	r11.s64 = r26.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82219a7c
	if (!cr0.eq) goto loc_82219A7C;
loc_82219B6C:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82219b84
	if (cr0.eq) goto loc_82219B84;
	// bl 0x821f3168
	sub_821F3168(ctx, base);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// b 0x82219b94
	goto loc_82219B94;
loc_82219B84:
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82219b98
	if (cr0.eq) goto loc_82219B98;
	// addi r3,r11,204
	ctx.r3.s64 = r11.s64 + 204;
loc_82219B94:
	// bl 0x821b2800
	sub_821B2800(ctx, base);
loc_82219B98:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82219BAC"))) PPC_WEAK_FUNC(sub_82219BAC);
PPC_FUNC_IMPL(__imp__sub_82219BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219BB0"))) PPC_WEAK_FUNC(sub_82219BB0);
PPC_FUNC_IMPL(__imp__sub_82219BB0) {
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
	// addi r30,r3,-340
	r30.s64 = ctx.r3.s64 + -340;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,340
	r31.s64 = r30.s64 + 340;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82219058
	sub_82219058(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82219be8
	if (cr0.eq) goto loc_82219BE8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_82219BE8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82219BF4"))) PPC_WEAK_FUNC(sub_82219BF4);
PPC_FUNC_IMPL(__imp__sub_82219BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219BF8"))) PPC_WEAK_FUNC(sub_82219BF8);
PPC_FUNC_IMPL(__imp__sub_82219BF8) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
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

__attribute__((alias("__imp__sub_82219C28"))) PPC_WEAK_FUNC(sub_82219C28);
PPC_FUNC_IMPL(__imp__sub_82219C28) {
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
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82219c70
	if (cr0.eq) goto loc_82219C70;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82219c70
	if (cr0.eq) goto loc_82219C70;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// bl 0x821af870
	sub_821AF870(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// bl 0x821b2800
	sub_821B2800(ctx, base);
loc_82219C70:
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

__attribute__((alias("__imp__sub_82219C84"))) PPC_WEAK_FUNC(sub_82219C84);
PPC_FUNC_IMPL(__imp__sub_82219C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

