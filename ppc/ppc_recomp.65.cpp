#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8226AF38"))) PPC_WEAK_FUNC(sub_8226AF38);
PPC_FUNC_IMPL(__imp__sub_8226AF38) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f0,f0,f10
	ctx.f10.f64 = double(float(f0.f64 * f0.f64 + ctx.f10.f64));
	// fmadds f10,f12,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fdivs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmuls f0,f0,f11
	f0.f64 = double(float(f0.f64 * ctx.f11.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f13,f11
	f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f12,f11
	f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82122258
	sub_82122258(ctx, base);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * f0.f64));
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f5,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f5,f0
	f0.f64 = double(float(ctx.f5.f64 * f0.f64));
	// lfs f4,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f11,f10,f13,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f10,f7,f13,f8
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f8,f4,f13,f0
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + f0.f64));
	// fmadds f0,f9,f12,f11
	f0.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,8(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 8, temp.u32);
	// fmadds f13,f6,f12,f10
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f13,12(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r29.u32 + 12, temp.u32);
	// fmadds f12,f12,f3,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmr f10,f0
	ctx.f10.f64 = f0.f64;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// fabs f10,f10
	ctx.f10.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x8226b02c
	if (!cr6.gt) goto loc_8226B02C;
	// fdivs f0,f12,f13
	f0.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	f0.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,4(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// b 0x8226b048
	goto loc_8226B048;
loc_8226B02C:
	// fdivs f0,f12,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f12.f64 / f0.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	f0.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
loc_8226B048:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8226B050"))) PPC_WEAK_FUNC(sub_8226B050);
PPC_FUNC_IMPL(__imp__sub_8226B050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	// stfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, f30.u64);
	// stfd f31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, f31.u64);
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f0,f12
	ctx.f8.f64 = double(float(f0.f64 - ctx.f12.f64));
	// lfs f9,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	f0.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f9,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f6,f8
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmadds f0,f0,f7,f6
	f0.f64 = double(float(f0.f64 * ctx.f7.f64 + ctx.f6.f64));
	// lfs f6,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f0,f9,f10,f0
	f0.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + f0.f64));
	// fcmpu cr6,f0,f6
	cr6.compare(f0.f64, ctx.f6.f64);
	// beq cr6,0x8226b230
	if (cr6.eq) goto loc_8226B230;
	// fcmpu cr6,f0,f6
	cr6.compare(f0.f64, ctx.f6.f64);
	// ble cr6,0x8226b0b4
	if (!cr6.gt) goto loc_8226B0B4;
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8226b230
	if (!cr0.eq) goto loc_8226B230;
loc_8226B0B4:
	// lfs f9,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f9,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// lfs f5,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f12,f5,f11,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f13,f4,f13,f12
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// stfs f0,0(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f6
	cr6.compare(f0.f64, ctx.f6.f64);
	// blt cr6,0x8226b230
	if (cr6.lt) goto loc_8226B230;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f5,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f5.f64 = double(temp.f32);
	// fcmpu cr6,f0,f5
	cr6.compare(f0.f64, ctx.f5.f64);
	// bgt cr6,0x8226b230
	if (cr6.gt) goto loc_8226B230;
	// lfs f11,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// fabs f9,f11
	ctx.f9.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// lfs f4,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f11,f0,f10
	ctx.f11.f64 = double(float(f0.f64 * ctx.f10.f64));
	// lfs f3,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f10,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 * f0.f64));
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f0,f7,f0
	f0.f64 = double(float(ctx.f7.f64 * f0.f64));
	// lfs f13,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f31.f64 = double(temp.f32);
	// lfs f30,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f30.f64 = double(temp.f32);
	// fadds f11,f4,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fadds f10,f3,f10
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// fadds f0,f0,f2
	f0.f64 = double(float(f0.f64 + ctx.f2.f64));
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// fsubs f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// stfs f11,-32(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// fsubs f11,f10,f31
	ctx.f11.f64 = double(float(ctx.f10.f64 - f31.f64));
	// stfs f11,-28(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fsubs f0,f0,f30
	f0.f64 = double(float(f0.f64 - f30.f64));
	// stfs f0,-24(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// ble cr6,0x8226b180
	if (!cr6.gt) goto loc_8226B180;
	// fcmpu cr6,f12,f9
	cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// ble cr6,0x8226b18c
	if (!cr6.gt) goto loc_8226B18C;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8226b190
	goto loc_8226B190;
loc_8226B180:
	// fcmpu cr6,f9,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// bgt cr6,0x8226b18c
	if (cr6.gt) goto loc_8226B18C;
	// li r11,1
	r11.s64 = 1;
loc_8226B18C:
	// li r10,2
	ctx.r10.s64 = 2;
loc_8226B190:
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// lfsx f0,r9,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	f0.f64 = double(temp.f32);
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * f0.f64));
	// addi r5,r1,-32
	ctx.r5.s64 = ctx.r1.s64 + -32;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * f0.f64));
	// lfsx f11,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r11,r5
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r5.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f12,r7,r4
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f13,f12,f11,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 - ctx.f13.f64));
	// fmsubs f7,f12,f10,f7
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f7.f64));
	// fdivs f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 / ctx.f13.f64));
	// fcmpu cr6,f13,f6
	cr6.compare(ctx.f13.f64, ctx.f6.f64);
	// blt cr6,0x8226b230
	if (cr6.lt) goto loc_8226B230;
	// fcmpu cr6,f13,f5
	cr6.compare(ctx.f13.f64, ctx.f5.f64);
	// bgt cr6,0x8226b230
	if (cr6.gt) goto loc_8226B230;
	// fcmpu cr6,f0,f6
	cr6.compare(f0.f64, ctx.f6.f64);
	// beq cr6,0x8226b210
	if (cr6.eq) goto loc_8226B210;
	// fnmsubs f12,f13,f11,f10
	ctx.f12.f64 = double(float(-(ctx.f13.f64 * ctx.f11.f64 - ctx.f10.f64)));
	// fdivs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 / f0.f64));
	// b 0x8226b218
	goto loc_8226B218;
loc_8226B210:
	// fnmsubs f0,f13,f9,f8
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(-(ctx.f13.f64 * ctx.f9.f64 - ctx.f8.f64)));
	// fdivs f0,f0,f12
	f0.f64 = double(float(f0.f64 / ctx.f12.f64));
loc_8226B218:
	// fcmpu cr6,f0,f6
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f6.f64);
	// blt cr6,0x8226b230
	if (cr6.lt) goto loc_8226B230;
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f0,f5
	cr6.compare(f0.f64, ctx.f5.f64);
	// ble cr6,0x8226b234
	if (!cr6.gt) goto loc_8226B234;
loc_8226B230:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226B234:
	// lfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226B240"))) PPC_WEAK_FUNC(sub_8226B240);
PPC_FUNC_IMPL(__imp__sub_8226B240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f11.f64 = double(temp.f32);
loc_8226B254:
	// lfs f10,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f10,f9,f13,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f10,f12,f8,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fadds f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// ble cr6,0x8226b290
	if (!cr6.gt) goto loc_8226B290;
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne 0x8226b254
	if (!cr0.eq) goto loc_8226B254;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8226B290:
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne 0x8226b254
	if (!cr0.eq) goto loc_8226B254;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226B2A4"))) PPC_WEAK_FUNC(sub_8226B2A4);
PPC_FUNC_IMPL(__imp__sub_8226B2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226B2A8"))) PPC_WEAK_FUNC(sub_8226B2A8);
PPC_FUNC_IMPL(__imp__sub_8226B2A8) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lfs f10,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f29,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f29.f64 = double(temp.f32);
	// fmadds f10,f9,f12,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f13,f7,f12,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f12,f8,f0,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 * f0.f64 + ctx.f10.f64));
	// fmadds f0,f0,f6,f13
	f0.f64 = double(float(f0.f64 * ctx.f6.f64 + ctx.f13.f64));
	// fadds f31,f12,f11
	f31.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f28,f0,f11
	f28.f64 = double(float(f0.f64 + ctx.f11.f64));
	// fcmpu cr6,f31,f29
	cr6.compare(f31.f64, f29.f64);
	// blt cr6,0x8226b350
	if (cr6.lt) goto loc_8226B350;
	// fcmpu cr6,f28,f29
	cr6.compare(f28.f64, f29.f64);
	// blt cr6,0x8226b350
	if (cr6.lt) goto loc_8226B350;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8226b57c
	if (cr0.eq) goto loc_8226B57C;
loc_8226B33C:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226b2a8
	sub_8226B2A8(ctx, base);
	// b 0x8226b580
	goto loc_8226B580;
loc_8226B350:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f29.f64);
	// bgt cr6,0x8226b378
	if (cr6.gt) goto loc_8226B378;
	// fcmpu cr6,f28,f29
	cr6.compare(f28.f64, f29.f64);
	// bgt cr6,0x8226b378
	if (cr6.gt) goto loc_8226B378;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne 0x8226b33c
	if (!cr0.eq) goto loc_8226B33C;
loc_8226B36C:
	// stfs f29,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
loc_8226B370:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8226b580
	goto loc_8226B580;
loc_8226B378:
	// fsubs f0,f31,f28
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 - f28.f64));
	// stfs f29,80(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// beq cr6,0x8226b57c
	if (cr6.eq) goto loc_8226B57C;
	// fdivs f30,f31,f0
	f30.f64 = double(float(f31.f64 / f0.f64));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82122100
	sub_82122100(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f28.f64);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r5.u32);
	// stw r4,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r4.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// stw r5,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r5.u32);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r11.u32);
	// stw r7,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r7.u32);
	// ble cr6,0x8226b4c8
	if (!cr6.gt) goto loc_8226B4C8;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8226b448
	if (cr0.eq) goto loc_8226B448;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8226b2a8
	sub_8226B2A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226b448
	if (cr0.eq) goto loc_8226B448;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	f0.f64 = double(float(f30.f64 * f0.f64));
	// b 0x8226b488
	goto loc_8226B488;
loc_8226B448:
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne 0x8226b45c
	if (!cr0.eq) goto loc_8226B45C;
	// stfs f30,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// b 0x8226b48c
	goto loc_8226B48C;
loc_8226B45C:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8226b2a8
	sub_8226B2A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226b57c
	if (cr0.eq) goto loc_8226B57C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	f0.f64 = double(float(f0.f64 - f30.f64));
	// fmadds f0,f0,f13,f30
	f0.f64 = double(float(f0.f64 * ctx.f13.f64 + f30.f64));
loc_8226B488:
	// stfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
loc_8226B48C:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// bne cr6,0x8226b370
	if (!cr6.eq) goto loc_8226B370;
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// beq cr6,0x8226b370
	if (cr6.eq) goto loc_8226B370;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// stw r11,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r11.u32);
	// b 0x8226b370
	goto loc_8226B370;
loc_8226B4C8:
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8226b36c
	if (cr0.eq) goto loc_8226B36C;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8226b2a8
	sub_8226B2A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226b4f8
	if (cr0.eq) goto loc_8226B4F8;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fmuls f13,f30,f0
	ctx.f13.f64 = double(float(f30.f64 * f0.f64));
	// b 0x8226b530
	goto loc_8226B530;
loc_8226B4F8:
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8226b57c
	if (cr0.eq) goto loc_8226B57C;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8226b2a8
	sub_8226B2A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226b57c
	if (cr0.eq) goto loc_8226B57C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(f0.f64 - f30.f64));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64 + f30.f64));
loc_8226B530:
	// stfs f13,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// bne cr6,0x8226b370
	if (!cr6.eq) goto loc_8226B370;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// beq cr6,0x8226b370
	if (cr6.eq) goto loc_8226B370;
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f0,12(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 12, temp.u32);
	// stfs f11,0(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// stfs f13,8(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r28.u32 + 8, temp.u32);
	// stfs f12,4(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r28.u32 + 4, temp.u32);
	// b 0x8226b370
	goto loc_8226B370;
loc_8226B57C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226B580:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8239d634
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8226B590"))) PPC_WEAK_FUNC(sub_8226B590);
PPC_FUNC_IMPL(__imp__sub_8226B590) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f29,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f29.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f29,f13
	ctx.f8.f64 = double(float(f29.f64 - ctx.f13.f64));
	// fsubs f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// lfs f31,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f31.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f31,f0
	ctx.f10.f64 = double(float(f31.f64 - f0.f64));
	// fsubs f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 - f0.f64));
	// lfs f30,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f30.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f30,f12
	ctx.f9.f64 = double(float(f30.f64 - ctx.f12.f64));
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f7,f13,f13
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f11,f0,f0,f7
	ctx.f11.f64 = double(float(f0.f64 * f0.f64 + ctx.f7.f64));
	// lfs f7,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f7
	cr6.compare(ctx.f11.f64, ctx.f7.f64);
	// bne cr6,0x8226b620
	if (!cr6.eq) goto loc_8226B620;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226b69c
	goto loc_8226B69C;
loc_8226B620:
	// fmuls f13,f8,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmadds f0,f10,f0,f13
	f0.f64 = double(float(ctx.f10.f64 * f0.f64 + ctx.f13.f64));
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f9,f12,f0
	f0.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + f0.f64));
	// fdivs f0,f0,f11
	f0.f64 = double(float(f0.f64 / ctx.f11.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8226b648
	if (!cr6.gt) goto loc_8226B648;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// b 0x8226b654
	goto loc_8226B654;
loc_8226B648:
	// fcmpu cr6,f0,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f7.f64);
	// bge cr6,0x8226b654
	if (!cr6.lt) goto loc_8226B654;
	// fmr f0,f7
	f0.f64 = ctx.f7.f64;
loc_8226B654:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
	// bl 0x82122100
	sub_82122100(ctx, base);
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 - f29.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - f31.f64));
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 - f30.f64));
	// fmadds f13,f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x8226b69c
	if (cr6.gt) goto loc_8226B69C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8226B69C:
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

