#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_826E0BBC"))) PPC_WEAK_FUNC(sub_826E0BBC);
PPC_FUNC_IMPL(__imp__sub_826E0BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E0BC0"))) PPC_WEAK_FUNC(sub_826E0BC0);
PPC_FUNC_IMPL(__imp__sub_826E0BC0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826d4c60
	sub_826D4C60(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x826d4c60
	sub_826D4C60(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_826E0C2C"))) PPC_WEAK_FUNC(sub_826E0C2C);
PPC_FUNC_IMPL(__imp__sub_826E0C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E0C30"))) PPC_WEAK_FUNC(sub_826E0C30);
PPC_FUNC_IMPL(__imp__sub_826E0C30) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r27,r30,4
	r27.s64 = r30.s64 + 4;
	// lwz r31,20(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x826d4b40
	sub_826D4B40(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x826e0dec
	if (!cr0.gt) goto loc_826E0DEC;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// lwa r9,16(r31)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 16));
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f12
	f0.f64 = double(float(f0.f64 / ctx.f12.f64));
	// fmuls f30,f0,f13
	f30.f64 = double(float(f0.f64 * ctx.f13.f64));
	// bl 0x826d4cc8
	sub_826D4CC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826d4b40
	sub_826D4B40(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x826e0dec
	if (cr6.eq) goto loc_826E0DEC;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bge cr6,0x826e0dec
	if (!cr6.lt) goto loc_826E0DEC;
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r9,r3,6
	ctx.r9.s64 = ctx.r3.s64 + 6;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// mulli r11,r11,44
	r11.s64 = r11.s64 * 44;
	// lwz r10,2848(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2848);
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826d20d8
	sub_826D20D8(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826e0d74
	if (!cr6.gt) goto loc_826E0D74;
loc_826E0D40:
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r4,r11,r28
	ctx.r4.u64 = r11.u64 + r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826db8e8
	sub_826DB8E8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x826e0dec
	if (cr6.eq) goto loc_826E0DEC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x826e0d40
	if (cr6.lt) goto loc_826E0D40;
loc_826E0D74:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826e0dd8
	if (!cr6.gt) goto loc_826E0DD8;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_826E0D88:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x826e0dc0
	if (!cr6.gt) goto loc_826E0DC0;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
loc_826E0D9C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x826e0d9c
	if (cr6.lt) goto loc_826E0D9C;
loc_826E0DC0:
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// lfs f31,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	f31.f64 = double(temp.f32);
	// blt cr6,0x826e0d88
	if (cr6.lt) goto loc_826E0D88;
loc_826E0DD8:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f30,r11,r28
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + r28.u32, temp.u32);
	// b 0x826e0df0
	goto loc_826E0DF0;
loc_826E0DEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826E0DF0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826E0E00"))) PPC_WEAK_FUNC(sub_826E0E00);
PPC_FUNC_IMPL(__imp__sub_826E0E00) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r28,20(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826e0970
	sub_826E0970(ctx, base);
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// beq cr6,0x826e0e88
	if (cr6.eq) goto loc_826E0E88;
	// lwa r10,16(r28)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r28.u32 + 16));
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// addi r10,r11,3
	ctx.r10.s64 = r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r5,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + r30.u32);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// lwzx r5,r10,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f2,f0
	ctx.f2.f64 = double(float(f0.f64));
	// bl 0x826e0f30
	sub_826E0F30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826e0ea4
	goto loc_826E0EA4;
loc_826E0E88:
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826E0EA4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826E0EAC"))) PPC_WEAK_FUNC(sub_826E0EAC);
PPC_FUNC_IMPL(__imp__sub_826E0EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E0EB0"))) PPC_WEAK_FUNC(sub_826E0EB0);
PPC_FUNC_IMPL(__imp__sub_826E0EB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f0,-27448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27448);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fmadds f13,f1,f0,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64 + ctx.f13.f64));
	// lfd f0,-28592(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -28592);
	// fsub f0,f0,f13
	f0.f64 = f0.f64 - ctx.f13.f64;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r11,-16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x826e0ef4
	if (!cr6.lt) goto loc_826E0EF4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_826E0EF4:
	// cmpwi cr6,r11,1120
	cr6.compare<int32_t>(r11.s32, 1120, xer);
	// blt cr6,0x826e0f08
	if (cr6.lt) goto loc_826E0F08;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_826E0F08:
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// srawi r9,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = r11.s32 >> 5;
	// addi r10,r10,6768
	ctx.r10.s64 = ctx.r10.s64 + 6768;
	// rlwinm r11,r11,2,25,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x7C;
	// addi r8,r10,-144
	ctx.r8.s64 = ctx.r10.s64 + -144;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// lfsx f13,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 * ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E0F30"))) PPC_WEAK_FUNC(sub_826E0F30);
PPC_FUNC_IMPL(__imp__sub_826E0F30) {
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
	PPCRegister f0{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCContext env{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcdc
	// addi r12,r1,-96
	r12.s64 = ctx.r1.s64 + -96;
	// bl 0x8239d5d4
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r11,r6
	r11.s64 = ctx.r6.s32;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	f25.f64 = ctx.f1.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f24,f2
	f24.f64 = ctx.f2.f64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfd f26,-13144(r10)
	f26.u64 = PPC_LOAD_U64(ctx.r10.u32 + -13144);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lfd f31,-28592(r9)
	f31.u64 = PPC_LOAD_U64(ctx.r9.u32 + -28592);
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,-10024(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -10024);
	f0.f64 = double(temp.f32);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r31,r11,5704
	r31.s64 = r11.s64 + 5704;
	// fdivs f23,f0,f13
	f23.f64 = double(float(f0.f64 / ctx.f13.f64));
	// ble cr6,0x826e1008
	if (!cr6.gt) goto loc_826E1008;
	// mr r11,r24
	r11.u64 = r24.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_826E0FA8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// fmul f0,f0,f26
	f0.f64 = f0.f64 * f26.f64;
	// addi r7,r31,4
	ctx.r7.s64 = r31.s64 + 4;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// fsub f13,f0,f31
	ctx.f13.f64 = f0.f64 - f31.f64;
	// fadd f13,f13,f31
	ctx.f13.f64 = ctx.f13.f64 + f31.f64;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f13.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// lfsx f13,r9,r31
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfsx f12,r9,r7
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsub f0,f0,f11
	f0.f64 = f0.f64 - ctx.f11.f64;
	// fmadd f0,f12,f0,f13
	f0.f64 = ctx.f12.f64 * f0.f64 + ctx.f13.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x826e0fa8
	if (!cr0.eq) goto loc_826E0FA8;
loc_826E1008:
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x826e11d8
	if (!cr6.gt) goto loc_826E11D8;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r11,r25
	r11.u64 = r25.u64;
	// lfs f27,7724(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7724);
	f27.f64 = double(temp.f32);
	// srawi r26,r29,1
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	r26.s64 = r29.s32 >> 1;
	// lfs f28,-15168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15168);
	f28.f64 = double(temp.f32);
	// clrlwi r23,r29,31
	r23.u64 = r29.u32 & 0x1;
	// lfs f30,2552(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2552);
	f30.f64 = double(temp.f32);
	// li r28,0
	r28.s64 = 0;
	// lfs f29,-1020(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1020);
	f29.f64 = double(temp.f32);
loc_826E1044:
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r7,r31,4
	ctx.r7.s64 = r31.s64 + 4;
	// fmr f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f29.f64;
	// extsw r10,r30
	ctx.r10.s64 = r30.s32;
	// fmr f12,f29
	ctx.f12.f64 = f29.f64;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f23
	f0.f64 = double(float(f0.f64 * f23.f64));
	// fmul f0,f0,f26
	f0.f64 = f0.f64 * f26.f64;
	// fsub f11,f0,f31
	ctx.f11.f64 = f0.f64 - f31.f64;
	// fadd f11,f11,f31
	ctx.f11.f64 = ctx.f11.f64 + f31.f64;
	// fctiwz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfiwx f11,0,r11
	PPC_STORE_U32(r11.u32, ctx.f11.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfsx f11,r11,r31
	temp.u32 = PPC_LOAD_U32(r11.u32 + r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfsx f10,r11,r7
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfd f9,104(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fsub f0,f0,f9
	f0.f64 = f0.f64 - ctx.f9.f64;
	// fmadd f0,f10,f0,f11
	f0.f64 = ctx.f10.f64 * f0.f64 + ctx.f11.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
loc_826E10BC:
	// lfs f11,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lfs f10,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - f0.f64));
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - f0.f64));
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// bne 0x826e10bc
	if (!cr0.eq) goto loc_826E10BC;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// beq cr6,0x826e1108
	if (cr6.eq) goto loc_826E1108;
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - f0.f64));
	// fnmsubs f0,f0,f0,f30
	f0.f64 = double(float(-(f0.f64 * f0.f64 - f30.f64)));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fmuls f0,f12,f12
	f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// b 0x826e1120
	goto loc_826E1120;
loc_826E1108:
	// fadds f11,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(f0.f64 + f30.f64));
	// fsubs f0,f30,f0
	f0.f64 = double(float(f30.f64 - f0.f64));
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fmuls f0,f11,f12
	f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
loc_826E1120:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// fadds f1,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f0.f64 + ctx.f13.f64));
	// bl 0x826a71c8
	env = ctx;
	ctx.r3.s64 = setjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32));
	if (ctx.r3.s64 != 0) ctx = env;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// addi r10,r31,520
	ctx.r10.s64 = r31.s64 + 520;
	// addi r11,r31,656
	r11.s64 = r31.s64 + 656;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,520
	ctx.r8.s64 = r31.s64 + 520;
	// fmsubs f0,f0,f28,f27
	f0.f64 = double(float(f0.f64 * f28.f64 - f27.f64));
	// lfsx f12,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsub f13,f0,f31
	ctx.f13.f64 = f0.f64 - f31.f64;
	// fadd f13,f13,f31
	ctx.f13.f64 = ctx.f13.f64 + f31.f64;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f13.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfsx f13,r11,r8
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfsx f11,r11,r7
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fsub f0,f0,f10
	f0.f64 = f0.f64 - ctx.f10.f64;
	// fmadd f0,f11,f0,f13
	f0.f64 = ctx.f11.f64 * f0.f64 + ctx.f13.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// fmsubs f1,f0,f25,f24
	ctx.f1.f64 = double(float(f0.f64 * f25.f64 - f24.f64));
	// bl 0x826e0eb0
	sub_826E0EB0(ctx, base);
loc_826E11A8:
	// add r11,r28,r22
	r11.u64 = r28.u64 + r22.u64;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// rlwinm r28,r27,2,0,29
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// add r11,r28,r25
	r11.u64 = r28.u64 + r25.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, r30.s32, xer);
	// beq cr6,0x826e11a8
	if (cr6.eq) goto loc_826E11A8;
	// cmpw cr6,r27,r21
	cr6.compare<int32_t>(r27.s32, r21.s32, xer);
	// blt cr6,0x826e1044
	if (cr6.lt) goto loc_826E1044;
loc_826E11D8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-96
	r12.s64 = ctx.r1.s64 + -96;
	// bl 0x8239d620
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_826E11E8"))) PPC_WEAK_FUNC(sub_826E11E8);
PPC_FUNC_IMPL(__imp__sub_826E11E8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E11EC"))) PPC_WEAK_FUNC(sub_826E11EC);
PPC_FUNC_IMPL(__imp__sub_826E11EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E11F0"))) PPC_WEAK_FUNC(sub_826E11F0);
PPC_FUNC_IMPL(__imp__sub_826E11F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	PPCCRRegister cr6{};
	PPCCRRegister cr7{};
	uint32_t ea{};
	// cmpwi cr7,r5,0
	cr7.compare<int32_t>(ctx.r5.s32, 0, xer);
	// cmpwi cr1,r5,1
	cr1.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr7,0x826e1224
	if (cr7.eq) goto loc_826E1224;
	// lbz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpw cr6,r6,r4
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, xer);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// beq cr6,0x826e1228
	if (cr6.eq) goto loc_826E1228;
	// beq cr1,0x826e1224
	if (cr1.eq) goto loc_826E1224;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
loc_826E1214:
	// lbzu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// cmpw r6,r4
	cr0.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, xer);
	// bdnzf eq,0x826e1214
	--ctr.u64;
	if (ctr.u32 != 0 && !cr0.eq) goto loc_826E1214;
	// beq 0x826e1228
	if (cr0.eq) goto loc_826E1228;
loc_826E1224:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826E1228:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E122C"))) PPC_WEAK_FUNC(sub_826E122C);
PPC_FUNC_IMPL(__imp__sub_826E122C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1230"))) PPC_WEAK_FUNC(sub_826E1230);
PPC_FUNC_IMPL(__imp__sub_826E1230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,6916(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6916, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E1244"))) PPC_WEAK_FUNC(sub_826E1244);
PPC_FUNC_IMPL(__imp__sub_826E1244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1248"))) PPC_WEAK_FUNC(sub_826E1248);
PPC_FUNC_IMPL(__imp__sub_826E1248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,11624
	ctx.r3.s64 = r11.s64 + 11624;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E1254"))) PPC_WEAK_FUNC(sub_826E1254);
PPC_FUNC_IMPL(__imp__sub_826E1254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1258"))) PPC_WEAK_FUNC(sub_826E1258);
PPC_FUNC_IMPL(__imp__sub_826E1258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,11648
	ctx.r3.s64 = r11.s64 + 11648;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E1264"))) PPC_WEAK_FUNC(sub_826E1264);
PPC_FUNC_IMPL(__imp__sub_826E1264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1268"))) PPC_WEAK_FUNC(sub_826E1268);
PPC_FUNC_IMPL(__imp__sub_826E1268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,11800
	ctx.r3.s64 = r11.s64 + 11800;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E1274"))) PPC_WEAK_FUNC(sub_826E1274);
PPC_FUNC_IMPL(__imp__sub_826E1274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1278"))) PPC_WEAK_FUNC(sub_826E1278);
PPC_FUNC_IMPL(__imp__sub_826E1278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,11824
	ctx.r3.s64 = r11.s64 + 11824;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E1284"))) PPC_WEAK_FUNC(sub_826E1284);
PPC_FUNC_IMPL(__imp__sub_826E1284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1288"))) PPC_WEAK_FUNC(sub_826E1288);
PPC_FUNC_IMPL(__imp__sub_826E1288) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// addi r11,r11,10064
	r11.s64 = r11.s64 + 10064;
	// addi r3,r9,11880
	ctx.r3.s64 = ctx.r9.s64 + 11880;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E12D4"))) PPC_WEAK_FUNC(sub_826E12D4);
PPC_FUNC_IMPL(__imp__sub_826E12D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E12D8"))) PPC_WEAK_FUNC(sub_826E12D8);
PPC_FUNC_IMPL(__imp__sub_826E12D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,11976
	ctx.r3.s64 = r11.s64 + 11976;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E12E4"))) PPC_WEAK_FUNC(sub_826E12E4);
PPC_FUNC_IMPL(__imp__sub_826E12E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E12E8"))) PPC_WEAK_FUNC(sub_826E12E8);
PPC_FUNC_IMPL(__imp__sub_826E12E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,12000
	ctx.r3.s64 = r11.s64 + 12000;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E12F4"))) PPC_WEAK_FUNC(sub_826E12F4);
PPC_FUNC_IMPL(__imp__sub_826E12F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E12F8"))) PPC_WEAK_FUNC(sub_826E12F8);
PPC_FUNC_IMPL(__imp__sub_826E12F8) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// addi r11,r11,10692
	r11.s64 = r11.s64 + 10692;
	// addi r3,r9,12128
	ctx.r3.s64 = ctx.r9.s64 + 12128;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E1344"))) PPC_WEAK_FUNC(sub_826E1344);
PPC_FUNC_IMPL(__imp__sub_826E1344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1348"))) PPC_WEAK_FUNC(sub_826E1348);
PPC_FUNC_IMPL(__imp__sub_826E1348) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// addi r11,r11,10920
	r11.s64 = r11.s64 + 10920;
	// addi r3,r9,12256
	ctx.r3.s64 = ctx.r9.s64 + 12256;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E1394"))) PPC_WEAK_FUNC(sub_826E1394);
PPC_FUNC_IMPL(__imp__sub_826E1394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1398"))) PPC_WEAK_FUNC(sub_826E1398);
PPC_FUNC_IMPL(__imp__sub_826E1398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,12208
	ctx.r3.s64 = r11.s64 + 12208;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E13A4"))) PPC_WEAK_FUNC(sub_826E13A4);
PPC_FUNC_IMPL(__imp__sub_826E13A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E13A8"))) PPC_WEAK_FUNC(sub_826E13A8);
PPC_FUNC_IMPL(__imp__sub_826E13A8) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// addi r11,r11,11036
	r11.s64 = r11.s64 + 11036;
	// addi r3,r9,12272
	ctx.r3.s64 = ctx.r9.s64 + 12272;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E13F4"))) PPC_WEAK_FUNC(sub_826E13F4);
PPC_FUNC_IMPL(__imp__sub_826E13F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E13F8"))) PPC_WEAK_FUNC(sub_826E13F8);
PPC_FUNC_IMPL(__imp__sub_826E13F8) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// addi r11,r11,11012
	r11.s64 = r11.s64 + 11012;
	// addi r3,r9,12288
	ctx.r3.s64 = ctx.r9.s64 + 12288;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E1444"))) PPC_WEAK_FUNC(sub_826E1444);
PPC_FUNC_IMPL(__imp__sub_826E1444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1448"))) PPC_WEAK_FUNC(sub_826E1448);
PPC_FUNC_IMPL(__imp__sub_826E1448) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// addi r11,r11,11828
	r11.s64 = r11.s64 + 11828;
	// addi r3,r9,12320
	ctx.r3.s64 = ctx.r9.s64 + 12320;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E1494"))) PPC_WEAK_FUNC(sub_826E1494);
PPC_FUNC_IMPL(__imp__sub_826E1494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1498"))) PPC_WEAK_FUNC(sub_826E1498);
PPC_FUNC_IMPL(__imp__sub_826E1498) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// addi r11,r11,11820
	r11.s64 = r11.s64 + 11820;
	// addi r3,r9,12336
	ctx.r3.s64 = ctx.r9.s64 + 12336;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E14E4"))) PPC_WEAK_FUNC(sub_826E14E4);
PPC_FUNC_IMPL(__imp__sub_826E14E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E14E8"))) PPC_WEAK_FUNC(sub_826E14E8);
PPC_FUNC_IMPL(__imp__sub_826E14E8) {
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
	// lwz r16,-1744(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -1744);
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-96
	r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,12304
	ctx.r3.s64 = r11.s64 + 12304;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r31,96
	ctx.r1.s64 = r31.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E14F0"))) PPC_WEAK_FUNC(sub_826E14F0);
PPC_FUNC_IMPL(__imp__sub_826E14F0) {
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
	// addi r31,r1,-96
	r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,12304
	ctx.r3.s64 = r11.s64 + 12304;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r31,96
	ctx.r1.s64 = r31.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E1524"))) PPC_WEAK_FUNC(sub_826E1524);
PPC_FUNC_IMPL(__imp__sub_826E1524) {
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
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,11336
	ctx.r3.s64 = r11.s64 + 11336;
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

__attribute__((alias("__imp__sub_826E154C"))) PPC_WEAK_FUNC(sub_826E154C);
PPC_FUNC_IMPL(__imp__sub_826E154C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1550"))) PPC_WEAK_FUNC(sub_826E1550);
PPC_FUNC_IMPL(__imp__sub_826E1550) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// addi r11,r11,11836
	r11.s64 = r11.s64 + 11836;
	// addi r3,r9,12352
	ctx.r3.s64 = ctx.r9.s64 + 12352;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E159C"))) PPC_WEAK_FUNC(sub_826E159C);
PPC_FUNC_IMPL(__imp__sub_826E159C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E15A0"))) PPC_WEAK_FUNC(sub_826E15A0);
PPC_FUNC_IMPL(__imp__sub_826E15A0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r5,r11,13600
	ctx.r5.s64 = r11.s64 + 13600;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r3,r11,12628
	ctx.r3.s64 = r11.s64 + 12628;
	// bl 0x82356bc8
	sub_82356BC8(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,12368
	ctx.r3.s64 = r11.s64 + 12368;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E15E0"))) PPC_WEAK_FUNC(sub_826E15E0);
PPC_FUNC_IMPL(__imp__sub_826E15E0) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// addi r11,r11,12672
	r11.s64 = r11.s64 + 12672;
	// addi r3,r9,12384
	ctx.r3.s64 = ctx.r9.s64 + 12384;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E162C"))) PPC_WEAK_FUNC(sub_826E162C);
PPC_FUNC_IMPL(__imp__sub_826E162C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1630"))) PPC_WEAK_FUNC(sub_826E1630);
PPC_FUNC_IMPL(__imp__sub_826E1630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,12640
	ctx.r3.s64 = r11.s64 + 12640;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E163C"))) PPC_WEAK_FUNC(sub_826E163C);
PPC_FUNC_IMPL(__imp__sub_826E163C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1640"))) PPC_WEAK_FUNC(sub_826E1640);
PPC_FUNC_IMPL(__imp__sub_826E1640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,12592
	ctx.r3.s64 = r11.s64 + 12592;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E164C"))) PPC_WEAK_FUNC(sub_826E164C);
PPC_FUNC_IMPL(__imp__sub_826E164C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1650"))) PPC_WEAK_FUNC(sub_826E1650);
PPC_FUNC_IMPL(__imp__sub_826E1650) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,14552
	ctx.r3.s64 = r11.s64 + 14552;
	// bl 0x8223b660
	sub_8223B660(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,12720
	ctx.r3.s64 = r11.s64 + 12720;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E1688"))) PPC_WEAK_FUNC(sub_826E1688);
PPC_FUNC_IMPL(__imp__sub_826E1688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,12896
	ctx.r3.s64 = r11.s64 + 12896;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E1694"))) PPC_WEAK_FUNC(sub_826E1694);
PPC_FUNC_IMPL(__imp__sub_826E1694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1698"))) PPC_WEAK_FUNC(sub_826E1698);
PPC_FUNC_IMPL(__imp__sub_826E1698) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// addi r11,r11,15096
	r11.s64 = r11.s64 + 15096;
	// addi r3,r9,12976
	ctx.r3.s64 = ctx.r9.s64 + 12976;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E16E4"))) PPC_WEAK_FUNC(sub_826E16E4);
PPC_FUNC_IMPL(__imp__sub_826E16E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E16E8"))) PPC_WEAK_FUNC(sub_826E16E8);
PPC_FUNC_IMPL(__imp__sub_826E16E8) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// addi r11,r11,15228
	r11.s64 = r11.s64 + 15228;
	// addi r3,r9,12992
	ctx.r3.s64 = ctx.r9.s64 + 12992;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E1734"))) PPC_WEAK_FUNC(sub_826E1734);
PPC_FUNC_IMPL(__imp__sub_826E1734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1738"))) PPC_WEAK_FUNC(sub_826E1738);
PPC_FUNC_IMPL(__imp__sub_826E1738) {
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r31,r11,15624
	r31.s64 = r11.s64 + 15624;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r4,666
	ctx.r4.s64 = 666;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,1036(r31)
	PPC_STORE_U8(r31.u32 + 1036, r11.u8);
	// bl 0x8226db90
	sub_8226DB90(ctx, base);
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

__attribute__((alias("__imp__sub_826E1788"))) PPC_WEAK_FUNC(sub_826E1788);
PPC_FUNC_IMPL(__imp__sub_826E1788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwa r11,18872(r11)
	r11.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 18872));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,18632(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18632);
	f0.f64 = double(temp.f32);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,18720(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 18720, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E17B8"))) PPC_WEAK_FUNC(sub_826E17B8);
PPC_FUNC_IMPL(__imp__sub_826E17B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,18740(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18740, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E17CC"))) PPC_WEAK_FUNC(sub_826E17CC);
PPC_FUNC_IMPL(__imp__sub_826E17CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E17D0"))) PPC_WEAK_FUNC(sub_826E17D0);
PPC_FUNC_IMPL(__imp__sub_826E17D0) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// addi r11,r11,18744
	r11.s64 = r11.s64 + 18744;
	// addi r3,r9,13104
	ctx.r3.s64 = ctx.r9.s64 + 13104;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E181C"))) PPC_WEAK_FUNC(sub_826E181C);
PPC_FUNC_IMPL(__imp__sub_826E181C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1820"))) PPC_WEAK_FUNC(sub_826E1820);
PPC_FUNC_IMPL(__imp__sub_826E1820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13120
	ctx.r3.s64 = r11.s64 + 13120;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E182C"))) PPC_WEAK_FUNC(sub_826E182C);
PPC_FUNC_IMPL(__imp__sub_826E182C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1830"))) PPC_WEAK_FUNC(sub_826E1830);
PPC_FUNC_IMPL(__imp__sub_826E1830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13168
	ctx.r3.s64 = r11.s64 + 13168;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E183C"))) PPC_WEAK_FUNC(sub_826E183C);
PPC_FUNC_IMPL(__imp__sub_826E183C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1840"))) PPC_WEAK_FUNC(sub_826E1840);
PPC_FUNC_IMPL(__imp__sub_826E1840) {
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r31,r11,18840
	r31.s64 = r11.s64 + 18840;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82357790
	sub_82357790(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// addi r10,r10,20136
	ctx.r10.s64 = ctx.r10.s64 + 20136;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r8,-32146
	ctx.r8.s64 = -2106720256;
	// addi r3,r8,13184
	ctx.r3.s64 = ctx.r8.s64 + 13184;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,12(r31)
	PPC_STORE_U8(r31.u32 + 12, ctx.r10.u8);
	// stb r10,13(r31)
	PPC_STORE_U8(r31.u32 + 13, ctx.r10.u8);
	// stb r10,14(r31)
	PPC_STORE_U8(r31.u32 + 14, ctx.r10.u8);
	// stb r10,15(r31)
	PPC_STORE_U8(r31.u32 + 15, ctx.r10.u8);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// addi r10,r9,9384
	ctx.r10.s64 = ctx.r9.s64 + 9384;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFF;
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r11,r31,36
	r11.s64 = r31.s64 + 36;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// addi r11,r31,36
	r11.s64 = r31.s64 + 36;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
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

__attribute__((alias("__imp__sub_826E18E4"))) PPC_WEAK_FUNC(sub_826E18E4);
PPC_FUNC_IMPL(__imp__sub_826E18E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E18E8"))) PPC_WEAK_FUNC(sub_826E18E8);
PPC_FUNC_IMPL(__imp__sub_826E18E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13264
	ctx.r3.s64 = r11.s64 + 13264;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E18F4"))) PPC_WEAK_FUNC(sub_826E18F4);
PPC_FUNC_IMPL(__imp__sub_826E18F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E18F8"))) PPC_WEAK_FUNC(sub_826E18F8);
PPC_FUNC_IMPL(__imp__sub_826E18F8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,18888
	ctx.r3.s64 = r11.s64 + 18888;
	// bl 0x822752e0
	sub_822752E0(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13200
	ctx.r3.s64 = r11.s64 + 13200;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E1930"))) PPC_WEAK_FUNC(sub_826E1930);
PPC_FUNC_IMPL(__imp__sub_826E1930) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,20208
	r31.s64 = r11.s64 + 20208;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82276a10
	sub_82276A10(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r9,128
	ctx.r9.s64 = 128;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_826E196C:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826e196c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826E196C;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// lis r10,-32146
	ctx.r10.s64 = -2106720256;
	// addi r3,r10,13344
	ctx.r3.s64 = ctx.r10.s64 + 13344;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
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

__attribute__((alias("__imp__sub_826E19A0"))) PPC_WEAK_FUNC(sub_826E19A0);
PPC_FUNC_IMPL(__imp__sub_826E19A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,22168
	ctx.r10.s64 = ctx.r10.s64 + 22168;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E19B8"))) PPC_WEAK_FUNC(sub_826E19B8);
PPC_FUNC_IMPL(__imp__sub_826E19B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13392
	ctx.r3.s64 = r11.s64 + 13392;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E19C4"))) PPC_WEAK_FUNC(sub_826E19C4);
PPC_FUNC_IMPL(__imp__sub_826E19C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E19C8"))) PPC_WEAK_FUNC(sub_826E19C8);
PPC_FUNC_IMPL(__imp__sub_826E19C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,22344
	ctx.r10.s64 = ctx.r10.s64 + 22344;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E19E0"))) PPC_WEAK_FUNC(sub_826E19E0);
PPC_FUNC_IMPL(__imp__sub_826E19E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lis r9,-32140
	ctx.r9.s64 = -2106327040;
	// addi r11,r11,22424
	r11.s64 = r11.s64 + 22424;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,18972(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18972);
loc_826E19FC:
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,-32(r11)
	PPC_STORE_U32(r11.u32 + -32, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r9,r11,-20
	ctx.r9.s64 = r11.s64 + -20;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r6,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r6.u32);
	// stb r5,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r5.u8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// bge 0x826e19fc
	if (!cr0.lt) goto loc_826E19FC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E1A40"))) PPC_WEAK_FUNC(sub_826E1A40);
PPC_FUNC_IMPL(__imp__sub_826E1A40) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,22808
	ctx.r3.s64 = r11.s64 + 22808;
	// bl 0x821bb3f0
	sub_821BB3F0(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13440
	ctx.r3.s64 = r11.s64 + 13440;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E1A78"))) PPC_WEAK_FUNC(sub_826E1A78);
PPC_FUNC_IMPL(__imp__sub_826E1A78) {
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
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r11,-32128
	r11.s64 = -2105540608;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,22952
	r11.s64 = r11.s64 + 22952;
	// lis r8,-32146
	ctx.r8.s64 = -2106720256;
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r8,13504
	ctx.r3.s64 = ctx.r8.s64 + 13504;
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E1AE4"))) PPC_WEAK_FUNC(sub_826E1AE4);
PPC_FUNC_IMPL(__imp__sub_826E1AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1AE8"))) PPC_WEAK_FUNC(sub_826E1AE8);
PPC_FUNC_IMPL(__imp__sub_826E1AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13520
	ctx.r3.s64 = r11.s64 + 13520;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E1AF4"))) PPC_WEAK_FUNC(sub_826E1AF4);
PPC_FUNC_IMPL(__imp__sub_826E1AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1AF8"))) PPC_WEAK_FUNC(sub_826E1AF8);
PPC_FUNC_IMPL(__imp__sub_826E1AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13536
	ctx.r3.s64 = r11.s64 + 13536;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E1B04"))) PPC_WEAK_FUNC(sub_826E1B04);
PPC_FUNC_IMPL(__imp__sub_826E1B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1B08"))) PPC_WEAK_FUNC(sub_826E1B08);
PPC_FUNC_IMPL(__imp__sub_826E1B08) {
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
	// lis r11,-32128
	r11.s64 = -2105540608;
	// addi r31,r11,23080
	r31.s64 = r11.s64 + 23080;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// addi r4,r11,29624
	ctx.r4.s64 = r11.s64 + 29624;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,29684
	r11.s64 = r11.s64 + 29684;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stb r11,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r11.u8);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// bl 0x823a0468
	sub_823A0468(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lis r10,-32146
	ctx.r10.s64 = -2106720256;
	// addi r3,r10,13584
	ctx.r3.s64 = ctx.r10.s64 + 13584;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// ld r11,29616(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 29616);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFF;
	// stw r10,316(r31)
	PPC_STORE_U32(r31.u32 + 316, ctx.r10.u32);
	// stw r11,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
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

__attribute__((alias("__imp__sub_826E1B94"))) PPC_WEAK_FUNC(sub_826E1B94);
PPC_FUNC_IMPL(__imp__sub_826E1B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1B98"))) PPC_WEAK_FUNC(sub_826E1B98);
PPC_FUNC_IMPL(__imp__sub_826E1B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lfs f0,21760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21760);
	f0.f64 = double(temp.f32);
	// lis r11,-32128
	r11.s64 = -2105540608;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,24360(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24360, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E1BB0"))) PPC_WEAK_FUNC(sub_826E1BB0);
PPC_FUNC_IMPL(__imp__sub_826E1BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13624
	ctx.r3.s64 = r11.s64 + 13624;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E1BBC"))) PPC_WEAK_FUNC(sub_826E1BBC);
PPC_FUNC_IMPL(__imp__sub_826E1BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1BC0"))) PPC_WEAK_FUNC(sub_826E1BC0);
PPC_FUNC_IMPL(__imp__sub_826E1BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13608
	ctx.r3.s64 = r11.s64 + 13608;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E1BCC"))) PPC_WEAK_FUNC(sub_826E1BCC);
PPC_FUNC_IMPL(__imp__sub_826E1BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1BD0"))) PPC_WEAK_FUNC(sub_826E1BD0);
PPC_FUNC_IMPL(__imp__sub_826E1BD0) {
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
	// lis r11,-32128
	r11.s64 = -2105540608;
	// addi r3,r11,24720
	ctx.r3.s64 = r11.s64 + 24720;
	// bl 0x822ae108
	sub_822AE108(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13640
	ctx.r3.s64 = r11.s64 + 13640;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E1C04"))) PPC_WEAK_FUNC(sub_826E1C04);
PPC_FUNC_IMPL(__imp__sub_826E1C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1C08"))) PPC_WEAK_FUNC(sub_826E1C08);
PPC_FUNC_IMPL(__imp__sub_826E1C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,24716(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24716, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E1C1C"))) PPC_WEAK_FUNC(sub_826E1C1C);
PPC_FUNC_IMPL(__imp__sub_826E1C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1C20"))) PPC_WEAK_FUNC(sub_826E1C20);
PPC_FUNC_IMPL(__imp__sub_826E1C20) {
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
	// lis r11,-32128
	r11.s64 = -2105540608;
	// addi r31,r11,24812
	r31.s64 = r11.s64 + 24812;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32146
	ctx.r10.s64 = -2106720256;
	// addi r11,r11,36
	r11.s64 = r11.s64 + 36;
	// addi r3,r10,13664
	ctx.r3.s64 = ctx.r10.s64 + 13664;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,30848(r31)
	PPC_STORE_U32(r31.u32 + 30848, r11.u32);
	// stw r11,30852(r31)
	PPC_STORE_U32(r31.u32 + 30852, r11.u32);
	// stw r11,30856(r31)
	PPC_STORE_U32(r31.u32 + 30856, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
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

__attribute__((alias("__imp__sub_826E1C7C"))) PPC_WEAK_FUNC(sub_826E1C7C);
PPC_FUNC_IMPL(__imp__sub_826E1C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1C80"))) PPC_WEAK_FUNC(sub_826E1C80);
PPC_FUNC_IMPL(__imp__sub_826E1C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13680
	ctx.r3.s64 = r11.s64 + 13680;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E1C8C"))) PPC_WEAK_FUNC(sub_826E1C8C);
PPC_FUNC_IMPL(__imp__sub_826E1C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1C90"))) PPC_WEAK_FUNC(sub_826E1C90);
PPC_FUNC_IMPL(__imp__sub_826E1C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,13704
	ctx.r3.s64 = r11.s64 + 13704;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E1C9C"))) PPC_WEAK_FUNC(sub_826E1C9C);
PPC_FUNC_IMPL(__imp__sub_826E1C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1CA0"))) PPC_WEAK_FUNC(sub_826E1CA0);
PPC_FUNC_IMPL(__imp__sub_826E1CA0) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// addi r11,r11,-8092
	r11.s64 = r11.s64 + -8092;
	// addi r3,r9,14624
	ctx.r3.s64 = ctx.r9.s64 + 14624;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E1CEC"))) PPC_WEAK_FUNC(sub_826E1CEC);
PPC_FUNC_IMPL(__imp__sub_826E1CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1CF0"))) PPC_WEAK_FUNC(sub_826E1CF0);
PPC_FUNC_IMPL(__imp__sub_826E1CF0) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// addi r11,r11,-6748
	r11.s64 = r11.s64 + -6748;
	// addi r3,r9,15248
	ctx.r3.s64 = ctx.r9.s64 + 15248;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E1D3C"))) PPC_WEAK_FUNC(sub_826E1D3C);
PPC_FUNC_IMPL(__imp__sub_826E1D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1D40"))) PPC_WEAK_FUNC(sub_826E1D40);
PPC_FUNC_IMPL(__imp__sub_826E1D40) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// addi r11,r11,-6724
	r11.s64 = r11.s64 + -6724;
	// addi r3,r9,15264
	ctx.r3.s64 = ctx.r9.s64 + 15264;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E1D8C"))) PPC_WEAK_FUNC(sub_826E1D8C);
PPC_FUNC_IMPL(__imp__sub_826E1D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1D90"))) PPC_WEAK_FUNC(sub_826E1D90);
PPC_FUNC_IMPL(__imp__sub_826E1D90) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-6464
	ctx.r3.s64 = r11.s64 + -6464;
	// bl 0x823057f8
	sub_823057F8(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,15280
	ctx.r3.s64 = r11.s64 + 15280;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E1DC4"))) PPC_WEAK_FUNC(sub_826E1DC4);
PPC_FUNC_IMPL(__imp__sub_826E1DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1DC8"))) PPC_WEAK_FUNC(sub_826E1DC8);
PPC_FUNC_IMPL(__imp__sub_826E1DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,15296
	ctx.r3.s64 = r11.s64 + 15296;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E1DD4"))) PPC_WEAK_FUNC(sub_826E1DD4);
PPC_FUNC_IMPL(__imp__sub_826E1DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1DD8"))) PPC_WEAK_FUNC(sub_826E1DD8);
PPC_FUNC_IMPL(__imp__sub_826E1DD8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,-5480
	r31.s64 = r11.s64 + -5480;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r31,48
	ctx.r10.s64 = r31.s64 + 48;
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
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E1E7C"))) PPC_WEAK_FUNC(sub_826E1E7C);
PPC_FUNC_IMPL(__imp__sub_826E1E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1E80"))) PPC_WEAK_FUNC(sub_826E1E80);
PPC_FUNC_IMPL(__imp__sub_826E1E80) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x823117d0
	sub_823117D0(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,15344
	ctx.r3.s64 = r11.s64 + 15344;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E1EB4"))) PPC_WEAK_FUNC(sub_826E1EB4);
PPC_FUNC_IMPL(__imp__sub_826E1EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1EB8"))) PPC_WEAK_FUNC(sub_826E1EB8);
PPC_FUNC_IMPL(__imp__sub_826E1EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r7,-32146
	ctx.r7.s64 = -2106720256;
	// addi r11,r11,-4928
	r11.s64 = r11.s64 + -4928;
	// std r6,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// addi r3,r7,15664
	ctx.r3.s64 = ctx.r7.s64 + 15664;
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r5,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// stw r11,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r11.u32);
	// stb r10,20(r11)
	PPC_STORE_U8(r11.u32 + 20, ctx.r10.u8);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E1F3C"))) PPC_WEAK_FUNC(sub_826E1F3C);
PPC_FUNC_IMPL(__imp__sub_826E1F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1F40"))) PPC_WEAK_FUNC(sub_826E1F40);
PPC_FUNC_IMPL(__imp__sub_826E1F40) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// addi r11,r11,-4904
	r11.s64 = r11.s64 + -4904;
	// addi r3,r9,15648
	ctx.r3.s64 = ctx.r9.s64 + 15648;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E1F8C"))) PPC_WEAK_FUNC(sub_826E1F8C);
PPC_FUNC_IMPL(__imp__sub_826E1F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E1F90"))) PPC_WEAK_FUNC(sub_826E1F90);
PPC_FUNC_IMPL(__imp__sub_826E1F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r7,-32146
	ctx.r7.s64 = -2106720256;
	// addi r11,r11,-4708
	r11.s64 = r11.s64 + -4708;
	// std r6,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// addi r3,r7,15712
	ctx.r3.s64 = ctx.r7.s64 + 15712;
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r5,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// stw r11,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r11.u32);
	// stb r10,20(r11)
	PPC_STORE_U8(r11.u32 + 20, ctx.r10.u8);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E2014"))) PPC_WEAK_FUNC(sub_826E2014);
PPC_FUNC_IMPL(__imp__sub_826E2014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2018"))) PPC_WEAK_FUNC(sub_826E2018);
PPC_FUNC_IMPL(__imp__sub_826E2018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,-4264(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4264, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E202C"))) PPC_WEAK_FUNC(sub_826E202C);
PPC_FUNC_IMPL(__imp__sub_826E202C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2030"))) PPC_WEAK_FUNC(sub_826E2030);
PPC_FUNC_IMPL(__imp__sub_826E2030) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// addi r11,r11,-4272
	r11.s64 = r11.s64 + -4272;
	// addi r3,r9,15728
	ctx.r3.s64 = ctx.r9.s64 + 15728;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E207C"))) PPC_WEAK_FUNC(sub_826E207C);
PPC_FUNC_IMPL(__imp__sub_826E207C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2080"))) PPC_WEAK_FUNC(sub_826E2080);
PPC_FUNC_IMPL(__imp__sub_826E2080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,-4224(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4224, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E2094"))) PPC_WEAK_FUNC(sub_826E2094);
PPC_FUNC_IMPL(__imp__sub_826E2094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2098"))) PPC_WEAK_FUNC(sub_826E2098);
PPC_FUNC_IMPL(__imp__sub_826E2098) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// addi r11,r11,-4232
	r11.s64 = r11.s64 + -4232;
	// addi r3,r9,15744
	ctx.r3.s64 = ctx.r9.s64 + 15744;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E20E4"))) PPC_WEAK_FUNC(sub_826E20E4);
PPC_FUNC_IMPL(__imp__sub_826E20E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E20E8"))) PPC_WEAK_FUNC(sub_826E20E8);
PPC_FUNC_IMPL(__imp__sub_826E20E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r7,-32146
	ctx.r7.s64 = -2106720256;
	// addi r11,r11,-3000
	r11.s64 = r11.s64 + -3000;
	// std r6,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// addi r3,r7,15792
	ctx.r3.s64 = ctx.r7.s64 + 15792;
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r5,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// stw r11,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r11.u32);
	// stb r10,20(r11)
	PPC_STORE_U8(r11.u32 + 20, ctx.r10.u8);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E216C"))) PPC_WEAK_FUNC(sub_826E216C);
PPC_FUNC_IMPL(__imp__sub_826E216C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2170"))) PPC_WEAK_FUNC(sub_826E2170);
PPC_FUNC_IMPL(__imp__sub_826E2170) {
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
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// lis r11,-32206
	r11.s64 = -2110652416;
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r7,r10,32376
	ctx.r7.s64 = ctx.r10.s64 + 32376;
	// addi r3,r9,-4200
	ctx.r3.s64 = ctx.r9.s64 + -4200;
	// addi r6,r11,-11392
	ctx.r6.s64 = r11.s64 + -11392;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x8239cc38
	sub_8239CC38(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,15760
	ctx.r3.s64 = r11.s64 + 15760;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E21BC"))) PPC_WEAK_FUNC(sub_826E21BC);
PPC_FUNC_IMPL(__imp__sub_826E21BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E21C0"))) PPC_WEAK_FUNC(sub_826E21C0);
PPC_FUNC_IMPL(__imp__sub_826E21C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,15840
	ctx.r3.s64 = r11.s64 + 15840;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E21CC"))) PPC_WEAK_FUNC(sub_826E21CC);
PPC_FUNC_IMPL(__imp__sub_826E21CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E21D0"))) PPC_WEAK_FUNC(sub_826E21D0);
PPC_FUNC_IMPL(__imp__sub_826E21D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r7,-32146
	ctx.r7.s64 = -2106720256;
	// addi r11,r11,-2544
	r11.s64 = r11.s64 + -2544;
	// std r6,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// addi r3,r7,15904
	ctx.r3.s64 = ctx.r7.s64 + 15904;
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r5,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// stw r11,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r11.u32);
	// stb r10,20(r11)
	PPC_STORE_U8(r11.u32 + 20, ctx.r10.u8);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E2254"))) PPC_WEAK_FUNC(sub_826E2254);
PPC_FUNC_IMPL(__imp__sub_826E2254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2258"))) PPC_WEAK_FUNC(sub_826E2258);
PPC_FUNC_IMPL(__imp__sub_826E2258) {
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
	// lwz r16,26028(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 26028);
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-96
	r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,15856
	ctx.r3.s64 = r11.s64 + 15856;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r31,96
	ctx.r1.s64 = r31.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E2260"))) PPC_WEAK_FUNC(sub_826E2260);
PPC_FUNC_IMPL(__imp__sub_826E2260) {
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
	// addi r31,r1,-96
	r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,15856
	ctx.r3.s64 = r11.s64 + 15856;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r31,96
	ctx.r1.s64 = r31.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E2294"))) PPC_WEAK_FUNC(sub_826E2294);
PPC_FUNC_IMPL(__imp__sub_826E2294) {
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
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,29120
	ctx.r3.s64 = r11.s64 + 29120;
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

__attribute__((alias("__imp__sub_826E22BC"))) PPC_WEAK_FUNC(sub_826E22BC);
PPC_FUNC_IMPL(__imp__sub_826E22BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E22C0"))) PPC_WEAK_FUNC(sub_826E22C0);
PPC_FUNC_IMPL(__imp__sub_826E22C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lis r7,-32146
	ctx.r7.s64 = -2106720256;
	// addi r11,r11,-30008
	r11.s64 = r11.s64 + -30008;
	// std r6,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// addi r3,r7,16336
	ctx.r3.s64 = ctx.r7.s64 + 16336;
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r5,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r10,24(r11)
	PPC_STORE_U8(r11.u32 + 24, ctx.r10.u8);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E234C"))) PPC_WEAK_FUNC(sub_826E234C);
PPC_FUNC_IMPL(__imp__sub_826E234C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2350"))) PPC_WEAK_FUNC(sub_826E2350);
PPC_FUNC_IMPL(__imp__sub_826E2350) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r31,r11,-2180
	r31.s64 = r11.s64 + -2180;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82357790
	sub_82357790(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32146
	ctx.r10.s64 = -2106720256;
	// addi r11,r11,-22636
	r11.s64 = r11.s64 + -22636;
	// addi r3,r10,16352
	ctx.r3.s64 = ctx.r10.s64 + 16352;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
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

__attribute__((alias("__imp__sub_826E23AC"))) PPC_WEAK_FUNC(sub_826E23AC);
PPC_FUNC_IMPL(__imp__sub_826E23AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E23B0"))) PPC_WEAK_FUNC(sub_826E23B0);
PPC_FUNC_IMPL(__imp__sub_826E23B0) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r31,r11,-2060
	r31.s64 = r11.s64 + -2060;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32146
	ctx.r10.s64 = -2106720256;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// addi r3,r10,16376
	ctx.r3.s64 = ctx.r10.s64 + 16376;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
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

__attribute__((alias("__imp__sub_826E23FC"))) PPC_WEAK_FUNC(sub_826E23FC);
PPC_FUNC_IMPL(__imp__sub_826E23FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2400"))) PPC_WEAK_FUNC(sub_826E2400);
PPC_FUNC_IMPL(__imp__sub_826E2400) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-2080
	ctx.r3.s64 = r11.s64 + -2080;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,16392
	ctx.r3.s64 = r11.s64 + 16392;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E243C"))) PPC_WEAK_FUNC(sub_826E243C);
PPC_FUNC_IMPL(__imp__sub_826E243C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2440"))) PPC_WEAK_FUNC(sub_826E2440);
PPC_FUNC_IMPL(__imp__sub_826E2440) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r11,-1428
	ctx.r3.s64 = r11.s64 + -1428;
	// li r11,-1
	r11.s64 = -1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82355440
	sub_82355440(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,16408
	ctx.r3.s64 = r11.s64 + 16408;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E2494"))) PPC_WEAK_FUNC(sub_826E2494);
PPC_FUNC_IMPL(__imp__sub_826E2494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2498"))) PPC_WEAK_FUNC(sub_826E2498);
PPC_FUNC_IMPL(__imp__sub_826E2498) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,15600
	ctx.r3.s64 = r11.s64 + 15600;
	// bl 0x8235a920
	sub_8235A920(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,16440
	ctx.r3.s64 = r11.s64 + 16440;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E24CC"))) PPC_WEAK_FUNC(sub_826E24CC);
PPC_FUNC_IMPL(__imp__sub_826E24CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E24D0"))) PPC_WEAK_FUNC(sub_826E24D0);
PPC_FUNC_IMPL(__imp__sub_826E24D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-9580(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9580);
	// stw r11,15748(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15748, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E24E4"))) PPC_WEAK_FUNC(sub_826E24E4);
PPC_FUNC_IMPL(__imp__sub_826E24E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E24E8"))) PPC_WEAK_FUNC(sub_826E24E8);
PPC_FUNC_IMPL(__imp__sub_826E24E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-9572(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9572);
	// stw r11,15768(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15768, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E24FC"))) PPC_WEAK_FUNC(sub_826E24FC);
PPC_FUNC_IMPL(__imp__sub_826E24FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2500"))) PPC_WEAK_FUNC(sub_826E2500);
PPC_FUNC_IMPL(__imp__sub_826E2500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-9564(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9564);
	// stw r11,15772(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15772, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E2514"))) PPC_WEAK_FUNC(sub_826E2514);
PPC_FUNC_IMPL(__imp__sub_826E2514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2518"))) PPC_WEAK_FUNC(sub_826E2518);
PPC_FUNC_IMPL(__imp__sub_826E2518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-9556(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9556);
	// stw r11,15724(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15724, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E252C"))) PPC_WEAK_FUNC(sub_826E252C);
PPC_FUNC_IMPL(__imp__sub_826E252C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2530"))) PPC_WEAK_FUNC(sub_826E2530);
PPC_FUNC_IMPL(__imp__sub_826E2530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-9548(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9548);
	// stw r11,15760(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15760, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E2544"))) PPC_WEAK_FUNC(sub_826E2544);
PPC_FUNC_IMPL(__imp__sub_826E2544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2548"))) PPC_WEAK_FUNC(sub_826E2548);
PPC_FUNC_IMPL(__imp__sub_826E2548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-9540(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9540);
	// stw r11,15736(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15736, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E255C"))) PPC_WEAK_FUNC(sub_826E255C);
PPC_FUNC_IMPL(__imp__sub_826E255C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2560"))) PPC_WEAK_FUNC(sub_826E2560);
PPC_FUNC_IMPL(__imp__sub_826E2560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-9532(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9532);
	// stw r11,15764(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15764, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E2574"))) PPC_WEAK_FUNC(sub_826E2574);
PPC_FUNC_IMPL(__imp__sub_826E2574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2578"))) PPC_WEAK_FUNC(sub_826E2578);
PPC_FUNC_IMPL(__imp__sub_826E2578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-9524(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9524);
	// stw r11,15752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15752, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E258C"))) PPC_WEAK_FUNC(sub_826E258C);
PPC_FUNC_IMPL(__imp__sub_826E258C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2590"))) PPC_WEAK_FUNC(sub_826E2590);
PPC_FUNC_IMPL(__imp__sub_826E2590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-9516(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9516);
	// stw r11,15728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15728, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E25A4"))) PPC_WEAK_FUNC(sub_826E25A4);
PPC_FUNC_IMPL(__imp__sub_826E25A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E25A8"))) PPC_WEAK_FUNC(sub_826E25A8);
PPC_FUNC_IMPL(__imp__sub_826E25A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-9508(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9508);
	// stw r11,15756(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15756, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E25BC"))) PPC_WEAK_FUNC(sub_826E25BC);
PPC_FUNC_IMPL(__imp__sub_826E25BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E25C0"))) PPC_WEAK_FUNC(sub_826E25C0);
PPC_FUNC_IMPL(__imp__sub_826E25C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-9500(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9500);
	// stw r11,15732(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15732, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E25D4"))) PPC_WEAK_FUNC(sub_826E25D4);
PPC_FUNC_IMPL(__imp__sub_826E25D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E25D8"))) PPC_WEAK_FUNC(sub_826E25D8);
PPC_FUNC_IMPL(__imp__sub_826E25D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-9492(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9492);
	// stw r11,15740(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15740, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E25EC"))) PPC_WEAK_FUNC(sub_826E25EC);
PPC_FUNC_IMPL(__imp__sub_826E25EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E25F0"))) PPC_WEAK_FUNC(sub_826E25F0);
PPC_FUNC_IMPL(__imp__sub_826E25F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-9484(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9484);
	// stw r11,15744(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15744, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E2604"))) PPC_WEAK_FUNC(sub_826E2604);
PPC_FUNC_IMPL(__imp__sub_826E2604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2608"))) PPC_WEAK_FUNC(sub_826E2608);
PPC_FUNC_IMPL(__imp__sub_826E2608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-9476(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9476);
	// stw r11,15716(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15716, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E261C"))) PPC_WEAK_FUNC(sub_826E261C);
PPC_FUNC_IMPL(__imp__sub_826E261C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2620"))) PPC_WEAK_FUNC(sub_826E2620);
PPC_FUNC_IMPL(__imp__sub_826E2620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-9468(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9468);
	// stw r11,15720(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15720, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E2634"))) PPC_WEAK_FUNC(sub_826E2634);
PPC_FUNC_IMPL(__imp__sub_826E2634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2638"))) PPC_WEAK_FUNC(sub_826E2638);
PPC_FUNC_IMPL(__imp__sub_826E2638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-9556(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9556);
	// stw r11,15904(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15904, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E264C"))) PPC_WEAK_FUNC(sub_826E264C);
PPC_FUNC_IMPL(__imp__sub_826E264C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2650"))) PPC_WEAK_FUNC(sub_826E2650);
PPC_FUNC_IMPL(__imp__sub_826E2650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-9548(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9548);
	// stw r11,15900(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15900, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E2664"))) PPC_WEAK_FUNC(sub_826E2664);
PPC_FUNC_IMPL(__imp__sub_826E2664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2668"))) PPC_WEAK_FUNC(sub_826E2668);
PPC_FUNC_IMPL(__imp__sub_826E2668) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,16016
	ctx.r3.s64 = r11.s64 + 16016;
	// bl 0x8236c318
	sub_8236C318(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,16488
	ctx.r3.s64 = r11.s64 + 16488;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E269C"))) PPC_WEAK_FUNC(sub_826E269C);
PPC_FUNC_IMPL(__imp__sub_826E269C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E26A0"))) PPC_WEAK_FUNC(sub_826E26A0);
PPC_FUNC_IMPL(__imp__sub_826E26A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,16952
	ctx.r3.s64 = r11.s64 + 16952;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E26AC"))) PPC_WEAK_FUNC(sub_826E26AC);
PPC_FUNC_IMPL(__imp__sub_826E26AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E26B0"))) PPC_WEAK_FUNC(sub_826E26B0);
PPC_FUNC_IMPL(__imp__sub_826E26B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,16976
	ctx.r3.s64 = r11.s64 + 16976;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E26BC"))) PPC_WEAK_FUNC(sub_826E26BC);
PPC_FUNC_IMPL(__imp__sub_826E26BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E26C0"))) PPC_WEAK_FUNC(sub_826E26C0);
PPC_FUNC_IMPL(__imp__sub_826E26C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17000
	ctx.r3.s64 = r11.s64 + 17000;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E26CC"))) PPC_WEAK_FUNC(sub_826E26CC);
PPC_FUNC_IMPL(__imp__sub_826E26CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E26D0"))) PPC_WEAK_FUNC(sub_826E26D0);
PPC_FUNC_IMPL(__imp__sub_826E26D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17024
	ctx.r3.s64 = r11.s64 + 17024;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E26DC"))) PPC_WEAK_FUNC(sub_826E26DC);
PPC_FUNC_IMPL(__imp__sub_826E26DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E26E0"))) PPC_WEAK_FUNC(sub_826E26E0);
PPC_FUNC_IMPL(__imp__sub_826E26E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17064
	ctx.r3.s64 = r11.s64 + 17064;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E26EC"))) PPC_WEAK_FUNC(sub_826E26EC);
PPC_FUNC_IMPL(__imp__sub_826E26EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E26F0"))) PPC_WEAK_FUNC(sub_826E26F0);
PPC_FUNC_IMPL(__imp__sub_826E26F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17088
	ctx.r3.s64 = r11.s64 + 17088;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E26FC"))) PPC_WEAK_FUNC(sub_826E26FC);
PPC_FUNC_IMPL(__imp__sub_826E26FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2700"))) PPC_WEAK_FUNC(sub_826E2700);
PPC_FUNC_IMPL(__imp__sub_826E2700) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,16932
	ctx.r3.s64 = r11.s64 + 16932;
	// bl 0x823892f8
	sub_823892F8(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17048
	ctx.r3.s64 = r11.s64 + 17048;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E2734"))) PPC_WEAK_FUNC(sub_826E2734);
PPC_FUNC_IMPL(__imp__sub_826E2734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2738"))) PPC_WEAK_FUNC(sub_826E2738);
PPC_FUNC_IMPL(__imp__sub_826E2738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17112
	ctx.r3.s64 = r11.s64 + 17112;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E2744"))) PPC_WEAK_FUNC(sub_826E2744);
PPC_FUNC_IMPL(__imp__sub_826E2744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2748"))) PPC_WEAK_FUNC(sub_826E2748);
PPC_FUNC_IMPL(__imp__sub_826E2748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17136
	ctx.r3.s64 = r11.s64 + 17136;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E2754"))) PPC_WEAK_FUNC(sub_826E2754);
PPC_FUNC_IMPL(__imp__sub_826E2754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2758"))) PPC_WEAK_FUNC(sub_826E2758);
PPC_FUNC_IMPL(__imp__sub_826E2758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17160
	ctx.r3.s64 = r11.s64 + 17160;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E2764"))) PPC_WEAK_FUNC(sub_826E2764);
PPC_FUNC_IMPL(__imp__sub_826E2764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2768"))) PPC_WEAK_FUNC(sub_826E2768);
PPC_FUNC_IMPL(__imp__sub_826E2768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17184
	ctx.r3.s64 = r11.s64 + 17184;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E2774"))) PPC_WEAK_FUNC(sub_826E2774);
PPC_FUNC_IMPL(__imp__sub_826E2774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2778"))) PPC_WEAK_FUNC(sub_826E2778);
PPC_FUNC_IMPL(__imp__sub_826E2778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17208
	ctx.r3.s64 = r11.s64 + 17208;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E2784"))) PPC_WEAK_FUNC(sub_826E2784);
PPC_FUNC_IMPL(__imp__sub_826E2784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2788"))) PPC_WEAK_FUNC(sub_826E2788);
PPC_FUNC_IMPL(__imp__sub_826E2788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17232
	ctx.r3.s64 = r11.s64 + 17232;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E2794"))) PPC_WEAK_FUNC(sub_826E2794);
PPC_FUNC_IMPL(__imp__sub_826E2794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2798"))) PPC_WEAK_FUNC(sub_826E2798);
PPC_FUNC_IMPL(__imp__sub_826E2798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17256
	ctx.r3.s64 = r11.s64 + 17256;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E27A4"))) PPC_WEAK_FUNC(sub_826E27A4);
PPC_FUNC_IMPL(__imp__sub_826E27A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E27A8"))) PPC_WEAK_FUNC(sub_826E27A8);
PPC_FUNC_IMPL(__imp__sub_826E27A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17280
	ctx.r3.s64 = r11.s64 + 17280;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E27B4"))) PPC_WEAK_FUNC(sub_826E27B4);
PPC_FUNC_IMPL(__imp__sub_826E27B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E27B8"))) PPC_WEAK_FUNC(sub_826E27B8);
PPC_FUNC_IMPL(__imp__sub_826E27B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17304
	ctx.r3.s64 = r11.s64 + 17304;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E27C4"))) PPC_WEAK_FUNC(sub_826E27C4);
PPC_FUNC_IMPL(__imp__sub_826E27C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E27C8"))) PPC_WEAK_FUNC(sub_826E27C8);
PPC_FUNC_IMPL(__imp__sub_826E27C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17328
	ctx.r3.s64 = r11.s64 + 17328;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E27D4"))) PPC_WEAK_FUNC(sub_826E27D4);
PPC_FUNC_IMPL(__imp__sub_826E27D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E27D8"))) PPC_WEAK_FUNC(sub_826E27D8);
PPC_FUNC_IMPL(__imp__sub_826E27D8) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,16952
	ctx.r3.s64 = r11.s64 + 16952;
	// bl 0x823892f8
	sub_823892F8(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17352
	ctx.r3.s64 = r11.s64 + 17352;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826E280C"))) PPC_WEAK_FUNC(sub_826E280C);
PPC_FUNC_IMPL(__imp__sub_826E280C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2810"))) PPC_WEAK_FUNC(sub_826E2810);
PPC_FUNC_IMPL(__imp__sub_826E2810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17368
	ctx.r3.s64 = r11.s64 + 17368;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E281C"))) PPC_WEAK_FUNC(sub_826E281C);
PPC_FUNC_IMPL(__imp__sub_826E281C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2820"))) PPC_WEAK_FUNC(sub_826E2820);
PPC_FUNC_IMPL(__imp__sub_826E2820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17392
	ctx.r3.s64 = r11.s64 + 17392;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E282C"))) PPC_WEAK_FUNC(sub_826E282C);
PPC_FUNC_IMPL(__imp__sub_826E282C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2830"))) PPC_WEAK_FUNC(sub_826E2830);
PPC_FUNC_IMPL(__imp__sub_826E2830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17416
	ctx.r3.s64 = r11.s64 + 17416;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E283C"))) PPC_WEAK_FUNC(sub_826E283C);
PPC_FUNC_IMPL(__imp__sub_826E283C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2840"))) PPC_WEAK_FUNC(sub_826E2840);
PPC_FUNC_IMPL(__imp__sub_826E2840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17440
	ctx.r3.s64 = r11.s64 + 17440;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E284C"))) PPC_WEAK_FUNC(sub_826E284C);
PPC_FUNC_IMPL(__imp__sub_826E284C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2850"))) PPC_WEAK_FUNC(sub_826E2850);
PPC_FUNC_IMPL(__imp__sub_826E2850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17464
	ctx.r3.s64 = r11.s64 + 17464;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E285C"))) PPC_WEAK_FUNC(sub_826E285C);
PPC_FUNC_IMPL(__imp__sub_826E285C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2860"))) PPC_WEAK_FUNC(sub_826E2860);
PPC_FUNC_IMPL(__imp__sub_826E2860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17488
	ctx.r3.s64 = r11.s64 + 17488;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E286C"))) PPC_WEAK_FUNC(sub_826E286C);
PPC_FUNC_IMPL(__imp__sub_826E286C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2870"))) PPC_WEAK_FUNC(sub_826E2870);
PPC_FUNC_IMPL(__imp__sub_826E2870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17512
	ctx.r3.s64 = r11.s64 + 17512;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E287C"))) PPC_WEAK_FUNC(sub_826E287C);
PPC_FUNC_IMPL(__imp__sub_826E287C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2880"))) PPC_WEAK_FUNC(sub_826E2880);
PPC_FUNC_IMPL(__imp__sub_826E2880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17536
	ctx.r3.s64 = r11.s64 + 17536;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E288C"))) PPC_WEAK_FUNC(sub_826E288C);
PPC_FUNC_IMPL(__imp__sub_826E288C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E2890"))) PPC_WEAK_FUNC(sub_826E2890);
PPC_FUNC_IMPL(__imp__sub_826E2890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17560
	ctx.r3.s64 = r11.s64 + 17560;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E289C"))) PPC_WEAK_FUNC(sub_826E289C);
PPC_FUNC_IMPL(__imp__sub_826E289C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E28A0"))) PPC_WEAK_FUNC(sub_826E28A0);
PPC_FUNC_IMPL(__imp__sub_826E28A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17584
	ctx.r3.s64 = r11.s64 + 17584;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E28AC"))) PPC_WEAK_FUNC(sub_826E28AC);
PPC_FUNC_IMPL(__imp__sub_826E28AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E28B0"))) PPC_WEAK_FUNC(sub_826E28B0);
PPC_FUNC_IMPL(__imp__sub_826E28B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17608
	ctx.r3.s64 = r11.s64 + 17608;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E28BC"))) PPC_WEAK_FUNC(sub_826E28BC);
PPC_FUNC_IMPL(__imp__sub_826E28BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E28C0"))) PPC_WEAK_FUNC(sub_826E28C0);
PPC_FUNC_IMPL(__imp__sub_826E28C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17632
	ctx.r3.s64 = r11.s64 + 17632;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826E28CC"))) PPC_WEAK_FUNC(sub_826E28CC);
PPC_FUNC_IMPL(__imp__sub_826E28CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826E28D0"))) PPC_WEAK_FUNC(sub_826E28D0);
PPC_FUNC_IMPL(__imp__sub_826E28D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,17656
	ctx.r3.s64 = r11.s64 + 17656;
	// b 0x8239d7c8
	sub_8239D7C8(ctx, base);
	return;
}

