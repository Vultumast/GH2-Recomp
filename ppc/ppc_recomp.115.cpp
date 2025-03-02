#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82366FBC"))) PPC_WEAK_FUNC(sub_82366FBC);
PPC_FUNC_IMPL(__imp__sub_82366FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366FC0"))) PPC_WEAK_FUNC(sub_82366FC0);
PPC_FUNC_IMPL(__imp__sub_82366FC0) {
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
	// bl 0x82366898
	sub_82366898(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82366ff0
	if (cr0.eq) goto loc_82366FF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82366FF0:
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

__attribute__((alias("__imp__sub_8236700C"))) PPC_WEAK_FUNC(sub_8236700C);
PPC_FUNC_IMPL(__imp__sub_8236700C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367010"))) PPC_WEAK_FUNC(sub_82367010);
PPC_FUNC_IMPL(__imp__sub_82367010) {
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
	// lwz r16,-6392(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6392);
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
	// beq cr6,0x8236709c
	if (cr6.eq) goto loc_8236709C;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r11,r11,-6432
	r11.s64 = r11.s64 + -6432;
	// addi r10,r10,-6440
	ctx.r10.s64 = ctx.r10.s64 + -6440;
	// addi r9,r9,-6448
	ctx.r9.s64 = ctx.r9.s64 + -6448;
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// stw r9,144(r30)
	PPC_STORE_U32(r30.u32 + 144, ctx.r9.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,140
	r11.s64 = r30.s64 + 140;
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
loc_8236709C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b2dd0
	sub_821B2DD0(ctx, base);
	// addi r11,r30,36
	r11.s64 = r30.s64 + 36;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,-11084
	ctx.r10.s64 = ctx.r10.s64 + -11084;
	// addi r9,r9,-11148
	ctx.r9.s64 = ctx.r9.s64 + -11148;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r8,r8,-7200
	ctx.r8.s64 = ctx.r8.s64 + -7200;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r7,r7,-7220
	ctx.r7.s64 = ctx.r7.s64 + -7220;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// addi r6,r6,-7284
	ctx.r6.s64 = ctx.r6.s64 + -7284;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r5,r5,-7292
	ctx.r5.s64 = ctx.r5.s64 + -7292;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// addi r4,r4,-7508
	ctx.r4.s64 = ctx.r4.s64 + -7508;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-92
	ctx.r10.s64 = r11.s64 + -92;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-136
	ctx.r10.s64 = r11.s64 + -136;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r4,44(r30)
	PPC_STORE_U32(r30.u32 + 44, ctx.r4.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r29,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r29.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r29.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r28,r30,64
	r28.s64 = r30.s64 + 64;
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,80(r30)
	PPC_STORE_U8(r30.u32 + 80, r29.u8);
	// stb r29,81(r30)
	PPC_STORE_U8(r30.u32 + 81, r29.u8);
	// stw r29,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r29.u32);
	// stw r29,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r29.u32);
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stfs f0,76(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 76, temp.u32);
	// bl 0x82366960
	sub_82366960(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82367018"))) PPC_WEAK_FUNC(sub_82367018);
PPC_FUNC_IMPL(__imp__sub_82367018) {
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
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x8236709c
	if (cr6.eq) goto loc_8236709C;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r11,r11,-6432
	r11.s64 = r11.s64 + -6432;
	// addi r10,r10,-6440
	ctx.r10.s64 = ctx.r10.s64 + -6440;
	// addi r9,r9,-6448
	ctx.r9.s64 = ctx.r9.s64 + -6448;
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// stw r9,144(r30)
	PPC_STORE_U32(r30.u32 + 144, ctx.r9.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,140
	r11.s64 = r30.s64 + 140;
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
loc_8236709C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b2dd0
	sub_821B2DD0(ctx, base);
	// addi r11,r30,36
	r11.s64 = r30.s64 + 36;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,-11084
	ctx.r10.s64 = ctx.r10.s64 + -11084;
	// addi r9,r9,-11148
	ctx.r9.s64 = ctx.r9.s64 + -11148;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r8,r8,-7200
	ctx.r8.s64 = ctx.r8.s64 + -7200;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r7,r7,-7220
	ctx.r7.s64 = ctx.r7.s64 + -7220;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// addi r6,r6,-7284
	ctx.r6.s64 = ctx.r6.s64 + -7284;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r5,r5,-7292
	ctx.r5.s64 = ctx.r5.s64 + -7292;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// addi r4,r4,-7508
	ctx.r4.s64 = ctx.r4.s64 + -7508;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-92
	ctx.r10.s64 = r11.s64 + -92;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-136
	ctx.r10.s64 = r11.s64 + -136;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r4,44(r30)
	PPC_STORE_U32(r30.u32 + 44, ctx.r4.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r29,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r29.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r29.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r28,r30,64
	r28.s64 = r30.s64 + 64;
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,80(r30)
	PPC_STORE_U8(r30.u32 + 80, r29.u8);
	// stb r29,81(r30)
	PPC_STORE_U8(r30.u32 + 81, r29.u8);
	// stw r29,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r29.u32);
	// stw r29,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r29.u32);
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stfs f0,76(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 76, temp.u32);
	// bl 0x82366960
	sub_82366960(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823671C0"))) PPC_WEAK_FUNC(sub_823671C0);
PPC_FUNC_IMPL(__imp__sub_823671C0) {
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
	// beq 0x823671f4
	if (cr0.eq) goto loc_823671F4;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,96
	ctx.r3.s64 = r11.s64 + 96;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_823671F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82367204"))) PPC_WEAK_FUNC(sub_82367204);
PPC_FUNC_IMPL(__imp__sub_82367204) {
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
	// bl 0x82365bc8
	sub_82365BC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82367230"))) PPC_WEAK_FUNC(sub_82367230);
PPC_FUNC_IMPL(__imp__sub_82367230) {
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

__attribute__((alias("__imp__sub_8236725C"))) PPC_WEAK_FUNC(sub_8236725C);
PPC_FUNC_IMPL(__imp__sub_8236725C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367260"))) PPC_WEAK_FUNC(sub_82367260);
PPC_FUNC_IMPL(__imp__sub_82367260) {
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
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bgt cr6,0x82367334
	if (cr6.gt) goto loc_82367334;
	// lwz r11,-92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-92
	ctx.r3.s64 = r11.s64 + -92;
	// bl 0x82315350
	sub_82315350(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x823672c8
	if (!cr6.gt) goto loc_823672C8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-56
	ctx.r3.s64 = r31.s64 + -56;
	// bl 0x821b36c0
	sub_821B36C0(ctx, base);
loc_823672C8:
	// addi r4,r31,-52
	ctx.r4.s64 = r31.s64 + -52;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82365c98
	sub_82365C98(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = r31.s64 + -32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82150fa0
	sub_82150FA0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x823672fc
	if (!cr6.gt) goto loc_823672FC;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-20
	ctx.r4.s64 = r31.s64 + -20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_823672FC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82367314
	if (!cr6.gt) goto loc_82367314;
	// addi r4,r31,-16
	ctx.r4.s64 = r31.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
loc_82367314:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x8236732c
	if (!cr6.gt) goto loc_8236732C;
	// addi r4,r31,-15
	ctx.r4.s64 = r31.s64 + -15;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
loc_8236732C:
	// addi r3,r31,-96
	ctx.r3.s64 = r31.s64 + -96;
	// bl 0x82366960
	sub_82366960(ctx, base);
loc_82367334:
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

__attribute__((alias("__imp__sub_8236734C"))) PPC_WEAK_FUNC(sub_8236734C);
PPC_FUNC_IMPL(__imp__sub_8236734C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367350"))) PPC_WEAK_FUNC(sub_82367350);
PPC_FUNC_IMPL(__imp__sub_82367350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82367260
	sub_82367260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236735C"))) PPC_WEAK_FUNC(sub_8236735C);
PPC_FUNC_IMPL(__imp__sub_8236735C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367360"))) PPC_WEAK_FUNC(sub_82367360);
PPC_FUNC_IMPL(__imp__sub_82367360) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 88);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
	// bne 0x823673c0
	if (!cr0.eq) goto loc_823673C0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	f0.f64 = double(temp.f32);
	// lfs f13,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x823673c4
	if (cr6.lt) goto loc_823673C4;
loc_823673C0:
	// li r11,0
	r11.s64 = 0;
loc_823673C4:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// clrlwi r28,r11,24
	r28.u64 = r11.u32 & 0xFF;
	// bl 0x821f3828
	sub_821F3828(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// beq cr6,0x8236740c
	if (cr6.eq) goto loc_8236740C;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 84);
	// bl 0x823632c8
	sub_823632C8(ctx, base);
	// lfs f0,76(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 76);
	f0.f64 = double(temp.f32);
	// fdivs f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 / f0.f64));
	// stfs f0,28(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 28, temp.u32);
loc_8236740C:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8236742c
	if (cr0.eq) goto loc_8236742C;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82366df8
	sub_82366DF8(ctx, base);
loc_8236742C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82367438"))) PPC_WEAK_FUNC(sub_82367438);
PPC_FUNC_IMPL(__imp__sub_82367438) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82363a88
	sub_82363A88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82367360
	sub_82367360(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_82367488"))) PPC_WEAK_FUNC(sub_82367488);
PPC_FUNC_IMPL(__imp__sub_82367488) {
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
	// lwz r16,-6296(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6296);
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
	// addi r11,r11,-6316
	r11.s64 = r11.s64 + -6316;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823674ec
	if (cr0.eq) goto loc_823674EC;
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
loc_823674EC:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,-7524
	r11.s64 = r11.s64 + -7524;
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

__attribute__((alias("__imp__sub_82367490"))) PPC_WEAK_FUNC(sub_82367490);
PPC_FUNC_IMPL(__imp__sub_82367490) {
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
	// addi r11,r11,-6316
	r11.s64 = r11.s64 + -6316;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823674ec
	if (cr0.eq) goto loc_823674EC;
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
loc_823674EC:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,-7524
	r11.s64 = r11.s64 + -7524;
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

__attribute__((alias("__imp__sub_82367510"))) PPC_WEAK_FUNC(sub_82367510);
PPC_FUNC_IMPL(__imp__sub_82367510) {
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
	// bl 0x823653b8
	sub_823653B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82367538"))) PPC_WEAK_FUNC(sub_82367538);
PPC_FUNC_IMPL(__imp__sub_82367538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82367544"))) PPC_WEAK_FUNC(sub_82367544);
PPC_FUNC_IMPL(__imp__sub_82367544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367548"))) PPC_WEAK_FUNC(sub_82367548);
PPC_FUNC_IMPL(__imp__sub_82367548) {
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
	// lwz r16,-6240(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6240);
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,-6316
	r11.s64 = r11.s64 + -6316;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822444a8
	sub_822444A8(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82367550"))) PPC_WEAK_FUNC(sub_82367550);
PPC_FUNC_IMPL(__imp__sub_82367550) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,-6316
	r11.s64 = r11.s64 + -6316;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822444a8
	sub_822444A8(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_823675A0"))) PPC_WEAK_FUNC(sub_823675A0);
PPC_FUNC_IMPL(__imp__sub_823675A0) {
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
	// bl 0x823653b8
	sub_823653B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823675C8"))) PPC_WEAK_FUNC(sub_823675C8);
PPC_FUNC_IMPL(__imp__sub_823675C8) {
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
	// bl 0x82367490
	sub_82367490(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823675f8
	if (cr0.eq) goto loc_823675F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_823675F8:
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

__attribute__((alias("__imp__sub_82367614"))) PPC_WEAK_FUNC(sub_82367614);
PPC_FUNC_IMPL(__imp__sub_82367614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367618"))) PPC_WEAK_FUNC(sub_82367618);
PPC_FUNC_IMPL(__imp__sub_82367618) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,8(r4)
	r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cntlzw r11,r26
	r11.u64 = r26.u32 == 0 ? 32 : __builtin_clz(r26.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823677ec
	if (cr0.eq) goto loc_823677EC;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r28,r24,4
	r28.s64 = r24.s64 + 4;
	// addi r25,r11,15600
	r25.s64 = r11.s64 + 15600;
loc_8236764C:
	// lbz r11,13(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 13);
	// lwz r30,0(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8236766c
	if (cr0.eq) goto loc_8236766C;
	// addi r4,r30,64
	ctx.r4.s64 = r30.s64 + 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_8236766C:
	// addi r29,r30,36
	r29.s64 = r30.s64 + 36;
	// lwz r11,160(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 160);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bge cr6,0x82367698
	if (!cr6.lt) goto loc_82367698;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x82367690
	if (cr6.lt) goto loc_82367690;
	// lwz r11,176(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 176);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82367698
	if (!cr6.eq) goto loc_82367698;
loc_82367690:
	// li r11,0
	r11.s64 = 0;
	// b 0x8236769c
	goto loc_8236769C;
loc_82367698:
	// li r11,1
	r11.s64 = 1;
loc_8236769C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82367710
	if (cr0.eq) goto loc_82367710;
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
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
	// beq 0x823677b0
	if (cr0.eq) goto loc_823677B0;
	// addi r27,r29,28
	r27.s64 = r29.s64 + 28;
loc_823676C4:
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
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
	// bne 0x823676c4
	if (!cr0.eq) goto loc_823676C4;
	// b 0x823677b0
	goto loc_823677B0;
loc_82367710:
	// lbz r11,12(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8236776c
	if (cr0.eq) goto loc_8236776C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x82367750
	goto loc_82367750;
loc_8236772C:
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821af8f0
	sub_821AF8F0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82367750:
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
	// bne 0x8236772c
	if (!cr0.eq) goto loc_8236772C;
	// b 0x823677b0
	goto loc_823677B0;
loc_8236776C:
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x82367798
	goto loc_82367798;
loc_82367774:
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821af870
	sub_821AF870(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82367798:
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
	// bne 0x82367774
	if (!cr0.eq) goto loc_82367774;
loc_823677B0:
	// lbz r11,13(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 13);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823677d4
	if (cr0.eq) goto loc_823677D4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
loc_823677D4:
	// lwz r26,4(r26)
	r26.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cntlzw r11,r26
	r11.u64 = r26.u32 == 0 ? 32 : __builtin_clz(r26.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8236764c
	if (!cr0.eq) goto loc_8236764C;
loc_823677EC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_823677F4"))) PPC_WEAK_FUNC(sub_823677F4);
PPC_FUNC_IMPL(__imp__sub_823677F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823677F8"))) PPC_WEAK_FUNC(sub_823677F8);
PPC_FUNC_IMPL(__imp__sub_823677F8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x821f3168
	sub_821F3168(ctx, base);
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// b 0x82367848
	goto loc_82367848;
loc_82367824:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x821f3398
	sub_821F3398(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_82367848:
	// cntlzw r11,r31
	r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82367824
	if (!cr0.eq) goto loc_82367824;
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

__attribute__((alias("__imp__sub_82367874"))) PPC_WEAK_FUNC(sub_82367874);
PPC_FUNC_IMPL(__imp__sub_82367874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367878"))) PPC_WEAK_FUNC(sub_82367878);
PPC_FUNC_IMPL(__imp__sub_82367878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r3,0,24,27
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xF0;
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(r11.s32, 128, xer);
	// beq cr6,0x823678ec
	if (cr6.eq) goto loc_823678EC;
	// cmpwi cr6,r11,144
	cr6.compare<int32_t>(r11.s32, 144, xer);
	// beq cr6,0x823678e4
	if (cr6.eq) goto loc_823678E4;
	// cmpwi cr6,r11,160
	cr6.compare<int32_t>(r11.s32, 160, xer);
	// beq cr6,0x823678dc
	if (cr6.eq) goto loc_823678DC;
	// cmpwi cr6,r11,176
	cr6.compare<int32_t>(r11.s32, 176, xer);
	// beq cr6,0x823678d4
	if (cr6.eq) goto loc_823678D4;
	// cmpwi cr6,r11,192
	cr6.compare<int32_t>(r11.s32, 192, xer);
	// beq cr6,0x823678cc
	if (cr6.eq) goto loc_823678CC;
	// cmpwi cr6,r11,208
	cr6.compare<int32_t>(r11.s32, 208, xer);
	// beq cr6,0x823678c4
	if (cr6.eq) goto loc_823678C4;
	// cmpwi cr6,r11,224
	cr6.compare<int32_t>(r11.s32, 224, xer);
	// beq cr6,0x823678bc
	if (cr6.eq) goto loc_823678BC;
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_823678BC:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_823678C4:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_823678CC:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_823678D4:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_823678DC:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_823678E4:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_823678EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823678F4"))) PPC_WEAK_FUNC(sub_823678F4);
PPC_FUNC_IMPL(__imp__sub_823678F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823678F8"))) PPC_WEAK_FUNC(sub_823678F8);
PPC_FUNC_IMPL(__imp__sub_823678F8) {
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
	// lbz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82367878
	sub_82367878(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// bl 0x82367878
	sub_82367878(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82367934
	if (cr6.lt) goto loc_82367934;
	// li r11,0
	r11.s64 = 0;
loc_82367934:
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

__attribute__((alias("__imp__sub_82367950"))) PPC_WEAK_FUNC(sub_82367950);
PPC_FUNC_IMPL(__imp__sub_82367950) {
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
	// lwz r16,-6176(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6176);
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
	// li r11,1
	r11.s64 = 1;
	// li r3,16
	ctx.r3.s64 = 16;
	// stb r11,80(r30)
	PPC_STORE_U8(r30.u32 + 80, r11.u8);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8236799c
	if (cr0.eq) goto loc_8236799C;
	// bl 0x82369ab8
	sub_82369AB8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x823679a0
	goto loc_823679A0;
loc_8236799C:
	// li r11,0
	r11.s64 = 0;
loc_823679A0:
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823679c0
	if (cr0.eq) goto loc_823679C0;
	// bl 0x8235cbe0
	sub_8235CBE0(ctx, base);
	// b 0x823679c4
	goto loc_823679C4;
loc_823679C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823679C4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r3,88(r30)
	PPC_STORE_U32(r30.u32 + 88, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82367958"))) PPC_WEAK_FUNC(sub_82367958);
PPC_FUNC_IMPL(__imp__sub_82367958) {
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
	// li r11,1
	r11.s64 = 1;
	// li r3,16
	ctx.r3.s64 = 16;
	// stb r11,80(r30)
	PPC_STORE_U8(r30.u32 + 80, r11.u8);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8236799c
	if (cr0.eq) goto loc_8236799C;
	// bl 0x82369ab8
	sub_82369AB8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x823679a0
	goto loc_823679A0;
loc_8236799C:
	// li r11,0
	r11.s64 = 0;
loc_823679A0:
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823679c0
	if (cr0.eq) goto loc_823679C0;
	// bl 0x8235cbe0
	sub_8235CBE0(ctx, base);
	// b 0x823679c4
	goto loc_823679C4;
loc_823679C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823679C4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r3,88(r30)
	PPC_STORE_U32(r30.u32 + 88, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_823679FC"))) PPC_WEAK_FUNC(sub_823679FC);
PPC_FUNC_IMPL(__imp__sub_823679FC) {
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

__attribute__((alias("__imp__sub_82367A24"))) PPC_WEAK_FUNC(sub_82367A24);
PPC_FUNC_IMPL(__imp__sub_82367A24) {
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

__attribute__((alias("__imp__sub_82367A4C"))) PPC_WEAK_FUNC(sub_82367A4C);
PPC_FUNC_IMPL(__imp__sub_82367A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367A50"))) PPC_WEAK_FUNC(sub_82367A50);
PPC_FUNC_IMPL(__imp__sub_82367A50) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82367ad8
	if (!cr6.eq) goto loc_82367AD8;
	// lha r11,16(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 16));
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82367aac
	if (!cr6.eq) goto loc_82367AAC;
	// li r11,3
	r11.s64 = 3;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// b 0x82367ad0
	goto loc_82367AD0;
loc_82367AAC:
	// li r11,1
	r11.s64 = 1;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x823591a0
	sub_823591A0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82367AD0:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82367AD8:
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

__attribute__((alias("__imp__sub_82367AEC"))) PPC_WEAK_FUNC(sub_82367AEC);
PPC_FUNC_IMPL(__imp__sub_82367AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367AF0"))) PPC_WEAK_FUNC(sub_82367AF0);
PPC_FUNC_IMPL(__imp__sub_82367AF0) {
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
	// beq 0x82367b30
	if (cr0.eq) goto loc_82367B30;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r3,r11,-27932
	ctx.r3.s64 = r11.s64 + -27932;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82367b38
	goto loc_82367B38;
loc_82367B30:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82367B38:
	// mulli r3,r31,3
	ctx.r3.s64 = r31.s64 * 3;
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

__attribute__((alias("__imp__sub_82367B54"))) PPC_WEAK_FUNC(sub_82367B54);
PPC_FUNC_IMPL(__imp__sub_82367B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367B58"))) PPC_WEAK_FUNC(sub_82367B58);
PPC_FUNC_IMPL(__imp__sub_82367B58) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82367bc4
	if (cr0.eq) goto loc_82367BC4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82367bf4
	if (!cr0.eq) goto loc_82367BF4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82367bbc
	if (cr0.eq) goto loc_82367BBC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82367bf8
	goto loc_82367BF8;
loc_82367BBC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82367bf8
	goto loc_82367BF8;
loc_82367BC4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82367bbc
	if (!cr0.eq) goto loc_82367BBC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne 0x82367bf8
	if (!cr0.eq) goto loc_82367BF8;
loc_82367BF4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82367BF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82367C00"))) PPC_WEAK_FUNC(sub_82367C00);
PPC_FUNC_IMPL(__imp__sub_82367C00) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r31,r30,-3
	r31.s64 = r30.s64 + -3;
	// b 0x82367c48
	goto loc_82367C48;
loc_82367C20:
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
	// addi r31,r31,-3
	r31.s64 = r31.s64 + -3;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbz r11,2(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, r11.u8);
loc_82367C48:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82367c20
	if (!cr0.eq) goto loc_82367C20;
	// addi r11,r1,136
	r11.s64 = ctx.r1.s64 + 136;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r11,2(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r10,0(r30)
	PPC_STORE_U8(r30.u32 + 0, ctx.r10.u8);
	// stb r9,1(r30)
	PPC_STORE_U8(r30.u32 + 1, ctx.r9.u8);
	// stb r11,2(r30)
	PPC_STORE_U8(r30.u32 + 2, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82367C84"))) PPC_WEAK_FUNC(sub_82367C84);
PPC_FUNC_IMPL(__imp__sub_82367C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367C88"))) PPC_WEAK_FUNC(sub_82367C88);
PPC_FUNC_IMPL(__imp__sub_82367C88) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(r31.s32, r27.s32, xer);
	// addze r30,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r30.s64 = temp.s64;
	// ble cr6,0x82367d14
	if (!cr6.gt) goto loc_82367D14;
loc_82367CBC:
	// mulli r11,r30,3
	r11.s64 = r30.s64 * 3;
	// add r29,r11,r28
	r29.u64 = r11.u64 + r28.u64;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82367d14
	if (cr0.eq) goto loc_82367D14;
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
	// mulli r11,r31,3
	r11.s64 = r31.s64 * 3;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// mr r31,r30
	r31.u64 = r30.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addze r30,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r30.s64 = temp.s64;
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(r31.s32, r27.s32, xer);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r10,1(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 1);
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
	// lbz r10,2(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 2);
	// stb r10,2(r11)
	PPC_STORE_U8(r11.u32 + 2, ctx.r10.u8);
	// bgt cr6,0x82367cbc
	if (cr6.gt) goto loc_82367CBC;
loc_82367D14:
	// addi r11,r1,184
	r11.s64 = ctx.r1.s64 + 184;
	// mulli r10,r31,3
	ctx.r10.s64 = r31.s64 * 3;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r11,2(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82367D40"))) PPC_WEAK_FUNC(sub_82367D40);
PPC_FUNC_IMPL(__imp__sub_82367D40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// bge cr6,0x82367d54
	if (!cr6.lt) goto loc_82367D54;
	// neg r11,r4
	r11.s64 = -ctx.r4.s64;
loc_82367D54:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	ctx.f12.f64 = double(temp.f32);
	// fmr f0,f12
	f0.f64 = ctx.f12.f64;
loc_82367D60:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82367d6c
	if (cr0.eq) goto loc_82367D6C;
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
loc_82367D6C:
	// rlwinm. r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82367d7c
	if (cr0.eq) goto loc_82367D7C;
	// fmuls f13,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// b 0x82367d60
	goto loc_82367D60;
loc_82367D7C:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x82367d88
	if (!cr6.lt) goto loc_82367D88;
	// fdivs f0,f12,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f12.f64 / f0.f64));
loc_82367D88:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82367D90"))) PPC_WEAK_FUNC(sub_82367D90);
PPC_FUNC_IMPL(__imp__sub_82367D90) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359250
	sub_82359250(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// li r11,0
	r11.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// bl 0x82359400
	sub_82359400(ctx, base);
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

__attribute__((alias("__imp__sub_82367DF0"))) PPC_WEAK_FUNC(sub_82367DF0);
PPC_FUNC_IMPL(__imp__sub_82367DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82367d90
	sub_82367D90(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,15904
	ctx.r4.s64 = r11.s64 + 15904;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8239d9a0
	sub_8239D9A0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r30,18
	ctx.r4.s64 = r30.s64 + 18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82367e7c
	if (!cr6.eq) goto loc_82367E7C;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,3
	r11.s64 = 3;
	// b 0x82367e80
	goto loc_82367E80;
loc_82367E7C:
	// li r11,1
	r11.s64 = 1;
loc_82367E80:
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82367E8C"))) PPC_WEAK_FUNC(sub_82367E8C);
PPC_FUNC_IMPL(__imp__sub_82367E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367E90"))) PPC_WEAK_FUNC(sub_82367E90);
PPC_FUNC_IMPL(__imp__sub_82367E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82367d90
	sub_82367D90(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,15900
	ctx.r4.s64 = r11.s64 + 15900;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d9a0
	sub_8239D9A0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r9,r3,r29
	ctx.r9.u64 = ctx.r3.u64 + r29.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stb r10,36(r31)
	PPC_STORE_U8(r31.u32 + 36, ctx.r10.u8);
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r9,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r8.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// addi r9,r10,255
	ctx.r9.s64 = ctx.r10.s64 + 255;
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82367F30"))) PPC_WEAK_FUNC(sub_82367F30);
PPC_FUNC_IMPL(__imp__sub_82367F30) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// beq cr6,0x82367f7c
	if (cr6.eq) goto loc_82367F7C;
loc_82367F50:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rldicr r11,r11,8,63
	r11.u64 = __builtin_rotateleft64(r11.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// rldicr r4,r11,40,23
	ctx.r4.u64 = __builtin_rotateleft64(r11.u64, 40) & 0xFFFFFF0000000000;
	// bl 0x82367c00
	sub_82367C00(ctx, base);
	// addi r31,r31,3
	r31.s64 = r31.s64 + 3;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82367f50
	if (!cr6.eq) goto loc_82367F50;
loc_82367F7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82367F84"))) PPC_WEAK_FUNC(sub_82367F84);
PPC_FUNC_IMPL(__imp__sub_82367F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367F88"))) PPC_WEAK_FUNC(sub_82367F88);
PPC_FUNC_IMPL(__imp__sub_82367F88) {
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
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r30
	r26.u64 = r30.u64;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// bge cr6,0x8236801c
	if (!cr6.lt) goto loc_8236801C;
loc_82367FBC:
	// mulli r11,r31,3
	r11.s64 = r31.s64 * 3;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// addi r4,r3,-3
	ctx.r4.s64 = ctx.r3.s64 + -3;
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82367fdc
	if (cr0.eq) goto loc_82367FDC;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_82367FDC:
	// mulli r11,r31,3
	r11.s64 = r31.s64 * 3;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r9,r31,1
	ctx.r9.s64 = r31.s64 + 1;
	// mulli r10,r30,3
	ctx.r10.s64 = r30.s64 * 3;
	// mr r30,r31
	r30.u64 = r31.u64;
	// rlwinm r31,r9,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbz r11,2(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, r11.u8);
	// blt cr6,0x82367fbc
	if (cr6.lt) goto loc_82367FBC;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
loc_8236801C:
	// bne cr6,0x82368058
	if (!cr6.eq) goto loc_82368058;
	// mulli r11,r31,3
	r11.s64 = r31.s64 * 3;
	// add r10,r11,r29
	ctx.r10.u64 = r11.u64 + r29.u64;
	// mulli r11,r30,3
	r11.s64 = r30.s64 * 3;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// add r9,r11,r29
	ctx.r9.u64 = r11.u64 + r29.u64;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addi r30,r31,-1
	r30.s64 = r31.s64 + -1;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbz r11,2(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, r11.u8);
loc_82368058:
	// lhz r11,184(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 184);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lbz r10,186(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 186);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rldicr r11,r11,8,63
	r11.u64 = __builtin_rotateleft64(r11.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rldicr r6,r11,40,23
	ctx.r6.u64 = __builtin_rotateleft64(r11.u64, 40) & 0xFFFFFF0000000000;
	// bl 0x82367c88
	sub_82367C88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82368088"))) PPC_WEAK_FUNC(sub_82368088);
PPC_FUNC_IMPL(__imp__sub_82368088) {
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
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// lhz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 136);
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// lbz r8,138(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 138);
	// li r4,0
	ctx.r4.s64 = 0;
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// rldicr r6,r10,40,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 40) & 0xFFFFFF0000000000;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// divw r5,r9,r8
	ctx.r5.s32 = ctx.r9.s32 / ctx.r8.s32;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// stb r10,2(r11)
	PPC_STORE_U8(r11.u32 + 2, ctx.r10.u8);
	// bl 0x82367f88
	sub_82367F88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823680EC"))) PPC_WEAK_FUNC(sub_823680EC);
PPC_FUNC_IMPL(__imp__sub_823680EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823680F0"))) PPC_WEAK_FUNC(sub_823680F0);
PPC_FUNC_IMPL(__imp__sub_823680F0) {
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
	// li r10,3
	ctx.r10.s64 = 3;
	// subf r11,r30,r4
	r11.s64 = ctx.r4.s64 - r30.s64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// divw r29,r11,r10
	r29.s32 = r11.s32 / ctx.r10.s32;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// blt cr6,0x8236817c
	if (cr6.lt) goto loc_8236817C;
	// addi r11,r29,-2
	r11.s64 = r29.s64 + -2;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r31,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r31.s64 = temp.s64;
	// mulli r11,r31,3
	r11.s64 = r31.s64 * 3;
	// add r28,r11,r30
	r28.u64 = r11.u64 + r30.u64;
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// lbz r10,2(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 2);
	// rldicr r11,r11,8,63
	r11.u64 = __builtin_rotateleft64(r11.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// b 0x8236815c
	goto loc_8236815C;
loc_82368140:
	// addi r28,r28,-3
	r28.s64 = r28.s64 + -3;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// mr r11,r28
	r11.u64 = r28.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lbz r11,2(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_8236815C:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// rldicr r6,r11,40,23
	ctx.r6.u64 = __builtin_rotateleft64(r11.u64, 40) & 0xFFFFFF0000000000;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82367f88
	sub_82367F88(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x82368140
	if (!cr6.eq) goto loc_82368140;
loc_8236817C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82368184"))) PPC_WEAK_FUNC(sub_82368184);
PPC_FUNC_IMPL(__imp__sub_82368184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82368188"))) PPC_WEAK_FUNC(sub_82368188);
PPC_FUNC_IMPL(__imp__sub_82368188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82368190:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823681b0
	if (cr6.eq) goto loc_823681B0;
	// lbz r11,0(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lbz r11,1(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, r11.u8);
	// lbz r11,2(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, r11.u8);
loc_823681B0:
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// bne 0x82368190
	if (!cr0.eq) goto loc_82368190;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823681C0"))) PPC_WEAK_FUNC(sub_823681C0);
PPC_FUNC_IMPL(__imp__sub_823681C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x823681f0
	goto loc_823681F0;
loc_823681C8:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823681e8
	if (cr6.eq) goto loc_823681E8;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r10,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r10.u8);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r10,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r10.u8);
loc_823681E8:
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// addi r5,r5,3
	ctx.r5.s64 = ctx.r5.s64 + 3;
loc_823681F0:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x823681c8
	if (!cr6.eq) goto loc_823681C8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82368200"))) PPC_WEAK_FUNC(sub_82368200);
PPC_FUNC_IMPL(__imp__sub_82368200) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// b 0x82368224
	goto loc_82368224;
loc_82368220:
	// addi r30,r30,3
	r30.s64 = r30.s64 + 3;
loc_82368224:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82368220
	if (!cr0.eq) goto loc_82368220;
loc_8236823C:
	// addi r31,r31,-3
	r31.s64 = r31.s64 + -3;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8236823c
	if (!cr0.eq) goto loc_8236823C;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// bge cr6,0x823682c0
	if (!cr6.lt) goto loc_823682C0;
	// mr r11,r30
	r11.u64 = r30.u64;
	// lbz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r30,r30,3
	r30.s64 = r30.s64 + 3;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r11,2(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// stb r6,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r6.u8);
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, r11.u8);
	// stb r5,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r5.u8);
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r7,1(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// lbz r8,2(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// stb r11,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, r11.u8);
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// stb r11,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// stb r7,1(r31)
	PPC_STORE_U8(r31.u32 + 1, ctx.r7.u8);
	// stb r8,2(r31)
	PPC_STORE_U8(r31.u32 + 2, ctx.r8.u8);
	// b 0x82368224
	goto loc_82368224;
loc_823682C0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823682CC"))) PPC_WEAK_FUNC(sub_823682CC);
PPC_FUNC_IMPL(__imp__sub_823682CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823682D0"))) PPC_WEAK_FUNC(sub_823682D0);
PPC_FUNC_IMPL(__imp__sub_823682D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// divw. r10,r9,r10
	ctx.r10.s32 = ctx.r9.s32 / ctx.r10.s32;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x8236831c
	if (!cr0.gt) goto loc_8236831C;
	// subf r7,r4,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r4.s64;
loc_823682F0:
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + r11.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// lbz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// stb r5,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r5.u8);
	// lbz r5,1(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// stb r5,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r5.u8);
	// lbz r8,2(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// stb r8,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r8.u8);
	// bgt 0x823682f0
	if (cr0.gt) goto loc_823682F0;
loc_8236831C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82368328"))) PPC_WEAK_FUNC(sub_82368328);
PPC_FUNC_IMPL(__imp__sub_82368328) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823683bc
	if (cr0.eq) goto loc_823683BC;
	// subf r10,r30,r31
	ctx.r10.s64 = r31.s64 - r30.s64;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r11,r31,3
	r11.s64 = r31.s64 + 3;
	// divw. r9,r10,r9
	ctx.r9.s32 = ctx.r10.s32 / ctx.r9.s32;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x8236839c
	if (!cr0.gt) goto loc_8236839C;
	// addi r10,r11,-3
	ctx.r10.s64 = r11.s64 + -3;
loc_82368374:
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// addi r11,r11,-3
	r11.s64 = r11.s64 + -3;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r8,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r8.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r8,2(r11)
	PPC_STORE_U8(r11.u32 + 2, ctx.r8.u8);
	// bgt 0x82368374
	if (cr0.gt) goto loc_82368374;
loc_8236839C:
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r11,2(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r10,0(r30)
	PPC_STORE_U8(r30.u32 + 0, ctx.r10.u8);
	// stb r9,1(r30)
	PPC_STORE_U8(r30.u32 + 1, ctx.r9.u8);
	// stb r11,2(r30)
	PPC_STORE_U8(r30.u32 + 2, r11.u8);
	// b 0x823683dc
	goto loc_823683DC;
loc_823683BC:
	// lhz r11,144(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lbz r10,146(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 146);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rldicr r11,r11,8,63
	r11.u64 = __builtin_rotateleft64(r11.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// rldicr r4,r11,40,23
	ctx.r4.u64 = __builtin_rotateleft64(r11.u64, 40) & 0xFFFFFF0000000000;
	// bl 0x82367c00
	sub_82367C00(ctx, base);
loc_823683DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823683E4"))) PPC_WEAK_FUNC(sub_823683E4);
PPC_FUNC_IMPL(__imp__sub_823683E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823683E8"))) PPC_WEAK_FUNC(sub_823683E8);
PPC_FUNC_IMPL(__imp__sub_823683E8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r27,3
	r27.s64 = 3;
	// subf r11,r30,r4
	r11.s64 = ctx.r4.s64 - r30.s64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// divw r11,r11,r27
	r11.s32 = r11.s32 / r27.s32;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8236845c
	if (!cr6.gt) goto loc_8236845C;
	// addi r31,r4,-3
	r31.s64 = ctx.r4.s64 + -3;
	// subfic r29,r30,3
	xer.ca = r30.u32 <= 3;
	r29.s64 = 3 - r30.s64;
loc_82368418:
	// mr r11,r31
	r11.u64 = r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r11,2(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rldicr r6,r11,40,23
	ctx.r6.u64 = __builtin_rotateleft64(r11.u64, 40) & 0xFFFFFF0000000000;
	// bl 0x82368088
	sub_82368088(ctx, base);
	// addi r31,r31,-3
	r31.s64 = r31.s64 + -3;
	// add r11,r29,r31
	r11.u64 = r29.u64 + r31.u64;
	// divw r11,r11,r27
	r11.s32 = r11.s32 / r27.s32;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bgt cr6,0x82368418
	if (cr6.gt) goto loc_82368418;
loc_8236845C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82368464"))) PPC_WEAK_FUNC(sub_82368464);
PPC_FUNC_IMPL(__imp__sub_82368464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82368468"))) PPC_WEAK_FUNC(sub_82368468);
PPC_FUNC_IMPL(__imp__sub_82368468) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x823684c0
	if (cr6.eq) goto loc_823684C0;
	// addi r31,r30,3
	r31.s64 = r30.s64 + 3;
	// b 0x823684b8
	goto loc_823684B8;
loc_82368490:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rldicr r11,r11,8,63
	r11.u64 = __builtin_rotateleft64(r11.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// rldicr r5,r11,40,23
	ctx.r5.u64 = __builtin_rotateleft64(r11.u64, 40) & 0xFFFFFF0000000000;
	// bl 0x82368328
	sub_82368328(ctx, base);
	// addi r31,r31,3
	r31.s64 = r31.s64 + 3;
loc_823684B8:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x82368490
	if (!cr6.eq) goto loc_82368490;
loc_823684C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823684C8"))) PPC_WEAK_FUNC(sub_823684C8);
PPC_FUNC_IMPL(__imp__sub_823684C8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x823680f0
	sub_823680F0(ctx, base);
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// bge cr6,0x82368550
	if (!cr6.lt) goto loc_82368550;
loc_82368500:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82368544
	if (cr0.eq) goto loc_82368544;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// rldicr r11,r11,8,63
	r11.u64 = __builtin_rotateleft64(r11.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rldicr r6,r11,40,23
	ctx.r6.u64 = __builtin_rotateleft64(r11.u64, 40) & 0xFFFFFF0000000000;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82368088
	sub_82368088(ctx, base);
loc_82368544:
	// addi r31,r31,3
	r31.s64 = r31.s64 + 3;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// blt cr6,0x82368500
	if (cr6.lt) goto loc_82368500;
loc_82368550:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823683e8
	sub_823683E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82368568"))) PPC_WEAK_FUNC(sub_82368568);
PPC_FUNC_IMPL(__imp__sub_82368568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82368578
	goto loc_82368578;
loc_82368574:
	// addi r11,r11,-3
	r11.s64 = r11.s64 + -3;
loc_82368578:
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82368574
	if (!cr0.eq) goto loc_82368574;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,3
	ctx.r3.s64 = r11.s64 * 3;
	// b 0x82355020
	sub_82355020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823685B0"))) PPC_WEAK_FUNC(sub_823685B0);
PPC_FUNC_IMPL(__imp__sub_823685B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823685B4"))) PPC_WEAK_FUNC(sub_823685B4);
PPC_FUNC_IMPL(__imp__sub_823685B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823685B8"))) PPC_WEAK_FUNC(sub_823685B8);
PPC_FUNC_IMPL(__imp__sub_823685B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// lwz r16,-6052(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6052);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bce4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r23,3
	r23.s64 = 3;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r29,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r29.u32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r31,228
	ctx.r10.s64 = r31.s64 + 228;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x82368618
	if (cr6.lt) goto loc_82368618;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_82368618:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// add r25,r10,r11
	r25.u64 = ctx.r10.u64 + r11.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// bl 0x82367af0
	sub_82367AF0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x823681c0
	sub_823681C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// bne cr6,0x82368684
	if (!cr6.eq) goto loc_82368684;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8236867c
	if (cr6.eq) goto loc_8236867C;
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lbz r11,1(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 1);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, r11.u8);
	// lbz r11,2(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 2);
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, r11.u8);
loc_8236867C:
	// addi r29,r3,3
	r29.s64 = ctx.r3.s64 + 3;
	// b 0x8236869c
	goto loc_8236869C;
loc_82368684:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82368188
	sub_82368188(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8236869C:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823686c0
	if (!cr0.eq) goto loc_823686C0;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823681c0
	sub_823681C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_823686C0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r31,84
	ctx.r8.s64 = r31.s64 + 84;
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r9,r31,88
	ctx.r9.s64 = r31.s64 + 88;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// rlwinm r11,r7,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x82368708
	goto loc_82368708;
loc_823686E8:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-3
	r11.s64 = r11.s64 + -3;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_82368708:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823686e8
	if (!cr0.eq) goto loc_823686E8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// mulli r3,r11,3
	ctx.r3.s64 = r11.s64 * 3;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// mulli r11,r25,3
	r11.s64 = r25.s64 * 3;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_823685C0"))) PPC_WEAK_FUNC(sub_823685C0);
PPC_FUNC_IMPL(__imp__sub_823685C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bce4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r23,3
	r23.s64 = 3;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r29,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r29.u32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r31,228
	ctx.r10.s64 = r31.s64 + 228;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x82368618
	if (cr6.lt) goto loc_82368618;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_82368618:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// add r25,r10,r11
	r25.u64 = ctx.r10.u64 + r11.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// bl 0x82367af0
	sub_82367AF0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x823681c0
	sub_823681C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// bne cr6,0x82368684
	if (!cr6.eq) goto loc_82368684;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8236867c
	if (cr6.eq) goto loc_8236867C;
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lbz r11,1(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 1);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, r11.u8);
	// lbz r11,2(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 2);
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, r11.u8);
loc_8236867C:
	// addi r29,r3,3
	r29.s64 = ctx.r3.s64 + 3;
	// b 0x8236869c
	goto loc_8236869C;
loc_82368684:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82368188
	sub_82368188(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8236869C:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823686c0
	if (!cr0.eq) goto loc_823686C0;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823681c0
	sub_823681C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_823686C0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r31,84
	ctx.r8.s64 = r31.s64 + 84;
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r9,r31,88
	ctx.r9.s64 = r31.s64 + 88;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// rlwinm r11,r7,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x82368708
	goto loc_82368708;
loc_823686E8:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-3
	r11.s64 = r11.s64 + -3;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_82368708:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823686e8
	if (!cr0.eq) goto loc_823686E8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// mulli r3,r11,3
	ctx.r3.s64 = r11.s64 * 3;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// mulli r11,r25,3
	r11.s64 = r25.s64 * 3;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82368748"))) PPC_WEAK_FUNC(sub_82368748);
PPC_FUNC_IMPL(__imp__sub_82368748) {
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
	// lwz r16,-6052(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6052);
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mulli r3,r11,3
	ctx.r3.s64 = r11.s64 * 3;
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

__attribute__((alias("__imp__sub_82368750"))) PPC_WEAK_FUNC(sub_82368750);
PPC_FUNC_IMPL(__imp__sub_82368750) {
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
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mulli r3,r11,3
	ctx.r3.s64 = r11.s64 * 3;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_82368780"))) PPC_WEAK_FUNC(sub_82368780);
PPC_FUNC_IMPL(__imp__sub_82368780) {
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
	// li r10,3
	ctx.r10.s64 = 3;
	// subf r11,r3,r30
	r11.s64 = r30.s64 - ctx.r3.s64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// ble cr6,0x823687d4
	if (!cr6.gt) goto loc_823687D4;
	// addi r29,r3,48
	r29.s64 = ctx.r3.s64 + 48;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82368468
	sub_82368468(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82367f30
	sub_82367F30(ctx, base);
	// b 0x823687dc
	goto loc_823687DC;
loc_823687D4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82368468
	sub_82368468(ctx, base);
loc_823687DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823687E4"))) PPC_WEAK_FUNC(sub_823687E4);
PPC_FUNC_IMPL(__imp__sub_823687E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823687E8"))) PPC_WEAK_FUNC(sub_823687E8);
PPC_FUNC_IMPL(__imp__sub_823687E8) {
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
	// lwz r16,-5960(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -5960);
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
	// li r29,0
	r29.s64 = 0;
	// li r11,480
	r11.s64 = 480;
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r4,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r4.u32);
	// stb r29,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r29.u8);
	// stw r5,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r5.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// sth r29,16(r30)
	PPC_STORE_U16(r30.u32 + 16, r29.u16);
	// sth r29,18(r30)
	PPC_STORE_U16(r30.u32 + 18, r29.u16);
	// sth r11,20(r30)
	PPC_STORE_U16(r30.u32 + 20, r11.u16);
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
	// stb r29,36(r30)
	PPC_STORE_U8(r30.u32 + 36, r29.u8);
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// addi r11,r30,60
	r11.s64 = r30.s64 + 60;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// lis r11,-32202
	r11.s64 = -2110390272;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r29.u32);
	// addi r11,r11,30968
	r11.s64 = r11.s64 + 30968;
	// stw r11,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r11.u32);
	// bl 0x82367958
	sub_82367958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823687F0"))) PPC_WEAK_FUNC(sub_823687F0);
PPC_FUNC_IMPL(__imp__sub_823687F0) {
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
	// li r29,0
	r29.s64 = 0;
	// li r11,480
	r11.s64 = 480;
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r4,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r4.u32);
	// stb r29,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r29.u8);
	// stw r5,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r5.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// sth r29,16(r30)
	PPC_STORE_U16(r30.u32 + 16, r29.u16);
	// sth r29,18(r30)
	PPC_STORE_U16(r30.u32 + 18, r29.u16);
	// sth r11,20(r30)
	PPC_STORE_U16(r30.u32 + 20, r11.u16);
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
	// stb r29,36(r30)
	PPC_STORE_U8(r30.u32 + 36, r29.u8);
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// addi r11,r30,60
	r11.s64 = r30.s64 + 60;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// lis r11,-32202
	r11.s64 = -2110390272;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r29.u32);
	// addi r11,r11,30968
	r11.s64 = r11.s64 + 30968;
	// stw r11,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r11.u32);
	// bl 0x82367958
	sub_82367958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82368874"))) PPC_WEAK_FUNC(sub_82368874);
PPC_FUNC_IMPL(__imp__sub_82368874) {
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
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
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

__attribute__((alias("__imp__sub_823688A0"))) PPC_WEAK_FUNC(sub_823688A0);
PPC_FUNC_IMPL(__imp__sub_823688A0) {
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
	// addi r3,r11,60
	ctx.r3.s64 = r11.s64 + 60;
	// bl 0x82368568
	sub_82368568(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823688CC"))) PPC_WEAK_FUNC(sub_823688CC);
PPC_FUNC_IMPL(__imp__sub_823688CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823688D0"))) PPC_WEAK_FUNC(sub_823688D0);
PPC_FUNC_IMPL(__imp__sub_823688D0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// li r26,3
	r26.s64 = 3;
	// b 0x82368974
	goto loc_82368974;
loc_823688F8:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x82368984
	if (cr6.eq) goto loc_82368984;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// divw r11,r11,r26
	r11.s32 = r11.s32 / r26.s32;
	// addi r5,r31,-3
	ctx.r5.s64 = r31.s64 + -3;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// bl 0x82367b58
	sub_82367B58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lbz r11,2(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rldicr r5,r11,40,23
	ctx.r5.u64 = __builtin_rotateleft64(r11.u64, 40) & 0xFFFFFF0000000000;
	// bl 0x82368200
	sub_82368200(ctx, base);
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
	// bl 0x823688d0
	sub_823688D0(ctx, base);
	// subf r11,r30,r29
	r11.s64 = r29.s64 - r30.s64;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_82368974:
	// divw r11,r11,r26
	r11.s32 = r11.s32 / r26.s32;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bgt cr6,0x823688f8
	if (cr6.gt) goto loc_823688F8;
	// b 0x82368998
	goto loc_82368998;
loc_82368984:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823684c8
	sub_823684C8(ctx, base);
loc_82368998:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823689A0"))) PPC_WEAK_FUNC(sub_823689A0);
PPC_FUNC_IMPL(__imp__sub_823689A0) {
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
	// beq cr6,0x823689f0
	if (cr6.eq) goto loc_823689F0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823689e0
	if (cr0.eq) goto loc_823689E0;
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r10,1(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
	// lbz r10,2(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// stb r10,2(r11)
	PPC_STORE_U8(r11.u32 + 2, ctx.r10.u8);
loc_823689E0:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x82368a04
	goto loc_82368A04;
loc_823689F0:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x823685c0
	sub_823685C0(ctx, base);
loc_82368A04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82368A14"))) PPC_WEAK_FUNC(sub_82368A14);
PPC_FUNC_IMPL(__imp__sub_82368A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82368A18"))) PPC_WEAK_FUNC(sub_82368A18);
PPC_FUNC_IMPL(__imp__sub_82368A18) {
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
	// beq cr6,0x82368a84
	if (cr6.eq) goto loc_82368A84;
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// b 0x82368a54
	goto loc_82368A54;
loc_82368A4C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
loc_82368A54:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82368a4c
	if (!cr6.eq) goto loc_82368A4C;
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
	// bl 0x823688d0
	sub_823688D0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82368780
	sub_82368780(ctx, base);
loc_82368A84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82368A8C"))) PPC_WEAK_FUNC(sub_82368A8C);
PPC_FUNC_IMPL(__imp__sub_82368A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82368A90"))) PPC_WEAK_FUNC(sub_82368A90);
PPC_FUNC_IMPL(__imp__sub_82368A90) {
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
	// lwz r16,-5888(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -5888);
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
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82368ae4
	if (cr0.eq) goto loc_82368AE4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82368ae4
	if (cr0.eq) goto loc_82368AE4;
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
loc_82368AE4:
	// lbz r11,80(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82368b24
	if (cr0.eq) goto loc_82368B24;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82368b10
	if (cr0.eq) goto loc_82368B10;
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
loc_82368B10:
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82368b24
	if (cr0.eq) goto loc_82368B24;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332c00
	sub_82332C00(ctx, base);
loc_82368B24:
	// addi r3,r30,60
	ctx.r3.s64 = r30.s64 + 60;
	// bl 0x82368568
	sub_82368568(ctx, base);
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
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

__attribute__((alias("__imp__sub_82368A98"))) PPC_WEAK_FUNC(sub_82368A98);
PPC_FUNC_IMPL(__imp__sub_82368A98) {
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
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82368ae4
	if (cr0.eq) goto loc_82368AE4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82368ae4
	if (cr0.eq) goto loc_82368AE4;
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
loc_82368AE4:
	// lbz r11,80(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82368b24
	if (cr0.eq) goto loc_82368B24;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82368b10
	if (cr0.eq) goto loc_82368B10;
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
loc_82368B10:
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82368b24
	if (cr0.eq) goto loc_82368B24;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332c00
	sub_82332C00(ctx, base);
loc_82368B24:
	// addi r3,r30,60
	ctx.r3.s64 = r30.s64 + 60;
	// bl 0x82368568
	sub_82368568(ctx, base);
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
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

__attribute__((alias("__imp__sub_82368B4C"))) PPC_WEAK_FUNC(sub_82368B4C);
PPC_FUNC_IMPL(__imp__sub_82368B4C) {
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
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
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

__attribute__((alias("__imp__sub_82368B78"))) PPC_WEAK_FUNC(sub_82368B78);
PPC_FUNC_IMPL(__imp__sub_82368B78) {
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
	// addi r3,r11,60
	ctx.r3.s64 = r11.s64 + 60;
	// bl 0x82368568
	sub_82368568(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82368BA4"))) PPC_WEAK_FUNC(sub_82368BA4);
PPC_FUNC_IMPL(__imp__sub_82368BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82368BA8"))) PPC_WEAK_FUNC(sub_82368BA8);
PPC_FUNC_IMPL(__imp__sub_82368BA8) {
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
	// lwz r11,76(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82368bd8
	if (!cr6.eq) goto loc_82368BD8;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82368bf0
	goto loc_82368BF0;
loc_82368BD8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r5,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// bl 0x823689a0
	sub_823689A0(ctx, base);
loc_82368BF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82368C00"))) PPC_WEAK_FUNC(sub_82368C00);
PPC_FUNC_IMPL(__imp__sub_82368C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r31,60
	r29.s64 = r31.s64 + 60;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82368a18
	sub_82368A18(ctx, base);
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x82368c60
	goto loc_82368C60;
loc_82368C2C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lbz r7,2(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// lbz r6,1(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82368c6c
	if (!cr6.eq) goto loc_82368C6C;
	// addi r30,r30,3
	r30.s64 = r30.s64 + 3;
loc_82368C60:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82368c2c
	if (!cr6.eq) goto loc_82368C2C;
loc_82368C6C:
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82368c88
	if (cr6.eq) goto loc_82368C88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823682d0
	sub_823682D0(ctx, base);
loc_82368C88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82368C90"))) PPC_WEAK_FUNC(sub_82368C90);
PPC_FUNC_IMPL(__imp__sub_82368C90) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// clrlwi r31,r30,24
	r31.u64 = r30.u32 & 0xFF;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm r11,r31,0,24,27
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xF0;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(r11.s32, 128, xer);
	// beq cr6,0x82368cf0
	if (cr6.eq) goto loc_82368CF0;
	// cmpwi cr6,r11,144
	cr6.compare<int32_t>(r11.s32, 144, xer);
	// beq cr6,0x82368d28
	if (cr6.eq) goto loc_82368D28;
	// cmpwi cr6,r11,160
	cr6.compare<int32_t>(r11.s32, 160, xer);
	// beq cr6,0x82368cf0
	if (cr6.eq) goto loc_82368CF0;
	// cmpwi cr6,r11,176
	cr6.compare<int32_t>(r11.s32, 176, xer);
	// beq cr6,0x82368cf0
	if (cr6.eq) goto loc_82368CF0;
	// cmpwi cr6,r11,192
	cr6.compare<int32_t>(r11.s32, 192, xer);
	// beq cr6,0x82368d1c
	if (cr6.eq) goto loc_82368D1C;
	// cmpwi cr6,r11,208
	cr6.compare<int32_t>(r11.s32, 208, xer);
	// beq cr6,0x82368d1c
	if (cr6.eq) goto loc_82368D1C;
	// cmpwi cr6,r11,224
	cr6.compare<int32_t>(r11.s32, 224, xer);
	// bne cr6,0x82368cfc
	if (!cr6.eq) goto loc_82368CFC;
loc_82368CF0:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82359250
	sub_82359250(ctx, base);
loc_82368CFC:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82368ba8
	sub_82368BA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
loc_82368D1C:
	// li r11,0
	r11.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// b 0x82368cfc
	goto loc_82368CFC;
loc_82368D28:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82359250
	sub_82359250(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82368cfc
	if (!cr0.eq) goto loc_82368CFC;
	// clrlwi r11,r31,28
	r11.u64 = r31.u32 & 0xF;
	// ori r30,r11,128
	r30.u64 = r11.u64 | 128;
	// b 0x82368cfc
	goto loc_82368CFC;
}

__attribute__((alias("__imp__sub_82368D4C"))) PPC_WEAK_FUNC(sub_82368D4C);
PPC_FUNC_IMPL(__imp__sub_82368D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82368D50"))) PPC_WEAK_FUNC(sub_82368D50);
PPC_FUNC_IMPL(__imp__sub_82368D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x82369d78
	sub_82369D78(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r25,88(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r28,r26,24
	r28.u64 = r26.u32 & 0xFF;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,81
	cr6.compare<int32_t>(r28.s32, 81, xer);
	// bgt cr6,0x82368f44
	if (cr6.gt) goto loc_82368F44;
	// beq cr6,0x82368ec8
	if (cr6.eq) goto loc_82368EC8;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82368ff0
	if (!cr6.gt) goto loc_82368FF0;
	// cmpwi cr6,r28,7
	cr6.compare<int32_t>(r28.s32, 7, xer);
	// ble cr6,0x82368e64
	if (!cr6.gt) goto loc_82368E64;
	// cmpwi cr6,r28,31
	cr6.compare<int32_t>(r28.s32, 31, xer);
	// ble cr6,0x82368ff0
	if (!cr6.gt) goto loc_82368FF0;
	// cmpwi cr6,r28,33
	cr6.compare<int32_t>(r28.s32, 33, xer);
	// ble cr6,0x82368ff0
	if (!cr6.gt) goto loc_82368FF0;
	// cmpwi cr6,r28,47
	cr6.compare<int32_t>(r28.s32, 47, xer);
	// bne cr6,0x82368ff0
	if (!cr6.eq) goto loc_82368FF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82368c00
	sub_82368C00(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lha r10,16(r31)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 16));
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82368e10
	if (!cr6.eq) goto loc_82368E10;
	// li r11,3
	r11.s64 = 3;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// b 0x82368e58
	goto loc_82368E58;
loc_82368E10:
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// bne cr6,0x82368e4c
	if (!cr6.eq) goto loc_82368E4C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
loc_82368E4C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82368E58:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82368ff0
	goto loc_82368FF0;
loc_82368E64:
	// addi r3,r25,1
	ctx.r3.s64 = r25.s64 + 1;
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82359250
	sub_82359250(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(r28.u32, 3, xer);
	// stbx r11,r27,r25
	PPC_STORE_U8(r27.u32 + r25.u32, r11.u8);
	// bne cr6,0x82368e9c
	if (!cr6.eq) goto loc_82368E9C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82353618
	sub_82353618(ctx, base);
loc_82368E9C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// b 0x82368ff0
	goto loc_82368FF0;
loc_82368EC8:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359250
	sub_82359250(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359250
	sub_82359250(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,83
	ctx.r4.s64 = ctx.r1.s64 + 83;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359250
	sub_82359250(ctx, base);
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82369cb8
	sub_82369CB8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82368ff0
	goto loc_82368FF0;
loc_82368F44:
	// cmpwi cr6,r28,84
	cr6.compare<int32_t>(r28.s32, 84, xer);
	// beq cr6,0x82368ff0
	if (cr6.eq) goto loc_82368FF0;
	// cmpwi cr6,r28,88
	cr6.compare<int32_t>(r28.s32, 88, xer);
	// bne cr6,0x82368ff0
	if (!cr6.eq) goto loc_82368FF0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359250
	sub_82359250(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359250
	sub_82359250(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lbz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lfs f1,560(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82367d40
	sub_82367D40(ctx, base);
	// addi r11,r1,92
	r11.s64 = ctx.r1.s64 + 92;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// bl 0x8235c968
	sub_8235C968(ctx, base);
	// lwz r28,92(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8235cc70
	sub_8235CC70(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823591a0
	sub_823591A0(ctx, base);
loc_82368FF0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8236900c
	if (!cr6.eq) goto loc_8236900C;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r24,r25
	ctx.r4.u64 = r24.u64 + r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823591a0
	sub_823591A0(ctx, base);
loc_8236900C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82369014"))) PPC_WEAK_FUNC(sub_82369014);
PPC_FUNC_IMPL(__imp__sub_82369014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369018"))) PPC_WEAK_FUNC(sub_82369018);
PPC_FUNC_IMPL(__imp__sub_82369018) {
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
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,240
	cr6.compare<int32_t>(r11.s32, 240, xer);
	// beq cr6,0x82369074
	if (cr6.eq) goto loc_82369074;
	// cmpwi cr6,r11,247
	cr6.compare<int32_t>(r11.s32, 247, xer);
	// beq cr6,0x82369074
	if (cr6.eq) goto loc_82369074;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// bne cr6,0x82369080
	if (!cr6.eq) goto loc_82369080;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359250
	sub_82359250(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82368d50
	sub_82368D50(ctx, base);
	// b 0x82369080
	goto loc_82369080;
loc_82369074:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82369d78
	sub_82369D78(ctx, base);
loc_82369080:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82369088"))) PPC_WEAK_FUNC(sub_82369088);
PPC_FUNC_IMPL(__imp__sub_82369088) {
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
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82369d78
	sub_82369D78(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// lha r9,20(r31)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 20));
	// lha r8,18(r31)
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 18));
	// mullw r10,r9,r11
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// divw r29,r10,r8
	r29.s32 = ctx.r10.s32 / ctx.r8.s32;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// twllei r8,0
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r29,r7
	cr6.compare<int32_t>(r29.s32, ctx.r7.s32, xer);
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// twlgei r10,-1
	// beq cr6,0x823690fc
	if (cr6.eq) goto loc_823690FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82368c00
	sub_82368C00(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823691a4
	if (!cr6.eq) goto loc_823691A4;
	// stw r29,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r29.u32);
loc_823690FC:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359250
	sub_82359250(ctx, base);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8236913c
	if (cr0.eq) goto loc_8236913C;
	// rlwinm r11,r11,0,24,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-240
	r11.s64 = r11.s64 + -240;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8236914c
	if (!cr0.eq) goto loc_8236914C;
	// stb r5,36(r31)
	PPC_STORE_U8(r31.u32 + 36, ctx.r5.u8);
	// b 0x8236914c
	goto loc_8236914C;
loc_8236913C:
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 36);
	// stb r5,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
loc_8236914C:
	// rlwinm r11,r5,0,24,27
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xF0;
	// addi r11,r11,-240
	r11.s64 = r11.s64 + -240;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82369174
	if (cr0.eq) goto loc_82369174;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82369018
	sub_82369018(ctx, base);
	// b 0x823691a4
	goto loc_823691A4;
loc_82369174:
	// clrlwi. r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82369190
	if (!cr0.eq) goto loc_82369190;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359250
	sub_82359250(ctx, base);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_82369190:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82368c90
	sub_82368C90(ctx, base);
loc_823691A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823691AC"))) PPC_WEAK_FUNC(sub_823691AC);
PPC_FUNC_IMPL(__imp__sub_823691AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823691B0"))) PPC_WEAK_FUNC(sub_823691B0);
PPC_FUNC_IMPL(__imp__sub_823691B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lbz r11,15896(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 15896);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq 0x823691f4
	if (cr0.eq) goto loc_823691F4;
	// blt cr6,0x823691ec
	if (cr6.lt) goto loc_823691EC;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x823691e4
	if (cr6.eq) goto loc_823691E4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82369088
	sub_82369088(ctx, base);
	return;
loc_823691E4:
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82367e90
	sub_82367E90(ctx, base);
	return;
loc_823691EC:
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82367df0
	sub_82367DF0(ctx, base);
	return;
loc_823691F4:
	// blt cr6,0x82369218
	if (cr6.lt) goto loc_82369218;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82369210
	if (cr6.eq) goto loc_82369210;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82369088
	sub_82369088(ctx, base);
	return;
loc_82369210:
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82367e90
	sub_82367E90(ctx, base);
	return;
loc_82369218:
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82367df0
	sub_82367DF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82369220"))) PPC_WEAK_FUNC(sub_82369220);
PPC_FUNC_IMPL(__imp__sub_82369220) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82369224"))) PPC_WEAK_FUNC(sub_82369224);
PPC_FUNC_IMPL(__imp__sub_82369224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369228"))) PPC_WEAK_FUNC(sub_82369228);
PPC_FUNC_IMPL(__imp__sub_82369228) {
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
loc_8236923C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823691b0
	sub_823691B0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82369258
	if (cr6.eq) goto loc_82369258;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8236923c
	if (!cr6.eq) goto loc_8236923C;
loc_82369258:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82369280"))) PPC_WEAK_FUNC(sub_82369280);
PPC_FUNC_IMPL(__imp__sub_82369280) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
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
	// beq 0x823692c0
	if (cr0.eq) goto loc_823692C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823591a0
	sub_823591A0(ctx, base);
loc_823692C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82369228
	sub_82369228(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823692c0
	if (!cr0.eq) goto loc_823692C0;
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

__attribute__((alias("__imp__sub_823692E4"))) PPC_WEAK_FUNC(sub_823692E4);
PPC_FUNC_IMPL(__imp__sub_823692E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823692E8"))) PPC_WEAK_FUNC(sub_823692E8);
PPC_FUNC_IMPL(__imp__sub_823692E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,26712
	r11.s64 = r11.s64 + 26712;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82369300"))) PPC_WEAK_FUNC(sub_82369300);
PPC_FUNC_IMPL(__imp__sub_82369300) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82367a50
	sub_82367A50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82369308"))) PPC_WEAK_FUNC(sub_82369308);
PPC_FUNC_IMPL(__imp__sub_82369308) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x82369344
	if (cr6.eq) goto loc_82369344;
	// lwz r31,88(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// bl 0x8234a4d8
	sub_8234A4D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235fcb8
	sub_8235FCB8(ctx, base);
	// b 0x82369348
	goto loc_82369348;
loc_82369344:
	// bl 0x8234a4d8
	sub_8234A4D8(ctx, base);
loc_82369348:
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

__attribute__((alias("__imp__sub_82369360"))) PPC_WEAK_FUNC(sub_82369360);
PPC_FUNC_IMPL(__imp__sub_82369360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,-5816
	r11.s64 = r11.s64 + -5816;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82369370"))) PPC_WEAK_FUNC(sub_82369370);
PPC_FUNC_IMPL(__imp__sub_82369370) {
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
	// addi r11,r11,-5816
	r11.s64 = r11.s64 + -5816;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x8236939c
	if (cr0.eq) goto loc_8236939C;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8236939C:
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

__attribute__((alias("__imp__sub_823693B4"))) PPC_WEAK_FUNC(sub_823693B4);
PPC_FUNC_IMPL(__imp__sub_823693B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823693B8"))) PPC_WEAK_FUNC(sub_823693B8);
PPC_FUNC_IMPL(__imp__sub_823693B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lfs f0,-5788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -5788);
	f0.f64 = double(temp.f32);
	// fdivs f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 / ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823693F0"))) PPC_WEAK_FUNC(sub_823693F0);
PPC_FUNC_IMPL(__imp__sub_823693F0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	// lwa r11,4(r4)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 4));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// li r11,1
	r11.s64 = 1;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x82369414
	if (cr6.lt) goto loc_82369414;
	// li r11,0
	r11.s64 = 0;
loc_82369414:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236941C"))) PPC_WEAK_FUNC(sub_8236941C);
PPC_FUNC_IMPL(__imp__sub_8236941C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369420"))) PPC_WEAK_FUNC(sub_82369420);
PPC_FUNC_IMPL(__imp__sub_82369420) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x82369434
	if (cr6.lt) goto loc_82369434;
	// li r11,0
	r11.s64 = 0;
loc_82369434:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236943C"))) PPC_WEAK_FUNC(sub_8236943C);
PPC_FUNC_IMPL(__imp__sub_8236943C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369440"))) PPC_WEAK_FUNC(sub_82369440);
PPC_FUNC_IMPL(__imp__sub_82369440) {
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
	// beq 0x82369480
	if (cr0.eq) goto loc_82369480;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r3,r11,-27856
	ctx.r3.s64 = r11.s64 + -27856;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82369488
	goto loc_82369488;
loc_82369480:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82369488:
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

__attribute__((alias("__imp__sub_823694A4"))) PPC_WEAK_FUNC(sub_823694A4);
PPC_FUNC_IMPL(__imp__sub_823694A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823694A8"))) PPC_WEAK_FUNC(sub_823694A8);
PPC_FUNC_IMPL(__imp__sub_823694A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,12
	r11.s64 = 12;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r3,r10,r11
	ctx.r3.s32 = ctx.r10.s32 / r11.s32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823694C0"))) PPC_WEAK_FUNC(sub_823694C0);
PPC_FUNC_IMPL(__imp__sub_823694C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r11,r4,12
	r11.s64 = ctx.r4.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823694D4"))) PPC_WEAK_FUNC(sub_823694D4);
PPC_FUNC_IMPL(__imp__sub_823694D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823694D8"))) PPC_WEAK_FUNC(sub_823694D8);
PPC_FUNC_IMPL(__imp__sub_823694D8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// subf r11,r29,r4
	r11.s64 = ctx.r4.s64 - r29.s64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// divw. r31,r11,r10
	r31.s32 = r11.s32 / ctx.r10.s32;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// ble 0x82369540
	if (!cr0.gt) goto loc_82369540;
loc_82369500:
	// srawi r30,r31,1
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r30.s64 = r31.s32 >> 1;
	// lfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mulli r11,r30,12
	r11.s64 = r30.s64 * 12;
	// add r28,r11,r29
	r28.u64 = r11.u64 + r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8236952c
	if (cr0.eq) goto loc_8236952C;
	// mr r31,r30
	r31.u64 = r30.u64;
	// b 0x82369538
	goto loc_82369538;
loc_8236952C:
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// addi r29,r28,12
	r29.s64 = r28.s64 + 12;
	// addi r31,r11,-1
	r31.s64 = r11.s64 + -1;
loc_82369538:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bgt cr6,0x82369500
	if (cr6.gt) goto loc_82369500;
loc_82369540:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8236954C"))) PPC_WEAK_FUNC(sub_8236954C);
PPC_FUNC_IMPL(__imp__sub_8236954C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369550"))) PPC_WEAK_FUNC(sub_82369550);
PPC_FUNC_IMPL(__imp__sub_82369550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lis r11,-32201
	r11.s64 = -2110324736;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-27664
	ctx.r6.s64 = r11.s64 + -27664;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x823694d8
	sub_823694D8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x82369594
	if (cr6.eq) goto loc_82369594;
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
loc_82369594:
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

__attribute__((alias("__imp__sub_823695A8"))) PPC_WEAK_FUNC(sub_823695A8);
PPC_FUNC_IMPL(__imp__sub_823695A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lis r11,-32201
	r11.s64 = -2110324736;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-27616
	ctx.r6.s64 = r11.s64 + -27616;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x823694d8
	sub_823694D8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x823695ec
	if (cr6.eq) goto loc_823695EC;
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
loc_823695EC:
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

__attribute__((alias("__imp__sub_82369600"))) PPC_WEAK_FUNC(sub_82369600);
PPC_FUNC_IMPL(__imp__sub_82369600) {
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
	// lwz r16,-5732(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -5732);
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
	// bl 0x82369440
	sub_82369440(ctx, base);
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
	// bl 0x82686ac8
	sub_82686AC8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82369608"))) PPC_WEAK_FUNC(sub_82369608);
PPC_FUNC_IMPL(__imp__sub_82369608) {
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
	// bl 0x82369440
	sub_82369440(ctx, base);
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
	// bl 0x82686ac8
	sub_82686AC8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82369664"))) PPC_WEAK_FUNC(sub_82369664);
PPC_FUNC_IMPL(__imp__sub_82369664) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-5732(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -5732);
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
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r11,r4
	r11.s64 = ctx.r4.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// bl 0x82369550
	sub_82369550(ctx, base);
	// lwa r11,8(r3)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 8));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236966C"))) PPC_WEAK_FUNC(sub_8236966C);
PPC_FUNC_IMPL(__imp__sub_8236966C) {
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
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_82369698"))) PPC_WEAK_FUNC(sub_82369698);
PPC_FUNC_IMPL(__imp__sub_82369698) {
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
	// extsw r11,r4
	r11.s64 = ctx.r4.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// bl 0x82369550
	sub_82369550(ctx, base);
	// lwa r11,8(r3)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 8));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823696EC"))) PPC_WEAK_FUNC(sub_823696EC);
PPC_FUNC_IMPL(__imp__sub_823696EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823696F0"))) PPC_WEAK_FUNC(sub_823696F0);
PPC_FUNC_IMPL(__imp__sub_823696F0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f31,f1
	cr6.compare(f31.f64, ctx.f1.f64);
	// beq cr6,0x8236975c
	if (cr6.eq) goto loc_8236975C;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82369550
	sub_82369550(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-5680(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -5680);
	f0.f64 = double(temp.f32);
	// lwa r10,8(r3)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 8));
	// lwa r11,4(r3)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 4));
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f12,f31,f12
	ctx.f12.f64 = double(float(f31.f64 - ctx.f12.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
loc_8236975C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82369770"))) PPC_WEAK_FUNC(sub_82369770);
PPC_FUNC_IMPL(__imp__sub_82369770) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f31,f1
	cr6.compare(f31.f64, ctx.f1.f64);
	// beq cr6,0x823697e8
	if (cr6.eq) goto loc_823697E8;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823695a8
	sub_823695A8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f31,f13
	ctx.f12.f64 = double(float(f31.f64 - ctx.f13.f64));
	// lfs f0,6376(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6376);
	f0.f64 = double(temp.f32);
	// lwa r10,4(r3)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 4));
	// lwa r11,8(r3)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 8));
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,17324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmadds f1,f13,f0,f11
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f11.f64));
loc_823697E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823697FC"))) PPC_WEAK_FUNC(sub_823697FC);
PPC_FUNC_IMPL(__imp__sub_823697FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369800"))) PPC_WEAK_FUNC(sub_82369800);
PPC_FUNC_IMPL(__imp__sub_82369800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// lwz r16,-5620(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -5620);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bce4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r23,12
	r23.s64 = 12;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r29,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r29.u32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r31,228
	ctx.r10.s64 = r31.s64 + 228;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x82369860
	if (cr6.lt) goto loc_82369860;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_82369860:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// add r25,r10,r11
	r25.u64 = ctx.r10.u64 + r11.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// bl 0x82369440
	sub_82369440(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82686ac8
	sub_82686AC8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// bne cr6,0x823698cc
	if (!cr6.eq) goto loc_823698CC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823698c4
	if (cr6.eq) goto loc_823698C4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
loc_823698C4:
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// b 0x823698e4
	goto loc_823698E4;
loc_823698CC:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822dc550
	sub_822DC550(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_823698E4:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82369908
	if (!cr0.eq) goto loc_82369908;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82686ac8
	sub_82686AC8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82369908:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r31,84
	ctx.r8.s64 = r31.s64 + 84;
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r9,r31,88
	ctx.r9.s64 = r31.s64 + 88;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// rlwinm r11,r7,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x82369950
	goto loc_82369950;
loc_82369930:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_82369950:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82369930
	if (!cr0.eq) goto loc_82369930;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// mulli r11,r25,12
	r11.s64 = r25.s64 * 12;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82369808"))) PPC_WEAK_FUNC(sub_82369808);
PPC_FUNC_IMPL(__imp__sub_82369808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bce4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r23,12
	r23.s64 = 12;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r29,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r29.u32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r31,228
	ctx.r10.s64 = r31.s64 + 228;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x82369860
	if (cr6.lt) goto loc_82369860;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_82369860:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// add r25,r10,r11
	r25.u64 = ctx.r10.u64 + r11.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// bl 0x82369440
	sub_82369440(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82686ac8
	sub_82686AC8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// bne cr6,0x823698cc
	if (!cr6.eq) goto loc_823698CC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823698c4
	if (cr6.eq) goto loc_823698C4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
loc_823698C4:
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// b 0x823698e4
	goto loc_823698E4;
loc_823698CC:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822dc550
	sub_822DC550(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_823698E4:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82369908
	if (!cr0.eq) goto loc_82369908;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82686ac8
	sub_82686AC8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82369908:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r31,84
	ctx.r8.s64 = r31.s64 + 84;
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r9,r31,88
	ctx.r9.s64 = r31.s64 + 88;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// rlwinm r11,r7,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x82369950
	goto loc_82369950;
loc_82369930:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_82369950:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82369930
	if (!cr0.eq) goto loc_82369930;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// mulli r11,r25,12
	r11.s64 = r25.s64 * 12;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82369990"))) PPC_WEAK_FUNC(sub_82369990);
PPC_FUNC_IMPL(__imp__sub_82369990) {
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
	// lwz r16,-5620(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -5620);
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
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

__attribute__((alias("__imp__sub_82369998"))) PPC_WEAK_FUNC(sub_82369998);
PPC_FUNC_IMPL(__imp__sub_82369998) {
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
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_823699C8"))) PPC_WEAK_FUNC(sub_823699C8);
PPC_FUNC_IMPL(__imp__sub_823699C8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,12
	r27.s64 = 12;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// divw r11,r11,r27
	r11.s32 = r11.s32 / r27.s32;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bge cr6,0x82369aa8
	if (!cr6.lt) goto loc_82369AA8;
	// lis r11,5461
	r11.s64 = 357892096;
	// ori r11,r11,21845
	r11.u64 = r11.u64 | 21845;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x82369a18
	if (!cr6.gt) goto loc_82369A18;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,7600
	ctx.r3.s64 = r11.s64 + 7600;
	// bl 0x82125240
	sub_82125240(ctx, base);
loc_82369A18:
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r11,r5,r6
	r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// divw r26,r11,r27
	r26.s32 = r11.s32 / r27.s32;
	// beq cr6,0x82369a7c
	if (cr6.eq) goto loc_82369A7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82369608
	sub_82369608(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82369a4c
	goto loc_82369A4C;
loc_82369A48:
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
loc_82369A4C:
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82369a48
	if (!cr0.eq) goto loc_82369A48;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r27
	r11.s32 = r11.s32 / r27.s32;
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x82369a8c
	goto loc_82369A8C;
loc_82369A7C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82369440
	sub_82369440(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82369A8C:
	// mulli r10,r26,12
	ctx.r10.s64 = r26.s64 * 12;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mulli r11,r29,12
	r11.s64 = r29.s64 * 12;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_82369AA8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82369AB0"))) PPC_WEAK_FUNC(sub_82369AB0);
PPC_FUNC_IMPL(__imp__sub_82369AB0) {
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
	// lwz r16,-5496(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -5496);
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// addi r10,r11,-5540
	ctx.r10.s64 = r11.s64 + -5540;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x823699c8
	sub_823699C8(ctx, base);
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

__attribute__((alias("__imp__sub_82369AB8"))) PPC_WEAK_FUNC(sub_82369AB8);
PPC_FUNC_IMPL(__imp__sub_82369AB8) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// addi r10,r11,-5540
	ctx.r10.s64 = r11.s64 + -5540;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x823699c8
	sub_823699C8(ctx, base);
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

__attribute__((alias("__imp__sub_82369B1C"))) PPC_WEAK_FUNC(sub_82369B1C);
PPC_FUNC_IMPL(__imp__sub_82369B1C) {
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
	// bl 0x82369360
	sub_82369360(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82369B44"))) PPC_WEAK_FUNC(sub_82369B44);
PPC_FUNC_IMPL(__imp__sub_82369B44) {
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
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82686ff8
	sub_82686FF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82369B70"))) PPC_WEAK_FUNC(sub_82369B70);
PPC_FUNC_IMPL(__imp__sub_82369B70) {
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
	// lwz r16,-5440(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -5440);
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
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x82686ff8
	sub_82686FF8(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,-5816
	r11.s64 = r11.s64 + -5816;
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

__attribute__((alias("__imp__sub_82369B78"))) PPC_WEAK_FUNC(sub_82369B78);
PPC_FUNC_IMPL(__imp__sub_82369B78) {
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
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x82686ff8
	sub_82686FF8(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,-5816
	r11.s64 = r11.s64 + -5816;
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

__attribute__((alias("__imp__sub_82369BC4"))) PPC_WEAK_FUNC(sub_82369BC4);
PPC_FUNC_IMPL(__imp__sub_82369BC4) {
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
	// bl 0x82369360
	sub_82369360(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82369BEC"))) PPC_WEAK_FUNC(sub_82369BEC);
PPC_FUNC_IMPL(__imp__sub_82369BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369BF0"))) PPC_WEAK_FUNC(sub_82369BF0);
PPC_FUNC_IMPL(__imp__sub_82369BF0) {
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
	// bl 0x82369b78
	sub_82369B78(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82369c20
	if (cr0.eq) goto loc_82369C20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82369C20:
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

__attribute__((alias("__imp__sub_82369C3C"))) PPC_WEAK_FUNC(sub_82369C3C);
PPC_FUNC_IMPL(__imp__sub_82369C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369C40"))) PPC_WEAK_FUNC(sub_82369C40);
PPC_FUNC_IMPL(__imp__sub_82369C40) {
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
	// beq cr6,0x82369c90
	if (cr6.eq) goto loc_82369C90;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82369c80
	if (cr0.eq) goto loc_82369C80;
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
loc_82369C80:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x82369ca4
	goto loc_82369CA4;
loc_82369C90:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82369808
	sub_82369808(ctx, base);
loc_82369CA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82369CB4"))) PPC_WEAK_FUNC(sub_82369CB4);
PPC_FUNC_IMPL(__imp__sub_82369CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369CB8"))) PPC_WEAK_FUNC(sub_82369CB8);
PPC_FUNC_IMPL(__imp__sub_82369CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// extsw r11,r30
	r11.s64 = r30.s32;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// bl 0x82369c40
	sub_82369C40(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82369D14"))) PPC_WEAK_FUNC(sub_82369D14);
PPC_FUNC_IMPL(__imp__sub_82369D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369D18"))) PPC_WEAK_FUNC(sub_82369D18);
PPC_FUNC_IMPL(__imp__sub_82369D18) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_82369D34:
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359250
	sub_82359250(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r10,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// clrlwi r10,r11,25
	ctx.r10.u64 = r11.u32 & 0x7F;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82369d34
	if (!cr0.eq) goto loc_82369D34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82369D74"))) PPC_WEAK_FUNC(sub_82369D74);
PPC_FUNC_IMPL(__imp__sub_82369D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369D78"))) PPC_WEAK_FUNC(sub_82369D78);
PPC_FUNC_IMPL(__imp__sub_82369D78) {
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
	// bl 0x82369d18
	sub_82369D18(ctx, base);
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

__attribute__((alias("__imp__sub_82369DA8"))) PPC_WEAK_FUNC(sub_82369DA8);
PPC_FUNC_IMPL(__imp__sub_82369DA8) {
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
	// lwz r16,-5368(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -5368);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,15912(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15912);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,15908
	r30.s64 = ctx.r9.s64 + 15908;
	// bne 0x82369df4
	if (!cr0.eq) goto loc_82369DF4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,15912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15912, r11.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-5392
	ctx.r4.s64 = r11.s64 + -5392;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82369DF4:
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

__attribute__((alias("__imp__sub_82369DB0"))) PPC_WEAK_FUNC(sub_82369DB0);
PPC_FUNC_IMPL(__imp__sub_82369DB0) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,15912(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15912);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,15908
	r30.s64 = ctx.r9.s64 + 15908;
	// bne 0x82369df4
	if (!cr0.eq) goto loc_82369DF4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,15912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15912, r11.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-5392
	ctx.r4.s64 = r11.s64 + -5392;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82369DF4:
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

__attribute__((alias("__imp__sub_82369E08"))) PPC_WEAK_FUNC(sub_82369E08);
PPC_FUNC_IMPL(__imp__sub_82369E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,15912
	r11.s64 = r11.s64 + 15912;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,15912
	ctx.r10.s64 = ctx.r10.s64 + 15912;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82369E30"))) PPC_WEAK_FUNC(sub_82369E30);
PPC_FUNC_IMPL(__imp__sub_82369E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-5312(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -5312);
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
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82369e68
	if (cr0.eq) goto loc_82369E68;
	// bl 0x823799b0
	sub_823799B0(ctx, base);
	// b 0x82369e6c
	goto loc_82369E6C;
loc_82369E68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82369E6C:
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

__attribute__((alias("__imp__sub_82369E38"))) PPC_WEAK_FUNC(sub_82369E38);
PPC_FUNC_IMPL(__imp__sub_82369E38) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82369e68
	if (cr0.eq) goto loc_82369E68;
	// bl 0x823799b0
	sub_823799B0(ctx, base);
	// b 0x82369e6c
	goto loc_82369E6C;
loc_82369E68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82369E6C:
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

__attribute__((alias("__imp__sub_82369E80"))) PPC_WEAK_FUNC(sub_82369E80);
PPC_FUNC_IMPL(__imp__sub_82369E80) {
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

__attribute__((alias("__imp__sub_82369EA8"))) PPC_WEAK_FUNC(sub_82369EA8);
PPC_FUNC_IMPL(__imp__sub_82369EA8) {
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
	// lwz r16,-5256(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -5256);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,15920(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15920);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,15916
	r30.s64 = ctx.r9.s64 + 15916;
	// bne 0x82369ef4
	if (!cr0.eq) goto loc_82369EF4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,15920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15920, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,18628
	ctx.r4.s64 = r11.s64 + 18628;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82369EF4:
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

__attribute__((alias("__imp__sub_82369EB0"))) PPC_WEAK_FUNC(sub_82369EB0);
PPC_FUNC_IMPL(__imp__sub_82369EB0) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,15920(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15920);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,15916
	r30.s64 = ctx.r9.s64 + 15916;
	// bne 0x82369ef4
	if (!cr0.eq) goto loc_82369EF4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,15920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15920, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,18628
	ctx.r4.s64 = r11.s64 + 18628;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82369EF4:
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

__attribute__((alias("__imp__sub_82369F08"))) PPC_WEAK_FUNC(sub_82369F08);
PPC_FUNC_IMPL(__imp__sub_82369F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,15920
	r11.s64 = r11.s64 + 15920;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,15920
	ctx.r10.s64 = ctx.r10.s64 + 15920;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82369F30"))) PPC_WEAK_FUNC(sub_82369F30);
PPC_FUNC_IMPL(__imp__sub_82369F30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-5200(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -5200);
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
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82369f6c
	if (cr0.eq) goto loc_82369F6C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82375fe8
	sub_82375FE8(ctx, base);
	// b 0x82369f70
	goto loc_82369F70;
loc_82369F6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82369F70:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82369f88
	if (cr6.eq) goto loc_82369F88;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82369F88:
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

__attribute__((alias("__imp__sub_82369F38"))) PPC_WEAK_FUNC(sub_82369F38);
PPC_FUNC_IMPL(__imp__sub_82369F38) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82369f6c
	if (cr0.eq) goto loc_82369F6C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82375fe8
	sub_82375FE8(ctx, base);
	// b 0x82369f70
	goto loc_82369F70;
loc_82369F6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82369F70:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82369f88
	if (cr6.eq) goto loc_82369F88;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82369F88:
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

__attribute__((alias("__imp__sub_82369F9C"))) PPC_WEAK_FUNC(sub_82369F9C);
PPC_FUNC_IMPL(__imp__sub_82369F9C) {
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

__attribute__((alias("__imp__sub_82369FC4"))) PPC_WEAK_FUNC(sub_82369FC4);
PPC_FUNC_IMPL(__imp__sub_82369FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369FC8"))) PPC_WEAK_FUNC(sub_82369FC8);
PPC_FUNC_IMPL(__imp__sub_82369FC8) {
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
	// lwz r16,-5144(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -5144);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,15928(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15928);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,15924
	r30.s64 = ctx.r9.s64 + 15924;
	// bne 0x8236a014
	if (!cr0.eq) goto loc_8236A014;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,15928(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15928, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,18616
	ctx.r4.s64 = r11.s64 + 18616;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8236A014:
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

__attribute__((alias("__imp__sub_82369FD0"))) PPC_WEAK_FUNC(sub_82369FD0);
PPC_FUNC_IMPL(__imp__sub_82369FD0) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,15928(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15928);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,15924
	r30.s64 = ctx.r9.s64 + 15924;
	// bne 0x8236a014
	if (!cr0.eq) goto loc_8236A014;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,15928(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15928, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,18616
	ctx.r4.s64 = r11.s64 + 18616;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8236A014:
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

__attribute__((alias("__imp__sub_8236A028"))) PPC_WEAK_FUNC(sub_8236A028);
PPC_FUNC_IMPL(__imp__sub_8236A028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,15928
	r11.s64 = r11.s64 + 15928;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,15928
	ctx.r10.s64 = ctx.r10.s64 + 15928;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236A050"))) PPC_WEAK_FUNC(sub_8236A050);
PPC_FUNC_IMPL(__imp__sub_8236A050) {
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
	// lwz r16,-5072(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -5072);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,15936(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15936);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,15932
	r30.s64 = ctx.r9.s64 + 15932;
	// bne 0x8236a09c
	if (!cr0.eq) goto loc_8236A09C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,15936(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15936, r11.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-5096
	ctx.r4.s64 = r11.s64 + -5096;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8236A09C:
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

__attribute__((alias("__imp__sub_8236A058"))) PPC_WEAK_FUNC(sub_8236A058);
PPC_FUNC_IMPL(__imp__sub_8236A058) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,15936(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15936);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,15932
	r30.s64 = ctx.r9.s64 + 15932;
	// bne 0x8236a09c
	if (!cr0.eq) goto loc_8236A09C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,15936(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15936, r11.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-5096
	ctx.r4.s64 = r11.s64 + -5096;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8236A09C:
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

__attribute__((alias("__imp__sub_8236A0B0"))) PPC_WEAK_FUNC(sub_8236A0B0);
PPC_FUNC_IMPL(__imp__sub_8236A0B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,15936
	r11.s64 = r11.s64 + 15936;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,15936
	ctx.r10.s64 = ctx.r10.s64 + 15936;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236A0D8"))) PPC_WEAK_FUNC(sub_8236A0D8);
PPC_FUNC_IMPL(__imp__sub_8236A0D8) {
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
	// lwz r16,-5008(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -5008);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,15944(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15944);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,15940
	r30.s64 = ctx.r9.s64 + 15940;
	// bne 0x8236a124
	if (!cr0.eq) goto loc_8236A124;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,15944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15944, r11.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-5024
	ctx.r4.s64 = r11.s64 + -5024;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8236A124:
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

__attribute__((alias("__imp__sub_8236A0E0"))) PPC_WEAK_FUNC(sub_8236A0E0);
PPC_FUNC_IMPL(__imp__sub_8236A0E0) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,15944(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15944);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,15940
	r30.s64 = ctx.r9.s64 + 15940;
	// bne 0x8236a124
	if (!cr0.eq) goto loc_8236A124;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,15944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15944, r11.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-5024
	ctx.r4.s64 = r11.s64 + -5024;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8236A124:
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

__attribute__((alias("__imp__sub_8236A138"))) PPC_WEAK_FUNC(sub_8236A138);
PPC_FUNC_IMPL(__imp__sub_8236A138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,15944
	r11.s64 = r11.s64 + 15944;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,15944
	ctx.r10.s64 = ctx.r10.s64 + 15944;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236A160"))) PPC_WEAK_FUNC(sub_8236A160);
PPC_FUNC_IMPL(__imp__sub_8236A160) {
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
	// lwz r16,-4936(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4936);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,15952(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15952);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,15948
	r30.s64 = ctx.r9.s64 + 15948;
	// bne 0x8236a1ac
	if (!cr0.eq) goto loc_8236A1AC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,15952(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15952, r11.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-4960
	ctx.r4.s64 = r11.s64 + -4960;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8236A1AC:
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

__attribute__((alias("__imp__sub_8236A168"))) PPC_WEAK_FUNC(sub_8236A168);
PPC_FUNC_IMPL(__imp__sub_8236A168) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,15952(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15952);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,15948
	r30.s64 = ctx.r9.s64 + 15948;
	// bne 0x8236a1ac
	if (!cr0.eq) goto loc_8236A1AC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,15952(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15952, r11.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-4960
	ctx.r4.s64 = r11.s64 + -4960;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8236A1AC:
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

__attribute__((alias("__imp__sub_8236A1C0"))) PPC_WEAK_FUNC(sub_8236A1C0);
PPC_FUNC_IMPL(__imp__sub_8236A1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,15952
	r11.s64 = r11.s64 + 15952;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,15952
	ctx.r10.s64 = ctx.r10.s64 + 15952;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236A1E8"))) PPC_WEAK_FUNC(sub_8236A1E8);
PPC_FUNC_IMPL(__imp__sub_8236A1E8) {
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
	// lwz r16,-4864(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4864);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,15960(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15960);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,15956
	r30.s64 = ctx.r9.s64 + 15956;
	// bne 0x8236a234
	if (!cr0.eq) goto loc_8236A234;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,15960(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15960, r11.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-4888
	ctx.r4.s64 = r11.s64 + -4888;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8236A234:
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

__attribute__((alias("__imp__sub_8236A1F0"))) PPC_WEAK_FUNC(sub_8236A1F0);
PPC_FUNC_IMPL(__imp__sub_8236A1F0) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,15960(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15960);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,15956
	r30.s64 = ctx.r9.s64 + 15956;
	// bne 0x8236a234
	if (!cr0.eq) goto loc_8236A234;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,15960(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15960, r11.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-4888
	ctx.r4.s64 = r11.s64 + -4888;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8236A234:
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

__attribute__((alias("__imp__sub_8236A248"))) PPC_WEAK_FUNC(sub_8236A248);
PPC_FUNC_IMPL(__imp__sub_8236A248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,15960
	r11.s64 = r11.s64 + 15960;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,15960
	ctx.r10.s64 = ctx.r10.s64 + 15960;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236A270"))) PPC_WEAK_FUNC(sub_8236A270);
PPC_FUNC_IMPL(__imp__sub_8236A270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,16016
	ctx.r3.s64 = r11.s64 + 16016;
	// b 0x8236d100
	sub_8236D100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236A27C"))) PPC_WEAK_FUNC(sub_8236A27C);
PPC_FUNC_IMPL(__imp__sub_8236A27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236A280"))) PPC_WEAK_FUNC(sub_8236A280);
PPC_FUNC_IMPL(__imp__sub_8236A280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// stw r9,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r9.u32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// stw r9,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r9.u32);
	// bne cr6,0x8236a2d0
	if (!cr6.eq) goto loc_8236A2D0;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8236a2c0
	if (cr0.eq) goto loc_8236A2C0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,68(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_8236A2C0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82379470
	sub_82379470(ctx, base);
	return;
loc_8236A2D0:
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8236A2F8"))) PPC_WEAK_FUNC(sub_8236A2F8);
PPC_FUNC_IMPL(__imp__sub_8236A2F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236A2FC"))) PPC_WEAK_FUNC(sub_8236A2FC);
PPC_FUNC_IMPL(__imp__sub_8236A2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236A300"))) PPC_WEAK_FUNC(sub_8236A300);
PPC_FUNC_IMPL(__imp__sub_8236A300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8236a314
	if (cr0.eq) goto loc_8236A314;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// b 0x8236a318
	goto loc_8236A318;
loc_8236A314:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236A318:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8236a324
	if (cr6.eq) goto loc_8236A324;
	// b 0x82376450
	sub_82376450(ctx, base);
	return;
loc_8236A324:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236A32C"))) PPC_WEAK_FUNC(sub_8236A32C);
PPC_FUNC_IMPL(__imp__sub_8236A32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236A330"))) PPC_WEAK_FUNC(sub_8236A330);
PPC_FUNC_IMPL(__imp__sub_8236A330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r16,-4808(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4808);
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
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8236a3ac
	if (cr0.eq) goto loc_8236A3AC;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8236a3ac
	if (!cr6.eq) goto loc_8236A3AC;
	// li r3,904
	ctx.r3.s64 = 904;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8236a388
	if (cr0.eq) goto loc_8236A388;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8227b1f8
	sub_8227B1F8(ctx, base);
	// b 0x8236a38c
	goto loc_8236A38C;
loc_8236A388:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236A38C:
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,56(r30)
	PPC_STORE_U32(r30.u32 + 56, ctx.r3.u32);
	// bl 0x8227a238
	sub_8227A238(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// ori r4,r4,61440
	ctx.r4.u64 = ctx.r4.u64 | 61440;
	// bl 0x8227a220
	sub_8227A220(ctx, base);
	// b 0x8236a3dc
	goto loc_8236A3DC;
loc_8236A3AC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8236a3dc
	if (!cr6.eq) goto loc_8236A3DC;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8236a3dc
	if (cr0.eq) goto loc_8236A3DC;
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
loc_8236A3DC:
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

__attribute__((alias("__imp__sub_8236A338"))) PPC_WEAK_FUNC(sub_8236A338);
PPC_FUNC_IMPL(__imp__sub_8236A338) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8236a3ac
	if (cr0.eq) goto loc_8236A3AC;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8236a3ac
	if (!cr6.eq) goto loc_8236A3AC;
	// li r3,904
	ctx.r3.s64 = 904;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8236a388
	if (cr0.eq) goto loc_8236A388;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8227b1f8
	sub_8227B1F8(ctx, base);
	// b 0x8236a38c
	goto loc_8236A38C;
loc_8236A388:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236A38C:
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,56(r30)
	PPC_STORE_U32(r30.u32 + 56, ctx.r3.u32);
	// bl 0x8227a238
	sub_8227A238(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// ori r4,r4,61440
	ctx.r4.u64 = ctx.r4.u64 | 61440;
	// bl 0x8227a220
	sub_8227A220(ctx, base);
	// b 0x8236a3dc
	goto loc_8236A3DC;
loc_8236A3AC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8236a3dc
	if (!cr6.eq) goto loc_8236A3DC;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8236a3dc
	if (cr0.eq) goto loc_8236A3DC;
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
loc_8236A3DC:
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

__attribute__((alias("__imp__sub_8236A3F4"))) PPC_WEAK_FUNC(sub_8236A3F4);
PPC_FUNC_IMPL(__imp__sub_8236A3F4) {
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

__attribute__((alias("__imp__sub_8236A41C"))) PPC_WEAK_FUNC(sub_8236A41C);
PPC_FUNC_IMPL(__imp__sub_8236A41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236A420"))) PPC_WEAK_FUNC(sub_8236A420);
PPC_FUNC_IMPL(__imp__sub_8236A420) {
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
	// beq 0x8236a460
	if (cr0.eq) goto loc_8236A460;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r3,r11,-27764
	ctx.r3.s64 = r11.s64 + -27764;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8236a468
	goto loc_8236A468;
loc_8236A460:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_8236A468:
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

__attribute__((alias("__imp__sub_8236A484"))) PPC_WEAK_FUNC(sub_8236A484);
PPC_FUNC_IMPL(__imp__sub_8236A484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236A488"))) PPC_WEAK_FUNC(sub_8236A488);
PPC_FUNC_IMPL(__imp__sub_8236A488) {
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
	// beq 0x8236a4c8
	if (cr0.eq) goto loc_8236A4C8;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r3,r11,-27708
	ctx.r3.s64 = r11.s64 + -27708;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8236a4d0
	goto loc_8236A4D0;
loc_8236A4C8:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_8236A4D0:
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

__attribute__((alias("__imp__sub_8236A4EC"))) PPC_WEAK_FUNC(sub_8236A4EC);
PPC_FUNC_IMPL(__imp__sub_8236A4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236A4F0"))) PPC_WEAK_FUNC(sub_8236A4F0);
PPC_FUNC_IMPL(__imp__sub_8236A4F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-4744(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4744);
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82369fd0
	sub_82369FD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,520
	ctx.r3.s64 = 520;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8236a540
	if (cr0.eq) goto loc_8236A540;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82374bc8
	sub_82374BC8(ctx, base);
	// b 0x8236a544
	goto loc_8236A544;
loc_8236A540:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236A544:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8236a55c
	if (cr6.eq) goto loc_8236A55C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_8236A55C:
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

__attribute__((alias("__imp__sub_8236A4F8"))) PPC_WEAK_FUNC(sub_8236A4F8);
PPC_FUNC_IMPL(__imp__sub_8236A4F8) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82369fd0
	sub_82369FD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,520
	ctx.r3.s64 = 520;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8236a540
	if (cr0.eq) goto loc_8236A540;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82374bc8
	sub_82374BC8(ctx, base);
	// b 0x8236a544
	goto loc_8236A544;
loc_8236A540:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236A544:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8236a55c
	if (cr6.eq) goto loc_8236A55C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_8236A55C:
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

__attribute__((alias("__imp__sub_8236A570"))) PPC_WEAK_FUNC(sub_8236A570);
PPC_FUNC_IMPL(__imp__sub_8236A570) {
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

__attribute__((alias("__imp__sub_8236A598"))) PPC_WEAK_FUNC(sub_8236A598);
PPC_FUNC_IMPL(__imp__sub_8236A598) {
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
	// lwz r16,-4632(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4632);
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r5,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r5.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8236a058
	sub_8236A058(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r7,r31,104
	ctx.r7.s64 = r31.s64 + 104;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82145488
	sub_82145488(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8236a61c
	if (cr0.eq) goto loc_8236A61C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8236A61C:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8236a630
	if (cr0.eq) goto loc_8236A630;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8236A630:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8236a644
	if (cr0.eq) goto loc_8236A644;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8236A644:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,-4692
	r11.s64 = r11.s64 + -4692;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
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

__attribute__((alias("__imp__sub_8236A5A0"))) PPC_WEAK_FUNC(sub_8236A5A0);
PPC_FUNC_IMPL(__imp__sub_8236A5A0) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r5,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r5.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8236a058
	sub_8236A058(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r7,r31,104
	ctx.r7.s64 = r31.s64 + 104;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82145488
	sub_82145488(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8236a61c
	if (cr0.eq) goto loc_8236A61C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8236A61C:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8236a630
	if (cr0.eq) goto loc_8236A630;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8236A630:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8236a644
	if (cr0.eq) goto loc_8236A644;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8236A644:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,-4692
	r11.s64 = r11.s64 + -4692;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
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

__attribute__((alias("__imp__sub_8236A66C"))) PPC_WEAK_FUNC(sub_8236A66C);
PPC_FUNC_IMPL(__imp__sub_8236A66C) {
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

__attribute__((alias("__imp__sub_8236A694"))) PPC_WEAK_FUNC(sub_8236A694);
PPC_FUNC_IMPL(__imp__sub_8236A694) {
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

__attribute__((alias("__imp__sub_8236A6BC"))) PPC_WEAK_FUNC(sub_8236A6BC);
PPC_FUNC_IMPL(__imp__sub_8236A6BC) {
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

__attribute__((alias("__imp__sub_8236A6E4"))) PPC_WEAK_FUNC(sub_8236A6E4);
PPC_FUNC_IMPL(__imp__sub_8236A6E4) {
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

__attribute__((alias("__imp__sub_8236A70C"))) PPC_WEAK_FUNC(sub_8236A70C);
PPC_FUNC_IMPL(__imp__sub_8236A70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236A710"))) PPC_WEAK_FUNC(sub_8236A710);
PPC_FUNC_IMPL(__imp__sub_8236A710) {
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
	// lwz r16,-4520(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4520);
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
	// stw r5,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r5.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82141968
	sub_82141968(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8213deb8
	sub_8213DEB8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8236a780
	if (cr0.eq) goto loc_8236A780;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8236A780:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8236a794
	if (cr0.eq) goto loc_8236A794;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8236A794:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,31636
	r11.s64 = r11.s64 + 31636;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_8236A718"))) PPC_WEAK_FUNC(sub_8236A718);
PPC_FUNC_IMPL(__imp__sub_8236A718) {
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
	// stw r5,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r5.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82141968
	sub_82141968(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8213deb8
	sub_8213DEB8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8236a780
	if (cr0.eq) goto loc_8236A780;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8236A780:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8236a794
	if (cr0.eq) goto loc_8236A794;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8236A794:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,31636
	r11.s64 = r11.s64 + 31636;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_8236A7BC"))) PPC_WEAK_FUNC(sub_8236A7BC);
PPC_FUNC_IMPL(__imp__sub_8236A7BC) {
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

__attribute__((alias("__imp__sub_8236A7E4"))) PPC_WEAK_FUNC(sub_8236A7E4);
PPC_FUNC_IMPL(__imp__sub_8236A7E4) {
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

__attribute__((alias("__imp__sub_8236A80C"))) PPC_WEAK_FUNC(sub_8236A80C);
PPC_FUNC_IMPL(__imp__sub_8236A80C) {
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

__attribute__((alias("__imp__sub_8236A834"))) PPC_WEAK_FUNC(sub_8236A834);
PPC_FUNC_IMPL(__imp__sub_8236A834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236A838"))) PPC_WEAK_FUNC(sub_8236A838);
PPC_FUNC_IMPL(__imp__sub_8236A838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-4448(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4448);
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8236a0e0
	sub_8236A0E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,336
	ctx.r3.s64 = 336;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8236a888
	if (cr0.eq) goto loc_8236A888;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82377ee0
	sub_82377EE0(ctx, base);
	// b 0x8236a88c
	goto loc_8236A88C;
loc_8236A888:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236A88C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8236a8a4
	if (cr6.eq) goto loc_8236A8A4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_8236A8A4:
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

__attribute__((alias("__imp__sub_8236A840"))) PPC_WEAK_FUNC(sub_8236A840);
PPC_FUNC_IMPL(__imp__sub_8236A840) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8236a0e0
	sub_8236A0E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,336
	ctx.r3.s64 = 336;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8236a888
	if (cr0.eq) goto loc_8236A888;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82377ee0
	sub_82377EE0(ctx, base);
	// b 0x8236a88c
	goto loc_8236A88C;
loc_8236A888:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236A88C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8236a8a4
	if (cr6.eq) goto loc_8236A8A4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_8236A8A4:
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

__attribute__((alias("__imp__sub_8236A8B8"))) PPC_WEAK_FUNC(sub_8236A8B8);
PPC_FUNC_IMPL(__imp__sub_8236A8B8) {
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

__attribute__((alias("__imp__sub_8236A8E0"))) PPC_WEAK_FUNC(sub_8236A8E0);
PPC_FUNC_IMPL(__imp__sub_8236A8E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-4392(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4392);
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8236a168
	sub_8236A168(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,120
	ctx.r3.s64 = 120;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8236a930
	if (cr0.eq) goto loc_8236A930;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8237cb20
	sub_8237CB20(ctx, base);
	// b 0x8236a934
	goto loc_8236A934;
loc_8236A930:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236A934:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8236a94c
	if (cr6.eq) goto loc_8236A94C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_8236A94C:
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

__attribute__((alias("__imp__sub_8236A8E8"))) PPC_WEAK_FUNC(sub_8236A8E8);
PPC_FUNC_IMPL(__imp__sub_8236A8E8) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8236a168
	sub_8236A168(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,120
	ctx.r3.s64 = 120;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8236a930
	if (cr0.eq) goto loc_8236A930;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8237cb20
	sub_8237CB20(ctx, base);
	// b 0x8236a934
	goto loc_8236A934;
loc_8236A930:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236A934:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8236a94c
	if (cr6.eq) goto loc_8236A94C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_8236A94C:
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

__attribute__((alias("__imp__sub_8236A960"))) PPC_WEAK_FUNC(sub_8236A960);
PPC_FUNC_IMPL(__imp__sub_8236A960) {
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

__attribute__((alias("__imp__sub_8236A988"))) PPC_WEAK_FUNC(sub_8236A988);
PPC_FUNC_IMPL(__imp__sub_8236A988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-4336(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4336);
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8236a1f0
	sub_8236A1F0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,344
	ctx.r3.s64 = 344;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8236a9d8
	if (cr0.eq) goto loc_8236A9D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8237d388
	sub_8237D388(ctx, base);
	// b 0x8236a9dc
	goto loc_8236A9DC;
loc_8236A9D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236A9DC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8236a9f4
	if (cr6.eq) goto loc_8236A9F4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_8236A9F4:
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

__attribute__((alias("__imp__sub_8236A990"))) PPC_WEAK_FUNC(sub_8236A990);
PPC_FUNC_IMPL(__imp__sub_8236A990) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8236a1f0
	sub_8236A1F0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,344
	ctx.r3.s64 = 344;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8236a9d8
	if (cr0.eq) goto loc_8236A9D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8237d388
	sub_8237D388(ctx, base);
	// b 0x8236a9dc
	goto loc_8236A9DC;
loc_8236A9D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236A9DC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8236a9f4
	if (cr6.eq) goto loc_8236A9F4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_8236A9F4:
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

__attribute__((alias("__imp__sub_8236AA08"))) PPC_WEAK_FUNC(sub_8236AA08);
PPC_FUNC_IMPL(__imp__sub_8236AA08) {
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

__attribute__((alias("__imp__sub_8236AA30"))) PPC_WEAK_FUNC(sub_8236AA30);
PPC_FUNC_IMPL(__imp__sub_8236AA30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r16,-4280(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4280);
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8236aa74
	if (!cr0.eq) goto loc_8236AA74;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8236aa74
	if (!cr6.eq) goto loc_8236AA74;
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x8236ab3c
	if (cr6.eq) goto loc_8236AB3C;
loc_8236AA74:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8236aa88
	if (cr6.eq) goto loc_8236AA88;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8236aa94
	if (!cr6.eq) goto loc_8236AA94;
loc_8236AA88:
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x8236ab3c
	if (cr6.eq) goto loc_8236AB3C;
loc_8236AA94:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8236a280
	sub_8236A280(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,60(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stb r28,44(r30)
	PPC_STORE_U8(r30.u32 + 44, r28.u8);
	// bl 0x8236a5a0
	sub_8236A5A0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8236aae8
	if (cr0.eq) goto loc_8236AAE8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8236AAE8:
	// li r11,1
	r11.s64 = 1;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// beq 0x8236ab18
	if (cr0.eq) goto loc_8236AB18;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8236ab28
	goto loc_8236AB28;
loc_8236AB18:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8236ab28
	if (cr6.eq) goto loc_8236AB28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82378d28
	sub_82378D28(ctx, base);
loc_8236AB28:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r11,r11,18572
	r11.s64 = r11.s64 + 18572;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8236AB3C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8236AA38"))) PPC_WEAK_FUNC(sub_8236AA38);
PPC_FUNC_IMPL(__imp__sub_8236AA38) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8236aa74
	if (!cr0.eq) goto loc_8236AA74;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8236aa74
	if (!cr6.eq) goto loc_8236AA74;
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x8236ab3c
	if (cr6.eq) goto loc_8236AB3C;
loc_8236AA74:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8236aa88
	if (cr6.eq) goto loc_8236AA88;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8236aa94
	if (!cr6.eq) goto loc_8236AA94;
loc_8236AA88:
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x8236ab3c
	if (cr6.eq) goto loc_8236AB3C;
loc_8236AA94:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8236a280
	sub_8236A280(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,60(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stb r28,44(r30)
	PPC_STORE_U8(r30.u32 + 44, r28.u8);
	// bl 0x8236a5a0
	sub_8236A5A0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8236aae8
	if (cr0.eq) goto loc_8236AAE8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8236AAE8:
	// li r11,1
	r11.s64 = 1;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// beq 0x8236ab18
	if (cr0.eq) goto loc_8236AB18;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8236ab28
	goto loc_8236AB28;
loc_8236AB18:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8236ab28
	if (cr6.eq) goto loc_8236AB28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82378d28
	sub_82378D28(ctx, base);
loc_8236AB28:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r11,r11,18572
	r11.s64 = r11.s64 + 18572;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8236AB3C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8236AB44"))) PPC_WEAK_FUNC(sub_8236AB44);
PPC_FUNC_IMPL(__imp__sub_8236AB44) {
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

__attribute__((alias("__imp__sub_8236AB6C"))) PPC_WEAK_FUNC(sub_8236AB6C);
PPC_FUNC_IMPL(__imp__sub_8236AB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236AB70"))) PPC_WEAK_FUNC(sub_8236AB70);
PPC_FUNC_IMPL(__imp__sub_8236AB70) {
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
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8236ab90
	if (cr0.eq) goto loc_8236AB90;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// b 0x8236ab94
	goto loc_8236AB94;
loc_8236AB90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236AB94:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8236aba4
	if (cr6.eq) goto loc_8236ABA4;
	// bl 0x82376450
	sub_82376450(ctx, base);
	// b 0x8236aba8
	goto loc_8236ABA8;
loc_8236ABA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236ABA8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8236abc8
	if (cr6.eq) goto loc_8236ABC8;
	// lwz r11,224(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// addi r11,r11,-3
	r11.s64 = r11.s64 + -3;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// b 0x8236abcc
	goto loc_8236ABCC;
loc_8236ABC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236ABCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236ABDC"))) PPC_WEAK_FUNC(sub_8236ABDC);
PPC_FUNC_IMPL(__imp__sub_8236ABDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236ABE0"))) PPC_WEAK_FUNC(sub_8236ABE0);
PPC_FUNC_IMPL(__imp__sub_8236ABE0) {
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
	// bl 0x8236a420
	sub_8236A420(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8236ac10
	if (cr0.eq) goto loc_8236AC10;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8236AC10:
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

__attribute__((alias("__imp__sub_8236AC24"))) PPC_WEAK_FUNC(sub_8236AC24);
PPC_FUNC_IMPL(__imp__sub_8236AC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236AC28"))) PPC_WEAK_FUNC(sub_8236AC28);
PPC_FUNC_IMPL(__imp__sub_8236AC28) {
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
	// bl 0x8236a488
	sub_8236A488(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8236ac58
	if (cr0.eq) goto loc_8236AC58;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8236AC58:
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

__attribute__((alias("__imp__sub_8236AC6C"))) PPC_WEAK_FUNC(sub_8236AC6C);
PPC_FUNC_IMPL(__imp__sub_8236AC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236AC70"))) PPC_WEAK_FUNC(sub_8236AC70);
PPC_FUNC_IMPL(__imp__sub_8236AC70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x8236acfc
	goto loc_8236ACFC;
loc_8236AC7C:
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - r11.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x8236ad14
	if (cr0.eq) goto loc_8236AD14;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,44(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// lwz r8,44(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// subfc r9,r8,r9
	xer.ca = ctx.r9.u32 >= ctx.r8.u32;
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8236acf8
	if (cr0.eq) goto loc_8236ACF8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x8236acf0
	if (cr6.eq) goto loc_8236ACF0;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
loc_8236ACF0:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// b 0x8236acfc
	goto loc_8236ACFC;
loc_8236ACF8:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8236ACFC:
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x8236ac7c
	if (!cr0.eq) goto loc_8236AC7C;
loc_8236AD14:
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236AD68"))) PPC_WEAK_FUNC(sub_8236AD68);
PPC_FUNC_IMPL(__imp__sub_8236AD68) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,18572
	r11.s64 = r11.s64 + 18572;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8236ada8
	if (cr0.eq) goto loc_8236ADA8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8236ADA8:
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

__attribute__((alias("__imp__sub_8236ADC4"))) PPC_WEAK_FUNC(sub_8236ADC4);
PPC_FUNC_IMPL(__imp__sub_8236ADC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236ADC8"))) PPC_WEAK_FUNC(sub_8236ADC8);
PPC_FUNC_IMPL(__imp__sub_8236ADC8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r29,48
	r30.s64 = r29.s64 + 48;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8236adfc
	goto loc_8236ADFC;
loc_8236ADE4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8236ADFC:
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
	// bne 0x8236ade4
	if (!cr0.eq) goto loc_8236ADE4;
	// lwz r11,60(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8236ae34
	if (cr6.eq) goto loc_8236AE34;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8236AE34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8236AE3C"))) PPC_WEAK_FUNC(sub_8236AE3C);
PPC_FUNC_IMPL(__imp__sub_8236AE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236AE40"))) PPC_WEAK_FUNC(sub_8236AE40);
PPC_FUNC_IMPL(__imp__sub_8236AE40) {
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
	// addi r11,r31,48
	r11.s64 = r31.s64 + 48;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8236aea8
	if (!cr0.eq) goto loc_8236AEA8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8236aa38
	sub_8236AA38(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// beq cr6,0x8236ae9c
	if (cr6.eq) goto loc_8236AE9C;
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// b 0x8236aea8
	goto loc_8236AEA8;
loc_8236AE9C:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
loc_8236AEA8:
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

__attribute__((alias("__imp__sub_8236AEC0"))) PPC_WEAK_FUNC(sub_8236AEC0);
PPC_FUNC_IMPL(__imp__sub_8236AEC0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82318130
	sub_82318130(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,21412
	ctx.r6.s64 = r11.s64 + 21412;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,920
	ctx.r5.s64 = r11.s64 + 920;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x8236af60
	if (!cr6.gt) goto loc_8236AF60;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// addi r3,r10,24
	ctx.r3.s64 = ctx.r10.s64 + 24;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r31,r11,1
	r31.u64 = r11.u64 ^ 1;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = r11.u64 ^ 1;
	// b 0x8236af90
	goto loc_8236AF90;
loc_8236AF60:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x8236af88
	if (!cr6.gt) goto loc_8236AF88;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = r11.u64 ^ 1;
	// b 0x8236af8c
	goto loc_8236AF8C;
loc_8236AF88:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8236AF8C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8236AF90:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8236aa38
	sub_8236AA38(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// stw r27,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8236AFB0"))) PPC_WEAK_FUNC(sub_8236AFB0);
PPC_FUNC_IMPL(__imp__sub_8236AFB0) {
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
	// bl 0x8236abe0
	sub_8236ABE0(ctx, base);
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

__attribute__((alias("__imp__sub_8236B014"))) PPC_WEAK_FUNC(sub_8236B014);
PPC_FUNC_IMPL(__imp__sub_8236B014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236B018"))) PPC_WEAK_FUNC(sub_8236B018);
PPC_FUNC_IMPL(__imp__sub_8236B018) {
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

__attribute__((alias("__imp__sub_8236B06C"))) PPC_WEAK_FUNC(sub_8236B06C);
PPC_FUNC_IMPL(__imp__sub_8236B06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236B070"))) PPC_WEAK_FUNC(sub_8236B070);
PPC_FUNC_IMPL(__imp__sub_8236B070) {
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
	// bl 0x8236ac28
	sub_8236AC28(ctx, base);
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

__attribute__((alias("__imp__sub_8236B0D4"))) PPC_WEAK_FUNC(sub_8236B0D4);
PPC_FUNC_IMPL(__imp__sub_8236B0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8236B0D8"))) PPC_WEAK_FUNC(sub_8236B0D8);
PPC_FUNC_IMPL(__imp__sub_8236B0D8) {
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
	// b 0x8236b108
	goto loc_8236B108;
loc_8236B0F8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8236B108:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x8236b0f8
	if (!cr6.eq) goto loc_8236B0F8;
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

__attribute__((alias("__imp__sub_8236B130"))) PPC_WEAK_FUNC(sub_8236B130);
PPC_FUNC_IMPL(__imp__sub_8236B130) {
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
	// b 0x8236b160
	goto loc_8236B160;
loc_8236B150:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8236B160:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x8236b150
	if (!cr6.eq) goto loc_8236B150;
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

__attribute__((alias("__imp__sub_8236B188"))) PPC_WEAK_FUNC(sub_8236B188);
PPC_FUNC_IMPL(__imp__sub_8236B188) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8236b1b8
	if (cr0.eq) goto loc_8236B1B8;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x8236b1d0
	goto loc_8236B1D0;
loc_8236B1B8:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8236b1e0
	if (cr0.eq) goto loc_8236B1E0;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
loc_8236B1D0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82370ed8
	sub_82370ED8(ctx, base);
	// b 0x8236b210
	goto loc_8236B210;
loc_8236B1E0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_8236B210:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236B220"))) PPC_WEAK_FUNC(sub_8236B220);
PPC_FUNC_IMPL(__imp__sub_8236B220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x8236b238
	goto loc_8236B238;
loc_8236B230:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8236B238:
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne 0x8236b230
	if (!cr0.eq) goto loc_8236B230;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8236b2d4
	if (!cr6.gt) goto loc_8236B2D4;
loc_8236B25C:
	// srawi. r10,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// ble 0x8236b27c
	if (!cr0.gt) goto loc_8236B27C;
loc_8236B26C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8236b26c
	if (!cr0.eq) goto loc_8236B26C;
	// b 0x8236b294
	goto loc_8236B294;
loc_8236B27C:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8236b294
	if (cr6.eq) goto loc_8236B294;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
loc_8236B288:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8236b288
	if (!cr0.eq) goto loc_8236B288;
loc_8236B294:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r7,44(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// subfc r9,r9,r7
	xer.ca = ctx.r7.u32 >= ctx.r9.u32;
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8236b2c8
	if (cr0.eq) goto loc_8236B2C8;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x8236b2cc
	goto loc_8236B2CC;
loc_8236B2C8:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_8236B2CC:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bgt cr6,0x8236b25c
	if (cr6.gt) goto loc_8236B25C;
loc_8236B2D4:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236B2E0"))) PPC_WEAK_FUNC(sub_8236B2E0);
PPC_FUNC_IMPL(__imp__sub_8236B2E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x8236b2f8
	goto loc_8236B2F8;
loc_8236B2F0:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8236B2F8:
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne 0x8236b2f0
	if (!cr0.eq) goto loc_8236B2F0;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8236b394
	if (!cr6.gt) goto loc_8236B394;
loc_8236B31C:
	// srawi. r10,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// ble 0x8236b33c
	if (!cr0.gt) goto loc_8236B33C;
loc_8236B32C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8236b32c
	if (!cr0.eq) goto loc_8236B32C;
	// b 0x8236b354
	goto loc_8236B354;
loc_8236B33C:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8236b354
	if (cr6.eq) goto loc_8236B354;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
loc_8236B348:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8236b348
	if (!cr0.eq) goto loc_8236B348;
loc_8236B354:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r7,44(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// subfc r9,r7,r9
	xer.ca = ctx.r9.u32 >= ctx.r7.u32;
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8236b378
	if (cr0.eq) goto loc_8236B378;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// b 0x8236b38c
	goto loc_8236B38C;
loc_8236B378:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_8236B38C:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bgt cr6,0x8236b31c
	if (cr6.gt) goto loc_8236B31C;
loc_8236B394:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236B3A0"))) PPC_WEAK_FUNC(sub_8236B3A0);
PPC_FUNC_IMPL(__imp__sub_8236B3A0) {
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
	// b 0x8236b3d0
	goto loc_8236B3D0;
loc_8236B3C0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8236B3D0:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x8236b3c0
	if (!cr6.eq) goto loc_8236B3C0;
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

__attribute__((alias("__imp__sub_8236B3F8"))) PPC_WEAK_FUNC(sub_8236B3F8);
PPC_FUNC_IMPL(__imp__sub_8236B3F8) {
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
	// b 0x8236b428
	goto loc_8236B428;
loc_8236B418:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8236B428:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x8236b418
	if (!cr6.eq) goto loc_8236B418;
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