__attribute__((alias("__imp__sub_8226B6BC"))) PPC_WEAK_FUNC(sub_8226B6BC);
PPC_FUNC_IMPL(__imp__sub_8226B6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226B6C0"))) PPC_WEAK_FUNC(sub_8226B6C0);
PPC_FUNC_IMPL(__imp__sub_8226B6C0) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8226b754
	if (cr6.eq) goto loc_8226B754;
	// lis r29,-32136
	r29.s64 = -2106064896;
	// lwz r11,15616(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 15616);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// stw r11,15616(r29)
	PPC_STORE_U32(r29.u32 + 15616, r11.u32);
	// bne cr6,0x8226b70c
	if (!cr6.eq) goto loc_8226B70C;
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x8226b71c
	goto loc_8226B71C;
loc_8226B70C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8226b71c
	if (!cr6.gt) goto loc_8226B71C;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_8226B71C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8226b6c0
	sub_8226B6C0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// bl 0x8226b6c0
	sub_8226B6C0(ctx, base);
	// lwz r11,15616(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 15616);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,15616(r29)
	PPC_STORE_U32(r29.u32 + 15616, r11.u32);
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8226B754:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8226B75C"))) PPC_WEAK_FUNC(sub_8226B75C);
PPC_FUNC_IMPL(__imp__sub_8226B75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226B760"))) PPC_WEAK_FUNC(sub_8226B760);
PPC_FUNC_IMPL(__imp__sub_8226B760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8226b7b8
	if (cr6.eq) goto loc_8226B7B8;
loc_8226B784:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226adc0
	sub_8226ADC0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226a9e8
	sub_8226A9E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8226b760
	sub_8226B760(ctx, base);
	// lwz r31,20(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x8226b784
	if (!cr0.eq) goto loc_8226B784;
loc_8226B7B8:
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

__attribute__((alias("__imp__sub_8226B7D0"))) PPC_WEAK_FUNC(sub_8226B7D0);
PPC_FUNC_IMPL(__imp__sub_8226B7D0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// beq cr6,0x8226b948
	if (cr6.eq) goto loc_8226B948;
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x8226b83c
	if (!cr6.eq) goto loc_8226B83C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_8226B834:
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// b 0x8226b944
	goto loc_8226B944;
loc_8226B83C:
	// lfs f7,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f11,f7,f6
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f5,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f9,f5,f4
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// lfs f3,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f10,f3,f2
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f8,f9,f9,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fmadds f8,f10,f10,f8
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fsqrts f31,f8
	f31.f64 = double(float(sqrt(ctx.f8.f64)));
	// fadds f8,f12,f31
	ctx.f8.f64 = double(float(ctx.f12.f64 + f31.f64));
	// fcmpu cr6,f8,f13
	cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// ble cr6,0x8226b948
	if (!cr6.gt) goto loc_8226B948;
	// fadds f8,f13,f31
	ctx.f8.f64 = double(float(ctx.f13.f64 + f31.f64));
	// fcmpu cr6,f8,f12
	cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// bge cr6,0x8226b8ac
	if (!cr6.lt) goto loc_8226B8AC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x8226b834
	goto loc_8226B834;
loc_8226B8AC:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f0.f64);
	// beq cr6,0x8226b948
	if (cr6.eq) goto loc_8226B948;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fdivs f0,f0,f31
	f0.f64 = double(float(f0.f64 / f31.f64));
	// lfs f30,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(f0.f64 * ctx.f10.f64));
	// fmuls f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// fsubs f12,f6,f9
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f12,f2,f8
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f13,f7,f11
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f13,f3,f10
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f5,f0
	f0.f64 = double(float(ctx.f5.f64 + f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82122100
	sub_82122100(ctx, base);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	f0.f64 = double(float(f31.f64 + f0.f64));
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
loc_8226B944:
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
loc_8226B948:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_8226B968"))) PPC_WEAK_FUNC(sub_8226B968);
PPC_FUNC_IMPL(__imp__sub_8226B968) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8239d5e4
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f29,f3
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f3.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// lfs f0,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f30,f29,f0
	f30.f64 = double(float(f29.f64 * f0.f64));
	// stfs f31,0(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fneg f0,f1
	f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f31,8(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f27,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f27.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f27,4(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f31,24(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f2,28(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f0,-25364(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x8239ddc0
	sub_8239DDC0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// frsp f30,f0
	f30.f64 = double(float(f0.f64));
	// bl 0x8239de90
	sub_8239DE90(ctx, base);
	// fdivs f0,f30,f28
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 / f28.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// frsp f0,f1
	f0.f64 = double(float(ctx.f1.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f31,64(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f30,68(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f31,76(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// stfs f31,80(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// stfs f30,84(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stfs f31,92(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// bl 0x821f6f20
	sub_821F6F20(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f31
	cr6.compare(f29.f64, f31.f64);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f31,40(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f31,56(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f31,60(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// bne cr6,0x8226ba70
	if (!cr6.eq) goto loc_8226BA70;
	// stfs f27,60(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f27,44(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f28,76(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// stfs f28,92(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
loc_8226BA70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8239d630
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226BA8C"))) PPC_WEAK_FUNC(sub_8226BA8C);
PPC_FUNC_IMPL(__imp__sub_8226BA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226BA90"))) PPC_WEAK_FUNC(sub_8226BA90);
PPC_FUNC_IMPL(__imp__sub_8226BA90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmadds f10,f9,f13,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f10,f12,f8,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fadds f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// blt cr6,0x8226bad4
	if (cr6.lt) goto loc_8226BAD4;
	// li r11,0
	r11.s64 = 0;
loc_8226BAD4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8226bbf8
	if (!cr0.eq) goto loc_8226BBF8;
	// lfs f10,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f10,f9,f13,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f10,f8,f12,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fadds f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// blt cr6,0x8226bb0c
	if (cr6.lt) goto loc_8226BB0C;
	// li r11,0
	r11.s64 = 0;
loc_8226BB0C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8226bbf8
	if (!cr0.eq) goto loc_8226BBF8;
	// lfs f10,40(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f9,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f10,f9,f13,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f10,f8,f12,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fadds f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// blt cr6,0x8226bb44
	if (cr6.lt) goto loc_8226BB44;
	// li r11,0
	r11.s64 = 0;
loc_8226BB44:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8226bbf8
	if (!cr0.eq) goto loc_8226BBF8;
	// lfs f10,56(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f9,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f10,f9,f13,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f10,f8,f12,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fadds f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// blt cr6,0x8226bb7c
	if (cr6.lt) goto loc_8226BB7C;
	// li r11,0
	r11.s64 = 0;
loc_8226BB7C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8226bbf8
	if (!cr0.eq) goto loc_8226BBF8;
	// lfs f10,72(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f9,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f10,f9,f13,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f10,f8,f12,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fadds f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// blt cr6,0x8226bbb4
	if (cr6.lt) goto loc_8226BBB4;
	// li r11,0
	r11.s64 = 0;
loc_8226BBB4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8226bbf8
	if (!cr0.eq) goto loc_8226BBF8;
	// lfs f10,88(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fmuls f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f10,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f0,f10,f13,f0
	f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + f0.f64));
	// fmadds f0,f12,f9,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + f0.f64));
	// fadds f0,f0,f8
	f0.f64 = double(float(f0.f64 + ctx.f8.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// blt cr6,0x8226bbec
	if (cr6.lt) goto loc_8226BBEC;
	// li r11,0
	r11.s64 = 0;
loc_8226BBEC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x8226bbfc
	if (cr0.eq) goto loc_8226BBFC;
loc_8226BBF8:
	// li r11,1
	r11.s64 = 1;
loc_8226BBFC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226BC04"))) PPC_WEAK_FUNC(sub_8226BC04);
PPC_FUNC_IMPL(__imp__sub_8226BC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226BC08"))) PPC_WEAK_FUNC(sub_8226BC08);
PPC_FUNC_IMPL(__imp__sub_8226BC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r11,r11,18860
	r11.s64 = r11.s64 + 18860;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// stfs f1,-16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -16, temp.u32);
	// stw r27,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, r27.u32);
	// stfs f30,-12(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + -12, temp.u32);
	// stw r28,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r28.u32);
	// stfs f31,0(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8226BCC0"))) PPC_WEAK_FUNC(sub_8226BCC0);
PPC_FUNC_IMPL(__imp__sub_8226BCC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,17944
	ctx.r4.s64 = r11.s64 + 17944;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,17928
	ctx.r4.s64 = r11.s64 + 17928;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r4,r11,17908
	ctx.r4.s64 = r11.s64 + 17908;
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
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,17892
	ctx.r4.s64 = r11.s64 + 17892;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
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
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,17880
	ctx.r4.s64 = r11.s64 + 17880;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// addi r4,r11,17868
	ctx.r4.s64 = r11.s64 + 17868;
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r4,r11,17852
	ctx.r4.s64 = r11.s64 + 17852;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r11,r11,18860
	r11.s64 = r11.s64 + 18860;
	// stfs f1,-16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -16, temp.u32);
	// stw r29,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, r29.u32);
	// stfs f30,-12(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + -12, temp.u32);
	// stw r30,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r30.u32);
	// stfs f31,0(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32217
	r11.s64 = -2111373312;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,-17400
	ctx.r4.s64 = r11.s64 + -17400;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8226BE50"))) PPC_WEAK_FUNC(sub_8226BE50);
PPC_FUNC_IMPL(__imp__sub_8226BE50) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x8226be6c
	if (cr6.lt) goto loc_8226BE6C;
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8226be70
	if (!cr6.gt) goto loc_8226BE70;
loc_8226BE6C:
	// stfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_8226BE70:
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x8226be8c
	if (cr6.lt) goto loc_8226BE8C;
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8226be90
	if (!cr6.gt) goto loc_8226BE90;
loc_8226BE8C:
	// stfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
loc_8226BE90:
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x8226beac
	if (cr6.lt) goto loc_8226BEAC;
	// lfs f13,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!cr6.gt) return;
loc_8226BEAC:
	// stfs f13,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226BEB4"))) PPC_WEAK_FUNC(sub_8226BEB4);
PPC_FUNC_IMPL(__imp__sub_8226BEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226BEB8"))) PPC_WEAK_FUNC(sub_8226BEB8);
PPC_FUNC_IMPL(__imp__sub_8226BEB8) {
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
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stb r11,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r11.u8);
	// stb r11,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r11.u8);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x8226bf90
	if (cr6.eq) goto loc_8226BF90;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r25,r30,12
	r25.s64 = r30.s64 + 12;
	// li r26,1
	r26.s64 = 1;
	// lfs f31,18844(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18844);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fneg f29,f31
	f29.u64 = f31.u64 ^ 0x8000000000000000;
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
loc_8226BF18:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8214f950
	sub_8214F950(ctx, base);
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	f0.f64 = double(float(f0.f64 * ctx.f11.f64));
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f12,f13,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + f0.f64));
	// fmadds f0,f11,f10,f0
	f0.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + f0.f64));
	// fadds f0,f0,f9
	f0.f64 = double(float(f0.f64 + ctx.f9.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x8226bf74
	if (!cr6.gt) goto loc_8226BF74;
	// stb r26,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r26.u8);
loc_8226BF74:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f29.f64);
	// bge cr6,0x8226bf80
	if (!cr6.lt) goto loc_8226BF80;
	// stb r26,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r26.u8);
loc_8226BF80:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8226bf18
	if (!cr6.eq) goto loc_8226BF18;
loc_8226BF90:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8226BFA4"))) PPC_WEAK_FUNC(sub_8226BFA4);
PPC_FUNC_IMPL(__imp__sub_8226BFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226BFA8"))) PPC_WEAK_FUNC(sub_8226BFA8);
PPC_FUNC_IMPL(__imp__sub_8226BFA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x8226c034
	goto loc_8226C034;
loc_8226BFB4:
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
	// beq 0x8226c04c
	if (cr0.eq) goto loc_8226C04C;
	// lfs f0,84(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 84);
	f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f13,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x8226bfe4
	if (cr6.gt) goto loc_8226BFE4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8226BFE4:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8226c030
	if (cr0.eq) goto loc_8226C030;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x8226c028
	if (cr6.eq) goto loc_8226C028;
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
loc_8226C028:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// b 0x8226c034
	goto loc_8226C034;
loc_8226C030:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8226C034:
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
	// bne 0x8226bfb4
	if (!cr0.eq) goto loc_8226BFB4;
loc_8226C04C:
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

__attribute__((alias("__imp__sub_8226C0A0"))) PPC_WEAK_FUNC(sub_8226C0A0);
PPC_FUNC_IMPL(__imp__sub_8226C0A0) {
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
	// beq 0x8226c0d0
	if (cr0.eq) goto loc_8226C0D0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x8226c0e8
	goto loc_8226C0E8;
loc_8226C0D0:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8226c0f8
	if (cr0.eq) goto loc_8226C0F8;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
loc_8226C0E8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82370ed8
	sub_82370ED8(ctx, base);
	// b 0x8226c128
	goto loc_8226C128;
loc_8226C0F8:
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
loc_8226C128:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226C138"))) PPC_WEAK_FUNC(sub_8226C138);
PPC_FUNC_IMPL(__imp__sub_8226C138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f28,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f28.f64 = double(temp.f32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// stfs f28,76(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x8226c1dc
	if (cr6.eq) goto loc_8226C1DC;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f8,5736(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5736);
	ctx.f8.f64 = double(temp.f32);
loc_8226C184:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f0,f12
	ctx.f6.f64 = double(float(f0.f64 * ctx.f12.f64));
	// fmuls f5,f13,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// fmuls f4,f11,f10
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f7,76(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// fmsubs f13,f13,f11,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f6.f64));
	// fmsubs f0,f0,f10,f5
	f0.f64 = double(float(f0.f64 * ctx.f10.f64 - ctx.f5.f64));
	// fmsubs f12,f12,f9,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 - ctx.f4.f64));
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// fmadds f0,f0,f8,f7
	f0.f64 = double(float(f0.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfs f0,76(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x8226c184
	if (!cr6.eq) goto loc_8226C184;
loc_8226C1DC:
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bde40
	sub_821BDE40(ctx, base);
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	f0.f64 = double(temp.f32);
	// lfs f11,64(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lfs f13,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,68(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lfs f12,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f9,60(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmadds f0,f10,f13,f11
	f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fnmadds f0,f9,f12,f0
	f0.f64 = double(float(-(ctx.f9.f64 * ctx.f12.f64 + f0.f64)));
	// stfs f0,140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x821be1b8
	sub_821BE1B8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r28,r31,12
	r28.s64 = r31.s64 + 12;
	// stfs f28,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lfs f0,-8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x8214f950
	sub_8214F950(ctx, base);
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8226c380
	goto loc_8226C380;
loc_8226C268:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f28,104(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8214f950
	sub_8214F950(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// lfs f31,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f31.f64 = double(temp.f32);
	// fsubs f11,f31,f0
	ctx.f11.f64 = double(float(f31.f64 - f0.f64));
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	f0.f64 = double(temp.f32);
	// lfs f30,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f30.f64 = double(temp.f32);
	// fsubs f10,f30,f0
	ctx.f10.f64 = double(float(f30.f64 - f0.f64));
	// lfs f29,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f29.f64 = double(temp.f32);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f0.f64 = double(temp.f32);
	// fsubs f9,f29,f0
	ctx.f9.f64 = double(float(f29.f64 - f0.f64));
	// fcmpu cr6,f11,f28
	cr6.compare(ctx.f11.f64, f28.f64);
	// bne cr6,0x8226c2cc
	if (!cr6.eq) goto loc_8226C2CC;
	// fcmpu cr6,f10,f28
	cr6.compare(ctx.f10.f64, f28.f64);
	// bne cr6,0x8226c2cc
	if (!cr6.eq) goto loc_8226C2CC;
	// fcmpu cr6,f9,f28
	cr6.compare(ctx.f9.f64, f28.f64);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8226c2d0
	if (cr6.eq) goto loc_8226C2D0;
loc_8226C2CC:
	// li r11,0
	r11.s64 = 0;
loc_8226C2D0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8226c37c
	if (!cr0.eq) goto loc_8226C37C;
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	f0.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(f0.f64 * ctx.f9.f64));
	// lfs f12,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmsubs f12,f12,f10,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f6.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmsubs f0,f0,f11,f8
	f0.f64 = double(float(f0.f64 * ctx.f11.f64 - ctx.f8.f64));
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmsubs f13,f13,f9,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 - ctx.f7.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x8214f728
	sub_8214F728(ctx, base);
	// lfs f13,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f29
	ctx.f11.f64 = double(float(ctx.f13.f64 * f29.f64));
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	f0.f64 = double(temp.f32);
	// stfs f0,148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// fmadds f0,f0,f30,f11
	f0.f64 = double(float(f0.f64 * f30.f64 + ctx.f11.f64));
	// fnmadds f0,f12,f31,f0
	f0.f64 = double(float(-(ctx.f12.f64 * f31.f64 + f0.f64)));
	// stfs f0,156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x821be1b8
	sub_821BE1B8(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
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
loc_8226C37C:
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
loc_8226C380:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x8226c268
	if (!cr6.eq) goto loc_8226C268;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8239d634
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8226C39C"))) PPC_WEAK_FUNC(sub_8226C39C);
PPC_FUNC_IMPL(__imp__sub_8226C39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226C3A0"))) PPC_WEAK_FUNC(sub_8226C3A0);
PPC_FUNC_IMPL(__imp__sub_8226C3A0) {
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
	// lwz r16,18004(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18004);
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
	// bl 0x821bc578
	sub_821BC578(ctx, base);
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
	// bl 0x8219d0d0
	sub_8219D0D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8226C3A8"))) PPC_WEAK_FUNC(sub_8226C3A8);
PPC_FUNC_IMPL(__imp__sub_8226C3A8) {
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
	// bl 0x821bc578
	sub_821BC578(ctx, base);
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
	// bl 0x8219d0d0
	sub_8219D0D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8226C404"))) PPC_WEAK_FUNC(sub_8226C404);
PPC_FUNC_IMPL(__imp__sub_8226C404) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// lwz r16,18004(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18004);
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
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
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
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bge cr6,0x8226c514
	if (!cr6.lt) goto loc_8226C514;
	// lis r11,8191
	r11.s64 = 536805376;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x8226c484
	if (!cr6.gt) goto loc_8226C484;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,7600
	ctx.r3.s64 = r11.s64 + 7600;
	// bl 0x82125240
	sub_82125240(ctx, base);
loc_8226C484:
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r11,r5,r6
	r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// srawi r27,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r27.s64 = r11.s32 >> 3;
	// beq cr6,0x8226c4e8
	if (cr6.eq) goto loc_8226C4E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226c3a8
	sub_8226C3A8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8226c4b8
	goto loc_8226C4B8;
loc_8226C4B4:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_8226C4B8:
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
	// bne 0x8226c4b4
	if (!cr0.eq) goto loc_8226C4B4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x8226c4f8
	goto loc_8226C4F8;
loc_8226C4E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821bc578
	sub_821BC578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8226C4F8:
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_8226C514:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8226C40C"))) PPC_WEAK_FUNC(sub_8226C40C);
PPC_FUNC_IMPL(__imp__sub_8226C40C) {
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
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_8226C438"))) PPC_WEAK_FUNC(sub_8226C438);
PPC_FUNC_IMPL(__imp__sub_8226C438) {
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
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bge cr6,0x8226c514
	if (!cr6.lt) goto loc_8226C514;
	// lis r11,8191
	r11.s64 = 536805376;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x8226c484
	if (!cr6.gt) goto loc_8226C484;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,7600
	ctx.r3.s64 = r11.s64 + 7600;
	// bl 0x82125240
	sub_82125240(ctx, base);
loc_8226C484:
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r11,r5,r6
	r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// srawi r27,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r27.s64 = r11.s32 >> 3;
	// beq cr6,0x8226c4e8
	if (cr6.eq) goto loc_8226C4E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226c3a8
	sub_8226C3A8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8226c4b8
	goto loc_8226C4B8;
loc_8226C4B4:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_8226C4B8:
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
	// bne 0x8226c4b4
	if (!cr0.eq) goto loc_8226C4B4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x8226c4f8
	goto loc_8226C4F8;
loc_8226C4E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821bc578
	sub_821BC578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8226C4F8:
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_8226C514:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8226C51C"))) PPC_WEAK_FUNC(sub_8226C51C);
PPC_FUNC_IMPL(__imp__sub_8226C51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226C520"))) PPC_WEAK_FUNC(sub_8226C520);
PPC_FUNC_IMPL(__imp__sub_8226C520) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// lfs f11,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f0,8(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	f0.f64 = double(float(f0.f64 - ctx.f11.f64));
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// bl 0x8214f728
	sub_8214F728(ctx, base);
	// lfs f13,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r31,44
	r28.s64 = r31.s64 + 44;
	// lfs f0,8(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 8);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f12,4(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f12,28(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f9,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmsubs f0,f13,f0,f8
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 - ctx.f8.f64));
	// stfs f0,8(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 8, temp.u32);
	// fmsubs f13,f10,f11,f7
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f7.f64));
	// stfs f13,4(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r28.u32 + 4, temp.u32);
	// fmsubs f12,f9,f12,f6
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f12,0(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// bl 0x8214f728
	sub_8214F728(ctx, base);
	// lfs f12,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,60
	r11.s64 = r31.s64 + 60;
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,8(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmsubs f8,f13,f0,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * f0.f64 - ctx.f8.f64));
	// stfs f8,36(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmsubs f0,f10,f11,f13
	f0.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f13.f64));
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// fmsubs f13,f9,f12,f7
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f7.f64));
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// beq cr6,0x8226c6a0
	if (cr6.eq) goto loc_8226C6A0;
	// subf r8,r10,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r10.s64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// srawi. r8,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble 0x8226c69c
	if (!cr0.gt) goto loc_8226C69C;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_8226C67C:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bgt 0x8226c67c
	if (cr0.gt) goto loc_8226C67C;
loc_8226C69C:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_8226C6A0:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82122258
	sub_82122258(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x821cc140
	sub_821CC140(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82122258
	sub_82122258(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x821cc140
	sub_821CC140(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82122258
	sub_82122258(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x821cc140
	sub_821CC140(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226c138
	sub_8226C138(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8226C734"))) PPC_WEAK_FUNC(sub_8226C734);
PPC_FUNC_IMPL(__imp__sub_8226C734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226C738"))) PPC_WEAK_FUNC(sub_8226C738);
PPC_FUNC_IMPL(__imp__sub_8226C738) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,18064(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18064);
	// mflr r12
	// bl 0x8239bcec
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226c7c4
	if (cr0.eq) goto loc_8226C7C4;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8226c9c4
	if (cr6.eq) goto loc_8226C9C4;
	// subf r9,r10,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r10.s64;
	// srawi. r9,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x8226c7bc
	if (!cr0.gt) goto loc_8226C7BC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
loc_8226C79C:
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bgt 0x8226c79c
	if (cr0.gt) goto loc_8226C79C;
loc_8226C7BC:
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// b 0x8226c9c4
	goto loc_8226C9C4;
loc_8226C7C4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// cmplw cr6,r25,r29
	cr6.compare<uint32_t>(r25.u32, r29.u32, xer);
	// bne cr6,0x8226c7e4
	if (!cr6.eq) goto loc_8226C7E4;
	// addi r26,r31,88
	r26.s64 = r31.s64 + 88;
	// b 0x8226c82c
	goto loc_8226C82C;
loc_8226C7E4:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r26,r25
	r26.u64 = r25.u64;
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8226c82c
	if (cr6.eq) goto loc_8226C82C;
	// subf r9,r11,r11
	ctx.r9.s64 = r11.s64 - r11.s64;
	// srawi. r9,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x8226c828
	if (!cr0.gt) goto loc_8226C828;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_8226C808:
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bgt 0x8226c808
	if (cr0.gt) goto loc_8226C808;
loc_8226C828:
	// stw r10,4(r25)
	PPC_STORE_U32(r25.u32 + 4, ctx.r10.u32);
loc_8226C82C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8226c438
	sub_8226C438(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r28,r27,8
	r28.s64 = r27.s64 + 8;
	// lfs f13,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lfs f10,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// fsubs f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 - f0.f64));
	// lfs f10,-8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// stfs f0,84(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmadds f0,f11,f0,f13
	f0.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f13.f64));
	// beq cr6,0x8226c96c
	if (cr6.eq) goto loc_8226C96C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
loc_8226C898:
	// lfs f10,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,0(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f8,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f31,f8,f13,f12
	f31.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// blt cr6,0x8226c918
	if (cr6.lt) goto loc_8226C918;
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// ble cr6,0x8226c910
	if (!cr6.gt) goto loc_8226C910;
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bge cr6,0x8226c910
	if (!cr6.lt) goto loc_8226C910;
	// fsubs f9,f0,f31
	ctx.f9.f64 = double(float(f0.f64 - f31.f64));
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fdivs f0,f0,f9
	f0.f64 = double(float(f0.f64 / ctx.f9.f64));
	// fmadds f13,f11,f0,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f13.f64));
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// fmadds f0,f10,f0,f12
	f0.f64 = double(float(ctx.f10.f64 * f0.f64 + ctx.f12.f64));
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// bl 0x821cc140
	sub_821CC140(ctx, base);
loc_8226C910:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x8226c94c
	goto loc_8226C94C;
loc_8226C918:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f30.f64);
	// ble cr6,0x8226c954
	if (!cr6.gt) goto loc_8226C954;
	// fsubs f9,f0,f31
	ctx.f9.f64 = double(float(f0.f64 - f31.f64));
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// fdivs f0,f0,f9
	f0.f64 = double(float(f0.f64 / ctx.f9.f64));
	// fmadds f13,f11,f0,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f13.f64));
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// fmadds f0,f10,f0,f12
	f0.f64 = double(float(ctx.f10.f64 * f0.f64 + ctx.f12.f64));
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
loc_8226C94C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821cc140
	sub_821CC140(ctx, base);
loc_8226C954:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8226c898
	if (!cr6.eq) goto loc_8226C898;
loc_8226C96C:
	// cmplw cr6,r25,r29
	cr6.compare<uint32_t>(r25.u32, r29.u32, xer);
	// bne cr6,0x8226c980
	if (!cr6.eq) goto loc_8226C980;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821cb880
	sub_821CB880(ctx, base);
loc_8226C980:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// b 0x8226c990
	goto loc_8226C990;
loc_8226C98C:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_8226C990:
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
	// bne 0x8226c98c
	if (!cr0.eq) goto loc_8226C98C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8226c9c4
	if (cr6.eq) goto loc_8226C9C4;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8226C9C4:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8226C740"))) PPC_WEAK_FUNC(sub_8226C740);
PPC_FUNC_IMPL(__imp__sub_8226C740) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226c7c4
	if (cr0.eq) goto loc_8226C7C4;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8226c9c4
	if (cr6.eq) goto loc_8226C9C4;
	// subf r9,r10,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r10.s64;
	// srawi. r9,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x8226c7bc
	if (!cr0.gt) goto loc_8226C7BC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
loc_8226C79C:
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bgt 0x8226c79c
	if (cr0.gt) goto loc_8226C79C;
loc_8226C7BC:
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// b 0x8226c9c4
	goto loc_8226C9C4;
loc_8226C7C4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// cmplw cr6,r25,r29
	cr6.compare<uint32_t>(r25.u32, r29.u32, xer);
	// bne cr6,0x8226c7e4
	if (!cr6.eq) goto loc_8226C7E4;
	// addi r26,r31,88
	r26.s64 = r31.s64 + 88;
	// b 0x8226c82c
	goto loc_8226C82C;
loc_8226C7E4:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r26,r25
	r26.u64 = r25.u64;
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8226c82c
	if (cr6.eq) goto loc_8226C82C;
	// subf r9,r11,r11
	ctx.r9.s64 = r11.s64 - r11.s64;
	// srawi. r9,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x8226c828
	if (!cr0.gt) goto loc_8226C828;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_8226C808:
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bgt 0x8226c808
	if (cr0.gt) goto loc_8226C808;
loc_8226C828:
	// stw r10,4(r25)
	PPC_STORE_U32(r25.u32 + 4, ctx.r10.u32);
loc_8226C82C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8226c438
	sub_8226C438(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r28,r27,8
	r28.s64 = r27.s64 + 8;
	// lfs f13,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lfs f10,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// fsubs f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 - f0.f64));
	// lfs f10,-8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// stfs f0,84(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmadds f0,f11,f0,f13
	f0.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f13.f64));
	// beq cr6,0x8226c96c
	if (cr6.eq) goto loc_8226C96C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
loc_8226C898:
	// lfs f10,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,0(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f8,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f31,f8,f13,f12
	f31.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// blt cr6,0x8226c918
	if (cr6.lt) goto loc_8226C918;
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// ble cr6,0x8226c910
	if (!cr6.gt) goto loc_8226C910;
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bge cr6,0x8226c910
	if (!cr6.lt) goto loc_8226C910;
	// fsubs f9,f0,f31
	ctx.f9.f64 = double(float(f0.f64 - f31.f64));
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fdivs f0,f0,f9
	f0.f64 = double(float(f0.f64 / ctx.f9.f64));
	// fmadds f13,f11,f0,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f13.f64));
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// fmadds f0,f10,f0,f12
	f0.f64 = double(float(ctx.f10.f64 * f0.f64 + ctx.f12.f64));
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// bl 0x821cc140
	sub_821CC140(ctx, base);
loc_8226C910:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x8226c94c
	goto loc_8226C94C;
loc_8226C918:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f30.f64);
	// ble cr6,0x8226c954
	if (!cr6.gt) goto loc_8226C954;
	// fsubs f9,f0,f31
	ctx.f9.f64 = double(float(f0.f64 - f31.f64));
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// fdivs f0,f0,f9
	f0.f64 = double(float(f0.f64 / ctx.f9.f64));
	// fmadds f13,f11,f0,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f13.f64));
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// fmadds f0,f10,f0,f12
	f0.f64 = double(float(ctx.f10.f64 * f0.f64 + ctx.f12.f64));
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
loc_8226C94C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821cc140
	sub_821CC140(ctx, base);
loc_8226C954:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8226c898
	if (!cr6.eq) goto loc_8226C898;
loc_8226C96C:
	// cmplw cr6,r25,r29
	cr6.compare<uint32_t>(r25.u32, r29.u32, xer);
	// bne cr6,0x8226c980
	if (!cr6.eq) goto loc_8226C980;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821cb880
	sub_821CB880(ctx, base);
loc_8226C980:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// b 0x8226c990
	goto loc_8226C990;
loc_8226C98C:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_8226C990:
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
	// bne 0x8226c98c
	if (!cr0.eq) goto loc_8226C98C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8226c9c4
	if (cr6.eq) goto loc_8226C9C4;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8226C9C4:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8226C9D4"))) PPC_WEAK_FUNC(sub_8226C9D4);
PPC_FUNC_IMPL(__imp__sub_8226C9D4) {
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
	// bl 0x82267180
	sub_82267180(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226C9FC"))) PPC_WEAK_FUNC(sub_8226C9FC);
PPC_FUNC_IMPL(__imp__sub_8226C9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226CA00"))) PPC_WEAK_FUNC(sub_8226CA00);
PPC_FUNC_IMPL(__imp__sub_8226CA00) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,18136(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18136);
	// mflr r12
	// bl 0x8239bce8
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r24,0
	r24.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r25,r24
	r25.u64 = r24.u64;
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r26,r24
	r26.u64 = r24.u64;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x8226cac4
	if (cr6.eq) goto loc_8226CAC4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
loc_8226CA4C:
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stfs f13,96(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f31,104(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// bl 0x8214f950
	sub_8214F950(ctx, base);
	// lfs f12,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// lfs f13,104(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f12,f13,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + f0.f64));
	// fmadds f0,f11,f10,f0
	f0.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + f0.f64));
	// fadds f0,f0,f9
	f0.f64 = double(float(f0.f64 + ctx.f9.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x8226caa8
	if (!cr6.gt) goto loc_8226CAA8;
	// li r25,1
	r25.s64 = 1;
loc_8226CAA8:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x8226cab4
	if (!cr6.lt) goto loc_8226CAB4;
	// li r26,1
	r26.s64 = 1;
loc_8226CAB4:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x8226ca4c
	if (!cr6.eq) goto loc_8226CA4C;
loc_8226CAC4:
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8226cae0
	if (!cr0.eq) goto loc_8226CAE0;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne 0x8226caf4
	if (!cr0.eq) goto loc_8226CAF4;
loc_8226CAD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226cc38
	goto loc_8226CC38;
loc_8226CAE0:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8226cb0c
	if (!cr0.eq) goto loc_8226CB0C;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq 0x8226cbac
	if (cr0.eq) goto loc_8226CBAC;
loc_8226CAF4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8226ca08
	sub_8226CA08(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8226cbac
	if (!cr0.eq) goto loc_8226CBAC;
	// b 0x8226cad8
	goto loc_8226CAD8;
loc_8226CB0C:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8226cbac
	if (cr6.eq) goto loc_8226CBAC;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8226af38
	sub_8226AF38(ctx, base);
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// stw r24,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r24.u32);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8226cbb4
	if (cr6.eq) goto loc_8226CBB4;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8226c740
	sub_8226C740(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x8226ca08
	sub_8226CA08(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226cbb4
	if (cr0.eq) goto loc_8226CBB4;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x8226cb78
	goto loc_8226CB78;
loc_8226CB74:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_8226CB78:
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
	// bne 0x8226cb74
	if (!cr0.eq) goto loc_8226CB74;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8226cbac
	if (cr6.eq) goto loc_8226CBAC;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8226CBAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8226cc38
	goto loc_8226CC38;
loc_8226CBB4:
	// lfs f0,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 108);
	f0.f64 = double(temp.f32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// lfs f13,104(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,108(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// stfs f13,104(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// bl 0x8226c740
	sub_8226C740(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8226ca08
	sub_8226CA08(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x8226cc00
	goto loc_8226CC00;
loc_8226CBFC:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_8226CC00:
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
	// bne 0x8226cbfc
	if (!cr0.eq) goto loc_8226CBFC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8226cc34
	if (cr6.eq) goto loc_8226CC34;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8226CC34:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8226CC38:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8226CA08"))) PPC_WEAK_FUNC(sub_8226CA08);
PPC_FUNC_IMPL(__imp__sub_8226CA08) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r24,0
	r24.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r25,r24
	r25.u64 = r24.u64;
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r26,r24
	r26.u64 = r24.u64;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x8226cac4
	if (cr6.eq) goto loc_8226CAC4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
loc_8226CA4C:
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stfs f13,96(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f31,104(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// bl 0x8214f950
	sub_8214F950(ctx, base);
	// lfs f12,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// lfs f13,104(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f12,f13,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + f0.f64));
	// fmadds f0,f11,f10,f0
	f0.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + f0.f64));
	// fadds f0,f0,f9
	f0.f64 = double(float(f0.f64 + ctx.f9.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x8226caa8
	if (!cr6.gt) goto loc_8226CAA8;
	// li r25,1
	r25.s64 = 1;
loc_8226CAA8:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x8226cab4
	if (!cr6.lt) goto loc_8226CAB4;
	// li r26,1
	r26.s64 = 1;
loc_8226CAB4:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x8226ca4c
	if (!cr6.eq) goto loc_8226CA4C;
loc_8226CAC4:
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8226cae0
	if (!cr0.eq) goto loc_8226CAE0;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne 0x8226caf4
	if (!cr0.eq) goto loc_8226CAF4;
loc_8226CAD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226cc38
	goto loc_8226CC38;
loc_8226CAE0:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8226cb0c
	if (!cr0.eq) goto loc_8226CB0C;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq 0x8226cbac
	if (cr0.eq) goto loc_8226CBAC;
loc_8226CAF4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8226ca08
	sub_8226CA08(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8226cbac
	if (!cr0.eq) goto loc_8226CBAC;
	// b 0x8226cad8
	goto loc_8226CAD8;
loc_8226CB0C:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8226cbac
	if (cr6.eq) goto loc_8226CBAC;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8226af38
	sub_8226AF38(ctx, base);
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// stw r24,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r24.u32);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8226cbb4
	if (cr6.eq) goto loc_8226CBB4;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8226c740
	sub_8226C740(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x8226ca08
	sub_8226CA08(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226cbb4
	if (cr0.eq) goto loc_8226CBB4;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x8226cb78
	goto loc_8226CB78;
loc_8226CB74:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_8226CB78:
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
	// bne 0x8226cb74
	if (!cr0.eq) goto loc_8226CB74;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8226cbac
	if (cr6.eq) goto loc_8226CBAC;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8226CBAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8226cc38
	goto loc_8226CC38;
loc_8226CBB4:
	// lfs f0,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 108);
	f0.f64 = double(temp.f32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// lfs f13,104(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,108(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// stfs f13,104(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// bl 0x8226c740
	sub_8226C740(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8226ca08
	sub_8226CA08(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x8226cc00
	goto loc_8226CC00;
loc_8226CBFC:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_8226CC00:
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
	// bne 0x8226cbfc
	if (!cr0.eq) goto loc_8226CBFC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8226cc34
	if (cr6.eq) goto loc_8226CC34;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8226CC34:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8226CC38:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8226CC44"))) PPC_WEAK_FUNC(sub_8226CC44);
PPC_FUNC_IMPL(__imp__sub_8226CC44) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82267180
	sub_82267180(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226CC6C"))) PPC_WEAK_FUNC(sub_8226CC6C);
PPC_FUNC_IMPL(__imp__sub_8226CC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226CC70"))) PPC_WEAK_FUNC(sub_8226CC70);
PPC_FUNC_IMPL(__imp__sub_8226CC70) {
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
	PPCRegister f0{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,18224(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18224);
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8239d5cc
	// addi r31,r1,-336
	r31.s64 = ctx.r1.s64 + -336;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lfs f1,18860(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18860);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// beq cr6,0x8226d2c8
	if (cr6.eq) goto loc_8226D2C8;
	// addi r5,r31,192
	ctx.r5.s64 = r31.s64 + 192;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8226ace8
	sub_8226ACE8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821ccaf8
	sub_821CCAF8(ctx, base);
	// lfs f26,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 192);
	f26.f64 = double(temp.f32);
	// lfs f21,196(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 196);
	f21.f64 = double(temp.f32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stfs f26,104(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stfs f21,108(r31)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// ld r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 104);
	// lfs f27,208(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 208);
	f27.f64 = double(temp.f32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// stfs f27,104(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// stfs f21,108(r31)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// ld r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 104);
	// lfs f24,212(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 212);
	f24.f64 = double(temp.f32);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stfs f27,104(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stfs f24,108(r31)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// ld r8,104(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 104);
	// stfs f26,104(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// stfs f24,108(r31)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// ld r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 104);
	// lfs f28,200(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 200);
	f28.f64 = double(temp.f32);
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// std r8,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r8.u64);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// std r7,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r7.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,116(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f31,128(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f31,136(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// lfs f30,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f30.f64 = double(temp.f32);
	// stfs f30,112(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f30,132(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f31,144(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f31,148(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f30,152(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f31,160(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f31,164(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f28,168(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// bl 0x8226ca08
	sub_8226CA08(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226cde0
	if (cr0.eq) goto loc_8226CDE0;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x8226cda4
	goto loc_8226CDA4;
loc_8226CDA0:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_8226CDA4:
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
	// bne 0x8226cda0
	if (!cr0.eq) goto loc_8226CDA0;
loc_8226CDBC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8226cdd8
	if (cr6.eq) goto loc_8226CDD8;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8226CDD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226d2cc
	goto loc_8226D2CC;
loc_8226CDE0:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8226cdf4
	if (cr6.eq) goto loc_8226CDF4;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_8226CDF4:
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821ccaf8
	sub_821CCAF8(ctx, base);
	// fneg f23,f24
	ctx.fpscr.disableFlushMode();
	f23.u64 = f24.u64 ^ 0x8000000000000000;
	// stfs f26,104(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stfs f23,108(r31)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// ld r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 104);
	// stfs f27,176(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// fneg f22,f21
	f22.u64 = f21.u64 ^ 0x8000000000000000;
	// stfs f23,180(r31)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// ld r9,176(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 176);
	// stfs f27,184(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stfs f22,188(r31)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// ld r8,184(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 184);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stfs f26,96(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stfs f22,100(r31)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// ld r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// lfs f29,216(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 216);
	f29.f64 = double(temp.f32);
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// std r8,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r8.u64);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// std r7,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r7.u64);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f30,112(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f31,116(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f31,128(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// lfs f25,-25364(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	f25.f64 = double(temp.f32);
	// stfs f25,132(r31)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f31,136(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f31,144(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f31,148(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f25,152(r31)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f31,160(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f31,164(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f29,168(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// bl 0x8226ca08
	sub_8226CA08(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226cedc
	if (cr0.eq) goto loc_8226CEDC;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x8226cec0
	goto loc_8226CEC0;
loc_8226CEBC:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_8226CEC0:
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
	// bne 0x8226cebc
	if (!cr0.eq) goto loc_8226CEBC;
	// b 0x8226cdbc
	goto loc_8226CDBC;
loc_8226CEDC:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8226cef0
	if (cr6.eq) goto loc_8226CEF0;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_8226CEF0:
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821ccaf8
	sub_821CCAF8(ctx, base);
	// stfs f21,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f28,100(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// ld r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stfs f24,96(r31)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f28,100(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// ld r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// stfs f24,96(r31)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stfs f29,100(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// ld r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// stfs f21,96(r31)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stfs f29,100(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// ld r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// std r8,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r8.u64);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// std r7,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r7.u64);
	// stfs f31,112(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f30,116(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f31,128(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f31,132(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f30,136(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f30,144(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f31,148(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f31,152(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f26,160(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f31,164(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f31,168(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// bl 0x8226ca08
	sub_8226CA08(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226cfc4
	if (cr0.eq) goto loc_8226CFC4;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x8226cfa8
	goto loc_8226CFA8;
loc_8226CFA4:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_8226CFA8:
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
	// bne 0x8226cfa4
	if (!cr0.eq) goto loc_8226CFA4;
	// b 0x8226cdbc
	goto loc_8226CDBC;
loc_8226CFC4:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8226cfd8
	if (cr6.eq) goto loc_8226CFD8;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_8226CFD8:
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821ccaf8
	sub_821CCAF8(ctx, base);
	// stfs f23,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f28,100(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// ld r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stfs f22,96(r31)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f28,100(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// ld r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// stfs f22,96(r31)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stfs f29,100(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// ld r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// stfs f23,96(r31)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stfs f29,100(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// ld r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// std r8,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r8.u64);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// std r7,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r7.u64);
	// stfs f31,112(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f25,116(r31)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f31,128(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f31,132(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f30,136(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f25,144(r31)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f31,148(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f31,152(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f27,160(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f31,164(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f31,168(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// bl 0x8226ca08
	sub_8226CA08(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226d0ac
	if (cr0.eq) goto loc_8226D0AC;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x8226d090
	goto loc_8226D090;
loc_8226D08C:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_8226D090:
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
	// bne 0x8226d08c
	if (!cr0.eq) goto loc_8226D08C;
	// b 0x8226cdbc
	goto loc_8226CDBC;
loc_8226D0AC:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8226d0c0
	if (cr6.eq) goto loc_8226D0C0;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_8226D0C0:
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821ccaf8
	sub_821CCAF8(ctx, base);
	// stfs f26,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f28,100(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// ld r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stfs f27,96(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f28,100(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// ld r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// stfs f27,96(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stfs f29,100(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// ld r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// stfs f26,96(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stfs f29,100(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// ld r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// std r8,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r8.u64);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// std r7,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r7.u64);
	// stfs f30,112(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f31,116(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f31,128(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f31,132(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f30,136(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f31,144(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f25,148(r31)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f31,152(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f31,160(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f24,164(r31)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f31,168(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// bl 0x8226ca08
	sub_8226CA08(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226d194
	if (cr0.eq) goto loc_8226D194;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x8226d178
	goto loc_8226D178;
loc_8226D174:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_8226D178:
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
	// bne 0x8226d174
	if (!cr0.eq) goto loc_8226D174;
	// b 0x8226cdbc
	goto loc_8226CDBC;
loc_8226D194:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8226d1a8
	if (cr6.eq) goto loc_8226D1A8;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_8226D1A8:
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821ccaf8
	sub_821CCAF8(ctx, base);
	// fneg f0,f27
	ctx.fpscr.disableFlushMode();
	f0.u64 = f27.u64 ^ 0x8000000000000000;
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stfs f28,100(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// ld r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// fneg f13,f26
	ctx.f13.u64 = f26.u64 ^ 0x8000000000000000;
	// stfs f13,184(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// stfs f28,188(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// ld r9,184(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 184);
	// stfs f13,176(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stfs f29,180(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// ld r8,176(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 176);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stfs f0,104(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stfs f29,108(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// ld r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 104);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// std r8,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r8.u64);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// std r7,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r7.u64);
	// stfs f25,112(r31)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f31,116(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f31,128(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f31,132(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f30,136(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f31,144(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f30,148(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f31,152(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f31,160(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f21,164(r31)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f31,168(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// bl 0x8226ca08
	sub_8226CA08(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226d284
	if (cr0.eq) goto loc_8226D284;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x8226d268
	goto loc_8226D268;
loc_8226D264:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_8226D268:
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
	// bne 0x8226d264
	if (!cr0.eq) goto loc_8226D264;
	// b 0x8226cdbc
	goto loc_8226CDBC;
loc_8226D284:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x8226d294
	goto loc_8226D294;
loc_8226D290:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_8226D294:
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
	// bne 0x8226d290
	if (!cr0.eq) goto loc_8226D290;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8226d2c8
	if (cr6.eq) goto loc_8226D2C8;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8226D2C8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8226D2CC:
	// addi r1,r31,336
	ctx.r1.s64 = r31.s64 + 336;
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8239d618
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

__attribute__((alias("__imp__sub_8226CC78"))) PPC_WEAK_FUNC(sub_8226CC78);
PPC_FUNC_IMPL(__imp__sub_8226CC78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
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
	// bl 0x8239d5cc
	// addi r31,r1,-336
	r31.s64 = ctx.r1.s64 + -336;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lfs f1,18860(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18860);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// beq cr6,0x8226d2c8
	if (cr6.eq) goto loc_8226D2C8;
	// addi r5,r31,192
	ctx.r5.s64 = r31.s64 + 192;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8226ace8
	sub_8226ACE8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821ccaf8
	sub_821CCAF8(ctx, base);
	// lfs f26,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 192);
	f26.f64 = double(temp.f32);
	// lfs f21,196(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 196);
	f21.f64 = double(temp.f32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stfs f26,104(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stfs f21,108(r31)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// ld r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 104);
	// lfs f27,208(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 208);
	f27.f64 = double(temp.f32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// stfs f27,104(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// stfs f21,108(r31)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// ld r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 104);
	// lfs f24,212(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 212);
	f24.f64 = double(temp.f32);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stfs f27,104(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stfs f24,108(r31)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// ld r8,104(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 104);
	// stfs f26,104(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// stfs f24,108(r31)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// ld r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 104);
	// lfs f28,200(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 200);
	f28.f64 = double(temp.f32);
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// std r8,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r8.u64);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// std r7,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r7.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,116(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f31,128(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f31,136(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// lfs f30,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f30.f64 = double(temp.f32);
	// stfs f30,112(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f30,132(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f31,144(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f31,148(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f30,152(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f31,160(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f31,164(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f28,168(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// bl 0x8226ca08
	sub_8226CA08(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226cde0
	if (cr0.eq) goto loc_8226CDE0;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x8226cda4
	goto loc_8226CDA4;
loc_8226CDA0:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_8226CDA4:
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
	// bne 0x8226cda0
	if (!cr0.eq) goto loc_8226CDA0;
loc_8226CDBC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8226cdd8
	if (cr6.eq) goto loc_8226CDD8;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8226CDD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226d2cc
	goto loc_8226D2CC;
loc_8226CDE0:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8226cdf4
	if (cr6.eq) goto loc_8226CDF4;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_8226CDF4:
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821ccaf8
	sub_821CCAF8(ctx, base);
	// fneg f23,f24
	ctx.fpscr.disableFlushMode();
	f23.u64 = f24.u64 ^ 0x8000000000000000;
	// stfs f26,104(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stfs f23,108(r31)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// ld r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 104);
	// stfs f27,176(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// fneg f22,f21
	f22.u64 = f21.u64 ^ 0x8000000000000000;
	// stfs f23,180(r31)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// ld r9,176(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 176);
	// stfs f27,184(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stfs f22,188(r31)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// ld r8,184(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 184);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stfs f26,96(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stfs f22,100(r31)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// ld r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// lfs f29,216(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 216);
	f29.f64 = double(temp.f32);
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// std r8,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r8.u64);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// std r7,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r7.u64);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f30,112(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f31,116(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f31,128(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// lfs f25,-25364(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	f25.f64 = double(temp.f32);
	// stfs f25,132(r31)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f31,136(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f31,144(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f31,148(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f25,152(r31)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f31,160(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f31,164(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f29,168(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// bl 0x8226ca08
	sub_8226CA08(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226cedc
	if (cr0.eq) goto loc_8226CEDC;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x8226cec0
	goto loc_8226CEC0;
loc_8226CEBC:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_8226CEC0:
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
	// bne 0x8226cebc
	if (!cr0.eq) goto loc_8226CEBC;
	// b 0x8226cdbc
	goto loc_8226CDBC;
loc_8226CEDC:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8226cef0
	if (cr6.eq) goto loc_8226CEF0;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_8226CEF0:
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821ccaf8
	sub_821CCAF8(ctx, base);
	// stfs f21,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f28,100(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// ld r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stfs f24,96(r31)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f28,100(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// ld r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// stfs f24,96(r31)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stfs f29,100(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// ld r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// stfs f21,96(r31)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stfs f29,100(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// ld r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// std r8,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r8.u64);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// std r7,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r7.u64);
	// stfs f31,112(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f30,116(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f31,128(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f31,132(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f30,136(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f30,144(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f31,148(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f31,152(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f26,160(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f31,164(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f31,168(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// bl 0x8226ca08
	sub_8226CA08(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226cfc4
	if (cr0.eq) goto loc_8226CFC4;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x8226cfa8
	goto loc_8226CFA8;
loc_8226CFA4:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_8226CFA8:
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
	// bne 0x8226cfa4
	if (!cr0.eq) goto loc_8226CFA4;
	// b 0x8226cdbc
	goto loc_8226CDBC;
loc_8226CFC4:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8226cfd8
	if (cr6.eq) goto loc_8226CFD8;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_8226CFD8:
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821ccaf8
	sub_821CCAF8(ctx, base);
	// stfs f23,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f28,100(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// ld r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stfs f22,96(r31)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f28,100(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// ld r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// stfs f22,96(r31)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stfs f29,100(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// ld r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// stfs f23,96(r31)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stfs f29,100(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// ld r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// std r8,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r8.u64);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// std r7,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r7.u64);
	// stfs f31,112(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f25,116(r31)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f31,128(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f31,132(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f30,136(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f25,144(r31)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f31,148(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f31,152(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f27,160(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f31,164(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f31,168(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// bl 0x8226ca08
	sub_8226CA08(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226d0ac
	if (cr0.eq) goto loc_8226D0AC;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x8226d090
	goto loc_8226D090;
loc_8226D08C:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_8226D090:
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
	// bne 0x8226d08c
	if (!cr0.eq) goto loc_8226D08C;
	// b 0x8226cdbc
	goto loc_8226CDBC;
loc_8226D0AC:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8226d0c0
	if (cr6.eq) goto loc_8226D0C0;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_8226D0C0:
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821ccaf8
	sub_821CCAF8(ctx, base);
	// stfs f26,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f28,100(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// ld r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stfs f27,96(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f28,100(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// ld r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// stfs f27,96(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stfs f29,100(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// ld r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// stfs f26,96(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stfs f29,100(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// ld r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// std r8,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r8.u64);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// std r7,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r7.u64);
	// stfs f30,112(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f31,116(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f31,128(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f31,132(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f30,136(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f31,144(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f25,148(r31)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f31,152(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f31,160(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f24,164(r31)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f31,168(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// bl 0x8226ca08
	sub_8226CA08(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226d194
	if (cr0.eq) goto loc_8226D194;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x8226d178
	goto loc_8226D178;
loc_8226D174:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_8226D178:
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
	// bne 0x8226d174
	if (!cr0.eq) goto loc_8226D174;
	// b 0x8226cdbc
	goto loc_8226CDBC;
loc_8226D194:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8226d1a8
	if (cr6.eq) goto loc_8226D1A8;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_8226D1A8:
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821ccaf8
	sub_821CCAF8(ctx, base);
	// fneg f0,f27
	ctx.fpscr.disableFlushMode();
	f0.u64 = f27.u64 ^ 0x8000000000000000;
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stfs f28,100(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// ld r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// fneg f13,f26
	ctx.f13.u64 = f26.u64 ^ 0x8000000000000000;
	// stfs f13,184(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// stfs f28,188(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// ld r9,184(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 184);
	// stfs f13,176(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stfs f29,180(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// ld r8,176(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 176);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stfs f0,104(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stfs f29,108(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// ld r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 104);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// std r8,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r8.u64);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// std r7,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r7.u64);
	// stfs f25,112(r31)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f31,116(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f31,128(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f31,132(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f30,136(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f31,144(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f30,148(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f31,152(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f31,160(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f21,164(r31)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f31,168(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// bl 0x8226ca08
	sub_8226CA08(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226d284
	if (cr0.eq) goto loc_8226D284;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x8226d268
	goto loc_8226D268;
loc_8226D264:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_8226D268:
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
	// bne 0x8226d264
	if (!cr0.eq) goto loc_8226D264;
	// b 0x8226cdbc
	goto loc_8226CDBC;
loc_8226D284:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x8226d294
	goto loc_8226D294;
loc_8226D290:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_8226D294:
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
	// bne 0x8226d290
	if (!cr0.eq) goto loc_8226D290;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8226d2c8
	if (cr6.eq) goto loc_8226D2C8;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8226D2C8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8226D2CC:
	// addi r1,r31,336
	ctx.r1.s64 = r31.s64 + 336;
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8239d618
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

__attribute__((alias("__imp__sub_8226D2EC"))) PPC_WEAK_FUNC(sub_8226D2EC);
PPC_FUNC_IMPL(__imp__sub_8226D2EC) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82267180
	sub_82267180(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226D314"))) PPC_WEAK_FUNC(sub_8226D314);
PPC_FUNC_IMPL(__imp__sub_8226D314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226D318"))) PPC_WEAK_FUNC(sub_8226D318);
PPC_FUNC_IMPL(__imp__sub_8226D318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// li r10,0
	ctx.r10.s64 = 0;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,-16(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226D338"))) PPC_WEAK_FUNC(sub_8226D338);
PPC_FUNC_IMPL(__imp__sub_8226D338) {
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
	// lwz r16,18384(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18384);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-672
	r31.s64 = ctx.r1.s64 + -672;
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x8226d4c4
	if (cr6.eq) goto loc_8226D4C4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x8226d4c4
	if (cr6.eq) goto loc_8226D4C4;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,80(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r11,-32217
	r11.s64 = -2111373312;
	// addi r7,r10,9128
	ctx.r7.s64 = ctx.r10.s64 + 9128;
	// addi r6,r11,-11496
	ctx.r6.s64 = r11.s64 + -11496;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8239cc38
	sub_8239CC38(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// b 0x8226d44c
	goto loc_8226D44C;
loc_8226D3BC:
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r6,r31,92
	ctx.r6.s64 = r31.s64 + 92;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bl 0x82370dc0
	sub_82370DC0(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x8226d42c
	if (!cr6.gt) goto loc_8226D42C;
	// addi r27,r31,96
	r27.s64 = r31.s64 + 96;
loc_8226D3EC:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// subf r11,r11,r27
	r11.s64 = r27.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8226d42c
	if (!cr0.eq) goto loc_8226D42C;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8226bfa8
	sub_8226BFA8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8226c0a0
	sub_8226C0A0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// blt cr6,0x8226d3ec
	if (cr6.lt) goto loc_8226D3EC;
loc_8226D42C:
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8226c0a0
	sub_8226C0A0(ctx, base);
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// bne cr6,0x8226d44c
	if (!cr6.eq) goto loc_8226D44C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8226D44C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r10,r11,r28
	ctx.r10.s64 = r28.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8226d3bc
	if (cr0.eq) goto loc_8226D3BC;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// ble cr6,0x8226d48c
	if (!cr6.gt) goto loc_8226D48C;
	// addi r29,r31,104
	r29.s64 = r31.s64 + 104;
	// addi r27,r30,-1
	r27.s64 = r30.s64 + -1;
loc_8226D470:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r29,-8
	ctx.r4.s64 = r29.s64 + -8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8226bfa8
	sub_8226BFA8(ctx, base);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x8226d470
	if (!cr0.eq) goto loc_8226D470;
loc_8226D48C:
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = r11.s64 + -8;
	// bl 0x8226c0a0
	sub_8226C0A0(ctx, base);
	// lis r11,-32228
	r11.s64 = -2112094208;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r6,r11,9128
	ctx.r6.s64 = r11.s64 + 9128;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8239cb10
	sub_8239CB10(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821c22f0
	sub_821C22F0(ctx, base);
loc_8226D4C4:
	// addi r1,r31,672
	ctx.r1.s64 = r31.s64 + 672;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8226D340"))) PPC_WEAK_FUNC(sub_8226D340);
PPC_FUNC_IMPL(__imp__sub_8226D340) {
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
	// addi r31,r1,-672
	r31.s64 = ctx.r1.s64 + -672;
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x8226d4c4
	if (cr6.eq) goto loc_8226D4C4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x8226d4c4
	if (cr6.eq) goto loc_8226D4C4;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,80(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r11,-32217
	r11.s64 = -2111373312;
	// addi r7,r10,9128
	ctx.r7.s64 = ctx.r10.s64 + 9128;
	// addi r6,r11,-11496
	ctx.r6.s64 = r11.s64 + -11496;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8239cc38
	sub_8239CC38(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// b 0x8226d44c
	goto loc_8226D44C;
loc_8226D3BC:
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r6,r31,92
	ctx.r6.s64 = r31.s64 + 92;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bl 0x82370dc0
	sub_82370DC0(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x8226d42c
	if (!cr6.gt) goto loc_8226D42C;
	// addi r27,r31,96
	r27.s64 = r31.s64 + 96;
loc_8226D3EC:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// subf r11,r11,r27
	r11.s64 = r27.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8226d42c
	if (!cr0.eq) goto loc_8226D42C;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8226bfa8
	sub_8226BFA8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8226c0a0
	sub_8226C0A0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// blt cr6,0x8226d3ec
	if (cr6.lt) goto loc_8226D3EC;
loc_8226D42C:
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8226c0a0
	sub_8226C0A0(ctx, base);
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// bne cr6,0x8226d44c
	if (!cr6.eq) goto loc_8226D44C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8226D44C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r10,r11,r28
	ctx.r10.s64 = r28.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8226d3bc
	if (cr0.eq) goto loc_8226D3BC;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// ble cr6,0x8226d48c
	if (!cr6.gt) goto loc_8226D48C;
	// addi r29,r31,104
	r29.s64 = r31.s64 + 104;
	// addi r27,r30,-1
	r27.s64 = r30.s64 + -1;
loc_8226D470:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r29,-8
	ctx.r4.s64 = r29.s64 + -8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8226bfa8
	sub_8226BFA8(ctx, base);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x8226d470
	if (!cr0.eq) goto loc_8226D470;
loc_8226D48C:
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = r11.s64 + -8;
	// bl 0x8226c0a0
	sub_8226C0A0(ctx, base);
	// lis r11,-32228
	r11.s64 = -2112094208;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r6,r11,9128
	ctx.r6.s64 = r11.s64 + 9128;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8239cb10
	sub_8239CB10(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821c22f0
	sub_821C22F0(ctx, base);
loc_8226D4C4:
	// addi r1,r31,672
	ctx.r1.s64 = r31.s64 + 672;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8226D4CC"))) PPC_WEAK_FUNC(sub_8226D4CC);
PPC_FUNC_IMPL(__imp__sub_8226D4CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-672
	r31.s64 = r12.s64 + -672;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821c23a8
	sub_821C23A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226D4F4"))) PPC_WEAK_FUNC(sub_8226D4F4);
PPC_FUNC_IMPL(__imp__sub_8226D4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226D4F8"))) PPC_WEAK_FUNC(sub_8226D4F8);
PPC_FUNC_IMPL(__imp__sub_8226D4F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f0{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,18480(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18480);
	// mflr r12
	// bl 0x8239bcc8
	// addi r12,r1,-136
	r12.s64 = ctx.r1.s64 + -136;
	// bl 0x8239d5e0
	// addi r31,r1,-432
	r31.s64 = ctx.r1.s64 + -432;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// subf r11,r11,r25
	r11.s64 = r25.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226d550
	if (cr0.eq) goto loc_8226D550;
	// li r11,0
	r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_8226D540:
	// addi r1,r31,432
	ctx.r1.s64 = r31.s64 + 432;
	// addi r12,r1,-136
	r12.s64 = ctx.r1.s64 + -136;
	// bl 0x8239d62c
	// b 0x8239bd18
	return;
loc_8226D550:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r16,r5,1
	r16.s64 = ctx.r5.s64 + 1;
	// addi r17,r11,18848
	r17.s64 = r11.s64 + 18848;
	// lwz r11,4(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 4);
	// cmpw cr6,r16,r11
	cr6.compare<int32_t>(r16.s32, r11.s32, xer);
	// ble cr6,0x8226d570
	if (!cr6.gt) goto loc_8226D570;
loc_8226D568:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226d540
	goto loc_8226D540;
loc_8226D570:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r5,r11,-18832
	ctx.r5.s64 = r11.s64 + -18832;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r19,0
	r19.s64 = 0;
	// beq 0x8226d5a0
	if (cr0.eq) goto loc_8226D5A0;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r19,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r19.u32);
	// stw r19,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r19.u32);
	// b 0x8226d5a4
	goto loc_8226D5A4;
loc_8226D5A0:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_8226D5A4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lbz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
	// bl 0x8226d340
	sub_8226D340(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r22,r19
	r22.u64 = r19.u64;
	// subf r9,r11,r25
	ctx.r9.s64 = r25.s64 - r11.s64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// b 0x8226d5d4
	goto loc_8226D5D4;
loc_8226D5C8:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// subf r9,r10,r25
	ctx.r9.s64 = r25.s64 - ctx.r10.s64;
loc_8226D5D4:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x8226d5c8
	if (!cr0.eq) goto loc_8226D5C8;
	// mr r23,r11
	r23.u64 = r11.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r20,r19
	r20.u64 = r19.u64;
	// lfs f27,-25364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	f27.f64 = double(temp.f32);
	// subf r11,r23,r25
	r11.s64 = r25.s64 - r23.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8226d568
	if (cr0.eq) goto loc_8226D568;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f26,18448(r10)
	f26.u64 = PPC_LOAD_U64(ctx.r10.u32 + 18448);
	// lfs f28,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f28.f64 = double(temp.f32);
loc_8226D620:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// cmpw cr6,r20,r11
	cr6.compare<int32_t>(r20.s32, r11.s32, xer);
	// bge cr6,0x8226d860
	if (!cr6.lt) goto loc_8226D860;
	// addi r11,r23,8
	r11.s64 = r23.s64 + 8;
	// addi r10,r11,80
	ctx.r10.s64 = r11.s64 + 80;
	// lwz r24,80(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// subf r10,r24,r10
	ctx.r10.s64 = ctx.r10.s64 - r24.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8226d840
	if (cr0.eq) goto loc_8226D840;
	// addi r21,r11,80
	r21.s64 = r11.s64 + 80;
loc_8226D654:
	// fmr f31,f28
	ctx.fpscr.disableFlushMode();
	f31.f64 = f28.f64;
	// mr r29,r19
	r29.u64 = r19.u64;
	// fmr f30,f28
	f30.f64 = f28.f64;
	// mr r28,r19
	r28.u64 = r19.u64;
	// mr r26,r19
	r26.u64 = r19.u64;
	// cmpwi cr6,r22,1
	cr6.compare<int32_t>(r22.s32, 1, xer);
	// beq cr6,0x8226d814
	if (cr6.eq) goto loc_8226D814;
	// lwz r30,0(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// subf r11,r30,r25
	r11.s64 = r25.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8226d738
	if (cr0.eq) goto loc_8226D738;
	// addi r27,r24,8
	r27.s64 = r24.s64 + 8;
loc_8226D690:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,81
	ctx.r5.s64 = r31.s64 + 81;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x8226beb8
	sub_8226BEB8(ctx, base);
	// lbz r11,81(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 81);
	// lbz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8226d6f4
	if (!cr0.eq) goto loc_8226D6F4;
	// clrlwi. r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8226d6f4
	if (!cr0.eq) goto loc_8226D6F4;
	// lfs f13,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,8(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,60(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,52(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + f0.f64));
	// lfs f13,0(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f11,f10,f0
	f0.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + f0.f64));
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x8226d738
	if (cr6.lt) goto loc_8226D738;
	// b 0x8226d71c
	goto loc_8226D71C;
loc_8226D6F4:
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 84);
	f0.f64 = double(temp.f32);
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8226d714
	if (cr0.eq) goto loc_8226D714;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// fadds f30,f0,f30
	f30.f64 = double(float(f0.f64 + f30.f64));
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// beq cr6,0x8226d71c
	if (cr6.eq) goto loc_8226D71C;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
loc_8226D714:
	// fadds f31,f0,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f0.f64 + f31.f64));
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8226D71C:
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r30,r25
	r11.s64 = r25.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8226d690
	if (!cr0.eq) goto loc_8226D690;
loc_8226D738:
	// subf r11,r30,r25
	r11.s64 = r25.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8226d758
	if (cr0.eq) goto loc_8226D758;
	// addi r20,r20,-1
	r20.s64 = r20.s64 + -1;
	// b 0x8226d7f4
	goto loc_8226D7F4;
loc_8226D758:
	// add r11,r26,r29
	r11.u64 = r26.u64 + r29.u64;
	// fmr f2,f26
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f26.f64;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,144(r31)
	PPC_STORE_U64(r31.u32 + 144, r11.u64);
	// lfd f0,144(r31)
	f0.u64 = PPC_LOAD_U64(r31.u32 + 144);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// add r11,r26,r28
	r11.u64 = r26.u64 + r28.u64;
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f1.f64));
	// fmr f2,f26
	ctx.f2.f64 = f26.f64;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,112(r31)
	PPC_STORE_U64(r31.u32 + 112, r11.u64);
	// lfd f0,112(r31)
	f0.u64 = PPC_LOAD_U64(r31.u32 + 112);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// fmuls f0,f29,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f29.f64 * f31.f64));
	// cmpw cr6,r29,r22
	cr6.compare<int32_t>(r29.s32, r22.s32, xer);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmadds f0,f13,f30,f0
	f0.f64 = double(float(ctx.f13.f64 * f30.f64 + f0.f64));
	// bge cr6,0x8226d7f4
	if (!cr6.lt) goto loc_8226D7F4;
	// cmpw cr6,r28,r22
	cr6.compare<int32_t>(r28.s32, r22.s32, xer);
	// bge cr6,0x8226d7f4
	if (!cr6.lt) goto loc_8226D7F4;
	// fcmpu cr6,f27,f28
	cr6.compare(f27.f64, f28.f64);
	// blt cr6,0x8226d7c8
	if (cr6.lt) goto loc_8226D7C8;
	// fcmpu cr6,f0,f27
	cr6.compare(f0.f64, f27.f64);
	// bge cr6,0x8226d7f4
	if (!cr6.lt) goto loc_8226D7F4;
loc_8226D7C8:
	// addi r11,r24,8
	r11.s64 = r24.s64 + 8;
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// fmr f27,f0
	ctx.fpscr.disableFlushMode();
	f27.f64 = f0.f64;
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
loc_8226D7F4:
	// lwz r24,0(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// subf r11,r24,r21
	r11.s64 = r21.s64 - r24.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8226d654
	if (!cr0.eq) goto loc_8226D654;
	// b 0x8226d840
	goto loc_8226D840;
loc_8226D814:
	// addi r11,r24,8
	r11.s64 = r24.s64 + 8;
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// fmr f27,f28
	ctx.fpscr.disableFlushMode();
	f27.f64 = f28.f64;
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
loc_8226D840:
	// lwz r23,0(r23)
	r23.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// subf r11,r23,r25
	r11.s64 = r25.s64 - r23.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8226d620
	if (!cr0.eq) goto loc_8226D620;
loc_8226D860:
	// fcmpu cr6,f27,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(f27.f64, f28.f64);
	// blt cr6,0x8226d568
	if (cr6.lt) goto loc_8226D568;
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// std r19,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r19.u64);
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
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// std r19,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r19.u64);
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
	// lwz r30,0(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// subf r11,r30,r25
	r11.s64 = r25.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8226da9c
	if (cr0.eq) goto loc_8226DA9C;
loc_8226D8C4:
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// lwz r4,0(r18)
	ctx.r4.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// addi r6,r31,81
	ctx.r6.s64 = r31.s64 + 81;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8226beb8
	sub_8226BEB8(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// lbz r10,81(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 81);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8226d920
	if (!cr0.eq) goto loc_8226D920;
	// clrlwi. r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8226d920
	if (!cr0.eq) goto loc_8226D920;
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// bl 0x821c0d90
	sub_821C0D90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// mr r30,r28
	r30.u64 = r28.u64;
	// b 0x8226da84
	goto loc_8226DA84;
loc_8226D920:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8226d944
	if (!cr0.eq) goto loc_8226D944;
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// addi r6,r31,104
	ctx.r6.s64 = r31.s64 + 104;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// b 0x8226d964
	goto loc_8226D964;
loc_8226D944:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8226d974
	if (!cr6.eq) goto loc_8226D974;
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// addi r6,r31,112
	ctx.r6.s64 = r31.s64 + 112;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
loc_8226D964:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82370dc0
	sub_82370DC0(ctx, base);
	// b 0x8226da84
	goto loc_8226DA84;
loc_8226D974:
	// addi r28,r30,20
	r28.s64 = r30.s64 + 20;
	// lwz r4,0(r18)
	ctx.r4.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8226af38
	sub_8226AF38(ctx, base);
	// addi r11,r31,152
	r11.s64 = r31.s64 + 152;
	// stw r19,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r19.u32);
	// stw r19,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r19.u32);
	// stw r19,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r19.u32);
	// std r19,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r19.u64);
	// ld r11,152(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 152);
	// std r11,240(r31)
	PPC_STORE_U64(r31.u32 + 240, r11.u64);
	// addi r11,r31,240
	r11.s64 = r31.s64 + 240;
	// stw r11,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r11.u32);
	// addi r11,r31,240
	r11.s64 = r31.s64 + 240;
	// stw r11,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r11.u32);
	// addi r3,r31,172
	ctx.r3.s64 = r31.s64 + 172;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r5,r31,160
	ctx.r5.s64 = r31.s64 + 160;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8226c740
	sub_8226C740(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// ble cr6,0x8226da10
	if (!cr6.gt) goto loc_8226DA10;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8226c138
	sub_8226C138(ctx, base);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// addi r6,r31,160
	ctx.r6.s64 = r31.s64 + 160;
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// bl 0x821c1cd0
	sub_821C1CD0(ctx, base);
loc_8226DA10:
	// lfs f0,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 140);
	f0.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lfs f13,136(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,140(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// stfs f13,136(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// bl 0x8226c740
	sub_8226C740(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// ble cr6,0x8226da7c
	if (!cr6.gt) goto loc_8226DA7C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8226c138
	sub_8226C138(ctx, base);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// addi r6,r31,112
	ctx.r6.s64 = r31.s64 + 112;
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// bl 0x82370dc0
	sub_82370DC0(ctx, base);
loc_8226DA7C:
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x821c0d90
	sub_821C0D90(ctx, base);
loc_8226DA84:
	// subf r11,r30,r25
	r11.s64 = r25.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8226d8c4
	if (!cr0.eq) goto loc_8226D8C4;
loc_8226DA9C:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x8226d500
	sub_8226D500(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8226dacc
	if (!cr0.eq) goto loc_8226DACC;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821c22f0
	sub_821C22F0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821c22f0
	sub_821C22F0(ctx, base);
	// b 0x8226d568
	goto loc_8226D568;
loc_8226DACC:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// bl 0x8226d500
	sub_8226D500(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8226db04
	if (!cr0.eq) goto loc_8226DB04;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821c22f0
	sub_821C22F0(ctx, base);
	// mr r30,r19
	r30.u64 = r19.u64;
loc_8226DAF4:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821c22f0
	sub_821C22F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8226d540
	goto loc_8226D540;
loc_8226DB04:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821c22f0
	sub_821C22F0(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// b 0x8226daf4
	goto loc_8226DAF4;
}

__attribute__((alias("__imp__sub_8226D500"))) PPC_WEAK_FUNC(sub_8226D500);
PPC_FUNC_IMPL(__imp__sub_8226D500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x8239bcc8
	// addi r12,r1,-136
	r12.s64 = ctx.r1.s64 + -136;
	// bl 0x8239d5e0
	// addi r31,r1,-432
	r31.s64 = ctx.r1.s64 + -432;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// subf r11,r11,r25
	r11.s64 = r25.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226d550
	if (cr0.eq) goto loc_8226D550;
	// li r11,0
	r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_8226D540:
	// addi r1,r31,432
	ctx.r1.s64 = r31.s64 + 432;
	// addi r12,r1,-136
	r12.s64 = ctx.r1.s64 + -136;
	// bl 0x8239d62c
	// b 0x8239bd18
	return;
loc_8226D550:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r16,r5,1
	r16.s64 = ctx.r5.s64 + 1;
	// addi r17,r11,18848
	r17.s64 = r11.s64 + 18848;
	// lwz r11,4(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 4);
	// cmpw cr6,r16,r11
	cr6.compare<int32_t>(r16.s32, r11.s32, xer);
	// ble cr6,0x8226d570
	if (!cr6.gt) goto loc_8226D570;
loc_8226D568:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226d540
	goto loc_8226D540;
loc_8226D570:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r5,r11,-18832
	ctx.r5.s64 = r11.s64 + -18832;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r19,0
	r19.s64 = 0;
	// beq 0x8226d5a0
	if (cr0.eq) goto loc_8226D5A0;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r19,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r19.u32);
	// stw r19,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r19.u32);
	// b 0x8226d5a4
	goto loc_8226D5A4;
loc_8226D5A0:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_8226D5A4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lbz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
	// bl 0x8226d340
	sub_8226D340(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r22,r19
	r22.u64 = r19.u64;
	// subf r9,r11,r25
	ctx.r9.s64 = r25.s64 - r11.s64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// b 0x8226d5d4
	goto loc_8226D5D4;
loc_8226D5C8:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// subf r9,r10,r25
	ctx.r9.s64 = r25.s64 - ctx.r10.s64;
loc_8226D5D4:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x8226d5c8
	if (!cr0.eq) goto loc_8226D5C8;
	// mr r23,r11
	r23.u64 = r11.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r20,r19
	r20.u64 = r19.u64;
	// lfs f27,-25364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	f27.f64 = double(temp.f32);
	// subf r11,r23,r25
	r11.s64 = r25.s64 - r23.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8226d568
	if (cr0.eq) goto loc_8226D568;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f26,18448(r10)
	f26.u64 = PPC_LOAD_U64(ctx.r10.u32 + 18448);
	// lfs f28,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f28.f64 = double(temp.f32);
loc_8226D620:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// cmpw cr6,r20,r11
	cr6.compare<int32_t>(r20.s32, r11.s32, xer);
	// bge cr6,0x8226d860
	if (!cr6.lt) goto loc_8226D860;
	// addi r11,r23,8
	r11.s64 = r23.s64 + 8;
	// addi r10,r11,80
	ctx.r10.s64 = r11.s64 + 80;
	// lwz r24,80(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// subf r10,r24,r10
	ctx.r10.s64 = ctx.r10.s64 - r24.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8226d840
	if (cr0.eq) goto loc_8226D840;
	// addi r21,r11,80
	r21.s64 = r11.s64 + 80;
loc_8226D654:
	// fmr f31,f28
	ctx.fpscr.disableFlushMode();
	f31.f64 = f28.f64;
	// mr r29,r19
	r29.u64 = r19.u64;
	// fmr f30,f28
	f30.f64 = f28.f64;
	// mr r28,r19
	r28.u64 = r19.u64;
	// mr r26,r19
	r26.u64 = r19.u64;
	// cmpwi cr6,r22,1
	cr6.compare<int32_t>(r22.s32, 1, xer);
	// beq cr6,0x8226d814
	if (cr6.eq) goto loc_8226D814;
	// lwz r30,0(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// subf r11,r30,r25
	r11.s64 = r25.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8226d738
	if (cr0.eq) goto loc_8226D738;
	// addi r27,r24,8
	r27.s64 = r24.s64 + 8;
loc_8226D690:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,81
	ctx.r5.s64 = r31.s64 + 81;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x8226beb8
	sub_8226BEB8(ctx, base);
	// lbz r11,81(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 81);
	// lbz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8226d6f4
	if (!cr0.eq) goto loc_8226D6F4;
	// clrlwi. r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8226d6f4
	if (!cr0.eq) goto loc_8226D6F4;
	// lfs f13,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,8(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,60(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,52(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + f0.f64));
	// lfs f13,0(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f11,f10,f0
	f0.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + f0.f64));
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x8226d738
	if (cr6.lt) goto loc_8226D738;
	// b 0x8226d71c
	goto loc_8226D71C;
loc_8226D6F4:
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 84);
	f0.f64 = double(temp.f32);
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8226d714
	if (cr0.eq) goto loc_8226D714;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// fadds f30,f0,f30
	f30.f64 = double(float(f0.f64 + f30.f64));
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// beq cr6,0x8226d71c
	if (cr6.eq) goto loc_8226D71C;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
loc_8226D714:
	// fadds f31,f0,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f0.f64 + f31.f64));
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8226D71C:
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r30,r25
	r11.s64 = r25.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8226d690
	if (!cr0.eq) goto loc_8226D690;
loc_8226D738:
	// subf r11,r30,r25
	r11.s64 = r25.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8226d758
	if (cr0.eq) goto loc_8226D758;
	// addi r20,r20,-1
	r20.s64 = r20.s64 + -1;
	// b 0x8226d7f4
	goto loc_8226D7F4;
loc_8226D758:
	// add r11,r26,r29
	r11.u64 = r26.u64 + r29.u64;
	// fmr f2,f26
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f26.f64;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,144(r31)
	PPC_STORE_U64(r31.u32 + 144, r11.u64);
	// lfd f0,144(r31)
	f0.u64 = PPC_LOAD_U64(r31.u32 + 144);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// add r11,r26,r28
	r11.u64 = r26.u64 + r28.u64;
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f1.f64));
	// fmr f2,f26
	ctx.f2.f64 = f26.f64;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,112(r31)
	PPC_STORE_U64(r31.u32 + 112, r11.u64);
	// lfd f0,112(r31)
	f0.u64 = PPC_LOAD_U64(r31.u32 + 112);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// fmuls f0,f29,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f29.f64 * f31.f64));
	// cmpw cr6,r29,r22
	cr6.compare<int32_t>(r29.s32, r22.s32, xer);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmadds f0,f13,f30,f0
	f0.f64 = double(float(ctx.f13.f64 * f30.f64 + f0.f64));
	// bge cr6,0x8226d7f4
	if (!cr6.lt) goto loc_8226D7F4;
	// cmpw cr6,r28,r22
	cr6.compare<int32_t>(r28.s32, r22.s32, xer);
	// bge cr6,0x8226d7f4
	if (!cr6.lt) goto loc_8226D7F4;
	// fcmpu cr6,f27,f28
	cr6.compare(f27.f64, f28.f64);
	// blt cr6,0x8226d7c8
	if (cr6.lt) goto loc_8226D7C8;
	// fcmpu cr6,f0,f27
	cr6.compare(f0.f64, f27.f64);
	// bge cr6,0x8226d7f4
	if (!cr6.lt) goto loc_8226D7F4;
loc_8226D7C8:
	// addi r11,r24,8
	r11.s64 = r24.s64 + 8;
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// fmr f27,f0
	ctx.fpscr.disableFlushMode();
	f27.f64 = f0.f64;
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
loc_8226D7F4:
	// lwz r24,0(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// subf r11,r24,r21
	r11.s64 = r21.s64 - r24.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8226d654
	if (!cr0.eq) goto loc_8226D654;
	// b 0x8226d840
	goto loc_8226D840;
loc_8226D814:
	// addi r11,r24,8
	r11.s64 = r24.s64 + 8;
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// fmr f27,f28
	ctx.fpscr.disableFlushMode();
	f27.f64 = f28.f64;
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
loc_8226D840:
	// lwz r23,0(r23)
	r23.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// subf r11,r23,r25
	r11.s64 = r25.s64 - r23.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8226d620
	if (!cr0.eq) goto loc_8226D620;
loc_8226D860:
	// fcmpu cr6,f27,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(f27.f64, f28.f64);
	// blt cr6,0x8226d568
	if (cr6.lt) goto loc_8226D568;
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// std r19,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r19.u64);
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
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// std r19,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r19.u64);
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
	// lwz r30,0(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// subf r11,r30,r25
	r11.s64 = r25.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8226da9c
	if (cr0.eq) goto loc_8226DA9C;
loc_8226D8C4:
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// lwz r4,0(r18)
	ctx.r4.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// addi r6,r31,81
	ctx.r6.s64 = r31.s64 + 81;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8226beb8
	sub_8226BEB8(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// lbz r10,81(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 81);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8226d920
	if (!cr0.eq) goto loc_8226D920;
	// clrlwi. r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8226d920
	if (!cr0.eq) goto loc_8226D920;
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// bl 0x821c0d90
	sub_821C0D90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// mr r30,r28
	r30.u64 = r28.u64;
	// b 0x8226da84
	goto loc_8226DA84;
loc_8226D920:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8226d944
	if (!cr0.eq) goto loc_8226D944;
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// addi r6,r31,104
	ctx.r6.s64 = r31.s64 + 104;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// b 0x8226d964
	goto loc_8226D964;
loc_8226D944:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8226d974
	if (!cr6.eq) goto loc_8226D974;
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// addi r6,r31,112
	ctx.r6.s64 = r31.s64 + 112;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
loc_8226D964:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82370dc0
	sub_82370DC0(ctx, base);
	// b 0x8226da84
	goto loc_8226DA84;
loc_8226D974:
	// addi r28,r30,20
	r28.s64 = r30.s64 + 20;
	// lwz r4,0(r18)
	ctx.r4.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8226af38
	sub_8226AF38(ctx, base);
	// addi r11,r31,152
	r11.s64 = r31.s64 + 152;
	// stw r19,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r19.u32);
	// stw r19,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r19.u32);
	// stw r19,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r19.u32);
	// std r19,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r19.u64);
	// ld r11,152(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 152);
	// std r11,240(r31)
	PPC_STORE_U64(r31.u32 + 240, r11.u64);
	// addi r11,r31,240
	r11.s64 = r31.s64 + 240;
	// stw r11,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r11.u32);
	// addi r11,r31,240
	r11.s64 = r31.s64 + 240;
	// stw r11,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r11.u32);
	// addi r3,r31,172
	ctx.r3.s64 = r31.s64 + 172;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r5,r31,160
	ctx.r5.s64 = r31.s64 + 160;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8226c740
	sub_8226C740(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// ble cr6,0x8226da10
	if (!cr6.gt) goto loc_8226DA10;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8226c138
	sub_8226C138(ctx, base);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// addi r6,r31,160
	ctx.r6.s64 = r31.s64 + 160;
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// bl 0x821c1cd0
	sub_821C1CD0(ctx, base);
loc_8226DA10:
	// lfs f0,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 140);
	f0.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lfs f13,136(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,140(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// stfs f13,136(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// bl 0x8226c740
	sub_8226C740(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// ble cr6,0x8226da7c
	if (!cr6.gt) goto loc_8226DA7C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8226c138
	sub_8226C138(ctx, base);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// addi r6,r31,112
	ctx.r6.s64 = r31.s64 + 112;
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// bl 0x82370dc0
	sub_82370DC0(ctx, base);
loc_8226DA7C:
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x821c0d90
	sub_821C0D90(ctx, base);
loc_8226DA84:
	// subf r11,r30,r25
	r11.s64 = r25.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8226d8c4
	if (!cr0.eq) goto loc_8226D8C4;
loc_8226DA9C:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x8226d500
	sub_8226D500(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8226dacc
	if (!cr0.eq) goto loc_8226DACC;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821c22f0
	sub_821C22F0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821c22f0
	sub_821C22F0(ctx, base);
	// b 0x8226d568
	goto loc_8226D568;
loc_8226DACC:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// bl 0x8226d500
	sub_8226D500(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8226db04
	if (!cr0.eq) goto loc_8226DB04;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821c22f0
	sub_821C22F0(ctx, base);
	// mr r30,r19
	r30.u64 = r19.u64;
loc_8226DAF4:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821c22f0
	sub_821C22F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8226d540
	goto loc_8226D540;
loc_8226DB04:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821c22f0
	sub_821C22F0(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// b 0x8226daf4
	goto loc_8226DAF4;
}

__attribute__((alias("__imp__sub_8226DB14"))) PPC_WEAK_FUNC(sub_8226DB14);
PPC_FUNC_IMPL(__imp__sub_8226DB14) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-432
	r31.s64 = r12.s64 + -432;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821c23a8
	sub_821C23A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226DB3C"))) PPC_WEAK_FUNC(sub_8226DB3C);
PPC_FUNC_IMPL(__imp__sub_8226DB3C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-432
	r31.s64 = r12.s64 + -432;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821c23a8
	sub_821C23A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226DB64"))) PPC_WEAK_FUNC(sub_8226DB64);
PPC_FUNC_IMPL(__imp__sub_8226DB64) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-432
	r31.s64 = r12.s64 + -432;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x821c0d90
	sub_821C0D90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226DB8C"))) PPC_WEAK_FUNC(sub_8226DB8C);
PPC_FUNC_IMPL(__imp__sub_8226DB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226DB90"))) PPC_WEAK_FUNC(sub_8226DB90);
PPC_FUNC_IMPL(__imp__sub_8226DB90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,16838
	r11.s64 = 1103495168;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// li r10,256
	ctx.r10.s64 = 256;
	// ori r11,r11,20077
	r11.u64 = r11.u64 | 20077;
loc_8226DBA0:
	// mullw r8,r4,r11
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(r11.s32);
	// addi r8,r8,12345
	ctx.r8.s64 = ctx.r8.s64 + 12345;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// addi r4,r7,12345
	ctx.r4.s64 = ctx.r7.s64 + 12345;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r7,r4,0,1,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x7FFF0000;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8226dba0
	if (!cr0.eq) goto loc_8226DBA0;
	// li r11,0
	r11.s64 = 0;
	// li r10,103
	ctx.r10.s64 = 103;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226DBE0"))) PPC_WEAK_FUNC(sub_8226DBE0);
PPC_FUNC_IMPL(__imp__sub_8226DBE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r9,249
	cr6.compare<uint32_t>(ctx.r9.u32, 249, xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// blt cr6,0x8226dc34
	if (cr6.lt) goto loc_8226DC34;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_8226DC34:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,249
	cr6.compare<uint32_t>(ctx.r10.u32, 249, xer);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bltlr cr6
	if (cr6.lt) return;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226DC50"))) PPC_WEAK_FUNC(sub_8226DC50);
PPC_FUNC_IMPL(__imp__sub_8226DC50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,15624
	ctx.r3.s64 = r11.s64 + 15624;
	// b 0x8226db90
	sub_8226DB90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226DC60"))) PPC_WEAK_FUNC(sub_8226DC60);
PPC_FUNC_IMPL(__imp__sub_8226DC60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r3,r11,15624
	ctx.r3.s64 = r11.s64 + 15624;
	// b 0x8226dbe0
	sub_8226DBE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226DC6C"))) PPC_WEAK_FUNC(sub_8226DC6C);
PPC_FUNC_IMPL(__imp__sub_8226DC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226DC70"))) PPC_WEAK_FUNC(sub_8226DC70);
PPC_FUNC_IMPL(__imp__sub_8226DC70) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stb r30,1036(r31)
	PPC_STORE_U8(r31.u32 + 1036, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226db90
	sub_8226DB90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8226DCB8"))) PPC_WEAK_FUNC(sub_8226DCB8);
PPC_FUNC_IMPL(__imp__sub_8226DCB8) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r11,15624
	ctx.r3.s64 = r11.s64 + 15624;
	// bl 0x8226dbe0
	sub_8226DBE0(ctx, base);
	// subf r10,r7,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r7.s64;
	// rotlwi r11,r3,1
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r9,r3,r10
	ctx.r9.s32 = ctx.r3.s32 / ctx.r10.s32;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// twllei r10,0
	// andc r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ~r11.u64;
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// twlgei r10,-1
	// add r3,r11,r7
	ctx.r3.u64 = r11.u64 + ctx.r7.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226DD0C"))) PPC_WEAK_FUNC(sub_8226DD0C);
PPC_FUNC_IMPL(__imp__sub_8226DD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226DD10"))) PPC_WEAK_FUNC(sub_8226DD10);
PPC_FUNC_IMPL(__imp__sub_8226DD10) {
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r3,r11,15624
	ctx.r3.s64 = r11.s64 + 15624;
	// bl 0x8226dbe0
	sub_8226DBE0(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,18624(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18624);
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

__attribute__((alias("__imp__sub_8226DD58"))) PPC_WEAK_FUNC(sub_8226DD58);
PPC_FUNC_IMPL(__imp__sub_8226DD58) {
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
	// bl 0x8226dbe0
	sub_8226DBE0(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// fsubs f13,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(f0.f64));
	// lfs f0,18624(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18624);
	f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmadds f1,f0,f13,f1
	ctx.f1.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226DDA0"))) PPC_WEAK_FUNC(sub_8226DDA0);
PPC_FUNC_IMPL(__imp__sub_8226DDA0) {
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r3,r11,15624
	ctx.r3.s64 = r11.s64 + 15624;
	// bl 0x8226dbe0
	sub_8226DBE0(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// fsubs f13,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(f0.f64));
	// lfs f0,18624(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18624);
	f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmadds f1,f0,f13,f1
	ctx.f1.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226DDF0"))) PPC_WEAK_FUNC(sub_8226DDF0);
PPC_FUNC_IMPL(__imp__sub_8226DDF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x8239bcf8
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18636
	ctx.r4.s64 = r11.s64 + 18636;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,17944
	ctx.r4.s64 = r11.s64 + 17944;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r11,18872
	r31.s64 = r11.s64 + 18872;
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82319700
	sub_82319700(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// ori r30,r9,65535
	r30.u64 = ctx.r9.u64 | 65535;
	// li r29,-1
	r29.s64 = -1;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,18632(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18632);
	f0.f64 = double(temp.f32);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,18720(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 18720, temp.u32);
	// ble cr6,0x8226de98
	if (!cr6.gt) goto loc_8226DE98;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8226DE98:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r28,r10,16664
	r28.s64 = ctx.r10.s64 + 16664;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// stw r3,2048(r28)
	PPC_STORE_U32(r28.u32 + 2048, ctx.r3.u32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8226dec0
	if (!cr6.gt) goto loc_8226DEC0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8226DEC0:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r3,2052(r28)
	PPC_STORE_U32(r28.u32 + 2052, ctx.r3.u32);
	// li r30,0
	r30.s64 = 0;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,-25408(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25408);
	f0.f64 = double(temp.f32);
	// fdivs f31,f0,f13
	f31.f64 = double(float(f0.f64 / ctx.f13.f64));
	// ble cr6,0x8226df5c
	if (!cr6.gt) goto loc_8226DF5C;
	// li r29,0
	r29.s64 = 0;
loc_8226DEFC:
	// extsw r11,r30
	r11.s64 = r30.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x8239ddc0
	sub_8239DDC0(ctx, base);
	// lwz r9,2048(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 2048);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lwz r3,2052(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 2052);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// add r11,r29,r9
	r11.u64 = r29.u64 + ctx.r9.u64;
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// beq cr6,0x8226df44
	if (cr6.eq) goto loc_8226DF44;
	// add r10,r29,r3
	ctx.r10.u64 = r29.u64 + ctx.r3.u64;
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,-4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
loc_8226DF44:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8226defc
	if (cr6.lt) goto loc_8226DEFC;
	// b 0x8226df60
	goto loc_8226DF60;
loc_8226DF5C:
	// lwz r9,2048(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 2048);
loc_8226DF60:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// li r30,-4
	r30.s64 = -4;
	// lfs f31,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,-4(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stfsx f0,r11,r9
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, temp.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r11,r3
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, temp.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f30,18628(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18628);
	f30.f64 = double(temp.f32);
loc_8226DFA4:
	// extsw r11,r29
	r11.s64 = r29.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(f0.f64 * f30.f64));
	// bl 0x8239ddc0
	sub_8239DDC0(ctx, base);
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// stfsx f0,r30,r11
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + r11.u32, temp.u32);
	// beq cr6,0x8226dfe4
	if (cr6.eq) goto loc_8226DFE4;
	// addi r11,r28,1024
	r11.s64 = r28.s64 + 1024;
	// lfsx f13,r30,r28
	temp.u32 = PPC_LOAD_U32(r30.u32 + r28.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfsx f0,r30,r11
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + r11.u32, temp.u32);
loc_8226DFE4:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r30,1020
	cr6.compare<int32_t>(r30.s32, 1020, xer);
	// blt cr6,0x8226dfa4
	if (cr6.lt) goto loc_8226DFA4;
	// stfs f31,2044(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r28.u32 + 2044, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8226E008"))) PPC_WEAK_FUNC(sub_8226E008);
PPC_FUNC_IMPL(__imp__sub_8226E008) {
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
	// addi r31,r11,18712
	r31.s64 = r11.s64 + 18712;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_8226E050"))) PPC_WEAK_FUNC(sub_8226E050);
PPC_FUNC_IMPL(__imp__sub_8226E050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f0,18632(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18632);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// lfs f13,-25408(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25408);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r11,-16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	ctx.f12.f64 = double(temp.f32);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fnmsubs f0,f0,f13,f1
	f0.f64 = double(float(-(f0.f64 * ctx.f13.f64 - ctx.f1.f64)));
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bge cr6,0x8226e0a4
	if (!cr6.lt) goto loc_8226E0A4;
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_8226E0A4:
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// lfs f13,18720(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18720);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// blt cr6,0x8226e18c
	if (cr6.lt) goto loc_8226E18C;
	// beq cr6,0x8226e150
	if (cr6.eq) goto loc_8226E150;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x8226e104
	if (cr6.lt) goto loc_8226E104;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lwa r11,18872(r11)
	r11.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 18872));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r11,-16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// b 0x8226e120
	goto loc_8226E120;
loc_8226E104:
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// fctiwz f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f13,0,r11
	PPC_STORE_U32(r11.u32, ctx.f13.u32);
	// lwz r11,-16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
loc_8226E120:
	// fcfid f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(ctx.f11.s64);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,18716
	ctx.r10.s64 = ctx.r10.s64 + 18716;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lfsx f13,r11,r9
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r11,r10
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	f0.f64 = double(float(f0.f64 - ctx.f11.f64));
	// fnmadds f1,f0,f13,f12
	ctx.f1.f64 = double(float(-(f0.f64 * ctx.f13.f64 + ctx.f12.f64)));
	// blr 
	return;
loc_8226E150:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lwa r11,18872(r11)
	r11.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 18872));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r11,-16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// b 0x8226e1a8
	goto loc_8226E1A8;
loc_8226E18C:
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// fctiwz f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f13,0,r11
	PPC_STORE_U32(r11.u32, ctx.f13.u32);
	// lwz r11,-16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
loc_8226E1A8:
	// fcfid f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(ctx.f11.s64);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,18716
	ctx.r10.s64 = ctx.r10.s64 + 18716;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lfsx f13,r11,r9
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r11,r10
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	f0.f64 = double(float(f0.f64 - ctx.f11.f64));
	// fmadds f1,f0,f13,f12
	ctx.f1.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226E1D8"))) PPC_WEAK_FUNC(sub_8226E1D8);
PPC_FUNC_IMPL(__imp__sub_8226E1D8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// lfs f13,18656(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18656);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,18652(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18652);
	f0.f64 = double(temp.f32);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,16664
	r11.s64 = r11.s64 + 16664;
	// bge cr6,0x8226e224
	if (!cr6.lt) goto loc_8226E224;
	// fnmsubs f0,f1,f0,f13
	f0.f64 = double(float(-(ctx.f1.f64 * f0.f64 - ctx.f13.f64)));
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r10,r10,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// lfsx f0,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_8226E224:
	// fmadds f0,f1,f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f0.f64 + ctx.f13.f64));
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r10,r10,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// lfsx f1,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226E244"))) PPC_WEAK_FUNC(sub_8226E244);
PPC_FUNC_IMPL(__imp__sub_8226E244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226E248"))) PPC_WEAK_FUNC(sub_8226E248);
PPC_FUNC_IMPL(__imp__sub_8226E248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f0,f1,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,11008(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11008);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fmuls f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfs f10,-27476(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27476);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f9,560(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f11,11004(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11004);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(f0.f64 * ctx.f11.f64));
	// fsubs f0,f13,f12
	f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fnmsubs f10,f1,f10,f11
	ctx.f10.f64 = double(float(-(ctx.f1.f64 * ctx.f10.f64 - ctx.f11.f64)));
	// fnmsubs f12,f1,f9,f11
	ctx.f12.f64 = double(float(-(ctx.f1.f64 * ctx.f9.f64 - ctx.f11.f64)));
	// lfs f11,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f7,f0
	ctx.f9.f64 = double(float(ctx.f7.f64 * f0.f64));
	// stfs f9,4(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fmuls f10,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 * f0.f64));
	// stfs f10,8(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// fmuls f0,f6,f0
	f0.f64 = double(float(ctx.f6.f64 * f0.f64));
	// stfs f0,0(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmr f7,f0
	ctx.f7.f64 = f0.f64;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	f0.f64 = double(float(f0.f64 * ctx.f11.f64));
	// fmuls f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fadds f0,f7,f0
	f0.f64 = double(float(ctx.f7.f64 + f0.f64));
	// stfs f0,0(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fadds f0,f9,f8
	f0.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// stfs f0,4(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fadds f0,f11,f10
	f0.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f0,8(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 + f0.f64));
	// stfs f0,0(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fadds f0,f9,f11
	f0.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f0,4(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fadds f0,f8,f13
	f0.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f0,8(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 + f0.f64));
	// stfs f0,0(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fadds f0,f10,f13
	f0.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f0,4(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fadds f0,f9,f12
	f0.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f0,8(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226E368"))) PPC_WEAK_FUNC(sub_8226E368);
PPC_FUNC_IMPL(__imp__sub_8226E368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// divw r9,r9,r10
	ctx.r9.s32 = ctx.r9.s32 / ctx.r10.s32;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x8226e3b8
	if (!cr6.eq) goto loc_8226E3B8;
	// lfs f13,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f0,8(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
loc_8226E3B8:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8226e434
	if (!cr6.eq) goto loc_8226E434;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f11,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - f0.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// lfs f0,31836(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 31836);
	f0.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f11,4(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f10,40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - f0.f64));
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f9,44(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 - f0.f64));
	// lfs f8,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// b 0x8226e4d4
	goto loc_8226E4D4;
loc_8226E434:
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// bne cr6,0x8226e508
	if (!cr6.eq) goto loc_8226E508;
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
	// mulli r8,r9,20
	ctx.r8.s64 = ctx.r9.s64 * 20;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// mulli r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 * 20;
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f12,-12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f10
	f0.f64 = double(float(f0.f64 - ctx.f10.f64));
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,-16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// lfs f0,31836(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 31836);
	f0.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f11,4(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r8,r10
	r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f10,-20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - f0.f64));
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f9,-16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 - f0.f64));
	// lfs f8,-12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f0.f64 = double(temp.f32);
loc_8226E4D4:
	// fsubs f8,f8,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f8.f64 - f0.f64));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,22976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 22976);
	f0.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fmuls f0,f8,f0
	f0.f64 = double(float(ctx.f8.f64 * f0.f64));
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fsubs f13,f11,f9
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fsubs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 - f0.f64));
	// stfs f0,8(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
loc_8226E508:
	// mulli r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 * 20;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lfs f0,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12);
	f0.f64 = double(temp.f32);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f0,-16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16);
	f0.f64 = double(temp.f32);
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// lfs f11,-20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fsubs f0,f0,f11
	f0.f64 = double(float(f0.f64 - ctx.f11.f64));
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmr f11,f0
	ctx.f11.f64 = f0.f64;
	// lfs f0,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f0,4(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226E560"))) PPC_WEAK_FUNC(sub_8226E560);
PPC_FUNC_IMPL(__imp__sub_8226E560) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// bl 0x821257b8
	sub_821257B8(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8226e828
	if (cr6.eq) goto loc_8226E828;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f31.f64 = double(temp.f32);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// lfs f30,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f30.f64 = double(temp.f32);
	// bne cr6,0x8226e5e0
	if (!cr6.eq) goto loc_8226E5E0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x8226e724
	goto loc_8226E724;
loc_8226E5E0:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226e710
	if (cr0.eq) goto loc_8226E710;
	// fmuls f7,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(f31.f64 * f31.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r28,-1
	ctx.r4.s64 = r28.s64 + -1;
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f0,11004(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11004);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmuls f6,f31,f7
	ctx.f6.f64 = double(float(f31.f64 * ctx.f7.f64));
	// lfs f4,560(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * f0.f64));
	// fmuls f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fsubs f0,f3,f5
	f0.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fadds f0,f0,f30
	f0.f64 = double(float(f0.f64 + f30.f64));
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// bl 0x8226e368
	sub_8226E368(ctx, base);
	// fnmsubs f13,f7,f4,f6
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(-(ctx.f7.f64 * ctx.f4.f64 - ctx.f6.f64)));
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f5,f3
	f0.f64 = double(float(ctx.f5.f64 - ctx.f3.f64));
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f12,f11,f1
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fadds f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fadds f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 + f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// bl 0x8226e368
	sub_8226E368(ctx, base);
	// fsubs f0,f6,f7
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f0,f8,f0
	f0.f64 = double(float(ctx.f8.f64 * f0.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fadds f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 + f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// b 0x8226e724
	goto loc_8226E724;
loc_8226E710:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82122100
	sub_82122100(ctx, base);
loc_8226E724:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8226e828
	if (cr6.eq) goto loc_8226E828;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x8226e75c
	if (cr6.gt) goto loc_8226E75C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f30,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r26.u32 + 4, temp.u32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 0, temp.u32);
	// b 0x8226e824
	goto loc_8226E824;
loc_8226E75C:
	// clrlwi. r9,r25,24
	ctx.r9.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq 0x8226e7ac
	if (cr0.eq) goto loc_8226E7AC;
	// bne cr6,0x8226e78c
	if (!cr6.eq) goto loc_8226E78C;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x8226e778
	if (!cr6.eq) goto loc_8226E778;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_8226E778:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8226e368
	sub_8226E368(ctx, base);
	// b 0x8226e828
	goto loc_8226E828;
loc_8226E78C:
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8226e248
	sub_8226E248(ctx, base);
	// b 0x8226e828
	goto loc_8226E828;
loc_8226E7AC:
	// bne cr6,0x8226e7f8
	if (!cr6.eq) goto loc_8226E7F8;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x8226e7c0
	if (!cr6.eq) goto loc_8226E7C0;
	// li r28,1
	r28.s64 = 1;
	// b 0x8226e7cc
	goto loc_8226E7CC;
loc_8226E7C0:
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x8226e7cc
	if (!cr6.eq) goto loc_8226E7CC;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_8226E7CC:
	// mulli r11,r28,20
	r11.s64 = r28.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12);
	f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,-20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// b 0x8226e818
	goto loc_8226E818;
loc_8226E7F8:
	// lfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
loc_8226E818:
	// fsubs f12,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f13,4(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r26.u32 + 4, temp.u32);
	// stfs f12,0(r26)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r26.u32 + 0, temp.u32);
loc_8226E824:
	// stfs f0,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 8, temp.u32);
loc_8226E828:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8226E838"))) PPC_WEAK_FUNC(sub_8226E838);
PPC_FUNC_IMPL(__imp__sub_8226E838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226E854"))) PPC_WEAK_FUNC(sub_8226E854);
PPC_FUNC_IMPL(__imp__sub_8226E854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226E858"))) PPC_WEAK_FUNC(sub_8226E858);
PPC_FUNC_IMPL(__imp__sub_8226E858) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// li r24,2
	r24.s64 = 2;
	// stw r30,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r30.u32);
	// li r22,1
	r22.s64 = 1;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r28,r7,8
	r28.s64 = ctx.r7.s64 + 8;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
loc_8226E898:
	// mulli r29,r31,24
	r29.s64 = r31.s64 * 24;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82270020
	sub_82270020(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// stbx r11,r31,r23
	PPC_STORE_U8(r31.u32 + r23.u32, r11.u8);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// bl 0x8226ff80
	sub_8226FF80(ctx, base);
	// mulli r10,r31,6
	ctx.r10.s64 = r31.s64 * 6;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x8226e918
	if (cr6.eq) goto loc_8226E918;
	// clrlwi r31,r10,2
	r31.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// lbzx r10,r31,r23
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + r23.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8226e91c
	if (cr0.eq) goto loc_8226E91C;
loc_8226E918:
	// li r22,0
	r22.s64 = 0;
loc_8226E91C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// clrlwi. r10,r22,24
	ctx.r10.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r30,r26
	r30.u64 = r26.u64;
	// bne 0x8226e898
	if (!cr0.eq) goto loc_8226E898;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_8226E938"))) PPC_WEAK_FUNC(sub_8226E938);
PPC_FUNC_IMPL(__imp__sub_8226E938) {
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
	// lwz r16,18672(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18672);
	// mflr r12
	// bl 0x8239bcdc
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8226e97c
	if (cr0.eq) goto loc_8226E97C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x8226fc80
	sub_8226FC80(ctx, base);
	// b 0x8226e980
	goto loc_8226E980;
loc_8226E97C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226E980:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,24(r23)
	PPC_STORE_U32(r23.u32 + 24, ctx.r3.u32);
	// bne cr6,0x8226e994
	if (!cr6.eq) goto loc_8226E994;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226ebc0
	goto loc_8226EBC0;
loc_8226E994:
	// addi r22,r23,20
	r22.s64 = r23.s64 + 20;
	// lbz r11,28(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,0(r22)
	PPC_STORE_U32(r22.u32 + 0, ctx.r10.u32);
	// beq 0x8226e9b4
	if (cr0.eq) goto loc_8226E9B4;
	// lwz r24,8(r26)
	r24.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// b 0x8226e9b8
	goto loc_8226E9B8;
loc_8226E9B4:
	// li r24,0
	r24.s64 = 0;
loc_8226E9B8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r25,0
	r25.s64 = 0;
	// bne cr6,0x8226e9c8
	if (!cr6.eq) goto loc_8226E9C8;
	// lwz r25,8(r26)
	r25.u64 = PPC_LOAD_U32(r26.u32 + 8);
loc_8226E9C8:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r21,0
	r21.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8226eb9c
	if (!cr6.gt) goto loc_8226EB9C;
	// li r27,0
	r27.s64 = 0;
loc_8226E9DC:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x8226ead8
	if (cr6.eq) goto loc_8226EAD8;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8226e9f4
	if (cr6.eq) goto loc_8226E9F4;
	// lwz r4,-4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + -4);
	// b 0x8226e9f8
	goto loc_8226E9F8;
loc_8226E9F4:
	// lhz r4,-2(r24)
	ctx.r4.u64 = PPC_LOAD_U16(r24.u32 + -2);
loc_8226E9F8:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8226ea08
	if (cr6.eq) goto loc_8226EA08;
	// lwz r30,0(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// b 0x8226ea0c
	goto loc_8226EA0C;
loc_8226EA08:
	// lhz r30,0(r24)
	r30.u64 = PPC_LOAD_U16(r24.u32 + 0);
loc_8226EA0C:
	// lbz r11,28(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8226ea30
	if (cr0.eq) goto loc_8226EA30;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r3,24(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// bl 0x8226fdc8
	sub_8226FDC8(ctx, base);
	// clrlwi r4,r30,16
	ctx.r4.u64 = r30.u32 & 0xFFFF;
	// bl 0x8226fdc8
	sub_8226FDC8(ctx, base);
	// b 0x8226ea40
	goto loc_8226EA40;
loc_8226EA30:
	// lwz r3,24(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// bl 0x8226fe38
	sub_8226FE38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8226fe38
	sub_8226FE38(ctx, base);
loc_8226EA40:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lbz r10,29(r23)
	ctx.r10.u64 = PPC_LOAD_U8(r23.u32 + 29);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
	// beq 0x8226ead8
	if (cr0.eq) goto loc_8226EAD8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226ead8
	if (cr0.eq) goto loc_8226EAD8;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8226ea70
	if (cr6.eq) goto loc_8226EA70;
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// b 0x8226ea74
	goto loc_8226EA74;
loc_8226EA70:
	// lhz r11,2(r24)
	r11.u64 = PPC_LOAD_U16(r24.u32 + 2);
loc_8226EA74:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x8226eab0
	if (cr6.eq) goto loc_8226EAB0;
	// lbz r11,28(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 28);
	// lwz r3,24(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8226ea98
	if (cr0.eq) goto loc_8226EA98;
	// clrlwi r4,r30,16
	ctx.r4.u64 = r30.u32 & 0xFFFF;
	// bl 0x8226fdc8
	sub_8226FDC8(ctx, base);
	// b 0x8226eaa0
	goto loc_8226EAA0;
loc_8226EA98:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8226fe38
	sub_8226FE38(ctx, base);
loc_8226EAA0:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
	// b 0x8226ead8
	goto loc_8226EAD8;
loc_8226EAB0:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r27,r11
	PPC_STORE_U32(r27.u32 + r11.u32, ctx.r10.u32);
	// beq cr6,0x8226eacc
	if (cr6.eq) goto loc_8226EACC;
	// addi r24,r24,2
	r24.s64 = r24.s64 + 2;
loc_8226EACC:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8226ead8
	if (cr6.eq) goto loc_8226EAD8;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
loc_8226EAD8:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8226eb44
	if (!cr6.gt) goto loc_8226EB44;
	// mr r29,r24
	r29.u64 = r24.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_8226EAF4:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8226eb04
	if (cr6.eq) goto loc_8226EB04;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8226eb08
	goto loc_8226EB08;
loc_8226EB04:
	// lhz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U16(r29.u32 + 0);
loc_8226EB08:
	// lbz r11,28(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 28);
	// lwz r3,24(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8226eb24
	if (cr0.eq) goto loc_8226EB24;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// bl 0x8226fdc8
	sub_8226FDC8(ctx, base);
	// b 0x8226eb28
	goto loc_8226EB28;
loc_8226EB24:
	// bl 0x8226fe38
	sub_8226FE38(ctx, base);
loc_8226EB28:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x8226eaf4
	if (cr6.lt) goto loc_8226EAF4;
loc_8226EB44:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8226eb5c
	if (cr6.eq) goto loc_8226EB5C;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r11,r24
	r24.u64 = r11.u64 + r24.u64;
loc_8226EB5C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8226eb74
	if (cr6.eq) goto loc_8226EB74;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r11,r25
	r25.u64 = r11.u64 + r25.u64;
loc_8226EB74:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// blt cr6,0x8226e9dc
	if (cr6.lt) goto loc_8226E9DC;
loc_8226EB9C:
	// li r11,1
	r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// lwz r3,24(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// bl 0x8226fcf8
	sub_8226FCF8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r22,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r22.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r26)
	PPC_STORE_U32(r26.u32 + 8, r11.u32);
loc_8226EBC0:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_8226E940"))) PPC_WEAK_FUNC(sub_8226E940);
PPC_FUNC_IMPL(__imp__sub_8226E940) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8226e97c
	if (cr0.eq) goto loc_8226E97C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x8226fc80
	sub_8226FC80(ctx, base);
	// b 0x8226e980
	goto loc_8226E980;
loc_8226E97C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226E980:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,24(r23)
	PPC_STORE_U32(r23.u32 + 24, ctx.r3.u32);
	// bne cr6,0x8226e994
	if (!cr6.eq) goto loc_8226E994;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226ebc0
	goto loc_8226EBC0;
loc_8226E994:
	// addi r22,r23,20
	r22.s64 = r23.s64 + 20;
	// lbz r11,28(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,0(r22)
	PPC_STORE_U32(r22.u32 + 0, ctx.r10.u32);
	// beq 0x8226e9b4
	if (cr0.eq) goto loc_8226E9B4;
	// lwz r24,8(r26)
	r24.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// b 0x8226e9b8
	goto loc_8226E9B8;
loc_8226E9B4:
	// li r24,0
	r24.s64 = 0;
loc_8226E9B8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r25,0
	r25.s64 = 0;
	// bne cr6,0x8226e9c8
	if (!cr6.eq) goto loc_8226E9C8;
	// lwz r25,8(r26)
	r25.u64 = PPC_LOAD_U32(r26.u32 + 8);
loc_8226E9C8:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r21,0
	r21.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8226eb9c
	if (!cr6.gt) goto loc_8226EB9C;
	// li r27,0
	r27.s64 = 0;
loc_8226E9DC:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x8226ead8
	if (cr6.eq) goto loc_8226EAD8;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8226e9f4
	if (cr6.eq) goto loc_8226E9F4;
	// lwz r4,-4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + -4);
	// b 0x8226e9f8
	goto loc_8226E9F8;
loc_8226E9F4:
	// lhz r4,-2(r24)
	ctx.r4.u64 = PPC_LOAD_U16(r24.u32 + -2);
loc_8226E9F8:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8226ea08
	if (cr6.eq) goto loc_8226EA08;
	// lwz r30,0(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// b 0x8226ea0c
	goto loc_8226EA0C;
loc_8226EA08:
	// lhz r30,0(r24)
	r30.u64 = PPC_LOAD_U16(r24.u32 + 0);
loc_8226EA0C:
	// lbz r11,28(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8226ea30
	if (cr0.eq) goto loc_8226EA30;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r3,24(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// bl 0x8226fdc8
	sub_8226FDC8(ctx, base);
	// clrlwi r4,r30,16
	ctx.r4.u64 = r30.u32 & 0xFFFF;
	// bl 0x8226fdc8
	sub_8226FDC8(ctx, base);
	// b 0x8226ea40
	goto loc_8226EA40;
loc_8226EA30:
	// lwz r3,24(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// bl 0x8226fe38
	sub_8226FE38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8226fe38
	sub_8226FE38(ctx, base);
loc_8226EA40:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lbz r10,29(r23)
	ctx.r10.u64 = PPC_LOAD_U8(r23.u32 + 29);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
	// beq 0x8226ead8
	if (cr0.eq) goto loc_8226EAD8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226ead8
	if (cr0.eq) goto loc_8226EAD8;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8226ea70
	if (cr6.eq) goto loc_8226EA70;
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// b 0x8226ea74
	goto loc_8226EA74;
loc_8226EA70:
	// lhz r11,2(r24)
	r11.u64 = PPC_LOAD_U16(r24.u32 + 2);
loc_8226EA74:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x8226eab0
	if (cr6.eq) goto loc_8226EAB0;
	// lbz r11,28(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 28);
	// lwz r3,24(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8226ea98
	if (cr0.eq) goto loc_8226EA98;
	// clrlwi r4,r30,16
	ctx.r4.u64 = r30.u32 & 0xFFFF;
	// bl 0x8226fdc8
	sub_8226FDC8(ctx, base);
	// b 0x8226eaa0
	goto loc_8226EAA0;
loc_8226EA98:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8226fe38
	sub_8226FE38(ctx, base);
loc_8226EAA0:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
	// b 0x8226ead8
	goto loc_8226EAD8;
loc_8226EAB0:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r27,r11
	PPC_STORE_U32(r27.u32 + r11.u32, ctx.r10.u32);
	// beq cr6,0x8226eacc
	if (cr6.eq) goto loc_8226EACC;
	// addi r24,r24,2
	r24.s64 = r24.s64 + 2;
loc_8226EACC:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8226ead8
	if (cr6.eq) goto loc_8226EAD8;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
loc_8226EAD8:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8226eb44
	if (!cr6.gt) goto loc_8226EB44;
	// mr r29,r24
	r29.u64 = r24.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_8226EAF4:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8226eb04
	if (cr6.eq) goto loc_8226EB04;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8226eb08
	goto loc_8226EB08;
loc_8226EB04:
	// lhz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U16(r29.u32 + 0);
loc_8226EB08:
	// lbz r11,28(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 28);
	// lwz r3,24(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8226eb24
	if (cr0.eq) goto loc_8226EB24;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// bl 0x8226fdc8
	sub_8226FDC8(ctx, base);
	// b 0x8226eb28
	goto loc_8226EB28;
loc_8226EB24:
	// bl 0x8226fe38
	sub_8226FE38(ctx, base);
loc_8226EB28:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x8226eaf4
	if (cr6.lt) goto loc_8226EAF4;
loc_8226EB44:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8226eb5c
	if (cr6.eq) goto loc_8226EB5C;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r11,r24
	r24.u64 = r11.u64 + r24.u64;
loc_8226EB5C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8226eb74
	if (cr6.eq) goto loc_8226EB74;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r11,r25
	r25.u64 = r11.u64 + r25.u64;
loc_8226EB74:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// blt cr6,0x8226e9dc
	if (cr6.lt) goto loc_8226E9DC;
loc_8226EB9C:
	// li r11,1
	r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// lwz r3,24(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// bl 0x8226fcf8
	sub_8226FCF8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r22,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r22.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r26)
	PPC_STORE_U32(r26.u32 + 8, r11.u32);
loc_8226EBC0:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_8226EBC8"))) PPC_WEAK_FUNC(sub_8226EBC8);
PPC_FUNC_IMPL(__imp__sub_8226EBC8) {
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

__attribute__((alias("__imp__sub_8226EBF0"))) PPC_WEAK_FUNC(sub_8226EBF0);
PPC_FUNC_IMPL(__imp__sub_8226EBF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8226ec1c
	if (cr0.eq) goto loc_8226EC1C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8226fea8
	sub_8226FEA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8226EC1C:
	// li r30,0
	r30.s64 = 0;
	// lwz r29,16(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// beq 0x8226ec40
	if (cr0.eq) goto loc_8226EC40;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8226fea8
	sub_8226FEA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8226EC40:
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8226ec60
	if (cr0.eq) goto loc_8226EC60;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8226fea8
	sub_8226FEA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8226EC60:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8226ec8c
	if (cr0.eq) goto loc_8226EC8C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8226ff30
	sub_8226FF30(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8226EC8C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8226EC9C"))) PPC_WEAK_FUNC(sub_8226EC9C);
PPC_FUNC_IMPL(__imp__sub_8226EC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226ECA0"))) PPC_WEAK_FUNC(sub_8226ECA0);
PPC_FUNC_IMPL(__imp__sub_8226ECA0) {
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
	// lwz r16,18744(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18744);
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
	// bl 0x8226ebf0
	sub_8226EBF0(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8226ece4
	if (cr0.eq) goto loc_8226ECE4;
	// bl 0x8226ff10
	sub_8226FF10(ctx, base);
	// b 0x8226ece8
	goto loc_8226ECE8;
loc_8226ECE4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8226ECE8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// bne cr6,0x8226ecfc
	if (!cr6.eq) goto loc_8226ECFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226ed80
	goto loc_8226ED80;
loc_8226ECFC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// bl 0x82270348
	sub_82270348(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8226ed4c
	if (!cr0.eq) goto loc_8226ED4C;
loc_8226ED24:
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8226ed40
	if (cr0.eq) goto loc_8226ED40;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8226ff30
	sub_8226FF30(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8226ED40:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// b 0x8226ed80
	goto loc_8226ED80;
loc_8226ED4C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x822704a0
	sub_822704A0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226ed24
	if (cr0.eq) goto loc_8226ED24;
	// lbz r11,12(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r11.u8);
	// lbz r11,13(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 13);
	// stb r11,29(r30)
	PPC_STORE_U8(r30.u32 + 29, r11.u8);
	// lbz r11,14(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 14);
	// stb r11,30(r30)
	PPC_STORE_U8(r30.u32 + 30, r11.u8);
	// lbz r11,15(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 15);
	// stb r11,31(r30)
	PPC_STORE_U8(r30.u32 + 31, r11.u8);
loc_8226ED80:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8226ECA8"))) PPC_WEAK_FUNC(sub_8226ECA8);
PPC_FUNC_IMPL(__imp__sub_8226ECA8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8226ebf0
	sub_8226EBF0(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8226ece4
	if (cr0.eq) goto loc_8226ECE4;
	// bl 0x8226ff10
	sub_8226FF10(ctx, base);
	// b 0x8226ece8
	goto loc_8226ECE8;
loc_8226ECE4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8226ECE8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// bne cr6,0x8226ecfc
	if (!cr6.eq) goto loc_8226ECFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226ed80
	goto loc_8226ED80;
loc_8226ECFC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// bl 0x82270348
	sub_82270348(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8226ed4c
	if (!cr0.eq) goto loc_8226ED4C;
loc_8226ED24:
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8226ed40
	if (cr0.eq) goto loc_8226ED40;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8226ff30
	sub_8226FF30(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8226ED40:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// b 0x8226ed80
	goto loc_8226ED80;
loc_8226ED4C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x822704a0
	sub_822704A0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226ed24
	if (cr0.eq) goto loc_8226ED24;
	// lbz r11,12(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r11.u8);
	// lbz r11,13(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 13);
	// stb r11,29(r30)
	PPC_STORE_U8(r30.u32 + 29, r11.u8);
	// lbz r11,14(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 14);
	// stb r11,30(r30)
	PPC_STORE_U8(r30.u32 + 30, r11.u8);
	// lbz r11,15(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 15);
	// stb r11,31(r30)
	PPC_STORE_U8(r30.u32 + 31, r11.u8);
loc_8226ED80:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8226ED88"))) PPC_WEAK_FUNC(sub_8226ED88);
PPC_FUNC_IMPL(__imp__sub_8226ED88) {
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

__attribute__((alias("__imp__sub_8226EDB0"))) PPC_WEAK_FUNC(sub_8226EDB0);
PPC_FUNC_IMPL(__imp__sub_8226EDB0) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// li r21,0
	r21.s64 = 0;
	// mulli r10,r24,24
	ctx.r10.s64 = r24.s64 * 24;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r31,r21
	r31.u64 = r21.u64;
	// li r22,-1
	r22.s64 = -1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lis r11,16383
	r11.s64 = 1073676288;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// ori r23,r11,65535
	r23.u64 = r11.u64 | 65535;
loc_8226EE0C:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8226ee28
	if (!cr6.gt) goto loc_8226EE28;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_8226EE28:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stwx r29,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, r29.u32);
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8226ee54
	if (!cr6.gt) goto loc_8226EE54;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_8226EE54:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// stwx r28,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, r28.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwzx r5,r31,r10
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + ctx.r10.u32);
	// bl 0x8226e858
	sub_8226E858(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r27,r1,128
	r27.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// stwx r30,r31,r27
	PPC_STORE_U32(r31.u32 + r27.u32, r30.u32);
	// stwx r30,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, r30.u32);
	// rlwinm. r10,r30,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8226ef54
	if (cr0.eq) goto loc_8226EF54;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r9,r3,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8226EF18:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// xor r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x8226ef18
	if (!cr0.eq) goto loc_8226EF18;
loc_8226EF54:
	// addi r11,r30,-2
	r11.s64 = r30.s64 + -2;
	// rlwinm. r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226efb8
	if (cr0.eq) goto loc_8226EFB8;
	// lwzx r11,r31,r27
	r11.u64 = PPC_LOAD_U32(r31.u32 + r27.u32);
	// addi r10,r30,-3
	ctx.r10.s64 = r30.s64 + -3;
	// addi r9,r11,-2
	ctx.r9.s64 = r11.s64 + -2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r28
	r11.u64 = r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
loc_8226EF7C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x8226ef7c
	if (!cr0.eq) goto loc_8226EF7C;
loc_8226EFB8:
	// addi r11,r30,-3
	r11.s64 = r30.s64 + -3;
	// addi r10,r30,-2
	ctx.r10.s64 = r30.s64 + -2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r29
	ctx.r7.u64 = r11.u64 + r29.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// add r8,r28,r11
	ctx.r8.u64 = r28.u64 + r11.u64;
	// lwzx r6,r10,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x8226e858
	sub_8226E858(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r30,-3
	ctx.r10.s64 = r30.s64 + -3;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stwx r11,r31,r27
	PPC_STORE_U32(r31.u32 + r27.u32, r11.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r31,12
	cr6.compare<uint32_t>(r31.u32, 12, xer);
	// blt cr6,0x8226ee0c
	if (cr6.lt) goto loc_8226EE0C;
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// ble cr6,0x8226f028
	if (!cr6.gt) goto loc_8226F028;
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
loc_8226F028:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// ble cr6,0x8226f03c
	if (!cr6.gt) goto loc_8226F03C;
	// mr r31,r11
	r31.u64 = r11.u64;
	// li r5,2
	ctx.r5.s64 = 2;
loc_8226F03C:
	// addic. r28,r31,-2
	xer.ca = r31.u32 > 1;
	r28.s64 = r31.s64 + -2;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8226f070
	if (cr0.eq) goto loc_8226F070;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r11,r28
	r11.u64 = r28.u64;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_8226F054:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stbx r7,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u8);
	// bne 0x8226f054
	if (!cr0.eq) goto loc_8226F054;
loc_8226F070:
	// lbz r11,29(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 29);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8226f170
	if (cr0.eq) goto loc_8226F170;
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// clrlwi. r11,r6,31
	r11.u64 = ctx.r6.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226f170
	if (cr0.eq) goto loc_8226F170;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(r31.u32, 3, xer);
	// beq cr6,0x8226f13c
	if (cr6.eq) goto loc_8226F13C;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// beq cr6,0x8226f13c
	if (cr6.eq) goto loc_8226F13C;
	// rlwinm. r9,r31,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8226f0f8
	if (cr0.eq) goto loc_8226F0F8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8226F0BC:
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// xor r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// xor r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// xor r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x8226f0bc
	if (!cr0.eq) goto loc_8226F0BC;
loc_8226F0F8:
	// subf r11,r6,r31
	r11.s64 = r31.s64 - ctx.r6.s64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8226f170
	if (cr0.eq) goto loc_8226F170;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8226f134
	if (cr6.eq) goto loc_8226F134;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
loc_8226F120:
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// bne 0x8226f120
	if (!cr0.eq) goto loc_8226F120;
loc_8226F134:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x8226f170
	goto loc_8226F170;
loc_8226F13C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_8226F170:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8226f1b8
	if (cr6.eq) goto loc_8226F1B8;
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r29,r31
	r29.u64 = r31.u64;
	// lwzx r30,r11,r10
	r30.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
loc_8226F188:
	// lbz r11,28(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 28);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,16(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8226f1a8
	if (cr0.eq) goto loc_8226F1A8;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// bl 0x8226fdc8
	sub_8226FDC8(ctx, base);
	// b 0x8226f1ac
	goto loc_8226F1AC;
loc_8226F1A8:
	// bl 0x8226fe38
	sub_8226FE38(ctx, base);
loc_8226F1AC:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8226f188
	if (!cr0.eq) goto loc_8226F188;
loc_8226F1B8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// bl 0x8226fe38
	sub_8226FE38(ctx, base);
	// mr r31,r21
	r31.u64 = r21.u64;
loc_8226F1C8:
	// addi r29,r1,144
	r29.s64 = ctx.r1.s64 + 144;
	// lwzx r3,r31,r29
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r29.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stwx r21,r31,r29
	PPC_STORE_U32(r31.u32 + r29.u32, r21.u32);
	// add r30,r31,r11
	r30.u64 = r31.u64 + r11.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// stw r21,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r21.u32);
	// cmplwi cr6,r31,12
	cr6.compare<uint32_t>(r31.u32, 12, xer);
	// blt cr6,0x8226f1c8
	if (cr6.lt) goto loc_8226F1C8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_8226F204"))) PPC_WEAK_FUNC(sub_8226F204);
PPC_FUNC_IMPL(__imp__sub_8226F204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226F208"))) PPC_WEAK_FUNC(sub_8226F208);
PPC_FUNC_IMPL(__imp__sub_8226F208) {
	PPC_FUNC_PROLOGUE();
	// b 0x8226ebf0
	sub_8226EBF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226F20C"))) PPC_WEAK_FUNC(sub_8226F20C);
PPC_FUNC_IMPL(__imp__sub_8226F20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226F210"))) PPC_WEAK_FUNC(sub_8226F210);
PPC_FUNC_IMPL(__imp__sub_8226F210) {
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
	// lwz r16,18832(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18832);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8226f244
	if (!cr6.eq) goto loc_8226F244;
loc_8226F23C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226f524
	goto loc_8226F524;
loc_8226F244:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// li r26,0
	r26.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8226f26c
	if (cr0.eq) goto loc_8226F26C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x8226fc80
	sub_8226FC80(ctx, base);
	// b 0x8226f270
	goto loc_8226F270;
loc_8226F26C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8226F270:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// bne cr6,0x8226f284
	if (!cr6.eq) goto loc_8226F284;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226f524
	goto loc_8226F524;
loc_8226F284:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8226f2a8
	if (cr0.eq) goto loc_8226F2A8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x8226fc80
	sub_8226FC80(ctx, base);
	// b 0x8226f2ac
	goto loc_8226F2AC;
loc_8226F2A8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8226F2AC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// bne cr6,0x8226f2c0
	if (!cr6.eq) goto loc_8226F2C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226f524
	goto loc_8226F524;
loc_8226F2C0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// beq 0x8226f23c
	if (cr0.eq) goto loc_8226F23C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8226f2f8
	if (!cr6.gt) goto loc_8226F2F8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8226F2F8:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x8226f23c
	if (cr0.eq) goto loc_8226F23C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lbz r11,30(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 30);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8226f410
	if (cr0.eq) goto loc_8226F410;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8226f3c8
	if (!cr6.gt) goto loc_8226F3C8;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_8226F358:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// beq cr6,0x8226f37c
	if (cr6.eq) goto loc_8226F37C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
loc_8226F37C:
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// beq cr6,0x8226f394
	if (cr6.eq) goto loc_8226F394;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
loc_8226F394:
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x8226f3ac
	if (cr6.eq) goto loc_8226F3AC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_8226F3AC:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// blt cr6,0x8226f358
	if (cr6.lt) goto loc_8226F358;
loc_8226F3C8:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822707a0
	sub_822707A0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x82270838
	sub_82270838(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82270738
	sub_82270738(ctx, base);
	// b 0x8226f448
	goto loc_8226F448;
loc_8226F410:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r11,r26
	r11.u64 = r26.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8226f448
	if (!cr6.gt) goto loc_8226F448;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_8226F428:
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8226f428
	if (cr6.lt) goto loc_8226F428;
loc_8226F448:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r28,r26
	r28.u64 = r26.u64;
	// stw r26,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r26.u32);
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8226f4cc
	if (cr6.eq) goto loc_8226F4CC;
loc_8226F464:
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8226f49c
	if (cr0.eq) goto loc_8226F49C;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
loc_8226F484:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x8226f484
	if (!cr0.eq) goto loc_8226F484;
loc_8226F49C:
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r11,r27
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// bl 0x8226edb0
	sub_8226EDB0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// add r28,r3,r28
	r28.u64 = ctx.r3.u64 + r28.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x8226f464
	if (!cr6.eq) goto loc_8226F464;
loc_8226F4CC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r26,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x8226fcf8
	sub_8226FCF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,4(r25)
	PPC_STORE_U32(r25.u32 + 4, ctx.r3.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x8226fcf8
	sub_8226FCF8(ctx, base);
	// stw r3,8(r25)
	PPC_STORE_U32(r25.u32 + 8, ctx.r3.u32);
	// lbz r11,31(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 31);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8226f520
	if (cr0.eq) goto loc_8226F520;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8226e940
	sub_8226E940(ctx, base);
loc_8226F520:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8226F524:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8226F218"))) PPC_WEAK_FUNC(sub_8226F218);
PPC_FUNC_IMPL(__imp__sub_8226F218) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8226f244
	if (!cr6.eq) goto loc_8226F244;
loc_8226F23C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226f524
	goto loc_8226F524;
loc_8226F244:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// li r26,0
	r26.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8226f26c
	if (cr0.eq) goto loc_8226F26C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x8226fc80
	sub_8226FC80(ctx, base);
	// b 0x8226f270
	goto loc_8226F270;
loc_8226F26C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8226F270:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// bne cr6,0x8226f284
	if (!cr6.eq) goto loc_8226F284;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226f524
	goto loc_8226F524;
loc_8226F284:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8226f2a8
	if (cr0.eq) goto loc_8226F2A8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x8226fc80
	sub_8226FC80(ctx, base);
	// b 0x8226f2ac
	goto loc_8226F2AC;
loc_8226F2A8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8226F2AC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// bne cr6,0x8226f2c0
	if (!cr6.eq) goto loc_8226F2C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226f524
	goto loc_8226F524;
loc_8226F2C0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// beq 0x8226f23c
	if (cr0.eq) goto loc_8226F23C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8226f2f8
	if (!cr6.gt) goto loc_8226F2F8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8226F2F8:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x8226f23c
	if (cr0.eq) goto loc_8226F23C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lbz r11,30(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 30);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8226f410
	if (cr0.eq) goto loc_8226F410;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8226f3c8
	if (!cr6.gt) goto loc_8226F3C8;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_8226F358:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// beq cr6,0x8226f37c
	if (cr6.eq) goto loc_8226F37C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
loc_8226F37C:
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// beq cr6,0x8226f394
	if (cr6.eq) goto loc_8226F394;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
loc_8226F394:
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x8226f3ac
	if (cr6.eq) goto loc_8226F3AC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_8226F3AC:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// blt cr6,0x8226f358
	if (cr6.lt) goto loc_8226F358;
loc_8226F3C8:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822707a0
	sub_822707A0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x82270838
	sub_82270838(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82270738
	sub_82270738(ctx, base);
	// b 0x8226f448
	goto loc_8226F448;
loc_8226F410:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r11,r26
	r11.u64 = r26.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8226f448
	if (!cr6.gt) goto loc_8226F448;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_8226F428:
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8226f428
	if (cr6.lt) goto loc_8226F428;
loc_8226F448:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r28,r26
	r28.u64 = r26.u64;
	// stw r26,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r26.u32);
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8226f4cc
	if (cr6.eq) goto loc_8226F4CC;
loc_8226F464:
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8226f49c
	if (cr0.eq) goto loc_8226F49C;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
loc_8226F484:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x8226f484
	if (!cr0.eq) goto loc_8226F484;
loc_8226F49C:
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r11,r27
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// bl 0x8226edb0
	sub_8226EDB0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// add r28,r3,r28
	r28.u64 = ctx.r3.u64 + r28.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x8226f464
	if (!cr6.eq) goto loc_8226F464;
loc_8226F4CC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r26,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x8226fcf8
	sub_8226FCF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,4(r25)
	PPC_STORE_U32(r25.u32 + 4, ctx.r3.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x8226fcf8
	sub_8226FCF8(ctx, base);
	// stw r3,8(r25)
	PPC_STORE_U32(r25.u32 + 8, ctx.r3.u32);
	// lbz r11,31(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 31);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8226f520
	if (cr0.eq) goto loc_8226F520;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8226e940
	sub_8226E940(ctx, base);
loc_8226F520:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8226F524:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8226F52C"))) PPC_WEAK_FUNC(sub_8226F52C);
PPC_FUNC_IMPL(__imp__sub_8226F52C) {
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

__attribute__((alias("__imp__sub_8226F554"))) PPC_WEAK_FUNC(sub_8226F554);
PPC_FUNC_IMPL(__imp__sub_8226F554) {
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

__attribute__((alias("__imp__sub_8226F57C"))) PPC_WEAK_FUNC(sub_8226F57C);
PPC_FUNC_IMPL(__imp__sub_8226F57C) {
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
	// bl 0x82270738
	sub_82270738(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226F5A4"))) PPC_WEAK_FUNC(sub_8226F5A4);
PPC_FUNC_IMPL(__imp__sub_8226F5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226F5A8"))) PPC_WEAK_FUNC(sub_8226F5A8);
PPC_FUNC_IMPL(__imp__sub_8226F5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,18932
	r11.s64 = r11.s64 + 18932;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226F5B8"))) PPC_WEAK_FUNC(sub_8226F5B8);
PPC_FUNC_IMPL(__imp__sub_8226F5B8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// fsubs f0,f4,f3
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f3,12(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f4,16(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f13,-31312(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31312);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x8226f5ec
	if (!cr6.lt) goto loc_8226F5EC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// b 0x8226f5f4
	goto loc_8226F5F4;
loc_8226F5EC:
	// fsubs f13,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
loc_8226F5F4:
	// stfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fnmsubs f0,f0,f3,f1
	f0.f64 = double(float(-(f0.f64 * ctx.f3.f64 - ctx.f1.f64)));
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226F604"))) PPC_WEAK_FUNC(sub_8226F604);
PPC_FUNC_IMPL(__imp__sub_8226F604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226F608"))) PPC_WEAK_FUNC(sub_8226F608);
PPC_FUNC_IMPL(__imp__sub_8226F608) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 - f30.f64));
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f30,12(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// stfs f31,16(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// stfs f29,8(r30)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f1,4(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f13,-31312(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31312);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x8226f6ac
	if (!cr6.lt) goto loc_8226F6AC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// b 0x8226f6b4
	goto loc_8226F6B4;
loc_8226F6AC:
	// fsubs f13,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f29.f64 - ctx.f1.f64));
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
loc_8226F6B4:
	// stfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// fnmsubs f0,f30,f0,f1
	f0.f64 = double(float(-(f30.f64 * f0.f64 - ctx.f1.f64)));
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_8226F6E4"))) PPC_WEAK_FUNC(sub_8226F6E4);
PPC_FUNC_IMPL(__imp__sub_8226F6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226F6E8"))) PPC_WEAK_FUNC(sub_8226F6E8);
PPC_FUNC_IMPL(__imp__sub_8226F6E8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fsubs f0,f4,f3
	f0.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f5
	f31.f64 = ctx.f5.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// lfs f13,-31312(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31312);
	ctx.f13.f64 = double(temp.f32);
	// stfs f3,12(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f4,16(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// fabs f12,f0
	ctx.f12.u64 = f0.u64 & ~0x8000000000000000;
	// fneg f1,f31
	ctx.f1.u64 = f31.u64 ^ 0x8000000000000000;
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x8226f750
	if (!cr6.lt) goto loc_8226F750;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// b 0x8226f758
	goto loc_8226F758;
loc_8226F750:
	// fsubs f13,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 - ctx.f1.f64));
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
loc_8226F758:
	// stfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// fnmsubs f0,f3,f0,f1
	f0.f64 = double(float(-(ctx.f3.f64 * f0.f64 - ctx.f1.f64)));
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stfs f3,12(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f4,16(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f30,4(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f29,8(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// bl 0x8239df68
	sub_8239DF68(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fsubs f0,f29,f30
	f0.f64 = double(float(f29.f64 - f30.f64));
	// stfs f31,56(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f12,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmadds f12,f0,f12,f30
	ctx.f12.f64 = double(float(f0.f64 * ctx.f12.f64 + f30.f64));
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f29,-40(r1)
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

__attribute__((alias("__imp__sub_8226F7C4"))) PPC_WEAK_FUNC(sub_8226F7C4);
PPC_FUNC_IMPL(__imp__sub_8226F7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226F7C8"))) PPC_WEAK_FUNC(sub_8226F7C8);
PPC_FUNC_IMPL(__imp__sub_8226F7C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x8239d5e8
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// ble cr6,0x8226f80c
	if (!cr6.gt) goto loc_8226F80C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// b 0x8226f814
	goto loc_8226F814;
loc_8226F80C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f28,29204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 29204);
	f28.f64 = double(temp.f32);
loc_8226F814:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f5,f28
	ctx.f5.f64 = f28.f64;
	// bl 0x8226f6e8
	sub_8226F6E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8239d634
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

__attribute__((alias("__imp__sub_8226F898"))) PPC_WEAK_FUNC(sub_8226F898);
PPC_FUNC_IMPL(__imp__sub_8226F898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x8239df68
	sub_8239DF68(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f13,f0,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f12.f64));
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

__attribute__((alias("__imp__sub_8226F8E8"))) PPC_WEAK_FUNC(sub_8226F8E8);
PPC_FUNC_IMPL(__imp__sub_8226F8E8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// fsubs f0,f4,f3
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stfs f3,12(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r11,r11,18932
	r11.s64 = r11.s64 + 18932;
	// stfs f4,16(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fabs f12,f0
	ctx.f12.u64 = f0.u64 & ~0x8000000000000000;
	// lfs f13,-31312(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31312);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x8226f928
	if (!cr6.lt) goto loc_8226F928;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// b 0x8226f930
	goto loc_8226F930;
loc_8226F928:
	// fsubs f13,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
loc_8226F930:
	// stfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fnmsubs f0,f0,f3,f1
	f0.f64 = double(float(-(f0.f64 * ctx.f3.f64 - ctx.f1.f64)));
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226F940"))) PPC_WEAK_FUNC(sub_8226F940);
PPC_FUNC_IMPL(__imp__sub_8226F940) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-22924
	r11.s64 = r11.s64 + -22924;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x8226f96c
	if (cr0.eq) goto loc_8226F96C;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8226F96C:
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

__attribute__((alias("__imp__sub_8226F984"))) PPC_WEAK_FUNC(sub_8226F984);
PPC_FUNC_IMPL(__imp__sub_8226F984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226F988"))) PPC_WEAK_FUNC(sub_8226F988);
PPC_FUNC_IMPL(__imp__sub_8226F988) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// fmr f8,f4
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f4.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f11,f1
	ctx.f11.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f10,f2
	ctx.f10.f64 = ctx.f2.f64;
	// addi r11,r11,18948
	r11.s64 = r11.s64 + 18948;
	// fmr f9,f3
	ctx.f9.f64 = ctx.f3.f64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// lfs f4,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x8226f8e8
	sub_8226F8E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f4,f8
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f8.f64;
	// fmr f3,f9
	ctx.f3.f64 = ctx.f9.f64;
	// fmr f2,f10
	ctx.f2.f64 = ctx.f10.f64;
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// bl 0x8226f6e8
	sub_8226F6E8(ctx, base);
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

__attribute__((alias("__imp__sub_8226FA04"))) PPC_WEAK_FUNC(sub_8226FA04);
PPC_FUNC_IMPL(__imp__sub_8226FA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226FA08"))) PPC_WEAK_FUNC(sub_8226FA08);
PPC_FUNC_IMPL(__imp__sub_8226FA08) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-22924
	r11.s64 = r11.s64 + -22924;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x8226fa38
	if (cr0.eq) goto loc_8226FA38;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8226FA38:
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

__attribute__((alias("__imp__sub_8226FA50"))) PPC_WEAK_FUNC(sub_8226FA50);
PPC_FUNC_IMPL(__imp__sub_8226FA50) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r29,0
	r29.s64 = 0;
	// beq 0x8226fa8c
	if (cr0.eq) goto loc_8226FA8C;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// b 0x8226fa90
	goto loc_8226FA90;
loc_8226FA8C:
	// mr r31,r29
	r31.u64 = r29.u64;
loc_8226FA90:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8226faa4
	if (cr6.eq) goto loc_8226FAA4;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8226faa8
	goto loc_8226FAA8;
loc_8226FAA4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8226FAA8:
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// beq cr6,0x8226fac8
	if (cr6.eq) goto loc_8226FAC8;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
loc_8226FAC8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8226FAD4"))) PPC_WEAK_FUNC(sub_8226FAD4);
PPC_FUNC_IMPL(__imp__sub_8226FAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226FAD8"))) PPC_WEAK_FUNC(sub_8226FAD8);
PPC_FUNC_IMPL(__imp__sub_8226FAD8) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x8226fb10
	if (!cr6.gt) goto loc_8226FB10;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x8226fa50
	sub_8226FA50(ctx, base);
loc_8226FB10:
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

__attribute__((alias("__imp__sub_8226FB28"))) PPC_WEAK_FUNC(sub_8226FB28);
PPC_FUNC_IMPL(__imp__sub_8226FB28) {
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
	// b 0x8226fb50
	goto loc_8226FB50;
loc_8226FB48:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8226fbb0
	sub_8226FBB0(ctx, base);
loc_8226FB50:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8226fb48
	if (!cr0.eq) goto loc_8226FB48;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8226fad8
	sub_8226FAD8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stb r30,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r30.u8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_8226FBAC"))) PPC_WEAK_FUNC(sub_8226FBAC);
PPC_FUNC_IMPL(__imp__sub_8226FBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226FBB0"))) PPC_WEAK_FUNC(sub_8226FBB0);
PPC_FUNC_IMPL(__imp__sub_8226FBB0) {
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
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lbz r11,25(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 25);
	// rotlwi r11,r11,1
	r11.u64 = __builtin_rotateleft32(r11.u32, 1);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// stb r11,25(r31)
	PPC_STORE_U8(r31.u32 + 25, r11.u8);
	// beq 0x8226fbec
	if (cr0.eq) goto loc_8226FBEC;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,0,31,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFFF01) | (r11.u64 & 0xFE);
	// stb r11,25(r31)
	PPC_STORE_U8(r31.u32 + 25, r11.u8);
loc_8226FBEC:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// stb r11,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r11.u8);
	// bne cr6,0x8226fc1c
	if (!cr6.eq) goto loc_8226FC1C;
	// li r30,0
	r30.s64 = 0;
	// lbz r4,25(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 25);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r30.u8);
	// bl 0x8226fb28
	sub_8226FB28(ctx, base);
	// stb r30,25(r31)
	PPC_STORE_U8(r31.u32 + 25, r30.u8);
loc_8226FC1C:
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

__attribute__((alias("__imp__sub_8226FC38"))) PPC_WEAK_FUNC(sub_8226FC38);
PPC_FUNC_IMPL(__imp__sub_8226FC38) {
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
	// b 0x8226fc58
	goto loc_8226FC58;
loc_8226FC50:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8226fbb0
	sub_8226FBB0(ctx, base);
loc_8226FC58:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8226fc50
	if (!cr0.eq) goto loc_8226FC50;
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

__attribute__((alias("__imp__sub_8226FC7C"))) PPC_WEAK_FUNC(sub_8226FC7C);
PPC_FUNC_IMPL(__imp__sub_8226FC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226FC80"))) PPC_WEAK_FUNC(sub_8226FC80);
PPC_FUNC_IMPL(__imp__sub_8226FC80) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// sth r11,20(r31)
	PPC_STORE_U16(r31.u32 + 20, r11.u16);
	// sth r11,22(r31)
	PPC_STORE_U16(r31.u32 + 22, r11.u16);
	// stb r11,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r11.u8);
	// stb r11,25(r31)
	PPC_STORE_U8(r31.u32 + 25, r11.u8);
	// bl 0x8226fa50
	sub_8226FA50(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// beq cr6,0x8226fce0
	if (cr6.eq) goto loc_8226FCE0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_8226FCE0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8226FCF8"))) PPC_WEAK_FUNC(sub_8226FCF8);
PPC_FUNC_IMPL(__imp__sub_8226FCF8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8226fc38
	sub_8226FC38(ctx, base);
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// li r26,0
	r26.s64 = 0;
	// bne cr6,0x8226fd70
	if (!cr6.eq) goto loc_8226FD70;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// stw r26,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r26.u32);
	// b 0x8226fd44
	goto loc_8226FD44;
loc_8226FD38:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_8226FD44:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8226fd38
	if (!cr0.eq) goto loc_8226FD38;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add. r3,r11,r9
	ctx.r3.u64 = r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8226fd64
	if (cr0.eq) goto loc_8226FD64;
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// b 0x8226fd68
	goto loc_8226FD68;
loc_8226FD64:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8226FD68:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
loc_8226FD70:
	// mr r27,r31
	r27.u64 = r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8226fdb8
	if (cr6.eq) goto loc_8226FDB8;
	// b 0x8226fd98
	goto loc_8226FD98;
loc_8226FD80:
	// addi r29,r28,8
	r29.s64 = r28.s64 + 8;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r31,r31,r11
	r31.u64 = r31.u64 + r11.u64;
loc_8226FD98:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8226fd80
	if (!cr6.eq) goto loc_8226FD80;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// sth r26,20(r30)
	PPC_STORE_U16(r30.u32 + 20, r26.u16);
loc_8226FDB8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8226FDC4"))) PPC_WEAK_FUNC(sub_8226FDC4);
PPC_FUNC_IMPL(__imp__sub_8226FDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226FDC8"))) PPC_WEAK_FUNC(sub_8226FDC8);
PPC_FUNC_IMPL(__imp__sub_8226FDC8) {
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
	// bl 0x8226fc38
	sub_8226FC38(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226fad8
	sub_8226FAD8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// sth r30,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r30.u16);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_8226FE38"))) PPC_WEAK_FUNC(sub_8226FE38);
PPC_FUNC_IMPL(__imp__sub_8226FE38) {
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
	// bl 0x8226fc38
	sub_8226FC38(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226fad8
	sub_8226FAD8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_8226FEA8"))) PPC_WEAK_FUNC(sub_8226FEA8);
PPC_FUNC_IMPL(__imp__sub_8226FEA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x8226ff04
	if (cr0.eq) goto loc_8226FF04;
loc_8226FEE0:
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8226fee0
	if (!cr6.eq) goto loc_8226FEE0;
loc_8226FF04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8226FF0C"))) PPC_WEAK_FUNC(sub_8226FF0C);
PPC_FUNC_IMPL(__imp__sub_8226FF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226FF10"))) PPC_WEAK_FUNC(sub_8226FF10);
PPC_FUNC_IMPL(__imp__sub_8226FF10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226FF2C"))) PPC_WEAK_FUNC(sub_8226FF2C);
PPC_FUNC_IMPL(__imp__sub_8226FF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226FF30"))) PPC_WEAK_FUNC(sub_8226FF30);
PPC_FUNC_IMPL(__imp__sub_8226FF30) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
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

__attribute__((alias("__imp__sub_8226FF7C"))) PPC_WEAK_FUNC(sub_8226FF7C);
PPC_FUNC_IMPL(__imp__sub_8226FF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226FF80"))) PPC_WEAK_FUNC(sub_8226FF80);
PPC_FUNC_IMPL(__imp__sub_8226FF80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,255
	ctx.r3.s64 = 255;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x8226ffa0
	if (!cr6.eq) goto loc_8226FFA0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// beq cr6,0x8226ffb4
	if (cr6.eq) goto loc_8226FFB4;
loc_8226FFA0:
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bne cr6,0x8226ffbc
	if (!cr6.eq) goto loc_8226FFBC;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bne cr6,0x8226ffbc
	if (!cr6.eq) goto loc_8226FFBC;
loc_8226FFB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8226FFBC:
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x8226ffd0
	if (!cr6.eq) goto loc_8226FFD0;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// beq cr6,0x8226ffe4
	if (cr6.eq) goto loc_8226FFE4;
loc_8226FFD0:
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bne cr6,0x8226ffec
	if (!cr6.eq) goto loc_8226FFEC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x8226ffec
	if (!cr6.eq) goto loc_8226FFEC;
loc_8226FFE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8226FFEC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x82270004
	if (!cr6.eq) goto loc_82270004;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// beq cr6,0x82270018
	if (cr6.eq) goto loc_82270018;
loc_82270004:
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82270018:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82270020"))) PPC_WEAK_FUNC(sub_82270020);
PPC_FUNC_IMPL(__imp__sub_82270020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bne cr6,0x82270040
	if (!cr6.eq) goto loc_82270040;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// beq cr6,0x82270054
	if (cr6.eq) goto loc_82270054;
loc_82270040:
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// bne cr6,0x8227005c
	if (!cr6.eq) goto loc_8227005C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x8227005c
	if (!cr6.eq) goto loc_8227005C;
loc_82270054:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// blr 
	return;
loc_8227005C:
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bne cr6,0x82270070
	if (!cr6.eq) goto loc_82270070;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// beq cr6,0x82270084
	if (cr6.eq) goto loc_82270084;
loc_82270070:
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// bne cr6,0x8227008c
	if (!cr6.eq) goto loc_8227008C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x8227008c
	if (!cr6.eq) goto loc_8227008C;
loc_82270084:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// blr 
	return;
loc_8227008C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x822700a4
	if (!cr6.eq) goto loc_822700A4;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// beq cr6,0x822700b8
	if (cr6.eq) goto loc_822700B8;
loc_822700A4:
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_822700B8:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822700C0"))) PPC_WEAK_FUNC(sub_822700C0);
PPC_FUNC_IMPL(__imp__sub_822700C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r7.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r3.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// bge cr6,0x8227017c
	if (!cr6.lt) goto loc_8227017C;
	// stwx r4,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r4.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// b 0x82270194
	goto loc_82270194;
loc_8227017C:
	// stwx r5,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r5.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
loc_82270194:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r4,r6
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, xer);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// bge cr6,0x822701e4
	if (!cr6.lt) goto loc_822701E4;
	// stwx r4,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r4.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// b 0x822701fc
	goto loc_822701FC;
loc_822701E4:
	// stwx r6,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_822701FC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// bge cr6,0x8227024c
	if (!cr6.lt) goto loc_8227024C;
	// stwx r5,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r5.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// b 0x82270264
	goto loc_82270264;
loc_8227024C:
	// stwx r6,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82270264:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82270298"))) PPC_WEAK_FUNC(sub_82270298);
PPC_FUNC_IMPL(__imp__sub_82270298) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mulli r9,r31,24
	ctx.r9.s64 = r31.s64 * 24;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + r11.u64;
	// mulli r10,r30,24
	ctx.r10.s64 = r30.s64 * 24;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x8226ff80
	sub_8226FF80(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,255
	cr6.compare<uint32_t>(ctx.r8.u32, 255, xer);
	// bne cr6,0x822702ec
	if (!cr6.eq) goto loc_822702EC;
loc_822702E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8227032c
	goto loc_8227032C;
loc_822702EC:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8226ff80
	sub_8226FF80(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beq cr6,0x822702e4
	if (cr6.eq) goto loc_822702E4;
	// rlwinm r10,r11,30,0,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0xC0000000;
	// addi r9,r8,3
	ctx.r9.s64 = ctx.r8.s64 + 3;
	// rlwinm r8,r8,30,0,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0xC0000000;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// or r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 | r30.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// or r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 | r31.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r10,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u32);
	// stwx r8,r11,r6
	PPC_STORE_U32(r11.u32 + ctx.r6.u32, ctx.r8.u32);
loc_8227032C:
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

__attribute__((alias("__imp__sub_82270344"))) PPC_WEAK_FUNC(sub_82270344);
PPC_FUNC_IMPL(__imp__sub_82270344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82270348"))) PPC_WEAK_FUNC(sub_82270348);
PPC_FUNC_IMPL(__imp__sub_82270348) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r10,2730
	ctx.r10.s64 = 178913280;
	// li r31,-1
	r31.s64 = -1;
	// ori r10,r10,43690
	ctx.r10.u64 = ctx.r10.u64 | 43690;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// mulli r3,r11,24
	ctx.r3.s64 = r11.s64 * 24;
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// ble cr6,0x82270380
	if (!cr6.gt) goto loc_82270380;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82270380:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r3.u32);
	// bne 0x82270398
	if (!cr0.eq) goto loc_82270398;
loc_82270390:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82270490
	goto loc_82270490;
loc_82270398:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// ori r10,r10,21845
	ctx.r10.u64 = ctx.r10.u64 | 21845;
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x822703b8
	if (!cr6.gt) goto loc_822703B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822703B8:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r3.u32);
	// beq 0x82270390
	if (cr0.eq) goto loc_82270390;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8227048c
	if (!cr6.gt) goto loc_8227048C;
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
loc_822703E0:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x822703f4
	if (cr0.eq) goto loc_822703F4;
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + ctx.r10.u32);
	// b 0x8227040c
	goto loc_8227040C;
loc_822703F4:
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82270408
	if (cr0.eq) goto loc_82270408;
	// lhzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U16(r30.u32 + r11.u32);
	// b 0x8227040c
	goto loc_8227040C;
loc_82270408:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8227040C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82270420
	if (cr6.eq) goto loc_82270420;
	// add r11,r31,r10
	r11.u64 = r31.u64 + ctx.r10.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8227043c
	goto loc_8227043C;
loc_82270420:
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82270438
	if (cr0.eq) goto loc_82270438;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lhz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// b 0x8227043c
	goto loc_8227043C;
loc_82270438:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8227043C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82270450
	if (cr6.eq) goto loc_82270450;
	// add r11,r31,r10
	r11.u64 = r31.u64 + ctx.r10.u64;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x8227046c
	goto loc_8227046C;
loc_82270450:
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82270468
	if (cr0.eq) goto loc_82270468;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lhz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// b 0x8227046c
	goto loc_8227046C;
loc_82270468:
	// li r6,2
	ctx.r6.s64 = 2;
loc_8227046C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822700c0
	sub_822700C0(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// addi r30,r30,6
	r30.s64 = r30.s64 + 6;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x822703e0
	if (cr6.lt) goto loc_822703E0;
loc_8227048C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82270490:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82270498"))) PPC_WEAK_FUNC(sub_82270498);
PPC_FUNC_IMPL(__imp__sub_82270498) {
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
	// lwz r16,19000(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19000);
	// mflr r12
	// bl 0x8239bcdc
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822707a0
	sub_822707A0(ctx, base);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r27,-1
	r27.s64 = -1;
	// ori r30,r10,65535
	r30.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// ble cr6,0x822704dc
	if (!cr6.gt) goto loc_822704DC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_822704DC:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// bne 0x822704fc
	if (!cr0.eq) goto loc_822704FC;
loc_822704E8:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82270738
	sub_82270738(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822704F4:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x8239bd2c
	return;
loc_822704FC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82270510
	if (!cr6.gt) goto loc_82270510;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82270510:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x82270520
	if (!cr0.eq) goto loc_82270520;
	// b 0x822704e8
	goto loc_822704E8;
loc_82270520:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82270534
	if (!cr6.gt) goto loc_82270534;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82270534:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// bne 0x82270554
	if (!cr0.eq) goto loc_82270554;
	// li r30,0
	r30.s64 = 0;
loc_82270544:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82270738
	sub_82270738(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x822704f4
	goto loc_822704F4;
loc_82270554:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x822705b8
	if (!cr6.gt) goto loc_822705B8;
	// li r11,0
	r11.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// subf r8,r28,r21
	ctx.r8.s64 = r21.s64 - r28.s64;
	// subf r7,r28,r24
	ctx.r7.s64 = r24.s64 - r28.s64;
loc_82270574:
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r6,r11,r6
	ctx.r6.u64 = r11.u64 + ctx.r6.u64;
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r6,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwzx r6,r11,r6
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + ctx.r6.u32);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r6,r11,r6
	ctx.r6.u64 = r11.u64 + ctx.r6.u64;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r6,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// blt cr6,0x82270574
	if (cr6.lt) goto loc_82270574;
loc_822705B8:
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82270838
	sub_82270838(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82270838
	sub_82270838(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82270838
	sub_82270838(ctx, base);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r28
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// lwzx r7,r11,r24
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// ble cr6,0x822706a4
	if (!cr6.gt) goto loc_822706A4;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
loc_8227061C:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r11,r28
	r27.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// lwzx r26,r11,r21
	r26.u64 = PPC_LOAD_U32(r11.u32 + r21.u32);
	// lwzx r25,r11,r24
	r25.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// cmplw cr6,r27,r6
	cr6.compare<uint32_t>(r27.u32, ctx.r6.u32, xer);
	// bne cr6,0x8227065c
	if (!cr6.eq) goto loc_8227065C;
	// cmplw cr6,r25,r7
	cr6.compare<uint32_t>(r25.u32, ctx.r7.u32, xer);
	// bne cr6,0x8227065c
	if (!cr6.eq) goto loc_8227065C;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// bge cr6,0x82270660
	if (!cr6.lt) goto loc_82270660;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r26,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r26.u32);
	// b 0x82270690
	goto loc_82270690;
loc_8227065C:
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
loc_82270660:
	// bne cr6,0x82270680
	if (!cr6.eq) goto loc_82270680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82270298
	sub_82270298(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822706f0
	if (cr0.eq) goto loc_822706F0;
loc_82270680:
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
loc_82270690:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// blt cr6,0x8227061c
	if (cr6.lt) goto loc_8227061C;
loc_822706A4:
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// bne cr6,0x822706c4
	if (!cr6.eq) goto loc_822706C4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82270298
	sub_82270298(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_822706C4:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// b 0x82270544
	goto loc_82270544;
loc_822706F0:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// b 0x82270544
	goto loc_82270544;
}

__attribute__((alias("__imp__sub_822704A0"))) PPC_WEAK_FUNC(sub_822704A0);
PPC_FUNC_IMPL(__imp__sub_822704A0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822707a0
	sub_822707A0(ctx, base);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r27,-1
	r27.s64 = -1;
	// ori r30,r10,65535
	r30.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// ble cr6,0x822704dc
	if (!cr6.gt) goto loc_822704DC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_822704DC:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// bne 0x822704fc
	if (!cr0.eq) goto loc_822704FC;
loc_822704E8:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82270738
	sub_82270738(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822704F4:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x8239bd2c
	return;
loc_822704FC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82270510
	if (!cr6.gt) goto loc_82270510;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82270510:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x82270520
	if (!cr0.eq) goto loc_82270520;
	// b 0x822704e8
	goto loc_822704E8;
loc_82270520:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82270534
	if (!cr6.gt) goto loc_82270534;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82270534:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// bne 0x82270554
	if (!cr0.eq) goto loc_82270554;
	// li r30,0
	r30.s64 = 0;
loc_82270544:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82270738
	sub_82270738(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x822704f4
	goto loc_822704F4;
loc_82270554:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x822705b8
	if (!cr6.gt) goto loc_822705B8;
	// li r11,0
	r11.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// subf r8,r28,r21
	ctx.r8.s64 = r21.s64 - r28.s64;
	// subf r7,r28,r24
	ctx.r7.s64 = r24.s64 - r28.s64;
loc_82270574:
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r6,r11,r6
	ctx.r6.u64 = r11.u64 + ctx.r6.u64;
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r6,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwzx r6,r11,r6
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + ctx.r6.u32);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r6,r11,r6
	ctx.r6.u64 = r11.u64 + ctx.r6.u64;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r6,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// blt cr6,0x82270574
	if (cr6.lt) goto loc_82270574;
loc_822705B8:
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82270838
	sub_82270838(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82270838
	sub_82270838(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82270838
	sub_82270838(ctx, base);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r28
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// lwzx r7,r11,r24
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// ble cr6,0x822706a4
	if (!cr6.gt) goto loc_822706A4;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
loc_8227061C:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r11,r28
	r27.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// lwzx r26,r11,r21
	r26.u64 = PPC_LOAD_U32(r11.u32 + r21.u32);
	// lwzx r25,r11,r24
	r25.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// cmplw cr6,r27,r6
	cr6.compare<uint32_t>(r27.u32, ctx.r6.u32, xer);
	// bne cr6,0x8227065c
	if (!cr6.eq) goto loc_8227065C;
	// cmplw cr6,r25,r7
	cr6.compare<uint32_t>(r25.u32, ctx.r7.u32, xer);
	// bne cr6,0x8227065c
	if (!cr6.eq) goto loc_8227065C;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// bge cr6,0x82270660
	if (!cr6.lt) goto loc_82270660;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r26,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r26.u32);
	// b 0x82270690
	goto loc_82270690;
loc_8227065C:
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
loc_82270660:
	// bne cr6,0x82270680
	if (!cr6.eq) goto loc_82270680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82270298
	sub_82270298(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822706f0
	if (cr0.eq) goto loc_822706F0;
loc_82270680:
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
loc_82270690:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// blt cr6,0x8227061c
	if (cr6.lt) goto loc_8227061C;
loc_822706A4:
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// bne cr6,0x822706c4
	if (!cr6.eq) goto loc_822706C4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82270298
	sub_82270298(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_822706C4:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// b 0x82270544
	goto loc_82270544;
loc_822706F0:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// b 0x82270544
	goto loc_82270544;
}

__attribute__((alias("__imp__sub_8227070C"))) PPC_WEAK_FUNC(sub_8227070C);
PPC_FUNC_IMPL(__imp__sub_8227070C) {
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
	// bl 0x82270738
	sub_82270738(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82270734"))) PPC_WEAK_FUNC(sub_82270734);
PPC_FUNC_IMPL(__imp__sub_82270734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82270738"))) PPC_WEAK_FUNC(sub_82270738);
PPC_FUNC_IMPL(__imp__sub_82270738) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
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

__attribute__((alias("__imp__sub_8227079C"))) PPC_WEAK_FUNC(sub_8227079C);
PPC_FUNC_IMPL(__imp__sub_8227079C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822707A0"))) PPC_WEAK_FUNC(sub_822707A0);
PPC_FUNC_IMPL(__imp__sub_822707A0) {
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
	// li r30,0
	r30.s64 = 0;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82270818
	if (!cr6.gt) goto loc_82270818;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_822707F8:
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x822707f8
	if (cr6.lt) goto loc_822707F8;
loc_82270818:
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

__attribute__((alias("__imp__sub_82270834"))) PPC_WEAK_FUNC(sub_82270834);
PPC_FUNC_IMPL(__imp__sub_82270834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82270838"))) PPC_WEAK_FUNC(sub_82270838);
PPC_FUNC_IMPL(__imp__sub_82270838) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r24,0
	r24.s64 = 0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// ble cr6,0x822708ec
	if (!cr6.gt) goto loc_822708EC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r24,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r24.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lis r11,16383
	r11.s64 = 1073676288;
	// stw r24,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r24.u32);
	// li r29,-1
	r29.s64 = -1;
	// ori r30,r11,65535
	r30.u64 = r11.u64 | 65535;
	// rlwinm r3,r25,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r25,r30
	cr6.compare<uint32_t>(r25.u32, r30.u32, xer);
	// ble cr6,0x82270898
	if (!cr6.gt) goto loc_82270898;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82270898:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmplw cr6,r25,r30
	cr6.compare<uint32_t>(r25.u32, r30.u32, xer);
	// rlwinm r3,r25,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x822708b0
	if (!cr6.gt) goto loc_822708B0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_822708B0:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// mr r11,r24
	r11.u64 = r24.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stw r25,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r25.u32);
	// beq cr6,0x822708ec
	if (cr6.eq) goto loc_822708EC;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_822708CC:
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x822708cc
	if (cr6.lt) goto loc_822708CC;
loc_822708EC:
	// li r5,4096
	ctx.r5.s64 = 4096;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r26,r25,2,0,29
	r26.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// add r5,r26,r27
	ctx.r5.u64 = r26.u64 + r27.u64;
	// li r29,1
	r29.s64 = 1;
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r11,r27
	r11.u64 = r27.u64;
	// addi r9,r10,1024
	ctx.r9.s64 = ctx.r10.s64 + 1024;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,2048
	ctx.r8.s64 = ctx.r10.s64 + 2048;
	// addi r7,r10,3072
	ctx.r7.s64 = ctx.r10.s64 + 3072;
	// cmplw cr6,r27,r5
	cr6.compare<uint32_t>(r27.u32, ctx.r5.u32, xer);
	// lwzx r3,r6,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + r27.u32);
	// clrlwi. r28,r28,24
	r28.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x82270a54
	if (cr6.eq) goto loc_82270A54;
	// bne 0x822709cc
	if (!cr0.eq) goto loc_822709CC;
loc_82270940:
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + r27.u32);
	// cmplw cr6,r6,r3
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, xer);
	// bge cr6,0x8227095c
	if (!cr6.lt) goto loc_8227095C;
	// mr r29,r24
	r29.u64 = r24.u64;
loc_8227095C:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rotlwi r6,r4,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// lwzx r4,r6,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r4,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r4.u32);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rotlwi r6,r6,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lwzx r4,r6,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r4,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r4.u32);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rotlwi r6,r6,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lwzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r4,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r4.u32);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rotlwi r6,r6,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// lwzx r4,r6,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r4,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r4.u32);
	// bne cr6,0x82270940
	if (!cr6.eq) goto loc_82270940;
	// b 0x82270a54
	goto loc_82270A54;
loc_822709CC:
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + r27.u32);
	// cmpw cr6,r6,r3
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, xer);
	// bge cr6,0x822709e8
	if (!cr6.lt) goto loc_822709E8;
	// mr r29,r24
	r29.u64 = r24.u64;
loc_822709E8:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rotlwi r6,r4,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// lwzx r4,r6,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r4,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r4.u32);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rotlwi r6,r6,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lwzx r4,r6,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r4,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r4.u32);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rotlwi r6,r6,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lwzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r4,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r4.u32);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rotlwi r6,r6,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// lwzx r4,r6,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r4,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r4.u32);
	// bne cr6,0x822709cc
	if (!cr6.eq) goto loc_822709CC;
loc_82270A54:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82270bfc
	if (!cr0.eq) goto loc_82270BFC;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82270a8c
	if (cr6.eq) goto loc_82270A8C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,128
	r11.s64 = 128;
	// addi r10,r10,3072
	ctx.r10.s64 = ctx.r10.s64 + 3072;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
loc_82270A78:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// bne 0x82270a78
	if (!cr0.eq) goto loc_82270A78;
loc_82270A8C:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
loc_82270A90:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r5,10,0,21
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82270AA8:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r7,r25
	cr6.compare<uint32_t>(ctx.r7.u32, r25.u32, xer);
	// beq cr6,0x82270ad0
	if (cr6.eq) goto loc_82270AD0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82270ad4
	if (!cr6.eq) goto loc_82270AD4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r9,256
	cr6.compare<uint32_t>(ctx.r9.u32, 256, xer);
	// blt cr6,0x82270aa8
	if (cr6.lt) goto loc_82270AA8;
	// b 0x82270ad4
	goto loc_82270AD4;
loc_82270AD0:
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
loc_82270AD4:
	// clrlwi. r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82270bf0
	if (cr0.eq) goto loc_82270BF0;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bne cr6,0x82270b54
	if (!cr6.eq) goto loc_82270B54;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82270b54
	if (cr6.eq) goto loc_82270B54;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r11,4
	r11.s64 = 4;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
loc_82270AFC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(r11.u32, 512, xer);
	// lwz r7,-4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// blt cr6,0x82270afc
	if (cr6.lt) goto loc_82270AFC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r11,516
	r11.s64 = 516;
	// stw r24,512(r10)
	PPC_STORE_U32(ctx.r10.u32 + 512, r24.u32);
loc_82270B2C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r11,1024
	cr6.compare<uint32_t>(r11.u32, 1024, xer);
	// lwz r7,-4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// blt cr6,0x82270b2c
	if (cr6.lt) goto loc_82270B2C;
	// b 0x82270b88
	goto loc_82270B88;
loc_82270B54:
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r11,4
	r11.s64 = 4;
	// stw r24,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r24.u32);
loc_82270B64:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r11,1024
	cr6.compare<uint32_t>(r11.u32, 1024, xer);
	// lwz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blt cr6,0x82270b64
	if (cr6.lt) goto loc_82270B64;
loc_82270B88:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r8,r5,r27
	ctx.r8.u64 = ctx.r5.u64 + r27.u64;
	// add r7,r26,r11
	ctx.r7.u64 = r26.u64 + r11.u64;
	// b 0x82270bd8
	goto loc_82270BD8;
loc_82270B98:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lbzx r30,r9,r8
	r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// rotlwi r30,r30,2
	r30.u64 = __builtin_rotateleft32(r30.u32, 2);
	// lwzx r6,r30,r6
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + ctx.r6.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r10.u32);
	// lbzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwx r6,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u32);
loc_82270BD8:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x82270b98
	if (!cr6.eq) goto loc_82270B98;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
loc_82270BF0:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi cr6,r5,4
	cr6.compare<uint32_t>(ctx.r5.u32, 4, xer);
	// blt cr6,0x82270a90
	if (cr6.lt) goto loc_82270A90;
loc_82270BFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82270C08"))) PPC_WEAK_FUNC(sub_82270C08);
PPC_FUNC_IMPL(__imp__sub_82270C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r3,18728(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18728);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82270C14"))) PPC_WEAK_FUNC(sub_82270C14);
PPC_FUNC_IMPL(__imp__sub_82270C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82270C18"))) PPC_WEAK_FUNC(sub_82270C18);
PPC_FUNC_IMPL(__imp__sub_82270C18) {
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
	// lwz r16,19144(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19144);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,18784(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18784);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,18764
	r30.s64 = ctx.r9.s64 + 18764;
	// bne 0x82270ca8
	if (!cr0.eq) goto loc_82270CA8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,18784(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18784, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// addi r4,r11,19128
	ctx.r4.s64 = r11.s64 + 19128;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// addi r4,r11,19120
	ctx.r4.s64 = r11.s64 + 19120;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// addi r4,r11,19116
	ctx.r4.s64 = r11.s64 + 19116;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// addi r4,r11,19112
	ctx.r4.s64 = r11.s64 + 19112;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82270CA8:
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82270C20"))) PPC_WEAK_FUNC(sub_82270C20);
PPC_FUNC_IMPL(__imp__sub_82270C20) {
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
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,18784(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18784);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,18764
	r30.s64 = ctx.r9.s64 + 18764;
	// bne 0x82270ca8
	if (!cr0.eq) goto loc_82270CA8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,18784(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18784, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// addi r4,r11,19128
	ctx.r4.s64 = r11.s64 + 19128;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// addi r4,r11,19120
	ctx.r4.s64 = r11.s64 + 19120;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// addi r4,r11,19116
	ctx.r4.s64 = r11.s64 + 19116;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// addi r4,r11,19112
	ctx.r4.s64 = r11.s64 + 19112;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82270CA8:
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82270CC0"))) PPC_WEAK_FUNC(sub_82270CC0);
PPC_FUNC_IMPL(__imp__sub_82270CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,18784
	r11.s64 = r11.s64 + 18784;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,18784
	ctx.r10.s64 = ctx.r10.s64 + 18784;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82270CE8"))) PPC_WEAK_FUNC(sub_82270CE8);
PPC_FUNC_IMPL(__imp__sub_82270CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r11,18736(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18736);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82270D00"))) PPC_WEAK_FUNC(sub_82270D00);
PPC_FUNC_IMPL(__imp__sub_82270D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,18736(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18736, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82270D10"))) PPC_WEAK_FUNC(sub_82270D10);
PPC_FUNC_IMPL(__imp__sub_82270D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r3,18732(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18732);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82270D1C"))) PPC_WEAK_FUNC(sub_82270D1C);
PPC_FUNC_IMPL(__imp__sub_82270D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82270D20"))) PPC_WEAK_FUNC(sub_82270D20);
PPC_FUNC_IMPL(__imp__sub_82270D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,18732(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18732);
	// b 0x82319530
	sub_82319530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82270D34"))) PPC_WEAK_FUNC(sub_82270D34);
PPC_FUNC_IMPL(__imp__sub_82270D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82270D38"))) PPC_WEAK_FUNC(sub_82270D38);
PPC_FUNC_IMPL(__imp__sub_82270D38) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,18732(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18732);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82319530
	sub_82319530(ctx, base);
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

__attribute__((alias("__imp__sub_82270D80"))) PPC_WEAK_FUNC(sub_82270D80);
PPC_FUNC_IMPL(__imp__sub_82270D80) {
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,18732(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18732);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82319530
	sub_82319530(ctx, base);
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

__attribute__((alias("__imp__sub_82270DE0"))) PPC_WEAK_FUNC(sub_82270DE0);
PPC_FUNC_IMPL(__imp__sub_82270DE0) {
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,18732(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18732);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82270E38"))) PPC_WEAK_FUNC(sub_82270E38);
PPC_FUNC_IMPL(__imp__sub_82270E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r11,18740(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18740);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82270E48"))) PPC_WEAK_FUNC(sub_82270E48);
PPC_FUNC_IMPL(__imp__sub_82270E48) {
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
	// lwz r16,19216(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19216);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lis r29,-32136
	r29.s64 = -2106064896;
	// lwz r11,18792(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18792);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82270eb0
	if (!cr0.eq) goto loc_82270EB0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,18792(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18792, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,19192
	ctx.r4.s64 = r11.s64 + 19192;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8231d958
	sub_8231D958(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r5,18788(r29)
	PPC_STORE_U32(r29.u32 + 18788, ctx.r5.u32);
	// b 0x82270eb4
	goto loc_82270EB4;
loc_82270EB0:
	// lwz r5,18788(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 18788);
loc_82270EB4:
	// lha r11,8(r5)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r5.u32 + 8));
	// li r28,0
	r28.s64 = 0;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82270f04
	if (!cr0.gt) goto loc_82270F04;
	// li r30,0
	r30.s64 = 0;
loc_82270EC8:
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + r11.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r11,r27
	r11.s64 = r27.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82270f10
	if (!cr0.eq) goto loc_82270F10;
	// lwz r5,18788(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 18788);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lha r11,8(r5)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r5.u32 + 8));
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82270ec8
	if (cr6.lt) goto loc_82270EC8;
loc_82270F04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82270F08:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
loc_82270F10:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82270f08
	goto loc_82270F08;
}

__attribute__((alias("__imp__sub_82270E50"))) PPC_WEAK_FUNC(sub_82270E50);
PPC_FUNC_IMPL(__imp__sub_82270E50) {
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
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lis r29,-32136
	r29.s64 = -2106064896;
	// lwz r11,18792(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18792);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82270eb0
	if (!cr0.eq) goto loc_82270EB0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,18792(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18792, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,19192
	ctx.r4.s64 = r11.s64 + 19192;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8231d958
	sub_8231D958(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r5,18788(r29)
	PPC_STORE_U32(r29.u32 + 18788, ctx.r5.u32);
	// b 0x82270eb4
	goto loc_82270EB4;
loc_82270EB0:
	// lwz r5,18788(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 18788);
loc_82270EB4:
	// lha r11,8(r5)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r5.u32 + 8));
	// li r28,0
	r28.s64 = 0;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82270f04
	if (!cr0.gt) goto loc_82270F04;
	// li r30,0
	r30.s64 = 0;
loc_82270EC8:
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + r11.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r11,r27
	r11.s64 = r27.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82270f10
	if (!cr0.eq) goto loc_82270F10;
	// lwz r5,18788(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 18788);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lha r11,8(r5)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r5.u32 + 8));
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82270ec8
	if (cr6.lt) goto loc_82270EC8;
loc_82270F04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82270F08:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
loc_82270F10:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82270f08
	goto loc_82270F08;
}

__attribute__((alias("__imp__sub_82270F18"))) PPC_WEAK_FUNC(sub_82270F18);
PPC_FUNC_IMPL(__imp__sub_82270F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,18792
	r11.s64 = r11.s64 + 18792;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,18792
	ctx.r10.s64 = ctx.r10.s64 + 18792;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82270F40"))) PPC_WEAK_FUNC(sub_82270F40);
PPC_FUNC_IMPL(__imp__sub_82270F40) {
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
	// lwz r16,19312(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19312);
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// stw r3,18728(r11)
	PPC_STORE_U32(r11.u32 + 18728, ctx.r3.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,19288
	ctx.r4.s64 = r11.s64 + 19288;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r31,88
	r30.s64 = r31.s64 + 88;
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82270fac
	if (cr0.eq) goto loc_82270FAC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82270FAC:
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

__attribute__((alias("__imp__sub_82270F48"))) PPC_WEAK_FUNC(sub_82270F48);
PPC_FUNC_IMPL(__imp__sub_82270F48) {
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// stw r3,18728(r11)
	PPC_STORE_U32(r11.u32 + 18728, ctx.r3.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,19288
	ctx.r4.s64 = r11.s64 + 19288;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r31,88
	r30.s64 = r31.s64 + 88;
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82270fac
	if (cr0.eq) goto loc_82270FAC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82270FAC:
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

__attribute__((alias("__imp__sub_82270FC4"))) PPC_WEAK_FUNC(sub_82270FC4);
PPC_FUNC_IMPL(__imp__sub_82270FC4) {
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

__attribute__((alias("__imp__sub_82270FEC"))) PPC_WEAK_FUNC(sub_82270FEC);
PPC_FUNC_IMPL(__imp__sub_82270FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82270FF0"))) PPC_WEAK_FUNC(sub_82270FF0);
PPC_FUNC_IMPL(__imp__sub_82270FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,18740(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18740);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271010"))) PPC_WEAK_FUNC(sub_82271010);
PPC_FUNC_IMPL(__imp__sub_82271010) {
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
	// bl 0x822758e0
	sub_822758E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
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

__attribute__((alias("__imp__sub_82271068"))) PPC_WEAK_FUNC(sub_82271068);
PPC_FUNC_IMPL(__imp__sub_82271068) {
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
	// lwz r16,19464(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19464);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r11,19448
	ctx.r3.s64 = r11.s64 + 19448;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82358018
	sub_82358018(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r30,r11,18736
	r30.s64 = r11.s64 + 18736;
	// beq 0x822710bc
	if (cr0.eq) goto loc_822710BC;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,19436
	ctx.r3.s64 = r11.s64 + 19436;
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822783b0
	sub_822783B0(ctx, base);
	// bl 0x82276b80
	sub_82276B80(ctx, base);
loc_822710BC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r29,r10,1
	r29.u64 = ctx.r10.u64 ^ 1;
	// lbz r11,18724(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 18724);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822710e4
	if (cr0.eq) goto loc_822710E4;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_822710E4:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,19428
	ctx.r4.s64 = r11.s64 + 19428;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8231dd18
	sub_8231DD18(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,19420
	ctx.r4.s64 = r11.s64 + 19420;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8231dd18
	sub_8231DD18(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,19412
	ctx.r3.s64 = r11.s64 + 19412;
	// bl 0x82358080
	sub_82358080(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82271148
	if (cr0.eq) goto loc_82271148;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8231dd18
	sub_8231DD18(ctx, base);
loc_82271148:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,19404
	ctx.r3.s64 = r11.s64 + 19404;
	// bl 0x82358080
	sub_82358080(ctx, base);
	// bl 0x8231c520
	sub_8231C520(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r4,-4(r30)
	PPC_STORE_U32(r30.u32 + -4, ctx.r4.u32);
	// bl 0x82317b70
	sub_82317B70(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,19396
	ctx.r4.s64 = r11.s64 + 19396;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r31,88
	r28.s64 = r31.s64 + 88;
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822711a8
	if (cr0.eq) goto loc_822711A8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822711A8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,19380
	ctx.r4.s64 = r11.s64 + 19380;
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32217
	r11.s64 = -2111373312;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,4080
	ctx.r4.s64 = r11.s64 + 4080;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,19368
	ctx.r4.s64 = r11.s64 + 19368;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32217
	r11.s64 = -2111373312;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,4112
	ctx.r4.s64 = r11.s64 + 4112;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82270f48
	sub_82270F48(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82271070"))) PPC_WEAK_FUNC(sub_82271070);
PPC_FUNC_IMPL(__imp__sub_82271070) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r11,19448
	ctx.r3.s64 = r11.s64 + 19448;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82358018
	sub_82358018(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r30,r11,18736
	r30.s64 = r11.s64 + 18736;
	// beq 0x822710bc
	if (cr0.eq) goto loc_822710BC;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,19436
	ctx.r3.s64 = r11.s64 + 19436;
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822783b0
	sub_822783B0(ctx, base);
	// bl 0x82276b80
	sub_82276B80(ctx, base);
loc_822710BC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r29,r10,1
	r29.u64 = ctx.r10.u64 ^ 1;
	// lbz r11,18724(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 18724);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822710e4
	if (cr0.eq) goto loc_822710E4;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_822710E4:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,19428
	ctx.r4.s64 = r11.s64 + 19428;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8231dd18
	sub_8231DD18(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,19420
	ctx.r4.s64 = r11.s64 + 19420;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8231dd18
	sub_8231DD18(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,19412
	ctx.r3.s64 = r11.s64 + 19412;
	// bl 0x82358080
	sub_82358080(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82271148
	if (cr0.eq) goto loc_82271148;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8231dd18
	sub_8231DD18(ctx, base);
loc_82271148:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,19404
	ctx.r3.s64 = r11.s64 + 19404;
	// bl 0x82358080
	sub_82358080(ctx, base);
	// bl 0x8231c520
	sub_8231C520(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r4,-4(r30)
	PPC_STORE_U32(r30.u32 + -4, ctx.r4.u32);
	// bl 0x82317b70
	sub_82317B70(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,19396
	ctx.r4.s64 = r11.s64 + 19396;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r31,88
	r28.s64 = r31.s64 + 88;
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822711a8
	if (cr0.eq) goto loc_822711A8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822711A8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,19380
	ctx.r4.s64 = r11.s64 + 19380;
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32217
	r11.s64 = -2111373312;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,4080
	ctx.r4.s64 = r11.s64 + 4080;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,19368
	ctx.r4.s64 = r11.s64 + 19368;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32217
	r11.s64 = -2111373312;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,4112
	ctx.r4.s64 = r11.s64 + 4112;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82270f48
	sub_82270F48(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82271200"))) PPC_WEAK_FUNC(sub_82271200);
PPC_FUNC_IMPL(__imp__sub_82271200) {
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

__attribute__((alias("__imp__sub_82271228"))) PPC_WEAK_FUNC(sub_82271228);
PPC_FUNC_IMPL(__imp__sub_82271228) {
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
	// bl 0x8227b780
	sub_8227B780(ctx, base);
	// bl 0x8227b360
	sub_8227B360(ctx, base);
	// bl 0x8227aa50
	sub_8227AA50(ctx, base);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// bl 0x82279ff0
	sub_82279FF0(ctx, base);
	// bl 0x82279a80
	sub_82279A80(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,15600
	ctx.r3.s64 = r11.s64 + 15600;
	// bl 0x8235a1c0
	sub_8235A1C0(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r3,22148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82271274
	if (cr6.eq) goto loc_82271274;
	// bl 0x822786d8
	sub_822786D8(ctx, base);
loc_82271274:
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82271288
	if (cr0.eq) goto loc_82271288;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82313dd0
	sub_82313DD0(ctx, base);
loc_82271288:
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r11,18736(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18736);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8227129c
	if (!cr6.eq) goto loc_8227129C;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_8227129C:
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

__attribute__((alias("__imp__sub_822712B0"))) PPC_WEAK_FUNC(sub_822712B0);
PPC_FUNC_IMPL(__imp__sub_822712B0) {
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
	// bl 0x82270e50
	sub_82270E50(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82271350
	if (!cr0.eq) goto loc_82271350;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,19536
	ctx.r4.s64 = r11.s64 + 19536;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-14500
	ctx.r4.s64 = r11.s64 + -14500;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
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
	// addi r4,r11,19528
	ctx.r4.s64 = r11.s64 + 19528;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x82271384
	if (cr0.eq) goto loc_82271384;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82270e50
	sub_82270E50(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82271384
	if (cr0.eq) goto loc_82271384;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82271350:
	// lis r29,-32136
	r29.s64 = -2106064896;
	// lwz r11,18740(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18740);
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82271384
	if (!cr0.eq) goto loc_82271384;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r31,r11,-1332
	r31.s64 = r11.s64 + -1332;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82356ee8
	sub_82356EE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,18740(r29)
	PPC_STORE_U32(r29.u32 + 18740, r30.u32);
	// bl 0x82356f30
	sub_82356F30(ctx, base);
loc_82271384:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8227138C"))) PPC_WEAK_FUNC(sub_8227138C);
PPC_FUNC_IMPL(__imp__sub_8227138C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271390"))) PPC_WEAK_FUNC(sub_82271390);
PPC_FUNC_IMPL(__imp__sub_82271390) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,19536
	ctx.r4.s64 = r11.s64 + 19536;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-14500
	ctx.r4.s64 = r11.s64 + -14500;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,2848
	ctx.r4.s64 = r11.s64 + 2848;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82275468
	sub_82275468(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,19548
	ctx.r4.s64 = r11.s64 + 19548;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82271430
	if (cr0.eq) goto loc_82271430;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82319650
	sub_82319650(ctx, base);
loc_82271430:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-26416
	ctx.r4.s64 = r11.s64 + -26416;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319650
	sub_82319650(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82271494
	if (cr0.eq) goto loc_82271494;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82271494
	if (cr0.eq) goto loc_82271494;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82271494:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822712b0
	sub_822712B0(ctx, base);
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

__attribute__((alias("__imp__sub_822714B0"))) PPC_WEAK_FUNC(sub_822714B0);
PPC_FUNC_IMPL(__imp__sub_822714B0) {
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
	// b 0x822714e0
	goto loc_822714E0;
loc_822714D0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822714E0:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x822714d0
	if (!cr6.eq) goto loc_822714D0;
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

__attribute__((alias("__imp__sub_82271508"))) PPC_WEAK_FUNC(sub_82271508);
PPC_FUNC_IMPL(__imp__sub_82271508) {
	PPC_FUNC_PROLOGUE();
	// b 0x822714b0
	sub_822714B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227150C"))) PPC_WEAK_FUNC(sub_8227150C);
PPC_FUNC_IMPL(__imp__sub_8227150C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271510"))) PPC_WEAK_FUNC(sub_82271510);
PPC_FUNC_IMPL(__imp__sub_82271510) {
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
	// beq cr6,0x82271558
	if (cr6.eq) goto loc_82271558;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82271550
	if (cr0.eq) goto loc_82271550;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x82271554
	goto loc_82271554;
loc_82271550:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82271554:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_82271558:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82271564"))) PPC_WEAK_FUNC(sub_82271564);
PPC_FUNC_IMPL(__imp__sub_82271564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271568"))) PPC_WEAK_FUNC(sub_82271568);
PPC_FUNC_IMPL(__imp__sub_82271568) {
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
	// lis r11,-32217
	r11.s64 = -2111373312;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r4,r11,5480
	ctx.r4.s64 = r11.s64 + 5480;
	// addi r3,r10,18840
	ctx.r3.s64 = ctx.r10.s64 + 18840;
	// bl 0x82272888
	sub_82272888(ctx, base);
	// bl 0x82279cb0
	sub_82279CB0(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-1332
	ctx.r3.s64 = r11.s64 + -1332;
	// bl 0x82356ee8
	sub_82356EE8(ctx, base);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// bl 0x8235b2a0
	sub_8235B2A0(ctx, base);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// bl 0x8227b358
	sub_8227B358(ctx, base);
	// bl 0x8227b730
	sub_8227B730(ctx, base);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// bl 0x82279e68
	sub_82279E68(ctx, base);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82314ce8
	sub_82314CE8(ctx, base);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// bl 0x8226e008
	sub_8226E008(ctx, base);
	// bl 0x82275c60
	sub_82275C60(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r3,18732(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18732);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// bl 0x8231dbc0
	sub_8231DBC0(ctx, base);
	// bl 0x82355820
	sub_82355820(ctx, base);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// bl 0x82278968
	sub_82278968(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r3,r11,18752
	ctx.r3.s64 = r11.s64 + 18752;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82271510
	sub_82271510(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271614"))) PPC_WEAK_FUNC(sub_82271614);
PPC_FUNC_IMPL(__imp__sub_82271614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271618"))) PPC_WEAK_FUNC(sub_82271618);
PPC_FUNC_IMPL(__imp__sub_82271618) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82120bd0
	sub_82120BD0(ctx, base);
	// bl 0x82356500
	sub_82356500(ctx, base);
	// bl 0x82358588
	sub_82358588(ctx, base);
	// bl 0x82271910
	sub_82271910(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,19564
	ctx.r3.s64 = r11.s64 + 19564;
	// bl 0x82358018
	sub_82358018(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// stb r3,18724(r11)
	PPC_STORE_U8(r11.u32 + 18724, ctx.r3.u8);
	// bl 0x82276b80
	sub_82276B80(ctx, base);
	// bl 0x82278800
	sub_82278800(ctx, base);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823b53c8
	sub_823B53C8(ctx, base);
	// lhz r3,126(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 126);
	// bl 0x8226dc50
	sub_8226DC50(ctx, base);
	// bl 0x8231d208
	sub_8231D208(ctx, base);
	// bl 0x82278310
	sub_82278310(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r31,r11,18840
	r31.s64 = r11.s64 + 18840;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82272618
	sub_82272618(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82271070
	sub_82271070(ctx, base);
	// bl 0x82355048
	sub_82355048(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,15600
	ctx.r3.s64 = r11.s64 + 15600;
	// bl 0x82359b98
	sub_82359B98(ctx, base);
	// bl 0x823213c8
	sub_823213C8(ctx, base);
	// bl 0x8226ddf0
	sub_8226DDF0(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82314bc0
	sub_82314BC0(ctx, base);
	// bl 0x8227a0b8
	sub_8227A0B8(ctx, base);
	// bl 0x8226bcc0
	sub_8226BCC0(ctx, base);
	// bl 0x82272240
	sub_82272240(ctx, base);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// bl 0x82271390
	sub_82271390(ctx, base);
	// bl 0x8227b638
	sub_8227B638(ctx, base);
	// bl 0x8227b4a0
	sub_8227B4A0(ctx, base);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// bl 0x8235c610
	sub_8235C610(ctx, base);
	// bl 0x8227baf0
	sub_8227BAF0(ctx, base);
	// bl 0x82278e28
	sub_82278E28(ctx, base);
	// lis r11,-32217
	r11.s64 = -2111373312;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,5480
	r11.s64 = r11.s64 + 5480;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x821e4d98
	sub_821E4D98(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-14500
	ctx.r4.s64 = r11.s64 + -14500;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,18732(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18732);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,19556
	ctx.r4.s64 = r11.s64 + 19556;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82271790
	if (cr0.eq) goto loc_82271790;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8231ae98
	sub_8231AE98(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82271790
	if (cr0.eq) goto loc_82271790;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82271790:
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r3,r11,18744
	ctx.r3.s64 = r11.s64 + 18744;
	// bl 0x82358288
	sub_82358288(ctx, base);
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

__attribute__((alias("__imp__sub_822717B4"))) PPC_WEAK_FUNC(sub_822717B4);
PPC_FUNC_IMPL(__imp__sub_822717B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822717B8"))) PPC_WEAK_FUNC(sub_822717B8);
PPC_FUNC_IMPL(__imp__sub_822717B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r11,0
	r11.s64 = 0;
	// mftb r10
	ctx.r10.u64 = __rdtsc();
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lis r8,-32136
	ctx.r8.s64 = -2106064896;
	// lfs f13,18804(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18804);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,-16(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(f0.f64));
	// lfs f0,18800(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18800);
	f0.f64 = double(temp.f32);
loc_822717E8:
	// mftb r10
	ctx.r10.u64 = __rdtsc();
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// clrldi r10,r8,32
	ctx.r10.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = r11.u64 & 0xFFFFFFFF;
	// sradi r8,r11,32
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0xFFFFFFFF) != 0);
	ctx.r8.s64 = r11.s64 >> 32;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// std r8,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r8.u64);
	// lfd f11,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f10,-8(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fmadds f11,f10,f13,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blt cr6,0x822717e8
	if (cr6.lt) goto loc_822717E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271840"))) PPC_WEAK_FUNC(sub_82271840);
PPC_FUNC_IMPL(__imp__sub_82271840) {
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
	// ld r11,8(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
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
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f0,f11,f0,f13
	f0.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f13.f64));
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// blt cr6,0x822718a8
	if (cr6.lt) goto loc_822718A8;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
loc_822718A8:
	// lwa r9,24(r3)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 24));
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// std r9,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r9.u64);
	// extsw r9,r11
	ctx.r9.s64 = r11.s32;
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,19576(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 19576);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271910"))) PPC_WEAK_FUNC(sub_82271910);
PPC_FUNC_IMPL(__imp__sub_82271910) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b5460
	sub_823B5460(ctx, base);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfd f0,19592(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 19592);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// fdiv f0,f0,f13
	f0.f64 = f0.f64 / ctx.f13.f64;
	// stfd f0,18808(r11)
	PPC_STORE_U64(r11.u32 + 18808, f0.u64);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfd f13,19584(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 19584);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// fmul f13,f0,f13
	ctx.f13.f64 = f0.f64 * ctx.f13.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,18800(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 18800, temp.u32);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// frsp f0,f13
	f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,18804(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 18804, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227197C"))) PPC_WEAK_FUNC(sub_8227197C);
PPC_FUNC_IMPL(__imp__sub_8227197C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271980"))) PPC_WEAK_FUNC(sub_82271980);
PPC_FUNC_IMPL(__imp__sub_82271980) {
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
	// beq 0x822719c0
	if (cr0.eq) goto loc_822719C0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,18980
	ctx.r3.s64 = r11.s64 + 18980;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822719c8
	goto loc_822719C8;
loc_822719C0:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_822719C8:
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

__attribute__((alias("__imp__sub_822719E4"))) PPC_WEAK_FUNC(sub_822719E4);
PPC_FUNC_IMPL(__imp__sub_822719E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822719E8"))) PPC_WEAK_FUNC(sub_822719E8);
PPC_FUNC_IMPL(__imp__sub_822719E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r10,r11,18816
	ctx.r10.s64 = r11.s64 + 18816;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82271a14
	goto loc_82271A14;
loc_822719FC:
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// subf r9,r9,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82271a24
	if (!cr0.eq) goto loc_82271A24;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
loc_82271A14:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x822719fc
	if (!cr6.eq) goto loc_822719FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82271A24:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271A2C"))) PPC_WEAK_FUNC(sub_82271A2C);
PPC_FUNC_IMPL(__imp__sub_82271A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271A30"))) PPC_WEAK_FUNC(sub_82271A30);
PPC_FUNC_IMPL(__imp__sub_82271A30) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822719e8
	sub_822719E8(ctx, base);
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// stfs f31,0(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82271a9c
	if (!cr6.lt) goto loc_82271A9C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82271A9C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82271ABC"))) PPC_WEAK_FUNC(sub_82271ABC);
PPC_FUNC_IMPL(__imp__sub_82271ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271AC0"))) PPC_WEAK_FUNC(sub_82271AC0);
PPC_FUNC_IMPL(__imp__sub_82271AC0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822719e8
	sub_822719E8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82271B24"))) PPC_WEAK_FUNC(sub_82271B24);
PPC_FUNC_IMPL(__imp__sub_82271B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271B28"))) PPC_WEAK_FUNC(sub_82271B28);
PPC_FUNC_IMPL(__imp__sub_82271B28) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfd f0,19640(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 19640);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x82271b50
	if (!cr6.lt) goto loc_82271B50;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,19628
	ctx.r3.s64 = r11.s64 + 19628;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f0,19624(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 19624);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// b 0x8215d840
	sub_8215D840(ctx, base);
	return;
loc_82271B50:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x82271b78
	if (!cr6.lt) goto loc_82271B78;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,19616
	ctx.r3.s64 = r11.s64 + 19616;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,17324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// b 0x8215d840
	sub_8215D840(ctx, base);
	return;
loc_82271B78:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,17324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x82271ba0
	if (cr6.lt) goto loc_82271BA0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,19608
	ctx.r3.s64 = r11.s64 + 19608;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// b 0x8215d840
	sub_8215D840(ctx, base);
	return;
loc_82271BA0:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,19600
	ctx.r3.s64 = r11.s64 + 19600;
	// b 0x8215d840
	sub_8215D840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82271BAC"))) PPC_WEAK_FUNC(sub_82271BAC);
PPC_FUNC_IMPL(__imp__sub_82271BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271BB0"))) PPC_WEAK_FUNC(sub_82271BB0);
PPC_FUNC_IMPL(__imp__sub_82271BB0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r30,r11,18816
	r30.s64 = r11.s64 + 18816;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82271c00
	if (cr6.eq) goto loc_82271C00;
	// clrlwi r29,r3,24
	r29.u64 = ctx.r3.u32 & 0xFF;
loc_82271BD8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82271be8
	if (cr6.eq) goto loc_82271BE8;
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82271bec
	goto loc_82271BEC;
loc_82271BE8:
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
loc_82271BEC:
	// bl 0x82271b28
	sub_82271B28(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82271bd8
	if (!cr6.eq) goto loc_82271BD8;
loc_82271C00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82271C08"))) PPC_WEAK_FUNC(sub_82271C08);
PPC_FUNC_IMPL(__imp__sub_82271C08) {
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
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// bl 0x82271bb0
	sub_82271BB0(ctx, base);
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

__attribute__((alias("__imp__sub_82271C68"))) PPC_WEAK_FUNC(sub_82271C68);
PPC_FUNC_IMPL(__imp__sub_82271C68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82271cac
	if (cr6.eq) goto loc_82271CAC;
loc_82271C88:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82271ca0
	if (cr6.eq) goto loc_82271CA0;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_82271CA0:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// bne 0x82271c88
	if (!cr0.eq) goto loc_82271C88;
loc_82271CAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82271CB8"))) PPC_WEAK_FUNC(sub_82271CB8);
PPC_FUNC_IMPL(__imp__sub_82271CB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// b 0x82271cf4
	goto loc_82271CF4;
loc_82271CD4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82271cec
	if (cr6.eq) goto loc_82271CEC;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_82271CEC:
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
loc_82271CF4:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x82271cd4
	if (!cr6.eq) goto loc_82271CD4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82271D08"))) PPC_WEAK_FUNC(sub_82271D08);
PPC_FUNC_IMPL(__imp__sub_82271D08) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r11,48
	r11.s64 = 48;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// divw. r30,r10,r11
	r30.s32 = ctx.r10.s32 / r11.s32;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x82271d54
	if (!cr0.gt) goto loc_82271D54;
	// subf r27,r29,r5
	r27.s64 = ctx.r5.s64 - r29.s64;
loc_82271D38:
	// add r4,r27,r31
	ctx.r4.u64 = r27.u64 + r31.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// bgt 0x82271d38
	if (cr0.gt) goto loc_82271D38;
loc_82271D54:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82271D64"))) PPC_WEAK_FUNC(sub_82271D64);
PPC_FUNC_IMPL(__imp__sub_82271D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271D68"))) PPC_WEAK_FUNC(sub_82271D68);
PPC_FUNC_IMPL(__imp__sub_82271D68) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x82271da0
	if (cr6.lt) goto loc_82271DA0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82271da4
	if (cr6.lt) goto loc_82271DA4;
loc_82271DA0:
	// li r11,0
	r11.s64 = 0;
loc_82271DA4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82271de4
	if (cr0.eq) goto loc_82271DE4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// bl 0x82271d68
	sub_82271D68(ctx, base);
	// b 0x82271ed8
	goto loc_82271ED8;
loc_82271DE4:
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r26,48
	r26.s64 = 48;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r11,r29,r31
	r11.s64 = r31.s64 - r29.s64;
	// divw r28,r11,r26
	r28.s32 = r11.s32 / r26.s32;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(r28.u32, r27.u32, xer);
	// ble cr6,0x82271e80
	if (!cr6.gt) goto loc_82271E80;
	// mulli r27,r27,48
	r27.s64 = r27.s64 * 48;
	// subf r28,r27,r31
	r28.s64 = r31.s64 - r27.s64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82271cb8
	sub_82271CB8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// subf r11,r29,r28
	r11.s64 = r28.s64 - r29.s64;
	// divw. r30,r11,r26
	r30.s32 = r11.s32 / r26.s32;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x82271e50
	if (!cr0.gt) goto loc_82271E50;
loc_82271E30:
	// addi r31,r31,-48
	r31.s64 = r31.s64 + -48;
	// addi r28,r28,-48
	r28.s64 = r28.s64 + -48;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bgt 0x82271e30
	if (cr0.gt) goto loc_82271E30;
loc_82271E50:
	// add r30,r27,r29
	r30.u64 = r27.u64 + r29.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// beq cr6,0x82271ed8
	if (cr6.eq) goto loc_82271ED8;
loc_82271E60:
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82271e60
	if (!cr6.eq) goto loc_82271E60;
	// b 0x82271ed8
	goto loc_82271ED8;
loc_82271E80:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// subf r4,r28,r27
	ctx.r4.s64 = r27.s64 - r28.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82271c68
	sub_82271C68(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r5,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// bl 0x82271cb8
	sub_82271CB8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mulli r11,r28,48
	r11.s64 = r28.s64 * 48;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// b 0x82271ed0
	goto loc_82271ED0;
loc_82271EBC:
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
loc_82271ED0:
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// bne cr6,0x82271ebc
	if (!cr6.eq) goto loc_82271EBC;
loc_82271ED8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82271EE0"))) PPC_WEAK_FUNC(sub_82271EE0);
PPC_FUNC_IMPL(__imp__sub_82271EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82271ef0
	goto loc_82271EF0;
loc_82271EEC:
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
loc_82271EF0:
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
	// bne 0x82271eec
	if (!cr0.eq) goto loc_82271EEC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,48
	ctx.r10.s64 = 48;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,48
	ctx.r3.s64 = r11.s64 * 48;
	// b 0x82355020
	sub_82355020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82271F28"))) PPC_WEAK_FUNC(sub_82271F28);
PPC_FUNC_IMPL(__imp__sub_82271F28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271F2C"))) PPC_WEAK_FUNC(sub_82271F2C);
PPC_FUNC_IMPL(__imp__sub_82271F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271F30"))) PPC_WEAK_FUNC(sub_82271F30);
PPC_FUNC_IMPL(__imp__sub_82271F30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// lwz r16,19700(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19700);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bce0
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r22,48
	r22.s64 = 48;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r28,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r28.u32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r31,244
	ctx.r10.s64 = r31.s64 + 244;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x82271f90
	if (cr6.lt) goto loc_82271F90;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_82271F90:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// add r24,r10,r11
	r24.u64 = ctx.r10.u64 + r11.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// bl 0x82271980
	sub_82271980(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82271cb8
	sub_82271CB8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// bne cr6,0x82271ff4
	if (!cr6.eq) goto loc_82271FF4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82271fec
	if (cr6.eq) goto loc_82271FEC;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_82271FEC:
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// b 0x82272010
	goto loc_82272010;
loc_82271FF4:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82271c68
	sub_82271C68(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82272010:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82272034
	if (!cr0.eq) goto loc_82272034;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82271cb8
	sub_82271CB8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82272034:
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
	// b 0x8227207c
	goto loc_8227207C;
loc_8227205C:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
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
loc_8227207C:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8227205c
	if (!cr0.eq) goto loc_8227205C;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
	// mulli r3,r11,48
	ctx.r3.s64 = r11.s64 * 48;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// stw r26,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r26.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// mulli r11,r24,48
	r11.s64 = r24.s64 * 48;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_82271F38"))) PPC_WEAK_FUNC(sub_82271F38);
PPC_FUNC_IMPL(__imp__sub_82271F38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bce0
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r22,48
	r22.s64 = 48;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r28,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r28.u32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r31,244
	ctx.r10.s64 = r31.s64 + 244;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x82271f90
	if (cr6.lt) goto loc_82271F90;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_82271F90:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// add r24,r10,r11
	r24.u64 = ctx.r10.u64 + r11.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// bl 0x82271980
	sub_82271980(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82271cb8
	sub_82271CB8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// bne cr6,0x82271ff4
	if (!cr6.eq) goto loc_82271FF4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82271fec
	if (cr6.eq) goto loc_82271FEC;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_82271FEC:
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// b 0x82272010
	goto loc_82272010;
loc_82271FF4:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82271c68
	sub_82271C68(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82272010:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82272034
	if (!cr0.eq) goto loc_82272034;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82271cb8
	sub_82271CB8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82272034:
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
	// b 0x8227207c
	goto loc_8227207C;
loc_8227205C:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
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
loc_8227207C:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8227205c
	if (!cr0.eq) goto loc_8227205C;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
	// mulli r3,r11,48
	ctx.r3.s64 = r11.s64 * 48;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// stw r26,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r26.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// mulli r11,r24,48
	r11.s64 = r24.s64 * 48;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_822720BC"))) PPC_WEAK_FUNC(sub_822720BC);
PPC_FUNC_IMPL(__imp__sub_822720BC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r16,19700(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19700);
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
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
	// mulli r3,r11,48
	ctx.r3.s64 = r11.s64 * 48;
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
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82272144
	if (cr6.eq) goto loc_82272144;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,48
	ctx.r8.s64 = 48;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x82272130
	if (cr6.lt) goto loc_82272130;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82271d68
	sub_82271D68(ctx, base);
	// b 0x82272144
	goto loc_82272144;
loc_82272130:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x82271f38
	sub_82271F38(ctx, base);
loc_82272144:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822720C4"))) PPC_WEAK_FUNC(sub_822720C4);
PPC_FUNC_IMPL(__imp__sub_822720C4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mulli r3,r11,48
	ctx.r3.s64 = r11.s64 * 48;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_822720F0"))) PPC_WEAK_FUNC(sub_822720F0);
PPC_FUNC_IMPL(__imp__sub_822720F0) {
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
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82272144
	if (cr6.eq) goto loc_82272144;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,48
	ctx.r8.s64 = 48;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x82272130
	if (cr6.lt) goto loc_82272130;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82271d68
	sub_82271D68(ctx, base);
	// b 0x82272144
	goto loc_82272144;
loc_82272130:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x82271f38
	sub_82271F38(ctx, base);
loc_82272144:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82272154"))) PPC_WEAK_FUNC(sub_82272154);
PPC_FUNC_IMPL(__imp__sub_82272154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82272158"))) PPC_WEAK_FUNC(sub_82272158);
PPC_FUNC_IMPL(__imp__sub_82272158) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,48
	ctx.r8.s64 = 48;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r7,r7,r8
	ctx.r7.s32 = ctx.r7.s32 / ctx.r8.s32;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x822721a8
	if (!cr6.lt) goto loc_822721A8;
	// mulli r11,r11,48
	r11.s64 = r11.s64 * 48;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x822721bc
	if (cr6.eq) goto loc_822721BC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x82271d08
	sub_82271D08(ctx, base);
	// b 0x822721bc
	goto loc_822721BC;
loc_822721A8:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x822720f0
	sub_822720F0(ctx, base);
loc_822721BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822721CC"))) PPC_WEAK_FUNC(sub_822721CC);
PPC_FUNC_IMPL(__imp__sub_822721CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822721D0"))) PPC_WEAK_FUNC(sub_822721D0);
PPC_FUNC_IMPL(__imp__sub_822721D0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,18816
	ctx.r3.s64 = r11.s64 + 18816;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// lwz r10,18972(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18972);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// bl 0x82272158
	sub_82272158(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82272234"))) PPC_WEAK_FUNC(sub_82272234);
PPC_FUNC_IMPL(__imp__sub_82272234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82272238"))) PPC_WEAK_FUNC(sub_82272238);
PPC_FUNC_IMPL(__imp__sub_82272238) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,19848(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19848);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,19820
	ctx.r4.s64 = r11.s64 + 19820;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32217
	r11.s64 = -2111373312;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,6704
	ctx.r4.s64 = r11.s64 + 6704;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,19808
	ctx.r4.s64 = r11.s64 + 19808;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32217
	r11.s64 = -2111373312;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,6848
	ctx.r4.s64 = r11.s64 + 6848;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,19792
	ctx.r4.s64 = r11.s64 + 19792;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32217
	r11.s64 = -2111373312;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,7176
	ctx.r4.s64 = r11.s64 + 7176;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,19784
	ctx.r4.s64 = r11.s64 + 19784;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82272304
	if (!cr6.gt) goto loc_82272304;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// addi r11,r10,12
	r11.s64 = ctx.r10.s64 + 12;
loc_822722E8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x822722f8
	if (!cr6.eq) goto loc_822722F8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_822722F8:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne 0x822722e8
	if (!cr0.eq) goto loc_822722E8;
loc_82272304:
	// bl 0x822721d0
	sub_822721D0(ctx, base);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,18832(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18832);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r25,r9,18828
	r25.s64 = ctx.r9.s64 + 18828;
	// bne 0x82272338
	if (!cr0.eq) goto loc_82272338;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,18832(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18832, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,19776
	ctx.r4.s64 = r11.s64 + 19776;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82272338:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// li r24,1
	r24.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82272400
	if (!cr6.gt) goto loc_82272400;
	// li r29,0
	r29.s64 = 0;
	// li r27,8
	r27.s64 = 8;
	// lis r26,-32136
	r26.s64 = -2106064896;
loc_82272354:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x82272390
	if (!cr6.eq) goto loc_82272390;
	// lwz r11,18816(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 18816);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// add r28,r29,r11
	r28.u64 = r29.u64 + r11.u64;
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,32(r28)
	PPC_STORE_U32(r28.u32 + 32, r11.u32);
	// b 0x822723ec
	goto loc_822723EC;
loc_82272390:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822723ec
	if (cr0.eq) goto loc_822723EC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,18816(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 18816);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// stfs f1,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
loc_822723EC:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// blt cr6,0x82272354
	if (cr6.lt) goto loc_82272354;
loc_82272400:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82272240"))) PPC_WEAK_FUNC(sub_82272240);
PPC_FUNC_IMPL(__imp__sub_82272240) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,19820
	ctx.r4.s64 = r11.s64 + 19820;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32217
	r11.s64 = -2111373312;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,6704
	ctx.r4.s64 = r11.s64 + 6704;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,19808
	ctx.r4.s64 = r11.s64 + 19808;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32217
	r11.s64 = -2111373312;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,6848
	ctx.r4.s64 = r11.s64 + 6848;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,19792
	ctx.r4.s64 = r11.s64 + 19792;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32217
	r11.s64 = -2111373312;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,7176
	ctx.r4.s64 = r11.s64 + 7176;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,19784
	ctx.r4.s64 = r11.s64 + 19784;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82272304
	if (!cr6.gt) goto loc_82272304;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// addi r11,r10,12
	r11.s64 = ctx.r10.s64 + 12;
loc_822722E8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x822722f8
	if (!cr6.eq) goto loc_822722F8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_822722F8:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne 0x822722e8
	if (!cr0.eq) goto loc_822722E8;
loc_82272304:
	// bl 0x822721d0
	sub_822721D0(ctx, base);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,18832(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18832);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r25,r9,18828
	r25.s64 = ctx.r9.s64 + 18828;
	// bne 0x82272338
	if (!cr0.eq) goto loc_82272338;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,18832(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18832, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,19776
	ctx.r4.s64 = r11.s64 + 19776;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82272338:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// li r24,1
	r24.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82272400
	if (!cr6.gt) goto loc_82272400;
	// li r29,0
	r29.s64 = 0;
	// li r27,8
	r27.s64 = 8;
	// lis r26,-32136
	r26.s64 = -2106064896;
loc_82272354:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x82272390
	if (!cr6.eq) goto loc_82272390;
	// lwz r11,18816(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 18816);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// add r28,r29,r11
	r28.u64 = r29.u64 + r11.u64;
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,32(r28)
	PPC_STORE_U32(r28.u32 + 32, r11.u32);
	// b 0x822723ec
	goto loc_822723EC;
loc_82272390:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822723ec
	if (cr0.eq) goto loc_822723EC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,18816(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 18816);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// stfs f1,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
loc_822723EC:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// blt cr6,0x82272354
	if (cr6.lt) goto loc_82272354;
loc_82272400:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82272408"))) PPC_WEAK_FUNC(sub_82272408);
PPC_FUNC_IMPL(__imp__sub_82272408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,18832
	r11.s64 = r11.s64 + 18832;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,18832
	ctx.r10.s64 = ctx.r10.s64 + 18832;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82272430"))) PPC_WEAK_FUNC(sub_82272430);
PPC_FUNC_IMPL(__imp__sub_82272430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lbz r10,15(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 15);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82272448
	if (cr0.eq) goto loc_82272448;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82272448:
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// stw r4,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82272454"))) PPC_WEAK_FUNC(sub_82272454);
PPC_FUNC_IMPL(__imp__sub_82272454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82272458"))) PPC_WEAK_FUNC(sub_82272458);
PPC_FUNC_IMPL(__imp__sub_82272458) {
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
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8227248c
	if (cr0.eq) goto loc_8227248C;
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
loc_8227248C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
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

__attribute__((alias("__imp__sub_822724A8"))) PPC_WEAK_FUNC(sub_822724A8);
PPC_FUNC_IMPL(__imp__sub_822724A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822724ec
	if (!cr0.eq) goto loc_822724EC;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,19968
	r11.s64 = r11.s64 + 19968;
loc_822724BC:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x822724bc
	if (!cr6.eq) goto loc_822724BC;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
loc_822724D0:
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
	// bne 0x822724d0
	if (!cr0.eq) goto loc_822724D0;
	// b 0x82272520
	goto loc_82272520;
loc_822724EC:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,19944
	r11.s64 = r11.s64 + 19944;
loc_822724F4:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x822724f4
	if (!cr6.eq) goto loc_822724F4;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
loc_82272508:
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
	// bne 0x82272508
	if (!cr0.eq) goto loc_82272508;
loc_82272520:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8227c418
	sub_8227C418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82272528"))) PPC_WEAK_FUNC(sub_82272528);
PPC_FUNC_IMPL(__imp__sub_82272528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r16,20016(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20016);
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8227256c
	if (cr0.eq) goto loc_8227256C;
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
loc_8227256C:
	// li r27,0
	r27.s64 = 0;
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r27,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r27.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82272598
	if (cr0.eq) goto loc_82272598;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823586c0
	sub_823586C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8227259c
	goto loc_8227259C;
loc_82272598:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_8227259C:
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// stb r28,24(r30)
	PPC_STORE_U8(r30.u32 + 24, r28.u8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822725e4
	if (cr0.eq) goto loc_822725E4;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822725e0
	if (cr0.eq) goto loc_822725E0;
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
loc_822725E0:
	// stw r27,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r27.u32);
loc_822725E4:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82272530"))) PPC_WEAK_FUNC(sub_82272530);
PPC_FUNC_IMPL(__imp__sub_82272530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8227256c
	if (cr0.eq) goto loc_8227256C;
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
loc_8227256C:
	// li r27,0
	r27.s64 = 0;
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r27,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r27.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82272598
	if (cr0.eq) goto loc_82272598;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823586c0
	sub_823586C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8227259c
	goto loc_8227259C;
loc_82272598:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_8227259C:
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// stb r28,24(r30)
	PPC_STORE_U8(r30.u32 + 24, r28.u8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822725e4
	if (cr0.eq) goto loc_822725E4;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822725e0
	if (cr0.eq) goto loc_822725E0;
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
loc_822725E0:
	// stw r27,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r27.u32);
loc_822725E4:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822725EC"))) PPC_WEAK_FUNC(sub_822725EC);
PPC_FUNC_IMPL(__imp__sub_822725EC) {
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

__attribute__((alias("__imp__sub_82272614"))) PPC_WEAK_FUNC(sub_82272614);
PPC_FUNC_IMPL(__imp__sub_82272614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82272618"))) PPC_WEAK_FUNC(sub_82272618);
PPC_FUNC_IMPL(__imp__sub_82272618) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,20096
	ctx.r3.s64 = r11.s64 + 20096;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82358018
	sub_82358018(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r30,r11,20092
	r30.s64 = r11.s64 + 20092;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r10,14(r31)
	PPC_STORE_U8(r31.u32 + 14, ctx.r10.u8);
	// bl 0x82358080
	sub_82358080(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82272670
	if (cr0.eq) goto loc_82272670;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82272530
	sub_82272530(ctx, base);
loc_82272670:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,20080
	ctx.r3.s64 = r11.s64 + 20080;
	// bl 0x82358018
	sub_82358018(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822726a0
	if (cr0.eq) goto loc_822726A0;
	// lbz r11,15(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 15);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82272698
	if (!cr0.eq) goto loc_82272698;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
loc_82272698:
	// li r11,1
	r11.s64 = 1;
	// stb r11,15(r31)
	PPC_STORE_U8(r31.u32 + 15, r11.u8);
loc_822726A0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82358080
	sub_82358080(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x822726c0
	if (cr0.eq) goto loc_822726C0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82272530
	sub_82272530(ctx, base);
loc_822726C0:
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

__attribute__((alias("__imp__sub_822726D8"))) PPC_WEAK_FUNC(sub_822726D8);
PPC_FUNC_IMPL(__imp__sub_822726D8) {
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

__attribute__((alias("__imp__sub_8227272C"))) PPC_WEAK_FUNC(sub_8227272C);
PPC_FUNC_IMPL(__imp__sub_8227272C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82272730"))) PPC_WEAK_FUNC(sub_82272730);
PPC_FUNC_IMPL(__imp__sub_82272730) {
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
	// b 0x82272760
	goto loc_82272760;
loc_82272750:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82272760:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82272750
	if (!cr6.eq) goto loc_82272750;
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

__attribute__((alias("__imp__sub_82272788"))) PPC_WEAK_FUNC(sub_82272788);
PPC_FUNC_IMPL(__imp__sub_82272788) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// addi r31,r29,36
	r31.s64 = r29.s64 + 36;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stb r11,13(r29)
	PPC_STORE_U8(r29.u32 + 13, r11.u8);
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x822727c0
	goto loc_822727C0;
loc_822727B0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_822727C0:
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
	// bne 0x822727b0
	if (!cr0.eq) goto loc_822727B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82272730
	sub_82272730(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82272458
	sub_82272458(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,20104
	ctx.r4.s64 = r11.s64 + 20104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239e3c0
	sub_8239E3C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b54a0
	sub_823B54A0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x823b5498
	sub_823B5498(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8239f2a0
	sub_8239F2A0(ctx, base);
}

__attribute__((alias("__imp__sub_82272814"))) PPC_WEAK_FUNC(sub_82272814);
PPC_FUNC_IMPL(__imp__sub_82272814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82272818"))) PPC_WEAK_FUNC(sub_82272818);
PPC_FUNC_IMPL(__imp__sub_82272818) {
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
	// b 0x82272868
	goto loc_82272868;
loc_82272838:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82272860
	if (!cr6.eq) goto loc_82272860;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822726d8
	sub_822726D8(ctx, base);
loc_82272860:
	// subf r10,r30,r31
	ctx.r10.s64 = r31.s64 - r30.s64;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82272868:
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82272838
	if (!cr0.eq) goto loc_82272838;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82272884"))) PPC_WEAK_FUNC(sub_82272884);
PPC_FUNC_IMPL(__imp__sub_82272884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82272888"))) PPC_WEAK_FUNC(sub_82272888);
PPC_FUNC_IMPL(__imp__sub_82272888) {
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
	// lbz r11,13(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822728b0
	if (!cr0.eq) goto loc_822728B0;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// bl 0x82272818
	sub_82272818(ctx, base);
loc_822728B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822728C0"))) PPC_WEAK_FUNC(sub_822728C0);
PPC_FUNC_IMPL(__imp__sub_822728C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82272730
	sub_82272730(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822728C4"))) PPC_WEAK_FUNC(sub_822728C4);
PPC_FUNC_IMPL(__imp__sub_822728C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822728C8"))) PPC_WEAK_FUNC(sub_822728C8);
PPC_FUNC_IMPL(__imp__sub_822728C8) {
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
	// lwz r16,20160(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20160);
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
	// addi r11,r11,20136
	r11.s64 = r11.s64 + 20136;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82272458
	sub_82272458(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x82272730
	sub_82272730(ctx, base);
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

__attribute__((alias("__imp__sub_822728D0"))) PPC_WEAK_FUNC(sub_822728D0);
PPC_FUNC_IMPL(__imp__sub_822728D0) {
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
	// addi r11,r11,20136
	r11.s64 = r11.s64 + 20136;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82272458
	sub_82272458(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x82272730
	sub_82272730(ctx, base);
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

__attribute__((alias("__imp__sub_8227292C"))) PPC_WEAK_FUNC(sub_8227292C);
PPC_FUNC_IMPL(__imp__sub_8227292C) {
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

__attribute__((alias("__imp__sub_82272954"))) PPC_WEAK_FUNC(sub_82272954);
PPC_FUNC_IMPL(__imp__sub_82272954) {
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
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// bl 0x822728c0
	sub_822728C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82272980"))) PPC_WEAK_FUNC(sub_82272980);
PPC_FUNC_IMPL(__imp__sub_82272980) {
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
	// bl 0x822728d0
	sub_822728D0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822729b0
	if (cr0.eq) goto loc_822729B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822729B0:
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

__attribute__((alias("__imp__sub_822729CC"))) PPC_WEAK_FUNC(sub_822729CC);
PPC_FUNC_IMPL(__imp__sub_822729CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822729D0"))) PPC_WEAK_FUNC(sub_822729D0);
PPC_FUNC_IMPL(__imp__sub_822729D0) {
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
	// lwz r16,20240(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20240);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,18992(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18992);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,18988
	r30.s64 = ctx.r9.s64 + 18988;
	// bne 0x82272a1c
	if (!cr0.eq) goto loc_82272A1C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,18992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18992, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,20216
	ctx.r4.s64 = r11.s64 + 20216;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82272A1C:
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

__attribute__((alias("__imp__sub_822729D8"))) PPC_WEAK_FUNC(sub_822729D8);
PPC_FUNC_IMPL(__imp__sub_822729D8) {
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
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,18992(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18992);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,18988
	r30.s64 = ctx.r9.s64 + 18988;
	// bne 0x82272a1c
	if (!cr0.eq) goto loc_82272A1C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,18992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18992, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,20216
	ctx.r4.s64 = r11.s64 + 20216;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82272A1C:
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

__attribute__((alias("__imp__sub_82272A30"))) PPC_WEAK_FUNC(sub_82272A30);
PPC_FUNC_IMPL(__imp__sub_82272A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,18992
	r11.s64 = r11.s64 + 18992;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,18992
	ctx.r10.s64 = ctx.r10.s64 + 18992;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82272A58"))) PPC_WEAK_FUNC(sub_82272A58);
PPC_FUNC_IMPL(__imp__sub_82272A58) {
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
	// lwz r16,20312(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20312);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,19000(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19000);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,18996
	r30.s64 = ctx.r9.s64 + 18996;
	// bne 0x82272aa4
	if (!cr0.eq) goto loc_82272AA4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,19000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19000, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,20288
	ctx.r4.s64 = r11.s64 + 20288;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82272AA4:
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

__attribute__((alias("__imp__sub_82272A60"))) PPC_WEAK_FUNC(sub_82272A60);
PPC_FUNC_IMPL(__imp__sub_82272A60) {
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
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,19000(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19000);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,18996
	r30.s64 = ctx.r9.s64 + 18996;
	// bne 0x82272aa4
	if (!cr0.eq) goto loc_82272AA4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,19000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19000, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,20288
	ctx.r4.s64 = r11.s64 + 20288;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82272AA4:
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

__attribute__((alias("__imp__sub_82272AB8"))) PPC_WEAK_FUNC(sub_82272AB8);
PPC_FUNC_IMPL(__imp__sub_82272AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,19000
	r11.s64 = r11.s64 + 19000;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,19000
	ctx.r10.s64 = ctx.r10.s64 + 19000;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82272AE0"))) PPC_WEAK_FUNC(sub_82272AE0);
PPC_FUNC_IMPL(__imp__sub_82272AE0) {
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
	// lwz r16,20384(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20384);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,19008(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19008);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,19004
	r30.s64 = ctx.r9.s64 + 19004;
	// bne 0x82272b2c
	if (!cr0.eq) goto loc_82272B2C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,19008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19008, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,20360
	ctx.r4.s64 = r11.s64 + 20360;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82272B2C:
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

__attribute__((alias("__imp__sub_82272AE8"))) PPC_WEAK_FUNC(sub_82272AE8);
PPC_FUNC_IMPL(__imp__sub_82272AE8) {
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
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,19008(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19008);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,19004
	r30.s64 = ctx.r9.s64 + 19004;
	// bne 0x82272b2c
	if (!cr0.eq) goto loc_82272B2C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,19008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19008, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,20360
	ctx.r4.s64 = r11.s64 + 20360;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82272B2C:
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

__attribute__((alias("__imp__sub_82272B40"))) PPC_WEAK_FUNC(sub_82272B40);
PPC_FUNC_IMPL(__imp__sub_82272B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,19008
	r11.s64 = r11.s64 + 19008;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,19008
	ctx.r10.s64 = ctx.r10.s64 + 19008;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

