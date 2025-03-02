#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_822B4D48"))) PPC_WEAK_FUNC(sub_822B4D48);
PPC_FUNC_IMPL(__imp__sub_822B4D48) {
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
	// addi r31,r11,8228
	r31.s64 = r11.s64 + 8228;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r30,r11,920
	r30.s64 = r11.s64 + 920;
	// bl 0x82318130
	sub_82318130(ctx, base);
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

__attribute__((alias("__imp__sub_822B4D9C"))) PPC_WEAK_FUNC(sub_822B4D9C);
PPC_FUNC_IMPL(__imp__sub_822B4D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B4DA0"))) PPC_WEAK_FUNC(sub_822B4DA0);
PPC_FUNC_IMPL(__imp__sub_822B4DA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x822b4540
	sub_822B4540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B4DA4"))) PPC_WEAK_FUNC(sub_822B4DA4);
PPC_FUNC_IMPL(__imp__sub_822B4DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B4DA8"))) PPC_WEAK_FUNC(sub_822B4DA8);
PPC_FUNC_IMPL(__imp__sub_822B4DA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x822b45e8
	sub_822B45E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B4DAC"))) PPC_WEAK_FUNC(sub_822B4DAC);
PPC_FUNC_IMPL(__imp__sub_822B4DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B4DB0"))) PPC_WEAK_FUNC(sub_822B4DB0);
PPC_FUNC_IMPL(__imp__sub_822B4DB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x822b4680
	sub_822B4680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B4DB4"))) PPC_WEAK_FUNC(sub_822B4DB4);
PPC_FUNC_IMPL(__imp__sub_822B4DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B4DB8"))) PPC_WEAK_FUNC(sub_822B4DB8);
PPC_FUNC_IMPL(__imp__sub_822B4DB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,604(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 604);
	// b 0x822b38f8
	sub_822B38F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B4DC0"))) PPC_WEAK_FUNC(sub_822B4DC0);
PPC_FUNC_IMPL(__imp__sub_822B4DC0) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,5088(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 5088);
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,512
	ctx.r3.s64 = r29.s64 + 512;
	// bl 0x822c1b48
	sub_822C1B48(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r28,1
	r28.s64 = 1;
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// addi r25,r31,80
	r25.s64 = r31.s64 + 80;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b4e4c
	if (cr0.eq) goto loc_822B4E4C;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B4E4C:
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 16);
	f0.f64 = double(temp.f32);
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
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
	// beq 0x822b4e88
	if (cr0.eq) goto loc_822B4E88;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B4E88:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822B4DC8"))) PPC_WEAK_FUNC(sub_822B4DC8);
PPC_FUNC_IMPL(__imp__sub_822B4DC8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,512
	ctx.r3.s64 = r29.s64 + 512;
	// bl 0x822c1b48
	sub_822C1B48(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r28,1
	r28.s64 = 1;
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// addi r25,r31,80
	r25.s64 = r31.s64 + 80;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b4e4c
	if (cr0.eq) goto loc_822B4E4C;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B4E4C:
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 16);
	f0.f64 = double(temp.f32);
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
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
	// beq 0x822b4e88
	if (cr0.eq) goto loc_822B4E88;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B4E88:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822B4E9C"))) PPC_WEAK_FUNC(sub_822B4E9C);
PPC_FUNC_IMPL(__imp__sub_822B4E9C) {
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

__attribute__((alias("__imp__sub_822B4EC4"))) PPC_WEAK_FUNC(sub_822B4EC4);
PPC_FUNC_IMPL(__imp__sub_822B4EC4) {
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

__attribute__((alias("__imp__sub_822B4EEC"))) PPC_WEAK_FUNC(sub_822B4EEC);
PPC_FUNC_IMPL(__imp__sub_822B4EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B4EF0"))) PPC_WEAK_FUNC(sub_822B4EF0);
PPC_FUNC_IMPL(__imp__sub_822B4EF0) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,16016
	ctx.r4.s64 = r11.s64 + 16016;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x8236b8b0
	sub_8236B8B0(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b4f3c
	if (cr0.eq) goto loc_822B4F3C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B4F3C:
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

__attribute__((alias("__imp__sub_822B4F60"))) PPC_WEAK_FUNC(sub_822B4F60);
PPC_FUNC_IMPL(__imp__sub_822B4F60) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	r11.s64 = 0;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82284378
	sub_82284378(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822B4FB8"))) PPC_WEAK_FUNC(sub_822B4FB8);
PPC_FUNC_IMPL(__imp__sub_822B4FB8) {
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
	// li r10,192
	ctx.r10.s64 = 192;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,192
	ctx.r3.s64 = r11.s64 * 192;
	// b 0x82355020
	sub_82355020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B4FDC"))) PPC_WEAK_FUNC(sub_822B4FDC);
PPC_FUNC_IMPL(__imp__sub_822B4FDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B4FE0"))) PPC_WEAK_FUNC(sub_822B4FE0);
PPC_FUNC_IMPL(__imp__sub_822B4FE0) {
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
	// beq cr6,0x822b5058
	if (cr6.eq) goto loc_822B5058;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r30,r11,920
	r30.s64 = r11.s64 + 920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,1640
	r29.s64 = r11.s64 + 1640;
loc_822B500C:
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
	// bne 0x822b50b0
	if (!cr0.eq) goto loc_822B50B0;
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
	// bne cr6,0x822b500c
	if (!cr6.eq) goto loc_822B500C;
loc_822B5058:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822b50a8
	if (cr0.eq) goto loc_822B50A8;
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
	// beq 0x822b50a8
	if (cr0.eq) goto loc_822B50A8;
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
	// bl 0x822b4fe0
	sub_822B4FE0(ctx, base);
	// b 0x822b50b0
	goto loc_822B50B0;
loc_822B50A8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_822B50B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822B50B8"))) PPC_WEAK_FUNC(sub_822B50B8);
PPC_FUNC_IMPL(__imp__sub_822B50B8) {
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
	// bl 0x822b4990
	sub_822B4990(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b50e8
	if (cr0.eq) goto loc_822B50E8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_822B50E8:
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

__attribute__((alias("__imp__sub_822B50FC"))) PPC_WEAK_FUNC(sub_822B50FC);
PPC_FUNC_IMPL(__imp__sub_822B50FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B5100"))) PPC_WEAK_FUNC(sub_822B5100);
PPC_FUNC_IMPL(__imp__sub_822B5100) {
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
	// addi r31,r11,21412
	r31.s64 = r11.s64 + 21412;
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

__attribute__((alias("__imp__sub_822B5158"))) PPC_WEAK_FUNC(sub_822B5158);
PPC_FUNC_IMPL(__imp__sub_822B5158) {
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
	// addi r31,r11,23020
	r31.s64 = r11.s64 + 23020;
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

__attribute__((alias("__imp__sub_822B51B0"))) PPC_WEAK_FUNC(sub_822B51B0);
PPC_FUNC_IMPL(__imp__sub_822B51B0) {
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
	// beq cr6,0x822b51e8
	if (cr6.eq) goto loc_822B51E8;
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
loc_822B51E8:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x822b5218
	if (!cr6.eq) goto loc_822B5218;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,23088
	ctx.r6.s64 = r11.s64 + 23088;
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
	// bl 0x822b4908
	sub_822B4908(ctx, base);
loc_822B5218:
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

__attribute__((alias("__imp__sub_822B522C"))) PPC_WEAK_FUNC(sub_822B522C);
PPC_FUNC_IMPL(__imp__sub_822B522C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B5230"))) PPC_WEAK_FUNC(sub_822B5230);
PPC_FUNC_IMPL(__imp__sub_822B5230) {
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
	// beq cr6,0x822b5280
	if (cr6.eq) goto loc_822B5280;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x822b5268
	if (cr6.eq) goto loc_822B5268;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_822B5268:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// beq cr6,0x822b5280
	if (cr6.eq) goto loc_822B5280;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_822B5280:
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

__attribute__((alias("__imp__sub_822B5298"))) PPC_WEAK_FUNC(sub_822B5298);
PPC_FUNC_IMPL(__imp__sub_822B5298) {
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
	// bne cr6,0x822b52e4
	if (!cr6.eq) goto loc_822B52E4;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,23152
	ctx.r6.s64 = r11.s64 + 23152;
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
	// bl 0x822b5230
	sub_822B5230(ctx, base);
loc_822B52E4:
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

__attribute__((alias("__imp__sub_822B52F8"))) PPC_WEAK_FUNC(sub_822B52F8);
PPC_FUNC_IMPL(__imp__sub_822B52F8) {
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
	// beq cr6,0x822b5364
	if (cr6.eq) goto loc_822B5364;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822b5340
	if (cr6.eq) goto loc_822B5340;
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
loc_822B5340:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// beq cr6,0x822b5364
	if (cr6.eq) goto loc_822B5364;
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
loc_822B5364:
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

__attribute__((alias("__imp__sub_822B537C"))) PPC_WEAK_FUNC(sub_822B537C);
PPC_FUNC_IMPL(__imp__sub_822B537C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B5380"))) PPC_WEAK_FUNC(sub_822B5380);
PPC_FUNC_IMPL(__imp__sub_822B5380) {
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
	// beq cr6,0x822b53b8
	if (cr6.eq) goto loc_822B53B8;
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
loc_822B53B8:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x822b53e8
	if (!cr6.eq) goto loc_822B53E8;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,23208
	ctx.r6.s64 = r11.s64 + 23208;
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
	// bl 0x822b52f8
	sub_822B52F8(ctx, base);
loc_822B53E8:
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

__attribute__((alias("__imp__sub_822B53FC"))) PPC_WEAK_FUNC(sub_822B53FC);
PPC_FUNC_IMPL(__imp__sub_822B53FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B5400"))) PPC_WEAK_FUNC(sub_822B5400);
PPC_FUNC_IMPL(__imp__sub_822B5400) {
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
	// beq cr6,0x822b546c
	if (cr6.eq) goto loc_822B546C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822b5448
	if (cr6.eq) goto loc_822B5448;
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
loc_822B5448:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// beq cr6,0x822b546c
	if (cr6.eq) goto loc_822B546C;
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
loc_822B546C:
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

__attribute__((alias("__imp__sub_822B5484"))) PPC_WEAK_FUNC(sub_822B5484);
PPC_FUNC_IMPL(__imp__sub_822B5484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B5488"))) PPC_WEAK_FUNC(sub_822B5488);
PPC_FUNC_IMPL(__imp__sub_822B5488) {
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
	// beq cr6,0x822b54c0
	if (cr6.eq) goto loc_822B54C0;
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
loc_822B54C0:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x822b54f0
	if (!cr6.eq) goto loc_822B54F0;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,23272
	ctx.r6.s64 = r11.s64 + 23272;
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
	// bl 0x822b5400
	sub_822B5400(ctx, base);
loc_822B54F0:
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

__attribute__((alias("__imp__sub_822B5504"))) PPC_WEAK_FUNC(sub_822B5504);
PPC_FUNC_IMPL(__imp__sub_822B5504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B5508"))) PPC_WEAK_FUNC(sub_822B5508);
PPC_FUNC_IMPL(__imp__sub_822B5508) {
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
	// bl 0x822b4540
	sub_822B4540(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5538
	if (cr0.eq) goto loc_822B5538;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822B5538:
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

__attribute__((alias("__imp__sub_822B5554"))) PPC_WEAK_FUNC(sub_822B5554);
PPC_FUNC_IMPL(__imp__sub_822B5554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B5558"))) PPC_WEAK_FUNC(sub_822B5558);
PPC_FUNC_IMPL(__imp__sub_822B5558) {
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
	// bl 0x822b45e8
	sub_822B45E8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5588
	if (cr0.eq) goto loc_822B5588;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822B5588:
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

__attribute__((alias("__imp__sub_822B55A4"))) PPC_WEAK_FUNC(sub_822B55A4);
PPC_FUNC_IMPL(__imp__sub_822B55A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B55A8"))) PPC_WEAK_FUNC(sub_822B55A8);
PPC_FUNC_IMPL(__imp__sub_822B55A8) {
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
	// bl 0x822b4680
	sub_822B4680(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b55d8
	if (cr0.eq) goto loc_822B55D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822B55D8:
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

__attribute__((alias("__imp__sub_822B55F4"))) PPC_WEAK_FUNC(sub_822B55F4);
PPC_FUNC_IMPL(__imp__sub_822B55F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B55F8"))) PPC_WEAK_FUNC(sub_822B55F8);
PPC_FUNC_IMPL(__imp__sub_822B55F8) {
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
	// bl 0x822b4728
	sub_822B4728(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5628
	if (cr0.eq) goto loc_822B5628;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822B5628:
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

__attribute__((alias("__imp__sub_822B5644"))) PPC_WEAK_FUNC(sub_822B5644);
PPC_FUNC_IMPL(__imp__sub_822B5644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B5648"))) PPC_WEAK_FUNC(sub_822B5648);
PPC_FUNC_IMPL(__imp__sub_822B5648) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// b 0x822b5684
	goto loc_822B5684;
loc_822B5668:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,192
	r31.s64 = r31.s64 + 192;
loc_822B5684:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x822b5668
	if (!cr6.eq) goto loc_822B5668;
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

__attribute__((alias("__imp__sub_822B56A4"))) PPC_WEAK_FUNC(sub_822B56A4);
PPC_FUNC_IMPL(__imp__sub_822B56A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B56A8"))) PPC_WEAK_FUNC(sub_822B56A8);
PPC_FUNC_IMPL(__imp__sub_822B56A8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r30,340
	r29.s64 = r30.s64 + 340;
loc_822B56C0:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
	// bl 0x822bebf8
	sub_822BEBF8(ctx, base);
	// addi r31,r31,192
	r31.s64 = r31.s64 + 192;
	// cmpwi cr6,r31,384
	cr6.compare<int32_t>(r31.s32, 384, xer);
	// blt cr6,0x822b56c0
	if (cr6.lt) goto loc_822B56C0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822B56E4"))) PPC_WEAK_FUNC(sub_822B56E4);
PPC_FUNC_IMPL(__imp__sub_822B56E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B56E8"))) PPC_WEAK_FUNC(sub_822B56E8);
PPC_FUNC_IMPL(__imp__sub_822B56E8) {
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
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mulli r11,r5,192
	r11.s64 = ctx.r5.s64 * 192;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822bd420
	sub_822BD420(ctx, base);
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

__attribute__((alias("__imp__sub_822B5724"))) PPC_WEAK_FUNC(sub_822B5724);
PPC_FUNC_IMPL(__imp__sub_822B5724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B5728"))) PPC_WEAK_FUNC(sub_822B5728);
PPC_FUNC_IMPL(__imp__sub_822B5728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mulli r10,r4,24
	ctx.r10.s64 = ctx.r4.s64 * 24;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x822b5748
	if (!cr6.eq) goto loc_822B5748;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_822B5748:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B5750"))) PPC_WEAK_FUNC(sub_822B5750);
PPC_FUNC_IMPL(__imp__sub_822B5750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mulli r11,r4,192
	r11.s64 = ctx.r4.s64 * 192;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B5760"))) PPC_WEAK_FUNC(sub_822B5760);
PPC_FUNC_IMPL(__imp__sub_822B5760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mulli r10,r4,192
	ctx.r10.s64 = ctx.r4.s64 * 192;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8227d638
	sub_8227D638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B5770"))) PPC_WEAK_FUNC(sub_822B5770);
PPC_FUNC_IMPL(__imp__sub_822B5770) {
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
	// mulli r10,r4,192
	ctx.r10.s64 = ctx.r4.s64 * 192;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x822bd420
	sub_822BD420(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// lwz r4,604(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 604);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822bf1f8
	sub_822BF1F8(ctx, base);
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

__attribute__((alias("__imp__sub_822B57C0"))) PPC_WEAK_FUNC(sub_822B57C0);
PPC_FUNC_IMPL(__imp__sub_822B57C0) {
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
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x82330a60
	sub_82330A60(ctx, base);
	// lwz r11,596(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 596);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x822b5844
	if (!cr6.gt) goto loc_822B5844;
	// li r30,0
	r30.s64 = 0;
loc_822B57EC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b5770
	sub_822B5770(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bd420
	sub_822BD420(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x8227d638
	sub_8227D638(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82330dc8
	sub_82330DC8(ctx, base);
	// lwz r11,596(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 596);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,192
	r30.s64 = r30.s64 + 192;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x822b57ec
	if (cr6.lt) goto loc_822B57EC;
loc_822B5844:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822B584C"))) PPC_WEAK_FUNC(sub_822B584C);
PPC_FUNC_IMPL(__imp__sub_822B584C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B5850"))) PPC_WEAK_FUNC(sub_822B5850);
PPC_FUNC_IMPL(__imp__sub_822B5850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r16,5264(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 5264);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,-9528(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9528);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-9532
	r28.s64 = ctx.r10.s64 + -9532;
	// bne 0x822b58a0
	if (!cr0.eq) goto loc_822B58A0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-9528(r30)
	PPC_STORE_U32(r30.u32 + -9528, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,30732
	ctx.r4.s64 = r11.s64 + 30732;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9528(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9528);
loc_822B58A0:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// bne 0x822b58d4
	if (!cr0.eq) goto loc_822B58D4;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-9528(r30)
	PPC_STORE_U32(r30.u32 + -9528, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,5232
	ctx.r4.s64 = r11.s64 + 5232;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// stw r3,-9536(r29)
	PPC_STORE_U32(r29.u32 + -9536, ctx.r3.u32);
	// b 0x822b58d8
	goto loc_822B58D8;
loc_822B58D4:
	// lwz r3,-9536(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9536);
loc_822B58D8:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,-9608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5934
	if (cr0.eq) goto loc_822B5934;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x822b592c
	if (!cr0.eq) goto loc_822B592C;
	// lwz r3,44(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// bl 0x8227d638
	sub_8227D638(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x822b5934
	if (!cr0.gt) goto loc_822B5934;
	// lis r11,-32128
	r11.s64 = -2105540608;
	// lwz r3,23616(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 23616);
	// bl 0x82285050
	sub_82285050(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5934
	if (cr0.eq) goto loc_822B5934;
loc_822B592C:
	// li r11,1
	r11.s64 = 1;
	// b 0x822b5938
	goto loc_822B5938;
loc_822B5934:
	// li r11,0
	r11.s64 = 0;
loc_822B5938:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822B5858"))) PPC_WEAK_FUNC(sub_822B5858);
PPC_FUNC_IMPL(__imp__sub_822B5858) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,-9528(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9528);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-9532
	r28.s64 = ctx.r10.s64 + -9532;
	// bne 0x822b58a0
	if (!cr0.eq) goto loc_822B58A0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-9528(r30)
	PPC_STORE_U32(r30.u32 + -9528, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,30732
	ctx.r4.s64 = r11.s64 + 30732;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9528(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9528);
loc_822B58A0:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// bne 0x822b58d4
	if (!cr0.eq) goto loc_822B58D4;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-9528(r30)
	PPC_STORE_U32(r30.u32 + -9528, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,5232
	ctx.r4.s64 = r11.s64 + 5232;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// stw r3,-9536(r29)
	PPC_STORE_U32(r29.u32 + -9536, ctx.r3.u32);
	// b 0x822b58d8
	goto loc_822B58D8;
loc_822B58D4:
	// lwz r3,-9536(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9536);
loc_822B58D8:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,-9608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5934
	if (cr0.eq) goto loc_822B5934;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x822b592c
	if (!cr0.eq) goto loc_822B592C;
	// lwz r3,44(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// bl 0x8227d638
	sub_8227D638(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x822b5934
	if (!cr0.gt) goto loc_822B5934;
	// lis r11,-32128
	r11.s64 = -2105540608;
	// lwz r3,23616(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 23616);
	// bl 0x82285050
	sub_82285050(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5934
	if (cr0.eq) goto loc_822B5934;
loc_822B592C:
	// li r11,1
	r11.s64 = 1;
	// b 0x822b5938
	goto loc_822B5938;
loc_822B5934:
	// li r11,0
	r11.s64 = 0;
loc_822B5938:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822B5944"))) PPC_WEAK_FUNC(sub_822B5944);
PPC_FUNC_IMPL(__imp__sub_822B5944) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9528
	r11.s64 = r11.s64 + -9528;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9528
	ctx.r10.s64 = ctx.r10.s64 + -9528;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B596C"))) PPC_WEAK_FUNC(sub_822B596C);
PPC_FUNC_IMPL(__imp__sub_822B596C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9528
	r11.s64 = r11.s64 + -9528;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9528
	ctx.r10.s64 = ctx.r10.s64 + -9528;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B5994"))) PPC_WEAK_FUNC(sub_822B5994);
PPC_FUNC_IMPL(__imp__sub_822B5994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B5998"))) PPC_WEAK_FUNC(sub_822B5998);
PPC_FUNC_IMPL(__imp__sub_822B5998) {
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
	// lwz r16,5352(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 5352);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,596(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 596);
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x822b5aa4
	if (!cr6.gt) goto loc_822B5AA4;
	// li r26,0
	r26.s64 = 0;
loc_822B59E8:
	// lwz r11,44(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// add r11,r26,r11
	r11.u64 = r26.u64 + r11.u64;
	// lwz r11,176(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822b5a0c
	if (cr0.eq) goto loc_822B5A0C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_822B5A0C:
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5a38
	if (cr0.eq) goto loc_822B5A38;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B5A38:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// li r28,3
	r28.s64 = 3;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x822b5a90
	if (!cr6.gt) goto loc_822B5A90;
	// li r29,24
	r29.s64 = 24;
loc_822B5A4C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8231a748
	sub_8231A748(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5a7c
	if (cr0.eq) goto loc_822B5A7C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B5A7C:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x822b5a4c
	if (cr6.lt) goto loc_822B5A4C;
loc_822B5A90:
	// lwz r11,596(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 596);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,192
	r26.s64 = r26.s64 + 192;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x822b59e8
	if (cr6.lt) goto loc_822B59E8;
loc_822B5AA4:
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5ac4
	if (cr0.eq) goto loc_822B5AC4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B5AC4:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_822B59A0"))) PPC_WEAK_FUNC(sub_822B59A0);
PPC_FUNC_IMPL(__imp__sub_822B59A0) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,596(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 596);
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x822b5aa4
	if (!cr6.gt) goto loc_822B5AA4;
	// li r26,0
	r26.s64 = 0;
loc_822B59E8:
	// lwz r11,44(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// add r11,r26,r11
	r11.u64 = r26.u64 + r11.u64;
	// lwz r11,176(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822b5a0c
	if (cr0.eq) goto loc_822B5A0C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_822B5A0C:
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5a38
	if (cr0.eq) goto loc_822B5A38;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B5A38:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// li r28,3
	r28.s64 = 3;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x822b5a90
	if (!cr6.gt) goto loc_822B5A90;
	// li r29,24
	r29.s64 = 24;
loc_822B5A4C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8231a748
	sub_8231A748(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5a7c
	if (cr0.eq) goto loc_822B5A7C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B5A7C:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x822b5a4c
	if (cr6.lt) goto loc_822B5A4C;
loc_822B5A90:
	// lwz r11,596(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 596);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,192
	r26.s64 = r26.s64 + 192;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x822b59e8
	if (cr6.lt) goto loc_822B59E8;
loc_822B5AA4:
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5ac4
	if (cr0.eq) goto loc_822B5AC4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B5AC4:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_822B5ACC"))) PPC_WEAK_FUNC(sub_822B5ACC);
PPC_FUNC_IMPL(__imp__sub_822B5ACC) {
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

__attribute__((alias("__imp__sub_822B5AF4"))) PPC_WEAK_FUNC(sub_822B5AF4);
PPC_FUNC_IMPL(__imp__sub_822B5AF4) {
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

__attribute__((alias("__imp__sub_822B5B1C"))) PPC_WEAK_FUNC(sub_822B5B1C);
PPC_FUNC_IMPL(__imp__sub_822B5B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B5B20"))) PPC_WEAK_FUNC(sub_822B5B20);
PPC_FUNC_IMPL(__imp__sub_822B5B20) {
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
	// lwz r16,5440(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 5440);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,596(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 596);
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x822b5c2c
	if (!cr6.gt) goto loc_822B5C2C;
	// li r26,0
	r26.s64 = 0;
loc_822B5B70:
	// lwz r11,44(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// add r11,r26,r11
	r11.u64 = r26.u64 + r11.u64;
	// lwz r11,188(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822b5b94
	if (cr0.eq) goto loc_822B5B94;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_822B5B94:
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5bc0
	if (cr0.eq) goto loc_822B5BC0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B5BC0:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// li r28,3
	r28.s64 = 3;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x822b5c18
	if (!cr6.gt) goto loc_822B5C18;
	// li r29,24
	r29.s64 = 24;
loc_822B5BD4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8231a748
	sub_8231A748(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5c04
	if (cr0.eq) goto loc_822B5C04;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B5C04:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x822b5bd4
	if (cr6.lt) goto loc_822B5BD4;
loc_822B5C18:
	// lwz r11,596(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 596);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,192
	r26.s64 = r26.s64 + 192;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x822b5b70
	if (cr6.lt) goto loc_822B5B70;
loc_822B5C2C:
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5c4c
	if (cr0.eq) goto loc_822B5C4C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B5C4C:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_822B5B28"))) PPC_WEAK_FUNC(sub_822B5B28);
PPC_FUNC_IMPL(__imp__sub_822B5B28) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,596(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 596);
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x822b5c2c
	if (!cr6.gt) goto loc_822B5C2C;
	// li r26,0
	r26.s64 = 0;
loc_822B5B70:
	// lwz r11,44(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// add r11,r26,r11
	r11.u64 = r26.u64 + r11.u64;
	// lwz r11,188(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822b5b94
	if (cr0.eq) goto loc_822B5B94;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_822B5B94:
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5bc0
	if (cr0.eq) goto loc_822B5BC0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B5BC0:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// li r28,3
	r28.s64 = 3;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x822b5c18
	if (!cr6.gt) goto loc_822B5C18;
	// li r29,24
	r29.s64 = 24;
loc_822B5BD4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8231a748
	sub_8231A748(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5c04
	if (cr0.eq) goto loc_822B5C04;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B5C04:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x822b5bd4
	if (cr6.lt) goto loc_822B5BD4;
loc_822B5C18:
	// lwz r11,596(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 596);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,192
	r26.s64 = r26.s64 + 192;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x822b5b70
	if (cr6.lt) goto loc_822B5B70;
loc_822B5C2C:
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5c4c
	if (cr0.eq) goto loc_822B5C4C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B5C4C:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_822B5C54"))) PPC_WEAK_FUNC(sub_822B5C54);
PPC_FUNC_IMPL(__imp__sub_822B5C54) {
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

__attribute__((alias("__imp__sub_822B5C7C"))) PPC_WEAK_FUNC(sub_822B5C7C);
PPC_FUNC_IMPL(__imp__sub_822B5C7C) {
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

__attribute__((alias("__imp__sub_822B5CA4"))) PPC_WEAK_FUNC(sub_822B5CA4);
PPC_FUNC_IMPL(__imp__sub_822B5CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B5CA8"))) PPC_WEAK_FUNC(sub_822B5CA8);
PPC_FUNC_IMPL(__imp__sub_822B5CA8) {
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
	// lwz r16,5648(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 5648);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82273548
	sub_82273548(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r26,r11,16016
	r26.s64 = r11.s64 + 16016;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8236b8b0
	sub_8236B8B0(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x822b5e10
	if (!cr6.eq) goto loc_822B5E10;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-9512(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9512);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-9516
	r28.s64 = ctx.r10.s64 + -9516;
	// bne 0x822b5d28
	if (!cr0.eq) goto loc_822B5D28;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-9512(r30)
	PPC_STORE_U32(r30.u32 + -9512, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,5576
	ctx.r4.s64 = r11.s64 + 5576;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9512(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9512);
loc_822B5D28:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9520
	r29.s64 = ctx.r10.s64 + -9520;
	// bne 0x822b5d50
	if (!cr0.eq) goto loc_822B5D50;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-9512(r30)
	PPC_STORE_U32(r30.u32 + -9512, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,5560
	ctx.r4.s64 = r11.s64 + 5560;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822B5D50:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-2968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r11,5540
	ctx.r4.s64 = r11.s64 + 5540;
	// bl 0x822b5100
	sub_822B5100(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x823157d0
	sub_823157D0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5d9c
	if (cr0.eq) goto loc_822B5D9C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B5D9C:
	// lwz r11,-9512(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9512);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822b5dd4
	if (!cr0.eq) goto loc_822B5DD4;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-9512(r30)
	PPC_STORE_U32(r30.u32 + -9512, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,5512
	ctx.r4.s64 = r11.s64 + 5512;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// stw r3,-9524(r29)
	PPC_STORE_U32(r29.u32 + -9524, ctx.r3.u32);
	// b 0x822b5dd8
	goto loc_822B5DD8;
loc_822B5DD4:
	// lwz r3,-9524(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9524);
loc_822B5DD8:
	// li r11,1
	r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5e04
	if (cr0.eq) goto loc_822B5E04;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B5E04:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8236b858
	sub_8236B858(ctx, base);
loc_822B5E10:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5e24
	if (cr0.eq) goto loc_822B5E24;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B5E24:
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
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822B5CB0"))) PPC_WEAK_FUNC(sub_822B5CB0);
PPC_FUNC_IMPL(__imp__sub_822B5CB0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82273548
	sub_82273548(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r26,r11,16016
	r26.s64 = r11.s64 + 16016;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8236b8b0
	sub_8236B8B0(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x822b5e10
	if (!cr6.eq) goto loc_822B5E10;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-9512(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9512);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r28,r10,-9516
	r28.s64 = ctx.r10.s64 + -9516;
	// bne 0x822b5d28
	if (!cr0.eq) goto loc_822B5D28;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-9512(r30)
	PPC_STORE_U32(r30.u32 + -9512, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,5576
	ctx.r4.s64 = r11.s64 + 5576;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9512(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9512);
loc_822B5D28:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9520
	r29.s64 = ctx.r10.s64 + -9520;
	// bne 0x822b5d50
	if (!cr0.eq) goto loc_822B5D50;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-9512(r30)
	PPC_STORE_U32(r30.u32 + -9512, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,5560
	ctx.r4.s64 = r11.s64 + 5560;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822B5D50:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-2968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r11,5540
	ctx.r4.s64 = r11.s64 + 5540;
	// bl 0x822b5100
	sub_822B5100(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x823157d0
	sub_823157D0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5d9c
	if (cr0.eq) goto loc_822B5D9C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B5D9C:
	// lwz r11,-9512(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9512);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822b5dd4
	if (!cr0.eq) goto loc_822B5DD4;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-9512(r30)
	PPC_STORE_U32(r30.u32 + -9512, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,5512
	ctx.r4.s64 = r11.s64 + 5512;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// stw r3,-9524(r29)
	PPC_STORE_U32(r29.u32 + -9524, ctx.r3.u32);
	// b 0x822b5dd8
	goto loc_822B5DD8;
loc_822B5DD4:
	// lwz r3,-9524(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9524);
loc_822B5DD8:
	// li r11,1
	r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5e04
	if (cr0.eq) goto loc_822B5E04;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B5E04:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8236b858
	sub_8236B858(ctx, base);
loc_822B5E10:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5e24
	if (cr0.eq) goto loc_822B5E24;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B5E24:
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
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822B5E40"))) PPC_WEAK_FUNC(sub_822B5E40);
PPC_FUNC_IMPL(__imp__sub_822B5E40) {
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

__attribute__((alias("__imp__sub_822B5E68"))) PPC_WEAK_FUNC(sub_822B5E68);
PPC_FUNC_IMPL(__imp__sub_822B5E68) {
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

__attribute__((alias("__imp__sub_822B5E90"))) PPC_WEAK_FUNC(sub_822B5E90);
PPC_FUNC_IMPL(__imp__sub_822B5E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9512
	r11.s64 = r11.s64 + -9512;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9512
	ctx.r10.s64 = ctx.r10.s64 + -9512;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B5EB8"))) PPC_WEAK_FUNC(sub_822B5EB8);
PPC_FUNC_IMPL(__imp__sub_822B5EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9512
	r11.s64 = r11.s64 + -9512;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9512
	ctx.r10.s64 = ctx.r10.s64 + -9512;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B5EE0"))) PPC_WEAK_FUNC(sub_822B5EE0);
PPC_FUNC_IMPL(__imp__sub_822B5EE0) {
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

__attribute__((alias("__imp__sub_822B5F08"))) PPC_WEAK_FUNC(sub_822B5F08);
PPC_FUNC_IMPL(__imp__sub_822B5F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9512
	r11.s64 = r11.s64 + -9512;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9512
	ctx.r10.s64 = ctx.r10.s64 + -9512;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B5F30"))) PPC_WEAK_FUNC(sub_822B5F30);
PPC_FUNC_IMPL(__imp__sub_822B5F30) {
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

__attribute__((alias("__imp__sub_822B5F58"))) PPC_WEAK_FUNC(sub_822B5F58);
PPC_FUNC_IMPL(__imp__sub_822B5F58) {
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
	// lwz r16,5824(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 5824);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r11,5784
	ctx.r4.s64 = r11.s64 + 5784;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,16016
	ctx.r4.s64 = r11.s64 + 16016;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8236b8b0
	sub_8236B8B0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5fcc
	if (cr0.eq) goto loc_822B5FCC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B5FCC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,18572
	r11.s64 = r11.s64 + 18572;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,18888
	r11.s64 = r11.s64 + 18888;
	// lbz r11,36(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 36);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822b6000
	if (cr0.eq) goto loc_822B6000;
	// li r11,1
	r11.s64 = 1;
	// stb r11,614(r28)
	PPC_STORE_U8(r28.u32 + 614, r11.u8);
	// b 0x822b6004
	goto loc_822B6004;
loc_822B6000:
	// bl 0x822b5cb0
	sub_822B5CB0(ctx, base);
loc_822B6004:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822B5F60"))) PPC_WEAK_FUNC(sub_822B5F60);
PPC_FUNC_IMPL(__imp__sub_822B5F60) {
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
	// li r29,0
	r29.s64 = 0;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r11,5784
	ctx.r4.s64 = r11.s64 + 5784;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,16016
	ctx.r4.s64 = r11.s64 + 16016;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8236b8b0
	sub_8236B8B0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b5fcc
	if (cr0.eq) goto loc_822B5FCC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B5FCC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,18572
	r11.s64 = r11.s64 + 18572;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,18888
	r11.s64 = r11.s64 + 18888;
	// lbz r11,36(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 36);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822b6000
	if (cr0.eq) goto loc_822B6000;
	// li r11,1
	r11.s64 = 1;
	// stb r11,614(r28)
	PPC_STORE_U8(r28.u32 + 614, r11.u8);
	// b 0x822b6004
	goto loc_822B6004;
loc_822B6000:
	// bl 0x822b5cb0
	sub_822B5CB0(ctx, base);
loc_822B6004:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822B6018"))) PPC_WEAK_FUNC(sub_822B6018);
PPC_FUNC_IMPL(__imp__sub_822B6018) {
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

__attribute__((alias("__imp__sub_822B6040"))) PPC_WEAK_FUNC(sub_822B6040);
PPC_FUNC_IMPL(__imp__sub_822B6040) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b608c
	if (cr0.eq) goto loc_822B608C;
	// lbz r11,614(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 614);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822b608c
	if (cr0.eq) goto loc_822B608C;
	// stb r31,614(r29)
	PPC_STORE_U8(r29.u32 + 614, r31.u8);
	// bl 0x822b5cb0
	sub_822B5CB0(ctx, base);
loc_822B608C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822B60A0"))) PPC_WEAK_FUNC(sub_822B60A0);
PPC_FUNC_IMPL(__imp__sub_822B60A0) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r28,0
	r28.s64 = 0;
	// addi r4,r11,-8744
	ctx.r4.s64 = r11.s64 + -8744;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// lwz r3,-2968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// bl 0x822b5158
	sub_822B5158(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x822b6104
	if (cr0.eq) goto loc_822B6104;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x822b6100
	if (cr0.eq) goto loc_822B6100;
	// bl 0x822f5e38
	sub_822F5E38(ctx, base);
	// b 0x822b6104
	goto loc_822B6104;
loc_822B6100:
	// bl 0x822f5e50
	sub_822F5E50(ctx, base);
loc_822B6104:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822B6118"))) PPC_WEAK_FUNC(sub_822B6118);
PPC_FUNC_IMPL(__imp__sub_822B6118) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,5928
	r29.s64 = r11.s64 + 5928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8231a3c8
	sub_8231A3C8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,5916
	ctx.r4.s64 = r11.s64 + 5916;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8231d398
	sub_8231D398(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,5904
	ctx.r4.s64 = r11.s64 + 5904;
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,596(r31)
	PPC_STORE_U32(r31.u32 + 596, r11.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,5888
	ctx.r4.s64 = r11.s64 + 5888;
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
	// bl 0x82315578
	sub_82315578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822d6c90
	sub_822D6C90(ctx, base);
	// li r30,0
	r30.s64 = 0;
loc_822B6228:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x822bd6e8
	sub_822BD6E8(ctx, base);
	// addi r30,r30,192
	r30.s64 = r30.s64 + 192;
	// cmpwi cr6,r30,384
	cr6.compare<int32_t>(r30.s32, 384, xer);
	// blt cr6,0x822b6228
	if (cr6.lt) goto loc_822B6228;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822B6248"))) PPC_WEAK_FUNC(sub_822B6248);
PPC_FUNC_IMPL(__imp__sub_822B6248) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,5984(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 5984);
	// mflr r12
	// bl 0x8239bce4
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r23,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r23.u32);
	// bl 0x822b4cf0
	sub_822B4CF0(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r6,r11,23088
	ctx.r6.s64 = r11.s64 + 23088;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,1688
	ctx.r5.s64 = r11.s64 + 1688;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,28(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-9496(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9496);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r9,516(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// mulli r9,r9,192
	ctx.r9.s64 = ctx.r9.s64 * 192;
	// add r28,r9,r10
	r28.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9500
	r29.s64 = ctx.r10.s64 + -9500;
	// bne 0x822b62e8
	if (!cr0.eq) goto loc_822B62E8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-9496(r30)
	PPC_STORE_U32(r30.u32 + -9496, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2956
	ctx.r4.s64 = r11.s64 + 2956;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9496(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9496);
loc_822B62E8:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r27,r10,-9504
	r27.s64 = ctx.r10.s64 + -9504;
	// bne 0x822b6310
	if (!cr0.eq) goto loc_822B6310;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-9496(r30)
	PPC_STORE_U32(r30.u32 + -9496, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,2948
	ctx.r4.s64 = r11.s64 + 2948;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822B6310:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821586f0
	sub_821586F0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822bd548
	sub_822BD548(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x822bd590
	sub_822BD590(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// addi r4,r11,2940
	ctx.r4.s64 = r11.s64 + 2940;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82270de0
	sub_82270DE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,-9496(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9496);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822b63c0
	if (!cr0.eq) goto loc_822B63C0;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-9496(r30)
	PPC_STORE_U32(r30.u32 + -9496, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// addi r4,r11,5936
	ctx.r4.s64 = r11.s64 + 5936;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,-9508(r29)
	PPC_STORE_U32(r29.u32 + -9508, ctx.r4.u32);
	// b 0x822b63c4
	goto loc_822B63C4;
loc_822B63C0:
	// lwz r4,-9508(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -9508);
loc_822B63C4:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x822b6410
	if (!cr6.eq) goto loc_822B6410;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822b6410
	if (!cr0.eq) goto loc_822B6410;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,-9508(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -9508);
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_822B6410:
	// li r11,5
	r11.s64 = 5;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821583d8
	sub_821583D8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b6448
	if (cr0.eq) goto loc_822B6448;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B6448:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215ac58
	sub_8215AC58(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r23,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r23.u32);
	// stw r23,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r23.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_822B6250"))) PPC_WEAK_FUNC(sub_822B6250);
PPC_FUNC_IMPL(__imp__sub_822B6250) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r23,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r23.u32);
	// bl 0x822b4cf0
	sub_822B4CF0(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r6,r11,23088
	ctx.r6.s64 = r11.s64 + 23088;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,1688
	ctx.r5.s64 = r11.s64 + 1688;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,28(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-9496(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9496);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r9,516(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// mulli r9,r9,192
	ctx.r9.s64 = ctx.r9.s64 * 192;
	// add r28,r9,r10
	r28.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9500
	r29.s64 = ctx.r10.s64 + -9500;
	// bne 0x822b62e8
	if (!cr0.eq) goto loc_822B62E8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-9496(r30)
	PPC_STORE_U32(r30.u32 + -9496, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2956
	ctx.r4.s64 = r11.s64 + 2956;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9496(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9496);
loc_822B62E8:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r27,r10,-9504
	r27.s64 = ctx.r10.s64 + -9504;
	// bne 0x822b6310
	if (!cr0.eq) goto loc_822B6310;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-9496(r30)
	PPC_STORE_U32(r30.u32 + -9496, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,2948
	ctx.r4.s64 = r11.s64 + 2948;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822B6310:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821586f0
	sub_821586F0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822bd548
	sub_822BD548(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x822bd590
	sub_822BD590(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// addi r4,r11,2940
	ctx.r4.s64 = r11.s64 + 2940;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82270de0
	sub_82270DE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,-9496(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9496);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822b63c0
	if (!cr0.eq) goto loc_822B63C0;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-9496(r30)
	PPC_STORE_U32(r30.u32 + -9496, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// addi r4,r11,5936
	ctx.r4.s64 = r11.s64 + 5936;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,-9508(r29)
	PPC_STORE_U32(r29.u32 + -9508, ctx.r4.u32);
	// b 0x822b63c4
	goto loc_822B63C4;
loc_822B63C0:
	// lwz r4,-9508(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -9508);
loc_822B63C4:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x822b6410
	if (!cr6.eq) goto loc_822B6410;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822b6410
	if (!cr0.eq) goto loc_822B6410;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,-9508(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -9508);
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_822B6410:
	// li r11,5
	r11.s64 = 5;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821583d8
	sub_821583D8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b6448
	if (cr0.eq) goto loc_822B6448;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822B6448:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215ac58
	sub_8215AC58(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r23,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r23.u32);
	// stw r23,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r23.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_822B6470"))) PPC_WEAK_FUNC(sub_822B6470);
PPC_FUNC_IMPL(__imp__sub_822B6470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9496
	r11.s64 = r11.s64 + -9496;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9496
	ctx.r10.s64 = ctx.r10.s64 + -9496;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B6498"))) PPC_WEAK_FUNC(sub_822B6498);
PPC_FUNC_IMPL(__imp__sub_822B6498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9496
	r11.s64 = r11.s64 + -9496;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9496
	ctx.r10.s64 = ctx.r10.s64 + -9496;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B64C0"))) PPC_WEAK_FUNC(sub_822B64C0);
PPC_FUNC_IMPL(__imp__sub_822B64C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9496
	r11.s64 = r11.s64 + -9496;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9496
	ctx.r10.s64 = ctx.r10.s64 + -9496;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B64E8"))) PPC_WEAK_FUNC(sub_822B64E8);
PPC_FUNC_IMPL(__imp__sub_822B64E8) {
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

__attribute__((alias("__imp__sub_822B6510"))) PPC_WEAK_FUNC(sub_822B6510);
PPC_FUNC_IMPL(__imp__sub_822B6510) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,6104(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 6104);
	// mflr r12
	// bl 0x8239bce4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r24,0
	r24.s64 = 0;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,-9488(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9488);
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r29,r9,-9492
	r29.s64 = ctx.r9.s64 + -9492;
	// bne 0x822b656c
	if (!cr0.eq) goto loc_822B656C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-9488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9488, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6088
	ctx.r4.s64 = r11.s64 + 6088;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822B656C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x822b4cf0
	sub_822B4CF0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x821586f0
	sub_821586F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r25,12
	r25.s64 = 12;
	// lwz r26,600(r27)
	r26.u64 = PPC_LOAD_U32(r27.u32 + 600);
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw. r11,r11,r25
	r11.s32 = r11.s32 / r25.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b6610
	if (cr0.eq) goto loc_822B6610;
	// mr r27,r24
	r27.u64 = r24.u64;
loc_822B65B4:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// add r4,r27,r11
	ctx.r4.u64 = r27.u64 + r11.u64;
	// bl 0x82157c90
	sub_82157C90(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8239e218
	sub_8239E218(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x822b65fc
	if (!cr0.eq) goto loc_822B65FC;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r27,r27,12
	r27.s64 = r27.s64 + 12;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r25
	r11.s32 = r11.s32 / r25.s32;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x822b65b4
	if (cr6.lt) goto loc_822B65B4;
	// b 0x822b6610
	goto loc_822B6610;
loc_822B65FC:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215ac58
	sub_8215AC58(ctx, base);
loc_822B6610:
	// stw r24,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r24.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r24,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r24.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_822B6518"))) PPC_WEAK_FUNC(sub_822B6518);
PPC_FUNC_IMPL(__imp__sub_822B6518) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r24,0
	r24.s64 = 0;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,-9488(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9488);
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r29,r9,-9492
	r29.s64 = ctx.r9.s64 + -9492;
	// bne 0x822b656c
	if (!cr0.eq) goto loc_822B656C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-9488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9488, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6088
	ctx.r4.s64 = r11.s64 + 6088;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822B656C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x822b4cf0
	sub_822B4CF0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x821586f0
	sub_821586F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r25,12
	r25.s64 = 12;
	// lwz r26,600(r27)
	r26.u64 = PPC_LOAD_U32(r27.u32 + 600);
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw. r11,r11,r25
	r11.s32 = r11.s32 / r25.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b6610
	if (cr0.eq) goto loc_822B6610;
	// mr r27,r24
	r27.u64 = r24.u64;
loc_822B65B4:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// add r4,r27,r11
	ctx.r4.u64 = r27.u64 + r11.u64;
	// bl 0x82157c90
	sub_82157C90(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8239e218
	sub_8239E218(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x822b65fc
	if (!cr0.eq) goto loc_822B65FC;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r27,r27,12
	r27.s64 = r27.s64 + 12;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r25
	r11.s32 = r11.s32 / r25.s32;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x822b65b4
	if (cr6.lt) goto loc_822B65B4;
	// b 0x822b6610
	goto loc_822B6610;
loc_822B65FC:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215ac58
	sub_8215AC58(ctx, base);
loc_822B6610:
	// stw r24,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r24.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r24,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r24.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_822B6624"))) PPC_WEAK_FUNC(sub_822B6624);
PPC_FUNC_IMPL(__imp__sub_822B6624) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9488
	r11.s64 = r11.s64 + -9488;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9488
	ctx.r10.s64 = ctx.r10.s64 + -9488;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B664C"))) PPC_WEAK_FUNC(sub_822B664C);
PPC_FUNC_IMPL(__imp__sub_822B664C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B6650"))) PPC_WEAK_FUNC(sub_822B6650);
PPC_FUNC_IMPL(__imp__sub_822B6650) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// bl 0x8216a8a0
	sub_8216A8A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821663a0
	sub_821663A0(ctx, base);
	// lwz r11,596(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 596);
	// lwz r4,600(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 600);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x822b66a0
	if (!cr6.gt) goto loc_822B66A0;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r11,6364
	ctx.r3.s64 = r11.s64 + 6364;
	// b 0x822b66a8
	goto loc_822B66A8;
loc_822B66A0:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r11,6352
	ctx.r3.s64 = r11.s64 + 6352;
loc_822B66A8:
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822b66cc
	if (cr0.eq) goto loc_822B66CC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82175b20
	sub_82175B20(ctx, base);
loc_822B66CC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b3bb8
	sub_822B3BB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82165598
	sub_82165598(ctx, base);
	// lwz r11,596(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 596);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r22,r11,6348
	r22.s64 = r11.s64 + 6348;
	// ble cr6,0x822b68bc
	if (!cr6.gt) goto loc_822B68BC;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,6332
	ctx.r4.s64 = r11.s64 + 6332;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822b6724
	if (cr0.eq) goto loc_822B6724;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82175b20
	sub_82175B20(ctx, base);
loc_822B6724:
	// lis r25,-32127
	r25.s64 = -2105475072;
	// lwz r3,-9604(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -9604);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x822b6804
	if (cr6.eq) goto loc_822B6804;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r11,6324
	r29.s64 = r11.s64 + 6324;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x822b67f8
	if (cr0.eq) goto loc_822B67F8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x822b67f8
	if (cr0.eq) goto loc_822B67F8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r26,12
	r26.s64 = 12;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r28,r23
	r28.u64 = r23.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw. r11,r11,r26
	r11.s32 = r11.s32 / r26.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b67f8
	if (cr0.eq) goto loc_822B67F8;
	// mr r29,r23
	r29.u64 = r23.u64;
loc_822B6788:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x82175bb0
	sub_82175BB0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822b67d8
	if (cr0.eq) goto loc_822B67D8;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
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
loc_822B67D8:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r26
	r11.s32 = r11.s32 / r26.s32;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x822b6788
	if (cr6.lt) goto loc_822B6788;
loc_822B67F8:
	// mr r11,r23
	r11.u64 = r23.u64;
	// stw r11,-9604(r25)
	PPC_STORE_U32(r25.u32 + -9604, r11.u32);
	// b 0x822b6808
	goto loc_822B6808;
loc_822B6804:
	// stw r31,-9604(r25)
	PPC_STORE_U32(r25.u32 + -9604, r31.u32);
loc_822B6808:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,17520
	ctx.r4.s64 = r11.s64 + 17520;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82175b20
	sub_82175B20(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,17508
	ctx.r4.s64 = r11.s64 + 17508;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82175b20
	sub_82175B20(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,17496
	ctx.r4.s64 = r11.s64 + 17496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82175b20
	sub_82175B20(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6312
	ctx.r4.s64 = r11.s64 + 6312;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82175b20
	sub_82175B20(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6296
	ctx.r4.s64 = r11.s64 + 6296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82175b20
	sub_82175B20(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6280
	ctx.r4.s64 = r11.s64 + 6280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82175b20
	sub_82175B20(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r11,6264
	ctx.r4.s64 = r11.s64 + 6264;
	// b 0x822b6914
	goto loc_822B6914;
loc_822B68BC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b5858
	sub_822B5858(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b68d4
	if (cr0.eq) goto loc_822B68D4;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// b 0x822b68dc
	goto loc_822B68DC;
loc_822B68D4:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r11,6312
	ctx.r4.s64 = r11.s64 + 6312;
loc_822B68DC:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82175b20
	sub_82175B20(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6248
	ctx.r4.s64 = r11.s64 + 6248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82175b20
	sub_82175B20(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r11,6236
	ctx.r4.s64 = r11.s64 + 6236;
loc_822B6914:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82175b20
	sub_82175B20(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6228
	ctx.r4.s64 = r11.s64 + 6228;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82175b20
	sub_82175B20(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6220
	ctx.r4.s64 = r11.s64 + 6220;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82175b20
	sub_82175B20(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6212
	ctx.r4.s64 = r11.s64 + 6212;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82175b20
	sub_82175B20(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6204
	ctx.r4.s64 = r11.s64 + 6204;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82175b20
	sub_82175B20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82175b20
	sub_82175B20(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6192
	ctx.r4.s64 = r11.s64 + 6192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82175b20
	sub_82175B20(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6180
	ctx.r4.s64 = r11.s64 + 6180;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82175b20
	sub_82175B20(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,6168
	ctx.r4.s64 = r11.s64 + 6168;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216a848
	sub_8216A848(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82175b20
	sub_82175B20(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r23,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r23.u32);
	// stw r23,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r23.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_822B6A18"))) PPC_WEAK_FUNC(sub_822B6A18);
PPC_FUNC_IMPL(__imp__sub_822B6A18) {
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
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x822b4d48
	sub_822B4D48(ctx, base);
	// lis r11,-32128
	r11.s64 = -2105540608;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r4,604(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 604);
	// lwz r11,23616(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 23616);
	// addi r3,r11,44
	ctx.r3.s64 = r11.s64 + 44;
	// bl 0x822a33c0
	sub_822A33C0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r4,604(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 604);
	// addi r5,r11,9120
	ctx.r5.s64 = r11.s64 + 9120;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821915d8
	sub_821915D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822B6A8C"))) PPC_WEAK_FUNC(sub_822B6A8C);
PPC_FUNC_IMPL(__imp__sub_822B6A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B6A90"))) PPC_WEAK_FUNC(sub_822B6A90);
PPC_FUNC_IMPL(__imp__sub_822B6A90) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r25,0
	r25.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r27,r11,2792
	r27.s64 = r11.s64 + 2792;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// lwz r30,44(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822bd820
	sub_822BD820(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r28,604(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 604);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,2808
	r30.s64 = r11.s64 + 2808;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r29,r31,60
	r29.s64 = r31.s64 + 60;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822c0270
	sub_822C0270(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b6b60
	if (cr0.eq) goto loc_822B6B60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,44(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r4,r11,19528
	ctx.r4.s64 = r11.s64 + 19528;
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,6384
	ctx.r4.s64 = r11.s64 + 6384;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r3,r30,192
	ctx.r3.s64 = r30.s64 + 192;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822bdaa0
	sub_822BDAA0(ctx, base);
	// b 0x822b6ba8
	goto loc_822B6BA8;
loc_822B6B60:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r28,604(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 604);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r30,r11,2800
	r30.s64 = r11.s64 + 2800;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822c0270
	sub_822C0270(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne 0x822b6ba0
	if (!cr0.eq) goto loc_822B6BA0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_822B6BA0:
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822B6BA8:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,192
	ctx.r3.s64 = r11.s64 + 192;
	// bl 0x822bd820
	sub_822BD820(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r25,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r25.u32);
	// stw r25,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822B6BCC"))) PPC_WEAK_FUNC(sub_822B6BCC);
PPC_FUNC_IMPL(__imp__sub_822B6BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B6BD0"))) PPC_WEAK_FUNC(sub_822B6BD0);
PPC_FUNC_IMPL(__imp__sub_822B6BD0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r30,44(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r5,604(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 604);
	// addi r4,r3,60
	ctx.r4.s64 = ctx.r3.s64 + 60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bf2c0
	sub_822BF2C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mulli r10,r31,192
	ctx.r10.s64 = r31.s64 * 192;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + r30.u64;
	// bl 0x822bd820
	sub_822BD820(ctx, base);
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

__attribute__((alias("__imp__sub_822B6C2C"))) PPC_WEAK_FUNC(sub_822B6C2C);
PPC_FUNC_IMPL(__imp__sub_822B6C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B6C30"))) PPC_WEAK_FUNC(sub_822B6C30);
PPC_FUNC_IMPL(__imp__sub_822B6C30) {
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

__attribute__((alias("__imp__sub_822B6C84"))) PPC_WEAK_FUNC(sub_822B6C84);
PPC_FUNC_IMPL(__imp__sub_822B6C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B6C88"))) PPC_WEAK_FUNC(sub_822B6C88);
PPC_FUNC_IMPL(__imp__sub_822B6C88) {
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
	// bne 0x822b6cb0
	if (!cr0.eq) goto loc_822B6CB0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_822B6CB0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x822b6ce4
	if (cr6.eq) goto loc_822B6CE4;
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
	// bl 0x822b4fe0
	sub_822B4FE0(ctx, base);
	// b 0x822b6cec
	goto loc_822B6CEC;
loc_822B6CE4:
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_822B6CEC:
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

__attribute__((alias("__imp__sub_822B6D04"))) PPC_WEAK_FUNC(sub_822B6D04);
PPC_FUNC_IMPL(__imp__sub_822B6D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B6D08"))) PPC_WEAK_FUNC(sub_822B6D08);
PPC_FUNC_IMPL(__imp__sub_822B6D08) {
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
	// beq 0x822b6d48
	if (cr0.eq) goto loc_822B6D48;
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
	// bl 0x822b4fe0
	sub_822B4FE0(ctx, base);
loc_822B6D48:
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

__attribute__((alias("__imp__sub_822B6D60"))) PPC_WEAK_FUNC(sub_822B6D60);
PPC_FUNC_IMPL(__imp__sub_822B6D60) {
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
	// bl 0x822b50b8
	sub_822B50B8(ctx, base);
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

__attribute__((alias("__imp__sub_822B6DC4"))) PPC_WEAK_FUNC(sub_822B6DC4);
PPC_FUNC_IMPL(__imp__sub_822B6DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B6DC8"))) PPC_WEAK_FUNC(sub_822B6DC8);
PPC_FUNC_IMPL(__imp__sub_822B6DC8) {
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
	// b 0x822b6df8
	goto loc_822B6DF8;
loc_822B6DE8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822B6DF8:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x822b6de8
	if (!cr6.eq) goto loc_822B6DE8;
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

__attribute__((alias("__imp__sub_822B6E20"))) PPC_WEAK_FUNC(sub_822B6E20);
PPC_FUNC_IMPL(__imp__sub_822B6E20) {
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
	// lwz r16,6472(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 6472);
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
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-9472(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9472);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9476
	r29.s64 = ctx.r10.s64 + -9476;
	// bne 0x822b6e8c
	if (!cr0.eq) goto loc_822B6E8C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-9472(r30)
	PPC_STORE_U32(r30.u32 + -9472, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9472(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9472);
loc_822B6E8C:
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
	// beq 0x822b6ec0
	if (cr0.eq) goto loc_822B6EC0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,612
	ctx.r3.s64 = r26.s64 + 612;
loc_822B6EB8:
	// bl 0x8212de00
	sub_8212DE00(ctx, base);
	// b 0x822b6f9c
	goto loc_822B6F9C;
loc_822B6EC0:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9480
	r29.s64 = ctx.r10.s64 + -9480;
	// bne 0x822b6eec
	if (!cr0.eq) goto loc_822B6EEC;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-9472(r30)
	PPC_STORE_U32(r30.u32 + -9472, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9472(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9472);
loc_822B6EEC:
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
	// beq 0x822b6f1c
	if (cr0.eq) goto loc_822B6F1C;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,613
	ctx.r3.s64 = r26.s64 + 613;
	// b 0x822b6eb8
	goto loc_822B6EB8;
loc_822B6F1C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9484
	r29.s64 = ctx.r10.s64 + -9484;
	// bne 0x822b6f44
	if (!cr0.eq) goto loc_822B6F44;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-9472(r30)
	PPC_STORE_U32(r30.u32 + -9472, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822B6F44:
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
	// beq 0x822b6f98
	if (cr0.eq) goto loc_822B6F98;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,56
	ctx.r3.s64 = r26.s64 + 56;
	// bl 0x8215d8f8
	sub_8215D8F8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b6f98
	if (cr0.eq) goto loc_822B6F98;
	// andi. r11,r27,17
	r11.u64 = r27.u64 & 17;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822b6f90
	if (!cr0.eq) goto loc_822B6F90;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b6118
	sub_822B6118(ctx, base);
loc_822B6F90:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822b6f9c
	goto loc_822B6F9C;
loc_822B6F98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B6F9C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822B6E28"))) PPC_WEAK_FUNC(sub_822B6E28);
PPC_FUNC_IMPL(__imp__sub_822B6E28) {
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
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-9472(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9472);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9476
	r29.s64 = ctx.r10.s64 + -9476;
	// bne 0x822b6e8c
	if (!cr0.eq) goto loc_822B6E8C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-9472(r30)
	PPC_STORE_U32(r30.u32 + -9472, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9472(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9472);
loc_822B6E8C:
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
	// beq 0x822b6ec0
	if (cr0.eq) goto loc_822B6EC0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,612
	ctx.r3.s64 = r26.s64 + 612;
loc_822B6EB8:
	// bl 0x8212de00
	sub_8212DE00(ctx, base);
	// b 0x822b6f9c
	goto loc_822B6F9C;
loc_822B6EC0:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9480
	r29.s64 = ctx.r10.s64 + -9480;
	// bne 0x822b6eec
	if (!cr0.eq) goto loc_822B6EEC;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-9472(r30)
	PPC_STORE_U32(r30.u32 + -9472, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9472(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9472);
loc_822B6EEC:
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
	// beq 0x822b6f1c
	if (cr0.eq) goto loc_822B6F1C;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,613
	ctx.r3.s64 = r26.s64 + 613;
	// b 0x822b6eb8
	goto loc_822B6EB8;
loc_822B6F1C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9484
	r29.s64 = ctx.r10.s64 + -9484;
	// bne 0x822b6f44
	if (!cr0.eq) goto loc_822B6F44;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-9472(r30)
	PPC_STORE_U32(r30.u32 + -9472, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822B6F44:
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
	// beq 0x822b6f98
	if (cr0.eq) goto loc_822B6F98;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,56
	ctx.r3.s64 = r26.s64 + 56;
	// bl 0x8215d8f8
	sub_8215D8F8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b6f98
	if (cr0.eq) goto loc_822B6F98;
	// andi. r11,r27,17
	r11.u64 = r27.u64 & 17;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822b6f90
	if (!cr0.eq) goto loc_822B6F90;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b6118
	sub_822B6118(ctx, base);
loc_822B6F90:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822b6f9c
	goto loc_822B6F9C;
loc_822B6F98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B6F9C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822B6FA4"))) PPC_WEAK_FUNC(sub_822B6FA4);
PPC_FUNC_IMPL(__imp__sub_822B6FA4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9472
	r11.s64 = r11.s64 + -9472;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9472
	ctx.r10.s64 = ctx.r10.s64 + -9472;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B6FCC"))) PPC_WEAK_FUNC(sub_822B6FCC);
PPC_FUNC_IMPL(__imp__sub_822B6FCC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9472
	r11.s64 = r11.s64 + -9472;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9472
	ctx.r10.s64 = ctx.r10.s64 + -9472;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B6FF4"))) PPC_WEAK_FUNC(sub_822B6FF4);
PPC_FUNC_IMPL(__imp__sub_822B6FF4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9472
	r11.s64 = r11.s64 + -9472;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9472
	ctx.r10.s64 = ctx.r10.s64 + -9472;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B701C"))) PPC_WEAK_FUNC(sub_822B701C);
PPC_FUNC_IMPL(__imp__sub_822B701C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7020"))) PPC_WEAK_FUNC(sub_822B7020);
PPC_FUNC_IMPL(__imp__sub_822B7020) {
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
	// lwz r16,6608(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 6608);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r4,r11,6584
	ctx.r4.s64 = r11.s64 + 6584;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x82157b20
	sub_82157B20(ctx, base);
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x822b70a4
	goto loc_822B70A4;
loc_822B705C:
	// lwz r30,8(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
loc_822B7074:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822b7098
	if (cr0.eq) goto loc_822B7098;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x822b7074
	if (cr6.eq) goto loc_822B7074;
loc_822B7098:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x822b70c4
	if (cr0.eq) goto loc_822B70C4;
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_822B70A4:
	// subf r11,r29,r28
	r11.s64 = r28.s64 - r29.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822b705c
	if (!cr0.eq) goto loc_822B705C;
	// li r30,0
	r30.s64 = 0;
	// b 0x822b711c
	goto loc_822B711C;
loc_822B70C4:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r11,6568
	ctx.r3.s64 = r11.s64 + 6568;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8218e4c0
	sub_8218E4C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x822b6c30
	sub_822B6C30(ctx, base);
loc_822B711C:
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x821580c8
	sub_821580C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822B7028"))) PPC_WEAK_FUNC(sub_822B7028);
PPC_FUNC_IMPL(__imp__sub_822B7028) {
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r4,r11,6584
	ctx.r4.s64 = r11.s64 + 6584;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x82157b20
	sub_82157B20(ctx, base);
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x822b70a4
	goto loc_822B70A4;
loc_822B705C:
	// lwz r30,8(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
loc_822B7074:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822b7098
	if (cr0.eq) goto loc_822B7098;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x822b7074
	if (cr6.eq) goto loc_822B7074;
loc_822B7098:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x822b70c4
	if (cr0.eq) goto loc_822B70C4;
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_822B70A4:
	// subf r11,r29,r28
	r11.s64 = r28.s64 - r29.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822b705c
	if (!cr0.eq) goto loc_822B705C;
	// li r30,0
	r30.s64 = 0;
	// b 0x822b711c
	goto loc_822B711C;
loc_822B70C4:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r11,6568
	ctx.r3.s64 = r11.s64 + 6568;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8218e4c0
	sub_8218E4C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x822b6c30
	sub_822B6C30(ctx, base);
loc_822B711C:
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x821580c8
	sub_821580C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822B7130"))) PPC_WEAK_FUNC(sub_822B7130);
PPC_FUNC_IMPL(__imp__sub_822B7130) {
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
	// bl 0x821580c8
	sub_821580C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B7158"))) PPC_WEAK_FUNC(sub_822B7158);
PPC_FUNC_IMPL(__imp__sub_822B7158) {
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

__attribute__((alias("__imp__sub_822B7180"))) PPC_WEAK_FUNC(sub_822B7180);
PPC_FUNC_IMPL(__imp__sub_822B7180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r4,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r4.s64 = r11.s32 >> 2;
	// bl 0x822b4f60
	sub_822B4F60(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82122018
	sub_82122018(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
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

__attribute__((alias("__imp__sub_822B71F4"))) PPC_WEAK_FUNC(sub_822B71F4);
PPC_FUNC_IMPL(__imp__sub_822B71F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B71F8"))) PPC_WEAK_FUNC(sub_822B71F8);
PPC_FUNC_IMPL(__imp__sub_822B71F8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// b 0x822b7240
	goto loc_822B7240;
loc_822B7218:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-192
	r11.s64 = r11.s64 + -192;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_822B7240:
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
	// bne 0x822b7218
	if (!cr0.eq) goto loc_822B7218;
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

__attribute__((alias("__imp__sub_822B7278"))) PPC_WEAK_FUNC(sub_822B7278);
PPC_FUNC_IMPL(__imp__sub_822B7278) {
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
	// lwz r16,6720(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 6720);
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
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822b72c0
	if (cr0.eq) goto loc_822B72C0;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822B72C0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bne cr6,0x822b72d0
	if (!cr6.eq) goto loc_822B72D0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B72D0:
	// bl 0x82317760
	sub_82317760(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
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

__attribute__((alias("__imp__sub_822B7280"))) PPC_WEAK_FUNC(sub_822B7280);
PPC_FUNC_IMPL(__imp__sub_822B7280) {
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
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822b72c0
	if (cr0.eq) goto loc_822B72C0;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822B72C0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bne cr6,0x822b72d0
	if (!cr6.eq) goto loc_822B72D0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B72D0:
	// bl 0x82317760
	sub_82317760(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
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

__attribute__((alias("__imp__sub_822B72F8"))) PPC_WEAK_FUNC(sub_822B72F8);
PPC_FUNC_IMPL(__imp__sub_822B72F8) {
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

__attribute__((alias("__imp__sub_822B7320"))) PPC_WEAK_FUNC(sub_822B7320);
PPC_FUNC_IMPL(__imp__sub_822B7320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822b734c
	if (cr6.eq) goto loc_822B734C;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x822b7354
	goto loc_822B7354;
loc_822B734C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_822B7354:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_822B736C"))) PPC_WEAK_FUNC(sub_822B736C);
PPC_FUNC_IMPL(__imp__sub_822B736C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7370"))) PPC_WEAK_FUNC(sub_822B7370);
PPC_FUNC_IMPL(__imp__sub_822B7370) {
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
	// lwz r16,6792(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 6792);
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
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822b73b8
	if (cr0.eq) goto loc_822B73B8;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822B73B8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bne cr6,0x822b73c8
	if (!cr6.eq) goto loc_822B73C8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B73C8:
	// bl 0x82317760
	sub_82317760(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
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

__attribute__((alias("__imp__sub_822B7378"))) PPC_WEAK_FUNC(sub_822B7378);
PPC_FUNC_IMPL(__imp__sub_822B7378) {
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
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822b73b8
	if (cr0.eq) goto loc_822B73B8;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822B73B8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bne cr6,0x822b73c8
	if (!cr6.eq) goto loc_822B73C8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B73C8:
	// bl 0x82317760
	sub_82317760(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
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

__attribute__((alias("__imp__sub_822B73F0"))) PPC_WEAK_FUNC(sub_822B73F0);
PPC_FUNC_IMPL(__imp__sub_822B73F0) {
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

__attribute__((alias("__imp__sub_822B7418"))) PPC_WEAK_FUNC(sub_822B7418);
PPC_FUNC_IMPL(__imp__sub_822B7418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822b7444
	if (cr6.eq) goto loc_822B7444;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x822b744c
	goto loc_822B744C;
loc_822B7444:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_822B744C:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_822B7464"))) PPC_WEAK_FUNC(sub_822B7464);
PPC_FUNC_IMPL(__imp__sub_822B7464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7468"))) PPC_WEAK_FUNC(sub_822B7468);
PPC_FUNC_IMPL(__imp__sub_822B7468) {
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
	// lwz r16,6864(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 6864);
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
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822b74b0
	if (cr0.eq) goto loc_822B74B0;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822B74B0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bne cr6,0x822b74c0
	if (!cr6.eq) goto loc_822B74C0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B74C0:
	// bl 0x82317760
	sub_82317760(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
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

__attribute__((alias("__imp__sub_822B7470"))) PPC_WEAK_FUNC(sub_822B7470);
PPC_FUNC_IMPL(__imp__sub_822B7470) {
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
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822b74b0
	if (cr0.eq) goto loc_822B74B0;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822B74B0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bne cr6,0x822b74c0
	if (!cr6.eq) goto loc_822B74C0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B74C0:
	// bl 0x82317760
	sub_82317760(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
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

__attribute__((alias("__imp__sub_822B74E8"))) PPC_WEAK_FUNC(sub_822B74E8);
PPC_FUNC_IMPL(__imp__sub_822B74E8) {
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

__attribute__((alias("__imp__sub_822B7510"))) PPC_WEAK_FUNC(sub_822B7510);
PPC_FUNC_IMPL(__imp__sub_822B7510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822b753c
	if (cr6.eq) goto loc_822B753C;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x822b7544
	goto loc_822B7544;
loc_822B753C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_822B7544:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_822B755C"))) PPC_WEAK_FUNC(sub_822B755C);
PPC_FUNC_IMPL(__imp__sub_822B755C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7560"))) PPC_WEAK_FUNC(sub_822B7560);
PPC_FUNC_IMPL(__imp__sub_822B7560) {
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
	// lwz r16,6936(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 6936);
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
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822b75a8
	if (cr0.eq) goto loc_822B75A8;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822B75A8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bne cr6,0x822b75b8
	if (!cr6.eq) goto loc_822B75B8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B75B8:
	// bl 0x82317760
	sub_82317760(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
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

__attribute__((alias("__imp__sub_822B7568"))) PPC_WEAK_FUNC(sub_822B7568);
PPC_FUNC_IMPL(__imp__sub_822B7568) {
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
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822b75a8
	if (cr0.eq) goto loc_822B75A8;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822B75A8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bne cr6,0x822b75b8
	if (!cr6.eq) goto loc_822B75B8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B75B8:
	// bl 0x82317760
	sub_82317760(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
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

__attribute__((alias("__imp__sub_822B75E0"))) PPC_WEAK_FUNC(sub_822B75E0);
PPC_FUNC_IMPL(__imp__sub_822B75E0) {
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

__attribute__((alias("__imp__sub_822B7608"))) PPC_WEAK_FUNC(sub_822B7608);
PPC_FUNC_IMPL(__imp__sub_822B7608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822b7634
	if (cr6.eq) goto loc_822B7634;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x822b763c
	goto loc_822B763C;
loc_822B7634:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_822B763C:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_822B7654"))) PPC_WEAK_FUNC(sub_822B7654);
PPC_FUNC_IMPL(__imp__sub_822B7654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7658"))) PPC_WEAK_FUNC(sub_822B7658);
PPC_FUNC_IMPL(__imp__sub_822B7658) {
	PPC_FUNC_PROLOGUE();
	// b 0x822b6dc8
	sub_822B6DC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B765C"))) PPC_WEAK_FUNC(sub_822B765C);
PPC_FUNC_IMPL(__imp__sub_822B765C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7660"))) PPC_WEAK_FUNC(sub_822B7660);
PPC_FUNC_IMPL(__imp__sub_822B7660) {
	PPC_FUNC_PROLOGUE();
	// b 0x822b7568
	sub_822B7568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B7664"))) PPC_WEAK_FUNC(sub_822B7664);
PPC_FUNC_IMPL(__imp__sub_822B7664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7668"))) PPC_WEAK_FUNC(sub_822B7668);
PPC_FUNC_IMPL(__imp__sub_822B7668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// lwz r16,7088(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 7088);
	// mflr r12
	// bl 0x8239bcc8
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r17,0
	r17.s64 = 0;
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r17,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r17.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r16,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r16.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r11,r17
	r11.u64 = r17.u64;
	// stw r11,-9604(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9604, r11.u32);
	// bl 0x821c59d0
	sub_821C59D0(ctx, base);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r17,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r17.u64);
	// ld r11,96(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// std r11,96(r31)
	PPC_STORE_U64(r31.u32 + 96, r11.u64);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x822b6c88
	sub_822B6C88(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822b774c
	if (cr6.eq) goto loc_822B774C;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r30,r10,-17296
	r30.s64 = ctx.r10.s64 + -17296;
loc_822B76F4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x8239e218
	sub_8239E218(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x822b7738
	if (!cr0.eq) goto loc_822B7738;
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x822b6d60
	sub_822B6D60(ctx, base);
loc_822B7738:
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x822b6d08
	sub_822B6D08(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x822b76f4
	if (!cr6.eq) goto loc_822B76F4;
loc_822B774C:
	// lwz r11,596(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 596);
	// mr r30,r17
	r30.u64 = r17.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x822b77d8
	if (!cr6.gt) goto loc_822B77D8;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r28,r17
	r28.u64 = r17.u64;
	// addi r26,r11,1640
	r26.s64 = r11.s64 + 1640;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r25,r11,23088
	r25.s64 = r11.s64 + 23088;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r24,r11,7056
	r24.s64 = r11.s64 + 7056;
loc_822B7778:
	// lwz r11,44(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 44);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// add r29,r28,r11
	r29.u64 = r28.u64 + r11.u64;
	// lwz r27,60(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x822b7028
	sub_822B7028(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,72
	ctx.r3.s64 = r29.s64 + 72;
	// stw r30,516(r4)
	PPC_STORE_U32(ctx.r4.u32 + 516, r30.u32);
	// bl 0x822b4908
	sub_822B4908(ctx, base);
	// lwz r11,596(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 596);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,192
	r28.s64 = r28.s64 + 192;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x822b7778
	if (cr6.lt) goto loc_822B7778;
loc_822B77D8:
	// addi r3,r23,60
	ctx.r3.s64 = r23.s64 + 60;
	// lwz r4,604(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 604);
	// bl 0x822bf1e8
	sub_822BF1E8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,7048
	ctx.r4.s64 = r11.s64 + 7048;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x822b7830
	if (!cr0.eq) goto loc_822B7830;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,7032
	ctx.r4.s64 = r11.s64 + 7032;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_822B7830:
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// li r18,1
	r18.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x822b7984
	if (!cr6.gt) goto loc_822B7984;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r19,8
	r19.s64 = 8;
	// addi r24,r11,30816
	r24.s64 = r11.s64 + 30816;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r22,r11,7024
	r22.s64 = r11.s64 + 7024;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r21,r11,2808
	r21.s64 = r11.s64 + 2808;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r20,r11,7016
	r20.s64 = r11.s64 + 7016;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r27,r11,7008
	r27.s64 = r11.s64 + 7008;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r26,r11,7000
	r26.s64 = r11.s64 + 7000;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r25,r11,6992
	r25.s64 = r11.s64 + 6992;
loc_822B787C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r11,r19
	ctx.r3.u64 = r11.u64 + r19.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// lwz r11,596(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 596);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x822b78ac
	if (!cr6.gt) goto loc_822B78AC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8239e218
	sub_8239E218(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822b7924
	if (cr0.eq) goto loc_822B7924;
loc_822B78AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r29,r17
	r29.u64 = r17.u64;
	// bl 0x8239e218
	sub_8239E218(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x822b7910
	if (!cr0.eq) goto loc_822B7910;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8239e218
	sub_8239E218(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822b78e0
	if (cr0.eq) goto loc_822B78E0;
	// mr r29,r20
	r29.u64 = r20.u64;
	// b 0x822b7914
	goto loc_822B7914;
loc_822B78E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x8239e218
	sub_8239E218(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822b78fc
	if (cr0.eq) goto loc_822B78FC;
	// mr r29,r22
	r29.u64 = r22.u64;
	// b 0x822b7914
	goto loc_822B7914;
loc_822B78FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8239e218
	sub_8239E218(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822b7914
	if (cr0.eq) goto loc_822B7914;
loc_822B7910:
	// mr r29,r27
	r29.u64 = r27.u64;
loc_822B7914:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822b7028
	sub_822B7028(ctx, base);
loc_822B7924:
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r19,r19,8
	r19.s64 = r19.s64 + 8;
	// cmpw cr6,r18,r11
	cr6.compare<int32_t>(r18.s32, r11.s32, xer);
	// blt cr6,0x822b787c
	if (cr6.lt) goto loc_822B787C;
	// b 0x822b7984
	goto loc_822B7984;
loc_822B793C:
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822b7970
	if (cr0.eq) goto loc_822B7970;
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
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_822B7970:
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x822b6c30
	sub_822B6C30(ctx, base);
loc_822B7984:
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b793c
	if (cr0.eq) goto loc_822B793C;
	// stw r17,0(r16)
	PPC_STORE_U32(r16.u32 + 0, r17.u32);
	// stw r17,4(r16)
	PPC_STORE_U32(r16.u32 + 4, r17.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822b6dc8
	sub_822B6DC8(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x8239bd18
	return;
}

__attribute__((alias("__imp__sub_822B7670"))) PPC_WEAK_FUNC(sub_822B7670);
PPC_FUNC_IMPL(__imp__sub_822B7670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x8239bcc8
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r17,0
	r17.s64 = 0;
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r17,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r17.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r16,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r16.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r11,r17
	r11.u64 = r17.u64;
	// stw r11,-9604(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9604, r11.u32);
	// bl 0x821c59d0
	sub_821C59D0(ctx, base);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r17,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r17.u64);
	// ld r11,96(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// std r11,96(r31)
	PPC_STORE_U64(r31.u32 + 96, r11.u64);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x822b6c88
	sub_822B6C88(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822b774c
	if (cr6.eq) goto loc_822B774C;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r30,r10,-17296
	r30.s64 = ctx.r10.s64 + -17296;
loc_822B76F4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x8239e218
	sub_8239E218(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x822b7738
	if (!cr0.eq) goto loc_822B7738;
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x822b6d60
	sub_822B6D60(ctx, base);
loc_822B7738:
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x822b6d08
	sub_822B6D08(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x822b76f4
	if (!cr6.eq) goto loc_822B76F4;
loc_822B774C:
	// lwz r11,596(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 596);
	// mr r30,r17
	r30.u64 = r17.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x822b77d8
	if (!cr6.gt) goto loc_822B77D8;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r28,r17
	r28.u64 = r17.u64;
	// addi r26,r11,1640
	r26.s64 = r11.s64 + 1640;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r25,r11,23088
	r25.s64 = r11.s64 + 23088;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r24,r11,7056
	r24.s64 = r11.s64 + 7056;
loc_822B7778:
	// lwz r11,44(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 44);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// add r29,r28,r11
	r29.u64 = r28.u64 + r11.u64;
	// lwz r27,60(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x822b7028
	sub_822B7028(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,72
	ctx.r3.s64 = r29.s64 + 72;
	// stw r30,516(r4)
	PPC_STORE_U32(ctx.r4.u32 + 516, r30.u32);
	// bl 0x822b4908
	sub_822B4908(ctx, base);
	// lwz r11,596(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 596);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,192
	r28.s64 = r28.s64 + 192;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x822b7778
	if (cr6.lt) goto loc_822B7778;
loc_822B77D8:
	// addi r3,r23,60
	ctx.r3.s64 = r23.s64 + 60;
	// lwz r4,604(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 604);
	// bl 0x822bf1e8
	sub_822BF1E8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,7048
	ctx.r4.s64 = r11.s64 + 7048;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x822b7830
	if (!cr0.eq) goto loc_822B7830;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,7032
	ctx.r4.s64 = r11.s64 + 7032;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_822B7830:
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// li r18,1
	r18.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x822b7984
	if (!cr6.gt) goto loc_822B7984;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r19,8
	r19.s64 = 8;
	// addi r24,r11,30816
	r24.s64 = r11.s64 + 30816;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r22,r11,7024
	r22.s64 = r11.s64 + 7024;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r21,r11,2808
	r21.s64 = r11.s64 + 2808;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r20,r11,7016
	r20.s64 = r11.s64 + 7016;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r27,r11,7008
	r27.s64 = r11.s64 + 7008;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r26,r11,7000
	r26.s64 = r11.s64 + 7000;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r25,r11,6992
	r25.s64 = r11.s64 + 6992;
loc_822B787C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r11,r19
	ctx.r3.u64 = r11.u64 + r19.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// lwz r11,596(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 596);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x822b78ac
	if (!cr6.gt) goto loc_822B78AC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8239e218
	sub_8239E218(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822b7924
	if (cr0.eq) goto loc_822B7924;
loc_822B78AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r29,r17
	r29.u64 = r17.u64;
	// bl 0x8239e218
	sub_8239E218(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x822b7910
	if (!cr0.eq) goto loc_822B7910;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8239e218
	sub_8239E218(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822b78e0
	if (cr0.eq) goto loc_822B78E0;
	// mr r29,r20
	r29.u64 = r20.u64;
	// b 0x822b7914
	goto loc_822B7914;
loc_822B78E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x8239e218
	sub_8239E218(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822b78fc
	if (cr0.eq) goto loc_822B78FC;
	// mr r29,r22
	r29.u64 = r22.u64;
	// b 0x822b7914
	goto loc_822B7914;
loc_822B78FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8239e218
	sub_8239E218(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822b7914
	if (cr0.eq) goto loc_822B7914;
loc_822B7910:
	// mr r29,r27
	r29.u64 = r27.u64;
loc_822B7914:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822b7028
	sub_822B7028(ctx, base);
loc_822B7924:
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r19,r19,8
	r19.s64 = r19.s64 + 8;
	// cmpw cr6,r18,r11
	cr6.compare<int32_t>(r18.s32, r11.s32, xer);
	// blt cr6,0x822b787c
	if (cr6.lt) goto loc_822B787C;
	// b 0x822b7984
	goto loc_822B7984;
loc_822B793C:
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822b7970
	if (cr0.eq) goto loc_822B7970;
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
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_822B7970:
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x822b6c30
	sub_822B6C30(ctx, base);
loc_822B7984:
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b793c
	if (cr0.eq) goto loc_822B793C;
	// stw r17,0(r16)
	PPC_STORE_U32(r16.u32 + 0, r17.u32);
	// stw r17,4(r16)
	PPC_STORE_U32(r16.u32 + 4, r17.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822b6dc8
	sub_822B6DC8(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x8239bd18
	return;
}

__attribute__((alias("__imp__sub_822B79C0"))) PPC_WEAK_FUNC(sub_822B79C0);
PPC_FUNC_IMPL(__imp__sub_822B79C0) {
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
	// bl 0x822b7658
	sub_822B7658(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B79E8"))) PPC_WEAK_FUNC(sub_822B79E8);
PPC_FUNC_IMPL(__imp__sub_822B79E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
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
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b7a18
	if (cr0.eq) goto loc_822B7A18;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// bl 0x82120868
	sub_82120868(ctx, base);
loc_822B7A18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B7A28"))) PPC_WEAK_FUNC(sub_822B7A28);
PPC_FUNC_IMPL(__imp__sub_822B7A28) {
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
	// bl 0x822b71f8
	sub_822B71F8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,192
	r11.s64 = 192;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// divw r11,r10,r11
	r11.s32 = ctx.r10.s32 / r11.s32;
	// mulli r3,r11,192
	ctx.r3.s64 = r11.s64 * 192;
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

__attribute__((alias("__imp__sub_822B7A8C"))) PPC_WEAK_FUNC(sub_822B7A8C);
PPC_FUNC_IMPL(__imp__sub_822B7A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7A90"))) PPC_WEAK_FUNC(sub_822B7A90);
PPC_FUNC_IMPL(__imp__sub_822B7A90) {
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
	// lwz r16,7200(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 7200);
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
	// addi r3,r30,180
	ctx.r3.s64 = r30.s64 + 180;
	// bl 0x822b4728
	sub_822B4728(ctx, base);
	// addi r3,r30,168
	ctx.r3.s64 = r30.s64 + 168;
	// bl 0x822b4680
	sub_822B4680(ctx, base);
	// addi r3,r30,156
	ctx.r3.s64 = r30.s64 + 156;
	// bl 0x822b45e8
	sub_822B45E8(ctx, base);
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
	// bl 0x822b7568
	sub_822B7568(ctx, base);
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// bl 0x822b4540
	sub_822B4540(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
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

__attribute__((alias("__imp__sub_822B7A98"))) PPC_WEAK_FUNC(sub_822B7A98);
PPC_FUNC_IMPL(__imp__sub_822B7A98) {
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
	// addi r3,r30,180
	ctx.r3.s64 = r30.s64 + 180;
	// bl 0x822b4728
	sub_822B4728(ctx, base);
	// addi r3,r30,168
	ctx.r3.s64 = r30.s64 + 168;
	// bl 0x822b4680
	sub_822B4680(ctx, base);
	// addi r3,r30,156
	ctx.r3.s64 = r30.s64 + 156;
	// bl 0x822b45e8
	sub_822B45E8(ctx, base);
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
	// bl 0x822b7568
	sub_822B7568(ctx, base);
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// bl 0x822b4540
	sub_822B4540(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
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

__attribute__((alias("__imp__sub_822B7B00"))) PPC_WEAK_FUNC(sub_822B7B00);
PPC_FUNC_IMPL(__imp__sub_822B7B00) {
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

__attribute__((alias("__imp__sub_822B7B28"))) PPC_WEAK_FUNC(sub_822B7B28);
PPC_FUNC_IMPL(__imp__sub_822B7B28) {
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
	// addi r3,r11,72
	ctx.r3.s64 = r11.s64 + 72;
	// bl 0x822b4da0
	sub_822B4DA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B7B54"))) PPC_WEAK_FUNC(sub_822B7B54);
PPC_FUNC_IMPL(__imp__sub_822B7B54) {
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
	// addi r3,r11,84
	ctx.r3.s64 = r11.s64 + 84;
	// bl 0x822b7660
	sub_822B7660(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B7B80"))) PPC_WEAK_FUNC(sub_822B7B80);
PPC_FUNC_IMPL(__imp__sub_822B7B80) {
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
	// addi r3,r11,156
	ctx.r3.s64 = r11.s64 + 156;
	// bl 0x822b4da8
	sub_822B4DA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B7BAC"))) PPC_WEAK_FUNC(sub_822B7BAC);
PPC_FUNC_IMPL(__imp__sub_822B7BAC) {
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
	// addi r3,r11,168
	ctx.r3.s64 = r11.s64 + 168;
	// bl 0x822b4db0
	sub_822B4DB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B7BD8"))) PPC_WEAK_FUNC(sub_822B7BD8);
PPC_FUNC_IMPL(__imp__sub_822B7BD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x822b7be8
	goto loc_822B7BE8;
loc_822B7BE4:
	// addi r11,r11,-24
	r11.s64 = r11.s64 + -24;
loc_822B7BE8:
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
	// bne 0x822b7be4
	if (!cr0.eq) goto loc_822B7BE4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,24
	ctx.r10.s64 = 24;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,24
	ctx.r3.s64 = r11.s64 * 24;
	// b 0x82355020
	sub_82355020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B7C20"))) PPC_WEAK_FUNC(sub_822B7C20);
PPC_FUNC_IMPL(__imp__sub_822B7C20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B7C24"))) PPC_WEAK_FUNC(sub_822B7C24);
PPC_FUNC_IMPL(__imp__sub_822B7C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7C28"))) PPC_WEAK_FUNC(sub_822B7C28);
PPC_FUNC_IMPL(__imp__sub_822B7C28) {
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
	// lwz r16,7296(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 7296);
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
	// bl 0x822b71f8
	sub_822B71F8(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822b7c94
	if (cr0.eq) goto loc_822B7C94;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,192
	ctx.r10.s64 = 192;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,192
	ctx.r3.s64 = r11.s64 * 192;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822B7C94:
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

__attribute__((alias("__imp__sub_822B7C30"))) PPC_WEAK_FUNC(sub_822B7C30);
PPC_FUNC_IMPL(__imp__sub_822B7C30) {
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
	// bl 0x822b71f8
	sub_822B71F8(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822b7c94
	if (cr0.eq) goto loc_822B7C94;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,192
	ctx.r10.s64 = 192;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,192
	ctx.r3.s64 = r11.s64 * 192;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822B7C94:
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

__attribute__((alias("__imp__sub_822B7CAC"))) PPC_WEAK_FUNC(sub_822B7CAC);
PPC_FUNC_IMPL(__imp__sub_822B7CAC) {
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
	// bl 0x822b4fb8
	sub_822B4FB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B7CD4"))) PPC_WEAK_FUNC(sub_822B7CD4);
PPC_FUNC_IMPL(__imp__sub_822B7CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7CD8"))) PPC_WEAK_FUNC(sub_822B7CD8);
PPC_FUNC_IMPL(__imp__sub_822B7CD8) {
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
	// lwz r16,7432(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 7432);
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r10,r10,7356
	ctx.r10.s64 = ctx.r10.s64 + 7356;
	// addi r9,r9,3948
	ctx.r9.s64 = ctx.r9.s64 + 3948;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r4,r11,32
	ctx.r4.s64 = r11.s64 + 32;
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r10,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// bl 0x821cae98
	sub_821CAE98(ctx, base);
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

__attribute__((alias("__imp__sub_822B7CE0"))) PPC_WEAK_FUNC(sub_822B7CE0);
PPC_FUNC_IMPL(__imp__sub_822B7CE0) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r10,r10,7356
	ctx.r10.s64 = ctx.r10.s64 + 7356;
	// addi r9,r9,3948
	ctx.r9.s64 = ctx.r9.s64 + 3948;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r4,r11,32
	ctx.r4.s64 = r11.s64 + 32;
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r10,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// bl 0x821cae98
	sub_821CAE98(ctx, base);
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

__attribute__((alias("__imp__sub_822B7D74"))) PPC_WEAK_FUNC(sub_822B7D74);
PPC_FUNC_IMPL(__imp__sub_822B7D74) {
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

__attribute__((alias("__imp__sub_822B7D9C"))) PPC_WEAK_FUNC(sub_822B7D9C);
PPC_FUNC_IMPL(__imp__sub_822B7D9C) {
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
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x822b36d0
	sub_822B36D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B7DC8"))) PPC_WEAK_FUNC(sub_822B7DC8);
PPC_FUNC_IMPL(__imp__sub_822B7DC8) {
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
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b7df8
	if (cr0.eq) goto loc_822B7DF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822B7DF8:
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

__attribute__((alias("__imp__sub_822B7E14"))) PPC_WEAK_FUNC(sub_822B7E14);
PPC_FUNC_IMPL(__imp__sub_822B7E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7E18"))) PPC_WEAK_FUNC(sub_822B7E18);
PPC_FUNC_IMPL(__imp__sub_822B7E18) {
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
	// lwz r16,7608(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 7608);
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
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// addi r4,r28,4
	ctx.r4.s64 = r28.s64 + 4;
	// bne cr6,0x822b7e58
	if (!cr6.eq) goto loc_822B7E58;
	// li r4,0
	ctx.r4.s64 = 0;
loc_822B7E58:
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b7ce0
	sub_822B7CE0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,7548
	r11.s64 = r11.s64 + 7548;
	// addi r10,r10,7484
	ctx.r10.s64 = ctx.r10.s64 + 7484;
	// addi r4,r28,44
	ctx.r4.s64 = r28.s64 + 44;
	// addi r3,r30,44
	ctx.r3.s64 = r30.s64 + 44;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x822b7180
	sub_822B7180(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822B7E20"))) PPC_WEAK_FUNC(sub_822B7E20);
PPC_FUNC_IMPL(__imp__sub_822B7E20) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// addi r4,r28,4
	ctx.r4.s64 = r28.s64 + 4;
	// bne cr6,0x822b7e58
	if (!cr6.eq) goto loc_822B7E58;
	// li r4,0
	ctx.r4.s64 = 0;
loc_822B7E58:
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b7ce0
	sub_822B7CE0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,7548
	r11.s64 = r11.s64 + 7548;
	// addi r10,r10,7484
	ctx.r10.s64 = ctx.r10.s64 + 7484;
	// addi r4,r28,44
	ctx.r4.s64 = r28.s64 + 44;
	// addi r3,r30,44
	ctx.r3.s64 = r30.s64 + 44;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x822b7180
	sub_822B7180(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822B7E94"))) PPC_WEAK_FUNC(sub_822B7E94);
PPC_FUNC_IMPL(__imp__sub_822B7E94) {
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

__attribute__((alias("__imp__sub_822B7EBC"))) PPC_WEAK_FUNC(sub_822B7EBC);
PPC_FUNC_IMPL(__imp__sub_822B7EBC) {
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
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
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

__attribute__((alias("__imp__sub_822B7EE8"))) PPC_WEAK_FUNC(sub_822B7EE8);
PPC_FUNC_IMPL(__imp__sub_822B7EE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x822b7f30
	sub_822B7F30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B7EF0"))) PPC_WEAK_FUNC(sub_822B7EF0);
PPC_FUNC_IMPL(__imp__sub_822B7EF0) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r4,r4,44
	ctx.r4.s64 = ctx.r4.s64 + 44;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822b7180
	sub_822B7180(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_822B7F2C"))) PPC_WEAK_FUNC(sub_822B7F2C);
PPC_FUNC_IMPL(__imp__sub_822B7F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7F30"))) PPC_WEAK_FUNC(sub_822B7F30);
PPC_FUNC_IMPL(__imp__sub_822B7F30) {
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
	// bl 0x822b7568
	sub_822B7568(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b7f60
	if (cr0.eq) goto loc_822B7F60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822B7F60:
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

__attribute__((alias("__imp__sub_822B7F7C"))) PPC_WEAK_FUNC(sub_822B7F7C);
PPC_FUNC_IMPL(__imp__sub_822B7F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B7F80"))) PPC_WEAK_FUNC(sub_822B7F80);
PPC_FUNC_IMPL(__imp__sub_822B7F80) {
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
	// lwz r16,7688(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 7688);
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
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// b 0x822b7fb8
	goto loc_822B7FB8;
loc_822B7FB4:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_822B7FB8:
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
	// bne 0x822b7fb4
	if (!cr0.eq) goto loc_822B7FB4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822b7fec
	if (cr6.eq) goto loc_822B7FEC;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822B7FEC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bne cr6,0x822b7ffc
	if (!cr6.eq) goto loc_822B7FFC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B7FFC:
	// bl 0x82317760
	sub_82317760(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
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

__attribute__((alias("__imp__sub_822B7F88"))) PPC_WEAK_FUNC(sub_822B7F88);
PPC_FUNC_IMPL(__imp__sub_822B7F88) {
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
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// b 0x822b7fb8
	goto loc_822B7FB8;
loc_822B7FB4:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_822B7FB8:
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
	// bne 0x822b7fb4
	if (!cr0.eq) goto loc_822B7FB4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822b7fec
	if (cr6.eq) goto loc_822B7FEC;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822B7FEC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bne cr6,0x822b7ffc
	if (!cr6.eq) goto loc_822B7FFC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B7FFC:
	// bl 0x82317760
	sub_82317760(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
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

__attribute__((alias("__imp__sub_822B8024"))) PPC_WEAK_FUNC(sub_822B8024);
PPC_FUNC_IMPL(__imp__sub_822B8024) {
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

__attribute__((alias("__imp__sub_822B804C"))) PPC_WEAK_FUNC(sub_822B804C);
PPC_FUNC_IMPL(__imp__sub_822B804C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822b8078
	if (cr6.eq) goto loc_822B8078;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x822b8080
	goto loc_822B8080;
loc_822B8078:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_822B8080:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_822B8098"))) PPC_WEAK_FUNC(sub_822B8098);
PPC_FUNC_IMPL(__imp__sub_822B8098) {
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
	// lwz r16,7776(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 7776);
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
	// addi r3,r30,44
	ctx.r3.s64 = r30.s64 + 44;
	// bl 0x822b7bd8
	sub_822B7BD8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bne cr6,0x822b80d8
	if (!cr6.eq) goto loc_822B80D8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B80D8:
	// bl 0x82317760
	sub_82317760(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
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

__attribute__((alias("__imp__sub_822B80A0"))) PPC_WEAK_FUNC(sub_822B80A0);
PPC_FUNC_IMPL(__imp__sub_822B80A0) {
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
	// addi r3,r30,44
	ctx.r3.s64 = r30.s64 + 44;
	// bl 0x822b7bd8
	sub_822B7BD8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bne cr6,0x822b80d8
	if (!cr6.eq) goto loc_822B80D8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B80D8:
	// bl 0x82317760
	sub_82317760(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
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

__attribute__((alias("__imp__sub_822B8100"))) PPC_WEAK_FUNC(sub_822B8100);
PPC_FUNC_IMPL(__imp__sub_822B8100) {
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

__attribute__((alias("__imp__sub_822B8128"))) PPC_WEAK_FUNC(sub_822B8128);
PPC_FUNC_IMPL(__imp__sub_822B8128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822b8154
	if (cr6.eq) goto loc_822B8154;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x822b815c
	goto loc_822B815C;
loc_822B8154:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_822B815C:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_822B8174"))) PPC_WEAK_FUNC(sub_822B8174);
PPC_FUNC_IMPL(__imp__sub_822B8174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B8178"))) PPC_WEAK_FUNC(sub_822B8178);
PPC_FUNC_IMPL(__imp__sub_822B8178) {
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
	// lwz r16,7848(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 7848);
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
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x822b7bd8
	sub_822B7BD8(ctx, base);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822b81c8
	if (cr0.eq) goto loc_822B81C8;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822B81C8:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822b81e8
	if (cr0.eq) goto loc_822B81E8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822B81E8:
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

__attribute__((alias("__imp__sub_822B8180"))) PPC_WEAK_FUNC(sub_822B8180);
PPC_FUNC_IMPL(__imp__sub_822B8180) {
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
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x822b7bd8
	sub_822B7BD8(ctx, base);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822b81c8
	if (cr0.eq) goto loc_822B81C8;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822B81C8:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822b81e8
	if (cr0.eq) goto loc_822B81E8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822B81E8:
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

__attribute__((alias("__imp__sub_822B8200"))) PPC_WEAK_FUNC(sub_822B8200);
PPC_FUNC_IMPL(__imp__sub_822B8200) {
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

__attribute__((alias("__imp__sub_822B8228"))) PPC_WEAK_FUNC(sub_822B8228);
PPC_FUNC_IMPL(__imp__sub_822B8228) {
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
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
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

__attribute__((alias("__imp__sub_822B8254"))) PPC_WEAK_FUNC(sub_822B8254);
PPC_FUNC_IMPL(__imp__sub_822B8254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B8258"))) PPC_WEAK_FUNC(sub_822B8258);
PPC_FUNC_IMPL(__imp__sub_822B8258) {
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
	// bl 0x822b7e20
	sub_822B7E20(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,7980
	r11.s64 = r11.s64 + 7980;
	// addi r10,r10,7916
	ctx.r10.s64 = ctx.r10.s64 + 7916;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// lbz r11,60(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 60);
	// stb r11,60(r31)
	PPC_STORE_U8(r31.u32 + 60, r11.u8);
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
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

__attribute__((alias("__imp__sub_822B82CC"))) PPC_WEAK_FUNC(sub_822B82CC);
PPC_FUNC_IMPL(__imp__sub_822B82CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B82D0"))) PPC_WEAK_FUNC(sub_822B82D0);
PPC_FUNC_IMPL(__imp__sub_822B82D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x822b82d8
	sub_822B82D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822B82D8"))) PPC_WEAK_FUNC(sub_822B82D8);
PPC_FUNC_IMPL(__imp__sub_822B82D8) {
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
	// bl 0x822b7568
	sub_822B7568(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b8308
	if (cr0.eq) goto loc_822B8308;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822B8308:
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

__attribute__((alias("__imp__sub_822B8324"))) PPC_WEAK_FUNC(sub_822B8324);
PPC_FUNC_IMPL(__imp__sub_822B8324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B8328"))) PPC_WEAK_FUNC(sub_822B8328);
PPC_FUNC_IMPL(__imp__sub_822B8328) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r4,r4,44
	ctx.r4.s64 = ctx.r4.s64 + 44;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822a2cf8
	sub_822A2CF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_822B8364"))) PPC_WEAK_FUNC(sub_822B8364);
PPC_FUNC_IMPL(__imp__sub_822B8364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B8368"))) PPC_WEAK_FUNC(sub_822B8368);
PPC_FUNC_IMPL(__imp__sub_822B8368) {
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
	// lwz r16,8080(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8080);
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
	// bl 0x822c4ca8
	sub_822C4CA8(ctx, base);
	// addi r3,r30,112
	ctx.r3.s64 = r30.s64 + 112;
	// bl 0x822c38a0
	sub_822C38A0(ctx, base);
	// addi r3,r30,168
	ctx.r3.s64 = r30.s64 + 168;
	// bl 0x822c3b80
	sub_822C3B80(ctx, base);
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x822c52c0
	sub_822C52C0(ctx, base);
	// addi r3,r30,280
	ctx.r3.s64 = r30.s64 + 280;
	// bl 0x822c3be0
	sub_822C3BE0(ctx, base);
	// addi r3,r30,344
	ctx.r3.s64 = r30.s64 + 344;
	// bl 0x822bf730
	sub_822BF730(ctx, base);
	// addi r3,r30,392
	ctx.r3.s64 = r30.s64 + 392;
	// bl 0x822c3d10
	sub_822C3D10(ctx, base);
	// addi r3,r30,452
	ctx.r3.s64 = r30.s64 + 452;
	// bl 0x822c53d0
	sub_822C53D0(ctx, base);
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

__attribute__((alias("__imp__sub_822B8370"))) PPC_WEAK_FUNC(sub_822B8370);
PPC_FUNC_IMPL(__imp__sub_822B8370) {
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
	// bl 0x822c4ca8
	sub_822C4CA8(ctx, base);
	// addi r3,r30,112
	ctx.r3.s64 = r30.s64 + 112;
	// bl 0x822c38a0
	sub_822C38A0(ctx, base);
	// addi r3,r30,168
	ctx.r3.s64 = r30.s64 + 168;
	// bl 0x822c3b80
	sub_822C3B80(ctx, base);
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x822c52c0
	sub_822C52C0(ctx, base);
	// addi r3,r30,280
	ctx.r3.s64 = r30.s64 + 280;
	// bl 0x822c3be0
	sub_822C3BE0(ctx, base);
	// addi r3,r30,344
	ctx.r3.s64 = r30.s64 + 344;
	// bl 0x822bf730
	sub_822BF730(ctx, base);
	// addi r3,r30,392
	ctx.r3.s64 = r30.s64 + 392;
	// bl 0x822c3d10
	sub_822C3D10(ctx, base);
	// addi r3,r30,452
	ctx.r3.s64 = r30.s64 + 452;
	// bl 0x822c53d0
	sub_822C53D0(ctx, base);
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

__attribute__((alias("__imp__sub_822B83E8"))) PPC_WEAK_FUNC(sub_822B83E8);
PPC_FUNC_IMPL(__imp__sub_822B83E8) {
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
	// bl 0x822c50e8
	sub_822C50E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B8410"))) PPC_WEAK_FUNC(sub_822B8410);
PPC_FUNC_IMPL(__imp__sub_822B8410) {
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
	// addi r3,r11,112
	ctx.r3.s64 = r11.s64 + 112;
	// bl 0x822b7280
	sub_822B7280(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B843C"))) PPC_WEAK_FUNC(sub_822B843C);
PPC_FUNC_IMPL(__imp__sub_822B843C) {
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
	// addi r3,r11,168
	ctx.r3.s64 = r11.s64 + 168;
	// bl 0x822b7660
	sub_822B7660(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B8468"))) PPC_WEAK_FUNC(sub_822B8468);
PPC_FUNC_IMPL(__imp__sub_822B8468) {
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
	// addi r3,r11,224
	ctx.r3.s64 = r11.s64 + 224;
	// bl 0x822b7f88
	sub_822B7F88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B8494"))) PPC_WEAK_FUNC(sub_822B8494);
PPC_FUNC_IMPL(__imp__sub_822B8494) {
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
	// addi r3,r11,280
	ctx.r3.s64 = r11.s64 + 280;
	// bl 0x822b7378
	sub_822B7378(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B84C0"))) PPC_WEAK_FUNC(sub_822B84C0);
PPC_FUNC_IMPL(__imp__sub_822B84C0) {
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
	// addi r3,r11,344
	ctx.r3.s64 = r11.s64 + 344;
	// bl 0x821e7720
	sub_821E7720(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B84EC"))) PPC_WEAK_FUNC(sub_822B84EC);
PPC_FUNC_IMPL(__imp__sub_822B84EC) {
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
	// addi r3,r11,392
	ctx.r3.s64 = r11.s64 + 392;
	// bl 0x822b7470
	sub_822B7470(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B8518"))) PPC_WEAK_FUNC(sub_822B8518);
PPC_FUNC_IMPL(__imp__sub_822B8518) {
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
	// lwz r16,8232(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8232);
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
	// addi r3,r30,452
	ctx.r3.s64 = r30.s64 + 452;
	// bl 0x822b80a0
	sub_822B80A0(ctx, base);
	// addi r3,r30,392
	ctx.r3.s64 = r30.s64 + 392;
	// bl 0x822b7470
	sub_822B7470(ctx, base);
	// addi r3,r30,344
	ctx.r3.s64 = r30.s64 + 344;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// addi r3,r30,280
	ctx.r3.s64 = r30.s64 + 280;
	// bl 0x822b7378
	sub_822B7378(ctx, base);
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x822b7f88
	sub_822B7F88(ctx, base);
	// addi r3,r30,168
	ctx.r3.s64 = r30.s64 + 168;
	// bl 0x822b7568
	sub_822B7568(ctx, base);
	// addi r3,r30,112
	ctx.r3.s64 = r30.s64 + 112;
	// bl 0x822b7280
	sub_822B7280(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c50e8
	sub_822C50E8(ctx, base);
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

__attribute__((alias("__imp__sub_822B8520"))) PPC_WEAK_FUNC(sub_822B8520);
PPC_FUNC_IMPL(__imp__sub_822B8520) {
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
	// addi r3,r30,452
	ctx.r3.s64 = r30.s64 + 452;
	// bl 0x822b80a0
	sub_822B80A0(ctx, base);
	// addi r3,r30,392
	ctx.r3.s64 = r30.s64 + 392;
	// bl 0x822b7470
	sub_822B7470(ctx, base);
	// addi r3,r30,344
	ctx.r3.s64 = r30.s64 + 344;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// addi r3,r30,280
	ctx.r3.s64 = r30.s64 + 280;
	// bl 0x822b7378
	sub_822B7378(ctx, base);
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x822b7f88
	sub_822B7F88(ctx, base);
	// addi r3,r30,168
	ctx.r3.s64 = r30.s64 + 168;
	// bl 0x822b7568
	sub_822B7568(ctx, base);
	// addi r3,r30,112
	ctx.r3.s64 = r30.s64 + 112;
	// bl 0x822b7280
	sub_822B7280(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c50e8
	sub_822C50E8(ctx, base);
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

__attribute__((alias("__imp__sub_822B8598"))) PPC_WEAK_FUNC(sub_822B8598);
PPC_FUNC_IMPL(__imp__sub_822B8598) {
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
	// bl 0x822c50e8
	sub_822C50E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B85C0"))) PPC_WEAK_FUNC(sub_822B85C0);
PPC_FUNC_IMPL(__imp__sub_822B85C0) {
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
	// addi r3,r11,112
	ctx.r3.s64 = r11.s64 + 112;
	// bl 0x822b7280
	sub_822B7280(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B85EC"))) PPC_WEAK_FUNC(sub_822B85EC);
PPC_FUNC_IMPL(__imp__sub_822B85EC) {
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
	// addi r3,r11,168
	ctx.r3.s64 = r11.s64 + 168;
	// bl 0x822b7660
	sub_822B7660(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B8618"))) PPC_WEAK_FUNC(sub_822B8618);
PPC_FUNC_IMPL(__imp__sub_822B8618) {
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
	// addi r3,r11,224
	ctx.r3.s64 = r11.s64 + 224;
	// bl 0x822b7f88
	sub_822B7F88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B8644"))) PPC_WEAK_FUNC(sub_822B8644);
PPC_FUNC_IMPL(__imp__sub_822B8644) {
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
	// addi r3,r11,280
	ctx.r3.s64 = r11.s64 + 280;
	// bl 0x822b7378
	sub_822B7378(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B8670"))) PPC_WEAK_FUNC(sub_822B8670);
PPC_FUNC_IMPL(__imp__sub_822B8670) {
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
	// addi r3,r11,344
	ctx.r3.s64 = r11.s64 + 344;
	// bl 0x821e7720
	sub_821E7720(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B869C"))) PPC_WEAK_FUNC(sub_822B869C);
PPC_FUNC_IMPL(__imp__sub_822B869C) {
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
	// addi r3,r11,392
	ctx.r3.s64 = r11.s64 + 392;
	// bl 0x822b7470
	sub_822B7470(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B86C8"))) PPC_WEAK_FUNC(sub_822B86C8);
PPC_FUNC_IMPL(__imp__sub_822B86C8) {
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
	// lwz r16,8384(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8384);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,2924
	ctx.r4.s64 = r11.s64 + 2924;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,2840
	ctx.r4.s64 = r11.s64 + 2840;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r4,604(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 604);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d80
	sub_82270D80(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-31696
	ctx.r4.s64 = r11.s64 + -31696;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,8368
	ctx.r4.s64 = r11.s64 + 8368;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// lis r29,-32128
	r29.s64 = -2105540608;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822b8790
	if (!cr0.eq) goto loc_822B8790;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,23616(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 23616);
	// bl 0x82284900
	sub_82284900(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x822b8794
	if (cr0.eq) goto loc_822B8794;
loc_822B8790:
	// li r11,1
	r11.s64 = 1;
loc_822B8794:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822b888c
	if (!cr0.eq) goto loc_822B888C;
	// lwz r11,23616(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 23616);
	// lwz r4,604(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 604);
	// addi r3,r11,44
	ctx.r3.s64 = r11.s64 + 44;
	// bl 0x822a3240
	sub_822A3240(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822b87ec
	if (!cr0.eq) goto loc_822B87EC;
	// lwz r11,23616(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 23616);
	// lwz r4,604(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 604);
	// addi r3,r11,44
	ctx.r3.s64 = r11.s64 + 44;
	// bl 0x822a33c0
	sub_822A33C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822b87ec
	if (!cr0.eq) goto loc_822B87EC;
	// lwz r11,23616(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 23616);
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// lwz r5,604(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 604);
	// addi r4,r11,44
	ctx.r4.s64 = r11.s64 + 44;
	// bl 0x822a2a10
	sub_822A2A10(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x822b888c
	goto loc_822B888C;
loc_822B87EC:
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// lwz r4,23616(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 23616);
	// bl 0x82287058
	sub_82287058(ctx, base);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// li r26,0
	r26.s64 = 0;
	// subf r10,r4,r11
	ctx.r10.s64 = r11.s64 - ctx.r4.s64;
	// srawi. r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822b8850
	if (cr0.eq) goto loc_822B8850;
	// li r27,0
	r27.s64 = 0;
loc_822B8814:
	// lwz r3,23616(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 23616);
	// lwzx r4,r27,r4
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + ctx.r4.u32);
	// bl 0x82284900
	sub_82284900(ctx, base);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b8834
	if (cr0.eq) goto loc_822B8834;
	// lwzx r11,r27,r4
	r11.u64 = PPC_LOAD_U32(r27.u32 + ctx.r4.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_822B8834:
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// subf r10,r4,r11
	ctx.r10.s64 = r11.s64 - ctx.r4.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// blt cr6,0x822b8814
	if (cr6.lt) goto loc_822B8814;
loc_822B8850:
	// b 0x822b8858
	goto loc_822B8858;
loc_822B8854:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_822B8858:
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
	// bne 0x822b8854
	if (!cr0.eq) goto loc_822B8854;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822b888c
	if (cr6.eq) goto loc_822B888C;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822B888C:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r29,44(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,8348
	ctx.r4.s64 = r11.s64 + 8348;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,600(r30)
	PPC_STORE_U32(r30.u32 + 600, r11.u32);
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x822bd8b8
	sub_822BD8B8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,19528
	ctx.r4.s64 = r11.s64 + 19528;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,8336
	ctx.r4.s64 = r11.s64 + 8336;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x822b8934
	if (cr0.eq) goto loc_822B8934;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_822B8934:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,2792
	ctx.r4.s64 = r11.s64 + 2792;
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x822bdaa0
	sub_822BDAA0(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822B86D0"))) PPC_WEAK_FUNC(sub_822B86D0);
PPC_FUNC_IMPL(__imp__sub_822B86D0) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,2924
	ctx.r4.s64 = r11.s64 + 2924;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,2840
	ctx.r4.s64 = r11.s64 + 2840;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r4,604(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 604);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d80
	sub_82270D80(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-31696
	ctx.r4.s64 = r11.s64 + -31696;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,8368
	ctx.r4.s64 = r11.s64 + 8368;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// lis r29,-32128
	r29.s64 = -2105540608;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822b8790
	if (!cr0.eq) goto loc_822B8790;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,23616(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 23616);
	// bl 0x82284900
	sub_82284900(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x822b8794
	if (cr0.eq) goto loc_822B8794;
loc_822B8790:
	// li r11,1
	r11.s64 = 1;
loc_822B8794:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822b888c
	if (!cr0.eq) goto loc_822B888C;
	// lwz r11,23616(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 23616);
	// lwz r4,604(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 604);
	// addi r3,r11,44
	ctx.r3.s64 = r11.s64 + 44;
	// bl 0x822a3240
	sub_822A3240(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822b87ec
	if (!cr0.eq) goto loc_822B87EC;
	// lwz r11,23616(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 23616);
	// lwz r4,604(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 604);
	// addi r3,r11,44
	ctx.r3.s64 = r11.s64 + 44;
	// bl 0x822a33c0
	sub_822A33C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822b87ec
	if (!cr0.eq) goto loc_822B87EC;
	// lwz r11,23616(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 23616);
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// lwz r5,604(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 604);
	// addi r4,r11,44
	ctx.r4.s64 = r11.s64 + 44;
	// bl 0x822a2a10
	sub_822A2A10(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x822b888c
	goto loc_822B888C;
loc_822B87EC:
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// lwz r4,23616(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 23616);
	// bl 0x82287058
	sub_82287058(ctx, base);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// li r26,0
	r26.s64 = 0;
	// subf r10,r4,r11
	ctx.r10.s64 = r11.s64 - ctx.r4.s64;
	// srawi. r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822b8850
	if (cr0.eq) goto loc_822B8850;
	// li r27,0
	r27.s64 = 0;
loc_822B8814:
	// lwz r3,23616(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 23616);
	// lwzx r4,r27,r4
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + ctx.r4.u32);
	// bl 0x82284900
	sub_82284900(ctx, base);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b8834
	if (cr0.eq) goto loc_822B8834;
	// lwzx r11,r27,r4
	r11.u64 = PPC_LOAD_U32(r27.u32 + ctx.r4.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_822B8834:
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// subf r10,r4,r11
	ctx.r10.s64 = r11.s64 - ctx.r4.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// blt cr6,0x822b8814
	if (cr6.lt) goto loc_822B8814;
loc_822B8850:
	// b 0x822b8858
	goto loc_822B8858;
loc_822B8854:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_822B8858:
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
	// bne 0x822b8854
	if (!cr0.eq) goto loc_822B8854;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822b888c
	if (cr6.eq) goto loc_822B888C;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822B888C:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r29,44(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,8348
	ctx.r4.s64 = r11.s64 + 8348;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,600(r30)
	PPC_STORE_U32(r30.u32 + 600, r11.u32);
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x822bd8b8
	sub_822BD8B8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,19528
	ctx.r4.s64 = r11.s64 + 19528;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,8336
	ctx.r4.s64 = r11.s64 + 8336;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x822b8934
	if (cr0.eq) goto loc_822B8934;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_822B8934:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,2792
	ctx.r4.s64 = r11.s64 + 2792;
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x822bdaa0
	sub_822BDAA0(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822B8988"))) PPC_WEAK_FUNC(sub_822B8988);
PPC_FUNC_IMPL(__imp__sub_822B8988) {
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
	// bl 0x82286230
	sub_82286230(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B89B0"))) PPC_WEAK_FUNC(sub_822B89B0);
PPC_FUNC_IMPL(__imp__sub_822B89B0) {
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
	// lwz r16,8456(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8456);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r27,60
	ctx.r3.s64 = r27.s64 + 60;
	// lwz r4,604(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 604);
	// bl 0x822c0af8
	sub_822C0AF8(ctx, base);
	// lis r30,-32128
	r30.s64 = -2105540608;
	// lwz r3,23616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 23616);
	// bl 0x82285e78
	sub_82285E78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b8a00
	if (cr0.eq) goto loc_822B8A00;
	// lwz r4,604(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 604);
	// lwz r3,23616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 23616);
	// bl 0x82285cc0
	sub_82285CC0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822b8adc
	if (!cr0.eq) goto loc_822B8ADC;
loc_822B8A00:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r5,600(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 600);
	// lwz r4,23616(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 23616);
	// bl 0x822b8328
	sub_822B8328(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r26,0
	r26.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822b8a88
	if (cr0.eq) goto loc_822B8A88;
	// li r29,0
	r29.s64 = 0;
loc_822B8A30:
	// lwz r3,23616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 23616);
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x82285cc0
	sub_82285CC0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b8a60
	if (cr0.eq) goto loc_822B8A60;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r26,r28
	r26.u64 = r28.u64;
	// lwz r3,23616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 23616);
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x822853c8
	sub_822853C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b8a84
	if (cr0.eq) goto loc_822B8A84;
loc_822B8A60:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// blt cr6,0x822b8a30
	if (cr6.lt) goto loc_822B8A30;
	// b 0x822b8a88
	goto loc_822B8A88;
loc_822B8A84:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_822B8A88:
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x822b3888
	sub_822B3888(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x822b8aa8
	goto loc_822B8AA8;
loc_822B8AA4:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_822B8AA8:
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
	// bne 0x822b8aa4
	if (!cr0.eq) goto loc_822B8AA4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822b8adc
	if (cr6.eq) goto loc_822B8ADC;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822B8ADC:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822B89B8"))) PPC_WEAK_FUNC(sub_822B89B8);
PPC_FUNC_IMPL(__imp__sub_822B89B8) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r27,60
	ctx.r3.s64 = r27.s64 + 60;
	// lwz r4,604(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 604);
	// bl 0x822c0af8
	sub_822C0AF8(ctx, base);
	// lis r30,-32128
	r30.s64 = -2105540608;
	// lwz r3,23616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 23616);
	// bl 0x82285e78
	sub_82285E78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b8a00
	if (cr0.eq) goto loc_822B8A00;
	// lwz r4,604(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 604);
	// lwz r3,23616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 23616);
	// bl 0x82285cc0
	sub_82285CC0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822b8adc
	if (!cr0.eq) goto loc_822B8ADC;
loc_822B8A00:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r5,600(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 600);
	// lwz r4,23616(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 23616);
	// bl 0x822b8328
	sub_822B8328(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r26,0
	r26.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822b8a88
	if (cr0.eq) goto loc_822B8A88;
	// li r29,0
	r29.s64 = 0;
loc_822B8A30:
	// lwz r3,23616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 23616);
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x82285cc0
	sub_82285CC0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b8a60
	if (cr0.eq) goto loc_822B8A60;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r26,r28
	r26.u64 = r28.u64;
	// lwz r3,23616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 23616);
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x822853c8
	sub_822853C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b8a84
	if (cr0.eq) goto loc_822B8A84;
loc_822B8A60:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// blt cr6,0x822b8a30
	if (cr6.lt) goto loc_822B8A30;
	// b 0x822b8a88
	goto loc_822B8A88;
loc_822B8A84:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_822B8A88:
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x822b3888
	sub_822B3888(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x822b8aa8
	goto loc_822B8AA8;
loc_822B8AA4:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_822B8AA8:
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
	// bne 0x822b8aa4
	if (!cr0.eq) goto loc_822B8AA4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822b8adc
	if (cr6.eq) goto loc_822B8ADC;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822B8ADC:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822B8AE4"))) PPC_WEAK_FUNC(sub_822B8AE4);
PPC_FUNC_IMPL(__imp__sub_822B8AE4) {
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
	// bl 0x82286230
	sub_82286230(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B8B0C"))) PPC_WEAK_FUNC(sub_822B8B0C);
PPC_FUNC_IMPL(__imp__sub_822B8B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822B8B10"))) PPC_WEAK_FUNC(sub_822B8B10);
PPC_FUNC_IMPL(__imp__sub_822B8B10) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,9720(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 9720);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-288
	r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r25,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r25.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9296
	r29.s64 = ctx.r10.s64 + -9296;
	// bne 0x822b8b80
	if (!cr0.eq) goto loc_822B8B80;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9192
	ctx.r4.s64 = r11.s64 + 9192;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B8B80:
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
	// beq 0x822b8bd0
	if (cr0.eq) goto loc_822B8BD0;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x822b3c50
	sub_822B3C50(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
loc_822B8BC8:
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822b9f60
	goto loc_822B9F60;
loc_822B8BD0:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9300
	r29.s64 = ctx.r10.s64 + -9300;
	// bne 0x822b8bfc
	if (!cr0.eq) goto loc_822B8BFC;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9168
	ctx.r4.s64 = r11.s64 + 9168;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B8BFC:
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
	// beq 0x822b8c28
	if (cr0.eq) goto loc_822B8C28;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b41c0
	sub_822B41C0(ctx, base);
loc_822B8C1C:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r25,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r25.u32);
	// b 0x822b8bc8
	goto loc_822B8BC8;
loc_822B8C28:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9304
	r29.s64 = ctx.r10.s64 + -9304;
	// bne 0x822b8c54
	if (!cr0.eq) goto loc_822B8C54;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9144
	ctx.r4.s64 = r11.s64 + 9144;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B8C54:
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
	// beq 0x822b8c78
	if (cr0.eq) goto loc_822B8C78;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b4248
	sub_822B4248(ctx, base);
	// b 0x822b8c1c
	goto loc_822B8C1C;
loc_822B8C78:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9308
	r29.s64 = ctx.r10.s64 + -9308;
	// bne 0x822b8ca4
	if (!cr0.eq) goto loc_822B8CA4;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9128
	ctx.r4.s64 = r11.s64 + 9128;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B8CA4:
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
	// beq 0x822b8cd0
	if (cr0.eq) goto loc_822B8CD0;
	// lwz r11,596(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 596);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r25,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r25.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822b9f64
	goto loc_822B9F64;
loc_822B8CD0:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9312
	r29.s64 = ctx.r10.s64 + -9312;
	// bne 0x822b8cfc
	if (!cr0.eq) goto loc_822B8CFC;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-20848
	ctx.r4.s64 = r11.s64 + -20848;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B8CFC:
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
	// beq 0x822b8d3c
	if (cr0.eq) goto loc_822B8D3C;
	// lwz r11,596(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 596);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x822b8d28
	if (cr6.gt) goto loc_822B8D28;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_822B8D28:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// stw r25,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r25.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822b9f64
	goto loc_822B9F64;
loc_822B8D3C:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9316
	r29.s64 = ctx.r10.s64 + -9316;
	// bne 0x822b8d68
	if (!cr0.eq) goto loc_822B8D68;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9112
	ctx.r4.s64 = r11.s64 + 9112;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B8D68:
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
	// beq 0x822b8d8c
	if (cr0.eq) goto loc_822B8D8C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b37f8
	sub_822B37F8(ctx, base);
	// b 0x822b8c1c
	goto loc_822B8C1C;
loc_822B8D8C:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9320
	r29.s64 = ctx.r10.s64 + -9320;
	// bne 0x822b8db8
	if (!cr0.eq) goto loc_822B8DB8;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9096
	ctx.r4.s64 = r11.s64 + 9096;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B8DB8:
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
	// beq 0x822b8e00
	if (cr0.eq) goto loc_822B8E00;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,44(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 44);
	// mulli r10,r3,192
	ctx.r10.s64 = ctx.r3.s64 * 192;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x8227d638
	sub_8227D638(ctx, base);
loc_822B8DF0:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_822B8DF8:
	// stw r25,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r25.u32);
	// b 0x822b9f60
	goto loc_822B9F60;
loc_822B8E00:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9324
	r29.s64 = ctx.r10.s64 + -9324;
	// bne 0x822b8e2c
	if (!cr0.eq) goto loc_822B8E2C;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9076
	ctx.r4.s64 = r11.s64 + 9076;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B8E2C:
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
	// beq 0x822b8e7c
	if (cr0.eq) goto loc_822B8E7C;
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
	// lwz r10,44(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 44);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mulli r11,r11,192
	r11.s64 = r11.s64 * 192;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x822bd3b0
	sub_822BD3B0(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_822B8E70:
	// li r11,5
	r11.s64 = 5;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x822b9f5c
	goto loc_822B9F5C;
loc_822B8E7C:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9328
	r29.s64 = ctx.r10.s64 + -9328;
	// bne 0x822b8ea8
	if (!cr0.eq) goto loc_822B8EA8;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9060
	ctx.r4.s64 = r11.s64 + 9060;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B8EA8:
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
	// beq 0x822b8ee4
	if (cr0.eq) goto loc_822B8EE4;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,44(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 44);
	// mulli r10,r3,192
	ctx.r10.s64 = ctx.r3.s64 * 192;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x8227d640
	sub_8227D640(ctx, base);
	// b 0x822b8df0
	goto loc_822B8DF0;
loc_822B8EE4:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9332
	r29.s64 = ctx.r10.s64 + -9332;
	// bne 0x822b8f10
	if (!cr0.eq) goto loc_822B8F10;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9044
	ctx.r4.s64 = r11.s64 + 9044;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B8F10:
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
	// beq 0x822b8f58
	if (cr0.eq) goto loc_822B8F58;
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
	// lwz r10,44(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 44);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mulli r11,r11,192
	r11.s64 = r11.s64 * 192;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x822bd420
	sub_822BD420(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// b 0x822b8e70
	goto loc_822B8E70;
loc_822B8F58:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9336
	r29.s64 = ctx.r10.s64 + -9336;
	// bne 0x822b8f84
	if (!cr0.eq) goto loc_822B8F84;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9032
	ctx.r4.s64 = r11.s64 + 9032;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B8F84:
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
	// beq 0x822b8fd8
	if (cr0.eq) goto loc_822B8FD8;
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822b6bd0
	sub_822B6BD0(ctx, base);
loc_822B8FD0:
	// stw r25,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r25.u32);
	// b 0x822b8df8
	goto loc_822B8DF8;
loc_822B8FD8:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9340
	r29.s64 = ctx.r10.s64 + -9340;
	// bne 0x822b9004
	if (!cr0.eq) goto loc_822B9004;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9020
	ctx.r4.s64 = r11.s64 + 9020;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B9004:
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
	// beq 0x822b9034
	if (cr0.eq) goto loc_822B9034;
	// lwz r11,600(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 600);
	// li r10,5
	ctx.r10.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822b9f64
	goto loc_822B9F64;
loc_822B9034:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9344
	r29.s64 = ctx.r10.s64 + -9344;
	// bne 0x822b9060
	if (!cr0.eq) goto loc_822B9060;
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9004
	ctx.r4.s64 = r11.s64 + 9004;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B9060:
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
	// beq 0x822b9088
	if (cr0.eq) goto loc_822B9088;
	// addi r3,r26,172
	ctx.r3.s64 = r26.s64 + 172;
	// lwz r4,600(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 600);
	// bl 0x822c0c20
	sub_822C0C20(ctx, base);
	// b 0x822b8df0
	goto loc_822B8DF0;
loc_822B9088:
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9348
	r29.s64 = ctx.r10.s64 + -9348;
	// bne 0x822b90b4
	if (!cr0.eq) goto loc_822B90B4;
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8992
	ctx.r4.s64 = r11.s64 + 8992;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B90B4:
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
	// beq 0x822b90ec
	if (cr0.eq) goto loc_822B90EC;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x82318050
	sub_82318050(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// stw r11,600(r26)
	PPC_STORE_U32(r26.u32 + 600, r11.u32);
	// b 0x822b8fd0
	goto loc_822B8FD0;
loc_822B90EC:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9352
	r29.s64 = ctx.r10.s64 + -9352;
	// bne 0x822b9118
	if (!cr0.eq) goto loc_822B9118;
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B9118:
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
	// beq 0x822b9154
	if (cr0.eq) goto loc_822B9154;
	// addic. r11,r26,60
	xer.ca = r26.u32 > 4294967235;
	r11.s64 = r26.s64 + 60;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r26,64
	r11.s64 = r26.s64 + 64;
	// bne 0x822b9140
	if (!cr0.eq) goto loc_822B9140;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_822B9140:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// b 0x822b9f64
	goto loc_822B9F64;
loc_822B9154:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9356
	r29.s64 = ctx.r10.s64 + -9356;
	// bne 0x822b9180
	if (!cr0.eq) goto loc_822B9180;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8960
	ctx.r4.s64 = r11.s64 + 8960;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B9180:
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
	// beq 0x822b91b0
	if (cr0.eq) goto loc_822B91B0;
	// lwz r11,604(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 604);
	// li r10,5
	ctx.r10.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822b9f64
	goto loc_822B9F64;
loc_822B91B0:
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9360
	r29.s64 = ctx.r10.s64 + -9360;
	// bne 0x822b91dc
	if (!cr0.eq) goto loc_822B91DC;
	// oris r11,r11,1
	r11.u64 = r11.u64 | 65536;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8944
	ctx.r4.s64 = r11.s64 + 8944;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B91DC:
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
	// beq 0x822b9204
	if (cr0.eq) goto loc_822B9204;
	// addi r3,r26,60
	ctx.r3.s64 = r26.s64 + 60;
	// lwz r4,604(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 604);
	// bl 0x822c0af8
	sub_822C0AF8(ctx, base);
	// b 0x822b8df0
	goto loc_822B8DF0;
loc_822B9204:
	// rlwinm. r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9364
	r29.s64 = ctx.r10.s64 + -9364;
	// bne 0x822b9230
	if (!cr0.eq) goto loc_822B9230;
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8928
	ctx.r4.s64 = r11.s64 + 8928;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B9230:
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
	// beq 0x822b9260
	if (cr0.eq) goto loc_822B9260;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b39f0
	sub_822B39F0(ctx, base);
loc_822B9250:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82317a20
	sub_82317A20(ctx, base);
	// b 0x822b9f60
	goto loc_822B9F60;
loc_822B9260:
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9368
	r29.s64 = ctx.r10.s64 + -9368;
	// bne 0x822b928c
	if (!cr0.eq) goto loc_822B928C;
	// oris r11,r11,4
	r11.u64 = r11.u64 | 262144;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8908
	ctx.r4.s64 = r11.s64 + 8908;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B928C:
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
	// beq 0x822b92b0
	if (cr0.eq) goto loc_822B92B0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b3a68
	sub_822B3A68(ctx, base);
	// b 0x822b9250
	goto loc_822B9250;
loc_822B92B0:
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9372
	r29.s64 = ctx.r10.s64 + -9372;
	// bne 0x822b92dc
	if (!cr0.eq) goto loc_822B92DC;
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8892
	ctx.r4.s64 = r11.s64 + 8892;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B92DC:
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
	// beq 0x822b9314
	if (cr0.eq) goto loc_822B9314;
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
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b39a8
	sub_822B39A8(ctx, base);
	// b 0x822b8fd0
	goto loc_822B8FD0;
loc_822B9314:
	// rlwinm. r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9376
	r29.s64 = ctx.r10.s64 + -9376;
	// bne 0x822b9340
	if (!cr0.eq) goto loc_822B9340;
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,22200
	ctx.r4.s64 = r11.s64 + 22200;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B9340:
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
	// beq 0x822b937c
	if (cr0.eq) goto loc_822B937C;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x82318050
	sub_82318050(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x822b3888
	sub_822B3888(ctx, base);
	// b 0x822b8fd0
	goto loc_822B8FD0;
loc_822B937C:
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9380
	r29.s64 = ctx.r10.s64 + -9380;
	// bne 0x822b93a8
	if (!cr0.eq) goto loc_822B93A8;
	// oris r11,r11,32
	r11.u64 = r11.u64 | 2097152;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8868
	ctx.r4.s64 = r11.s64 + 8868;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B93A8:
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
	// beq 0x822b93cc
	if (cr0.eq) goto loc_822B93CC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b3b48
	sub_822B3B48(ctx, base);
	// b 0x822b9250
	goto loc_822B9250;
loc_822B93CC:
	// rlwinm. r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9384
	r29.s64 = ctx.r10.s64 + -9384;
	// bne 0x822b93f8
	if (!cr0.eq) goto loc_822B93F8;
	// oris r11,r11,64
	r11.u64 = r11.u64 | 4194304;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8852
	ctx.r4.s64 = r11.s64 + 8852;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B93F8:
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
	// beq 0x822b941c
	if (cr0.eq) goto loc_822B941C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b3bb8
	sub_822B3BB8(ctx, base);
	// b 0x822b8df0
	goto loc_822B8DF0;
loc_822B941C:
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9388
	r29.s64 = ctx.r10.s64 + -9388;
	// bne 0x822b9448
	if (!cr0.eq) goto loc_822B9448;
	// oris r11,r11,128
	r11.u64 = r11.u64 | 8388608;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8844
	ctx.r4.s64 = r11.s64 + 8844;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B9448:
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
	// beq 0x822b94a8
	if (cr0.eq) goto loc_822B94A8;
	// addi r3,r26,60
	ctx.r3.s64 = r26.s64 + 60;
	// lwz r4,604(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 604);
	// bl 0x822bf1e8
	sub_822BF1E8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,28532
	ctx.r4.s64 = r11.s64 + 28532;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
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
	// b 0x822b8df0
	goto loc_822B8DF0;
loc_822B94A8:
	// rlwinm. r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9392
	r29.s64 = ctx.r10.s64 + -9392;
	// bne 0x822b94d4
	if (!cr0.eq) goto loc_822B94D4;
	// oris r11,r11,256
	r11.u64 = r11.u64 | 16777216;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8828
	ctx.r4.s64 = r11.s64 + 8828;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B94D4:
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
	// beq 0x822b9510
	if (cr0.eq) goto loc_822B9510;
	// addic. r11,r26,452
	xer.ca = r26.u32 > 4294966843;
	r11.s64 = r26.s64 + 452;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r26,456
	r11.s64 = r26.s64 + 456;
	// bne 0x822b94fc
	if (!cr0.eq) goto loc_822B94FC;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_822B94FC:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// b 0x822b9f64
	goto loc_822B9F64;
loc_822B9510:
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9396
	r29.s64 = ctx.r10.s64 + -9396;
	// bne 0x822b953c
	if (!cr0.eq) goto loc_822B953C;
	// oris r11,r11,512
	r11.u64 = r11.u64 | 33554432;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8800
	ctx.r4.s64 = r11.s64 + 8800;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B953C:
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
	// beq 0x822b9578
	if (cr0.eq) goto loc_822B9578;
	// addic. r11,r26,512
	xer.ca = r26.u32 > 4294966783;
	r11.s64 = r26.s64 + 512;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r26,516
	r11.s64 = r26.s64 + 516;
	// bne 0x822b9564
	if (!cr0.eq) goto loc_822B9564;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_822B9564:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// b 0x822b9f64
	goto loc_822B9F64;
loc_822B9578:
	// rlwinm. r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9400
	r29.s64 = ctx.r10.s64 + -9400;
	// bne 0x822b95a4
	if (!cr0.eq) goto loc_822B95A4;
	// oris r11,r11,1024
	r11.u64 = r11.u64 | 67108864;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8780
	ctx.r4.s64 = r11.s64 + 8780;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B95A4:
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
	// beq 0x822b9600
	if (cr0.eq) goto loc_822B9600;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x822b4dc8
	sub_822B4DC8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b95fc
	if (cr6.eq) goto loc_822B95FC;
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
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
loc_822B95F4:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822b9f60
	goto loc_822B9F60;
loc_822B95FC:
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B9600:
	// rlwinm. r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9404
	r29.s64 = ctx.r10.s64 + -9404;
	// bne 0x822b962c
	if (!cr0.eq) goto loc_822B962C;
	// oris r11,r11,2048
	r11.u64 = r11.u64 | 134217728;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8756
	ctx.r4.s64 = r11.s64 + 8756;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B962C:
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
	// beq 0x822b9660
	if (cr0.eq) goto loc_822B9660;
	// addi r3,r26,512
	ctx.r3.s64 = r26.s64 + 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x822b8fd0
	goto loc_822B8FD0;
loc_822B9660:
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9408
	r29.s64 = ctx.r10.s64 + -9408;
	// bne 0x822b968c
	if (!cr0.eq) goto loc_822B968C;
	// oris r11,r11,4096
	r11.u64 = r11.u64 | 268435456;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-20220
	ctx.r4.s64 = r11.s64 + -20220;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B968C:
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
	// beq 0x822b96b0
	if (cr0.eq) goto loc_822B96B0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b86d0
	sub_822B86D0(ctx, base);
	// b 0x822b8fd0
	goto loc_822B8FD0;
loc_822B96B0:
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9412
	r29.s64 = ctx.r10.s64 + -9412;
	// bne 0x822b96dc
	if (!cr0.eq) goto loc_822B96DC;
	// oris r11,r11,8192
	r11.u64 = r11.u64 | 536870912;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8736
	ctx.r4.s64 = r11.s64 + 8736;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B96DC:
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
	// beq 0x822b9720
	if (cr0.eq) goto loc_822B9720;
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
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r10,44(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 44);
	// mulli r11,r11,192
	r11.s64 = r11.s64 * 192;
	// stw r9,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r9.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x822b8bc8
	goto loc_822B8BC8;
loc_822B9720:
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9416
	r29.s64 = ctx.r10.s64 + -9416;
	// bne 0x822b974c
	if (!cr0.eq) goto loc_822B974C;
	// oris r11,r11,16384
	r11.u64 = r11.u64 | 1073741824;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8716
	ctx.r4.s64 = r11.s64 + 8716;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B974C:
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
	// beq 0x822b9770
	if (cr0.eq) goto loc_822B9770;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b5858
	sub_822B5858(ctx, base);
	// b 0x822b8c1c
	goto loc_822B8C1C;
loc_822B9770:
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9420
	r29.s64 = ctx.r10.s64 + -9420;
	// bne 0x822b9798
	if (!cr0.eq) goto loc_822B9798;
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8700
	ctx.r4.s64 = r11.s64 + 8700;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822B9798:
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
	// beq 0x822b97d4
	if (cr0.eq) goto loc_822B97D4;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,17324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,608(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 608, temp.u32);
	// b 0x822b8fd0
	goto loc_822B8FD0;
loc_822B97D4:
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9428
	r29.s64 = ctx.r10.s64 + -9428;
	// bne 0x822b9808
	if (!cr0.eq) goto loc_822B9808;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-9424(r30)
	PPC_STORE_U32(r30.u32 + -9424, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8684
	ctx.r4.s64 = r11.s64 + 8684;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9808:
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
	// beq 0x822b982c
	if (cr0.eq) goto loc_822B982C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b89b8
	sub_822B89B8(ctx, base);
	// b 0x822b8fd0
	goto loc_822B8FD0;
loc_822B982C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9432
	r29.s64 = ctx.r10.s64 + -9432;
	// bne 0x822b9858
	if (!cr0.eq) goto loc_822B9858;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-9424(r30)
	PPC_STORE_U32(r30.u32 + -9424, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8664
	ctx.r4.s64 = r11.s64 + 8664;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9858:
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
	// beq 0x822b987c
	if (cr0.eq) goto loc_822B987C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b42c8
	sub_822B42C8(ctx, base);
	// b 0x822b8fd0
	goto loc_822B8FD0;
loc_822B987C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9436
	r29.s64 = ctx.r10.s64 + -9436;
	// bne 0x822b98a8
	if (!cr0.eq) goto loc_822B98A8;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-9424(r30)
	PPC_STORE_U32(r30.u32 + -9424, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8648
	ctx.r4.s64 = r11.s64 + 8648;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B98A8:
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
	// beq 0x822b9900
	if (cr0.eq) goto loc_822B9900;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x822b7670
	sub_822B7670(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b98fc
	if (cr6.eq) goto loc_822B98FC;
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
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x822b95f4
	goto loc_822B95F4;
loc_822B98FC:
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9900:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9440
	r29.s64 = ctx.r10.s64 + -9440;
	// bne 0x822b992c
	if (!cr0.eq) goto loc_822B992C;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-9424(r30)
	PPC_STORE_U32(r30.u32 + -9424, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8632
	ctx.r4.s64 = r11.s64 + 8632;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B992C:
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
	// beq 0x822b9984
	if (cr0.eq) goto loc_822B9984;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x822b6250
	sub_822B6250(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b9980
	if (cr6.eq) goto loc_822B9980;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x822b95f4
	goto loc_822B95F4;
loc_822B9980:
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9984:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9444
	r29.s64 = ctx.r10.s64 + -9444;
	// bne 0x822b99b0
	if (!cr0.eq) goto loc_822B99B0;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-9424(r30)
	PPC_STORE_U32(r30.u32 + -9424, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8616
	ctx.r4.s64 = r11.s64 + 8616;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B99B0:
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
	// beq 0x822b9a08
	if (cr0.eq) goto loc_822B9A08;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x822b6518
	sub_822B6518(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b9a04
	if (cr6.eq) goto loc_822B9A04;
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x822b95f4
	goto loc_822B95F4;
loc_822B9A04:
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9A08:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9448
	r29.s64 = ctx.r10.s64 + -9448;
	// bne 0x822b9a34
	if (!cr0.eq) goto loc_822B9A34;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-9424(r30)
	PPC_STORE_U32(r30.u32 + -9424, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-8432
	ctx.r4.s64 = r11.s64 + -8432;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9A34:
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
	// beq 0x822b9a8c
	if (cr0.eq) goto loc_822B9A8C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x822b6650
	sub_822B6650(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b9a88
	if (cr6.eq) goto loc_822B9A88;
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// b 0x822b95f4
	goto loc_822B95F4;
loc_822B9A88:
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9A8C:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9452
	r29.s64 = ctx.r10.s64 + -9452;
	// bne 0x822b9ab8
	if (!cr0.eq) goto loc_822B9AB8;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-9424(r30)
	PPC_STORE_U32(r30.u32 + -9424, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8596
	ctx.r4.s64 = r11.s64 + 8596;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9AB8:
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
	// beq 0x822b9b10
	if (cr0.eq) goto loc_822B9B10;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x822b6a18
	sub_822B6A18(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b9b0c
	if (cr6.eq) goto loc_822B9B0C;
	// addi r4,r31,152
	ctx.r4.s64 = r31.s64 + 152;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// b 0x822b95f4
	goto loc_822B95F4;
loc_822B9B0C:
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9B10:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9456
	r29.s64 = ctx.r10.s64 + -9456;
	// bne 0x822b9b3c
	if (!cr0.eq) goto loc_822B9B3C;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,-9424(r30)
	PPC_STORE_U32(r30.u32 + -9424, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8572
	ctx.r4.s64 = r11.s64 + 8572;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9B3C:
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
	// beq 0x822b9b94
	if (cr0.eq) goto loc_822B9B94;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x822b6a90
	sub_822B6A90(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b9b90
	if (cr6.eq) goto loc_822B9B90;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// b 0x822b95f4
	goto loc_822B95F4;
loc_822B9B90:
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9B94:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9460
	r29.s64 = ctx.r10.s64 + -9460;
	// bne 0x822b9bc0
	if (!cr0.eq) goto loc_822B9BC0;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,-9424(r30)
	PPC_STORE_U32(r30.u32 + -9424, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8556
	ctx.r4.s64 = r11.s64 + 8556;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9BC0:
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
	// beq 0x822b9be8
	if (cr0.eq) goto loc_822B9BE8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b59a0
	sub_822B59A0(ctx, base);
	// b 0x822b8fd0
	goto loc_822B8FD0;
loc_822B9BE8:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9464
	r29.s64 = ctx.r10.s64 + -9464;
	// bne 0x822b9c14
	if (!cr0.eq) goto loc_822B9C14;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,-9424(r30)
	PPC_STORE_U32(r30.u32 + -9424, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8532
	ctx.r4.s64 = r11.s64 + 8532;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9C14:
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
	// beq 0x822b9c3c
	if (cr0.eq) goto loc_822B9C3C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b5b28
	sub_822B5B28(ctx, base);
	// b 0x822b8fd0
	goto loc_822B8FD0;
loc_822B9C3C:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9468
	r29.s64 = ctx.r10.s64 + -9468;
	// bne 0x822b9c64
	if (!cr0.eq) goto loc_822B9C64;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,-9424(r30)
	PPC_STORE_U32(r30.u32 + -9424, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8520
	ctx.r4.s64 = r11.s64 + 8520;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822B9C64:
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
	// beq 0x822b9cc0
	if (cr0.eq) goto loc_822B9CC0;
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8227bd18
	sub_8227BD18(ctx, base);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// beq cr6,0x822b8fd0
	if (cr6.eq) goto loc_822B8FD0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8227c858
	sub_8227C858(ctx, base);
	// b 0x822b8fd0
	goto loc_822B8FD0;
loc_822B9CC0:
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82272d90
	sub_82272D90(ctx, base);
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
	// beq 0x822b9d40
	if (cr0.eq) goto loc_822B9D40;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r27,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r27.u32);
	// addi r11,r11,21364
	r11.s64 = r11.s64 + 21364;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// lhz r11,10(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 10);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,10(r27)
	PPC_STORE_U16(r27.u32 + 10, r11.u16);
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x822b5f60
	sub_822B5F60(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b9d40
	if (cr6.eq) goto loc_822B9D40;
	// addi r4,r31,168
	ctx.r4.s64 = r31.s64 + 168;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// b 0x822b95f4
	goto loc_822B95F4;
loc_822B9D40:
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82272ae8
	sub_82272AE8(ctx, base);
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
	// beq 0x822b9dc0
	if (cr0.eq) goto loc_822B9DC0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r27,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r27.u32);
	// addi r11,r11,21084
	r11.s64 = r11.s64 + 21084;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// lhz r11,10(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 10);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,10(r27)
	PPC_STORE_U16(r27.u32 + 10, r11.u16);
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x822b6040
	sub_822B6040(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b9dc0
	if (cr6.eq) goto loc_822B9DC0;
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// b 0x822b95f4
	goto loc_822B95F4;
loc_822B9DC0:
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82272b70
	sub_82272B70(ctx, base);
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
	// beq 0x822b9e40
	if (cr0.eq) goto loc_822B9E40;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r27,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r27.u32);
	// addi r11,r11,21172
	r11.s64 = r11.s64 + 21172;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// lhz r11,10(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 10);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,10(r27)
	PPC_STORE_U16(r27.u32 + 10, r11.u16);
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x822b4ef0
	sub_822B4EF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b9e40
	if (cr6.eq) goto loc_822B9E40;
	// addi r4,r31,184
	ctx.r4.s64 = r31.s64 + 184;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// b 0x822b95f4
	goto loc_822B95F4;
loc_822B9E40:
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82272d08
	sub_82272D08(ctx, base);
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
	// beq 0x822b9ec0
	if (cr0.eq) goto loc_822B9EC0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r27,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r27.u32);
	// addi r11,r11,21276
	r11.s64 = r11.s64 + 21276;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// lhz r11,10(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 10);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,10(r27)
	PPC_STORE_U16(r27.u32 + 10, r11.u16);
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x822b60a0
	sub_822B60A0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b9ec0
	if (cr6.eq) goto loc_822B9EC0;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// b 0x822b95f4
	goto loc_822B95F4;
loc_822B9EC0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b9f00
	if (cr6.eq) goto loc_822B9F00;
	// addi r4,r31,200
	ctx.r4.s64 = r31.s64 + 200;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// b 0x822b95f4
	goto loc_822B95F4;
loc_822B9F00:
	// lwz r4,44(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 44);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822b9f54
	if (cr0.eq) goto loc_822B9F54;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b9f54
	if (cr6.eq) goto loc_822B9F54;
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// b 0x822b95f4
	goto loc_822B95F4;
loc_822B9F54:
	// li r11,6
	r11.s64 = 6;
	// stw r25,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r25.u32);
loc_822B9F5C:
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_822B9F60:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_822B9F64:
	// addi r1,r31,288
	ctx.r1.s64 = r31.s64 + 288;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822B8B18"))) PPC_WEAK_FUNC(sub_822B8B18);
PPC_FUNC_IMPL(__imp__sub_822B8B18) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r25,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r25.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9296
	r29.s64 = ctx.r10.s64 + -9296;
	// bne 0x822b8b80
	if (!cr0.eq) goto loc_822B8B80;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9192
	ctx.r4.s64 = r11.s64 + 9192;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B8B80:
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
	// beq 0x822b8bd0
	if (cr0.eq) goto loc_822B8BD0;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x822b3c50
	sub_822B3C50(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
loc_822B8BC8:
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822b9f60
	goto loc_822B9F60;
loc_822B8BD0:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9300
	r29.s64 = ctx.r10.s64 + -9300;
	// bne 0x822b8bfc
	if (!cr0.eq) goto loc_822B8BFC;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9168
	ctx.r4.s64 = r11.s64 + 9168;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B8BFC:
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
	// beq 0x822b8c28
	if (cr0.eq) goto loc_822B8C28;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b41c0
	sub_822B41C0(ctx, base);
loc_822B8C1C:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r25,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r25.u32);
	// b 0x822b8bc8
	goto loc_822B8BC8;
loc_822B8C28:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9304
	r29.s64 = ctx.r10.s64 + -9304;
	// bne 0x822b8c54
	if (!cr0.eq) goto loc_822B8C54;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9144
	ctx.r4.s64 = r11.s64 + 9144;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B8C54:
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
	// beq 0x822b8c78
	if (cr0.eq) goto loc_822B8C78;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b4248
	sub_822B4248(ctx, base);
	// b 0x822b8c1c
	goto loc_822B8C1C;
loc_822B8C78:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9308
	r29.s64 = ctx.r10.s64 + -9308;
	// bne 0x822b8ca4
	if (!cr0.eq) goto loc_822B8CA4;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9128
	ctx.r4.s64 = r11.s64 + 9128;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B8CA4:
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
	// beq 0x822b8cd0
	if (cr0.eq) goto loc_822B8CD0;
	// lwz r11,596(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 596);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r25,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r25.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822b9f64
	goto loc_822B9F64;
loc_822B8CD0:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9312
	r29.s64 = ctx.r10.s64 + -9312;
	// bne 0x822b8cfc
	if (!cr0.eq) goto loc_822B8CFC;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-20848
	ctx.r4.s64 = r11.s64 + -20848;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B8CFC:
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
	// beq 0x822b8d3c
	if (cr0.eq) goto loc_822B8D3C;
	// lwz r11,596(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 596);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x822b8d28
	if (cr6.gt) goto loc_822B8D28;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_822B8D28:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// stw r25,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r25.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822b9f64
	goto loc_822B9F64;
loc_822B8D3C:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9316
	r29.s64 = ctx.r10.s64 + -9316;
	// bne 0x822b8d68
	if (!cr0.eq) goto loc_822B8D68;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9112
	ctx.r4.s64 = r11.s64 + 9112;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B8D68:
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
	// beq 0x822b8d8c
	if (cr0.eq) goto loc_822B8D8C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b37f8
	sub_822B37F8(ctx, base);
	// b 0x822b8c1c
	goto loc_822B8C1C;
loc_822B8D8C:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9320
	r29.s64 = ctx.r10.s64 + -9320;
	// bne 0x822b8db8
	if (!cr0.eq) goto loc_822B8DB8;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9096
	ctx.r4.s64 = r11.s64 + 9096;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B8DB8:
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
	// beq 0x822b8e00
	if (cr0.eq) goto loc_822B8E00;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,44(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 44);
	// mulli r10,r3,192
	ctx.r10.s64 = ctx.r3.s64 * 192;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x8227d638
	sub_8227D638(ctx, base);
loc_822B8DF0:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_822B8DF8:
	// stw r25,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r25.u32);
	// b 0x822b9f60
	goto loc_822B9F60;
loc_822B8E00:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9324
	r29.s64 = ctx.r10.s64 + -9324;
	// bne 0x822b8e2c
	if (!cr0.eq) goto loc_822B8E2C;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9076
	ctx.r4.s64 = r11.s64 + 9076;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B8E2C:
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
	// beq 0x822b8e7c
	if (cr0.eq) goto loc_822B8E7C;
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
	// lwz r10,44(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 44);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mulli r11,r11,192
	r11.s64 = r11.s64 * 192;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x822bd3b0
	sub_822BD3B0(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_822B8E70:
	// li r11,5
	r11.s64 = 5;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x822b9f5c
	goto loc_822B9F5C;
loc_822B8E7C:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9328
	r29.s64 = ctx.r10.s64 + -9328;
	// bne 0x822b8ea8
	if (!cr0.eq) goto loc_822B8EA8;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9060
	ctx.r4.s64 = r11.s64 + 9060;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B8EA8:
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
	// beq 0x822b8ee4
	if (cr0.eq) goto loc_822B8EE4;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,44(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 44);
	// mulli r10,r3,192
	ctx.r10.s64 = ctx.r3.s64 * 192;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x8227d640
	sub_8227D640(ctx, base);
	// b 0x822b8df0
	goto loc_822B8DF0;
loc_822B8EE4:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9332
	r29.s64 = ctx.r10.s64 + -9332;
	// bne 0x822b8f10
	if (!cr0.eq) goto loc_822B8F10;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9044
	ctx.r4.s64 = r11.s64 + 9044;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B8F10:
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
	// beq 0x822b8f58
	if (cr0.eq) goto loc_822B8F58;
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
	// lwz r10,44(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 44);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mulli r11,r11,192
	r11.s64 = r11.s64 * 192;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x822bd420
	sub_822BD420(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// b 0x822b8e70
	goto loc_822B8E70;
loc_822B8F58:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9336
	r29.s64 = ctx.r10.s64 + -9336;
	// bne 0x822b8f84
	if (!cr0.eq) goto loc_822B8F84;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9032
	ctx.r4.s64 = r11.s64 + 9032;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B8F84:
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
	// beq 0x822b8fd8
	if (cr0.eq) goto loc_822B8FD8;
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822b6bd0
	sub_822B6BD0(ctx, base);
loc_822B8FD0:
	// stw r25,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r25.u32);
	// b 0x822b8df8
	goto loc_822B8DF8;
loc_822B8FD8:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9340
	r29.s64 = ctx.r10.s64 + -9340;
	// bne 0x822b9004
	if (!cr0.eq) goto loc_822B9004;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9020
	ctx.r4.s64 = r11.s64 + 9020;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B9004:
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
	// beq 0x822b9034
	if (cr0.eq) goto loc_822B9034;
	// lwz r11,600(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 600);
	// li r10,5
	ctx.r10.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822b9f64
	goto loc_822B9F64;
loc_822B9034:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9344
	r29.s64 = ctx.r10.s64 + -9344;
	// bne 0x822b9060
	if (!cr0.eq) goto loc_822B9060;
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9004
	ctx.r4.s64 = r11.s64 + 9004;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B9060:
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
	// beq 0x822b9088
	if (cr0.eq) goto loc_822B9088;
	// addi r3,r26,172
	ctx.r3.s64 = r26.s64 + 172;
	// lwz r4,600(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 600);
	// bl 0x822c0c20
	sub_822C0C20(ctx, base);
	// b 0x822b8df0
	goto loc_822B8DF0;
loc_822B9088:
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9348
	r29.s64 = ctx.r10.s64 + -9348;
	// bne 0x822b90b4
	if (!cr0.eq) goto loc_822B90B4;
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8992
	ctx.r4.s64 = r11.s64 + 8992;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B90B4:
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
	// beq 0x822b90ec
	if (cr0.eq) goto loc_822B90EC;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x82318050
	sub_82318050(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// stw r11,600(r26)
	PPC_STORE_U32(r26.u32 + 600, r11.u32);
	// b 0x822b8fd0
	goto loc_822B8FD0;
loc_822B90EC:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9352
	r29.s64 = ctx.r10.s64 + -9352;
	// bne 0x822b9118
	if (!cr0.eq) goto loc_822B9118;
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B9118:
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
	// beq 0x822b9154
	if (cr0.eq) goto loc_822B9154;
	// addic. r11,r26,60
	xer.ca = r26.u32 > 4294967235;
	r11.s64 = r26.s64 + 60;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r26,64
	r11.s64 = r26.s64 + 64;
	// bne 0x822b9140
	if (!cr0.eq) goto loc_822B9140;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_822B9140:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// b 0x822b9f64
	goto loc_822B9F64;
loc_822B9154:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9356
	r29.s64 = ctx.r10.s64 + -9356;
	// bne 0x822b9180
	if (!cr0.eq) goto loc_822B9180;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8960
	ctx.r4.s64 = r11.s64 + 8960;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B9180:
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
	// beq 0x822b91b0
	if (cr0.eq) goto loc_822B91B0;
	// lwz r11,604(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 604);
	// li r10,5
	ctx.r10.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x822b9f64
	goto loc_822B9F64;
loc_822B91B0:
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9360
	r29.s64 = ctx.r10.s64 + -9360;
	// bne 0x822b91dc
	if (!cr0.eq) goto loc_822B91DC;
	// oris r11,r11,1
	r11.u64 = r11.u64 | 65536;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8944
	ctx.r4.s64 = r11.s64 + 8944;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B91DC:
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
	// beq 0x822b9204
	if (cr0.eq) goto loc_822B9204;
	// addi r3,r26,60
	ctx.r3.s64 = r26.s64 + 60;
	// lwz r4,604(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 604);
	// bl 0x822c0af8
	sub_822C0AF8(ctx, base);
	// b 0x822b8df0
	goto loc_822B8DF0;
loc_822B9204:
	// rlwinm. r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9364
	r29.s64 = ctx.r10.s64 + -9364;
	// bne 0x822b9230
	if (!cr0.eq) goto loc_822B9230;
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8928
	ctx.r4.s64 = r11.s64 + 8928;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B9230:
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
	// beq 0x822b9260
	if (cr0.eq) goto loc_822B9260;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b39f0
	sub_822B39F0(ctx, base);
loc_822B9250:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82317a20
	sub_82317A20(ctx, base);
	// b 0x822b9f60
	goto loc_822B9F60;
loc_822B9260:
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9368
	r29.s64 = ctx.r10.s64 + -9368;
	// bne 0x822b928c
	if (!cr0.eq) goto loc_822B928C;
	// oris r11,r11,4
	r11.u64 = r11.u64 | 262144;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8908
	ctx.r4.s64 = r11.s64 + 8908;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B928C:
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
	// beq 0x822b92b0
	if (cr0.eq) goto loc_822B92B0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b3a68
	sub_822B3A68(ctx, base);
	// b 0x822b9250
	goto loc_822B9250;
loc_822B92B0:
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9372
	r29.s64 = ctx.r10.s64 + -9372;
	// bne 0x822b92dc
	if (!cr0.eq) goto loc_822B92DC;
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8892
	ctx.r4.s64 = r11.s64 + 8892;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B92DC:
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
	// beq 0x822b9314
	if (cr0.eq) goto loc_822B9314;
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
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b39a8
	sub_822B39A8(ctx, base);
	// b 0x822b8fd0
	goto loc_822B8FD0;
loc_822B9314:
	// rlwinm. r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9376
	r29.s64 = ctx.r10.s64 + -9376;
	// bne 0x822b9340
	if (!cr0.eq) goto loc_822B9340;
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,22200
	ctx.r4.s64 = r11.s64 + 22200;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B9340:
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
	// beq 0x822b937c
	if (cr0.eq) goto loc_822B937C;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x82318050
	sub_82318050(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x822b3888
	sub_822B3888(ctx, base);
	// b 0x822b8fd0
	goto loc_822B8FD0;
loc_822B937C:
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9380
	r29.s64 = ctx.r10.s64 + -9380;
	// bne 0x822b93a8
	if (!cr0.eq) goto loc_822B93A8;
	// oris r11,r11,32
	r11.u64 = r11.u64 | 2097152;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8868
	ctx.r4.s64 = r11.s64 + 8868;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B93A8:
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
	// beq 0x822b93cc
	if (cr0.eq) goto loc_822B93CC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b3b48
	sub_822B3B48(ctx, base);
	// b 0x822b9250
	goto loc_822B9250;
loc_822B93CC:
	// rlwinm. r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9384
	r29.s64 = ctx.r10.s64 + -9384;
	// bne 0x822b93f8
	if (!cr0.eq) goto loc_822B93F8;
	// oris r11,r11,64
	r11.u64 = r11.u64 | 4194304;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8852
	ctx.r4.s64 = r11.s64 + 8852;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B93F8:
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
	// beq 0x822b941c
	if (cr0.eq) goto loc_822B941C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b3bb8
	sub_822B3BB8(ctx, base);
	// b 0x822b8df0
	goto loc_822B8DF0;
loc_822B941C:
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9388
	r29.s64 = ctx.r10.s64 + -9388;
	// bne 0x822b9448
	if (!cr0.eq) goto loc_822B9448;
	// oris r11,r11,128
	r11.u64 = r11.u64 | 8388608;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8844
	ctx.r4.s64 = r11.s64 + 8844;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B9448:
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
	// beq 0x822b94a8
	if (cr0.eq) goto loc_822B94A8;
	// addi r3,r26,60
	ctx.r3.s64 = r26.s64 + 60;
	// lwz r4,604(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 604);
	// bl 0x822bf1e8
	sub_822BF1E8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,28532
	ctx.r4.s64 = r11.s64 + 28532;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
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
	// b 0x822b8df0
	goto loc_822B8DF0;
loc_822B94A8:
	// rlwinm. r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9392
	r29.s64 = ctx.r10.s64 + -9392;
	// bne 0x822b94d4
	if (!cr0.eq) goto loc_822B94D4;
	// oris r11,r11,256
	r11.u64 = r11.u64 | 16777216;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8828
	ctx.r4.s64 = r11.s64 + 8828;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B94D4:
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
	// beq 0x822b9510
	if (cr0.eq) goto loc_822B9510;
	// addic. r11,r26,452
	xer.ca = r26.u32 > 4294966843;
	r11.s64 = r26.s64 + 452;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r26,456
	r11.s64 = r26.s64 + 456;
	// bne 0x822b94fc
	if (!cr0.eq) goto loc_822B94FC;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_822B94FC:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// b 0x822b9f64
	goto loc_822B9F64;
loc_822B9510:
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9396
	r29.s64 = ctx.r10.s64 + -9396;
	// bne 0x822b953c
	if (!cr0.eq) goto loc_822B953C;
	// oris r11,r11,512
	r11.u64 = r11.u64 | 33554432;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8800
	ctx.r4.s64 = r11.s64 + 8800;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B953C:
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
	// beq 0x822b9578
	if (cr0.eq) goto loc_822B9578;
	// addic. r11,r26,512
	xer.ca = r26.u32 > 4294966783;
	r11.s64 = r26.s64 + 512;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r26,516
	r11.s64 = r26.s64 + 516;
	// bne 0x822b9564
	if (!cr0.eq) goto loc_822B9564;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_822B9564:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// b 0x822b9f64
	goto loc_822B9F64;
loc_822B9578:
	// rlwinm. r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9400
	r29.s64 = ctx.r10.s64 + -9400;
	// bne 0x822b95a4
	if (!cr0.eq) goto loc_822B95A4;
	// oris r11,r11,1024
	r11.u64 = r11.u64 | 67108864;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8780
	ctx.r4.s64 = r11.s64 + 8780;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B95A4:
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
	// beq 0x822b9600
	if (cr0.eq) goto loc_822B9600;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x822b4dc8
	sub_822B4DC8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b95fc
	if (cr6.eq) goto loc_822B95FC;
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
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
loc_822B95F4:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822b9f60
	goto loc_822B9F60;
loc_822B95FC:
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B9600:
	// rlwinm. r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9404
	r29.s64 = ctx.r10.s64 + -9404;
	// bne 0x822b962c
	if (!cr0.eq) goto loc_822B962C;
	// oris r11,r11,2048
	r11.u64 = r11.u64 | 134217728;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8756
	ctx.r4.s64 = r11.s64 + 8756;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B962C:
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
	// beq 0x822b9660
	if (cr0.eq) goto loc_822B9660;
	// addi r3,r26,512
	ctx.r3.s64 = r26.s64 + 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x822b8fd0
	goto loc_822B8FD0;
loc_822B9660:
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9408
	r29.s64 = ctx.r10.s64 + -9408;
	// bne 0x822b968c
	if (!cr0.eq) goto loc_822B968C;
	// oris r11,r11,4096
	r11.u64 = r11.u64 | 268435456;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-20220
	ctx.r4.s64 = r11.s64 + -20220;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B968C:
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
	// beq 0x822b96b0
	if (cr0.eq) goto loc_822B96B0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b86d0
	sub_822B86D0(ctx, base);
	// b 0x822b8fd0
	goto loc_822B8FD0;
loc_822B96B0:
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9412
	r29.s64 = ctx.r10.s64 + -9412;
	// bne 0x822b96dc
	if (!cr0.eq) goto loc_822B96DC;
	// oris r11,r11,8192
	r11.u64 = r11.u64 | 536870912;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8736
	ctx.r4.s64 = r11.s64 + 8736;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B96DC:
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
	// beq 0x822b9720
	if (cr0.eq) goto loc_822B9720;
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
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r10,44(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 44);
	// mulli r11,r11,192
	r11.s64 = r11.s64 * 192;
	// stw r9,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r9.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x822b8bc8
	goto loc_822B8BC8;
loc_822B9720:
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9416
	r29.s64 = ctx.r10.s64 + -9416;
	// bne 0x822b974c
	if (!cr0.eq) goto loc_822B974C;
	// oris r11,r11,16384
	r11.u64 = r11.u64 | 1073741824;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8716
	ctx.r4.s64 = r11.s64 + 8716;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9292);
loc_822B974C:
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
	// beq 0x822b9770
	if (cr0.eq) goto loc_822B9770;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b5858
	sub_822B5858(ctx, base);
	// b 0x822b8c1c
	goto loc_822B8C1C;
loc_822B9770:
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9420
	r29.s64 = ctx.r10.s64 + -9420;
	// bne 0x822b9798
	if (!cr0.eq) goto loc_822B9798;
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// stw r11,-9292(r30)
	PPC_STORE_U32(r30.u32 + -9292, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8700
	ctx.r4.s64 = r11.s64 + 8700;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822B9798:
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
	// beq 0x822b97d4
	if (cr0.eq) goto loc_822B97D4;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,17324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,608(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 608, temp.u32);
	// b 0x822b8fd0
	goto loc_822B8FD0;
loc_822B97D4:
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9428
	r29.s64 = ctx.r10.s64 + -9428;
	// bne 0x822b9808
	if (!cr0.eq) goto loc_822B9808;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-9424(r30)
	PPC_STORE_U32(r30.u32 + -9424, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8684
	ctx.r4.s64 = r11.s64 + 8684;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9808:
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
	// beq 0x822b982c
	if (cr0.eq) goto loc_822B982C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b89b8
	sub_822B89B8(ctx, base);
	// b 0x822b8fd0
	goto loc_822B8FD0;
loc_822B982C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9432
	r29.s64 = ctx.r10.s64 + -9432;
	// bne 0x822b9858
	if (!cr0.eq) goto loc_822B9858;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-9424(r30)
	PPC_STORE_U32(r30.u32 + -9424, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8664
	ctx.r4.s64 = r11.s64 + 8664;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9858:
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
	// beq 0x822b987c
	if (cr0.eq) goto loc_822B987C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b42c8
	sub_822B42C8(ctx, base);
	// b 0x822b8fd0
	goto loc_822B8FD0;
loc_822B987C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9436
	r29.s64 = ctx.r10.s64 + -9436;
	// bne 0x822b98a8
	if (!cr0.eq) goto loc_822B98A8;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-9424(r30)
	PPC_STORE_U32(r30.u32 + -9424, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8648
	ctx.r4.s64 = r11.s64 + 8648;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B98A8:
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
	// beq 0x822b9900
	if (cr0.eq) goto loc_822B9900;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x822b7670
	sub_822B7670(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b98fc
	if (cr6.eq) goto loc_822B98FC;
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
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x822b95f4
	goto loc_822B95F4;
loc_822B98FC:
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9900:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9440
	r29.s64 = ctx.r10.s64 + -9440;
	// bne 0x822b992c
	if (!cr0.eq) goto loc_822B992C;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-9424(r30)
	PPC_STORE_U32(r30.u32 + -9424, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8632
	ctx.r4.s64 = r11.s64 + 8632;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B992C:
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
	// beq 0x822b9984
	if (cr0.eq) goto loc_822B9984;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x822b6250
	sub_822B6250(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b9980
	if (cr6.eq) goto loc_822B9980;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x822b95f4
	goto loc_822B95F4;
loc_822B9980:
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9984:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9444
	r29.s64 = ctx.r10.s64 + -9444;
	// bne 0x822b99b0
	if (!cr0.eq) goto loc_822B99B0;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-9424(r30)
	PPC_STORE_U32(r30.u32 + -9424, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8616
	ctx.r4.s64 = r11.s64 + 8616;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B99B0:
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
	// beq 0x822b9a08
	if (cr0.eq) goto loc_822B9A08;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x822b6518
	sub_822B6518(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b9a04
	if (cr6.eq) goto loc_822B9A04;
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x822b95f4
	goto loc_822B95F4;
loc_822B9A04:
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9A08:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9448
	r29.s64 = ctx.r10.s64 + -9448;
	// bne 0x822b9a34
	if (!cr0.eq) goto loc_822B9A34;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-9424(r30)
	PPC_STORE_U32(r30.u32 + -9424, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-8432
	ctx.r4.s64 = r11.s64 + -8432;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9A34:
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
	// beq 0x822b9a8c
	if (cr0.eq) goto loc_822B9A8C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x822b6650
	sub_822B6650(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b9a88
	if (cr6.eq) goto loc_822B9A88;
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// b 0x822b95f4
	goto loc_822B95F4;
loc_822B9A88:
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9A8C:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9452
	r29.s64 = ctx.r10.s64 + -9452;
	// bne 0x822b9ab8
	if (!cr0.eq) goto loc_822B9AB8;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,-9424(r30)
	PPC_STORE_U32(r30.u32 + -9424, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8596
	ctx.r4.s64 = r11.s64 + 8596;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9AB8:
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
	// beq 0x822b9b10
	if (cr0.eq) goto loc_822B9B10;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x822b6a18
	sub_822B6A18(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b9b0c
	if (cr6.eq) goto loc_822B9B0C;
	// addi r4,r31,152
	ctx.r4.s64 = r31.s64 + 152;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// b 0x822b95f4
	goto loc_822B95F4;
loc_822B9B0C:
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9B10:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9456
	r29.s64 = ctx.r10.s64 + -9456;
	// bne 0x822b9b3c
	if (!cr0.eq) goto loc_822B9B3C;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,-9424(r30)
	PPC_STORE_U32(r30.u32 + -9424, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8572
	ctx.r4.s64 = r11.s64 + 8572;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9B3C:
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
	// beq 0x822b9b94
	if (cr0.eq) goto loc_822B9B94;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x822b6a90
	sub_822B6A90(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b9b90
	if (cr6.eq) goto loc_822B9B90;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// b 0x822b95f4
	goto loc_822B95F4;
loc_822B9B90:
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9B94:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9460
	r29.s64 = ctx.r10.s64 + -9460;
	// bne 0x822b9bc0
	if (!cr0.eq) goto loc_822B9BC0;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,-9424(r30)
	PPC_STORE_U32(r30.u32 + -9424, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8556
	ctx.r4.s64 = r11.s64 + 8556;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9BC0:
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
	// beq 0x822b9be8
	if (cr0.eq) goto loc_822B9BE8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b59a0
	sub_822B59A0(ctx, base);
	// b 0x822b8fd0
	goto loc_822B8FD0;
loc_822B9BE8:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9464
	r29.s64 = ctx.r10.s64 + -9464;
	// bne 0x822b9c14
	if (!cr0.eq) goto loc_822B9C14;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,-9424(r30)
	PPC_STORE_U32(r30.u32 + -9424, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8532
	ctx.r4.s64 = r11.s64 + 8532;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-9424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -9424);
loc_822B9C14:
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
	// beq 0x822b9c3c
	if (cr0.eq) goto loc_822B9C3C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b5b28
	sub_822B5B28(ctx, base);
	// b 0x822b8fd0
	goto loc_822B8FD0;
loc_822B9C3C:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-9468
	r29.s64 = ctx.r10.s64 + -9468;
	// bne 0x822b9c64
	if (!cr0.eq) goto loc_822B9C64;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,-9424(r30)
	PPC_STORE_U32(r30.u32 + -9424, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,8520
	ctx.r4.s64 = r11.s64 + 8520;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822B9C64:
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
	// beq 0x822b9cc0
	if (cr0.eq) goto loc_822B9CC0;
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8227bd18
	sub_8227BD18(ctx, base);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// beq cr6,0x822b8fd0
	if (cr6.eq) goto loc_822B8FD0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8227c858
	sub_8227C858(ctx, base);
	// b 0x822b8fd0
	goto loc_822B8FD0;
loc_822B9CC0:
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82272d90
	sub_82272D90(ctx, base);
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
	// beq 0x822b9d40
	if (cr0.eq) goto loc_822B9D40;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r27,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r27.u32);
	// addi r11,r11,21364
	r11.s64 = r11.s64 + 21364;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// lhz r11,10(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 10);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,10(r27)
	PPC_STORE_U16(r27.u32 + 10, r11.u16);
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x822b5f60
	sub_822B5F60(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b9d40
	if (cr6.eq) goto loc_822B9D40;
	// addi r4,r31,168
	ctx.r4.s64 = r31.s64 + 168;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// b 0x822b95f4
	goto loc_822B95F4;
loc_822B9D40:
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82272ae8
	sub_82272AE8(ctx, base);
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
	// beq 0x822b9dc0
	if (cr0.eq) goto loc_822B9DC0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r27,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r27.u32);
	// addi r11,r11,21084
	r11.s64 = r11.s64 + 21084;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// lhz r11,10(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 10);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,10(r27)
	PPC_STORE_U16(r27.u32 + 10, r11.u16);
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x822b6040
	sub_822B6040(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b9dc0
	if (cr6.eq) goto loc_822B9DC0;
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// b 0x822b95f4
	goto loc_822B95F4;
loc_822B9DC0:
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82272b70
	sub_82272B70(ctx, base);
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
	// beq 0x822b9e40
	if (cr0.eq) goto loc_822B9E40;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r27,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r27.u32);
	// addi r11,r11,21172
	r11.s64 = r11.s64 + 21172;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// lhz r11,10(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 10);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,10(r27)
	PPC_STORE_U16(r27.u32 + 10, r11.u16);
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x822b4ef0
	sub_822B4EF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b9e40
	if (cr6.eq) goto loc_822B9E40;
	// addi r4,r31,184
	ctx.r4.s64 = r31.s64 + 184;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// b 0x822b95f4
	goto loc_822B95F4;
loc_822B9E40:
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82272d08
	sub_82272D08(ctx, base);
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
	// beq 0x822b9ec0
	if (cr0.eq) goto loc_822B9EC0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r27,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r27.u32);
	// addi r11,r11,21276
	r11.s64 = r11.s64 + 21276;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// lhz r11,10(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 10);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,10(r27)
	PPC_STORE_U16(r27.u32 + 10, r11.u16);
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x822b60a0
	sub_822B60A0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b9ec0
	if (cr6.eq) goto loc_822B9EC0;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// b 0x822b95f4
	goto loc_822B95F4;
loc_822B9EC0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b9f00
	if (cr6.eq) goto loc_822B9F00;
	// addi r4,r31,200
	ctx.r4.s64 = r31.s64 + 200;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// b 0x822b95f4
	goto loc_822B95F4;
loc_822B9F00:
	// lwz r4,44(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 44);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822b9f54
	if (cr0.eq) goto loc_822B9F54;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822b9f54
	if (cr6.eq) goto loc_822B9F54;
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822b9f60
	if (cr0.eq) goto loc_822B9F60;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// b 0x822b95f4
	goto loc_822B95F4;
loc_822B9F54:
	// li r11,6
	r11.s64 = 6;
	// stw r25,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r25.u32);
loc_822B9F5C:
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_822B9F60:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_822B9F64:
	// addi r1,r31,288
	ctx.r1.s64 = r31.s64 + 288;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822B9F6C"))) PPC_WEAK_FUNC(sub_822B9F6C);
PPC_FUNC_IMPL(__imp__sub_822B9F6C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B9F94"))) PPC_WEAK_FUNC(sub_822B9F94);
PPC_FUNC_IMPL(__imp__sub_822B9F94) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B9FBC"))) PPC_WEAK_FUNC(sub_822B9FBC);
PPC_FUNC_IMPL(__imp__sub_822B9FBC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822B9FE4"))) PPC_WEAK_FUNC(sub_822B9FE4);
PPC_FUNC_IMPL(__imp__sub_822B9FE4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BA00C"))) PPC_WEAK_FUNC(sub_822BA00C);
PPC_FUNC_IMPL(__imp__sub_822BA00C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BA034"))) PPC_WEAK_FUNC(sub_822BA034);
PPC_FUNC_IMPL(__imp__sub_822BA034) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BA05C"))) PPC_WEAK_FUNC(sub_822BA05C);
PPC_FUNC_IMPL(__imp__sub_822BA05C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BA084"))) PPC_WEAK_FUNC(sub_822BA084);
PPC_FUNC_IMPL(__imp__sub_822BA084) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BA0AC"))) PPC_WEAK_FUNC(sub_822BA0AC);
PPC_FUNC_IMPL(__imp__sub_822BA0AC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BA0D4"))) PPC_WEAK_FUNC(sub_822BA0D4);
PPC_FUNC_IMPL(__imp__sub_822BA0D4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BA0FC"))) PPC_WEAK_FUNC(sub_822BA0FC);
PPC_FUNC_IMPL(__imp__sub_822BA0FC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,22,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BA124"))) PPC_WEAK_FUNC(sub_822BA124);
PPC_FUNC_IMPL(__imp__sub_822BA124) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,21,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BA14C"))) PPC_WEAK_FUNC(sub_822BA14C);
PPC_FUNC_IMPL(__imp__sub_822BA14C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,20,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BA174"))) PPC_WEAK_FUNC(sub_822BA174);
PPC_FUNC_IMPL(__imp__sub_822BA174) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,19,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BA19C"))) PPC_WEAK_FUNC(sub_822BA19C);
PPC_FUNC_IMPL(__imp__sub_822BA19C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,18,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BA1C4"))) PPC_WEAK_FUNC(sub_822BA1C4);
PPC_FUNC_IMPL(__imp__sub_822BA1C4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,17,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BA1EC"))) PPC_WEAK_FUNC(sub_822BA1EC);
PPC_FUNC_IMPL(__imp__sub_822BA1EC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,16,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BA214"))) PPC_WEAK_FUNC(sub_822BA214);
PPC_FUNC_IMPL(__imp__sub_822BA214) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,15,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BA23C"))) PPC_WEAK_FUNC(sub_822BA23C);
PPC_FUNC_IMPL(__imp__sub_822BA23C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,14,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BA264"))) PPC_WEAK_FUNC(sub_822BA264);
PPC_FUNC_IMPL(__imp__sub_822BA264) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,13,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BA28C"))) PPC_WEAK_FUNC(sub_822BA28C);
PPC_FUNC_IMPL(__imp__sub_822BA28C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,12,10
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BA2B4"))) PPC_WEAK_FUNC(sub_822BA2B4);
PPC_FUNC_IMPL(__imp__sub_822BA2B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,11,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BA2DC"))) PPC_WEAK_FUNC(sub_822BA2DC);
PPC_FUNC_IMPL(__imp__sub_822BA2DC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,10,8
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BA304"))) PPC_WEAK_FUNC(sub_822BA304);
PPC_FUNC_IMPL(__imp__sub_822BA304) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,9,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BA32C"))) PPC_WEAK_FUNC(sub_822BA32C);
PPC_FUNC_IMPL(__imp__sub_822BA32C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,8,6
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822BA354"))) PPC_WEAK_FUNC(sub_822BA354);
PPC_FUNC_IMPL(__imp__sub_822BA354) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-9292
	r11.s64 = r11.s64 + -9292;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,7,5
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-9292
	ctx.r10.s64 = ctx.r10.s64 + -9292;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

