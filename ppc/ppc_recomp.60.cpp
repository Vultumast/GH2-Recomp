#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8224FE78"))) PPC_WEAK_FUNC(sub_8224FE78);
PPC_FUNC_IMPL(__imp__sub_8224FE78) {
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
	// bne cr6,0x8224fee0
	if (!cr6.eq) goto loc_8224FEE0;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8224feb4
	if (cr0.eq) goto loc_8224FEB4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8224FEB4:
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
	// beq 0x8224ff18
	if (cr0.eq) goto loc_8224FF18;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8224ff18
	goto loc_8224FF18;
loc_8224FEE0:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,10812
	r30.s64 = r11.s64 + 10812;
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
	// bl 0x8224f7a8
	sub_8224F7A8(ctx, base);
loc_8224FF18:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8224FF24"))) PPC_WEAK_FUNC(sub_8224FF24);
PPC_FUNC_IMPL(__imp__sub_8224FF24) {
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

__attribute__((alias("__imp__sub_8224FF4C"))) PPC_WEAK_FUNC(sub_8224FF4C);
PPC_FUNC_IMPL(__imp__sub_8224FF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224FF50"))) PPC_WEAK_FUNC(sub_8224FF50);
PPC_FUNC_IMPL(__imp__sub_8224FF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x8224fc10
	sub_8224FC10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224FF5C"))) PPC_WEAK_FUNC(sub_8224FF5C);
PPC_FUNC_IMPL(__imp__sub_8224FF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224FF60"))) PPC_WEAK_FUNC(sub_8224FF60);
PPC_FUNC_IMPL(__imp__sub_8224FF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8224fa98
	sub_8224FA98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224FF6C"))) PPC_WEAK_FUNC(sub_8224FF6C);
PPC_FUNC_IMPL(__imp__sub_8224FF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224FF70"))) PPC_WEAK_FUNC(sub_8224FF70);
PPC_FUNC_IMPL(__imp__sub_8224FF70) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,1992(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1992);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x8224ffbc
	if (cr6.eq) goto loc_8224FFBC;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r30,112
	ctx.r3.s64 = r30.s64 + 112;
	// addi r11,r11,1896
	r11.s64 = r11.s64 + 1896;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8224FFBC:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-11084
	r11.s64 = r11.s64 + -11084;
	// addi r10,r10,-11148
	ctx.r10.s64 = ctx.r10.s64 + -11148;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r9,r9,1476
	ctx.r9.s64 = ctx.r9.s64 + 1476;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r8,r8,1412
	ctx.r8.s64 = ctx.r8.s64 + 1412;
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
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-108
	ctx.r10.s64 = r11.s64 + -108;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// bl 0x821503f0
	sub_821503F0(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r28,r30,12
	r28.s64 = r30.s64 + 12;
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
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
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,1812
	r11.s64 = r11.s64 + 1812;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// stw r29,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r29.u32);
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,11148
	r11.s64 = r11.s64 + 11148;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r11.u32);
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-20968
	r11.s64 = r11.s64 + -20968;
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r28,r30,72
	r28.s64 = r30.s64 + 72;
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
	// bl 0x821d7228
	sub_821D7228(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,-7284
	r11.s64 = r11.s64 + -7284;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f0,84(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 84, temp.u32);
	// stfs f0,96(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 96, temp.u32);
	// lfs f13,560(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 88, temp.u32);
	// stfs f13,92(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 92, temp.u32);
	// bl 0x82311960
	sub_82311960(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r7,8
	ctx.r7.s64 = 8;
	// stfs f1,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 100, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821d5e30
	sub_821D5E30(ctx, base);
	// bl 0x821e2368
	sub_821E2368(ctx, base);
	// stw r3,104(r30)
	PPC_STORE_U32(r30.u32 + 104, ctx.r3.u32);
	// bl 0x821ec6d0
	sub_821EC6D0(ctx, base);
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,260(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// stw r29,80(r11)
	PPC_STORE_U32(r11.u32 + 80, r29.u32);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r9,260(r11)
	PPC_STORE_U32(r11.u32 + 260, ctx.r9.u32);
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// stw r10,68(r11)
	PPC_STORE_U32(r11.u32 + 68, ctx.r10.u32);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,260(r11)
	PPC_STORE_U32(r11.u32 + 260, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8224FF78"))) PPC_WEAK_FUNC(sub_8224FF78);
PPC_FUNC_IMPL(__imp__sub_8224FF78) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x8224ffbc
	if (cr6.eq) goto loc_8224FFBC;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r30,112
	ctx.r3.s64 = r30.s64 + 112;
	// addi r11,r11,1896
	r11.s64 = r11.s64 + 1896;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8224FFBC:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-11084
	r11.s64 = r11.s64 + -11084;
	// addi r10,r10,-11148
	ctx.r10.s64 = ctx.r10.s64 + -11148;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r9,r9,1476
	ctx.r9.s64 = ctx.r9.s64 + 1476;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r8,r8,1412
	ctx.r8.s64 = ctx.r8.s64 + 1412;
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
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-108
	ctx.r10.s64 = r11.s64 + -108;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// bl 0x821503f0
	sub_821503F0(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r28,r30,12
	r28.s64 = r30.s64 + 12;
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
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
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,1812
	r11.s64 = r11.s64 + 1812;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// stw r29,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r29.u32);
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,11148
	r11.s64 = r11.s64 + 11148;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r11.u32);
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-20968
	r11.s64 = r11.s64 + -20968;
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r28,r30,72
	r28.s64 = r30.s64 + 72;
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
	// bl 0x821d7228
	sub_821D7228(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,-7284
	r11.s64 = r11.s64 + -7284;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f0,84(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 84, temp.u32);
	// stfs f0,96(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 96, temp.u32);
	// lfs f13,560(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 88, temp.u32);
	// stfs f13,92(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 92, temp.u32);
	// bl 0x82311960
	sub_82311960(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r7,8
	ctx.r7.s64 = 8;
	// stfs f1,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 100, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821d5e30
	sub_821D5E30(ctx, base);
	// bl 0x821e2368
	sub_821E2368(ctx, base);
	// stw r3,104(r30)
	PPC_STORE_U32(r30.u32 + 104, ctx.r3.u32);
	// bl 0x821ec6d0
	sub_821EC6D0(ctx, base);
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,260(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// stw r29,80(r11)
	PPC_STORE_U32(r11.u32 + 80, r29.u32);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r9,260(r11)
	PPC_STORE_U32(r11.u32 + 260, ctx.r9.u32);
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// stw r10,68(r11)
	PPC_STORE_U32(r11.u32 + 68, ctx.r10.u32);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,260(r11)
	PPC_STORE_U32(r11.u32 + 260, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8225018C"))) PPC_WEAK_FUNC(sub_8225018C);
PPC_FUNC_IMPL(__imp__sub_8225018C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822501c0
	if (cr0.eq) goto loc_822501C0;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,112
	ctx.r3.s64 = r11.s64 + 112;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_822501C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822501D0"))) PPC_WEAK_FUNC(sub_822501D0);
PPC_FUNC_IMPL(__imp__sub_822501D0) {
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
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
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

__attribute__((alias("__imp__sub_822501FC"))) PPC_WEAK_FUNC(sub_822501FC);
PPC_FUNC_IMPL(__imp__sub_822501FC) {
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

__attribute__((alias("__imp__sub_82250224"))) PPC_WEAK_FUNC(sub_82250224);
PPC_FUNC_IMPL(__imp__sub_82250224) {
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
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x8224f830
	sub_8224F830(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82250250"))) PPC_WEAK_FUNC(sub_82250250);
PPC_FUNC_IMPL(__imp__sub_82250250) {
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

__attribute__((alias("__imp__sub_82250278"))) PPC_WEAK_FUNC(sub_82250278);
PPC_FUNC_IMPL(__imp__sub_82250278) {
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
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// bl 0x8224f830
	sub_8224F830(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822502A4"))) PPC_WEAK_FUNC(sub_822502A4);
PPC_FUNC_IMPL(__imp__sub_822502A4) {
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

__attribute__((alias("__imp__sub_822502CC"))) PPC_WEAK_FUNC(sub_822502CC);
PPC_FUNC_IMPL(__imp__sub_822502CC) {
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
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// bl 0x82129908
	sub_82129908(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822502F8"))) PPC_WEAK_FUNC(sub_822502F8);
PPC_FUNC_IMPL(__imp__sub_822502F8) {
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

__attribute__((alias("__imp__sub_82250320"))) PPC_WEAK_FUNC(sub_82250320);
PPC_FUNC_IMPL(__imp__sub_82250320) {
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
	// addi r3,r11,60
	ctx.r3.s64 = r11.s64 + 60;
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

__attribute__((alias("__imp__sub_8225034C"))) PPC_WEAK_FUNC(sub_8225034C);
PPC_FUNC_IMPL(__imp__sub_8225034C) {
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
	// addi r3,r11,72
	ctx.r3.s64 = r11.s64 + 72;
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

__attribute__((alias("__imp__sub_82250378"))) PPC_WEAK_FUNC(sub_82250378);
PPC_FUNC_IMPL(__imp__sub_82250378) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	r11.s64 = 2;
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
	// lwz r11,-108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -108);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-108
	ctx.r3.s64 = r11.s64 + -108;
	// bl 0x82314ff8
	sub_82314FF8(ctx, base);
	// addi r4,r31,-100
	ctx.r4.s64 = r31.s64 + -100;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r31,-76
	r29.s64 = r31.s64 + -76;
	// addi r28,r31,-88
	r28.s64 = r31.s64 + -88;
	// bl 0x82127738
	sub_82127738(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8224fe18
	sub_8224FE18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8224fe18
	sub_8224FE18(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = r31.s64 + -64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r31,-52
	r29.s64 = r31.s64 + -52;
	// bl 0x82147188
	sub_82147188(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8213e3e8
	sub_8213E3E8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,-28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -28);
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
	// lfs f0,-20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -20);
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,-24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -24);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82250460"))) PPC_WEAK_FUNC(sub_82250460);
PPC_FUNC_IMPL(__imp__sub_82250460) {
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
	PPCRegister f0{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8239d5e4
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,20(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi r30,0
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8225088c
	if (cr0.eq) goto loc_8225088C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r26,1
	r26.s64 = 1;
	// li r27,0
	r27.s64 = 0;
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lfs f27,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f27.f64 = double(temp.f32);
	// lfs f28,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f28.f64 = double(temp.f32);
	// beq 0x822504c0
	if (cr0.eq) goto loc_822504C0;
	// addi r3,r30,148
	ctx.r3.s64 = r30.s64 + 148;
	// bl 0x821c55d0
	sub_821C55D0(ctx, base);
	// lwz r11,260(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 260);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,260(r30)
	PPC_STORE_U32(r30.u32 + 260, r11.u32);
	// b 0x82250790
	goto loc_82250790;
loc_822504C0:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82250724
	if (cr0.eq) goto loc_82250724;
	// lbz r11,136(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 136);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82250724
	if (cr0.eq) goto loc_82250724;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r11
	r28.u64 = r11.u64;
	// bne 0x822504ec
	if (!cr0.eq) goto loc_822504EC;
	// addi r28,r10,180
	r28.s64 = ctx.r10.s64 + 180;
loc_822504EC:
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r29,11556(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 11556);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8225088c
	if (cr0.eq) goto loc_8225088C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 48);
	f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f13,52(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f31,f11,f0
	f31.f64 = double(float(ctx.f11.f64 - f0.f64));
	// lfs f10,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// fsubs f30,f10,f13
	f30.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f29,f0,f12
	f29.f64 = double(float(f0.f64 - ctx.f12.f64));
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// lfs f13,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f29,f0
	f0.f64 = double(float(ctx.f13.f64 * f29.f64 + f0.f64));
	// fmadds f0,f12,f31,f0
	f0.f64 = double(float(ctx.f12.f64 * f31.f64 + f0.f64));
	// fcmpu cr6,f0,f28
	cr6.compare(f0.f64, f28.f64);
	// ble cr6,0x82250718
	if (!cr6.gt) goto loc_82250718;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stfs f28,112(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r11,128
	ctx.r3.s64 = r11.s64 + 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f31,-25364(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25364);
	f31.f64 = double(temp.f32);
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
	// beq 0x822505bc
	if (cr0.eq) goto loc_822505BC;
	// addi r4,r29,596
	ctx.r4.s64 = r29.s64 + 596;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8226ba90
	sub_8226BA90(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822505bc
	if (!cr0.eq) goto loc_822505BC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8214fc60
	sub_8214FC60(ctx, base);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	f0.f64 = double(temp.f32);
	// fdivs f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 / f0.f64));
loc_822505BC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	f29.f64 = f31.f64;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
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
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,27088(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 27088);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 128);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,560(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f1.f64));
	// fmuls f0,f11,f12
	f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x82250618
	if (!cr6.gt) goto loc_82250618;
	// fmr f31,f0
	f31.f64 = f0.f64;
loc_82250618:
	// lfs f10,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f13
	f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x8225062c
	if (!cr6.gt) goto loc_8225062C;
	// fmr f31,f0
	f31.f64 = f0.f64;
loc_8225062C:
	// fsubs f0,f27,f11
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f27.f64 - ctx.f11.f64));
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64));
	// fcmpu cr6,f31,f11
	cr6.compare(f31.f64, ctx.f11.f64);
	// ble cr6,0x82250640
	if (!cr6.gt) goto loc_82250640;
	// fmuls f31,f0,f12
	f31.f64 = double(float(f0.f64 * ctx.f12.f64));
loc_82250640:
	// fsubs f0,f27,f10
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f27.f64 - ctx.f10.f64));
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f31,f12
	cr6.compare(f31.f64, ctx.f12.f64);
	// ble cr6,0x82250654
	if (!cr6.gt) goto loc_82250654;
	// fmuls f31,f0,f13
	f31.f64 = double(float(f0.f64 * ctx.f13.f64));
loc_82250654:
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// blt cr6,0x82250718
	if (cr6.lt) goto loc_82250718;
	// fdivs f30,f27,f31
	f30.f64 = double(float(f27.f64 / f31.f64));
	// lfs f0,92(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	f0.f64 = double(temp.f32);
	// fmuls f13,f30,f29
	ctx.f13.f64 = double(float(f30.f64 * f29.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82250718
	if (cr6.gt) goto loc_82250718;
	// lwz r30,20(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r3,r30,148
	ctx.r3.s64 = r30.s64 + 148;
	// bl 0x821c55d0
	sub_821C55D0(ctx, base);
	// lwz r11,260(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 260);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stfs f28,132(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stfs f28,136(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,144(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f28,152(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r11,260(r30)
	PPC_STORE_U32(r30.u32 + 260, r11.u32);
	// stfs f28,160(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stfs f28,164(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f27,168(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f28,184(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// stw r26,76(r11)
	PPC_STORE_U32(r11.u32 + 76, r26.u32);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,260(r11)
	PPC_STORE_U32(r11.u32 + 260, ctx.r10.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwz r30,20(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
	// lfs f0,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f0.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fsubs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// stfs f0,180(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,260(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 260);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,260(r30)
	PPC_STORE_U32(r30.u32 + 260, r11.u32);
	// b 0x8225071c
	goto loc_8225071C;
loc_82250718:
	// mr r28,r27
	r28.u64 = r27.u64;
loc_8225071C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82250790
	if (!cr6.eq) goto loc_82250790;
loc_82250724:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82250764
	if (cr0.eq) goto loc_82250764;
	// lwz r30,20(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// addi r3,r30,148
	ctx.r3.s64 = r30.s64 + 148;
	// bl 0x821c55d0
	sub_821C55D0(ctx, base);
	// lwz r11,260(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 260);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,260(r30)
	PPC_STORE_U32(r30.u32 + 260, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// stw r27,76(r11)
	PPC_STORE_U32(r11.u32 + 76, r27.u32);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,260(r11)
	PPC_STORE_U32(r11.u32 + 260, ctx.r10.u32);
	// b 0x82250790
	goto loc_82250790;
loc_82250764:
	// lwz r29,20(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r30,r29,148
	r30.s64 = r29.s64 + 148;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82250784
	if (cr0.eq) goto loc_82250784;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
	// stw r27,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r27.u32);
loc_82250784:
	// lwz r11,260(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 260);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,260(r29)
	PPC_STORE_U32(r29.u32 + 260, r11.u32);
loc_82250790:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r28,r11,-5056
	r28.s64 = r11.s64 + -5056;
	// beq cr6,0x82250824
	if (cr6.eq) goto loc_82250824;
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	f0.f64 = double(temp.f32);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// fcmpu cr6,f0,f27
	cr6.compare(f0.f64, f27.f64);
	// bne cr6,0x822507bc
	if (!cr6.eq) goto loc_822507BC;
	// stw r26,44(r11)
	PPC_STORE_U32(r11.u32 + 44, r26.u32);
	// b 0x822507e8
	goto loc_822507E8;
loc_822507BC:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f28.f64);
	// bne cr6,0x822507cc
	if (!cr6.eq) goto loc_822507CC;
	// stw r27,44(r11)
	PPC_STORE_U32(r11.u32 + 44, r27.u32);
	// b 0x822507e8
	goto loc_822507E8;
loc_822507CC:
	// lwz r9,260(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// stfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 60, temp.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r9,260(r11)
	PPC_STORE_U32(r11.u32 + 260, ctx.r9.u32);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// stw r10,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r10.u32);
loc_822507E8:
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,260(r11)
	PPC_STORE_U32(r11.u32 + 260, ctx.r10.u32);
	// lwz r30,32(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82311960
	sub_82311960(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f2,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f27.f64;
	// lfs f0,17324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82250824:
	// lwz r30,44(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmpwi r30,0
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8225088c
	if (cr0.eq) goto loc_8225088C;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82250858
	if (cr6.eq) goto loc_82250858;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// fmr f2,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f27.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x82250888
	goto loc_82250888;
loc_82250858:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82311960
	sub_82311960(ctx, base);
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 100);
	f0.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - f0.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// lfs f0,8748(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8748);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82250888:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8225088C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8239d630
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8225089C"))) PPC_WEAK_FUNC(sub_8225089C);
PPC_FUNC_IMPL(__imp__sub_8225089C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822508A0"))) PPC_WEAK_FUNC(sub_822508A0);
PPC_FUNC_IMPL(__imp__sub_822508A0) {
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
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82250938
	if (cr6.eq) goto loc_82250938;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,260(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// stb r10,64(r11)
	PPC_STORE_U8(r11.u32 + 64, ctx.r10.u8);
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// stw r8,260(r11)
	PPC_STORE_U32(r11.u32 + 260, ctx.r8.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r8,260(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// stb r10,160(r11)
	PPC_STORE_U8(r11.u32 + 160, ctx.r10.u8);
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// stw r8,260(r11)
	PPC_STORE_U32(r11.u32 + 260, ctx.r8.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r9,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r9.u32);
	// lwz r9,260(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r9,260(r11)
	PPC_STORE_U32(r11.u32 + 260, ctx.r9.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r9,260(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// stw r10,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r10.u32);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r9,260(r11)
	PPC_STORE_U32(r11.u32 + 260, ctx.r9.u32);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82250928
	if (cr6.eq) goto loc_82250928;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 104);
loc_82250928:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r11,164
	ctx.r3.s64 = r11.s64 + 164;
	// bl 0x82126b38
	sub_82126B38(ctx, base);
loc_82250938:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82250960
	if (cr0.eq) goto loc_82250960;
	// lwz r31,104(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// bl 0x821c55d0
	sub_821C55D0(ctx, base);
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r11.u32);
loc_82250960:
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

__attribute__((alias("__imp__sub_82250974"))) PPC_WEAK_FUNC(sub_82250974);
PPC_FUNC_IMPL(__imp__sub_82250974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82250978"))) PPC_WEAK_FUNC(sub_82250978);
PPC_FUNC_IMPL(__imp__sub_82250978) {
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
	// lwz r16,2272(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2272);
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
	// lwz r11,14960(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14960);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14956
	r29.s64 = ctx.r10.s64 + 14956;
	// bne 0x822509e4
	if (!cr0.eq) goto loc_822509E4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,14960(r30)
	PPC_STORE_U32(r30.u32 + 14960, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2176
	ctx.r4.s64 = r11.s64 + 2176;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14960(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14960);
loc_822509E4:
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
	// beq 0x82250a34
	if (cr0.eq) goto loc_82250A34;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-100
	ctx.r3.s64 = r26.s64 + -100;
	// bl 0x821275c8
	sub_821275C8(ctx, base);
loc_82250A14:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82250dcc
	if (cr0.eq) goto loc_82250DCC;
	// andi. r11,r27,17
	r11.u64 = r27.u64 & 17;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82250dc4
	if (!cr0.eq) goto loc_82250DC4;
	// addi r3,r26,-112
	ctx.r3.s64 = r26.s64 + -112;
	// bl 0x822508a0
	sub_822508A0(ctx, base);
	// b 0x82250dc4
	goto loc_82250DC4;
loc_82250A34:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14952
	r29.s64 = ctx.r10.s64 + 14952;
	// bne 0x82250a60
	if (!cr0.eq) goto loc_82250A60;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,14960(r30)
	PPC_STORE_U32(r30.u32 + 14960, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2168
	ctx.r4.s64 = r11.s64 + 2168;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14960(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14960);
loc_82250A60:
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
	// beq 0x82250a94
	if (cr0.eq) goto loc_82250A94;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-76
	ctx.r3.s64 = r26.s64 + -76;
	// bl 0x8224fe78
	sub_8224FE78(ctx, base);
	// b 0x82250dd0
	goto loc_82250DD0;
loc_82250A94:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14948
	r29.s64 = ctx.r10.s64 + 14948;
	// bne 0x82250ac0
	if (!cr0.eq) goto loc_82250AC0;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,14960(r30)
	PPC_STORE_U32(r30.u32 + 14960, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2156
	ctx.r4.s64 = r11.s64 + 2156;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14960(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14960);
loc_82250AC0:
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
	// beq 0x82250af4
	if (cr0.eq) goto loc_82250AF4;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-88
	ctx.r3.s64 = r26.s64 + -88;
	// bl 0x8224fe78
	sub_8224FE78(ctx, base);
	// b 0x82250a14
	goto loc_82250A14;
loc_82250AF4:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14944
	r29.s64 = ctx.r10.s64 + 14944;
	// bne 0x82250b20
	if (!cr0.eq) goto loc_82250B20;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,14960(r30)
	PPC_STORE_U32(r30.u32 + 14960, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2144
	ctx.r4.s64 = r11.s64 + 2144;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14960(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14960);
loc_82250B20:
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
	// beq 0x82250b54
	if (cr0.eq) goto loc_82250B54;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-16
	ctx.r3.s64 = r26.s64 + -16;
loc_82250B4C:
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x82250dd0
	goto loc_82250DD0;
loc_82250B54:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14940
	r29.s64 = ctx.r10.s64 + 14940;
	// bne 0x82250b80
	if (!cr0.eq) goto loc_82250B80;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,14960(r30)
	PPC_STORE_U32(r30.u32 + 14960, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,28400
	ctx.r4.s64 = r11.s64 + 28400;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14960(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14960);
loc_82250B80:
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
	// beq 0x82250bd4
	if (cr0.eq) goto loc_82250BD4;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-64
	ctx.r3.s64 = r26.s64 + -64;
	// bl 0x82147280
	sub_82147280(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82250dcc
	if (cr0.eq) goto loc_82250DCC;
	// andi. r11,r27,17
	r11.u64 = r27.u64 & 17;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82250dc4
	if (!cr0.eq) goto loc_82250DC4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r26,-52
	ctx.r3.s64 = r26.s64 + -52;
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// b 0x82250dc4
	goto loc_82250DC4;
loc_82250BD4:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14936
	r29.s64 = ctx.r10.s64 + 14936;
	// bne 0x82250c00
	if (!cr0.eq) goto loc_82250C00;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,14960(r30)
	PPC_STORE_U32(r30.u32 + 14960, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2132
	ctx.r4.s64 = r11.s64 + 2132;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14960(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14960);
loc_82250C00:
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
	// beq 0x82250c34
	if (cr0.eq) goto loc_82250C34;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-52
	ctx.r3.s64 = r26.s64 + -52;
	// bl 0x8216e0b0
	sub_8216E0B0(ctx, base);
	// b 0x82250dd0
	goto loc_82250DD0;
loc_82250C34:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14932
	r29.s64 = ctx.r10.s64 + 14932;
	// bne 0x82250c60
	if (!cr0.eq) goto loc_82250C60;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,14960(r30)
	PPC_STORE_U32(r30.u32 + 14960, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2116
	ctx.r4.s64 = r11.s64 + 2116;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14960(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14960);
loc_82250C60:
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
	// beq 0x82250c90
	if (cr0.eq) goto loc_82250C90;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-28
	ctx.r3.s64 = r26.s64 + -28;
	// b 0x82250b4c
	goto loc_82250B4C;
loc_82250C90:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14928
	r29.s64 = ctx.r10.s64 + 14928;
	// bne 0x82250cbc
	if (!cr0.eq) goto loc_82250CBC;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,14960(r30)
	PPC_STORE_U32(r30.u32 + 14960, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2100
	ctx.r4.s64 = r11.s64 + 2100;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14960(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14960);
loc_82250CBC:
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
	// beq 0x82250cec
	if (cr0.eq) goto loc_82250CEC;
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
	// b 0x82250b4c
	goto loc_82250B4C;
loc_82250CEC:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14924
	r29.s64 = ctx.r10.s64 + 14924;
	// bne 0x82250d18
	if (!cr0.eq) goto loc_82250D18;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,14960(r30)
	PPC_STORE_U32(r30.u32 + 14960, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2080
	ctx.r4.s64 = r11.s64 + 2080;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14960(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14960);
loc_82250D18:
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
	// beq 0x82250d48
	if (cr0.eq) goto loc_82250D48;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-20
	ctx.r3.s64 = r26.s64 + -20;
	// b 0x82250b4c
	goto loc_82250B4C;
loc_82250D48:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14920
	r29.s64 = ctx.r10.s64 + 14920;
	// bne 0x82250d70
	if (!cr0.eq) goto loc_82250D70;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,14960(r30)
	PPC_STORE_U32(r30.u32 + 14960, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2064
	ctx.r4.s64 = r11.s64 + 2064;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82250D70:
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
	// beq 0x82250dcc
	if (cr0.eq) goto loc_82250DCC;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-40
	ctx.r3.s64 = r26.s64 + -40;
	// bl 0x821eaef0
	sub_821EAEF0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82250dcc
	if (cr0.eq) goto loc_82250DCC;
	// andi. r11,r27,17
	r11.u64 = r27.u64 & 17;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82250dc4
	if (!cr0.eq) goto loc_82250DC4;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// stfs f1,-12(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r26.u32 + -12, temp.u32);
loc_82250DC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82250dd0
	goto loc_82250DD0;
loc_82250DCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82250DD0:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82250980"))) PPC_WEAK_FUNC(sub_82250980);
PPC_FUNC_IMPL(__imp__sub_82250980) {
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
	// lwz r11,14960(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14960);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14956
	r29.s64 = ctx.r10.s64 + 14956;
	// bne 0x822509e4
	if (!cr0.eq) goto loc_822509E4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,14960(r30)
	PPC_STORE_U32(r30.u32 + 14960, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2176
	ctx.r4.s64 = r11.s64 + 2176;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14960(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14960);
loc_822509E4:
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
	// beq 0x82250a34
	if (cr0.eq) goto loc_82250A34;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-100
	ctx.r3.s64 = r26.s64 + -100;
	// bl 0x821275c8
	sub_821275C8(ctx, base);
loc_82250A14:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82250dcc
	if (cr0.eq) goto loc_82250DCC;
	// andi. r11,r27,17
	r11.u64 = r27.u64 & 17;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82250dc4
	if (!cr0.eq) goto loc_82250DC4;
	// addi r3,r26,-112
	ctx.r3.s64 = r26.s64 + -112;
	// bl 0x822508a0
	sub_822508A0(ctx, base);
	// b 0x82250dc4
	goto loc_82250DC4;
loc_82250A34:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14952
	r29.s64 = ctx.r10.s64 + 14952;
	// bne 0x82250a60
	if (!cr0.eq) goto loc_82250A60;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,14960(r30)
	PPC_STORE_U32(r30.u32 + 14960, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2168
	ctx.r4.s64 = r11.s64 + 2168;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14960(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14960);
loc_82250A60:
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
	// beq 0x82250a94
	if (cr0.eq) goto loc_82250A94;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-76
	ctx.r3.s64 = r26.s64 + -76;
	// bl 0x8224fe78
	sub_8224FE78(ctx, base);
	// b 0x82250dd0
	goto loc_82250DD0;
loc_82250A94:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14948
	r29.s64 = ctx.r10.s64 + 14948;
	// bne 0x82250ac0
	if (!cr0.eq) goto loc_82250AC0;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,14960(r30)
	PPC_STORE_U32(r30.u32 + 14960, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2156
	ctx.r4.s64 = r11.s64 + 2156;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14960(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14960);
loc_82250AC0:
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
	// beq 0x82250af4
	if (cr0.eq) goto loc_82250AF4;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-88
	ctx.r3.s64 = r26.s64 + -88;
	// bl 0x8224fe78
	sub_8224FE78(ctx, base);
	// b 0x82250a14
	goto loc_82250A14;
loc_82250AF4:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14944
	r29.s64 = ctx.r10.s64 + 14944;
	// bne 0x82250b20
	if (!cr0.eq) goto loc_82250B20;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,14960(r30)
	PPC_STORE_U32(r30.u32 + 14960, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2144
	ctx.r4.s64 = r11.s64 + 2144;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14960(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14960);
loc_82250B20:
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
	// beq 0x82250b54
	if (cr0.eq) goto loc_82250B54;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-16
	ctx.r3.s64 = r26.s64 + -16;
loc_82250B4C:
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x82250dd0
	goto loc_82250DD0;
loc_82250B54:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14940
	r29.s64 = ctx.r10.s64 + 14940;
	// bne 0x82250b80
	if (!cr0.eq) goto loc_82250B80;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,14960(r30)
	PPC_STORE_U32(r30.u32 + 14960, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,28400
	ctx.r4.s64 = r11.s64 + 28400;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14960(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14960);
loc_82250B80:
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
	// beq 0x82250bd4
	if (cr0.eq) goto loc_82250BD4;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-64
	ctx.r3.s64 = r26.s64 + -64;
	// bl 0x82147280
	sub_82147280(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82250dcc
	if (cr0.eq) goto loc_82250DCC;
	// andi. r11,r27,17
	r11.u64 = r27.u64 & 17;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82250dc4
	if (!cr0.eq) goto loc_82250DC4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r26,-52
	ctx.r3.s64 = r26.s64 + -52;
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// b 0x82250dc4
	goto loc_82250DC4;
loc_82250BD4:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14936
	r29.s64 = ctx.r10.s64 + 14936;
	// bne 0x82250c00
	if (!cr0.eq) goto loc_82250C00;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,14960(r30)
	PPC_STORE_U32(r30.u32 + 14960, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2132
	ctx.r4.s64 = r11.s64 + 2132;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14960(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14960);
loc_82250C00:
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
	// beq 0x82250c34
	if (cr0.eq) goto loc_82250C34;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-52
	ctx.r3.s64 = r26.s64 + -52;
	// bl 0x8216e0b0
	sub_8216E0B0(ctx, base);
	// b 0x82250dd0
	goto loc_82250DD0;
loc_82250C34:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14932
	r29.s64 = ctx.r10.s64 + 14932;
	// bne 0x82250c60
	if (!cr0.eq) goto loc_82250C60;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,14960(r30)
	PPC_STORE_U32(r30.u32 + 14960, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2116
	ctx.r4.s64 = r11.s64 + 2116;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14960(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14960);
loc_82250C60:
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
	// beq 0x82250c90
	if (cr0.eq) goto loc_82250C90;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-28
	ctx.r3.s64 = r26.s64 + -28;
	// b 0x82250b4c
	goto loc_82250B4C;
loc_82250C90:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14928
	r29.s64 = ctx.r10.s64 + 14928;
	// bne 0x82250cbc
	if (!cr0.eq) goto loc_82250CBC;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,14960(r30)
	PPC_STORE_U32(r30.u32 + 14960, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2100
	ctx.r4.s64 = r11.s64 + 2100;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14960(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14960);
loc_82250CBC:
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
	// beq 0x82250cec
	if (cr0.eq) goto loc_82250CEC;
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
	// b 0x82250b4c
	goto loc_82250B4C;
loc_82250CEC:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14924
	r29.s64 = ctx.r10.s64 + 14924;
	// bne 0x82250d18
	if (!cr0.eq) goto loc_82250D18;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,14960(r30)
	PPC_STORE_U32(r30.u32 + 14960, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2080
	ctx.r4.s64 = r11.s64 + 2080;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14960(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14960);
loc_82250D18:
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
	// beq 0x82250d48
	if (cr0.eq) goto loc_82250D48;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-20
	ctx.r3.s64 = r26.s64 + -20;
	// b 0x82250b4c
	goto loc_82250B4C;
loc_82250D48:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14920
	r29.s64 = ctx.r10.s64 + 14920;
	// bne 0x82250d70
	if (!cr0.eq) goto loc_82250D70;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,14960(r30)
	PPC_STORE_U32(r30.u32 + 14960, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2064
	ctx.r4.s64 = r11.s64 + 2064;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82250D70:
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
	// beq 0x82250dcc
	if (cr0.eq) goto loc_82250DCC;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-40
	ctx.r3.s64 = r26.s64 + -40;
	// bl 0x821eaef0
	sub_821EAEF0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82250dcc
	if (cr0.eq) goto loc_82250DCC;
	// andi. r11,r27,17
	r11.u64 = r27.u64 & 17;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82250dc4
	if (!cr0.eq) goto loc_82250DC4;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// stfs f1,-12(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r26.u32 + -12, temp.u32);
loc_82250DC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82250dd0
	goto loc_82250DD0;
loc_82250DCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82250DD0:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82250DD8"))) PPC_WEAK_FUNC(sub_82250DD8);
PPC_FUNC_IMPL(__imp__sub_82250DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14960
	r11.s64 = r11.s64 + 14960;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14960
	ctx.r10.s64 = ctx.r10.s64 + 14960;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82250E00"))) PPC_WEAK_FUNC(sub_82250E00);
PPC_FUNC_IMPL(__imp__sub_82250E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14960
	r11.s64 = r11.s64 + 14960;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14960
	ctx.r10.s64 = ctx.r10.s64 + 14960;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82250E28"))) PPC_WEAK_FUNC(sub_82250E28);
PPC_FUNC_IMPL(__imp__sub_82250E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14960
	r11.s64 = r11.s64 + 14960;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14960
	ctx.r10.s64 = ctx.r10.s64 + 14960;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82250E50"))) PPC_WEAK_FUNC(sub_82250E50);
PPC_FUNC_IMPL(__imp__sub_82250E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14960
	r11.s64 = r11.s64 + 14960;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14960
	ctx.r10.s64 = ctx.r10.s64 + 14960;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82250E78"))) PPC_WEAK_FUNC(sub_82250E78);
PPC_FUNC_IMPL(__imp__sub_82250E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14960
	r11.s64 = r11.s64 + 14960;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14960
	ctx.r10.s64 = ctx.r10.s64 + 14960;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82250EA0"))) PPC_WEAK_FUNC(sub_82250EA0);
PPC_FUNC_IMPL(__imp__sub_82250EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14960
	r11.s64 = r11.s64 + 14960;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14960
	ctx.r10.s64 = ctx.r10.s64 + 14960;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82250EC8"))) PPC_WEAK_FUNC(sub_82250EC8);
PPC_FUNC_IMPL(__imp__sub_82250EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14960
	r11.s64 = r11.s64 + 14960;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14960
	ctx.r10.s64 = ctx.r10.s64 + 14960;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82250EF0"))) PPC_WEAK_FUNC(sub_82250EF0);
PPC_FUNC_IMPL(__imp__sub_82250EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14960
	r11.s64 = r11.s64 + 14960;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14960
	ctx.r10.s64 = ctx.r10.s64 + 14960;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82250F18"))) PPC_WEAK_FUNC(sub_82250F18);
PPC_FUNC_IMPL(__imp__sub_82250F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14960
	r11.s64 = r11.s64 + 14960;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14960
	ctx.r10.s64 = ctx.r10.s64 + 14960;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82250F40"))) PPC_WEAK_FUNC(sub_82250F40);
PPC_FUNC_IMPL(__imp__sub_82250F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14960
	r11.s64 = r11.s64 + 14960;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14960
	ctx.r10.s64 = ctx.r10.s64 + 14960;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82250F68"))) PPC_WEAK_FUNC(sub_82250F68);
PPC_FUNC_IMPL(__imp__sub_82250F68) {
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
	// beq cr6,0x82250fa0
	if (cr6.eq) goto loc_82250FA0;
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
loc_82250FA0:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82250fd0
	if (!cr6.eq) goto loc_82250FD0;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,10812
	ctx.r6.s64 = r11.s64 + 10812;
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
	// bl 0x8224f7a8
	sub_8224F7A8(ctx, base);
loc_82250FD0:
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

__attribute__((alias("__imp__sub_82250FE4"))) PPC_WEAK_FUNC(sub_82250FE4);
PPC_FUNC_IMPL(__imp__sub_82250FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82250FE8"))) PPC_WEAK_FUNC(sub_82250FE8);
PPC_FUNC_IMPL(__imp__sub_82250FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82250378
	sub_82250378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82250FF4"))) PPC_WEAK_FUNC(sub_82250FF4);
PPC_FUNC_IMPL(__imp__sub_82250FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82250FF8"))) PPC_WEAK_FUNC(sub_82250FF8);
PPC_FUNC_IMPL(__imp__sub_82250FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82250980
	sub_82250980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82251004"))) PPC_WEAK_FUNC(sub_82251004);
PPC_FUNC_IMPL(__imp__sub_82251004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251008"))) PPC_WEAK_FUNC(sub_82251008);
PPC_FUNC_IMPL(__imp__sub_82251008) {
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
	// addi r30,r3,-112
	r30.s64 = ctx.r3.s64 + -112;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,112
	r31.s64 = r30.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224f840
	sub_8224F840(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82251040
	if (cr0.eq) goto loc_82251040;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_82251040:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8225104C"))) PPC_WEAK_FUNC(sub_8225104C);
PPC_FUNC_IMPL(__imp__sub_8225104C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251050"))) PPC_WEAK_FUNC(sub_82251050);
PPC_FUNC_IMPL(__imp__sub_82251050) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
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
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bgt cr6,0x82251194
	if (cr6.gt) goto loc_82251194;
	// lwz r11,-108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -108);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-108
	ctx.r3.s64 = r11.s64 + -108;
	// bl 0x82315350
	sub_82315350(ctx, base);
	// addi r4,r31,-100
	ctx.r4.s64 = r31.s64 + -100;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82127898
	sub_82127898(ctx, base);
	// addi r4,r31,-88
	ctx.r4.s64 = r31.s64 + -88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8224fd90
	sub_8224FD90(ctx, base);
	// addi r4,r31,-76
	ctx.r4.s64 = r31.s64 + -76;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8224fd90
	sub_8224FD90(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = r31.s64 + -64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8221ff18
	sub_8221FF18(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823595e0
	sub_823595E0(ctx, base);
	// lwz r3,-56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -56);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8225111c
	if (cr0.eq) goto loc_8225111C;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r11,1232
	r29.s64 = r11.s64 + 1232;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r28,r11,920
	r28.s64 = r11.s64 + 920;
	// bl 0x8231fac8
	sub_8231FAC8(ctx, base);
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82251120
	goto loc_82251120;
loc_8225111C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82251120:
	// addi r3,r31,-52
	ctx.r3.s64 = r31.s64 + -52;
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-28
	ctx.r4.s64 = r31.s64 + -28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-20
	ctx.r4.s64 = r31.s64 + -20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-16
	ctx.r4.s64 = r31.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bge cr6,0x82251170
	if (!cr6.lt) goto loc_82251170;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
loc_82251170:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x8225118c
	if (!cr6.gt) goto loc_8225118C;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-24
	ctx.r4.s64 = r31.s64 + -24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_8225118C:
	// addi r3,r31,-112
	ctx.r3.s64 = r31.s64 + -112;
	// bl 0x822508a0
	sub_822508A0(ctx, base);
loc_82251194:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8225119C"))) PPC_WEAK_FUNC(sub_8225119C);
PPC_FUNC_IMPL(__imp__sub_8225119C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822511A0"))) PPC_WEAK_FUNC(sub_822511A0);
PPC_FUNC_IMPL(__imp__sub_822511A0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,-108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -108);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-108
	ctx.r3.s64 = r11.s64 + -108;
	// bl 0x82315258
	sub_82315258(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,17004
	ctx.r6.s64 = r11.s64 + 17004;
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
	// beq 0x8225125c
	if (cr0.eq) goto loc_8225125C;
	// addi r3,r31,-100
	ctx.r3.s64 = r31.s64 + -100;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x82126b38
	sub_82126B38(ctx, base);
	// addi r3,r31,-88
	ctx.r3.s64 = r31.s64 + -88;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x8224f7a8
	sub_8224F7A8(ctx, base);
	// addi r3,r31,-76
	ctx.r3.s64 = r31.s64 + -76;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x8224f7a8
	sub_8224F7A8(ctx, base);
	// addi r3,r31,-64
	ctx.r3.s64 = r31.s64 + -64;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x821297c8
	sub_821297C8(ctx, base);
	// addi r3,r31,-52
	ctx.r3.s64 = r31.s64 + -52;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,-28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -28, temp.u32);
	// addi r3,r31,-112
	ctx.r3.s64 = r31.s64 + -112;
	// lfs f0,92(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 92);
	f0.f64 = double(temp.f32);
	// stfs f0,-20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -20, temp.u32);
	// lfs f0,96(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -16, temp.u32);
	// lfs f0,88(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,-24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -24, temp.u32);
	// bl 0x822508a0
	sub_822508A0(ctx, base);
loc_8225125C:
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

__attribute__((alias("__imp__sub_82251274"))) PPC_WEAK_FUNC(sub_82251274);
PPC_FUNC_IMPL(__imp__sub_82251274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251278"))) PPC_WEAK_FUNC(sub_82251278);
PPC_FUNC_IMPL(__imp__sub_82251278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82251050
	sub_82251050(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82251284"))) PPC_WEAK_FUNC(sub_82251284);
PPC_FUNC_IMPL(__imp__sub_82251284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251288"))) PPC_WEAK_FUNC(sub_82251288);
PPC_FUNC_IMPL(__imp__sub_82251288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x822511a0
	sub_822511A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82251294"))) PPC_WEAK_FUNC(sub_82251294);
PPC_FUNC_IMPL(__imp__sub_82251294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251298"))) PPC_WEAK_FUNC(sub_82251298);
PPC_FUNC_IMPL(__imp__sub_82251298) {
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
	// lwz r11,-332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -332);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-332
	ctx.r3.s64 = r11.s64 + -332;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,-332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -332);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-332
	ctx.r3.s64 = r11.s64 + -332;
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

__attribute__((alias("__imp__sub_82251310"))) PPC_WEAK_FUNC(sub_82251310);
PPC_FUNC_IMPL(__imp__sub_82251310) {
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f31,14968(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 14968);
	f31.f64 = double(temp.f32);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
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

__attribute__((alias("__imp__sub_8225137C"))) PPC_WEAK_FUNC(sub_8225137C);
PPC_FUNC_IMPL(__imp__sub_8225137C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251380"))) PPC_WEAK_FUNC(sub_82251380);
PPC_FUNC_IMPL(__imp__sub_82251380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15012
	r11.s64 = r11.s64 + 15012;
	// lbz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,204
	ctx.r3.s64 = r11.s64 + 204;
	// b 0x821b2800
	sub_821B2800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822513A0"))) PPC_WEAK_FUNC(sub_822513A0);
PPC_FUNC_IMPL(__imp__sub_822513A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822513A4"))) PPC_WEAK_FUNC(sub_822513A4);
PPC_FUNC_IMPL(__imp__sub_822513A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822513A8"))) PPC_WEAK_FUNC(sub_822513A8);
PPC_FUNC_IMPL(__imp__sub_822513A8) {
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
	// lwz r16,2504(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2504);
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,2484
	r11.s64 = r11.s64 + 2484;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822513f0
	if (cr0.eq) goto loc_822513F0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_822513F0:
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

__attribute__((alias("__imp__sub_822513B0"))) PPC_WEAK_FUNC(sub_822513B0);
PPC_FUNC_IMPL(__imp__sub_822513B0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,2484
	r11.s64 = r11.s64 + 2484;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822513f0
	if (cr0.eq) goto loc_822513F0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_822513F0:
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

__attribute__((alias("__imp__sub_82251414"))) PPC_WEAK_FUNC(sub_82251414);
PPC_FUNC_IMPL(__imp__sub_82251414) {
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

__attribute__((alias("__imp__sub_8225143C"))) PPC_WEAK_FUNC(sub_8225143C);
PPC_FUNC_IMPL(__imp__sub_8225143C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251440"))) PPC_WEAK_FUNC(sub_82251440);
PPC_FUNC_IMPL(__imp__sub_82251440) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82251470
	if (!cr6.eq) goto loc_82251470;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82251574
	if (!cr6.eq) goto loc_82251574;
loc_82251470:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822514d4
	if (cr0.eq) goto loc_822514D4;
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bne 0x822514a4
	if (!cr0.eq) goto loc_822514A4;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822514d4
	if (cr0.eq) goto loc_822514D4;
	// b 0x822514c0
	goto loc_822514C0;
loc_822514A4:
	// bl 0x82322c68
	sub_82322C68(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822514d4
	if (cr0.eq) goto loc_822514D4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_822514C0:
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
loc_822514D4:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// beq 0x82251550
	if (cr0.eq) goto loc_82251550;
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82315aa8
	sub_82315AA8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82251550
	if (!cr0.eq) goto loc_82251550;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82251550
	if (cr0.eq) goto loc_82251550;
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
loc_82251550:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// beq cr6,0x82251574
	if (cr6.eq) goto loc_82251574;
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
loc_82251574:
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

__attribute__((alias("__imp__sub_82251590"))) PPC_WEAK_FUNC(sub_82251590);
PPC_FUNC_IMPL(__imp__sub_82251590) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822515f8
	if (cr0.eq) goto loc_822515F8;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,15600
	ctx.r3.s64 = r11.s64 + 15600;
	// bl 0x8235a0b8
	sub_8235A0B8(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r30,r11,1664
	r30.s64 = r11.s64 + 1664;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,1688
	r29.s64 = r11.s64 + 1688;
	// bl 0x82322c68
	sub_82322C68(ctx, base);
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
	// li r11,0
	r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x82251440
	sub_82251440(ctx, base);
loc_822515F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82251600"))) PPC_WEAK_FUNC(sub_82251600);
PPC_FUNC_IMPL(__imp__sub_82251600) {
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
	// lwz r16,2592(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2592);
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,2572
	r11.s64 = r11.s64 + 2572;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82251648
	if (cr0.eq) goto loc_82251648;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_82251648:
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

__attribute__((alias("__imp__sub_82251608"))) PPC_WEAK_FUNC(sub_82251608);
PPC_FUNC_IMPL(__imp__sub_82251608) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,2572
	r11.s64 = r11.s64 + 2572;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82251648
	if (cr0.eq) goto loc_82251648;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_82251648:
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

__attribute__((alias("__imp__sub_8225166C"))) PPC_WEAK_FUNC(sub_8225166C);
PPC_FUNC_IMPL(__imp__sub_8225166C) {
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

__attribute__((alias("__imp__sub_82251694"))) PPC_WEAK_FUNC(sub_82251694);
PPC_FUNC_IMPL(__imp__sub_82251694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251698"))) PPC_WEAK_FUNC(sub_82251698);
PPC_FUNC_IMPL(__imp__sub_82251698) {
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
	// bl 0x822513b0
	sub_822513B0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822516c8
	if (cr0.eq) goto loc_822516C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822516C8:
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

__attribute__((alias("__imp__sub_822516E4"))) PPC_WEAK_FUNC(sub_822516E4);
PPC_FUNC_IMPL(__imp__sub_822516E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822516E8"))) PPC_WEAK_FUNC(sub_822516E8);
PPC_FUNC_IMPL(__imp__sub_822516E8) {
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
	// bl 0x82251608
	sub_82251608(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82251718
	if (cr0.eq) goto loc_82251718;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82251718:
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

__attribute__((alias("__imp__sub_82251734"))) PPC_WEAK_FUNC(sub_82251734);
PPC_FUNC_IMPL(__imp__sub_82251734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251738"))) PPC_WEAK_FUNC(sub_82251738);
PPC_FUNC_IMPL(__imp__sub_82251738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r16,2648(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2648);
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r4,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r4.u32);
	// addi r11,r11,2484
	r11.s64 = r11.s64 + 2484;
	// stw r5,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r5.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// beq cr6,0x82251788
	if (cr6.eq) goto loc_82251788;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_82251788:
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

__attribute__((alias("__imp__sub_82251740"))) PPC_WEAK_FUNC(sub_82251740);
PPC_FUNC_IMPL(__imp__sub_82251740) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r4,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r4.u32);
	// addi r11,r11,2484
	r11.s64 = r11.s64 + 2484;
	// stw r5,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r5.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// beq cr6,0x82251788
	if (cr6.eq) goto loc_82251788;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_82251788:
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

__attribute__((alias("__imp__sub_822517A4"))) PPC_WEAK_FUNC(sub_822517A4);
PPC_FUNC_IMPL(__imp__sub_822517A4) {
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

__attribute__((alias("__imp__sub_822517CC"))) PPC_WEAK_FUNC(sub_822517CC);
PPC_FUNC_IMPL(__imp__sub_822517CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822517D0"))) PPC_WEAK_FUNC(sub_822517D0);
PPC_FUNC_IMPL(__imp__sub_822517D0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// beq cr6,0x82251820
	if (cr6.eq) goto loc_82251820;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82251808
	if (cr6.eq) goto loc_82251808;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_82251808:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// beq cr6,0x82251820
	if (cr6.eq) goto loc_82251820;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_82251820:
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

__attribute__((alias("__imp__sub_82251838"))) PPC_WEAK_FUNC(sub_82251838);
PPC_FUNC_IMPL(__imp__sub_82251838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r16,2704(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2704);
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r4,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r4.u32);
	// addi r11,r11,2572
	r11.s64 = r11.s64 + 2572;
	// stw r5,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r5.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// beq cr6,0x82251888
	if (cr6.eq) goto loc_82251888;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_82251888:
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

__attribute__((alias("__imp__sub_82251840"))) PPC_WEAK_FUNC(sub_82251840);
PPC_FUNC_IMPL(__imp__sub_82251840) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r4,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r4.u32);
	// addi r11,r11,2572
	r11.s64 = r11.s64 + 2572;
	// stw r5,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r5.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// beq cr6,0x82251888
	if (cr6.eq) goto loc_82251888;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_82251888:
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

__attribute__((alias("__imp__sub_822518A4"))) PPC_WEAK_FUNC(sub_822518A4);
PPC_FUNC_IMPL(__imp__sub_822518A4) {
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

__attribute__((alias("__imp__sub_822518CC"))) PPC_WEAK_FUNC(sub_822518CC);
PPC_FUNC_IMPL(__imp__sub_822518CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822518D0"))) PPC_WEAK_FUNC(sub_822518D0);
PPC_FUNC_IMPL(__imp__sub_822518D0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// beq cr6,0x82251920
	if (cr6.eq) goto loc_82251920;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82251908
	if (cr6.eq) goto loc_82251908;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_82251908:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// beq cr6,0x82251920
	if (cr6.eq) goto loc_82251920;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_82251920:
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

__attribute__((alias("__imp__sub_82251938"))) PPC_WEAK_FUNC(sub_82251938);
PPC_FUNC_IMPL(__imp__sub_82251938) {
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
	// beq 0x82251978
	if (cr0.eq) goto loc_82251978;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,17184
	ctx.r3.s64 = r11.s64 + 17184;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82251980
	goto loc_82251980;
loc_82251978:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82251980:
	// mulli r3,r31,48
	ctx.r3.s64 = r31.s64 * 48;
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

__attribute__((alias("__imp__sub_8225199C"))) PPC_WEAK_FUNC(sub_8225199C);
PPC_FUNC_IMPL(__imp__sub_8225199C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822519A0"))) PPC_WEAK_FUNC(sub_822519A0);
PPC_FUNC_IMPL(__imp__sub_822519A0) {
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822519cc
	if (cr0.eq) goto loc_822519CC;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
loc_822519C4:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x822519e0
	goto loc_822519E0;
loc_822519CC:
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822519c4
	if (!cr0.eq) goto loc_822519C4;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-2080
	r11.s64 = r11.s64 + -2080;
loc_822519E0:
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-2060
	r11.s64 = r11.s64 + -2060;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82276d50
	sub_82276D50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82251A18"))) PPC_WEAK_FUNC(sub_82251A18);
PPC_FUNC_IMPL(__imp__sub_82251A18) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e16e8
	sub_821E16E8(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r11,10624
	r31.s64 = r11.s64 + 10624;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r30,r11,920
	r30.s64 = r11.s64 + 920;
	// bl 0x823173f0
	sub_823173F0(ctx, base);
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

__attribute__((alias("__imp__sub_82251A78"))) PPC_WEAK_FUNC(sub_82251A78);
PPC_FUNC_IMPL(__imp__sub_82251A78) {
	PPC_FUNC_PROLOGUE();
	// b 0x822513b0
	sub_822513B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82251A7C"))) PPC_WEAK_FUNC(sub_82251A7C);
PPC_FUNC_IMPL(__imp__sub_82251A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251A80"))) PPC_WEAK_FUNC(sub_82251A80);
PPC_FUNC_IMPL(__imp__sub_82251A80) {
	PPC_FUNC_PROLOGUE();
	// b 0x82251608
	sub_82251608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82251A84"))) PPC_WEAK_FUNC(sub_82251A84);
PPC_FUNC_IMPL(__imp__sub_82251A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251A88"))) PPC_WEAK_FUNC(sub_82251A88);
PPC_FUNC_IMPL(__imp__sub_82251A88) {
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
	// lwz r16,2776(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2776);
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,2556
	r11.s64 = r11.s64 + 2556;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82251440
	sub_82251440(ctx, base);
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

__attribute__((alias("__imp__sub_82251A90"))) PPC_WEAK_FUNC(sub_82251A90);
PPC_FUNC_IMPL(__imp__sub_82251A90) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,2556
	r11.s64 = r11.s64 + 2556;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82251440
	sub_82251440(ctx, base);
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

__attribute__((alias("__imp__sub_82251AE8"))) PPC_WEAK_FUNC(sub_82251AE8);
PPC_FUNC_IMPL(__imp__sub_82251AE8) {
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

__attribute__((alias("__imp__sub_82251B10"))) PPC_WEAK_FUNC(sub_82251B10);
PPC_FUNC_IMPL(__imp__sub_82251B10) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82251b48
	if (cr6.eq) goto loc_82251B48;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82251B48:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82251b78
	if (!cr6.eq) goto loc_82251B78;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,1664
	ctx.r6.s64 = r11.s64 + 1664;
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
	// bl 0x82251440
	sub_82251440(ctx, base);
loc_82251B78:
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

__attribute__((alias("__imp__sub_82251B8C"))) PPC_WEAK_FUNC(sub_82251B8C);
PPC_FUNC_IMPL(__imp__sub_82251B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251B90"))) PPC_WEAK_FUNC(sub_82251B90);
PPC_FUNC_IMPL(__imp__sub_82251B90) {
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
	// bl 0x822513b0
	sub_822513B0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82251bc0
	if (cr0.eq) goto loc_82251BC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82251BC0:
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

__attribute__((alias("__imp__sub_82251BDC"))) PPC_WEAK_FUNC(sub_82251BDC);
PPC_FUNC_IMPL(__imp__sub_82251BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251BE0"))) PPC_WEAK_FUNC(sub_82251BE0);
PPC_FUNC_IMPL(__imp__sub_82251BE0) {
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
	// bl 0x82251a90
	sub_82251A90(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82251c10
	if (cr0.eq) goto loc_82251C10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82251C10:
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

__attribute__((alias("__imp__sub_82251C2C"))) PPC_WEAK_FUNC(sub_82251C2C);
PPC_FUNC_IMPL(__imp__sub_82251C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251C30"))) PPC_WEAK_FUNC(sub_82251C30);
PPC_FUNC_IMPL(__imp__sub_82251C30) {
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
	// bl 0x82251608
	sub_82251608(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82251c60
	if (cr0.eq) goto loc_82251C60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82251C60:
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

__attribute__((alias("__imp__sub_82251C7C"))) PPC_WEAK_FUNC(sub_82251C7C);
PPC_FUNC_IMPL(__imp__sub_82251C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251C80"))) PPC_WEAK_FUNC(sub_82251C80);
PPC_FUNC_IMPL(__imp__sub_82251C80) {
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
	// bl 0x82251938
	sub_82251938(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addic. r3,r31,8
	xer.ca = r31.u32 > 4294967287;
	ctx.r3.s64 = r31.s64 + 8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82251cbc
	if (cr0.eq) goto loc_82251CBC;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_82251CBC:
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

__attribute__((alias("__imp__sub_82251CD8"))) PPC_WEAK_FUNC(sub_82251CD8);
PPC_FUNC_IMPL(__imp__sub_82251CD8) {
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
	// beq 0x82251d00
	if (cr0.eq) goto loc_82251D00;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// b 0x82251d08
	goto loc_82251D08;
loc_82251D00:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
loc_82251D08:
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

__attribute__((alias("__imp__sub_82251D24"))) PPC_WEAK_FUNC(sub_82251D24);
PPC_FUNC_IMPL(__imp__sub_82251D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251D28"))) PPC_WEAK_FUNC(sub_82251D28);
PPC_FUNC_IMPL(__imp__sub_82251D28) {
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
	// beq 0x82251d50
	if (cr0.eq) goto loc_82251D50;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// b 0x82251d58
	goto loc_82251D58;
loc_82251D50:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
loc_82251D58:
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

__attribute__((alias("__imp__sub_82251D74"))) PPC_WEAK_FUNC(sub_82251D74);
PPC_FUNC_IMPL(__imp__sub_82251D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251D78"))) PPC_WEAK_FUNC(sub_82251D78);
PPC_FUNC_IMPL(__imp__sub_82251D78) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x823595e0
	sub_823595E0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82251df0
	if (cr0.eq) goto loc_82251DF0;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82251df0
	if (cr0.eq) goto loc_82251DF0;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r11,17316
	r30.s64 = r11.s64 + 17316;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,920
	r29.s64 = r11.s64 + 920;
	// bl 0x8231fac8
	sub_8231FAC8(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822517d0
	sub_822517D0(ctx, base);
	// b 0x82251e0c
	goto loc_82251E0C;
loc_82251DF0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82251e0c
	if (cr0.eq) goto loc_82251E0C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82251E0C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82251E18"))) PPC_WEAK_FUNC(sub_82251E18);
PPC_FUNC_IMPL(__imp__sub_82251E18) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x823595e0
	sub_823595E0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82251e90
	if (cr0.eq) goto loc_82251E90;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82251e90
	if (cr0.eq) goto loc_82251E90;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r11,17336
	r30.s64 = r11.s64 + 17336;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,920
	r29.s64 = r11.s64 + 920;
	// bl 0x8231fac8
	sub_8231FAC8(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822518d0
	sub_822518D0(ctx, base);
	// b 0x82251eac
	goto loc_82251EAC;
loc_82251E90:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82251eac
	if (cr0.eq) goto loc_82251EAC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82251EAC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82251EB8"))) PPC_WEAK_FUNC(sub_82251EB8);
PPC_FUNC_IMPL(__imp__sub_82251EB8) {
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
	// addi r31,r11,10624
	r31.s64 = r11.s64 + 10624;
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

__attribute__((alias("__imp__sub_82251F10"))) PPC_WEAK_FUNC(sub_82251F10);
PPC_FUNC_IMPL(__imp__sub_82251F10) {
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
	// lwz r16,2848(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2848);
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
	// bne cr6,0x82251f68
	if (!cr6.eq) goto loc_82251F68;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
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
	// beq 0x82251fa0
	if (cr0.eq) goto loc_82251FA0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82251fa0
	goto loc_82251FA0;
loc_82251F68:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,17316
	r30.s64 = r11.s64 + 17316;
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
	// bl 0x822517d0
	sub_822517D0(ctx, base);
loc_82251FA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82251F18"))) PPC_WEAK_FUNC(sub_82251F18);
PPC_FUNC_IMPL(__imp__sub_82251F18) {
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
	// bne cr6,0x82251f68
	if (!cr6.eq) goto loc_82251F68;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
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
	// beq 0x82251fa0
	if (cr0.eq) goto loc_82251FA0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82251fa0
	goto loc_82251FA0;
loc_82251F68:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,17316
	r30.s64 = r11.s64 + 17316;
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
	// bl 0x822517d0
	sub_822517D0(ctx, base);
loc_82251FA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82251FAC"))) PPC_WEAK_FUNC(sub_82251FAC);
PPC_FUNC_IMPL(__imp__sub_82251FAC) {
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

__attribute__((alias("__imp__sub_82251FD4"))) PPC_WEAK_FUNC(sub_82251FD4);
PPC_FUNC_IMPL(__imp__sub_82251FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251FD8"))) PPC_WEAK_FUNC(sub_82251FD8);
PPC_FUNC_IMPL(__imp__sub_82251FD8) {
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
	// lwz r16,2920(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2920);
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
	// bne cr6,0x82252030
	if (!cr6.eq) goto loc_82252030;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
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
	// beq 0x82252068
	if (cr0.eq) goto loc_82252068;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82252068
	goto loc_82252068;
loc_82252030:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,17336
	r30.s64 = r11.s64 + 17336;
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
	// bl 0x822518d0
	sub_822518D0(ctx, base);
loc_82252068:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82251FE0"))) PPC_WEAK_FUNC(sub_82251FE0);
PPC_FUNC_IMPL(__imp__sub_82251FE0) {
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
	// bne cr6,0x82252030
	if (!cr6.eq) goto loc_82252030;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
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
	// beq 0x82252068
	if (cr0.eq) goto loc_82252068;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82252068
	goto loc_82252068;
loc_82252030:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,17336
	r30.s64 = r11.s64 + 17336;
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
	// bl 0x822518d0
	sub_822518D0(ctx, base);
loc_82252068:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82252074"))) PPC_WEAK_FUNC(sub_82252074);
PPC_FUNC_IMPL(__imp__sub_82252074) {
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

__attribute__((alias("__imp__sub_8225209C"))) PPC_WEAK_FUNC(sub_8225209C);
PPC_FUNC_IMPL(__imp__sub_8225209C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822520A0"))) PPC_WEAK_FUNC(sub_822520A0);
PPC_FUNC_IMPL(__imp__sub_822520A0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x82251440
	sub_82251440(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,15600
	r30.s64 = r11.s64 + 15600;
	// beq 0x82252110
	if (cr0.eq) goto loc_82252110;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235a608
	sub_8235A608(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82252110
	if (cr0.eq) goto loc_82252110;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82252124
	if (!cr0.eq) goto loc_82252124;
	// b 0x8225217c
	goto loc_8225217C;
loc_82252110:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359d00
	sub_82359D00(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82252124:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,6556
	ctx.r6.s64 = r11.s64 + 6556;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,6532
	ctx.r5.s64 = r11.s64 + 6532;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r3.u32);
	// beq 0x82252164
	if (cr0.eq) goto loc_82252164;
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8225219c
	if (!cr0.eq) goto loc_8225219C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82251590
	sub_82251590(ctx, base);
	// b 0x8225219c
	goto loc_8225219C;
loc_82252164:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8225219c
	if (!cr0.eq) goto loc_8225219C;
loc_8225217C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_8225219C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822521A4"))) PPC_WEAK_FUNC(sub_822521A4);
PPC_FUNC_IMPL(__imp__sub_822521A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822521A8"))) PPC_WEAK_FUNC(sub_822521A8);
PPC_FUNC_IMPL(__imp__sub_822521A8) {
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
	// li r11,2
	r11.s64 = 2;
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
	// lwz r11,-332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -332);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-332
	ctx.r3.s64 = r11.s64 + -332;
	// bl 0x82314ff8
	sub_82314FF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-296
	ctx.r3.s64 = r31.s64 + -296;
	// bl 0x821b2a18
	sub_821B2A18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-116
	ctx.r3.s64 = r31.s64 + -116;
	// bl 0x821afb80
	sub_821AFB80(ctx, base);
	// addi r4,r31,-92
	ctx.r4.s64 = r31.s64 + -92;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r31,-76
	r29.s64 = r31.s64 + -76;
	// bl 0x82132e90
	sub_82132E90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82132e90
	sub_82132E90(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = r31.s64 + -60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r31,-44
	r29.s64 = r31.s64 + -44;
	// bl 0x82132e90
	sub_82132E90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82132e90
	sub_82132E90(ctx, base);
	// addi r4,r31,-112
	ctx.r4.s64 = r31.s64 + -112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r30,r31,-16
	r30.s64 = r31.s64 + -16;
	// addi r31,r31,-28
	r31.s64 = r31.s64 + -28;
	// bl 0x822519a0
	sub_822519A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82251cd8
	sub_82251CD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82251d28
	sub_82251D28(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82252260"))) PPC_WEAK_FUNC(sub_82252260);
PPC_FUNC_IMPL(__imp__sub_82252260) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r5,r11,15096
	ctx.r5.s64 = r11.s64 + 15096;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82252294
	if (cr0.eq) goto loc_82252294;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822522e4
	goto loc_822522E4;
loc_82252294:
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r3,236
	ctx.r3.s64 = ctx.r3.s64 + 236;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stfs f13,96(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 96, temp.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82370dc0
	sub_82370DC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822522E4:
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

__attribute__((alias("__imp__sub_822522F8"))) PPC_WEAK_FUNC(sub_822522F8);
PPC_FUNC_IMPL(__imp__sub_822522F8) {
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r5,r3,236
	ctx.r5.s64 = ctx.r3.s64 + 236;
	// addi r11,r11,15096
	r11.s64 = r11.s64 + 15096;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82370dc0
	sub_82370DC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82252340"))) PPC_WEAK_FUNC(sub_82252340);
PPC_FUNC_IMPL(__imp__sub_82252340) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x821b3f78
	sub_821B3F78(ctx, base);
	// addi r29,r30,20
	r29.s64 = r30.s64 + 20;
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
	// beq 0x822523a4
	if (cr0.eq) goto loc_822523A4;
	// addi r30,r30,-216
	r30.s64 = r30.s64 + -216;
loc_82252378:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822522f8
	sub_822522F8(ctx, base);
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
	// bne 0x82252378
	if (!cr0.eq) goto loc_82252378;
loc_822523A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822523AC"))) PPC_WEAK_FUNC(sub_822523AC);
PPC_FUNC_IMPL(__imp__sub_822523AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822523B0"))) PPC_WEAK_FUNC(sub_822523B0);
PPC_FUNC_IMPL(__imp__sub_822523B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x8239bcd4
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, f29.u64);
	// stfd f30,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lfs f2,272(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 272);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,256(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 256);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfs f2,268(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 268);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,252(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 252);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// lfs f2,264(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 264);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,248(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 248);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// lfs f2,260(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 260);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,244(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// stfs f1,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lfs f2,304(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 304);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,288(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 288);
	ctx.f1.f64 = double(temp.f32);
	// stfs f29,212(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f30,216(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfs f2,300(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 300);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,284(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 284);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// lfs f2,296(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 296);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,280(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// lfs f2,292(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 292);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,276(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 276);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f1,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f29,196(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f30,200(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x82252260
	sub_82252260(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82252800
	if (cr0.eq) goto loc_82252800;
	// lwz r3,316(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 316);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82252494
	if (cr0.eq) goto loc_82252494;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f3,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x822ed7f0
	sub_822ED7F0(ctx, base);
loc_82252494:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// li r28,2
	r28.s64 = 2;
loc_8225249C:
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r1,208
	r11.s64 = ctx.r1.s64 + 208;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r6,r7,372
	ctx.r6.s64 = ctx.r7.s64 + 372;
	// addi r4,r7,388
	ctx.r4.s64 = ctx.r7.s64 + 388;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// lwz r27,4(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,8(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r25,8(r10)
	r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// stw r27,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r27.u32);
	// stw r4,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r4.u32);
	// stw r26,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, r26.u32);
	// stw r25,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r25.u32);
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, r11.u32);
	// stw r10,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r24,0(r9)
	r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r11,404
	ctx.r10.s64 = r11.s64 + 404;
	// lwz r23,0(r8)
	r23.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r7,r11,420
	ctx.r7.s64 = r11.s64 + 420;
	// lwz r22,4(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwz r21,4(r8)
	r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lwz r20,8(r9)
	r20.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r19,8(r8)
	r19.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// stw r23,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r23.u32);
	// stw r22,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r22.u32);
	// stw r21,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r21.u32);
	// stw r20,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r20.u32);
	// stw r19,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r19.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
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
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8225249c
	if (!cr0.eq) goto loc_8225249C;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r29,36
	r29.s64 = r29.s64 + 36;
	// addi r30,r11,14976
	r30.s64 = r11.s64 + 14976;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,-4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// lfs f0,348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 348);
	f0.f64 = double(temp.f32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stfs f0,348(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 348, temp.u32);
	// stfs f0,352(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 352, temp.u32);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
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
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8214f728
	sub_8214F728(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x8214f728
	sub_8214F728(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lha r4,8(r11)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 8));
	// bl 0x8226dcb8
	sub_8226DCB8(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r3,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f0,-25404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25404);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bl 0x82269668
	sub_82269668(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8226a190
	sub_8226A190(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,15136
	r11.s64 = r11.s64 + 15136;
	// lfs f5,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f5,f5,f12
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// lfs f9,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f4.f64 = double(temp.f32);
	// lfs f7,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f11,f0,f9,f11
	ctx.f11.f64 = double(float(f0.f64 * ctx.f9.f64 + ctx.f11.f64));
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f10,f8,f0,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * f0.f64 + ctx.f10.f64));
	// fmadds f9,f4,f0,f5
	ctx.f9.f64 = double(float(ctx.f4.f64 * f0.f64 + ctx.f5.f64));
	// fmadds f0,f12,f7,f11
	f0.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f11.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f12,f6,f13,f10
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f13,f3,f13,f9
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f9.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82269668
	sub_82269668(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8226a190
	sub_8226A190(ctx, base);
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f12,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f5,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// lfs f8,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f8.f64 = double(temp.f32);
	// li r5,64
	ctx.r5.s64 = 64;
	// lfs f9,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f5.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f4,f0,f9,f11
	ctx.f4.f64 = double(float(f0.f64 * ctx.f9.f64 + ctx.f11.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f8,f0,f8,f10
	ctx.f8.f64 = double(float(f0.f64 * ctx.f8.f64 + ctx.f10.f64));
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f5,f0,f5,f13
	ctx.f5.f64 = double(float(f0.f64 * ctx.f5.f64 + ctx.f13.f64));
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f7,f12,f4
	f0.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f4.f64));
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f13,f6,f12,f8
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f12,f12,f3,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f3.f64 + ctx.f5.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f7,f0,f9
	ctx.f7.f64 = double(float(f0.f64 * ctx.f9.f64));
	// fmuls f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmsubs f12,f10,f12,f7
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f7.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmsubs f0,f11,f0,f6
	f0.f64 = double(float(ctx.f11.f64 * f0.f64 - ctx.f6.f64));
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmsubs f0,f13,f9,f8
	f0.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 - ctx.f8.f64));
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r11,24
	r30.s64 = r11.s64 + 24;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15128
	r11.s64 = r11.s64 + 15128;
	// lfs f2,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15104
	r11.s64 = r11.s64 + 15104;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15120
	r11.s64 = r11.s64 + 15120;
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fneg f31,f0
	f31.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x8226dda0
	sub_8226DDA0(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// fadds f0,f30,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 + ctx.f1.f64));
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
loc_82252800:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_82252814"))) PPC_WEAK_FUNC(sub_82252814);
PPC_FUNC_IMPL(__imp__sub_82252814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82252818"))) PPC_WEAK_FUNC(sub_82252818);
PPC_FUNC_IMPL(__imp__sub_82252818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f0{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce0
	// addi r12,r1,-88
	r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8239d5e0
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r31,r11,-5056
	r31.s64 = r11.s64 + -5056;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x82311970
	sub_82311970(ctx, base);
	// addi r22,r23,20
	r22.s64 = r23.s64 + 20;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r27,0(r22)
	r27.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// subf r11,r27,r22
	r11.s64 = r22.s64 - r27.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82252b70
	if (cr0.eq) goto loc_82252B70;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r24,r11,14984
	r24.s64 = r11.s64 + 14984;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lfs f27,2480(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2480);
	f27.f64 = double(temp.f32);
	// lfs f26,2984(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2984);
	f26.f64 = double(temp.f32);
	// addi r26,r11,15104
	r26.s64 = r11.s64 + 15104;
	// lfs f28,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f28.f64 = double(temp.f32);
loc_82252898:
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// li r25,0
	r25.s64 = 0;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bne cr6,0x82252a74
	if (!cr6.eq) goto loc_82252A74;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lfs f11,100(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// lfs f9,108(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// addi r9,r3,76
	ctx.r9.s64 = ctx.r3.s64 + 76;
	// fadds f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 + f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f0,f10,f13
	f0.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f9,f12
	f0.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// lfs f13,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f0,4(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f12,0(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 + f0.f64));
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f0,40(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 40);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// blt cr6,0x82252b14
	if (cr6.lt) goto loc_82252B14;
	// li r11,1
	r11.s64 = 1;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// li r29,2
	r29.s64 = 2;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
loc_82252974:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
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
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r28,r11,24
	r28.s64 = r11.s64 + 24;
	// addi r4,r10,52
	ctx.r4.s64 = ctx.r10.s64 + 52;
	// addi r3,r28,28
	ctx.r3.s64 = r28.s64 + 28;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f28.f64;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f28,348(r3)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 348, temp.u32);
	// stfs f28,352(r3)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 352, temp.u32);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f28.f64;
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
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stfs f27,348(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 348, temp.u32);
	// stfs f27,352(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 352, temp.u32);
	// bne 0x82252974
	if (!cr0.eq) goto loc_82252974;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stfs f27,348(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 348, temp.u32);
	// stfs f27,352(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 352, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 + 100;
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
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stfs f27,96(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 96, temp.u32);
	// lwz r3,112(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 112);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82252b14
	if (cr0.eq) goto loc_82252B14;
	// fmr f3,f27
	ctx.f3.f64 = f27.f64;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x822f1ef8
	sub_822F1EF8(ctx, base);
	// b 0x82252b14
	goto loc_82252B14;
loc_82252A74:
	// lwz r11,240(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// lfs f0,40(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 40);
	f0.f64 = double(temp.f32);
	// fsubs f29,f30,f0
	f29.f64 = double(float(f30.f64 - f0.f64));
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// li r29,2
	r29.s64 = 2;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r25,r11,24
	r25.u64 = r11.u32 & 0xFF;
loc_82252A94:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f28.f64;
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
	// lfs f0,12(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r24.u32 + 12);
	f0.f64 = double(temp.f32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// fcmpu cr6,f29,f0
	cr6.compare(f29.f64, f0.f64);
	// bgt cr6,0x82252acc
	if (cr6.gt) goto loc_82252ACC;
	// lfs f0,-4(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + -4);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	f0.f64 = double(float(f0.f64 * f29.f64));
	// b 0x82252adc
	goto loc_82252ADC;
loc_82252ACC:
	// lfs f0,16(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r24.u32 + 16);
	f0.f64 = double(temp.f32);
	// fsubs f13,f0,f29
	ctx.f13.f64 = double(float(f0.f64 - f29.f64));
	// lfs f0,0(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
loc_82252ADC:
	// stfs f0,96(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 96, temp.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lfs f0,96(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 96);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	cr6.compare(f0.f64, f27.f64);
	// bge cr6,0x82252af4
	if (!cr6.lt) goto loc_82252AF4;
	// stfs f27,96(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 96, temp.u32);
loc_82252AF4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,240(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82252b08
	if (cr6.eq) goto loc_82252B08;
	// li r25,0
	r25.s64 = 0;
loc_82252B08:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82252a94
	if (!cr0.eq) goto loc_82252A94;
loc_82252B14:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f28.f64;
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
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82252b54
	if (cr0.eq) goto loc_82252B54;
	// mr r11,r27
	r11.u64 = r27.u64;
	// lwz r27,0(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r23,-216
	ctx.r3.s64 = r23.s64 + -216;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822522f8
	sub_822522F8(ctx, base);
	// b 0x82252b58
	goto loc_82252B58;
loc_82252B54:
	// lwz r27,0(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_82252B58:
	// subf r11,r27,r22
	r11.s64 = r22.s64 - r27.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82252898
	if (!cr0.eq) goto loc_82252898;
loc_82252B70:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-88
	r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8239d62c
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_82252B80"))) PPC_WEAK_FUNC(sub_82252B80);
PPC_FUNC_IMPL(__imp__sub_82252B80) {
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
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,27088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 27088);
	// lwz r11,204(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82252bf8
	if (!cr6.eq) goto loc_82252BF8;
	// addi r28,r3,236
	r28.s64 = ctx.r3.s64 + 236;
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x82252be0
	goto loc_82252BE0;
loc_82252BAC:
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,204
	ctx.r3.s64 = r11.s64 + 204;
	// bl 0x821b2800
	sub_821B2800(ctx, base);
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// li r31,2
	r31.s64 = 2;
loc_82252BC4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r3,r11,204
	ctx.r3.s64 = r11.s64 + 204;
	// bl 0x821b2800
	sub_821B2800(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x82252bc4
	if (!cr0.eq) goto loc_82252BC4;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82252BE0:
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
	// bne 0x82252bac
	if (!cr0.eq) goto loc_82252BAC;
loc_82252BF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82252C00"))) PPC_WEAK_FUNC(sub_82252C00);
PPC_FUNC_IMPL(__imp__sub_82252C00) {
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
	// lwz r16,3040(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3040);
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
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
	// lwz r11,15148(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15148);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r28,r9,15144
	r28.s64 = ctx.r9.s64 + 15144;
	// bne 0x82252c6c
	if (!cr0.eq) goto loc_82252C6C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,15148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15148, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,2988
	ctx.r4.s64 = r11.s64 + 2988;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82252C6C:
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
	// beq 0x82252c94
	if (cr0.eq) goto loc_82252C94;
	// addi r3,r29,-336
	ctx.r3.s64 = r29.s64 + -336;
	// bl 0x822523b0
	sub_822523B0(ctx, base);
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// b 0x82252dac
	goto loc_82252DAC;
loc_82252C94:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r29,-296
	ctx.r4.s64 = r29.s64 + -296;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821b3888
	sub_821B3888(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82252cd8
	if (cr6.eq) goto loc_82252CD8;
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
	// beq 0x82252db0
	if (cr0.eq) goto loc_82252DB0;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82252CD0:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82252db0
	goto loc_82252DB0;
loc_82252CD8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r29,-116
	ctx.r4.s64 = r29.s64 + -116;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821b1158
	sub_821B1158(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82252d18
	if (cr6.eq) goto loc_82252D18;
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
	// beq 0x82252db0
	if (cr0.eq) goto loc_82252DB0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x82252cd0
	goto loc_82252CD0;
loc_82252D18:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r29,-112
	ctx.r4.s64 = r29.s64 + -112;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x821b3e18
	sub_821B3E18(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82252d58
	if (cr6.eq) goto loc_82252D58;
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
	// beq 0x82252db0
	if (cr0.eq) goto loc_82252DB0;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x82252cd0
	goto loc_82252CD0;
loc_82252D58:
	// lwz r11,-332(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -332);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r4,r11,-332
	ctx.r4.s64 = r11.s64 + -332;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82252da4
	if (cr6.eq) goto loc_82252DA4;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82252db0
	if (cr0.eq) goto loc_82252DB0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x82252cd0
	goto loc_82252CD0;
loc_82252DA4:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_82252DAC:
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
loc_82252DB0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82252C08"))) PPC_WEAK_FUNC(sub_82252C08);
PPC_FUNC_IMPL(__imp__sub_82252C08) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
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
	// lwz r11,15148(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15148);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r28,r9,15144
	r28.s64 = ctx.r9.s64 + 15144;
	// bne 0x82252c6c
	if (!cr0.eq) goto loc_82252C6C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,15148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15148, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,2988
	ctx.r4.s64 = r11.s64 + 2988;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82252C6C:
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
	// beq 0x82252c94
	if (cr0.eq) goto loc_82252C94;
	// addi r3,r29,-336
	ctx.r3.s64 = r29.s64 + -336;
	// bl 0x822523b0
	sub_822523B0(ctx, base);
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// b 0x82252dac
	goto loc_82252DAC;
loc_82252C94:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r29,-296
	ctx.r4.s64 = r29.s64 + -296;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821b3888
	sub_821B3888(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82252cd8
	if (cr6.eq) goto loc_82252CD8;
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
	// beq 0x82252db0
	if (cr0.eq) goto loc_82252DB0;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82252CD0:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82252db0
	goto loc_82252DB0;
loc_82252CD8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r29,-116
	ctx.r4.s64 = r29.s64 + -116;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821b1158
	sub_821B1158(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82252d18
	if (cr6.eq) goto loc_82252D18;
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
	// beq 0x82252db0
	if (cr0.eq) goto loc_82252DB0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x82252cd0
	goto loc_82252CD0;
loc_82252D18:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r29,-112
	ctx.r4.s64 = r29.s64 + -112;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x821b3e18
	sub_821B3E18(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82252d58
	if (cr6.eq) goto loc_82252D58;
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
	// beq 0x82252db0
	if (cr0.eq) goto loc_82252DB0;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x82252cd0
	goto loc_82252CD0;
loc_82252D58:
	// lwz r11,-332(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -332);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r4,r11,-332
	ctx.r4.s64 = r11.s64 + -332;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82252da4
	if (cr6.eq) goto loc_82252DA4;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82252db0
	if (cr0.eq) goto loc_82252DB0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x82252cd0
	goto loc_82252CD0;
loc_82252DA4:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_82252DAC:
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
loc_82252DB0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82252DBC"))) PPC_WEAK_FUNC(sub_82252DBC);
PPC_FUNC_IMPL(__imp__sub_82252DBC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15148
	r11.s64 = r11.s64 + 15148;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,15148
	ctx.r10.s64 = ctx.r10.s64 + 15148;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82252DE4"))) PPC_WEAK_FUNC(sub_82252DE4);
PPC_FUNC_IMPL(__imp__sub_82252DE4) {
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

__attribute__((alias("__imp__sub_82252E0C"))) PPC_WEAK_FUNC(sub_82252E0C);
PPC_FUNC_IMPL(__imp__sub_82252E0C) {
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

__attribute__((alias("__imp__sub_82252E34"))) PPC_WEAK_FUNC(sub_82252E34);
PPC_FUNC_IMPL(__imp__sub_82252E34) {
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

__attribute__((alias("__imp__sub_82252E5C"))) PPC_WEAK_FUNC(sub_82252E5C);
PPC_FUNC_IMPL(__imp__sub_82252E5C) {
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

__attribute__((alias("__imp__sub_82252E84"))) PPC_WEAK_FUNC(sub_82252E84);
PPC_FUNC_IMPL(__imp__sub_82252E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82252E88"))) PPC_WEAK_FUNC(sub_82252E88);
PPC_FUNC_IMPL(__imp__sub_82252E88) {
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
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82252ed4
	if (!cr6.eq) goto loc_82252ED4;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,17316
	ctx.r6.s64 = r11.s64 + 17316;
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
	// bl 0x822517d0
	sub_822517D0(ctx, base);
loc_82252ED4:
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

__attribute__((alias("__imp__sub_82252EE8"))) PPC_WEAK_FUNC(sub_82252EE8);
PPC_FUNC_IMPL(__imp__sub_82252EE8) {
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
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82252f34
	if (!cr6.eq) goto loc_82252F34;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,17336
	ctx.r6.s64 = r11.s64 + 17336;
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
	// bl 0x822518d0
	sub_822518D0(ctx, base);
loc_82252F34:
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

__attribute__((alias("__imp__sub_82252F48"))) PPC_WEAK_FUNC(sub_82252F48);
PPC_FUNC_IMPL(__imp__sub_82252F48) {
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
	// bl 0x82251c80
	sub_82251C80(ctx, base);
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

__attribute__((alias("__imp__sub_82252FAC"))) PPC_WEAK_FUNC(sub_82252FAC);
PPC_FUNC_IMPL(__imp__sub_82252FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82252FB0"))) PPC_WEAK_FUNC(sub_82252FB0);
PPC_FUNC_IMPL(__imp__sub_82252FB0) {
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
	// li r3,48
	ctx.r3.s64 = 48;
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

__attribute__((alias("__imp__sub_82253004"))) PPC_WEAK_FUNC(sub_82253004);
PPC_FUNC_IMPL(__imp__sub_82253004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82253008"))) PPC_WEAK_FUNC(sub_82253008);
PPC_FUNC_IMPL(__imp__sub_82253008) {
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
	// b 0x82253038
	goto loc_82253038;
loc_82253028:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82253038:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82253028
	if (!cr6.eq) goto loc_82253028;
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

__attribute__((alias("__imp__sub_82253060"))) PPC_WEAK_FUNC(sub_82253060);
PPC_FUNC_IMPL(__imp__sub_82253060) {
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
	// lwz r16,3176(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3176);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82132d78
	sub_82132D78(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822520a0
	sub_822520A0(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82253068"))) PPC_WEAK_FUNC(sub_82253068);
PPC_FUNC_IMPL(__imp__sub_82253068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82132d78
	sub_82132D78(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822520a0
	sub_822520A0(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822530CC"))) PPC_WEAK_FUNC(sub_822530CC);
PPC_FUNC_IMPL(__imp__sub_822530CC) {
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

__attribute__((alias("__imp__sub_822530F4"))) PPC_WEAK_FUNC(sub_822530F4);
PPC_FUNC_IMPL(__imp__sub_822530F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822530F8"))) PPC_WEAK_FUNC(sub_822530F8);
PPC_FUNC_IMPL(__imp__sub_822530F8) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,3256(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3256);
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x82253178
	if (!cr6.eq) goto loc_82253178;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82253138
	if (cr0.eq) goto loc_82253138;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
loc_82253130:
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// b 0x8225314c
	goto loc_8225314C;
loc_82253138:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82253130
	if (!cr0.eq) goto loc_82253130;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,-2080
	ctx.r4.s64 = r11.s64 + -2080;
loc_8225314C:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82317ab8
	sub_82317AB8(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822531b0
	if (cr0.eq) goto loc_822531B0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822531b0
	goto loc_822531B0;
loc_82253178:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822520a0
	sub_822520A0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_822531B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82253100"))) PPC_WEAK_FUNC(sub_82253100);
PPC_FUNC_IMPL(__imp__sub_82253100) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x82253178
	if (!cr6.eq) goto loc_82253178;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82253138
	if (cr0.eq) goto loc_82253138;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
loc_82253130:
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// b 0x8225314c
	goto loc_8225314C;
loc_82253138:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82253130
	if (!cr0.eq) goto loc_82253130;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,-2080
	ctx.r4.s64 = r11.s64 + -2080;
loc_8225314C:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82317ab8
	sub_82317AB8(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822531b0
	if (cr0.eq) goto loc_822531B0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822531b0
	goto loc_822531B0;
loc_82253178:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822520a0
	sub_822520A0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_822531B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822531BC"))) PPC_WEAK_FUNC(sub_822531BC);
PPC_FUNC_IMPL(__imp__sub_822531BC) {
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

__attribute__((alias("__imp__sub_822531E4"))) PPC_WEAK_FUNC(sub_822531E4);
PPC_FUNC_IMPL(__imp__sub_822531E4) {
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

__attribute__((alias("__imp__sub_8225320C"))) PPC_WEAK_FUNC(sub_8225320C);
PPC_FUNC_IMPL(__imp__sub_8225320C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82253210"))) PPC_WEAK_FUNC(sub_82253210);
PPC_FUNC_IMPL(__imp__sub_82253210) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,-332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -332);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-332
	ctx.r3.s64 = r11.s64 + -332;
	// bl 0x82315258
	sub_82315258(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-296
	ctx.r3.s64 = r31.s64 + -296;
	// bl 0x821b2938
	sub_821B2938(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-116
	ctx.r3.s64 = r31.s64 + -116;
	// bl 0x821b0908
	sub_821B0908(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,17360
	ctx.r6.s64 = r11.s64 + 17360;
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
	// beq 0x82253348
	if (cr0.eq) goto loc_82253348;
	// addi r11,r30,244
	r11.s64 = r30.s64 + 244;
	// addi r10,r31,-92
	ctx.r10.s64 = r31.s64 + -92;
	// addi r9,r30,260
	ctx.r9.s64 = r30.s64 + 260;
	// addi r8,r31,-76
	ctx.r8.s64 = r31.s64 + -76;
	// addi r7,r30,276
	ctx.r7.s64 = r30.s64 + 276;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r6,r31,-60
	ctx.r6.s64 = r31.s64 + -60;
	// addi r5,r30,292
	ctx.r5.s64 = r30.s64 + 292;
	// addi r4,r31,-44
	ctx.r4.s64 = r31.s64 + -44;
	// addi r3,r31,-112
	ctx.r3.s64 = r31.s64 + -112;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r29.u32);
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
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// lwz r11,12(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lwz r4,228(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// bl 0x82251440
	sub_82251440(ctx, base);
	// addi r3,r31,-28
	ctx.r3.s64 = r31.s64 + -28;
	// lwz r4,316(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 316);
	// bl 0x822517d0
	sub_822517D0(ctx, base);
	// addi r3,r31,-16
	ctx.r3.s64 = r31.s64 + -16;
	// lwz r4,328(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 328);
	// bl 0x822518d0
	sub_822518D0(ctx, base);
loc_82253348:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82253350"))) PPC_WEAK_FUNC(sub_82253350);
PPC_FUNC_IMPL(__imp__sub_82253350) {
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
	// lwz r16,3344(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3344);
	// mflr r12
	// bl 0x8239bcf8
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
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,-332(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -332);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-332
	ctx.r3.s64 = r11.s64 + -332;
	// bl 0x82315350
	sub_82315350(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-296
	ctx.r3.s64 = r30.s64 + -296;
	// bl 0x821b36c0
	sub_821B36C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-116
	ctx.r3.s64 = r30.s64 + -116;
	// bl 0x821b0a28
	sub_821B0A28(ctx, base);
	// addi r4,r30,-92
	ctx.r4.s64 = r30.s64 + -92;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r30,-76
	r28.s64 = r30.s64 + -76;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// addi r4,r30,-60
	ctx.r4.s64 = r30.s64 + -60;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r30,-44
	r28.s64 = r30.s64 + -44;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// addi r4,r30,-112
	ctx.r4.s64 = r30.s64 + -112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82253068
	sub_82253068(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82253408
	if (!cr6.gt) goto loc_82253408;
	// addi r4,r30,-28
	ctx.r4.s64 = r30.s64 + -28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82251d78
	sub_82251D78(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_82253408:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82253420
	if (!cr6.gt) goto loc_82253420;
	// addi r4,r30,-16
	ctx.r4.s64 = r30.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82251e18
	sub_82251E18(ctx, base);
	// b 0x82253474
	goto loc_82253474;
loc_82253420:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82253474
	if (!cr6.gt) goto loc_82253474;
	// addic. r11,r30,-336
	xer.ca = r30.u32 > 335;
	r11.s64 = r30.s64 + -336;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82253438
	if (!cr0.eq) goto loc_82253438;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82253448
	goto loc_82253448;
loc_82253438:
	// lwz r11,-332(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -332);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-332
	ctx.r4.s64 = r11.s64 + -332;
loc_82253448:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82251740
	sub_82251740(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,2756
	r11.s64 = r11.s64 + 2756;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82251d78
	sub_82251D78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822513b0
	sub_822513B0(ctx, base);
loc_82253474:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82253358"))) PPC_WEAK_FUNC(sub_82253358);
PPC_FUNC_IMPL(__imp__sub_82253358) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,-332(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -332);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-332
	ctx.r3.s64 = r11.s64 + -332;
	// bl 0x82315350
	sub_82315350(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-296
	ctx.r3.s64 = r30.s64 + -296;
	// bl 0x821b36c0
	sub_821B36C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-116
	ctx.r3.s64 = r30.s64 + -116;
	// bl 0x821b0a28
	sub_821B0A28(ctx, base);
	// addi r4,r30,-92
	ctx.r4.s64 = r30.s64 + -92;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r30,-76
	r28.s64 = r30.s64 + -76;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// addi r4,r30,-60
	ctx.r4.s64 = r30.s64 + -60;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r30,-44
	r28.s64 = r30.s64 + -44;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821222e0
	sub_821222E0(ctx, base);
	// addi r4,r30,-112
	ctx.r4.s64 = r30.s64 + -112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82253068
	sub_82253068(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82253408
	if (!cr6.gt) goto loc_82253408;
	// addi r4,r30,-28
	ctx.r4.s64 = r30.s64 + -28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82251d78
	sub_82251D78(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_82253408:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82253420
	if (!cr6.gt) goto loc_82253420;
	// addi r4,r30,-16
	ctx.r4.s64 = r30.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82251e18
	sub_82251E18(ctx, base);
	// b 0x82253474
	goto loc_82253474;
loc_82253420:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82253474
	if (!cr6.gt) goto loc_82253474;
	// addic. r11,r30,-336
	xer.ca = r30.u32 > 335;
	r11.s64 = r30.s64 + -336;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82253438
	if (!cr0.eq) goto loc_82253438;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82253448
	goto loc_82253448;
loc_82253438:
	// lwz r11,-332(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -332);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-332
	ctx.r4.s64 = r11.s64 + -332;
loc_82253448:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82251740
	sub_82251740(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,2756
	r11.s64 = r11.s64 + 2756;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82251d78
	sub_82251D78(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822513b0
	sub_822513B0(ctx, base);
loc_82253474:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8225347C"))) PPC_WEAK_FUNC(sub_8225347C);
PPC_FUNC_IMPL(__imp__sub_8225347C) {
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
	// bl 0x82251a78
	sub_82251A78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822534A4"))) PPC_WEAK_FUNC(sub_822534A4);
PPC_FUNC_IMPL(__imp__sub_822534A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822534A8"))) PPC_WEAK_FUNC(sub_822534A8);
PPC_FUNC_IMPL(__imp__sub_822534A8) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd4
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r30,r11,14968
	r30.s64 = r11.s64 + 14968;
	// lbz r11,40(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82253a7c
	if (!cr0.eq) goto loc_82253A7C;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23464
	ctx.r4.s64 = r11.s64 + -23464;
	// li r11,1
	r11.s64 = 1;
	// stb r11,40(r30)
	PPC_STORE_U8(r30.u32 + 40, r11.u8);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = r11.s64 + 2964;
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,3652
	ctx.r4.s64 = r11.s64 + 3652;
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
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,228(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 228);
	// bl 0x82251eb8
	sub_82251EB8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,3640
	ctx.r4.s64 = r11.s64 + 3640;
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
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// lwz r11,228(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 228);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82141298
	sub_82141298(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r3,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,3620
	ctx.r4.s64 = r11.s64 + 3620;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r29,r10,15136
	r29.s64 = ctx.r10.s64 + 15136;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319818
	sub_82319818(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,3600
	ctx.r4.s64 = r11.s64 + 3600;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,15128
	ctx.r5.s64 = r11.s64 + 15128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82319818
	sub_82319818(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,3580
	ctx.r4.s64 = r11.s64 + 3580;
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,3560
	ctx.r4.s64 = r11.s64 + 3560;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-25404(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25404);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,4(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r10,15120
	ctx.r5.s64 = ctx.r10.s64 + 15120;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319818
	sub_82319818(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,3548
	ctx.r4.s64 = r11.s64 + 3548;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r10,15104
	ctx.r5.s64 = ctx.r10.s64 + 15104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319890
	sub_82319890(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,3532
	ctx.r4.s64 = r11.s64 + 3532;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r23,r10,15080
	r23.s64 = ctx.r10.s64 + 15080;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319890
	sub_82319890(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,3520
	ctx.r4.s64 = r11.s64 + 3520;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,3508
	ctx.r4.s64 = r11.s64 + 3508;
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r26,r11,15016
	r26.s64 = r11.s64 + 15016;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r25,0
	r25.s64 = 0;
	// addi r22,r11,3496
	r22.s64 = r11.s64 + 3496;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r26,8
	r29.s64 = r26.s64 + 8;
	// addi r21,r11,3484
	r21.s64 = r11.s64 + 3484;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r20,r11,3472
	r20.s64 = r11.s64 + 3472;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r19,r11,3460
	r19.s64 = r11.s64 + 3460;
loc_8225374C:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// add r11,r25,r11
	r11.u64 = r25.u64 + r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// lwz r11,228(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 228);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82141298
	sub_82141298(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// stw r11,-8(r29)
	PPC_STORE_U32(r29.u32 + -8, r11.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r29,-4
	ctx.r5.s64 = r29.s64 + -4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319818
	sub_82319818(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r29,8
	ctx.r5.s64 = r29.s64 + 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319818
	sub_82319818(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r29,16
	ctx.r5.s64 = r29.s64 + 16;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319818
	sub_82319818(ctx, base);
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// addi r11,r26,72
	r11.s64 = r26.s64 + 72;
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8225374c
	if (cr6.lt) goto loc_8225374C;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,3444
	ctx.r4.s64 = r11.s64 + 3444;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r30,20
	ctx.r5.s64 = r30.s64 + 20;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,3428
	ctx.r4.s64 = r11.s64 + 3428;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r30,28
	ctx.r5.s64 = r30.s64 + 28;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,3408
	ctx.r4.s64 = r11.s64 + 3408;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r30,24
	ctx.r5.s64 = r30.s64 + 24;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	f0.f64 = double(temp.f32);
	// lfs f13,28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// lfs f12,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f0,f12
	f0.f64 = double(float(f0.f64 / ctx.f12.f64));
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// fadds f0,f12,f13
	f0.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f0,32(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 32, temp.u32);
	// bl 0x82251a18
	sub_82251A18(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,44(r30)
	PPC_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// bl 0x82212628
	sub_82212628(ctx, base);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,348(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 348, temp.u32);
	// stfs f0,352(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 352, temp.u32);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82215250
	sub_82215250(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r27,r11,15096
	r27.s64 = r11.s64 + 15096;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r25,5
	r25.s64 = 5;
	// lfs f30,-10024(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10024);
	f30.f64 = double(temp.f32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// lfs f31,32748(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32748);
	f31.f64 = double(temp.f32);
loc_82253938:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82252f48
	sub_82252F48(ctx, base);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// bl 0x82251a18
	sub_82251A18(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82253970
	if (!cr6.eq) goto loc_82253970;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82253980
	goto loc_82253980;
loc_82253970:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_82253980:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
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
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82212400
	sub_82212400(ctx, base);
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// addi r29,r26,28
	r29.s64 = r26.s64 + 28;
loc_822539B8:
	// bl 0x82251a18
	sub_82251A18(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82212628
	sub_82212628(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,-24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -24);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -28);
	// bl 0x82215250
	sub_82215250(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,-4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// stfs f13,356(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 356, temp.u32);
	// addi r11,r31,620
	r11.s64 = r31.s64 + 620;
	// stfs f0,360(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 360, temp.u32);
	// addi r9,r26,92
	ctx.r9.s64 = r26.s64 + 92;
	// lfs f0,-16(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + -16);
	f0.f64 = double(temp.f32);
	// lfs f13,-20(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + -20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,324(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 324, temp.u32);
	// stfs f0,328(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 328, temp.u32);
	// lfs f0,-8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + -8);
	f0.f64 = double(temp.f32);
	// lfs f13,-12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 284, temp.u32);
	// stfs f0,288(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 288, temp.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(r29.s32, ctx.r9.s32, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
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
	// stfs f31,340(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 340, temp.u32);
	// stfs f30,344(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 344, temp.u32);
	// stfs f31,332(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 332, temp.u32);
	// stfs f30,336(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 336, temp.u32);
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// blt cr6,0x822539b8
	if (cr6.lt) goto loc_822539B8;
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// bne 0x82253938
	if (!cr0.eq) goto loc_82253938;
loc_82253A7C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_82253A8C"))) PPC_WEAK_FUNC(sub_82253A8C);
PPC_FUNC_IMPL(__imp__sub_82253A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82253A90"))) PPC_WEAK_FUNC(sub_82253A90);
PPC_FUNC_IMPL(__imp__sub_82253A90) {
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
	// lwz r16,3832(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3832);
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
	// lwz r11,15180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 15180);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,15176
	r29.s64 = ctx.r10.s64 + 15176;
	// bne 0x82253afc
	if (!cr0.eq) goto loc_82253AFC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,15180(r30)
	PPC_STORE_U32(r30.u32 + 15180, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3756
	ctx.r4.s64 = r11.s64 + 3756;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,15180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 15180);
loc_82253AFC:
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
	// beq 0x82253b30
	if (cr0.eq) goto loc_82253B30;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-92
	ctx.r3.s64 = r26.s64 + -92;
loc_82253B28:
	// bl 0x82326c00
	sub_82326C00(ctx, base);
	// b 0x82253dc8
	goto loc_82253DC8;
loc_82253B30:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,15172
	r29.s64 = ctx.r10.s64 + 15172;
	// bne 0x82253b5c
	if (!cr0.eq) goto loc_82253B5C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,15180(r30)
	PPC_STORE_U32(r30.u32 + 15180, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3736
	ctx.r4.s64 = r11.s64 + 3736;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,15180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 15180);
loc_82253B5C:
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
	// beq 0x82253b8c
	if (cr0.eq) goto loc_82253B8C;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-76
	ctx.r3.s64 = r26.s64 + -76;
	// b 0x82253b28
	goto loc_82253B28;
loc_82253B8C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,15168
	r29.s64 = ctx.r10.s64 + 15168;
	// bne 0x82253bb8
	if (!cr0.eq) goto loc_82253BB8;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,15180(r30)
	PPC_STORE_U32(r30.u32 + 15180, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3720
	ctx.r4.s64 = r11.s64 + 3720;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,15180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 15180);
loc_82253BB8:
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
	// beq 0x82253be8
	if (cr0.eq) goto loc_82253BE8;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-60
	ctx.r3.s64 = r26.s64 + -60;
	// b 0x82253b28
	goto loc_82253B28;
loc_82253BE8:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,15164
	r29.s64 = ctx.r10.s64 + 15164;
	// bne 0x82253c14
	if (!cr0.eq) goto loc_82253C14;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,15180(r30)
	PPC_STORE_U32(r30.u32 + 15180, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3704
	ctx.r4.s64 = r11.s64 + 3704;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,15180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 15180);
loc_82253C14:
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
	// beq 0x82253c44
	if (cr0.eq) goto loc_82253C44;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-44
	ctx.r3.s64 = r26.s64 + -44;
	// b 0x82253b28
	goto loc_82253B28;
loc_82253C44:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,15160
	r29.s64 = ctx.r10.s64 + 15160;
	// bne 0x82253c70
	if (!cr0.eq) goto loc_82253C70;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,15180(r30)
	PPC_STORE_U32(r30.u32 + 15180, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3692
	ctx.r4.s64 = r11.s64 + 3692;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,15180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 15180);
loc_82253C70:
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
	// beq 0x82253ca4
	if (cr0.eq) goto loc_82253CA4;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-28
	ctx.r3.s64 = r26.s64 + -28;
	// bl 0x82251f18
	sub_82251F18(ctx, base);
	// b 0x82253dc8
	goto loc_82253DC8;
loc_82253CA4:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,15156
	r29.s64 = ctx.r10.s64 + 15156;
	// bne 0x82253cd0
	if (!cr0.eq) goto loc_82253CD0;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,15180(r30)
	PPC_STORE_U32(r30.u32 + 15180, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3680
	ctx.r4.s64 = r11.s64 + 3680;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,15180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 15180);
loc_82253CD0:
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
	// beq 0x82253d04
	if (cr0.eq) goto loc_82253D04;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-16
	ctx.r3.s64 = r26.s64 + -16;
	// bl 0x82251fe0
	sub_82251FE0(ctx, base);
	// b 0x82253dc8
	goto loc_82253DC8;
loc_82253D04:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,15152
	r29.s64 = ctx.r10.s64 + 15152;
	// bne 0x82253d2c
	if (!cr0.eq) goto loc_82253D2C;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,15180(r30)
	PPC_STORE_U32(r30.u32 + 15180, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3668
	ctx.r4.s64 = r11.s64 + 3668;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82253D2C:
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
	// beq 0x82253d88
	if (cr0.eq) goto loc_82253D88;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-112
	ctx.r3.s64 = r26.s64 + -112;
	// bl 0x82253100
	sub_82253100(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82253d80
	if (cr0.eq) goto loc_82253D80;
	// andi. r11,r27,17
	r11.u64 = r27.u64 & 17;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82253d78
	if (!cr0.eq) goto loc_82253D78;
	// addi r3,r26,-336
	ctx.r3.s64 = r26.s64 + -336;
	// bl 0x822534a8
	sub_822534A8(ctx, base);
loc_82253D78:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82253dc8
	goto loc_82253DC8;
loc_82253D80:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82253dc8
	goto loc_82253DC8;
loc_82253D88:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r26,-116
	ctx.r3.s64 = r26.s64 + -116;
	// bl 0x821aec48
	sub_821AEC48(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82253d78
	if (!cr0.eq) goto loc_82253D78;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r26,-296
	ctx.r3.s64 = r26.s64 + -296;
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
loc_82253DC8:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82253A98"))) PPC_WEAK_FUNC(sub_82253A98);
PPC_FUNC_IMPL(__imp__sub_82253A98) {
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
	// lwz r11,15180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 15180);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,15176
	r29.s64 = ctx.r10.s64 + 15176;
	// bne 0x82253afc
	if (!cr0.eq) goto loc_82253AFC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,15180(r30)
	PPC_STORE_U32(r30.u32 + 15180, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3756
	ctx.r4.s64 = r11.s64 + 3756;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,15180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 15180);
loc_82253AFC:
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
	// beq 0x82253b30
	if (cr0.eq) goto loc_82253B30;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-92
	ctx.r3.s64 = r26.s64 + -92;
loc_82253B28:
	// bl 0x82326c00
	sub_82326C00(ctx, base);
	// b 0x82253dc8
	goto loc_82253DC8;
loc_82253B30:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,15172
	r29.s64 = ctx.r10.s64 + 15172;
	// bne 0x82253b5c
	if (!cr0.eq) goto loc_82253B5C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,15180(r30)
	PPC_STORE_U32(r30.u32 + 15180, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3736
	ctx.r4.s64 = r11.s64 + 3736;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,15180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 15180);
loc_82253B5C:
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
	// beq 0x82253b8c
	if (cr0.eq) goto loc_82253B8C;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-76
	ctx.r3.s64 = r26.s64 + -76;
	// b 0x82253b28
	goto loc_82253B28;
loc_82253B8C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,15168
	r29.s64 = ctx.r10.s64 + 15168;
	// bne 0x82253bb8
	if (!cr0.eq) goto loc_82253BB8;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,15180(r30)
	PPC_STORE_U32(r30.u32 + 15180, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3720
	ctx.r4.s64 = r11.s64 + 3720;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,15180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 15180);
loc_82253BB8:
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
	// beq 0x82253be8
	if (cr0.eq) goto loc_82253BE8;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-60
	ctx.r3.s64 = r26.s64 + -60;
	// b 0x82253b28
	goto loc_82253B28;
loc_82253BE8:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,15164
	r29.s64 = ctx.r10.s64 + 15164;
	// bne 0x82253c14
	if (!cr0.eq) goto loc_82253C14;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,15180(r30)
	PPC_STORE_U32(r30.u32 + 15180, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3704
	ctx.r4.s64 = r11.s64 + 3704;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,15180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 15180);
loc_82253C14:
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
	// beq 0x82253c44
	if (cr0.eq) goto loc_82253C44;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-44
	ctx.r3.s64 = r26.s64 + -44;
	// b 0x82253b28
	goto loc_82253B28;
loc_82253C44:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,15160
	r29.s64 = ctx.r10.s64 + 15160;
	// bne 0x82253c70
	if (!cr0.eq) goto loc_82253C70;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,15180(r30)
	PPC_STORE_U32(r30.u32 + 15180, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3692
	ctx.r4.s64 = r11.s64 + 3692;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,15180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 15180);
loc_82253C70:
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
	// beq 0x82253ca4
	if (cr0.eq) goto loc_82253CA4;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-28
	ctx.r3.s64 = r26.s64 + -28;
	// bl 0x82251f18
	sub_82251F18(ctx, base);
	// b 0x82253dc8
	goto loc_82253DC8;
loc_82253CA4:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,15156
	r29.s64 = ctx.r10.s64 + 15156;
	// bne 0x82253cd0
	if (!cr0.eq) goto loc_82253CD0;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,15180(r30)
	PPC_STORE_U32(r30.u32 + 15180, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3680
	ctx.r4.s64 = r11.s64 + 3680;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,15180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 15180);
loc_82253CD0:
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
	// beq 0x82253d04
	if (cr0.eq) goto loc_82253D04;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-16
	ctx.r3.s64 = r26.s64 + -16;
	// bl 0x82251fe0
	sub_82251FE0(ctx, base);
	// b 0x82253dc8
	goto loc_82253DC8;
loc_82253D04:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,15152
	r29.s64 = ctx.r10.s64 + 15152;
	// bne 0x82253d2c
	if (!cr0.eq) goto loc_82253D2C;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,15180(r30)
	PPC_STORE_U32(r30.u32 + 15180, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,3668
	ctx.r4.s64 = r11.s64 + 3668;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82253D2C:
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
	// beq 0x82253d88
	if (cr0.eq) goto loc_82253D88;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-112
	ctx.r3.s64 = r26.s64 + -112;
	// bl 0x82253100
	sub_82253100(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82253d80
	if (cr0.eq) goto loc_82253D80;
	// andi. r11,r27,17
	r11.u64 = r27.u64 & 17;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82253d78
	if (!cr0.eq) goto loc_82253D78;
	// addi r3,r26,-336
	ctx.r3.s64 = r26.s64 + -336;
	// bl 0x822534a8
	sub_822534A8(ctx, base);
loc_82253D78:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82253dc8
	goto loc_82253DC8;
loc_82253D80:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82253dc8
	goto loc_82253DC8;
loc_82253D88:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r26,-116
	ctx.r3.s64 = r26.s64 + -116;
	// bl 0x821aec48
	sub_821AEC48(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82253d78
	if (!cr0.eq) goto loc_82253D78;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r26,-296
	ctx.r3.s64 = r26.s64 + -296;
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
loc_82253DC8:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82253DD0"))) PPC_WEAK_FUNC(sub_82253DD0);
PPC_FUNC_IMPL(__imp__sub_82253DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15180
	r11.s64 = r11.s64 + 15180;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,15180
	ctx.r10.s64 = ctx.r10.s64 + 15180;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82253DF8"))) PPC_WEAK_FUNC(sub_82253DF8);
PPC_FUNC_IMPL(__imp__sub_82253DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15180
	r11.s64 = r11.s64 + 15180;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,15180
	ctx.r10.s64 = ctx.r10.s64 + 15180;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82253E20"))) PPC_WEAK_FUNC(sub_82253E20);
PPC_FUNC_IMPL(__imp__sub_82253E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15180
	r11.s64 = r11.s64 + 15180;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,15180
	ctx.r10.s64 = ctx.r10.s64 + 15180;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82253E48"))) PPC_WEAK_FUNC(sub_82253E48);
PPC_FUNC_IMPL(__imp__sub_82253E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15180
	r11.s64 = r11.s64 + 15180;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,15180
	ctx.r10.s64 = ctx.r10.s64 + 15180;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82253E70"))) PPC_WEAK_FUNC(sub_82253E70);
PPC_FUNC_IMPL(__imp__sub_82253E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15180
	r11.s64 = r11.s64 + 15180;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,15180
	ctx.r10.s64 = ctx.r10.s64 + 15180;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82253E98"))) PPC_WEAK_FUNC(sub_82253E98);
PPC_FUNC_IMPL(__imp__sub_82253E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15180
	r11.s64 = r11.s64 + 15180;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,15180
	ctx.r10.s64 = ctx.r10.s64 + 15180;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82253EC0"))) PPC_WEAK_FUNC(sub_82253EC0);
PPC_FUNC_IMPL(__imp__sub_82253EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15180
	r11.s64 = r11.s64 + 15180;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,15180
	ctx.r10.s64 = ctx.r10.s64 + 15180;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82253EE8"))) PPC_WEAK_FUNC(sub_82253EE8);
PPC_FUNC_IMPL(__imp__sub_82253EE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82253008
	sub_82253008(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82253EEC"))) PPC_WEAK_FUNC(sub_82253EEC);
PPC_FUNC_IMPL(__imp__sub_82253EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82253EF0"))) PPC_WEAK_FUNC(sub_82253EF0);
PPC_FUNC_IMPL(__imp__sub_82253EF0) {
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
	// addi r3,r31,-112
	ctx.r3.s64 = r31.s64 + -112;
	// bl 0x82251590
	sub_82251590(ctx, base);
	// addi r3,r31,-336
	ctx.r3.s64 = r31.s64 + -336;
	// bl 0x822534a8
	sub_822534A8(ctx, base);
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

__attribute__((alias("__imp__sub_82253F28"))) PPC_WEAK_FUNC(sub_82253F28);
PPC_FUNC_IMPL(__imp__sub_82253F28) {
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
	// lwz r16,4216(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4216);
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
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq cr6,0x82253fc0
	if (cr6.eq) goto loc_82253FC0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r11,r11,4160
	r11.s64 = r11.s64 + 4160;
	// addi r10,r10,4148
	ctx.r10.s64 = ctx.r10.s64 + 4148;
	// addi r9,r9,4140
	ctx.r9.s64 = ctx.r9.s64 + 4140;
	// addi r8,r8,4132
	ctx.r8.s64 = ctx.r8.s64 + 4132;
	// addi r3,r30,336
	ctx.r3.s64 = r30.s64 + 336;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// stw r9,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r9.u32);
	// stw r8,384(r30)
	PPC_STORE_U32(r30.u32 + 384, ctx.r8.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,380
	r11.s64 = r30.s64 + 380;
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
loc_82253FC0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b2dd0
	sub_821B2DD0(ctx, base);
	// addi r29,r30,36
	r29.s64 = r30.s64 + 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b21a0
	sub_821B21A0(ctx, base);
	// addi r11,r30,216
	r11.s64 = r30.s64 + 216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,-11084
	ctx.r10.s64 = ctx.r10.s64 + -11084;
	// addi r9,r9,-11148
	ctx.r9.s64 = ctx.r9.s64 + -11148;
	// lwz r27,4(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r8,r8,4096
	ctx.r8.s64 = ctx.r8.s64 + 4096;
	// addi r7,r7,4088
	ctx.r7.s64 = ctx.r7.s64 + 4088;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r6,r6,4068
	ctx.r6.s64 = ctx.r6.s64 + 4068;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r5,r5,4004
	ctx.r5.s64 = ctx.r5.s64 + 4004;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// addi r4,r4,3996
	ctx.r4.s64 = ctx.r4.s64 + 3996;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// addi r3,r3,2556
	ctx.r3.s64 = ctx.r3.s64 + 2556;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// stw r7,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r7.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-332
	ctx.r10.s64 = r11.s64 + -332;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-376
	ctx.r10.s64 = r11.s64 + -376;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r3,224(r30)
	PPC_STORE_U32(r30.u32 + 224, ctx.r3.u32);
	// stw r28,228(r30)
	PPC_STORE_U32(r30.u32 + 228, r28.u32);
	// stw r28,232(r30)
	PPC_STORE_U32(r30.u32 + 232, r28.u32);
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
	// addi r11,r30,236
	r11.s64 = r30.s64 + 236;
	// std r28,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r28.u64);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r30,308
	r29.s64 = r30.s64 + 308;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stfs f0,244(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 244, temp.u32);
	// stfs f0,248(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 248, temp.u32);
	// stfs f0,252(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 252, temp.u32);
	// stfs f0,256(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 256, temp.u32);
	// stfs f0,260(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 260, temp.u32);
	// stfs f0,264(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 264, temp.u32);
	// stfs f0,268(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 268, temp.u32);
	// stfs f0,272(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 272, temp.u32);
	// stfs f0,276(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 276, temp.u32);
	// stfs f0,280(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 280, temp.u32);
	// stfs f0,284(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 284, temp.u32);
	// stfs f0,288(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 288, temp.u32);
	// stfs f0,292(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 292, temp.u32);
	// stfs f0,296(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 296, temp.u32);
	// stfs f0,300(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 300, temp.u32);
	// stfs f0,304(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 304, temp.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x82251740
	sub_82251740(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,2756
	r11.s64 = r11.s64 + 2756;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r29,r30,320
	r29.s64 = r30.s64 + 320;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x82251840
	sub_82251840(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,2828
	r11.s64 = r11.s64 + 2828;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82253F30"))) PPC_WEAK_FUNC(sub_82253F30);
PPC_FUNC_IMPL(__imp__sub_82253F30) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq cr6,0x82253fc0
	if (cr6.eq) goto loc_82253FC0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r11,r11,4160
	r11.s64 = r11.s64 + 4160;
	// addi r10,r10,4148
	ctx.r10.s64 = ctx.r10.s64 + 4148;
	// addi r9,r9,4140
	ctx.r9.s64 = ctx.r9.s64 + 4140;
	// addi r8,r8,4132
	ctx.r8.s64 = ctx.r8.s64 + 4132;
	// addi r3,r30,336
	ctx.r3.s64 = r30.s64 + 336;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// stw r9,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r9.u32);
	// stw r8,384(r30)
	PPC_STORE_U32(r30.u32 + 384, ctx.r8.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,380
	r11.s64 = r30.s64 + 380;
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
loc_82253FC0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b2dd0
	sub_821B2DD0(ctx, base);
	// addi r29,r30,36
	r29.s64 = r30.s64 + 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b21a0
	sub_821B21A0(ctx, base);
	// addi r11,r30,216
	r11.s64 = r30.s64 + 216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,-11084
	ctx.r10.s64 = ctx.r10.s64 + -11084;
	// addi r9,r9,-11148
	ctx.r9.s64 = ctx.r9.s64 + -11148;
	// lwz r27,4(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r8,r8,4096
	ctx.r8.s64 = ctx.r8.s64 + 4096;
	// addi r7,r7,4088
	ctx.r7.s64 = ctx.r7.s64 + 4088;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r6,r6,4068
	ctx.r6.s64 = ctx.r6.s64 + 4068;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r5,r5,4004
	ctx.r5.s64 = ctx.r5.s64 + 4004;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// addi r4,r4,3996
	ctx.r4.s64 = ctx.r4.s64 + 3996;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// addi r3,r3,2556
	ctx.r3.s64 = ctx.r3.s64 + 2556;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// stw r7,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r7.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-332
	ctx.r10.s64 = r11.s64 + -332;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-376
	ctx.r10.s64 = r11.s64 + -376;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r3,224(r30)
	PPC_STORE_U32(r30.u32 + 224, ctx.r3.u32);
	// stw r28,228(r30)
	PPC_STORE_U32(r30.u32 + 228, r28.u32);
	// stw r28,232(r30)
	PPC_STORE_U32(r30.u32 + 232, r28.u32);
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
	// addi r11,r30,236
	r11.s64 = r30.s64 + 236;
	// std r28,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r28.u64);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r30,308
	r29.s64 = r30.s64 + 308;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stfs f0,244(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 244, temp.u32);
	// stfs f0,248(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 248, temp.u32);
	// stfs f0,252(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 252, temp.u32);
	// stfs f0,256(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 256, temp.u32);
	// stfs f0,260(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 260, temp.u32);
	// stfs f0,264(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 264, temp.u32);
	// stfs f0,268(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 268, temp.u32);
	// stfs f0,272(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 272, temp.u32);
	// stfs f0,276(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 276, temp.u32);
	// stfs f0,280(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 280, temp.u32);
	// stfs f0,284(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 284, temp.u32);
	// stfs f0,288(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 288, temp.u32);
	// stfs f0,292(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 292, temp.u32);
	// stfs f0,296(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 296, temp.u32);
	// stfs f0,300(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 300, temp.u32);
	// stfs f0,304(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 304, temp.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x82251740
	sub_82251740(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,2756
	r11.s64 = r11.s64 + 2756;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r29,r30,320
	r29.s64 = r30.s64 + 320;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x82251840
	sub_82251840(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,2828
	r11.s64 = r11.s64 + 2828;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82254154"))) PPC_WEAK_FUNC(sub_82254154);
PPC_FUNC_IMPL(__imp__sub_82254154) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82254188
	if (cr0.eq) goto loc_82254188;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,336
	ctx.r3.s64 = r11.s64 + 336;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_82254188:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82254198"))) PPC_WEAK_FUNC(sub_82254198);
PPC_FUNC_IMPL(__imp__sub_82254198) {
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
	// addi r3,r11,220
	ctx.r3.s64 = r11.s64 + 220;
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

__attribute__((alias("__imp__sub_822541C4"))) PPC_WEAK_FUNC(sub_822541C4);
PPC_FUNC_IMPL(__imp__sub_822541C4) {
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
	// addi r3,r11,224
	ctx.r3.s64 = r11.s64 + 224;
	// bl 0x82251a90
	sub_82251A90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822541F0"))) PPC_WEAK_FUNC(sub_822541F0);
PPC_FUNC_IMPL(__imp__sub_822541F0) {
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
	// addi r3,r11,236
	ctx.r3.s64 = r11.s64 + 236;
	// bl 0x82253ee8
	sub_82253EE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8225421C"))) PPC_WEAK_FUNC(sub_8225421C);
PPC_FUNC_IMPL(__imp__sub_8225421C) {
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
	// addi r3,r11,308
	ctx.r3.s64 = r11.s64 + 308;
	// bl 0x82251a78
	sub_82251A78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82254248"))) PPC_WEAK_FUNC(sub_82254248);
PPC_FUNC_IMPL(__imp__sub_82254248) {
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
	// bl 0x82224560
	sub_82224560(ctx, base);
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

__attribute__((alias("__imp__sub_82254278"))) PPC_WEAK_FUNC(sub_82254278);
PPC_FUNC_IMPL(__imp__sub_82254278) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-116
	ctx.r3.s64 = ctx.r3.s64 + -116;
	// b 0x821afb18
	sub_821AFB18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82254280"))) PPC_WEAK_FUNC(sub_82254280);
PPC_FUNC_IMPL(__imp__sub_82254280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82251298
	sub_82251298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225428C"))) PPC_WEAK_FUNC(sub_8225428C);
PPC_FUNC_IMPL(__imp__sub_8225428C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82254290"))) PPC_WEAK_FUNC(sub_82254290);
PPC_FUNC_IMPL(__imp__sub_82254290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82254850
	sub_82254850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225429C"))) PPC_WEAK_FUNC(sub_8225429C);
PPC_FUNC_IMPL(__imp__sub_8225429C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822542A0"))) PPC_WEAK_FUNC(sub_822542A0);
PPC_FUNC_IMPL(__imp__sub_822542A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x82254248
	sub_82254248(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822542AC"))) PPC_WEAK_FUNC(sub_822542AC);
PPC_FUNC_IMPL(__imp__sub_822542AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822542B0"))) PPC_WEAK_FUNC(sub_822542B0);
PPC_FUNC_IMPL(__imp__sub_822542B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82254278
	sub_82254278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822542BC"))) PPC_WEAK_FUNC(sub_822542BC);
PPC_FUNC_IMPL(__imp__sub_822542BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822542C0"))) PPC_WEAK_FUNC(sub_822542C0);
PPC_FUNC_IMPL(__imp__sub_822542C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-116
	ctx.r3.s64 = ctx.r3.s64 + -116;
	// b 0x821b0888
	sub_821B0888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822542D0"))) PPC_WEAK_FUNC(sub_822542D0);
PPC_FUNC_IMPL(__imp__sub_822542D0) {
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
	// lwz r16,4296(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4296);
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
	// lwz r11,15188(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15188);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82254354
	if (!cr0.eq) goto loc_82254354;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,15188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15188, r11.u32);
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
	// bl 0x82224560
	sub_82224560(ctx, base);
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
	// stw r3,15184(r27)
	PPC_STORE_U32(r27.u32 + 15184, ctx.r3.u32);
	// b 0x82254358
	goto loc_82254358;
loc_82254354:
	// lwz r3,15184(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 15184);
loc_82254358:
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
	// beq 0x82254394
	if (cr0.eq) goto loc_82254394;
	// lwz r11,-332(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -332);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-332
	ctx.r3.s64 = r11.s64 + -332;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x82254410
	goto loc_82254410;
loc_82254394:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x822543f4
	if (!cr0.eq) goto loc_822543F4;
	// addic. r11,r30,-336
	xer.ca = r30.u32 > 335;
	r11.s64 = r30.s64 + -336;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822543b8
	if (!cr0.eq) goto loc_822543B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822543c8
	goto loc_822543C8;
loc_822543B8:
	// lwz r11,-332(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -332);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-332
	ctx.r3.s64 = r11.s64 + -332;
loc_822543C8:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-332(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -332);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-332
	ctx.r4.s64 = r11.s64 + -332;
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
loc_822543F4:
	// lwz r11,-332(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -332);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-332
	ctx.r3.s64 = r11.s64 + -332;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82254410:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822542D8"))) PPC_WEAK_FUNC(sub_822542D8);
PPC_FUNC_IMPL(__imp__sub_822542D8) {
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
	// lwz r11,15188(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15188);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82254354
	if (!cr0.eq) goto loc_82254354;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,15188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15188, r11.u32);
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
	// bl 0x82224560
	sub_82224560(ctx, base);
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
	// stw r3,15184(r27)
	PPC_STORE_U32(r27.u32 + 15184, ctx.r3.u32);
	// b 0x82254358
	goto loc_82254358;
loc_82254354:
	// lwz r3,15184(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 15184);
loc_82254358:
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
	// beq 0x82254394
	if (cr0.eq) goto loc_82254394;
	// lwz r11,-332(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -332);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-332
	ctx.r3.s64 = r11.s64 + -332;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x82254410
	goto loc_82254410;
loc_82254394:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x822543f4
	if (!cr0.eq) goto loc_822543F4;
	// addic. r11,r30,-336
	xer.ca = r30.u32 > 335;
	r11.s64 = r30.s64 + -336;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822543b8
	if (!cr0.eq) goto loc_822543B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822543c8
	goto loc_822543C8;
loc_822543B8:
	// lwz r11,-332(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -332);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-332
	ctx.r3.s64 = r11.s64 + -332;
loc_822543C8:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-332(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -332);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-332
	ctx.r4.s64 = r11.s64 + -332;
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
loc_822543F4:
	// lwz r11,-332(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -332);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-332
	ctx.r3.s64 = r11.s64 + -332;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82254410:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8225441C"))) PPC_WEAK_FUNC(sub_8225441C);
PPC_FUNC_IMPL(__imp__sub_8225441C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,15188
	r11.s64 = r11.s64 + 15188;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,15188
	ctx.r10.s64 = ctx.r10.s64 + 15188;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82254444"))) PPC_WEAK_FUNC(sub_82254444);
PPC_FUNC_IMPL(__imp__sub_82254444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82254448"))) PPC_WEAK_FUNC(sub_82254448);
PPC_FUNC_IMPL(__imp__sub_82254448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x822542d8
	sub_822542D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82254454"))) PPC_WEAK_FUNC(sub_82254454);
PPC_FUNC_IMPL(__imp__sub_82254454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82254458"))) PPC_WEAK_FUNC(sub_82254458);
PPC_FUNC_IMPL(__imp__sub_82254458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x822521a8
	sub_822521A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82254464"))) PPC_WEAK_FUNC(sub_82254464);
PPC_FUNC_IMPL(__imp__sub_82254464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82254468"))) PPC_WEAK_FUNC(sub_82254468);
PPC_FUNC_IMPL(__imp__sub_82254468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x82252c08
	sub_82252C08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82254474"))) PPC_WEAK_FUNC(sub_82254474);
PPC_FUNC_IMPL(__imp__sub_82254474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82254478"))) PPC_WEAK_FUNC(sub_82254478);
PPC_FUNC_IMPL(__imp__sub_82254478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82253210
	sub_82253210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82254484"))) PPC_WEAK_FUNC(sub_82254484);
PPC_FUNC_IMPL(__imp__sub_82254484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82254488"))) PPC_WEAK_FUNC(sub_82254488);
PPC_FUNC_IMPL(__imp__sub_82254488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82253358
	sub_82253358(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82254494"))) PPC_WEAK_FUNC(sub_82254494);
PPC_FUNC_IMPL(__imp__sub_82254494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82254498"))) PPC_WEAK_FUNC(sub_82254498);
PPC_FUNC_IMPL(__imp__sub_82254498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82253a98
	sub_82253A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822544A4"))) PPC_WEAK_FUNC(sub_822544A4);
PPC_FUNC_IMPL(__imp__sub_822544A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822544A8"))) PPC_WEAK_FUNC(sub_822544A8);
PPC_FUNC_IMPL(__imp__sub_822544A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,4408(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4408);
	// mflr r12
	// bl 0x8239bce0
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,4096
	r11.s64 = r11.s64 + 4096;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r10,r10,4088
	ctx.r10.s64 = ctx.r10.s64 + 4088;
	// addi r22,r30,-300
	r22.s64 = r30.s64 + -300;
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
	// stw r11,-336(r30)
	PPC_STORE_U32(r30.u32 + -336, r11.u32);
	// addi r9,r9,4068
	ctx.r9.s64 = ctx.r9.s64 + 4068;
	// lwz r11,-332(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -332);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r8,r8,4004
	ctx.r8.s64 = ctx.r8.s64 + 4004;
	// stw r10,0(r22)
	PPC_STORE_U32(r22.u32 + 0, ctx.r10.u32);
	// addi r7,r7,3996
	ctx.r7.s64 = ctx.r7.s64 + 3996;
	// stw r9,-120(r30)
	PPC_STORE_U32(r30.u32 + -120, ctx.r9.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,-332(r11)
	PPC_STORE_U32(r11.u32 + -332, ctx.r8.u32);
	// lwz r11,-332(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -332);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r7,-332(r11)
	PPC_STORE_U32(r11.u32 + -332, ctx.r7.u32);
	// lwz r11,-332(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -332);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-332
	ctx.r10.s64 = r11.s64 + -332;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-336(r11)
	PPC_STORE_U32(r11.u32 + -336, ctx.r10.u32);
	// lwz r11,-332(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -332);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-376
	ctx.r10.s64 = r11.s64 + -376;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-336(r11)
	PPC_STORE_U32(r11.u32 + -336, ctx.r10.u32);
	// addi r25,r30,-112
	r25.s64 = r30.s64 + -112;
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82254564
	if (cr0.eq) goto loc_82254564;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
loc_8225455C:
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// b 0x82254578
	goto loc_82254578;
loc_82254564:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8225455c
	if (!cr0.eq) goto loc_8225455C;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,-2080
	ctx.r4.s64 = r11.s64 + -2080;
loc_82254578:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82251440
	sub_82251440(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,15600
	ctx.r3.s64 = r11.s64 + 15600;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// bl 0x8235a608
	sub_8235A608(ctx, base);
	// li r23,0
	r23.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x822546b8
	if (!cr0.eq) goto loc_822546B8;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,15096
	r29.s64 = r11.s64 + 15096;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r24,r11,15012
	r24.s64 = r11.s64 + 15012;
	// mr r11,r23
	r11.u64 = r23.u64;
	// stb r11,-4(r24)
	PPC_STORE_U8(r24.u32 + -4, r11.u8);
	// b 0x8225466c
	goto loc_8225466C;
loc_822545D4:
	// addi r27,r11,8
	r27.s64 = r11.s64 + 8;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82254608
	if (cr0.eq) goto loc_82254608;
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
loc_82254608:
	// addi r28,r27,4
	r28.s64 = r27.s64 + 4;
	// stw r23,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r23.u32);
	// li r26,2
	r26.s64 = 2;
loc_82254614:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82254644
	if (cr0.eq) goto loc_82254644;
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
loc_82254644:
	// stw r23,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r23.u32);
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x82254614
	if (!cr0.eq) goto loc_82254614;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82252fb0
	sub_82252FB0(ctx, base);
loc_8225466C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r10,r11,r29
	ctx.r10.s64 = r29.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822545d4
	if (cr0.eq) goto loc_822545D4;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822546b0
	if (cr6.eq) goto loc_822546B0;
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
loc_822546B0:
	// mr r11,r23
	r11.u64 = r23.u64;
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
loc_822546B8:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r30,-16
	ctx.r3.s64 = r30.s64 + -16;
	// bl 0x82251608
	sub_82251608(ctx, base);
	// addi r3,r30,-28
	ctx.r3.s64 = r30.s64 + -28;
	// bl 0x822513b0
	sub_822513B0(ctx, base);
	// addi r3,r30,-100
	ctx.r3.s64 = r30.s64 + -100;
	// bl 0x82253008
	sub_82253008(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82251a90
	sub_82251A90(ctx, base);
	// addic. r11,r30,-336
	xer.ca = r30.u32 > 335;
	r11.s64 = r30.s64 + -336;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r22
	r11.u64 = r22.u64;
	// bne 0x822546f0
	if (!cr0.eq) goto loc_822546F0;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_822546F0:
	// addi r3,r11,184
	ctx.r3.s64 = r11.s64 + 184;
	// bl 0x821b24f8
	sub_821B24F8(ctx, base);
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_822544B0"))) PPC_WEAK_FUNC(sub_822544B0);
PPC_FUNC_IMPL(__imp__sub_822544B0) {
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,4096
	r11.s64 = r11.s64 + 4096;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r10,r10,4088
	ctx.r10.s64 = ctx.r10.s64 + 4088;
	// addi r22,r30,-300
	r22.s64 = r30.s64 + -300;
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
	// stw r11,-336(r30)
	PPC_STORE_U32(r30.u32 + -336, r11.u32);
	// addi r9,r9,4068
	ctx.r9.s64 = ctx.r9.s64 + 4068;
	// lwz r11,-332(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -332);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r8,r8,4004
	ctx.r8.s64 = ctx.r8.s64 + 4004;
	// stw r10,0(r22)
	PPC_STORE_U32(r22.u32 + 0, ctx.r10.u32);
	// addi r7,r7,3996
	ctx.r7.s64 = ctx.r7.s64 + 3996;
	// stw r9,-120(r30)
	PPC_STORE_U32(r30.u32 + -120, ctx.r9.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,-332(r11)
	PPC_STORE_U32(r11.u32 + -332, ctx.r8.u32);
	// lwz r11,-332(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -332);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r7,-332(r11)
	PPC_STORE_U32(r11.u32 + -332, ctx.r7.u32);
	// lwz r11,-332(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -332);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-332
	ctx.r10.s64 = r11.s64 + -332;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-336(r11)
	PPC_STORE_U32(r11.u32 + -336, ctx.r10.u32);
	// lwz r11,-332(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -332);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-376
	ctx.r10.s64 = r11.s64 + -376;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-336(r11)
	PPC_STORE_U32(r11.u32 + -336, ctx.r10.u32);
	// addi r25,r30,-112
	r25.s64 = r30.s64 + -112;
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82254564
	if (cr0.eq) goto loc_82254564;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
loc_8225455C:
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// b 0x82254578
	goto loc_82254578;
loc_82254564:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8225455c
	if (!cr0.eq) goto loc_8225455C;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,-2080
	ctx.r4.s64 = r11.s64 + -2080;
loc_82254578:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82251440
	sub_82251440(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,15600
	ctx.r3.s64 = r11.s64 + 15600;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// bl 0x8235a608
	sub_8235A608(ctx, base);
	// li r23,0
	r23.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x822546b8
	if (!cr0.eq) goto loc_822546B8;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r29,r11,15096
	r29.s64 = r11.s64 + 15096;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r24,r11,15012
	r24.s64 = r11.s64 + 15012;
	// mr r11,r23
	r11.u64 = r23.u64;
	// stb r11,-4(r24)
	PPC_STORE_U8(r24.u32 + -4, r11.u8);
	// b 0x8225466c
	goto loc_8225466C;
loc_822545D4:
	// addi r27,r11,8
	r27.s64 = r11.s64 + 8;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82254608
	if (cr0.eq) goto loc_82254608;
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
loc_82254608:
	// addi r28,r27,4
	r28.s64 = r27.s64 + 4;
	// stw r23,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r23.u32);
	// li r26,2
	r26.s64 = 2;
loc_82254614:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82254644
	if (cr0.eq) goto loc_82254644;
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
loc_82254644:
	// stw r23,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r23.u32);
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x82254614
	if (!cr0.eq) goto loc_82254614;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82252fb0
	sub_82252FB0(ctx, base);
loc_8225466C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r10,r11,r29
	ctx.r10.s64 = r29.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822545d4
	if (cr0.eq) goto loc_822545D4;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822546b0
	if (cr6.eq) goto loc_822546B0;
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
loc_822546B0:
	// mr r11,r23
	r11.u64 = r23.u64;
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
loc_822546B8:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r30,-16
	ctx.r3.s64 = r30.s64 + -16;
	// bl 0x82251608
	sub_82251608(ctx, base);
	// addi r3,r30,-28
	ctx.r3.s64 = r30.s64 + -28;
	// bl 0x822513b0
	sub_822513B0(ctx, base);
	// addi r3,r30,-100
	ctx.r3.s64 = r30.s64 + -100;
	// bl 0x82253008
	sub_82253008(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82251a90
	sub_82251A90(ctx, base);
	// addic. r11,r30,-336
	xer.ca = r30.u32 > 335;
	r11.s64 = r30.s64 + -336;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r22
	r11.u64 = r22.u64;
	// bne 0x822546f0
	if (!cr0.eq) goto loc_822546F0;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_822546F0:
	// addi r3,r11,184
	ctx.r3.s64 = r11.s64 + 184;
	// bl 0x821b24f8
	sub_821B24F8(ctx, base);
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_82254700"))) PPC_WEAK_FUNC(sub_82254700);
PPC_FUNC_IMPL(__imp__sub_82254700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
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
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// addic. r11,r11,-336
	xer.ca = r11.u32 > 335;
	r11.s64 = r11.s64 + -336;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82254730
	if (cr0.eq) goto loc_82254730;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// addi r11,r11,-336
	r11.s64 = r11.s64 + -336;
	// addi r11,r11,36
	r11.s64 = r11.s64 + 36;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// b 0x82254738
	goto loc_82254738;
loc_82254730:
	// li r11,0
	r11.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
loc_82254738:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
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

__attribute__((alias("__imp__sub_82254754"))) PPC_WEAK_FUNC(sub_82254754);
PPC_FUNC_IMPL(__imp__sub_82254754) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// addi r11,r11,-336
	r11.s64 = r11.s64 + -336;
	// addi r3,r11,224
	ctx.r3.s64 = r11.s64 + 224;
	// bl 0x82251a90
	sub_82251A90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82254784"))) PPC_WEAK_FUNC(sub_82254784);
PPC_FUNC_IMPL(__imp__sub_82254784) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// addi r11,r11,-336
	r11.s64 = r11.s64 + -336;
	// addi r3,r11,236
	ctx.r3.s64 = r11.s64 + 236;
	// bl 0x82253ee8
	sub_82253EE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822547B4"))) PPC_WEAK_FUNC(sub_822547B4);
PPC_FUNC_IMPL(__imp__sub_822547B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// addi r11,r11,-336
	r11.s64 = r11.s64 + -336;
	// addi r3,r11,308
	ctx.r3.s64 = r11.s64 + 308;
	// bl 0x82251a78
	sub_82251A78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822547E4"))) PPC_WEAK_FUNC(sub_822547E4);
PPC_FUNC_IMPL(__imp__sub_822547E4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// addi r11,r11,-336
	r11.s64 = r11.s64 + -336;
	// addi r3,r11,320
	ctx.r3.s64 = r11.s64 + 320;
	// bl 0x82251a80
	sub_82251A80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82254814"))) PPC_WEAK_FUNC(sub_82254814);
PPC_FUNC_IMPL(__imp__sub_82254814) {
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

__attribute__((alias("__imp__sub_8225483C"))) PPC_WEAK_FUNC(sub_8225483C);
PPC_FUNC_IMPL(__imp__sub_8225483C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82254840"))) PPC_WEAK_FUNC(sub_82254840);
PPC_FUNC_IMPL(__imp__sub_82254840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82253ef0
	sub_82253EF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225484C"))) PPC_WEAK_FUNC(sub_8225484C);
PPC_FUNC_IMPL(__imp__sub_8225484C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82254850"))) PPC_WEAK_FUNC(sub_82254850);
PPC_FUNC_IMPL(__imp__sub_82254850) {
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
	// addi r30,r3,-336
	r30.s64 = ctx.r3.s64 + -336;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,336
	r31.s64 = r30.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822544b0
	sub_822544B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82254888
	if (cr0.eq) goto loc_82254888;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_82254888:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82254894"))) PPC_WEAK_FUNC(sub_82254894);
PPC_FUNC_IMPL(__imp__sub_82254894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82254898"))) PPC_WEAK_FUNC(sub_82254898);
PPC_FUNC_IMPL(__imp__sub_82254898) {
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
	// bl 0x821b8ed0
	sub_821B8ED0(ctx, base);
	// lwz r11,320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 320);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822548e4
	if (cr6.eq) goto loc_822548E4;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lwz r31,320(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 320);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x821af870
	sub_821AF870(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x821b2800
	sub_821B2800(ctx, base);
loc_822548E4:
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

__attribute__((alias("__imp__sub_822548F8"))) PPC_WEAK_FUNC(sub_822548F8);
PPC_FUNC_IMPL(__imp__sub_822548F8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x821b9048
	sub_821B9048(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82254968
	if (!cr0.eq) goto loc_82254968;
	// lwz r11,320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 320);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82254974
	if (cr6.eq) goto loc_82254974;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lwz r30,320(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 320);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x821af870
	sub_821AF870(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x821b2c18
	sub_821B2C18(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82254974
	if (cr0.eq) goto loc_82254974;
loc_82254968:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addic. r11,r31,-128
	xer.ca = r31.u32 > 127;
	r11.s64 = r31.s64 + -128;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82254978
	if (!cr0.eq) goto loc_82254978;
loc_82254974:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82254978:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82254980"))) PPC_WEAK_FUNC(sub_82254980);
PPC_FUNC_IMPL(__imp__sub_82254980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// b 0x8231f298
	sub_8231F298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822549AC"))) PPC_WEAK_FUNC(sub_822549AC);
PPC_FUNC_IMPL(__imp__sub_822549AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822549B0"))) PPC_WEAK_FUNC(sub_822549B0);
PPC_FUNC_IMPL(__imp__sub_822549B0) {
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
	// lwz r11,-452(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -452);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-452
	ctx.r3.s64 = r11.s64 + -452;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,-452(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -452);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-452
	ctx.r3.s64 = r11.s64 + -452;
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

__attribute__((alias("__imp__sub_82254A28"))) PPC_WEAK_FUNC(sub_82254A28);
PPC_FUNC_IMPL(__imp__sub_82254A28) {
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
	// beq 0x82254a68
	if (cr0.eq) goto loc_82254A68;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,17396
	ctx.r3.s64 = r11.s64 + 17396;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82254a70
	goto loc_82254A70;
loc_82254A68:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82254A70:
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

__attribute__((alias("__imp__sub_82254A8C"))) PPC_WEAK_FUNC(sub_82254A8C);
PPC_FUNC_IMPL(__imp__sub_82254A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82254A90"))) PPC_WEAK_FUNC(sub_82254A90);
PPC_FUNC_IMPL(__imp__sub_82254A90) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// addi r4,r30,-20
	ctx.r4.s64 = r30.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822519a0
	sub_822519A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-16
	ctx.r3.s64 = r30.s64 + -16;
	// bl 0x821b9310
	sub_821B9310(ctx, base);
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

__attribute__((alias("__imp__sub_82254AF4"))) PPC_WEAK_FUNC(sub_82254AF4);
PPC_FUNC_IMPL(__imp__sub_82254AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82254AF8"))) PPC_WEAK_FUNC(sub_82254AF8);
PPC_FUNC_IMPL(__imp__sub_82254AF8) {
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
	// lwz r16,4544(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4544);
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
	// addi r4,r28,-16
	ctx.r4.s64 = r28.s64 + -16;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821b9e40
	sub_821B9E40(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82254b78
	if (cr6.eq) goto loc_82254B78;
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
	// beq 0x82254b84
	if (cr0.eq) goto loc_82254B84;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82254b84
	goto loc_82254B84;
loc_82254B78:
	// li r11,6
	r11.s64 = 6;
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_82254B84:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82254B00"))) PPC_WEAK_FUNC(sub_82254B00);
PPC_FUNC_IMPL(__imp__sub_82254B00) {
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
	// addi r4,r28,-16
	ctx.r4.s64 = r28.s64 + -16;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821b9e40
	sub_821B9E40(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82254b78
	if (cr6.eq) goto loc_82254B78;
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
	// beq 0x82254b84
	if (cr0.eq) goto loc_82254B84;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82254b84
	goto loc_82254B84;
loc_82254B78:
	// li r11,6
	r11.s64 = 6;
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_82254B84:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82254B90"))) PPC_WEAK_FUNC(sub_82254B90);
PPC_FUNC_IMPL(__imp__sub_82254B90) {
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

__attribute__((alias("__imp__sub_82254BB8"))) PPC_WEAK_FUNC(sub_82254BB8);
PPC_FUNC_IMPL(__imp__sub_82254BB8) {
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
	// bl 0x82254a28
	sub_82254A28(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82254be8
	if (cr0.eq) goto loc_82254BE8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82254BE8:
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

__attribute__((alias("__imp__sub_82254BFC"))) PPC_WEAK_FUNC(sub_82254BFC);
PPC_FUNC_IMPL(__imp__sub_82254BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82254C00"))) PPC_WEAK_FUNC(sub_82254C00);
PPC_FUNC_IMPL(__imp__sub_82254C00) {
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
	// addi r31,r11,2720
	r31.s64 = r11.s64 + 2720;
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

__attribute__((alias("__imp__sub_82254C58"))) PPC_WEAK_FUNC(sub_82254C58);
PPC_FUNC_IMPL(__imp__sub_82254C58) {
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
	// bl 0x82254bb8
	sub_82254BB8(ctx, base);
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

__attribute__((alias("__imp__sub_82254CBC"))) PPC_WEAK_FUNC(sub_82254CBC);
PPC_FUNC_IMPL(__imp__sub_82254CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82254CC0"))) PPC_WEAK_FUNC(sub_82254CC0);
PPC_FUNC_IMPL(__imp__sub_82254CC0) {
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
	// li r3,12
	ctx.r3.s64 = 12;
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

__attribute__((alias("__imp__sub_82254D14"))) PPC_WEAK_FUNC(sub_82254D14);
PPC_FUNC_IMPL(__imp__sub_82254D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82254D18"))) PPC_WEAK_FUNC(sub_82254D18);
PPC_FUNC_IMPL(__imp__sub_82254D18) {
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
	// b 0x82254d48
	goto loc_82254D48;
loc_82254D38:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82254D48:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82254d38
	if (!cr6.eq) goto loc_82254D38;
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

__attribute__((alias("__imp__sub_82254D70"))) PPC_WEAK_FUNC(sub_82254D70);
PPC_FUNC_IMPL(__imp__sub_82254D70) {
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
	// b 0x82254da0
	goto loc_82254DA0;
loc_82254D90:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82254DA0:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82254d90
	if (!cr6.eq) goto loc_82254D90;
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

__attribute__((alias("__imp__sub_82254DC8"))) PPC_WEAK_FUNC(sub_82254DC8);
PPC_FUNC_IMPL(__imp__sub_82254DC8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r30,-20
	ctx.r4.s64 = r30.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82253068
	sub_82253068(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-16
	ctx.r3.s64 = r30.s64 + -16;
	// bl 0x821ba438
	sub_821BA438(ctx, base);
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

__attribute__((alias("__imp__sub_82254E24"))) PPC_WEAK_FUNC(sub_82254E24);
PPC_FUNC_IMPL(__imp__sub_82254E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82254E28"))) PPC_WEAK_FUNC(sub_82254E28);
PPC_FUNC_IMPL(__imp__sub_82254E28) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r10,r11,r31
	ctx.r10.s64 = r31.s64 - r11.s64;
	// b 0x82254e78
	goto loc_82254E78;
loc_82254E48:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82254e70
	if (!cr6.eq) goto loc_82254E70;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82254cc0
	sub_82254CC0(ctx, base);
loc_82254E70:
	// subf r10,r30,r31
	ctx.r10.s64 = r31.s64 - r30.s64;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82254E78:
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82254e48
	if (!cr0.eq) goto loc_82254E48;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82254E94"))) PPC_WEAK_FUNC(sub_82254E94);
PPC_FUNC_IMPL(__imp__sub_82254E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82254E98"))) PPC_WEAK_FUNC(sub_82254E98);
PPC_FUNC_IMPL(__imp__sub_82254E98) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bne 0x82254ef4
	if (!cr0.eq) goto loc_82254EF4;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,15228
	ctx.r3.s64 = r11.s64 + 15228;
	// bl 0x82254e28
	sub_82254E28(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
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
loc_82254EF4:
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

__attribute__((alias("__imp__sub_82254F08"))) PPC_WEAK_FUNC(sub_82254F08);
PPC_FUNC_IMPL(__imp__sub_82254F08) {
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
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r30,240(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 240);
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82254fd0
	if (cr0.eq) goto loc_82254FD0;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r28,r11,2720
	r28.s64 = r11.s64 + 2720;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r31,r11,920
	r31.s64 = r11.s64 + 920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,1264
	r29.s64 = r11.s64 + 1264;
loc_82254F4C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82254f8c
	if (cr0.eq) goto loc_82254F8C;
	// addi r4,r27,16
	ctx.r4.s64 = r27.s64 + 16;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// bl 0x82187ad8
	sub_82187AD8(ctx, base);
	// b 0x82254fb8
	goto loc_82254FB8;
loc_82254F8C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82254fb8
	if (cr0.eq) goto loc_82254FB8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82254f08
	sub_82254F08(ctx, base);
loc_82254FB8:
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82254f4c
	if (!cr0.eq) goto loc_82254F4C;
loc_82254FD0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82254FD8"))) PPC_WEAK_FUNC(sub_82254FD8);
PPC_FUNC_IMPL(__imp__sub_82254FD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82254d70
	sub_82254D70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82254FDC"))) PPC_WEAK_FUNC(sub_82254FDC);
PPC_FUNC_IMPL(__imp__sub_82254FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82254FE0"))) PPC_WEAK_FUNC(sub_82254FE0);
PPC_FUNC_IMPL(__imp__sub_82254FE0) {
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
	// lwz r16,4720(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4720);
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
	// li r25,0
	r25.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r28,1
	r28.s64 = 1;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r25,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r25.u32);
	// beq cr6,0x82255034
	if (cr6.eq) goto loc_82255034;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// addi r11,r11,4692
	r11.s64 = r11.s64 + 4692;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
loc_82255034:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// addi r10,r10,-11084
	ctx.r10.s64 = ctx.r10.s64 + -11084;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r9,r9,-11148
	ctx.r9.s64 = ctx.r9.s64 + -11148;
	// std r25,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r25.u64);
	// addi r8,r8,4676
	ctx.r8.s64 = ctx.r8.s64 + 4676;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r11,4(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r10,r10,4612
	ctx.r10.s64 = ctx.r10.s64 + 4612;
	// ld r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r27.u32);
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
	// std r6,0(r29)
	PPC_STORE_U64(r29.u32 + 0, ctx.r6.u64);
	// stw r29,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r29.u32);
	// stw r29,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r29.u32);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// stw r26,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r26.u32);
	// addi r4,r11,15228
	ctx.r4.s64 = r11.s64 + 15228;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// bl 0x82254c58
	sub_82254C58(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82254f08
	sub_82254F08(ctx, base);
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x822550f0
	goto loc_822550F0;
loc_822550D8:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 0);
loc_822550F0:
	// subf r11,r28,r29
	r11.s64 = r29.s64 - r28.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822550d8
	if (!cr0.eq) goto loc_822550D8;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r28,r11,1740
	r28.s64 = r11.s64 + 1740;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r29,r11,1688
	r29.s64 = r11.s64 + 1688;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x8225516c
	if (cr0.eq) goto loc_8225516C;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8225516c
	if (cr0.eq) goto loc_8225516C;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x823266e8
	sub_823266E8(ctx, base);
loc_8225516C:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,1664
	ctx.r6.s64 = r11.s64 + 1664;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82255198
	if (cr0.eq) goto loc_82255198;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821ba3b0
	sub_821BA3B0(ctx, base);
loc_82255198:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82254FE8"))) PPC_WEAK_FUNC(sub_82254FE8);
PPC_FUNC_IMPL(__imp__sub_82254FE8) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r28,1
	r28.s64 = 1;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r25,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r25.u32);
	// beq cr6,0x82255034
	if (cr6.eq) goto loc_82255034;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// addi r11,r11,4692
	r11.s64 = r11.s64 + 4692;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
loc_82255034:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// addi r10,r10,-11084
	ctx.r10.s64 = ctx.r10.s64 + -11084;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r9,r9,-11148
	ctx.r9.s64 = ctx.r9.s64 + -11148;
	// std r25,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r25.u64);
	// addi r8,r8,4676
	ctx.r8.s64 = ctx.r8.s64 + 4676;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r11,4(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r10,r10,4612
	ctx.r10.s64 = ctx.r10.s64 + 4612;
	// ld r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r27.u32);
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
	// std r6,0(r29)
	PPC_STORE_U64(r29.u32 + 0, ctx.r6.u64);
	// stw r29,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r29.u32);
	// stw r29,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r29.u32);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// stw r26,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r26.u32);
	// addi r4,r11,15228
	ctx.r4.s64 = r11.s64 + 15228;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// bl 0x82254c58
	sub_82254C58(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82254f08
	sub_82254F08(ctx, base);
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x822550f0
	goto loc_822550F0;
loc_822550D8:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 0);
loc_822550F0:
	// subf r11,r28,r29
	r11.s64 = r29.s64 - r28.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822550d8
	if (!cr0.eq) goto loc_822550D8;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r28,r11,1740
	r28.s64 = r11.s64 + 1740;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r29,r11,1688
	r29.s64 = r11.s64 + 1688;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x8225516c
	if (cr0.eq) goto loc_8225516C;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8225516c
	if (cr0.eq) goto loc_8225516C;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x823266e8
	sub_823266E8(ctx, base);
loc_8225516C:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,1664
	ctx.r6.s64 = r11.s64 + 1664;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82255198
	if (cr0.eq) goto loc_82255198;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821ba3b0
	sub_821BA3B0(ctx, base);
loc_82255198:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822551A4"))) PPC_WEAK_FUNC(sub_822551A4);
PPC_FUNC_IMPL(__imp__sub_822551A4) {
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
	// beq 0x822551d8
	if (cr0.eq) goto loc_822551D8;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_822551D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822551E8"))) PPC_WEAK_FUNC(sub_822551E8);
PPC_FUNC_IMPL(__imp__sub_822551E8) {
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
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x821286c0
	sub_821286C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82255214"))) PPC_WEAK_FUNC(sub_82255214);
PPC_FUNC_IMPL(__imp__sub_82255214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82255218"))) PPC_WEAK_FUNC(sub_82255218);
PPC_FUNC_IMPL(__imp__sub_82255218) {
	PPC_FUNC_PROLOGUE();
	// addi r4,r4,-20
	ctx.r4.s64 = ctx.r4.s64 + -20;
	// b 0x821b3e18
	sub_821B3E18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82255220"))) PPC_WEAK_FUNC(sub_82255220);
PPC_FUNC_IMPL(__imp__sub_82255220) {
	PPC_FUNC_PROLOGUE();
	// addi r4,r4,-20
	ctx.r4.s64 = ctx.r4.s64 + -20;
	// b 0x82160998
	sub_82160998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82255228"))) PPC_WEAK_FUNC(sub_82255228);
PPC_FUNC_IMPL(__imp__sub_82255228) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// b 0x82160cd8
	sub_82160CD8(ctx, base);
	return;
}

