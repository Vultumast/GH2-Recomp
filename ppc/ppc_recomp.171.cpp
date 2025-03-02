#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8268C7C0"))) PPC_WEAK_FUNC(sub_8268C7C0);
PPC_FUNC_IMPL(__imp__sub_8268C7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r10,r11,24720
	ctx.r10.s64 = r11.s64 + 24720;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268C7E8"))) PPC_WEAK_FUNC(sub_8268C7E8);
PPC_FUNC_IMPL(__imp__sub_8268C7E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,-31360(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31360);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fdiv f7,f0,f13
	ctx.f7.f64 = f0.f64 / ctx.f13.f64;
	// subf r11,r11,r6
	r11.s64 = ctx.r6.s64 - r11.s64;
	// rlwinm. r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268c8e4
	if (cr0.eq) goto loc_8268C8E4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r8,r5,16
	ctx.r8.s64 = ctx.r5.s64 + 16;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f8,-31368(r11)
	ctx.f8.u64 = PPC_LOAD_U64(r11.u32 + -31368);
loc_8268C828:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fmr f9,f8
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f8.f64;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268c8bc
	if (cr0.eq) goto loc_8268C8BC;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8268C854:
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	f0.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f6,-8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * f0.f64));
	// fmuls f0,f5,f0
	f0.f64 = double(float(ctx.f5.f64 * f0.f64));
	// lfs f13,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f4,-16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// lfs f30,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f30.f64 = double(temp.f32);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// fmadds f6,f4,f13,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f0,f3,f13,f0
	f0.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + f0.f64));
	// fmadds f13,f2,f12,f6
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f0,f1,f12,f0
	f0.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + f0.f64));
	// fmadds f13,f11,f31,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * f31.f64 + ctx.f13.f64));
	// fmadds f0,f30,f11,f0
	f0.f64 = double(float(f30.f64 * ctx.f11.f64 + f0.f64));
	// fadd f10,f13,f10
	ctx.f10.f64 = ctx.f13.f64 + ctx.f10.f64;
	// fadd f9,f0,f9
	ctx.f9.f64 = f0.f64 + ctx.f9.f64;
	// bne 0x8268c854
	if (!cr0.eq) goto loc_8268C854;
loc_8268C8BC:
	// fmul f0,f10,f7
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f10.f64 * ctx.f7.f64;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// fmul f13,f9,f7
	ctx.f13.f64 = ctx.f9.f64 * ctx.f7.f64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// frsp f0,f13
	f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,4(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// bne 0x8268c828
	if (!cr0.eq) goto loc_8268C828;
loc_8268C8E4:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r3,r11,r6
	ctx.r3.s64 = ctx.r6.s64 - r11.s64;
	// lfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268C8F8"))) PPC_WEAK_FUNC(sub_8268C8F8);
PPC_FUNC_IMPL(__imp__sub_8268C8F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lfd f0,-31360(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31360);
	// lwz r11,8(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lfs f13,20(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fdiv f12,f0,f13
	ctx.f12.f64 = f0.f64 / ctx.f13.f64;
	// subf. r3,r11,r6
	ctx.r3.s64 = ctx.r6.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lfd f13,-31368(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -31368);
loc_8268C924:
	// lwz r11,8(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f13.f64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268c994
	if (cr0.eq) goto loc_8268C994;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// lwz r9,24(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// addi r11,r5,12
	r11.s64 = ctx.r5.s64 + 12;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
loc_8268C950:
	// lfs f10,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lfs f11,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f9,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,-12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f8,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lfs f5,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fmadds f11,f10,f9,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f11,f8,f7,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f11.f64));
	// fmadds f11,f6,f5,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f11.f64));
	// fadd f0,f11,f0
	f0.f64 = ctx.f11.f64 + f0.f64;
	// bne 0x8268c950
	if (!cr0.eq) goto loc_8268C950;
loc_8268C994:
	// fmul f0,f0,f12
	ctx.fpscr.disableFlushMode();
	f0.f64 = f0.f64 * ctx.f12.f64;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x8268c924
	if (!cr0.eq) goto loc_8268C924;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268C9B4"))) PPC_WEAK_FUNC(sub_8268C9B4);
PPC_FUNC_IMPL(__imp__sub_8268C9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268C9B8"))) PPC_WEAK_FUNC(sub_8268C9B8);
PPC_FUNC_IMPL(__imp__sub_8268C9B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// bge cr6,0x8268c9cc
	if (!cr6.lt) goto loc_8268C9CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8268C9CC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// bne cr6,0x8268c9e4
	if (!cr6.eq) goto loc_8268C9E4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_8268C9E4:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8268C9F0"))) PPC_WEAK_FUNC(sub_8268C9F0);
PPC_FUNC_IMPL(__imp__sub_8268C9F0) {
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,24720
	r11.s64 = r11.s64 + 24720;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268ca30
	if (cr0.eq) goto loc_8268CA30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8268CA30:
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

__attribute__((alias("__imp__sub_8268CA4C"))) PPC_WEAK_FUNC(sub_8268CA4C);
PPC_FUNC_IMPL(__imp__sub_8268CA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268CA50"))) PPC_WEAK_FUNC(sub_8268CA50);
PPC_FUNC_IMPL(__imp__sub_8268CA50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// rlwinm r11,r5,29,3,31
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lfs f1,560(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r6.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bl 0x82367d40
	sub_82367D40(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8268cab8
	if (!cr6.gt) goto loc_8268CAB8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8268CAB8:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
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

__attribute__((alias("__imp__sub_8268CAE8"))) PPC_WEAK_FUNC(sub_8268CAE8);
PPC_FUNC_IMPL(__imp__sub_8268CAE8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268cb4c
	if (cr0.eq) goto loc_8268CB4C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r11,28
	ctx.r4.s64 = r11.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r10,28(r31)
	PPC_STORE_U8(r31.u32 + 28, ctx.r10.u8);
	// lfs f0,692(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 692);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f0,696(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 696);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f0,700(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 700);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82269700
	sub_82269700(ctx, base);
	// b 0x8268cb8c
	goto loc_8268CB8C;
loc_8268CB4C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lbz r11,16(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268cb8c
	if (cr0.eq) goto loc_8268CB8C;
	// lfs f3,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lfs f2,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821d7ce8
	sub_821D7CE8(ctx, base);
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
loc_8268CB8C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stb r29,16(r11)
	PPC_STORE_U8(r11.u32 + 16, r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8268CB9C"))) PPC_WEAK_FUNC(sub_8268CB9C);
PPC_FUNC_IMPL(__imp__sub_8268CB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268CBA0"))) PPC_WEAK_FUNC(sub_8268CBA0);
PPC_FUNC_IMPL(__imp__sub_8268CBA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lbz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268CBAC"))) PPC_WEAK_FUNC(sub_8268CBAC);
PPC_FUNC_IMPL(__imp__sub_8268CBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268CBB0"))) PPC_WEAK_FUNC(sub_8268CBB0);
PPC_FUNC_IMPL(__imp__sub_8268CBB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lbz r11,16(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268cbe0
	if (cr0.eq) goto loc_8268CBE0;
	// lbz r11,28(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8268cbd8
	if (!cr0.eq) goto loc_8268CBD8;
	// li r11,1
	r11.s64 = 1;
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r11.u8);
	// blr 
	return;
loc_8268CBD8:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8268cae8
	sub_8268CAE8(ctx, base);
	return;
loc_8268CBE0:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8268cae8
	sub_8268CAE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268CBE8"))) PPC_WEAK_FUNC(sub_8268CBE8);
PPC_FUNC_IMPL(__imp__sub_8268CBE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8239d5dc
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// fmr f27,f5
	f27.f64 = ctx.f5.f64;
	// fmr f26,f6
	f26.f64 = ctx.f6.f64;
	// fmr f25,f7
	f25.f64 = ctx.f7.f64;
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
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x82357598
	sub_82357598(ctx, base);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x82357598
	sub_82357598(ctx, base);
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// bl 0x82357598
	sub_82357598(ctx, base);
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f26.f64;
	// bl 0x82357598
	sub_82357598(ctx, base);
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f25.f64;
	// bl 0x82357598
	sub_82357598(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823571b0
	sub_823571B0(ctx, base);
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8239d628
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268CC80"))) PPC_WEAK_FUNC(sub_8268CC80);
PPC_FUNC_IMPL(__imp__sub_8268CC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r10,r10,24740
	ctx.r10.s64 = ctx.r10.s64 + 24740;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,24744
	ctx.r4.s64 = ctx.r9.s64 + 24744;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stfs f31,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f30,116(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stb r10,28(r31)
	PPC_STORE_U8(r31.u32 + 28, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
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

__attribute__((alias("__imp__sub_8268CD18"))) PPC_WEAK_FUNC(sub_8268CD18);
PPC_FUNC_IMPL(__imp__sub_8268CD18) {
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,24740
	r11.s64 = r11.s64 + 24740;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x8268cd44
	if (cr0.eq) goto loc_8268CD44;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8268CD44:
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

__attribute__((alias("__imp__sub_8268CD5C"))) PPC_WEAK_FUNC(sub_8268CD5C);
PPC_FUNC_IMPL(__imp__sub_8268CD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268CD60"))) PPC_WEAK_FUNC(sub_8268CD60);
PPC_FUNC_IMPL(__imp__sub_8268CD60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x8239bcfc
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8239d5e4
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lbz r11,16(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268d014
	if (cr0.eq) goto loc_8268D014;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x823118e0
	sub_823118E0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lfs f0,17324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// fmuls f28,f1,f0
	f28.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bl 0x8227c4a8
	sub_8227C4A8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8268d014
	if (cr0.eq) goto loc_8268D014;
	// lbz r11,28(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f27,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f27.f64 = double(temp.f32);
	// beq 0x8268cdc8
	if (cr0.eq) goto loc_8268CDC8;
	// fmr f28,f27
	f28.f64 = f27.f64;
loc_8268CDC8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lfs f30,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f30.f64 = double(temp.f32);
	// lfs f29,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f29.f64 = double(temp.f32);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8268cde8
	if (cr6.eq) goto loc_8268CDE8;
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
	// b 0x8268cdf0
	goto loc_8268CDF0;
loc_8268CDE8:
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8268CDF0:
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 112);
	f0.f64 = double(temp.f32);
	// fmuls f31,f0,f28
	f31.f64 = double(float(f0.f64 * f28.f64));
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f30
	f0.u64 = f30.u64 & ~0x8000000000000000;
	// stfs f27,12(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 + ctx.f13.f64));
	// bl 0x82161c70
	sub_82161C70(ctx, base);
	// fabs f0,f29
	ctx.fpscr.disableFlushMode();
	f0.u64 = f29.u64 & ~0x8000000000000000;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// stfs f1,16(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fmadds f1,f0,f29,f13
	ctx.f1.f64 = double(float(f0.f64 * f29.f64 + ctx.f13.f64));
	// bl 0x82161c70
	sub_82161C70(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82269fc0
	sub_82269FC0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	f0.f64 = double(temp.f32);
	// fmuls f12,f0,f28
	ctx.f12.f64 = double(float(f0.f64 * f28.f64));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268ce70
	if (cr0.eq) goto loc_8268CE70;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,24112(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24112);
	f0.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
loc_8268CE70:
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f8,f0,f0
	ctx.f8.f64 = double(float(f0.f64 * f0.f64));
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f13,f13
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// fabs f8,f8
	ctx.f8.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fabs f7,f7
	ctx.f7.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fmuls f0,f8,f0
	f0.f64 = double(float(ctx.f8.f64 * f0.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f8,f0,f12
	ctx.f8.f64 = double(float(f0.f64 * ctx.f12.f64));
	// lfs f0,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f12,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f8,f0
	f0.f64 = double(float(ctx.f8.f64 * f0.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmadds f12,f11,f0,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f12.f64));
	// lfs f11,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f11,f10,f0,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * f0.f64 + ctx.f11.f64));
	// lfs f10,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f9,f0,f10
	f0.f64 = double(float(ctx.f9.f64 * f0.f64 + ctx.f10.f64));
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f11,164(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268cef4
	if (cr0.eq) goto loc_8268CEF4;
	// lfs f10,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// b 0x8268cf00
	goto loc_8268CF00;
loc_8268CEF4:
	// lfs f10,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
loc_8268CF00:
	// fmadds f12,f10,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmadds f0,f8,f13,f0
	f0.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + f0.f64));
	// stfs f0,168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmadds f12,f9,f13,f11
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lfs f31,700(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 700);
	f31.f64 = double(temp.f32);
	// rlwinm. r10,r11,20,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8268cf34
	if (!cr0.eq) goto loc_8268CF34;
	// rlwinm. r11,r11,18,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268cf60
	if (cr0.eq) goto loc_8268CF60;
loc_8268CF34:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	f0.f64 = double(temp.f32);
	// beq cr6,0x8268cf4c
	if (cr6.eq) goto loc_8268CF4C;
	// fadds f31,f31,f0
	f31.f64 = double(float(f31.f64 + f0.f64));
	// b 0x8268cf50
	goto loc_8268CF50;
loc_8268CF4C:
	// fsubs f31,f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 - f0.f64));
loc_8268CF50:
	// lfs f2,696(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 696);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lfs f1,692(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821d7ce8
	sub_821D7CE8(ctx, base);
loc_8268CF60:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,24744
	ctx.r4.s64 = r11.s64 + 24744;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e04b8
	sub_821E04B8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268d014
	if (cr0.eq) goto loc_8268D014;
	// bl 0x821e0538
	sub_821E0538(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82269700
	sub_82269700(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r11,24756
	ctx.r3.s64 = r11.s64 + 24756;
	// lfs f3,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f2,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,-12484(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12484);
	f0.f64 = double(temp.f32);
	// fmuls f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f7,f31,f0
	ctx.f7.f64 = double(float(f31.f64 * f0.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8268cbe8
	sub_8268CBE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268D014:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8239d630
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8268D024"))) PPC_WEAK_FUNC(sub_8268D024);
PPC_FUNC_IMPL(__imp__sub_8268D024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268D028"))) PPC_WEAK_FUNC(sub_8268D028);
PPC_FUNC_IMPL(__imp__sub_8268D028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32137
	r11.s64 = -2106130432;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,7672
	r11.s64 = r11.s64 + 7672;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268D03C"))) PPC_WEAK_FUNC(sub_8268D03C);
PPC_FUNC_IMPL(__imp__sub_8268D03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268D040"))) PPC_WEAK_FUNC(sub_8268D040);
PPC_FUNC_IMPL(__imp__sub_8268D040) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// bl 0x82357718
	sub_82357718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82357518
	sub_82357518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82357518
	sub_82357518(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82357340
	sub_82357340(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82357518
	sub_82357518(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823573c0
	sub_823573C0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82357518
	sub_82357518(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82357698
	sub_82357698(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823571b0
	sub_823571B0(ctx, base);
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8268D0C0"))) PPC_WEAK_FUNC(sub_8268D0C0);
PPC_FUNC_IMPL(__imp__sub_8268D0C0) {
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
	// beq 0x8268d100
	if (cr0.eq) goto loc_8268D100;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r3,r11,7720
	ctx.r3.s64 = r11.s64 + 7720;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8268d108
	goto loc_8268D108;
loc_8268D100:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_8268D108:
	// rlwinm r3,r31,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
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

__attribute__((alias("__imp__sub_8268D124"))) PPC_WEAK_FUNC(sub_8268D124);
PPC_FUNC_IMPL(__imp__sub_8268D124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268D128"))) PPC_WEAK_FUNC(sub_8268D128);
PPC_FUNC_IMPL(__imp__sub_8268D128) {
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
	// lwz r16,24960(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 24960);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r11,8704
	r29.s64 = r11.s64 + 8704;
	// bl 0x82275c38
	sub_82275C38(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82276480
	sub_82276480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r30,96(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82275ef0
	sub_82275EF0(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,24940
	r11.s64 = r11.s64 + 24940;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82276480
	sub_82276480(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
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

__attribute__((alias("__imp__sub_8268D130"))) PPC_WEAK_FUNC(sub_8268D130);
PPC_FUNC_IMPL(__imp__sub_8268D130) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r11,8704
	r29.s64 = r11.s64 + 8704;
	// bl 0x82275c38
	sub_82275C38(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82276480
	sub_82276480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r30,96(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82275ef0
	sub_82275EF0(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,24940
	r11.s64 = r11.s64 + 24940;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82276480
	sub_82276480(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
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

__attribute__((alias("__imp__sub_8268D1A8"))) PPC_WEAK_FUNC(sub_8268D1A8);
PPC_FUNC_IMPL(__imp__sub_8268D1A8) {
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

__attribute__((alias("__imp__sub_8268D1D0"))) PPC_WEAK_FUNC(sub_8268D1D0);
PPC_FUNC_IMPL(__imp__sub_8268D1D0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r11,r11,15600
	r11.s64 = r11.s64 + 15600;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,4314
	r28.s64 = 4314;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x8268d200
	if (cr6.eq) goto loc_8268D200;
	// li r28,0
	r28.s64 = 0;
loc_8268D200:
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268d214
	if (cr0.eq) goto loc_8268D214;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r30,r11,5980
	r30.s64 = r11.s64 + 5980;
	// b 0x8268d21c
	goto loc_8268D21C;
loc_8268D214:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r30,r11,5768
	r30.s64 = r11.s64 + 5768;
loc_8268D21C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82270c20
	sub_82270C20(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82275e20
	sub_82275E20(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82275ef0
	sub_82275EF0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82275d68
	sub_82275D68(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,25024
	r11.s64 = r11.s64 + 25024;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// bl 0x8268d040
	sub_8268D040(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8268D280"))) PPC_WEAK_FUNC(sub_8268D280);
PPC_FUNC_IMPL(__imp__sub_8268D280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r11,-13688(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13688);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// addi r9,r9,-13704
	ctx.r9.s64 = ctx.r9.s64 + -13704;
	// bne 0x8268d2c0
	if (!cr0.eq) goto loc_8268D2C0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13688(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13688, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,0(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f0,4(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f0,8(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
loc_8268D2C0:
	// clrlwi. r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,156(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,31,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x10;
	// xori r11,r11,16
	r11.u64 = r11.u64 ^ 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bne 0x8268d2f8
	if (!cr0.eq) goto loc_8268D2F8;
	// lbz r10,160(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 160);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x8268d2fc
	if (cr0.eq) goto loc_8268D2FC;
loc_8268D2F8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8268D2FC:
	// rlwimi r11,r10,8,23,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x100) | (r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lbz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 64);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8268d31c
	if (cr0.eq) goto loc_8268D31C;
	// clrlwi. r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// beq 0x8268d320
	if (cr0.eq) goto loc_8268D320;
loc_8268D31C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8268D320:
	// rlwimi r11,r10,30,1,1
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x40000000) | (r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// clrlwi. r7,r5,24
	ctx.r7.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bnelr 
	if (!cr0.eq) return;
	// lbz r11,177(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 177);
	// rlwimi r11,r10,0,0,30
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFE) | (r11.u64 & 0xFFFFFFFF00000001);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8268d358
	if (cr0.eq) goto loc_8268D358;
	// lwz r10,208(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 208);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// bne cr6,0x8268d35c
	if (!cr6.eq) goto loc_8268D35C;
loc_8268D358:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8268D35C:
	// rlwimi r11,r10,5,26,26
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0x20) | (r11.u64 & 0xFFFFFFFFFFFFFFDF);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8268d37c
	if (cr0.eq) goto loc_8268D37C;
	// lwz r10,244(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// bne cr6,0x8268d380
	if (!cr6.eq) goto loc_8268D380;
loc_8268D37C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8268D380:
	// rlwimi r11,r10,9,22,22
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 9) & 0x200) | (r11.u64 & 0xFFFFFFFFFFFFFDFF);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8268d3a0
	if (cr0.eq) goto loc_8268D3A0;
	// lwz r10,232(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// bne cr6,0x8268d3a4
	if (!cr6.eq) goto loc_8268D3A4;
loc_8268D3A0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8268D3A4:
	// rlwimi r11,r10,1,30,30
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8268d3f8
	if (!cr0.eq) goto loc_8268D3F8;
	// lfs f13,184(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x8268d3e8
	if (!cr6.eq) goto loc_8268D3E8;
	// lfs f13,188(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x8268d3e8
	if (!cr6.eq) goto loc_8268D3E8;
	// lfs f13,192(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x8268d3ec
	if (cr6.eq) goto loc_8268D3EC;
loc_8268D3E8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8268D3EC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne 0x8268d3fc
	if (!cr0.eq) goto loc_8268D3FC;
loc_8268D3F8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8268D3FC:
	// rlwimi r11,r10,2,29,29
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0x4) | (r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r10,220(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 220);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// rlwimi r11,r10,7,24,24
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0x80) | (r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r10,256(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// rlwimi r11,r10,3,28,28
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0x8) | (r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8268d44c
	if (cr0.eq) goto loc_8268D44C;
	// lbz r10,178(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 178);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// bne 0x8268d450
	if (!cr0.eq) goto loc_8268D450;
loc_8268D44C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8268D450:
	// rlwimi r11,r10,6,25,25
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0x40) | (r11.u64 & 0xFFFFFFFFFFFFFFBF);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r10,76(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x8268d48c
	if (cr6.eq) goto loc_8268D48C;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x8268d484
	if (cr6.eq) goto loc_8268D484;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// beq cr6,0x8268d47c
	if (cr6.eq) goto loc_8268D47C;
	// rlwinm r11,r11,0,22,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF3FF;
	// b 0x8268d490
	goto loc_8268D490;
loc_8268D47C:
	// ori r11,r11,3072
	r11.u64 = r11.u64 | 3072;
	// b 0x8268d490
	goto loc_8268D490;
loc_8268D484:
	// rlwimi r11,r8,11,20,21
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 11) & 0xC00) | (r11.u64 & 0xFFFFFFFFFFFFF3FF);
	// b 0x8268d490
	goto loc_8268D490;
loc_8268D48C:
	// rlwimi r11,r8,10,20,21
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 10) & 0xC00) | (r11.u64 & 0xFFFFFFFFFFFFF3FF);
loc_8268D490:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268D498"))) PPC_WEAK_FUNC(sub_8268D498);
PPC_FUNC_IMPL(__imp__sub_8268D498) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// blt cr6,0x8268d4d0
	if (cr6.lt) goto loc_8268D4D0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8268d4d4
	if (cr6.lt) goto loc_8268D4D4;
loc_8268D4D0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8268D4D4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8268d50c
	if (cr0.eq) goto loc_8268D50C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U64(r26.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// bl 0x8268d498
	sub_8268D498(ctx, base);
	// b 0x8268d604
	goto loc_8268D604;
loc_8268D50C:
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r10,r29,r31
	ctx.r10.s64 = r31.s64 - r29.s64;
	// srawi r28,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	r28.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// ble cr6,0x8268d5a4
	if (!cr6.gt) goto loc_8268D5A4;
	// rlwinm r27,r11,3,0,28
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// subf r28,r27,r31
	r28.s64 = r31.s64 - r27.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8219d0d0
	sub_8219D0D0(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// subf r11,r29,r28
	r11.s64 = r28.s64 - r29.s64;
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8268d574
	if (!cr0.gt) goto loc_8268D574;
loc_8268D554:
	// addi r28,r28,-8
	r28.s64 = r28.s64 + -8;
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// bgt 0x8268d554
	if (cr0.gt) goto loc_8268D554;
loc_8268D574:
	// add r10,r27,r29
	ctx.r10.u64 = r27.u64 + r29.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x8268d604
	if (cr6.eq) goto loc_8268D604;
loc_8268D584:
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8268d584
	if (!cr6.eq) goto loc_8268D584;
	// b 0x8268d604
	goto loc_8268D604;
loc_8268D5A4:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// subf r4,r28,r11
	ctx.r4.s64 = r11.s64 - r28.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823432b8
	sub_823432B8(ctx, base);
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
	// bl 0x8219d0d0
	sub_8219D0D0(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r11,r29
	r11.u64 = r29.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// beq cr6,0x8268d604
	if (cr6.eq) goto loc_8268D604;
loc_8268D5E8:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x8268d5e8
	if (!cr6.eq) goto loc_8268D5E8;
loc_8268D604:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8268D60C"))) PPC_WEAK_FUNC(sub_8268D60C);
PPC_FUNC_IMPL(__imp__sub_8268D60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268D610"))) PPC_WEAK_FUNC(sub_8268D610);
PPC_FUNC_IMPL(__imp__sub_8268D610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// lwz r16,25100(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 25100);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bce8
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r29,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r29.u32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r31,228
	ctx.r10.s64 = r31.s64 + 228;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x8268d66c
	if (cr6.lt) goto loc_8268D66C;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_8268D66C:
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
	// bl 0x8268d0c0
	sub_8268D0C0(ctx, base);
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
	// bl 0x8219d0d0
	sub_8219D0D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// bne cr6,0x8268d6d0
	if (!cr6.eq) goto loc_8268D6D0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8268d6c8
	if (cr6.eq) goto loc_8268D6C8;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_8268D6C8:
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// b 0x8268d6e8
	goto loc_8268D6E8;
loc_8268D6D0:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823432b8
	sub_823432B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8268D6E8:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8268d70c
	if (!cr0.eq) goto loc_8268D70C;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8219d0d0
	sub_8219D0D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8268D70C:
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
	// b 0x8268d754
	goto loc_8268D754;
loc_8268D734:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
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
loc_8268D754:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8268d734
	if (!cr0.eq) goto loc_8268D734;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// rlwinm r11,r25,3,0,28
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8268D618"))) PPC_WEAK_FUNC(sub_8268D618);
PPC_FUNC_IMPL(__imp__sub_8268D618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bce8
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r29,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r29.u32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r31,228
	ctx.r10.s64 = r31.s64 + 228;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x8268d66c
	if (cr6.lt) goto loc_8268D66C;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_8268D66C:
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
	// bl 0x8268d0c0
	sub_8268D0C0(ctx, base);
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
	// bl 0x8219d0d0
	sub_8219D0D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// bne cr6,0x8268d6d0
	if (!cr6.eq) goto loc_8268D6D0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8268d6c8
	if (cr6.eq) goto loc_8268D6C8;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_8268D6C8:
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// b 0x8268d6e8
	goto loc_8268D6E8;
loc_8268D6D0:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823432b8
	sub_823432B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8268D6E8:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8268d70c
	if (!cr0.eq) goto loc_8268D70C;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8219d0d0
	sub_8219D0D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8268D70C:
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
	// b 0x8268d754
	goto loc_8268D754;
loc_8268D734:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
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
loc_8268D754:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8268d734
	if (!cr0.eq) goto loc_8268D734;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// rlwinm r11,r25,3,0,28
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8268D794"))) PPC_WEAK_FUNC(sub_8268D794);
PPC_FUNC_IMPL(__imp__sub_8268D794) {
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
	// lwz r16,25100(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 25100);
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
	// beq cr6,0x8268d818
	if (cr6.eq) goto loc_8268D818;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x8268d804
	if (cr6.lt) goto loc_8268D804;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x8268d498
	sub_8268D498(ctx, base);
	// b 0x8268d818
	goto loc_8268D818;
loc_8268D804:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8268d618
	sub_8268D618(ctx, base);
loc_8268D818:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268D79C"))) PPC_WEAK_FUNC(sub_8268D79C);
PPC_FUNC_IMPL(__imp__sub_8268D79C) {
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

__attribute__((alias("__imp__sub_8268D7C8"))) PPC_WEAK_FUNC(sub_8268D7C8);
PPC_FUNC_IMPL(__imp__sub_8268D7C8) {
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
	// beq cr6,0x8268d818
	if (cr6.eq) goto loc_8268D818;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x8268d804
	if (cr6.lt) goto loc_8268D804;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x8268d498
	sub_8268D498(ctx, base);
	// b 0x8268d818
	goto loc_8268D818;
loc_8268D804:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8268d618
	sub_8268D618(ctx, base);
loc_8268D818:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268D828"))) PPC_WEAK_FUNC(sub_8268D828);
PPC_FUNC_IMPL(__imp__sub_8268D828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// srawi r9,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x8268d88c
	if (!cr6.lt) goto loc_8268D88C;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// subf r9,r11,r11
	ctx.r9.s64 = r11.s64 - r11.s64;
	// srawi. r9,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x8268d884
	if (!cr0.gt) goto loc_8268D884;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_8268D864:
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
	// bgt 0x8268d864
	if (cr0.gt) goto loc_8268D864;
loc_8268D884:
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_8268D88C:
	// subf r5,r9,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r9.s64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x8268d7c8
	sub_8268D7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268D898"))) PPC_WEAK_FUNC(sub_8268D898);
PPC_FUNC_IMPL(__imp__sub_8268D898) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r29,0
	r29.s64 = 0;
	// addi r10,r10,15600
	ctx.r10.s64 = ctx.r10.s64 + 15600;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r29,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r29.u64);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r27,8(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268d828
	sub_8268D828(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r9,r11,25600
	ctx.r9.s64 = r11.s64 + 25600;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r8,r8,25580
	ctx.r8.s64 = ctx.r8.s64 + 25580;
	// addi r11,r11,7752
	r11.s64 = r11.s64 + 7752;
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r7,r7,25560
	ctx.r7.s64 = ctx.r7.s64 + 25560;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r6,25544
	ctx.r6.s64 = ctx.r6.s64 + 25544;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r5,r5,25524
	ctx.r5.s64 = ctx.r5.s64 + 25524;
	// addi r4,r4,25504
	ctx.r4.s64 = ctx.r4.s64 + 25504;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r3,r3,25496
	ctx.r3.s64 = ctx.r3.s64 + 25496;
	// addi r8,r8,25480
	ctx.r8.s64 = ctx.r8.s64 + 25480;
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,29,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x4;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r7,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r7.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r7,r7,25456
	ctx.r7.s64 = ctx.r7.s64 + 25456;
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r6,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r6.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r6,r6,25444
	ctx.r6.s64 = ctx.r6.s64 + 25444;
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,1,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x4;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r5,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r5.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r5,r5,25436
	ctx.r5.s64 = ctx.r5.s64 + 25436;
	// stw r9,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,31,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x4;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r4,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r4.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r4,r4,25424
	ctx.r4.s64 = ctx.r4.s64 + 25424;
	// stw r9,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r8,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r8.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r8,r8,25404
	ctx.r8.s64 = ctx.r8.s64 + 25404;
	// stw r9,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,25,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x4;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r7,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r7.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r7,r7,25392
	ctx.r7.s64 = ctx.r7.s64 + 25392;
	// stw r9,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,2,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x4;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r8,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r8.u32);
	// stw r9,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,28,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x4;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r6,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r6.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r6,r6,25380
	ctx.r6.s64 = ctx.r6.s64 + 25380;
	// stw r9,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,26,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x4;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r5,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r5.u32);
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// addi r5,r5,25488
	ctx.r5.s64 = ctx.r5.s64 + 25488;
	// stw r9,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,4,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x4;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r4,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r4.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r4,r4,25368
	ctx.r4.s64 = ctx.r4.s64 + 25368;
	// stw r9,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,24,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r3,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r3.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r3,r3,25352
	ctx.r3.s64 = ctx.r3.s64 + 25352;
	// stw r9,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r9,20,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x1C;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r9,r9,25340
	ctx.r9.s64 = ctx.r9.s64 + 25340;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// stw r9,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r9.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r8,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r8.u32);
	// addi r9,r9,25328
	ctx.r9.s64 = ctx.r9.s64 + 25328;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r8,17,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0x4;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// stw r7,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r7.u32);
	// stw r8,116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 116, ctx.r8.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r8,6,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// stw r9,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r9.u32);
	// stw r8,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r8.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,22,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0xC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r6,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, ctx.r6.u32);
	// stw r9,132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 132, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,16,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x4;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r5,136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 136, ctx.r5.u32);
	// stw r9,140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 140, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r9,r9,8,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r6,r6,25316
	ctx.r6.s64 = ctx.r6.s64 + 25316;
	// addi r5,r5,25304
	ctx.r5.s64 = ctx.r5.s64 + 25304;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// cmpwi cr6,r28,7
	cr6.compare<int32_t>(r28.s32, 7, xer);
	// stw r4,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r4.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r4,r4,25296
	ctx.r4.s64 = ctx.r4.s64 + 25296;
	// stw r9,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,15,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x4;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r3,152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 152, ctx.r3.u32);
	// stw r9,156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 156, ctx.r9.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r9,r9,25292
	ctx.r9.s64 = ctx.r9.s64 + 25292;
	// rlwinm r7,r8,12,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0x4;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r8,r8,25276
	ctx.r8.s64 = ctx.r8.s64 + 25276;
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// stw r9,160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 160, ctx.r9.u32);
	// stw r7,164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 164, ctx.r7.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,13,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x4;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r8,168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 168, ctx.r8.u32);
	// stw r9,172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 172, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,9,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x4;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r6,176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 176, ctx.r6.u32);
	// stw r9,180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 180, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,20,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x3C;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r5,184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 184, ctx.r5.u32);
	// stw r9,188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 188, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,14,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x4;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r4,192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 192, ctx.r4.u32);
	// stw r9,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r9.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r10,r10,2936
	ctx.r10.s64 = ctx.r10.s64 + 2936;
	// bne cr6,0x8268dc0c
	if (!cr6.eq) goto loc_8268DC0C;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// b 0x8268dc14
	goto loc_8268DC14;
loc_8268DC0C:
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r7,r9,-21448
	ctx.r7.s64 = ctx.r9.s64 + -21448;
loc_8268DC14:
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(r27.s32, 2, xer);
	// addi r8,r8,25264
	ctx.r8.s64 = ctx.r8.s64 + 25264;
	// stw r7,204(r9)
	PPC_STORE_U32(ctx.r9.u32 + 204, ctx.r7.u32);
	// stw r8,200(r9)
	PPC_STORE_U32(ctx.r9.u32 + 200, ctx.r8.u32);
	// bne cr6,0x8268dc3c
	if (!cr6.eq) goto loc_8268DC3C;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r28,r9,19428
	r28.s64 = ctx.r9.s64 + 19428;
	// b 0x8268dc44
	goto loc_8268DC44;
loc_8268DC3C:
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r28,r9,25256
	r28.s64 = ctx.r9.s64 + 25256;
loc_8268DC44:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r8,r8,25244
	ctx.r8.s64 = ctx.r8.s64 + 25244;
	// addi r7,r7,25236
	ctx.r7.s64 = ctx.r7.s64 + 25236;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r28,208(r9)
	PPC_STORE_U32(ctx.r9.u32 + 208, r28.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r10,212(r9)
	PPC_STORE_U32(ctx.r9.u32 + 212, ctx.r10.u32);
	// addi r6,r6,25232
	ctx.r6.s64 = ctx.r6.s64 + 25232;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r5,25216
	ctx.r5.s64 = ctx.r5.s64 + 25216;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// rlwinm r9,r9,1,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x4;
	// addi r4,r4,25200
	ctx.r4.s64 = ctx.r4.s64 + 25200;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r3,r3,25192
	ctx.r3.s64 = ctx.r3.s64 + 25192;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r8,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r8.u32);
	// stw r9,220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 220, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r7,224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 224, ctx.r7.u32);
	// stw r9,228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 228, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,31,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x4;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r6,232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 232, ctx.r6.u32);
	// stw r9,236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 236, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,29,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x4;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r5,240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 240, ctx.r5.u32);
	// stw r9,244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 244, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,28,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x4;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r4,248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 248, ctx.r4.u32);
	// stw r9,252(r10)
	PPC_STORE_U32(ctx.r10.u32 + 252, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r3,256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 256, ctx.r3.u32);
	// stw r9,260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 260, ctx.r9.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r9,r9,25184
	ctx.r9.s64 = ctx.r9.s64 + 25184;
	// rlwinm r7,r8,11,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0x4;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r8,r8,25176
	ctx.r8.s64 = ctx.r8.s64 + 25176;
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// stw r9,264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 264, ctx.r9.u32);
	// stw r7,268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 268, ctx.r7.u32);
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,2,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x4;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r8,272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 272, ctx.r8.u32);
	// stw r11,276(r10)
	PPC_STORE_U32(ctx.r10.u32 + 276, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r29,280(r11)
	PPC_STORE_U32(r11.u32 + 280, r29.u32);
	// stw r29,284(r11)
	PPC_STORE_U32(r11.u32 + 284, r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8268DD64"))) PPC_WEAK_FUNC(sub_8268DD64);
PPC_FUNC_IMPL(__imp__sub_8268DD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268DD68"))) PPC_WEAK_FUNC(sub_8268DD68);
PPC_FUNC_IMPL(__imp__sub_8268DD68) {
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
	// beq 0x8268dda8
	if (cr0.eq) goto loc_8268DDA8;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r3,r11,7824
	ctx.r3.s64 = r11.s64 + 7824;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8268ddb0
	goto loc_8268DDB0;
loc_8268DDA8:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_8268DDB0:
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

__attribute__((alias("__imp__sub_8268DDCC"))) PPC_WEAK_FUNC(sub_8268DDCC);
PPC_FUNC_IMPL(__imp__sub_8268DDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268DDD0"))) PPC_WEAK_FUNC(sub_8268DDD0);
PPC_FUNC_IMPL(__imp__sub_8268DDD0) {
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
	// beq 0x8268de10
	if (cr0.eq) goto loc_8268DE10;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r3,r11,7848
	ctx.r3.s64 = r11.s64 + 7848;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8268de18
	goto loc_8268DE18;
loc_8268DE10:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_8268DE18:
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

__attribute__((alias("__imp__sub_8268DE34"))) PPC_WEAK_FUNC(sub_8268DE34);
PPC_FUNC_IMPL(__imp__sub_8268DE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268DE38"))) PPC_WEAK_FUNC(sub_8268DE38);
PPC_FUNC_IMPL(__imp__sub_8268DE38) {
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
	// beq 0x8268de78
	if (cr0.eq) goto loc_8268DE78;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r3,r11,7880
	ctx.r3.s64 = r11.s64 + 7880;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8268de80
	goto loc_8268DE80;
loc_8268DE78:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_8268DE80:
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

__attribute__((alias("__imp__sub_8268DE9C"))) PPC_WEAK_FUNC(sub_8268DE9C);
PPC_FUNC_IMPL(__imp__sub_8268DE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268DEA0"))) PPC_WEAK_FUNC(sub_8268DEA0);
PPC_FUNC_IMPL(__imp__sub_8268DEA0) {
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
	// beq 0x8268dee0
	if (cr0.eq) goto loc_8268DEE0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r3,r11,7916
	ctx.r3.s64 = r11.s64 + 7916;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8268dee8
	goto loc_8268DEE8;
loc_8268DEE0:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_8268DEE8:
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

__attribute__((alias("__imp__sub_8268DF04"))) PPC_WEAK_FUNC(sub_8268DF04);
PPC_FUNC_IMPL(__imp__sub_8268DF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268DF08"))) PPC_WEAK_FUNC(sub_8268DF08);
PPC_FUNC_IMPL(__imp__sub_8268DF08) {
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
	// beq 0x8268df48
	if (cr0.eq) goto loc_8268DF48;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r3,r11,7952
	ctx.r3.s64 = r11.s64 + 7952;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8268df50
	goto loc_8268DF50;
loc_8268DF48:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_8268DF50:
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

__attribute__((alias("__imp__sub_8268DF6C"))) PPC_WEAK_FUNC(sub_8268DF6C);
PPC_FUNC_IMPL(__imp__sub_8268DF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268DF70"))) PPC_WEAK_FUNC(sub_8268DF70);
PPC_FUNC_IMPL(__imp__sub_8268DF70) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r11,17(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268dff8
	if (cr0.eq) goto loc_8268DFF8;
	// lbz r11,128(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 128);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268dff8
	if (cr0.eq) goto loc_8268DFF8;
	// lwz r31,132(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwz r11,136(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x8268dff8
	if (cr6.eq) goto loc_8268DFF8;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r29,r11,16016
	r29.s64 = r11.s64 + 16016;
loc_8268DFB0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,448(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 448);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8268dfc4
	if (!cr0.eq) goto loc_8268DFC4;
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 88);
loc_8268DFC4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,136(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8268dfb0
	if (!cr6.eq) goto loc_8268DFB0;
loc_8268DFF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8268E000"))) PPC_WEAK_FUNC(sub_8268E000);
PPC_FUNC_IMPL(__imp__sub_8268E000) {
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
	// beq cr6,0x8268e078
	if (cr6.eq) goto loc_8268E078;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r30,r11,920
	r30.s64 = r11.s64 + 920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,3132
	r29.s64 = r11.s64 + 3132;
loc_8268E02C:
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
	// bne 0x8268e0d0
	if (!cr0.eq) goto loc_8268E0D0;
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
	// bne cr6,0x8268e02c
	if (!cr6.eq) goto loc_8268E02C;
loc_8268E078:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268e0c8
	if (cr0.eq) goto loc_8268E0C8;
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
	// beq 0x8268e0c8
	if (cr0.eq) goto loc_8268E0C8;
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
	// bl 0x8268e000
	sub_8268E000(ctx, base);
	// b 0x8268e0d0
	goto loc_8268E0D0;
loc_8268E0C8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_8268E0D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8268E0D8"))) PPC_WEAK_FUNC(sub_8268E0D8);
PPC_FUNC_IMPL(__imp__sub_8268E0D8) {
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
	// beq cr6,0x8268e150
	if (cr6.eq) goto loc_8268E150;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r30,r11,920
	r30.s64 = r11.s64 + 920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,2744
	r29.s64 = r11.s64 + 2744;
loc_8268E104:
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
	// bne 0x8268e1a8
	if (!cr0.eq) goto loc_8268E1A8;
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
	// bne cr6,0x8268e104
	if (!cr6.eq) goto loc_8268E104;
loc_8268E150:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268e1a0
	if (cr0.eq) goto loc_8268E1A0;
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
	// beq 0x8268e1a0
	if (cr0.eq) goto loc_8268E1A0;
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
	// bl 0x8268e0d8
	sub_8268E0D8(ctx, base);
	// b 0x8268e1a8
	goto loc_8268E1A8;
loc_8268E1A0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_8268E1A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8268E1B0"))) PPC_WEAK_FUNC(sub_8268E1B0);
PPC_FUNC_IMPL(__imp__sub_8268E1B0) {
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
	// beq cr6,0x8268e228
	if (cr6.eq) goto loc_8268E228;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r30,r11,920
	r30.s64 = r11.s64 + 920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,2356
	r29.s64 = r11.s64 + 2356;
loc_8268E1DC:
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
	// bne 0x8268e280
	if (!cr0.eq) goto loc_8268E280;
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
	// bne cr6,0x8268e1dc
	if (!cr6.eq) goto loc_8268E1DC;
loc_8268E228:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268e278
	if (cr0.eq) goto loc_8268E278;
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
	// beq 0x8268e278
	if (cr0.eq) goto loc_8268E278;
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
	// bl 0x8268e1b0
	sub_8268E1B0(ctx, base);
	// b 0x8268e280
	goto loc_8268E280;
loc_8268E278:
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_8268E280:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8268E288"))) PPC_WEAK_FUNC(sub_8268E288);
PPC_FUNC_IMPL(__imp__sub_8268E288) {
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
	// beq cr6,0x8268e300
	if (cr6.eq) goto loc_8268E300;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r30,r11,920
	r30.s64 = r11.s64 + 920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,2604
	r29.s64 = r11.s64 + 2604;
loc_8268E2B4:
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
	// bne 0x8268e358
	if (!cr0.eq) goto loc_8268E358;
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
	// bne cr6,0x8268e2b4
	if (!cr6.eq) goto loc_8268E2B4;
loc_8268E300:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268e350
	if (cr0.eq) goto loc_8268E350;
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
	// beq 0x8268e350
	if (cr0.eq) goto loc_8268E350;
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
	// bl 0x8268e288
	sub_8268E288(ctx, base);
	// b 0x8268e358
	goto loc_8268E358;
loc_8268E350:
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_8268E358:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8268E360"))) PPC_WEAK_FUNC(sub_8268E360);
PPC_FUNC_IMPL(__imp__sub_8268E360) {
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
	// beq cr6,0x8268e3d8
	if (cr6.eq) goto loc_8268E3D8;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r30,r11,920
	r30.s64 = r11.s64 + 920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,2140
	r29.s64 = r11.s64 + 2140;
loc_8268E38C:
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
	// bne 0x8268e430
	if (!cr0.eq) goto loc_8268E430;
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
	// bne cr6,0x8268e38c
	if (!cr6.eq) goto loc_8268E38C;
loc_8268E3D8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268e428
	if (cr0.eq) goto loc_8268E428;
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
	// beq 0x8268e428
	if (cr0.eq) goto loc_8268E428;
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
	// bl 0x8268e360
	sub_8268E360(ctx, base);
	// b 0x8268e430
	goto loc_8268E430;
loc_8268E428:
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_8268E430:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8268E438"))) PPC_WEAK_FUNC(sub_8268E438);
PPC_FUNC_IMPL(__imp__sub_8268E438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r16,25696(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 25696);
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
	// li r29,0
	r29.s64 = 0;
	// addi r30,r27,80
	r30.s64 = r27.s64 + 80;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268e4a0
	if (cr0.eq) goto loc_8268E4A0;
	// li r28,0
	r28.s64 = 0;
loc_8268E474:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x821311d8
	sub_821311D8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8268e474
	if (cr6.lt) goto loc_8268E474;
loc_8268E4A0:
	// addi r30,r27,92
	r30.s64 = r27.s64 + 92;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268e4ec
	if (cr0.eq) goto loc_8268E4EC;
	// li r28,0
	r28.s64 = 0;
loc_8268E4C0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x8212bbc8
	sub_8212BBC8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8268e4c0
	if (cr6.lt) goto loc_8268E4C0;
loc_8268E4EC:
	// addi r30,r27,104
	r30.s64 = r27.s64 + 104;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268e538
	if (cr0.eq) goto loc_8268E538;
	// li r28,0
	r28.s64 = 0;
loc_8268E50C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x8212fd70
	sub_8212FD70(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8268e50c
	if (cr6.lt) goto loc_8268E50C;
loc_8268E538:
	// lwz r3,116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 116);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268e548
	if (cr0.eq) goto loc_8268E548;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_8268E548:
	// lwz r3,120(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 120);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268e558
	if (cr0.eq) goto loc_8268E558;
	// bl 0x82127938
	sub_82127938(ctx, base);
loc_8268E558:
	// addi r30,r27,60
	r30.s64 = r27.s64 + 60;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268e5a4
	if (cr0.eq) goto loc_8268E5A4;
	// li r28,0
	r28.s64 = 0;
loc_8268E578:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x82690890
	sub_82690890(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8268e578
	if (cr6.lt) goto loc_8268E578;
loc_8268E5A4:
	// lwz r3,72(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268e5b4
	if (cr0.eq) goto loc_8268E5B4;
	// bl 0x82690890
	sub_82690890(ctx, base);
loc_8268E5B4:
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r11,-13668(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13668);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// addi r30,r9,-13676
	r30.s64 = ctx.r9.s64 + -13676;
	// bne 0x8268e600
	if (!cr0.eq) goto loc_8268E600;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13668(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13668, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,25676
	ctx.r4.s64 = r11.s64 + 25676;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,18592
	ctx.r3.s64 = r11.s64 + 18592;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_8268E600:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
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
	// beq 0x8268e640
	if (cr0.eq) goto loc_8268E640;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8268E640:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8268E440"))) PPC_WEAK_FUNC(sub_8268E440);
PPC_FUNC_IMPL(__imp__sub_8268E440) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r27,80
	r30.s64 = r27.s64 + 80;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268e4a0
	if (cr0.eq) goto loc_8268E4A0;
	// li r28,0
	r28.s64 = 0;
loc_8268E474:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x821311d8
	sub_821311D8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8268e474
	if (cr6.lt) goto loc_8268E474;
loc_8268E4A0:
	// addi r30,r27,92
	r30.s64 = r27.s64 + 92;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268e4ec
	if (cr0.eq) goto loc_8268E4EC;
	// li r28,0
	r28.s64 = 0;
loc_8268E4C0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x8212bbc8
	sub_8212BBC8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8268e4c0
	if (cr6.lt) goto loc_8268E4C0;
loc_8268E4EC:
	// addi r30,r27,104
	r30.s64 = r27.s64 + 104;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268e538
	if (cr0.eq) goto loc_8268E538;
	// li r28,0
	r28.s64 = 0;
loc_8268E50C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x8212fd70
	sub_8212FD70(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8268e50c
	if (cr6.lt) goto loc_8268E50C;
loc_8268E538:
	// lwz r3,116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 116);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268e548
	if (cr0.eq) goto loc_8268E548;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_8268E548:
	// lwz r3,120(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 120);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268e558
	if (cr0.eq) goto loc_8268E558;
	// bl 0x82127938
	sub_82127938(ctx, base);
loc_8268E558:
	// addi r30,r27,60
	r30.s64 = r27.s64 + 60;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268e5a4
	if (cr0.eq) goto loc_8268E5A4;
	// li r28,0
	r28.s64 = 0;
loc_8268E578:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x82690890
	sub_82690890(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8268e578
	if (cr6.lt) goto loc_8268E578;
loc_8268E5A4:
	// lwz r3,72(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268e5b4
	if (cr0.eq) goto loc_8268E5B4;
	// bl 0x82690890
	sub_82690890(ctx, base);
loc_8268E5B4:
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r11,-13668(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13668);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// addi r30,r9,-13676
	r30.s64 = ctx.r9.s64 + -13676;
	// bne 0x8268e600
	if (!cr0.eq) goto loc_8268E600;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13668(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13668, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,25676
	ctx.r4.s64 = r11.s64 + 25676;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,18592
	ctx.r3.s64 = r11.s64 + 18592;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_8268E600:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
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
	// beq 0x8268e640
	if (cr0.eq) goto loc_8268E640;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8268E640:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8268E648"))) PPC_WEAK_FUNC(sub_8268E648);
PPC_FUNC_IMPL(__imp__sub_8268E648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13668
	r11.s64 = r11.s64 + -13668;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13668
	ctx.r10.s64 = ctx.r10.s64 + -13668;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268E670"))) PPC_WEAK_FUNC(sub_8268E670);
PPC_FUNC_IMPL(__imp__sub_8268E670) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82377210
	sub_82377210(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-8684(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -8684);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,17324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bl 0x822ca568
	sub_822CA568(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8268e6e8
	if (!cr6.gt) goto loc_8268E6E8;
	// li r29,0
	r29.s64 = 0;
loc_8268E6C4:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x82690970
	sub_82690970(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8268e6c4
	if (cr6.lt) goto loc_8268E6C4;
loc_8268E6E8:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268e6fc
	if (cr0.eq) goto loc_8268E6FC;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82690970
	sub_82690970(ctx, base);
loc_8268E6FC:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268e70c
	if (cr0.eq) goto loc_8268E70C;
	// bl 0x82690d00
	sub_82690D00(ctx, base);
loc_8268E70C:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8268e738
	if (cr6.eq) goto loc_8268E738;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822c9be8
	sub_822C9BE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// stfs f1,440(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 440, temp.u32);
loc_8268E738:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r27,0
	r27.s64 = 0;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268e7dc
	if (cr0.eq) goto loc_8268E7DC;
	// li r28,0
	r28.s64 = 0;
loc_8268E754:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwzx r29,r28,r11
	r29.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwz r11,528(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 528);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268e780
	if (cr0.eq) goto loc_8268E780;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8268e780
	if (!cr6.eq) goto loc_8268E780;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// li r4,1
	ctx.r4.s64 = 1;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x8268e784
	if (!cr6.lt) goto loc_8268E784;
loc_8268E780:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8268E784:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822c9bd8
	sub_822C9BD8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822c6da0
	sub_822C6DA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82131040
	sub_82131040(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82131048
	sub_82131048(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x8268e754
	if (cr6.lt) goto loc_8268E754;
loc_8268E7DC:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268e87c
	if (cr0.eq) goto loc_8268E87C;
	// li r30,0
	r30.s64 = 0;
loc_8268E7F8:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwzx r29,r11,r30
	r29.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r11,484(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 484);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8268e814
	if (!cr0.eq) goto loc_8268E814;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8268e82c
	goto loc_8268E82C;
loc_8268E814:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8268e838
	if (!cr6.eq) goto loc_8268E838;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x8268e838
	if (cr6.lt) goto loc_8268E838;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8268E82C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822c9bd8
	sub_822C9BD8(ctx, base);
	// b 0x8268e840
	goto loc_8268E840;
loc_8268E838:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822c9be8
	sub_822C9BE8(ctx, base);
loc_8268E840:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8212b630
	sub_8212B630(ctx, base);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x8268e7f8
	if (cr6.lt) goto loc_8268E7F8;
loc_8268E87C:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// li r27,0
	r27.s64 = 0;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268e97c
	if (cr0.eq) goto loc_8268E97C;
	// li r28,0
	r28.s64 = 0;
loc_8268E898:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwzx r26,r28,r11
	r26.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwz r11,604(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 604);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8268e8bc
	if (!cr0.eq) goto loc_8268E8BC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8268E8B0:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822c9bd8
	sub_822C9BD8(ctx, base);
	// b 0x8268e8e0
	goto loc_8268E8E0;
loc_8268E8BC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8268e8d8
	if (!cr6.eq) goto loc_8268E8D8;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x8268e8d8
	if (cr6.lt) goto loc_8268E8D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8268e8b0
	goto loc_8268E8B0;
loc_8268E8D8:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822c9be8
	sub_822C9BE8(ctx, base);
loc_8268E8E0:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,30
	cr6.compare<int32_t>(ctx.r3.s32, 30, xer);
	// bge cr6,0x8268e918
	if (!cr6.lt) goto loc_8268E918;
	// li r11,10
	r11.s64 = 10;
	// divw r11,r3,r11
	r11.s32 = ctx.r3.s32 / r11.s32;
	// mulli r11,r11,10
	r11.s64 = r11.s64 * 10;
	// subf. r29,r11,r3
	r29.s64 = ctx.r3.s64 - r11.s64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8268e91c
	if (!cr0.eq) goto loc_8268E91C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8268e91c
	if (cr6.eq) goto loc_8268E91C;
loc_8268E918:
	// li r29,10
	r29.s64 = 10;
loc_8268E91C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// bl 0x8212eee8
	sub_8212EEE8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x8268e898
	if (cr6.lt) goto loc_8268E898;
loc_8268E97C:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8268e9e8
	if (cr6.eq) goto loc_8268E9E8;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x8268e9e8
	if (cr6.lt) goto loc_8268E9E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822c9bd8
	sub_822C9BD8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822c9bd8
	sub_822C9BD8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// subf r4,r29,r11
	ctx.r4.s64 = r11.s64 - r29.s64;
	// bl 0x82127948
	sub_82127948(ctx, base);
loc_8268E9E8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8268E9F4"))) PPC_WEAK_FUNC(sub_8268E9F4);
PPC_FUNC_IMPL(__imp__sub_8268E9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268E9F8"))) PPC_WEAK_FUNC(sub_8268E9F8);
PPC_FUNC_IMPL(__imp__sub_8268E9F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r3,80
	r11.s64 = ctx.r3.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi. r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8268ea44
	if (cr0.eq) goto loc_8268EA44;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8268EA18:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r8,r9,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stb r4,136(r8)
	PPC_STORE_U8(ctx.r8.u32 + 136, ctx.r4.u8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r8,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x8268ea18
	if (cr6.lt) goto loc_8268EA18;
loc_8268EA44:
	// addi r11,r3,92
	r11.s64 = ctx.r3.s64 + 92;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi. r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8268ea90
	if (cr0.eq) goto loc_8268EA90;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8268EA64:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stb r4,136(r8)
	PPC_STORE_U8(ctx.r8.u32 + 136, ctx.r4.u8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r8,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x8268ea64
	if (cr6.lt) goto loc_8268EA64;
loc_8268EA90:
	// addi r11,r3,104
	r11.s64 = ctx.r3.s64 + 104;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi. r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8268eadc
	if (cr0.eq) goto loc_8268EADC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8268EAB0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r8,r9,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stb r4,136(r8)
	PPC_STORE_U8(ctx.r8.u32 + 136, ctx.r4.u8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r8,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x8268eab0
	if (cr6.lt) goto loc_8268EAB0;
loc_8268EADC:
	// lwz r11,116(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268eaec
	if (cr0.eq) goto loc_8268EAEC;
	// stb r4,136(r11)
	PPC_STORE_U8(r11.u32 + 136, ctx.r4.u8);
loc_8268EAEC:
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268eafc
	if (cr0.eq) goto loc_8268EAFC;
	// stb r4,136(r11)
	PPC_STORE_U8(r11.u32 + 136, ctx.r4.u8);
loc_8268EAFC:
	// lwz r11,144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268eb0c
	if (cr0.eq) goto loc_8268EB0C;
	// stb r4,24(r11)
	PPC_STORE_U8(r11.u32 + 24, ctx.r4.u8);
loc_8268EB0C:
	// stb r4,128(r3)
	PPC_STORE_U8(ctx.r3.u32 + 128, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268EB14"))) PPC_WEAK_FUNC(sub_8268EB14);
PPC_FUNC_IMPL(__imp__sub_8268EB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268EB18"))) PPC_WEAK_FUNC(sub_8268EB18);
PPC_FUNC_IMPL(__imp__sub_8268EB18) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// bne cr6,0x8268eb98
	if (!cr6.eq) goto loc_8268EB98;
	// lwz r29,72(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8268eb8c
	if (cr0.eq) goto loc_8268EB8C;
	// addi r31,r3,60
	r31.s64 = ctx.r3.s64 + 60;
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
	// beq 0x8268eba4
	if (cr0.eq) goto loc_8268EBA4;
	// li r28,0
	r28.s64 = 0;
loc_8268EB5C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r3,r11,r28
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// bl 0x82690890
	sub_82690890(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8268eb5c
	if (cr6.lt) goto loc_8268EB5C;
	// b 0x8268eba4
	goto loc_8268EBA4;
loc_8268EB8C:
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8268eba4
	goto loc_8268EBA4;
loc_8268EB98:
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r10
	r29.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
loc_8268EBA4:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f0,17324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bl 0x826908d0
	sub_826908D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8268EBD0"))) PPC_WEAK_FUNC(sub_8268EBD0);
PPC_FUNC_IMPL(__imp__sub_8268EBD0) {
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
	// lwz r16,25888(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 25888);
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
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32126
	r30.s64 = -2105409536;
	// lwz r11,-13640(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13640);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13644
	r29.s64 = ctx.r10.s64 + -13644;
	// bne 0x8268ec40
	if (!cr0.eq) goto loc_8268EC40;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13640(r30)
	PPC_STORE_U32(r30.u32 + -13640, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14424
	ctx.r4.s64 = r11.s64 + -14424;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13640(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13640);
loc_8268EC40:
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
	// beq 0x8268ec68
	if (cr0.eq) goto loc_8268EC68;
	// addi r3,r25,-152
	ctx.r3.s64 = r25.s64 + -152;
	// bl 0x8268e440
	sub_8268E440(ctx, base);
loc_8268EC60:
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// b 0x8268eed8
	goto loc_8268EED8;
loc_8268EC68:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13648
	r29.s64 = ctx.r10.s64 + -13648;
	// bne 0x8268ec94
	if (!cr0.eq) goto loc_8268EC94;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-13640(r30)
	PPC_STORE_U32(r30.u32 + -13640, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25812
	ctx.r4.s64 = r11.s64 + 25812;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13640(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13640);
loc_8268EC94:
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
	// beq 0x8268ecdc
	if (cr0.eq) goto loc_8268ECDC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r10,r11,1
	ctx.r10.u64 = r11.u64 ^ 1;
	// lwz r11,-28(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268ec60
	if (cr0.eq) goto loc_8268EC60;
	// stb r10,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r10.u8);
	// b 0x8268ec60
	goto loc_8268EC60;
loc_8268ECDC:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13652
	r29.s64 = ctx.r10.s64 + -13652;
	// bne 0x8268ed08
	if (!cr0.eq) goto loc_8268ED08;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-13640(r30)
	PPC_STORE_U32(r30.u32 + -13640, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25792
	ctx.r4.s64 = r11.s64 + 25792;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13640(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13640);
loc_8268ED08:
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
	// beq 0x8268ed4c
	if (cr0.eq) goto loc_8268ED4C;
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
	// addi r3,r25,-152
	ctx.r3.s64 = r25.s64 + -152;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x8268e9f8
	sub_8268E9F8(ctx, base);
	// b 0x8268ec60
	goto loc_8268EC60;
loc_8268ED4C:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13656
	r29.s64 = ctx.r10.s64 + -13656;
	// bne 0x8268ed78
	if (!cr0.eq) goto loc_8268ED78;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-13640(r30)
	PPC_STORE_U32(r30.u32 + -13640, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25776
	ctx.r4.s64 = r11.s64 + 25776;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13640(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13640);
loc_8268ED78:
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
	// beq 0x8268edc8
	if (cr0.eq) goto loc_8268EDC8;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,24
	ctx.r4.s64 = r11.s64 + 24;
	// bl 0x82318010
	sub_82318010(ctx, base);
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
	// addi r3,r25,-152
	ctx.r3.s64 = r25.s64 + -152;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x8268eb18
	sub_8268EB18(ctx, base);
	// b 0x8268ec60
	goto loc_8268EC60;
loc_8268EDC8:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13660
	r29.s64 = ctx.r10.s64 + -13660;
	// bne 0x8268edf4
	if (!cr0.eq) goto loc_8268EDF4;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-13640(r30)
	PPC_STORE_U32(r30.u32 + -13640, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20508
	ctx.r4.s64 = r11.s64 + 20508;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13640(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13640);
loc_8268EDF4:
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
	// beq 0x8268ee2c
	if (cr0.eq) goto loc_8268EE2C;
	// addi r3,r25,-152
	ctx.r3.s64 = r25.s64 + -152;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8268e9f8
	sub_8268E9F8(ctx, base);
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268ec60
	if (cr0.eq) goto loc_8268EC60;
	// bl 0x82690d98
	sub_82690D98(ctx, base);
	// b 0x8268ec60
	goto loc_8268EC60;
loc_8268EE2C:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13664
	r29.s64 = ctx.r10.s64 + -13664;
	// bne 0x8268ee54
	if (!cr0.eq) goto loc_8268EE54;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-13640(r30)
	PPC_STORE_U32(r30.u32 + -13640, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25760
	ctx.r4.s64 = r11.s64 + 25760;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8268EE54:
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
	// beq 0x8268ee8c
	if (cr0.eq) goto loc_8268EE8C;
	// lbz r11,-24(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + -24);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,-24(r25)
	PPC_STORE_U8(r25.u32 + -24, r11.u8);
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// b 0x8268eee0
	goto loc_8268EEE0;
loc_8268EE8C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r25,-92
	ctx.r4.s64 = r25.s64 + -92;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82377300
	sub_82377300(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8268eed0
	if (cr6.eq) goto loc_8268EED0;
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
	// beq 0x8268eedc
	if (cr0.eq) goto loc_8268EEDC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8268eedc
	goto loc_8268EEDC;
loc_8268EED0:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_8268EED8:
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
loc_8268EEDC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8268EEE0:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8268EBD8"))) PPC_WEAK_FUNC(sub_8268EBD8);
PPC_FUNC_IMPL(__imp__sub_8268EBD8) {
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
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32126
	r30.s64 = -2105409536;
	// lwz r11,-13640(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13640);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13644
	r29.s64 = ctx.r10.s64 + -13644;
	// bne 0x8268ec40
	if (!cr0.eq) goto loc_8268EC40;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13640(r30)
	PPC_STORE_U32(r30.u32 + -13640, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-14424
	ctx.r4.s64 = r11.s64 + -14424;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13640(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13640);
loc_8268EC40:
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
	// beq 0x8268ec68
	if (cr0.eq) goto loc_8268EC68;
	// addi r3,r25,-152
	ctx.r3.s64 = r25.s64 + -152;
	// bl 0x8268e440
	sub_8268E440(ctx, base);
loc_8268EC60:
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// b 0x8268eed8
	goto loc_8268EED8;
loc_8268EC68:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13648
	r29.s64 = ctx.r10.s64 + -13648;
	// bne 0x8268ec94
	if (!cr0.eq) goto loc_8268EC94;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-13640(r30)
	PPC_STORE_U32(r30.u32 + -13640, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25812
	ctx.r4.s64 = r11.s64 + 25812;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13640(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13640);
loc_8268EC94:
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
	// beq 0x8268ecdc
	if (cr0.eq) goto loc_8268ECDC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r10,r11,1
	ctx.r10.u64 = r11.u64 ^ 1;
	// lwz r11,-28(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268ec60
	if (cr0.eq) goto loc_8268EC60;
	// stb r10,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r10.u8);
	// b 0x8268ec60
	goto loc_8268EC60;
loc_8268ECDC:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13652
	r29.s64 = ctx.r10.s64 + -13652;
	// bne 0x8268ed08
	if (!cr0.eq) goto loc_8268ED08;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,-13640(r30)
	PPC_STORE_U32(r30.u32 + -13640, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25792
	ctx.r4.s64 = r11.s64 + 25792;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13640(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13640);
loc_8268ED08:
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
	// beq 0x8268ed4c
	if (cr0.eq) goto loc_8268ED4C;
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
	// addi r3,r25,-152
	ctx.r3.s64 = r25.s64 + -152;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x8268e9f8
	sub_8268E9F8(ctx, base);
	// b 0x8268ec60
	goto loc_8268EC60;
loc_8268ED4C:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13656
	r29.s64 = ctx.r10.s64 + -13656;
	// bne 0x8268ed78
	if (!cr0.eq) goto loc_8268ED78;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,-13640(r30)
	PPC_STORE_U32(r30.u32 + -13640, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25776
	ctx.r4.s64 = r11.s64 + 25776;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13640(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13640);
loc_8268ED78:
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
	// beq 0x8268edc8
	if (cr0.eq) goto loc_8268EDC8;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,24
	ctx.r4.s64 = r11.s64 + 24;
	// bl 0x82318010
	sub_82318010(ctx, base);
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
	// addi r3,r25,-152
	ctx.r3.s64 = r25.s64 + -152;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x8268eb18
	sub_8268EB18(ctx, base);
	// b 0x8268ec60
	goto loc_8268EC60;
loc_8268EDC8:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13660
	r29.s64 = ctx.r10.s64 + -13660;
	// bne 0x8268edf4
	if (!cr0.eq) goto loc_8268EDF4;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,-13640(r30)
	PPC_STORE_U32(r30.u32 + -13640, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,20508
	ctx.r4.s64 = r11.s64 + 20508;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13640(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13640);
loc_8268EDF4:
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
	// beq 0x8268ee2c
	if (cr0.eq) goto loc_8268EE2C;
	// addi r3,r25,-152
	ctx.r3.s64 = r25.s64 + -152;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8268e9f8
	sub_8268E9F8(ctx, base);
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268ec60
	if (cr0.eq) goto loc_8268EC60;
	// bl 0x82690d98
	sub_82690D98(ctx, base);
	// b 0x8268ec60
	goto loc_8268EC60;
loc_8268EE2C:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r29,r10,-13664
	r29.s64 = ctx.r10.s64 + -13664;
	// bne 0x8268ee54
	if (!cr0.eq) goto loc_8268EE54;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,-13640(r30)
	PPC_STORE_U32(r30.u32 + -13640, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25760
	ctx.r4.s64 = r11.s64 + 25760;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8268EE54:
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
	// beq 0x8268ee8c
	if (cr0.eq) goto loc_8268EE8C;
	// lbz r11,-24(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + -24);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,-24(r25)
	PPC_STORE_U8(r25.u32 + -24, r11.u8);
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// b 0x8268eee0
	goto loc_8268EEE0;
loc_8268EE8C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r25,-92
	ctx.r4.s64 = r25.s64 + -92;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82377300
	sub_82377300(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8268eed0
	if (cr6.eq) goto loc_8268EED0;
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
	// beq 0x8268eedc
	if (cr0.eq) goto loc_8268EEDC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8268eedc
	goto loc_8268EEDC;
loc_8268EED0:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_8268EED8:
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
loc_8268EEDC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8268EEE0:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8268EEE8"))) PPC_WEAK_FUNC(sub_8268EEE8);
PPC_FUNC_IMPL(__imp__sub_8268EEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13640
	r11.s64 = r11.s64 + -13640;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13640
	ctx.r10.s64 = ctx.r10.s64 + -13640;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268EF10"))) PPC_WEAK_FUNC(sub_8268EF10);
PPC_FUNC_IMPL(__imp__sub_8268EF10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13640
	r11.s64 = r11.s64 + -13640;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13640
	ctx.r10.s64 = ctx.r10.s64 + -13640;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268EF38"))) PPC_WEAK_FUNC(sub_8268EF38);
PPC_FUNC_IMPL(__imp__sub_8268EF38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13640
	r11.s64 = r11.s64 + -13640;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13640
	ctx.r10.s64 = ctx.r10.s64 + -13640;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268EF60"))) PPC_WEAK_FUNC(sub_8268EF60);
PPC_FUNC_IMPL(__imp__sub_8268EF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13640
	r11.s64 = r11.s64 + -13640;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13640
	ctx.r10.s64 = ctx.r10.s64 + -13640;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268EF88"))) PPC_WEAK_FUNC(sub_8268EF88);
PPC_FUNC_IMPL(__imp__sub_8268EF88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13640
	r11.s64 = r11.s64 + -13640;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13640
	ctx.r10.s64 = ctx.r10.s64 + -13640;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268EFB0"))) PPC_WEAK_FUNC(sub_8268EFB0);
PPC_FUNC_IMPL(__imp__sub_8268EFB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13640
	r11.s64 = r11.s64 + -13640;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13640
	ctx.r10.s64 = ctx.r10.s64 + -13640;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268EFD8"))) PPC_WEAK_FUNC(sub_8268EFD8);
PPC_FUNC_IMPL(__imp__sub_8268EFD8) {
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

__attribute__((alias("__imp__sub_8268F000"))) PPC_WEAK_FUNC(sub_8268F000);
PPC_FUNC_IMPL(__imp__sub_8268F000) {
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
	// bne 0x8268f028
	if (!cr0.eq) goto loc_8268F028;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8268F028:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x8268f05c
	if (cr6.eq) goto loc_8268F05C;
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
	// bl 0x8268e000
	sub_8268E000(ctx, base);
	// b 0x8268f064
	goto loc_8268F064;
loc_8268F05C:
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_8268F064:
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

__attribute__((alias("__imp__sub_8268F07C"))) PPC_WEAK_FUNC(sub_8268F07C);
PPC_FUNC_IMPL(__imp__sub_8268F07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268F080"))) PPC_WEAK_FUNC(sub_8268F080);
PPC_FUNC_IMPL(__imp__sub_8268F080) {
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
	// bne 0x8268f0a8
	if (!cr0.eq) goto loc_8268F0A8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8268F0A8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x8268f0dc
	if (cr6.eq) goto loc_8268F0DC;
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
	// bl 0x8268e0d8
	sub_8268E0D8(ctx, base);
	// b 0x8268f0e4
	goto loc_8268F0E4;
loc_8268F0DC:
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_8268F0E4:
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

__attribute__((alias("__imp__sub_8268F0FC"))) PPC_WEAK_FUNC(sub_8268F0FC);
PPC_FUNC_IMPL(__imp__sub_8268F0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268F100"))) PPC_WEAK_FUNC(sub_8268F100);
PPC_FUNC_IMPL(__imp__sub_8268F100) {
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
	// bne 0x8268f128
	if (!cr0.eq) goto loc_8268F128;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8268F128:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x8268f15c
	if (cr6.eq) goto loc_8268F15C;
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
	// bl 0x8268e1b0
	sub_8268E1B0(ctx, base);
	// b 0x8268f164
	goto loc_8268F164;
loc_8268F15C:
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_8268F164:
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

__attribute__((alias("__imp__sub_8268F17C"))) PPC_WEAK_FUNC(sub_8268F17C);
PPC_FUNC_IMPL(__imp__sub_8268F17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268F180"))) PPC_WEAK_FUNC(sub_8268F180);
PPC_FUNC_IMPL(__imp__sub_8268F180) {
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
	// bne 0x8268f1a8
	if (!cr0.eq) goto loc_8268F1A8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8268F1A8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x8268f1dc
	if (cr6.eq) goto loc_8268F1DC;
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
	// bl 0x8268e288
	sub_8268E288(ctx, base);
	// b 0x8268f1e4
	goto loc_8268F1E4;
loc_8268F1DC:
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_8268F1E4:
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

__attribute__((alias("__imp__sub_8268F1FC"))) PPC_WEAK_FUNC(sub_8268F1FC);
PPC_FUNC_IMPL(__imp__sub_8268F1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268F200"))) PPC_WEAK_FUNC(sub_8268F200);
PPC_FUNC_IMPL(__imp__sub_8268F200) {
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
	// bne 0x8268f228
	if (!cr0.eq) goto loc_8268F228;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8268F228:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x8268f25c
	if (cr6.eq) goto loc_8268F25C;
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
	// bl 0x8268e360
	sub_8268E360(ctx, base);
	// b 0x8268f264
	goto loc_8268F264;
loc_8268F25C:
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_8268F264:
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

__attribute__((alias("__imp__sub_8268F27C"))) PPC_WEAK_FUNC(sub_8268F27C);
PPC_FUNC_IMPL(__imp__sub_8268F27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268F280"))) PPC_WEAK_FUNC(sub_8268F280);
PPC_FUNC_IMPL(__imp__sub_8268F280) {
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
	// beq 0x8268f2c0
	if (cr0.eq) goto loc_8268F2C0;
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
	// bl 0x8268e0d8
	sub_8268E0D8(ctx, base);
loc_8268F2C0:
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

__attribute__((alias("__imp__sub_8268F2D8"))) PPC_WEAK_FUNC(sub_8268F2D8);
PPC_FUNC_IMPL(__imp__sub_8268F2D8) {
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
	// beq 0x8268f318
	if (cr0.eq) goto loc_8268F318;
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
	// bl 0x8268e1b0
	sub_8268E1B0(ctx, base);
loc_8268F318:
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

__attribute__((alias("__imp__sub_8268F330"))) PPC_WEAK_FUNC(sub_8268F330);
PPC_FUNC_IMPL(__imp__sub_8268F330) {
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
	// beq 0x8268f370
	if (cr0.eq) goto loc_8268F370;
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
	// bl 0x8268e288
	sub_8268E288(ctx, base);
loc_8268F370:
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

__attribute__((alias("__imp__sub_8268F388"))) PPC_WEAK_FUNC(sub_8268F388);
PPC_FUNC_IMPL(__imp__sub_8268F388) {
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268e440
	sub_8268E440(ctx, base);
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

__attribute__((alias("__imp__sub_8268F3BC"))) PPC_WEAK_FUNC(sub_8268F3BC);
PPC_FUNC_IMPL(__imp__sub_8268F3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268F3C0"))) PPC_WEAK_FUNC(sub_8268F3C0);
PPC_FUNC_IMPL(__imp__sub_8268F3C0) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8268F3E4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8268f3e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8268F3E4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8268f280
	sub_8268F280(ctx, base);
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

__attribute__((alias("__imp__sub_8268F418"))) PPC_WEAK_FUNC(sub_8268F418);
PPC_FUNC_IMPL(__imp__sub_8268F418) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8268F43C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8268f43c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8268F43C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8268f2d8
	sub_8268F2D8(ctx, base);
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

__attribute__((alias("__imp__sub_8268F470"))) PPC_WEAK_FUNC(sub_8268F470);
PPC_FUNC_IMPL(__imp__sub_8268F470) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8268F494:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8268f494
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8268F494;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8268f330
	sub_8268F330(ctx, base);
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

__attribute__((alias("__imp__sub_8268F4C8"))) PPC_WEAK_FUNC(sub_8268F4C8);
PPC_FUNC_IMPL(__imp__sub_8268F4C8) {
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
	// blt cr6,0x8268f510
	if (cr6.lt) goto loc_8268F510;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8268F510:
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
	// bl 0x8268dd68
	sub_8268DD68(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8268f548
	if (cr0.eq) goto loc_8268F548;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_8268F548:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8268f568
	if (cr6.eq) goto loc_8268F568;
loc_8268F554:
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
	// bne 0x8268f554
	if (!cr0.eq) goto loc_8268F554;
loc_8268F568:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x8268f590
	if (!cr0.eq) goto loc_8268F590;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8268f590
	if (cr0.eq) goto loc_8268F590;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_8268F590:
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

__attribute__((alias("__imp__sub_8268F5C4"))) PPC_WEAK_FUNC(sub_8268F5C4);
PPC_FUNC_IMPL(__imp__sub_8268F5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268F5C8"))) PPC_WEAK_FUNC(sub_8268F5C8);
PPC_FUNC_IMPL(__imp__sub_8268F5C8) {
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
	// blt cr6,0x8268f610
	if (cr6.lt) goto loc_8268F610;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8268F610:
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
	// bl 0x8268ddd0
	sub_8268DDD0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8268f648
	if (cr0.eq) goto loc_8268F648;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_8268F648:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8268f668
	if (cr6.eq) goto loc_8268F668;
loc_8268F654:
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
	// bne 0x8268f654
	if (!cr0.eq) goto loc_8268F654;
loc_8268F668:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x8268f690
	if (!cr0.eq) goto loc_8268F690;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8268f690
	if (cr0.eq) goto loc_8268F690;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_8268F690:
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

__attribute__((alias("__imp__sub_8268F6C4"))) PPC_WEAK_FUNC(sub_8268F6C4);
PPC_FUNC_IMPL(__imp__sub_8268F6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268F6C8"))) PPC_WEAK_FUNC(sub_8268F6C8);
PPC_FUNC_IMPL(__imp__sub_8268F6C8) {
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
	// blt cr6,0x8268f710
	if (cr6.lt) goto loc_8268F710;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8268F710:
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
	// bl 0x8268de38
	sub_8268DE38(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8268f748
	if (cr0.eq) goto loc_8268F748;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_8268F748:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8268f768
	if (cr6.eq) goto loc_8268F768;
loc_8268F754:
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
	// bne 0x8268f754
	if (!cr0.eq) goto loc_8268F754;
loc_8268F768:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x8268f790
	if (!cr0.eq) goto loc_8268F790;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8268f790
	if (cr0.eq) goto loc_8268F790;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_8268F790:
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

__attribute__((alias("__imp__sub_8268F7C4"))) PPC_WEAK_FUNC(sub_8268F7C4);
PPC_FUNC_IMPL(__imp__sub_8268F7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268F7C8"))) PPC_WEAK_FUNC(sub_8268F7C8);
PPC_FUNC_IMPL(__imp__sub_8268F7C8) {
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
	// blt cr6,0x8268f810
	if (cr6.lt) goto loc_8268F810;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8268F810:
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
	// bl 0x8268dea0
	sub_8268DEA0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8268f848
	if (cr0.eq) goto loc_8268F848;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_8268F848:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8268f868
	if (cr6.eq) goto loc_8268F868;
loc_8268F854:
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
	// bne 0x8268f854
	if (!cr0.eq) goto loc_8268F854;
loc_8268F868:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x8268f890
	if (!cr0.eq) goto loc_8268F890;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8268f890
	if (cr0.eq) goto loc_8268F890;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_8268F890:
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

__attribute__((alias("__imp__sub_8268F8C4"))) PPC_WEAK_FUNC(sub_8268F8C4);
PPC_FUNC_IMPL(__imp__sub_8268F8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268F8C8"))) PPC_WEAK_FUNC(sub_8268F8C8);
PPC_FUNC_IMPL(__imp__sub_8268F8C8) {
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
	// blt cr6,0x8268f910
	if (cr6.lt) goto loc_8268F910;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8268F910:
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
	// bl 0x8268df08
	sub_8268DF08(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8268f948
	if (cr0.eq) goto loc_8268F948;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_8268F948:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8268f968
	if (cr6.eq) goto loc_8268F968;
loc_8268F954:
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
	// bne 0x8268f954
	if (!cr0.eq) goto loc_8268F954;
loc_8268F968:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x8268f990
	if (!cr0.eq) goto loc_8268F990;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8268f990
	if (cr0.eq) goto loc_8268F990;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_8268F990:
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

__attribute__((alias("__imp__sub_8268F9C4"))) PPC_WEAK_FUNC(sub_8268F9C4);
PPC_FUNC_IMPL(__imp__sub_8268F9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268F9C8"))) PPC_WEAK_FUNC(sub_8268F9C8);
PPC_FUNC_IMPL(__imp__sub_8268F9C8) {
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
	// lwz r16,26184(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 26184);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// li r28,1
	r28.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r29,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r29.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq cr6,0x8268fa14
	if (cr6.eq) goto loc_8268FA14;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r29,152
	ctx.r3.s64 = r29.s64 + 152;
	// addi r11,r11,26168
	r11.s64 = r11.s64 + 26168;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
loc_8268FA14:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82375fe8
	sub_82375FE8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r6,r6,26116
	ctx.r6.s64 = ctx.r6.s64 + 26116;
	// addi r5,r5,26052
	ctx.r5.s64 = ctx.r5.s64 + 26052;
	// addi r11,r29,60
	r11.s64 = r29.s64 + 60;
	// addi r10,r29,80
	ctx.r10.s64 = r29.s64 + 80;
	// addi r9,r29,92
	ctx.r9.s64 = r29.s64 + 92;
	// stw r6,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r6.u32);
	// addi r8,r29,104
	ctx.r8.s64 = r29.s64 + 104;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r7,r29,132
	ctx.r7.s64 = r29.s64 + 132;
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + r29.u64;
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r5,r6,-148
	ctx.r5.s64 = ctx.r6.s64 + -148;
	// stwx r5,r6,r29
	PPC_STORE_U32(ctx.r6.u32 + r29.u32, ctx.r5.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// stw r30,72(r29)
	PPC_STORE_U32(r29.u32 + 72, r30.u32);
	// stw r30,76(r29)
	PPC_STORE_U32(r29.u32 + 76, r30.u32);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r30.u32);
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r30.u32);
	// stw r30,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r30.u32);
	// stw r30,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r30.u32);
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r30.u32);
	// stw r30,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r30.u32);
	// stw r30,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r30.u32);
	// stw r30,116(r29)
	PPC_STORE_U32(r29.u32 + 116, r30.u32);
	// stw r30,120(r29)
	PPC_STORE_U32(r29.u32 + 120, r30.u32);
	// stw r30,124(r29)
	PPC_STORE_U32(r29.u32 + 124, r30.u32);
	// stb r28,128(r29)
	PPC_STORE_U8(r29.u32 + 128, r28.u8);
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r30.u32);
	// stw r30,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r30.u32);
	// stw r30,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, r30.u32);
	// stw r30,144(r29)
	PPC_STORE_U32(r29.u32 + 144, r30.u32);
	// stw r29,-13684(r11)
	PPC_STORE_U32(r11.u32 + -13684, r29.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8268F9D0"))) PPC_WEAK_FUNC(sub_8268F9D0);
PPC_FUNC_IMPL(__imp__sub_8268F9D0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// li r28,1
	r28.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r29,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r29.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq cr6,0x8268fa14
	if (cr6.eq) goto loc_8268FA14;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r29,152
	ctx.r3.s64 = r29.s64 + 152;
	// addi r11,r11,26168
	r11.s64 = r11.s64 + 26168;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
loc_8268FA14:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82375fe8
	sub_82375FE8(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r6,r6,26116
	ctx.r6.s64 = ctx.r6.s64 + 26116;
	// addi r5,r5,26052
	ctx.r5.s64 = ctx.r5.s64 + 26052;
	// addi r11,r29,60
	r11.s64 = r29.s64 + 60;
	// addi r10,r29,80
	ctx.r10.s64 = r29.s64 + 80;
	// addi r9,r29,92
	ctx.r9.s64 = r29.s64 + 92;
	// stw r6,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r6.u32);
	// addi r8,r29,104
	ctx.r8.s64 = r29.s64 + 104;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r7,r29,132
	ctx.r7.s64 = r29.s64 + 132;
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + r29.u64;
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r5,r6,-148
	ctx.r5.s64 = ctx.r6.s64 + -148;
	// stwx r5,r6,r29
	PPC_STORE_U32(ctx.r6.u32 + r29.u32, ctx.r5.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// stw r30,72(r29)
	PPC_STORE_U32(r29.u32 + 72, r30.u32);
	// stw r30,76(r29)
	PPC_STORE_U32(r29.u32 + 76, r30.u32);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r30.u32);
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r30.u32);
	// stw r30,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r30.u32);
	// stw r30,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r30.u32);
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r30.u32);
	// stw r30,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r30.u32);
	// stw r30,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r30.u32);
	// stw r30,116(r29)
	PPC_STORE_U32(r29.u32 + 116, r30.u32);
	// stw r30,120(r29)
	PPC_STORE_U32(r29.u32 + 120, r30.u32);
	// stw r30,124(r29)
	PPC_STORE_U32(r29.u32 + 124, r30.u32);
	// stb r28,128(r29)
	PPC_STORE_U8(r29.u32 + 128, r28.u8);
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r30.u32);
	// stw r30,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r30.u32);
	// stw r30,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, r30.u32);
	// stw r30,144(r29)
	PPC_STORE_U32(r29.u32 + 144, r30.u32);
	// stw r29,-13684(r11)
	PPC_STORE_U32(r11.u32 + -13684, r29.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8268FAD4"))) PPC_WEAK_FUNC(sub_8268FAD4);
PPC_FUNC_IMPL(__imp__sub_8268FAD4) {
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
	// beq 0x8268fb08
	if (cr0.eq) goto loc_8268FB08;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,152
	ctx.r3.s64 = r11.s64 + 152;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_8268FB08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268FB18"))) PPC_WEAK_FUNC(sub_8268FB18);
PPC_FUNC_IMPL(__imp__sub_8268FB18) {
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
	// bl 0x822b3020
	sub_822B3020(ctx, base);
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

__attribute__((alias("__imp__sub_8268FB48"))) PPC_WEAK_FUNC(sub_8268FB48);
PPC_FUNC_IMPL(__imp__sub_8268FB48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82690718
	sub_82690718(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268FB54"))) PPC_WEAK_FUNC(sub_8268FB54);
PPC_FUNC_IMPL(__imp__sub_8268FB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268FB58"))) PPC_WEAK_FUNC(sub_8268FB58);
PPC_FUNC_IMPL(__imp__sub_8268FB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-92
	ctx.r3.s64 = ctx.r3.s64 + -92;
	// b 0x82376110
	sub_82376110(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268FB68"))) PPC_WEAK_FUNC(sub_8268FB68);
PPC_FUNC_IMPL(__imp__sub_8268FB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x8268fb18
	sub_8268FB18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268FB74"))) PPC_WEAK_FUNC(sub_8268FB74);
PPC_FUNC_IMPL(__imp__sub_8268FB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268FB78"))) PPC_WEAK_FUNC(sub_8268FB78);
PPC_FUNC_IMPL(__imp__sub_8268FB78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-92
	ctx.r3.s64 = ctx.r3.s64 + -92;
	// b 0x82376140
	sub_82376140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268FB88"))) PPC_WEAK_FUNC(sub_8268FB88);
PPC_FUNC_IMPL(__imp__sub_8268FB88) {
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
	// lwz r16,26240(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 26240);
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
	// lwz r11,-13632(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13632);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8268fc0c
	if (!cr0.eq) goto loc_8268FC0C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13632(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13632, r11.u32);
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
	// bl 0x822b3020
	sub_822B3020(ctx, base);
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
	// stw r3,-13636(r27)
	PPC_STORE_U32(r27.u32 + -13636, ctx.r3.u32);
	// b 0x8268fc10
	goto loc_8268FC10;
loc_8268FC0C:
	// lwz r3,-13636(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -13636);
loc_8268FC10:
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
	// beq 0x8268fc4c
	if (cr0.eq) goto loc_8268FC4C;
	// lwz r11,-148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -148);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8268fcc8
	goto loc_8268FCC8;
loc_8268FC4C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8268fcac
	if (!cr0.eq) goto loc_8268FCAC;
	// addic. r11,r30,-152
	xer.ca = r30.u32 > 151;
	r11.s64 = r30.s64 + -152;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8268fc70
	if (!cr0.eq) goto loc_8268FC70;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8268fc80
	goto loc_8268FC80;
loc_8268FC70:
	// lwz r11,-148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -148);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
loc_8268FC80:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -148);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-148
	ctx.r4.s64 = r11.s64 + -148;
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
loc_8268FCAC:
	// lwz r11,-148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -148);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8268FCC8:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8268FB90"))) PPC_WEAK_FUNC(sub_8268FB90);
PPC_FUNC_IMPL(__imp__sub_8268FB90) {
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
	// lwz r11,-13632(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13632);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8268fc0c
	if (!cr0.eq) goto loc_8268FC0C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13632(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13632, r11.u32);
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
	// bl 0x822b3020
	sub_822B3020(ctx, base);
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
	// stw r3,-13636(r27)
	PPC_STORE_U32(r27.u32 + -13636, ctx.r3.u32);
	// b 0x8268fc10
	goto loc_8268FC10;
loc_8268FC0C:
	// lwz r3,-13636(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -13636);
loc_8268FC10:
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
	// beq 0x8268fc4c
	if (cr0.eq) goto loc_8268FC4C;
	// lwz r11,-148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -148);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8268fcc8
	goto loc_8268FCC8;
loc_8268FC4C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8268fcac
	if (!cr0.eq) goto loc_8268FCAC;
	// addic. r11,r30,-152
	xer.ca = r30.u32 > 151;
	r11.s64 = r30.s64 + -152;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8268fc70
	if (!cr0.eq) goto loc_8268FC70;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8268fc80
	goto loc_8268FC80;
loc_8268FC70:
	// lwz r11,-148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -148);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
loc_8268FC80:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -148);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-148
	ctx.r4.s64 = r11.s64 + -148;
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
loc_8268FCAC:
	// lwz r11,-148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -148);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8268FCC8:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8268FCD4"))) PPC_WEAK_FUNC(sub_8268FCD4);
PPC_FUNC_IMPL(__imp__sub_8268FCD4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13632
	r11.s64 = r11.s64 + -13632;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13632
	ctx.r10.s64 = ctx.r10.s64 + -13632;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268FCFC"))) PPC_WEAK_FUNC(sub_8268FCFC);
PPC_FUNC_IMPL(__imp__sub_8268FCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268FD00"))) PPC_WEAK_FUNC(sub_8268FD00);
PPC_FUNC_IMPL(__imp__sub_8268FD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8268fb90
	sub_8268FB90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268FD0C"))) PPC_WEAK_FUNC(sub_8268FD0C);
PPC_FUNC_IMPL(__imp__sub_8268FD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268FD10"))) PPC_WEAK_FUNC(sub_8268FD10);
PPC_FUNC_IMPL(__imp__sub_8268FD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x8268ebd8
	sub_8268EBD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268FD1C"))) PPC_WEAK_FUNC(sub_8268FD1C);
PPC_FUNC_IMPL(__imp__sub_8268FD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268FD20"))) PPC_WEAK_FUNC(sub_8268FD20);
PPC_FUNC_IMPL(__imp__sub_8268FD20) {
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
	// lwz r16,26344(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 26344);
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
	// addi r11,r11,26116
	r11.s64 = r11.s64 + 26116;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r10,r10,26052
	ctx.r10.s64 = ctx.r10.s64 + 26052;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,-152(r30)
	PPC_STORE_U32(r30.u32 + -152, r11.u32);
	// lwz r11,-148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -148);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-148(r11)
	PPC_STORE_U32(r11.u32 + -148, ctx.r10.u32);
	// lwz r11,-148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -148);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-148
	ctx.r10.s64 = r11.s64 + -148;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-152(r11)
	PPC_STORE_U32(r11.u32 + -152, ctx.r10.u32);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r11,0
	r11.s64 = 0;
	// stw r11,-13684(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13684, r11.u32);
	// lwz r4,-20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8268fdac
	if (cr0.eq) goto loc_8268FDAC;
	// lwz r11,-12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -12);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8268FDAC:
	// lwz r4,-48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -48);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8268fdcc
	if (cr0.eq) goto loc_8268FDCC;
	// lwz r11,-40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -40);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8268FDCC:
	// lwz r4,-60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -60);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8268fdec
	if (cr0.eq) goto loc_8268FDEC;
	// lwz r11,-52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -52);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8268FDEC:
	// lwz r4,-72(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -72);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8268fe0c
	if (cr0.eq) goto loc_8268FE0C;
	// lwz r11,-64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -64);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8268FE0C:
	// addi r30,r30,-92
	r30.s64 = r30.s64 + -92;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8268fe30
	if (cr0.eq) goto loc_8268FE30;
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
loc_8268FE30:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_8268FD28"))) PPC_WEAK_FUNC(sub_8268FD28);
PPC_FUNC_IMPL(__imp__sub_8268FD28) {
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
	// addi r11,r11,26116
	r11.s64 = r11.s64 + 26116;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r10,r10,26052
	ctx.r10.s64 = ctx.r10.s64 + 26052;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,-152(r30)
	PPC_STORE_U32(r30.u32 + -152, r11.u32);
	// lwz r11,-148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -148);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-148(r11)
	PPC_STORE_U32(r11.u32 + -148, ctx.r10.u32);
	// lwz r11,-148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -148);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-148
	ctx.r10.s64 = r11.s64 + -148;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-152(r11)
	PPC_STORE_U32(r11.u32 + -152, ctx.r10.u32);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r11,0
	r11.s64 = 0;
	// stw r11,-13684(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13684, r11.u32);
	// lwz r4,-20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8268fdac
	if (cr0.eq) goto loc_8268FDAC;
	// lwz r11,-12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -12);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8268FDAC:
	// lwz r4,-48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -48);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8268fdcc
	if (cr0.eq) goto loc_8268FDCC;
	// lwz r11,-40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -40);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8268FDCC:
	// lwz r4,-60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -60);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8268fdec
	if (cr0.eq) goto loc_8268FDEC;
	// lwz r11,-52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -52);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8268FDEC:
	// lwz r4,-72(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -72);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8268fe0c
	if (cr0.eq) goto loc_8268FE0C;
	// lwz r11,-64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -64);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8268FE0C:
	// addi r30,r30,-92
	r30.s64 = r30.s64 + -92;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8268fe30
	if (cr0.eq) goto loc_8268FE30;
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
loc_8268FE30:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_8268FE50"))) PPC_WEAK_FUNC(sub_8268FE50);
PPC_FUNC_IMPL(__imp__sub_8268FE50) {
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
	// addi r11,r11,-152
	r11.s64 = r11.s64 + -152;
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

__attribute__((alias("__imp__sub_8268FE80"))) PPC_WEAK_FUNC(sub_8268FE80);
PPC_FUNC_IMPL(__imp__sub_8268FE80) {
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
	// addi r11,r11,-152
	r11.s64 = r11.s64 + -152;
	// addi r3,r11,60
	ctx.r3.s64 = r11.s64 + 60;
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

__attribute__((alias("__imp__sub_8268FEB0"))) PPC_WEAK_FUNC(sub_8268FEB0);
PPC_FUNC_IMPL(__imp__sub_8268FEB0) {
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
	// addi r11,r11,-152
	r11.s64 = r11.s64 + -152;
	// addi r3,r11,80
	ctx.r3.s64 = r11.s64 + 80;
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

__attribute__((alias("__imp__sub_8268FEE0"))) PPC_WEAK_FUNC(sub_8268FEE0);
PPC_FUNC_IMPL(__imp__sub_8268FEE0) {
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
	// addi r11,r11,-152
	r11.s64 = r11.s64 + -152;
	// addi r3,r11,92
	ctx.r3.s64 = r11.s64 + 92;
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

__attribute__((alias("__imp__sub_8268FF10"))) PPC_WEAK_FUNC(sub_8268FF10);
PPC_FUNC_IMPL(__imp__sub_8268FF10) {
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
	// addi r11,r11,-152
	r11.s64 = r11.s64 + -152;
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
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

__attribute__((alias("__imp__sub_8268FF40"))) PPC_WEAK_FUNC(sub_8268FF40);
PPC_FUNC_IMPL(__imp__sub_8268FF40) {
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
	// beq cr6,0x8268ff80
	if (cr6.eq) goto loc_8268FF80;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268ff70
	if (cr0.eq) goto loc_8268FF70;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8268FF70:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x8268ff94
	goto loc_8268FF94;
loc_8268FF80:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x8268f4c8
	sub_8268F4C8(ctx, base);
loc_8268FF94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268FFA4"))) PPC_WEAK_FUNC(sub_8268FFA4);
PPC_FUNC_IMPL(__imp__sub_8268FFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268FFA8"))) PPC_WEAK_FUNC(sub_8268FFA8);
PPC_FUNC_IMPL(__imp__sub_8268FFA8) {
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
	// beq cr6,0x8268ffe8
	if (cr6.eq) goto loc_8268FFE8;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268ffd8
	if (cr0.eq) goto loc_8268FFD8;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8268FFD8:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x8268fffc
	goto loc_8268FFFC;
loc_8268FFE8:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x8268f5c8
	sub_8268F5C8(ctx, base);
loc_8268FFFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269000C"))) PPC_WEAK_FUNC(sub_8269000C);
PPC_FUNC_IMPL(__imp__sub_8269000C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82690010"))) PPC_WEAK_FUNC(sub_82690010);
PPC_FUNC_IMPL(__imp__sub_82690010) {
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
	// beq cr6,0x82690050
	if (cr6.eq) goto loc_82690050;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82690040
	if (cr0.eq) goto loc_82690040;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82690040:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x82690064
	goto loc_82690064;
loc_82690050:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x8268f6c8
	sub_8268F6C8(ctx, base);
loc_82690064:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82690074"))) PPC_WEAK_FUNC(sub_82690074);
PPC_FUNC_IMPL(__imp__sub_82690074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82690078"))) PPC_WEAK_FUNC(sub_82690078);
PPC_FUNC_IMPL(__imp__sub_82690078) {
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
	// beq cr6,0x826900b8
	if (cr6.eq) goto loc_826900B8;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826900a8
	if (cr0.eq) goto loc_826900A8;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_826900A8:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x826900cc
	goto loc_826900CC;
loc_826900B8:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x8268f7c8
	sub_8268F7C8(ctx, base);
loc_826900CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826900DC"))) PPC_WEAK_FUNC(sub_826900DC);
PPC_FUNC_IMPL(__imp__sub_826900DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826900E0"))) PPC_WEAK_FUNC(sub_826900E0);
PPC_FUNC_IMPL(__imp__sub_826900E0) {
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
	// beq cr6,0x82690120
	if (cr6.eq) goto loc_82690120;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82690110
	if (cr0.eq) goto loc_82690110;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82690110:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x82690134
	goto loc_82690134;
loc_82690120:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x8268f8c8
	sub_8268F8C8(ctx, base);
loc_82690134:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82690144"))) PPC_WEAK_FUNC(sub_82690144);
PPC_FUNC_IMPL(__imp__sub_82690144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82690148"))) PPC_WEAK_FUNC(sub_82690148);
PPC_FUNC_IMPL(__imp__sub_82690148) {
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
	// beq cr6,0x82690190
	if (cr6.eq) goto loc_82690190;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82690188
	if (cr0.eq) goto loc_82690188;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x8269018c
	goto loc_8269018C;
loc_82690188:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8269018C:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_82690190:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269019C"))) PPC_WEAK_FUNC(sub_8269019C);
PPC_FUNC_IMPL(__imp__sub_8269019C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826901A0"))) PPC_WEAK_FUNC(sub_826901A0);
PPC_FUNC_IMPL(__imp__sub_826901A0) {
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
	// beq cr6,0x826901e8
	if (cr6.eq) goto loc_826901E8;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x826901e0
	if (cr0.eq) goto loc_826901E0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x826901e4
	goto loc_826901E4;
loc_826901E0:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_826901E4:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_826901E8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826901F4"))) PPC_WEAK_FUNC(sub_826901F4);
PPC_FUNC_IMPL(__imp__sub_826901F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826901F8"))) PPC_WEAK_FUNC(sub_826901F8);
PPC_FUNC_IMPL(__imp__sub_826901F8) {
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
	// beq cr6,0x82690240
	if (cr6.eq) goto loc_82690240;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82690238
	if (cr0.eq) goto loc_82690238;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x8269023c
	goto loc_8269023C;
loc_82690238:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8269023C:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_82690240:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269024C"))) PPC_WEAK_FUNC(sub_8269024C);
PPC_FUNC_IMPL(__imp__sub_8269024C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82690250"))) PPC_WEAK_FUNC(sub_82690250);
PPC_FUNC_IMPL(__imp__sub_82690250) {
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
	// beq cr6,0x82690298
	if (cr6.eq) goto loc_82690298;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82690290
	if (cr0.eq) goto loc_82690290;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x82690294
	goto loc_82690294;
loc_82690290:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82690294:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_82690298:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826902A4"))) PPC_WEAK_FUNC(sub_826902A4);
PPC_FUNC_IMPL(__imp__sub_826902A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826902A8"))) PPC_WEAK_FUNC(sub_826902A8);
PPC_FUNC_IMPL(__imp__sub_826902A8) {
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
	// beq cr6,0x826902f0
	if (cr6.eq) goto loc_826902F0;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x826902e8
	if (cr0.eq) goto loc_826902E8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x826902ec
	goto loc_826902EC;
loc_826902E8:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_826902EC:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_826902F0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826902FC"))) PPC_WEAK_FUNC(sub_826902FC);
PPC_FUNC_IMPL(__imp__sub_826902FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82690300"))) PPC_WEAK_FUNC(sub_82690300);
PPC_FUNC_IMPL(__imp__sub_82690300) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,26528(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 26528);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-384
	r31.s64 = ctx.r1.s64 + -384;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82376dd8
	sub_82376DD8(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lis r25,-32127
	r25.s64 = -2105475072;
	// stw r11,-13680(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13680, r11.u32);
	// lwz r3,-9608(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// bl 0x8268f000
	sub_8268F000(ctx, base);
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,116(r30)
	PPC_STORE_U32(r30.u32 + 116, r11.u32);
	// bl 0x8268f080
	sub_8268F080(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826903ac
	if (cr6.eq) goto loc_826903AC;
	// addi r29,r30,80
	r29.s64 = r30.s64 + 80;
loc_82690378:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x8268f3c0
	sub_8268F3C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x8268ffa8
	sub_8268FFA8(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82690378
	if (!cr6.eq) goto loc_82690378;
loc_826903AC:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8268f100
	sub_8268F100(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82690400
	if (cr6.eq) goto loc_82690400;
	// addi r29,r30,92
	r29.s64 = r30.s64 + 92;
loc_826903CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x8268f418
	sub_8268F418(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82690010
	sub_82690010(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826903cc
	if (!cr6.eq) goto loc_826903CC;
loc_82690400:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8268f180
	sub_8268F180(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82690454
	if (cr6.eq) goto loc_82690454;
	// addi r29,r30,104
	r29.s64 = r30.s64 + 104;
loc_82690420:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x8268f470
	sub_8268F470(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82690078
	sub_82690078(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82690420
	if (!cr6.eq) goto loc_82690420;
loc_82690454:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x8268f200
	sub_8268F200(ctx, base);
	// lwz r10,300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,26488
	ctx.r4.s64 = r11.s64 + 26488;
	// stw r10,120(r30)
	PPC_STORE_U32(r30.u32 + 120, ctx.r10.u32);
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,124(r30)
	PPC_STORE_U32(r30.u32 + 124, ctx.r3.u32);
	// li r24,0
	r24.s64 = 0;
	// beq 0x82690494
	if (cr0.eq) goto loc_82690494;
	// stb r24,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r24.u8);
loc_82690494:
	// lwz r11,116(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826904c4
	if (cr6.eq) goto loc_826904C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-9608(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// bl 0x822b5760
	sub_822B5760(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x822d6250
	sub_822D6250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d6398
	sub_822D6398(ctx, base);
	// lwz r11,116(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// stfs f1,504(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 504, temp.u32);
loc_826904C4:
	// addi r29,r30,80
	r29.s64 = r30.s64 + 80;
	// mr r28,r24
	r28.u64 = r24.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82690518
	if (cr0.eq) goto loc_82690518;
	// mr r27,r24
	r27.u64 = r24.u64;
loc_826904E4:
	// bl 0x822d6250
	sub_822D6250(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lfs f0,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	f0.f64 = double(temp.f32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// stfs f0,524(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 524, temp.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x826904e4
	if (cr6.lt) goto loc_826904E4;
loc_82690518:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8269058c
	if (!cr6.gt) goto loc_8269058C;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r26,r30,60
	r26.s64 = r30.s64 + 60;
	// addi r27,r11,26476
	r27.s64 = r11.s64 + 26476;
loc_82690534:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq 0x82690568
	if (cr0.eq) goto loc_82690568;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82690a00
	sub_82690A00(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8269056c
	goto loc_8269056C;
loc_82690568:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8269056C:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x8268ff40
	sub_8268FF40(ctx, base);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82690534
	if (cr6.lt) goto loc_82690534;
loc_8269058C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,2816
	ctx.r4.s64 = r11.s64 + 2816;
	// lwz r11,-9608(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82690604
	if (cr0.eq) goto loc_82690604;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826905d8
	if (cr0.eq) goto loc_826905D8;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r4,r11,26460
	ctx.r4.s64 = r11.s64 + 26460;
	// bl 0x82690a00
	sub_82690A00(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x826905dc
	goto loc_826905DC;
loc_826905D8:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_826905DC:
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r11,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826905fc
	if (cr0.eq) goto loc_826905FC;
	// bl 0x82690b10
	sub_82690B10(ctx, base);
	// b 0x82690600
	goto loc_82690600;
loc_826905FC:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_82690600:
	// stw r3,76(r30)
	PPC_STORE_U32(r30.u32 + 76, ctx.r3.u32);
loc_82690604:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821528e8
	sub_821528E8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8269067c
	if (cr6.eq) goto loc_8269067C;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r29,r10,26452
	r29.s64 = ctx.r10.s64 + 26452;
loc_82690628:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x8239d9a0
	sub_8239D9A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82690668
	if (!cr0.eq) goto loc_82690668;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r30,132
	ctx.r3.s64 = r30.s64 + 132;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x826900e0
	sub_826900E0(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// stb r24,8(r11)
	PPC_STORE_U8(r11.u32 + 8, r24.u8);
loc_82690668:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82152968
	sub_82152968(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82690628
	if (!cr6.eq) goto loc_82690628;
loc_8269067C:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,26432
	ctx.r4.s64 = r11.s64 + 26432;
	// bl 0x82254c00
	sub_82254C00(ctx, base);
	// stw r3,144(r30)
	PPC_STORE_U32(r30.u32 + 144, ctx.r3.u32);
	// addi r1,r31,384
	ctx.r1.s64 = r31.s64 + 384;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82690308"))) PPC_WEAK_FUNC(sub_82690308);
PPC_FUNC_IMPL(__imp__sub_82690308) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-384
	r31.s64 = ctx.r1.s64 + -384;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82376dd8
	sub_82376DD8(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lis r25,-32127
	r25.s64 = -2105475072;
	// stw r11,-13680(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13680, r11.u32);
	// lwz r3,-9608(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// bl 0x822b3880
	sub_822B3880(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// bl 0x8268f000
	sub_8268F000(ctx, base);
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,116(r30)
	PPC_STORE_U32(r30.u32 + 116, r11.u32);
	// bl 0x8268f080
	sub_8268F080(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826903ac
	if (cr6.eq) goto loc_826903AC;
	// addi r29,r30,80
	r29.s64 = r30.s64 + 80;
loc_82690378:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x8268f3c0
	sub_8268F3C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x8268ffa8
	sub_8268FFA8(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82690378
	if (!cr6.eq) goto loc_82690378;
loc_826903AC:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8268f100
	sub_8268F100(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82690400
	if (cr6.eq) goto loc_82690400;
	// addi r29,r30,92
	r29.s64 = r30.s64 + 92;
loc_826903CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x8268f418
	sub_8268F418(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82690010
	sub_82690010(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826903cc
	if (!cr6.eq) goto loc_826903CC;
loc_82690400:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8268f180
	sub_8268F180(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82690454
	if (cr6.eq) goto loc_82690454;
	// addi r29,r30,104
	r29.s64 = r30.s64 + 104;
loc_82690420:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x8268f470
	sub_8268F470(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82690078
	sub_82690078(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82690420
	if (!cr6.eq) goto loc_82690420;
loc_82690454:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x8268f200
	sub_8268F200(ctx, base);
	// lwz r10,300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,26488
	ctx.r4.s64 = r11.s64 + 26488;
	// stw r10,120(r30)
	PPC_STORE_U32(r30.u32 + 120, ctx.r10.u32);
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,124(r30)
	PPC_STORE_U32(r30.u32 + 124, ctx.r3.u32);
	// li r24,0
	r24.s64 = 0;
	// beq 0x82690494
	if (cr0.eq) goto loc_82690494;
	// stb r24,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r24.u8);
loc_82690494:
	// lwz r11,116(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826904c4
	if (cr6.eq) goto loc_826904C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-9608(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// bl 0x822b5760
	sub_822B5760(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x822d6250
	sub_822D6250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d6398
	sub_822D6398(ctx, base);
	// lwz r11,116(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// stfs f1,504(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 504, temp.u32);
loc_826904C4:
	// addi r29,r30,80
	r29.s64 = r30.s64 + 80;
	// mr r28,r24
	r28.u64 = r24.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82690518
	if (cr0.eq) goto loc_82690518;
	// mr r27,r24
	r27.u64 = r24.u64;
loc_826904E4:
	// bl 0x822d6250
	sub_822D6250(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lfs f0,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	f0.f64 = double(temp.f32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// stfs f0,524(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 524, temp.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x826904e4
	if (cr6.lt) goto loc_826904E4;
loc_82690518:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8269058c
	if (!cr6.gt) goto loc_8269058C;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r26,r30,60
	r26.s64 = r30.s64 + 60;
	// addi r27,r11,26476
	r27.s64 = r11.s64 + 26476;
loc_82690534:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq 0x82690568
	if (cr0.eq) goto loc_82690568;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82690a00
	sub_82690A00(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8269056c
	goto loc_8269056C;
loc_82690568:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8269056C:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x8268ff40
	sub_8268FF40(ctx, base);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82690534
	if (cr6.lt) goto loc_82690534;
loc_8269058C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,2816
	ctx.r4.s64 = r11.s64 + 2816;
	// lwz r11,-9608(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -9608);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82690604
	if (cr0.eq) goto loc_82690604;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826905d8
	if (cr0.eq) goto loc_826905D8;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r4,r11,26460
	ctx.r4.s64 = r11.s64 + 26460;
	// bl 0x82690a00
	sub_82690A00(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x826905dc
	goto loc_826905DC;
loc_826905D8:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_826905DC:
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r11,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826905fc
	if (cr0.eq) goto loc_826905FC;
	// bl 0x82690b10
	sub_82690B10(ctx, base);
	// b 0x82690600
	goto loc_82690600;
loc_826905FC:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_82690600:
	// stw r3,76(r30)
	PPC_STORE_U32(r30.u32 + 76, ctx.r3.u32);
loc_82690604:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821528e8
	sub_821528E8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8269067c
	if (cr6.eq) goto loc_8269067C;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r29,r10,26452
	r29.s64 = ctx.r10.s64 + 26452;
loc_82690628:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x8239d9a0
	sub_8239D9A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82690668
	if (!cr0.eq) goto loc_82690668;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r30,132
	ctx.r3.s64 = r30.s64 + 132;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x826900e0
	sub_826900E0(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// stb r24,8(r11)
	PPC_STORE_U8(r11.u32 + 8, r24.u8);
loc_82690668:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82152968
	sub_82152968(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82690628
	if (!cr6.eq) goto loc_82690628;
loc_8269067C:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,26432
	ctx.r4.s64 = r11.s64 + 26432;
	// bl 0x82254c00
	sub_82254C00(ctx, base);
	// stw r3,144(r30)
	PPC_STORE_U32(r30.u32 + 144, ctx.r3.u32);
	// addi r1,r31,384
	ctx.r1.s64 = r31.s64 + 384;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8269069C"))) PPC_WEAK_FUNC(sub_8269069C);
PPC_FUNC_IMPL(__imp__sub_8269069C) {
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

__attribute__((alias("__imp__sub_826906C4"))) PPC_WEAK_FUNC(sub_826906C4);
PPC_FUNC_IMPL(__imp__sub_826906C4) {
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

__attribute__((alias("__imp__sub_826906EC"))) PPC_WEAK_FUNC(sub_826906EC);
PPC_FUNC_IMPL(__imp__sub_826906EC) {
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

__attribute__((alias("__imp__sub_82690714"))) PPC_WEAK_FUNC(sub_82690714);
PPC_FUNC_IMPL(__imp__sub_82690714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82690718"))) PPC_WEAK_FUNC(sub_82690718);
PPC_FUNC_IMPL(__imp__sub_82690718) {
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
	// addi r30,r3,-152
	r30.s64 = ctx.r3.s64 + -152;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,152
	r31.s64 = r30.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268fd28
	sub_8268FD28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82690750
	if (cr0.eq) goto loc_82690750;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82690750:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269075C"))) PPC_WEAK_FUNC(sub_8269075C);
PPC_FUNC_IMPL(__imp__sub_8269075C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82690760"))) PPC_WEAK_FUNC(sub_82690760);
PPC_FUNC_IMPL(__imp__sub_82690760) {
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
	// b 0x8269079c
	goto loc_8269079C;
loc_8269077C:
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82690798
	if (cr0.eq) goto loc_82690798;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82690798:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8269079C:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bne cr6,0x8269077c
	if (!cr6.eq) goto loc_8269077C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x826902a8
	sub_826902A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826907BC"))) PPC_WEAK_FUNC(sub_826907BC);
PPC_FUNC_IMPL(__imp__sub_826907BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826907C0"))) PPC_WEAK_FUNC(sub_826907C0);
PPC_FUNC_IMPL(__imp__sub_826907C0) {
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
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,-13680(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13680, r11.u32);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82690800
	if (cr0.eq) goto loc_82690800;
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
loc_82690800:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// bl 0x82376c90
	sub_82376C90(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// stb r30,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r30.u8);
	// bl 0x82690760
	sub_82690760(ctx, base);
	// lwz r29,72(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82690834
	if (cr0.eq) goto loc_82690834;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82690834:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r30.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82690148
	sub_82690148(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826901a0
	sub_826901A0(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826901f8
	sub_826901F8(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// stw r30,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r30.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82690250
	sub_82690250(ctx, base);
	// stw r30,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82690890"))) PPC_WEAK_FUNC(sub_82690890);
PPC_FUNC_IMPL(__imp__sub_82690890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r10.u8);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
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
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826908CC"))) PPC_WEAK_FUNC(sub_826908CC);
PPC_FUNC_IMPL(__imp__sub_826908CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826908D0"))) PPC_WEAK_FUNC(sub_826908D0);
PPC_FUNC_IMPL(__imp__sub_826908D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,-1332
	ctx.r3.s64 = r11.s64 + -1332;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82356db0
	sub_82356DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x821d1710
	sub_821D1710(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r10.u8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82690944
	if (cr0.eq) goto loc_82690944;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f3,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f4,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// lfs f2,17320(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17320);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x821e8db0
	sub_821E8DB0(ctx, base);
	// b 0x82690958
	goto loc_82690958;
loc_82690944:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,17324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// fmadds f0,f13,f0,f31
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 + f31.f64));
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
loc_82690958:
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

__attribute__((alias("__imp__sub_82690970"))) PPC_WEAK_FUNC(sub_82690970);
PPC_FUNC_IMPL(__imp__sub_82690970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826909A4"))) PPC_WEAK_FUNC(sub_826909A4);
PPC_FUNC_IMPL(__imp__sub_826909A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826909A8"))) PPC_WEAK_FUNC(sub_826909A8);
PPC_FUNC_IMPL(__imp__sub_826909A8) {
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
	// addi r31,r11,1712
	r31.s64 = r11.s64 + 1712;
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

__attribute__((alias("__imp__sub_82690A00"))) PPC_WEAK_FUNC(sub_82690A00);
PPC_FUNC_IMPL(__imp__sub_82690A00) {
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
	PPCRegister f31{};
	PPCRegister temp{};
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,26656
	ctx.r3.s64 = r11.s64 + 26656;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// lis r29,-32126
	r29.s64 = -2105409536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-13680(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -13680);
	// bl 0x8212e060
	sub_8212E060(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stfs f31,8(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r4,r11,26636
	ctx.r4.s64 = r11.s64 + 26636;
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r10,26632
	ctx.r4.s64 = ctx.r10.s64 + 26632;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
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
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r3,r11,26624
	ctx.r3.s64 = r11.s64 + 26624;
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-13680(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -13680);
	// bl 0x826909a8
	sub_826909A8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stb r27,8(r11)
	PPC_STORE_U8(r11.u32 + 8, r27.u8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82690af8
	if (cr0.eq) goto loc_82690AF8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lfs f2,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82690AF8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82690B08"))) PPC_WEAK_FUNC(sub_82690B08);
PPC_FUNC_IMPL(__imp__sub_82690B08) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,26784(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 26784);
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
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,26716
	r11.s64 = r11.s64 + 26716;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stfs f0,40(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// addi r4,r10,26688
	ctx.r4.s64 = ctx.r10.s64 + 26688;
	// stfs f0,44(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// stw r9,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r9.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r29,r10,26632
	r29.s64 = ctx.r10.s64 + 26632;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
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
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stfs f1,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 52, temp.u32);
	// addi r4,r11,26664
	ctx.r4.s64 = r11.s64 + 26664;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
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
	// stfs f1,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 56, temp.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,16952
	ctx.r4.s64 = r11.s64 + 16952;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,-13684(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13684);
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r28,18972(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r29,368
	ctx.r3.s64 = r29.s64 + 368;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823262c8
	sub_823262C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82690B10"))) PPC_WEAK_FUNC(sub_82690B10);
PPC_FUNC_IMPL(__imp__sub_82690B10) {
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
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,26716
	r11.s64 = r11.s64 + 26716;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stfs f0,40(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// addi r4,r10,26688
	ctx.r4.s64 = ctx.r10.s64 + 26688;
	// stfs f0,44(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// stw r9,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r9.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r29,r10,26632
	r29.s64 = ctx.r10.s64 + 26632;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
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
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stfs f1,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 52, temp.u32);
	// addi r4,r11,26664
	ctx.r4.s64 = r11.s64 + 26664;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
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
	// stfs f1,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 56, temp.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,16952
	ctx.r4.s64 = r11.s64 + 16952;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,-13684(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13684);
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r28,18972(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r29,368
	ctx.r3.s64 = r29.s64 + 368;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823262c8
	sub_823262C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82690C38"))) PPC_WEAK_FUNC(sub_82690C38);
PPC_FUNC_IMPL(__imp__sub_82690C38) {
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

__attribute__((alias("__imp__sub_82690C60"))) PPC_WEAK_FUNC(sub_82690C60);
PPC_FUNC_IMPL(__imp__sub_82690C60) {
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
	// lwz r16,26840(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 26840);
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
	// addi r11,r11,26716
	r11.s64 = r11.s64 + 26716;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,-13684(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13684);
	// lwz r5,18972(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18972);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r3,r11,368
	ctx.r3.s64 = r11.s64 + 368;
	// bl 0x823257c0
	sub_823257C0(ctx, base);
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

__attribute__((alias("__imp__sub_82690C68"))) PPC_WEAK_FUNC(sub_82690C68);
PPC_FUNC_IMPL(__imp__sub_82690C68) {
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,26716
	r11.s64 = r11.s64 + 26716;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,-13684(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13684);
	// lwz r5,18972(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18972);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r3,r11,368
	ctx.r3.s64 = r11.s64 + 368;
	// bl 0x823257c0
	sub_823257C0(ctx, base);
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

__attribute__((alias("__imp__sub_82690CD4"))) PPC_WEAK_FUNC(sub_82690CD4);
PPC_FUNC_IMPL(__imp__sub_82690CD4) {
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

__attribute__((alias("__imp__sub_82690CFC"))) PPC_WEAK_FUNC(sub_82690CFC);
PPC_FUNC_IMPL(__imp__sub_82690CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82690D00"))) PPC_WEAK_FUNC(sub_82690D00);
PPC_FUNC_IMPL(__imp__sub_82690D00) {
	PPC_FUNC_PROLOGUE();
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
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	f0.f64 = double(temp.f32);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// ble cr6,0x82690d78
	if (!cr6.gt) goto loc_82690D78;
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x82690d78
	if (!cr6.gt) goto loc_82690D78;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,26896
	ctx.r4.s64 = r11.s64 + 26896;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,-13684(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13684);
	// bl 0x8268eb18
	sub_8268EB18(ctx, base);
	// stfs f30,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
loc_82690D78:
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

__attribute__((alias("__imp__sub_82690D94"))) PPC_WEAK_FUNC(sub_82690D94);
PPC_FUNC_IMPL(__imp__sub_82690D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82690D98"))) PPC_WEAK_FUNC(sub_82690D98);
PPC_FUNC_IMPL(__imp__sub_82690D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82690DA8"))) PPC_WEAK_FUNC(sub_82690DA8);
PPC_FUNC_IMPL(__imp__sub_82690DA8) {
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
	// bl 0x82690c68
	sub_82690C68(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82690dd8
	if (cr0.eq) goto loc_82690DD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82690DD8:
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

__attribute__((alias("__imp__sub_82690DF4"))) PPC_WEAK_FUNC(sub_82690DF4);
PPC_FUNC_IMPL(__imp__sub_82690DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82690DF8"))) PPC_WEAK_FUNC(sub_82690DF8);
PPC_FUNC_IMPL(__imp__sub_82690DF8) {
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
	PPCRegister temp{};
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r11,r11,-5056
	r11.s64 = r11.s64 + -5056;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r31,r11,1
	r31.u64 = r11.u64 ^ 1;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// beq 0x82690e9c
	if (cr0.eq) goto loc_82690E9C;
	// lfs f13,40(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82690e9c
	if (!cr6.eq) goto loc_82690E9C;
	// lfs f13,56(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,44(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x82690e9c
	if (!cr6.gt) goto loc_82690E9C;
	// cntlzw r11,r28
	r11.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	f0.f64 = double(float(f0.f64 + ctx.f1.f64));
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
loc_82690E9C:
	// stfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82690EB4"))) PPC_WEAK_FUNC(sub_82690EB4);
PPC_FUNC_IMPL(__imp__sub_82690EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82690EB8"))) PPC_WEAK_FUNC(sub_82690EB8);
PPC_FUNC_IMPL(__imp__sub_82690EB8) {
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
	// lwz r16,26936(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 26936);
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
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r11,-13624(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13624);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// addi r29,r9,-13628
	r29.s64 = ctx.r9.s64 + -13628;
	// bne 0x82690f24
	if (!cr0.eq) goto loc_82690F24;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13624(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13624, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,16952
	ctx.r4.s64 = r11.s64 + 16952;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82690F24:
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
	// beq 0x82690f7c
	if (cr0.eq) goto loc_82690F7C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82690df8
	sub_82690DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82690f7c
	if (cr6.eq) goto loc_82690F7C;
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
	// beq 0x82690fc8
	if (cr0.eq) goto loc_82690FC8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82690F74:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82690fc8
	goto loc_82690FC8;
loc_82690F7C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82690fbc
	if (cr6.eq) goto loc_82690FBC;
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
	// beq 0x82690fc8
	if (cr0.eq) goto loc_82690FC8;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x82690f74
	goto loc_82690F74;
loc_82690FBC:
	// li r11,6
	r11.s64 = 6;
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_82690FC8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82690EC0"))) PPC_WEAK_FUNC(sub_82690EC0);
PPC_FUNC_IMPL(__imp__sub_82690EC0) {
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
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r11,-13624(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13624);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// addi r29,r9,-13628
	r29.s64 = ctx.r9.s64 + -13628;
	// bne 0x82690f24
	if (!cr0.eq) goto loc_82690F24;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13624(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13624, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,16952
	ctx.r4.s64 = r11.s64 + 16952;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82690F24:
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
	// beq 0x82690f7c
	if (cr0.eq) goto loc_82690F7C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82690df8
	sub_82690DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82690f7c
	if (cr6.eq) goto loc_82690F7C;
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
	// beq 0x82690fc8
	if (cr0.eq) goto loc_82690FC8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82690F74:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82690fc8
	goto loc_82690FC8;
loc_82690F7C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82690fbc
	if (cr6.eq) goto loc_82690FBC;
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
	// beq 0x82690fc8
	if (cr0.eq) goto loc_82690FC8;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x82690f74
	goto loc_82690F74;
loc_82690FBC:
	// li r11,6
	r11.s64 = 6;
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_82690FC8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82690FD4"))) PPC_WEAK_FUNC(sub_82690FD4);
PPC_FUNC_IMPL(__imp__sub_82690FD4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13624
	r11.s64 = r11.s64 + -13624;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13624
	ctx.r10.s64 = ctx.r10.s64 + -13624;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82690FFC"))) PPC_WEAK_FUNC(sub_82690FFC);
PPC_FUNC_IMPL(__imp__sub_82690FFC) {
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

__attribute__((alias("__imp__sub_82691024"))) PPC_WEAK_FUNC(sub_82691024);
PPC_FUNC_IMPL(__imp__sub_82691024) {
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

__attribute__((alias("__imp__sub_8269104C"))) PPC_WEAK_FUNC(sub_8269104C);
PPC_FUNC_IMPL(__imp__sub_8269104C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691050"))) PPC_WEAK_FUNC(sub_82691050);
PPC_FUNC_IMPL(__imp__sub_82691050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82691088
	goto loc_82691088;
loc_8269105C:
	// mulli r9,r9,127
	ctx.r9.s64 = ctx.r9.s64 * 127;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r8,r9,r4
	ctx.r8.s32 = ctx.r9.s32 / ctx.r4.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// andc r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 & ~ctx.r10.u64;
	// twllei r4,0
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// twlgei r10,-1
loc_82691088:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8269105c
	if (!cr0.eq) goto loc_8269105C;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269109C"))) PPC_WEAK_FUNC(sub_8269109C);
PPC_FUNC_IMPL(__imp__sub_8269109C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826910A0"))) PPC_WEAK_FUNC(sub_826910A0);
PPC_FUNC_IMPL(__imp__sub_826910A0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f0,-14040(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -14040);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x826910c8
	if (cr6.gt) goto loc_826910C8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// b 0x826910e4
	goto loc_826910E4;
loc_826910C8:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f0,3008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3008);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * f0.f64));
	// lfd f1,32128(r11)
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 32128);
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
loc_826910E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826910F4"))) PPC_WEAK_FUNC(sub_826910F4);
PPC_FUNC_IMPL(__imp__sub_826910F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826910F8"))) PPC_WEAK_FUNC(sub_826910F8);
PPC_FUNC_IMPL(__imp__sub_826910F8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x82691120
	if (cr6.gt) goto loc_82691120;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f1,-14040(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -14040);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82691134
	goto loc_82691134;
loc_82691120:
	// bl 0x8239ed68
	sub_8239ED68(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-1468(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -1468);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
loc_82691134:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82691144"))) PPC_WEAK_FUNC(sub_82691144);
PPC_FUNC_IMPL(__imp__sub_82691144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691148"))) PPC_WEAK_FUNC(sub_82691148);
PPC_FUNC_IMPL(__imp__sub_82691148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,8048
	ctx.r9.s64 = ctx.r10.s64 + 8048;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82691160:
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// bge cr6,0x82691180
	if (!cr6.lt) goto loc_82691180;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82691160
	if (!cr0.eq) goto loc_82691160;
	// blr 
	return;
loc_82691180:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269118C"))) PPC_WEAK_FUNC(sub_8269118C);
PPC_FUNC_IMPL(__imp__sub_8269118C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691190"))) PPC_WEAK_FUNC(sub_82691190);
PPC_FUNC_IMPL(__imp__sub_82691190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// bne cr6,0x826911a4
	if (!cr6.eq) goto loc_826911A4;
	// li r11,1
	r11.s64 = 1;
	// b 0x826911ac
	goto loc_826911AC;
loc_826911A4:
	// bgelr cr6
	if (!cr6.lt) return;
	// neg r11,r4
	r11.s64 = -ctx.r4.s64;
loc_826911AC:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826911B4"))) PPC_WEAK_FUNC(sub_826911B4);
PPC_FUNC_IMPL(__imp__sub_826911B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826911B8"))) PPC_WEAK_FUNC(sub_826911B8);
PPC_FUNC_IMPL(__imp__sub_826911B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,1
	r11.s64 = 65536;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r11,r11,62237
	r11.u64 = r11.u64 | 62237;
	// divw r9,r10,r11
	ctx.r9.s32 = ctx.r10.s32 / r11.s32;
	// divw r8,r10,r11
	ctx.r8.s32 = ctx.r10.s32 / r11.s32;
	// mullw r11,r9,r11
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// mulli r10,r8,2836
	ctx.r10.s64 = ctx.r8.s64 * 2836;
	// mulli r11,r11,16807
	r11.s64 = r11.s64 * 16807;
	// subf. r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bgt 0x826911ec
	if (cr0.gt) goto loc_826911EC;
	// addis r11,r11,-32768
	r11.s64 = r11.s64 + -2147483648;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_826911EC:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826911F8"))) PPC_WEAK_FUNC(sub_826911F8);
PPC_FUNC_IMPL(__imp__sub_826911F8) {
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
	// bl 0x826e4bdc
	__imp__RtlInitializeCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82691228"))) PPC_WEAK_FUNC(sub_82691228);
PPC_FUNC_IMPL(__imp__sub_82691228) {
	PPC_FUNC_PROLOGUE();
	// b 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269122C"))) PPC_WEAK_FUNC(sub_8269122C);
PPC_FUNC_IMPL(__imp__sub_8269122C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691230"))) PPC_WEAK_FUNC(sub_82691230);
PPC_FUNC_IMPL(__imp__sub_82691230) {
	PPC_FUNC_PROLOGUE();
	// b 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82691234"))) PPC_WEAK_FUNC(sub_82691234);
PPC_FUNC_IMPL(__imp__sub_82691234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691238"))) PPC_WEAK_FUNC(sub_82691238);
PPC_FUNC_IMPL(__imp__sub_82691238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-13620
	ctx.r3.s64 = r11.s64 + -13620;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r6,18972(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x823262c8
	sub_823262C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82691254"))) PPC_WEAK_FUNC(sub_82691254);
PPC_FUNC_IMPL(__imp__sub_82691254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691258"))) PPC_WEAK_FUNC(sub_82691258);
PPC_FUNC_IMPL(__imp__sub_82691258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-13620
	ctx.r3.s64 = r11.s64 + -13620;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r5,18972(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// b 0x823257c0
	sub_823257C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82691270"))) PPC_WEAK_FUNC(sub_82691270);
PPC_FUNC_IMPL(__imp__sub_82691270) {
	PPC_FUNC_PROLOGUE();
	// b 0x8213b190
	sub_8213B190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82691274"))) PPC_WEAK_FUNC(sub_82691274);
PPC_FUNC_IMPL(__imp__sub_82691274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691278"))) PPC_WEAK_FUNC(sub_82691278);
PPC_FUNC_IMPL(__imp__sub_82691278) {
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
	// beq 0x826912b8
	if (cr0.eq) goto loc_826912B8;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r3,r11,8308
	ctx.r3.s64 = r11.s64 + 8308;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x826912c0
	goto loc_826912C0;
loc_826912B8:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_826912C0:
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

__attribute__((alias("__imp__sub_826912DC"))) PPC_WEAK_FUNC(sub_826912DC);
PPC_FUNC_IMPL(__imp__sub_826912DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826912E0"))) PPC_WEAK_FUNC(sub_826912E0);
PPC_FUNC_IMPL(__imp__sub_826912E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82691304
	if (cr0.eq) goto loc_82691304;
	// clrlwi. r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r3,600
	r11.s64 = ctx.r3.s64 + 600;
	// bne 0x826912f8
	if (!cr0.eq) goto loc_826912F8;
	// addi r11,r3,584
	r11.s64 = ctx.r3.s64 + 584;
loc_826912F8:
	// clrlwi. r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82691330
	if (cr0.eq) goto loc_82691330;
	// b 0x8269131c
	goto loc_8269131C;
loc_82691304:
	// clrlwi. r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r3,568
	r11.s64 = ctx.r3.s64 + 568;
	// bne 0x82691314
	if (!cr0.eq) goto loc_82691314;
	// addi r11,r3,552
	r11.s64 = ctx.r3.s64 + 552;
loc_82691314:
	// clrlwi. r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82691324
	if (cr0.eq) goto loc_82691324;
loc_8269131C:
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x82691330
	goto loc_82691330;
loc_82691324:
	// clrlwi. r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82691330
	if (cr0.eq) goto loc_82691330;
	// li r4,6
	ctx.r4.s64 = 6;
loc_82691330:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mulli r11,r4,12
	r11.s64 = ctx.r4.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82691344"))) PPC_WEAK_FUNC(sub_82691344);
PPC_FUNC_IMPL(__imp__sub_82691344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691348"))) PPC_WEAK_FUNC(sub_82691348);
PPC_FUNC_IMPL(__imp__sub_82691348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lbz r10,628(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 628);
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x826913ac
	if (cr6.eq) goto loc_826913AC;
	// addi r11,r3,504
	r11.s64 = ctx.r3.s64 + 504;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// rlwinm. r9,r9,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x826913ac
	if (!cr0.gt) goto loc_826913AC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82691378:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,0(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r8,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x82691378
	if (cr6.lt) goto loc_82691378;
loc_826913AC:
	// stb r4,628(r3)
	PPC_STORE_U8(ctx.r3.u32 + 628, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826913B4"))) PPC_WEAK_FUNC(sub_826913B4);
PPC_FUNC_IMPL(__imp__sub_826913B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826913B8"))) PPC_WEAK_FUNC(sub_826913B8);
PPC_FUNC_IMPL(__imp__sub_826913B8) {
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
	// blt cr6,0x82691400
	if (cr6.lt) goto loc_82691400;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_82691400:
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
	// bl 0x82691278
	sub_82691278(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82691438
	if (cr0.eq) goto loc_82691438;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_82691438:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82691458
	if (cr6.eq) goto loc_82691458;
loc_82691444:
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
	// bne 0x82691444
	if (!cr0.eq) goto loc_82691444;
loc_82691458:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x82691480
	if (!cr0.eq) goto loc_82691480;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82691480
	if (cr0.eq) goto loc_82691480;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_82691480:
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

__attribute__((alias("__imp__sub_826914B4"))) PPC_WEAK_FUNC(sub_826914B4);
PPC_FUNC_IMPL(__imp__sub_826914B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826914B8"))) PPC_WEAK_FUNC(sub_826914B8);
PPC_FUNC_IMPL(__imp__sub_826914B8) {
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
	// beq cr6,0x826914f8
	if (cr6.eq) goto loc_826914F8;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826914e8
	if (cr0.eq) goto loc_826914E8;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_826914E8:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x8269150c
	goto loc_8269150C;
loc_826914F8:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x826913b8
	sub_826913B8(ctx, base);
loc_8269150C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269151C"))) PPC_WEAK_FUNC(sub_8269151C);
PPC_FUNC_IMPL(__imp__sub_8269151C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691520"))) PPC_WEAK_FUNC(sub_82691520);
PPC_FUNC_IMPL(__imp__sub_82691520) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r30,620(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	// addi r29,r3,616
	r29.s64 = ctx.r3.s64 + 616;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82239570
	sub_82239570(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// bne cr6,0x826915a0
	if (!cr6.eq) goto loc_826915A0;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826914b8
	sub_826914B8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82214538
	sub_82214538(ctx, base);
	// ld r11,356(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 356);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,22980(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 22980);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,356(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 356, temp.u32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f0,360(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 360, temp.u32);
loc_826915A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826915A8"))) PPC_WEAK_FUNC(sub_826915A8);
PPC_FUNC_IMPL(__imp__sub_826915A8) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,27352(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 27352);
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
	// beq cr6,0x82691664
	if (cr6.eq) goto loc_82691664;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r11,r11,27328
	r11.s64 = r11.s64 + 27328;
	// addi r10,r10,27316
	ctx.r10.s64 = ctx.r10.s64 + 27316;
	// addi r9,r9,27308
	ctx.r9.s64 = ctx.r9.s64 + 27308;
	// addi r8,r8,27296
	ctx.r8.s64 = ctx.r8.s64 + 27296;
	// addi r7,r7,27288
	ctx.r7.s64 = ctx.r7.s64 + 27288;
	// addi r6,r6,27280
	ctx.r6.s64 = ctx.r6.s64 + 27280;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r5,r5,27272
	ctx.r5.s64 = ctx.r5.s64 + 27272;
	// stw r10,132(r30)
	PPC_STORE_U32(r30.u32 + 132, ctx.r10.u32);
	// addi r3,r30,636
	ctx.r3.s64 = r30.s64 + 636;
	// stw r9,168(r30)
	PPC_STORE_U32(r30.u32 + 168, ctx.r9.u32);
	// stw r8,184(r30)
	PPC_STORE_U32(r30.u32 + 184, ctx.r8.u32);
	// stw r7,364(r30)
	PPC_STORE_U32(r30.u32 + 364, ctx.r7.u32);
	// stw r6,368(r30)
	PPC_STORE_U32(r30.u32 + 368, ctx.r6.u32);
	// stw r5,684(r30)
	PPC_STORE_U32(r30.u32 + 684, ctx.r5.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,680
	r11.s64 = r30.s64 + 680;
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
loc_82691664:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8213cc28
	sub_8213CC28(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r9,r9,27240
	ctx.r9.s64 = ctx.r9.s64 + 27240;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r10,r10,27144
	ctx.r10.s64 = ctx.r10.s64 + 27144;
	// stw r9,164(r30)
	PPC_STORE_U32(r30.u32 + 164, ctx.r9.u32);
	// addi r11,r11,27184
	r11.s64 = r11.s64 + 27184;
	// addi r8,r8,27136
	ctx.r8.s64 = ctx.r8.s64 + 27136;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r7,r7,27116
	ctx.r7.s64 = ctx.r7.s64 + 27116;
	// stw r10,128(r30)
	PPC_STORE_U32(r30.u32 + 128, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r8,180(r30)
	PPC_STORE_U32(r30.u32 + 180, ctx.r8.u32);
	// stw r7,360(r30)
	PPC_STORE_U32(r30.u32 + 360, ctx.r7.u32);
	// addi r6,r11,27052
	ctx.r6.s64 = r11.s64 + 27052;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// addi r10,r11,27040
	ctx.r10.s64 = r11.s64 + 27040;
	// addi r11,r30,616
	r11.s64 = r30.s64 + 616;
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r10,-632
	ctx.r9.s64 = ctx.r10.s64 + -632;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r10,-676
	ctx.r9.s64 = ctx.r10.s64 + -676;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// stb r29,628(r30)
	PPC_STORE_U8(r30.u32 + 628, r29.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826915B0"))) PPC_WEAK_FUNC(sub_826915B0);
PPC_FUNC_IMPL(__imp__sub_826915B0) {
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
	// beq cr6,0x82691664
	if (cr6.eq) goto loc_82691664;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r11,r11,27328
	r11.s64 = r11.s64 + 27328;
	// addi r10,r10,27316
	ctx.r10.s64 = ctx.r10.s64 + 27316;
	// addi r9,r9,27308
	ctx.r9.s64 = ctx.r9.s64 + 27308;
	// addi r8,r8,27296
	ctx.r8.s64 = ctx.r8.s64 + 27296;
	// addi r7,r7,27288
	ctx.r7.s64 = ctx.r7.s64 + 27288;
	// addi r6,r6,27280
	ctx.r6.s64 = ctx.r6.s64 + 27280;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r5,r5,27272
	ctx.r5.s64 = ctx.r5.s64 + 27272;
	// stw r10,132(r30)
	PPC_STORE_U32(r30.u32 + 132, ctx.r10.u32);
	// addi r3,r30,636
	ctx.r3.s64 = r30.s64 + 636;
	// stw r9,168(r30)
	PPC_STORE_U32(r30.u32 + 168, ctx.r9.u32);
	// stw r8,184(r30)
	PPC_STORE_U32(r30.u32 + 184, ctx.r8.u32);
	// stw r7,364(r30)
	PPC_STORE_U32(r30.u32 + 364, ctx.r7.u32);
	// stw r6,368(r30)
	PPC_STORE_U32(r30.u32 + 368, ctx.r6.u32);
	// stw r5,684(r30)
	PPC_STORE_U32(r30.u32 + 684, ctx.r5.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,680
	r11.s64 = r30.s64 + 680;
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
loc_82691664:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8213cc28
	sub_8213CC28(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r9,r9,27240
	ctx.r9.s64 = ctx.r9.s64 + 27240;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r10,r10,27144
	ctx.r10.s64 = ctx.r10.s64 + 27144;
	// stw r9,164(r30)
	PPC_STORE_U32(r30.u32 + 164, ctx.r9.u32);
	// addi r11,r11,27184
	r11.s64 = r11.s64 + 27184;
	// addi r8,r8,27136
	ctx.r8.s64 = ctx.r8.s64 + 27136;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r7,r7,27116
	ctx.r7.s64 = ctx.r7.s64 + 27116;
	// stw r10,128(r30)
	PPC_STORE_U32(r30.u32 + 128, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r8,180(r30)
	PPC_STORE_U32(r30.u32 + 180, ctx.r8.u32);
	// stw r7,360(r30)
	PPC_STORE_U32(r30.u32 + 360, ctx.r7.u32);
	// addi r6,r11,27052
	ctx.r6.s64 = r11.s64 + 27052;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// addi r10,r11,27040
	ctx.r10.s64 = r11.s64 + 27040;
	// addi r11,r30,616
	r11.s64 = r30.s64 + 616;
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r10,-632
	ctx.r9.s64 = ctx.r10.s64 + -632;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r10,-676
	ctx.r9.s64 = ctx.r10.s64 + -676;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// stb r29,628(r30)
	PPC_STORE_U8(r30.u32 + 628, r29.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269171C"))) PPC_WEAK_FUNC(sub_8269171C);
PPC_FUNC_IMPL(__imp__sub_8269171C) {
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
	// beq 0x82691750
	if (cr0.eq) goto loc_82691750;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,636
	ctx.r3.s64 = r11.s64 + 636;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_82691750:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82691760"))) PPC_WEAK_FUNC(sub_82691760);
PPC_FUNC_IMPL(__imp__sub_82691760) {
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
	// bl 0x822b3140
	sub_822B3140(ctx, base);
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

__attribute__((alias("__imp__sub_82691790"))) PPC_WEAK_FUNC(sub_82691790);
PPC_FUNC_IMPL(__imp__sub_82691790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x8213b098
	sub_8213B098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826917A0"))) PPC_WEAK_FUNC(sub_826917A0);
PPC_FUNC_IMPL(__imp__sub_826917A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x8213b020
	sub_8213B020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826917B0"))) PPC_WEAK_FUNC(sub_826917B0);
PPC_FUNC_IMPL(__imp__sub_826917B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-196
	ctx.r3.s64 = ctx.r3.s64 + -196;
	// b 0x821262f8
	sub_821262F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826917C0"))) PPC_WEAK_FUNC(sub_826917C0);
PPC_FUNC_IMPL(__imp__sub_826917C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// addi r4,r4,-16
	ctx.r4.s64 = ctx.r4.s64 + -16;
	// b 0x8213a5d8
	sub_8213A5D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826917D0"))) PPC_WEAK_FUNC(sub_826917D0);
PPC_FUNC_IMPL(__imp__sub_826917D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x8213b648
	sub_8213B648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826917E0"))) PPC_WEAK_FUNC(sub_826917E0);
PPC_FUNC_IMPL(__imp__sub_826917E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-196
	ctx.r3.s64 = ctx.r3.s64 + -196;
	// b 0x821b82d8
	sub_821B82D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826917F0"))) PPC_WEAK_FUNC(sub_826917F0);
PPC_FUNC_IMPL(__imp__sub_826917F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82691a70
	sub_82691A70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826917FC"))) PPC_WEAK_FUNC(sub_826917FC);
PPC_FUNC_IMPL(__imp__sub_826917FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691800"))) PPC_WEAK_FUNC(sub_82691800);
PPC_FUNC_IMPL(__imp__sub_82691800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-504
	ctx.r3.s64 = ctx.r3.s64 + -504;
	// b 0x821262c8
	sub_821262C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82691810"))) PPC_WEAK_FUNC(sub_82691810);
PPC_FUNC_IMPL(__imp__sub_82691810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x8213d488
	sub_8213D488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82691820"))) PPC_WEAK_FUNC(sub_82691820);
PPC_FUNC_IMPL(__imp__sub_82691820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-112
	ctx.r3.s64 = ctx.r3.s64 + -112;
	// b 0x82363250
	sub_82363250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82691830"))) PPC_WEAK_FUNC(sub_82691830);
PPC_FUNC_IMPL(__imp__sub_82691830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x8213c4e8
	sub_8213C4E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82691840"))) PPC_WEAK_FUNC(sub_82691840);
PPC_FUNC_IMPL(__imp__sub_82691840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x82691760
	sub_82691760(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269184C"))) PPC_WEAK_FUNC(sub_8269184C);
PPC_FUNC_IMPL(__imp__sub_8269184C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691850"))) PPC_WEAK_FUNC(sub_82691850);
PPC_FUNC_IMPL(__imp__sub_82691850) {
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
	// lwz r16,27408(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 27408);
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
	// lwz r11,-13548(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13548);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x826918d4
	if (!cr0.eq) goto loc_826918D4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13548(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13548, r11.u32);
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
	// bl 0x822b3140
	sub_822B3140(ctx, base);
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
	// stw r3,-13552(r27)
	PPC_STORE_U32(r27.u32 + -13552, ctx.r3.u32);
	// b 0x826918d8
	goto loc_826918D8;
loc_826918D4:
	// lwz r3,-13552(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -13552);
loc_826918D8:
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
	// beq 0x82691914
	if (cr0.eq) goto loc_82691914;
	// lwz r11,-632(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -632);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-632
	ctx.r3.s64 = r11.s64 + -632;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x82691990
	goto loc_82691990;
loc_82691914:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82691974
	if (!cr0.eq) goto loc_82691974;
	// addic. r11,r30,-636
	xer.ca = r30.u32 > 635;
	r11.s64 = r30.s64 + -636;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82691938
	if (!cr0.eq) goto loc_82691938;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82691948
	goto loc_82691948;
loc_82691938:
	// lwz r11,-632(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -632);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-632
	ctx.r3.s64 = r11.s64 + -632;
loc_82691948:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-632(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -632);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-632
	ctx.r4.s64 = r11.s64 + -632;
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
loc_82691974:
	// lwz r11,-632(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -632);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-632
	ctx.r3.s64 = r11.s64 + -632;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82691990:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82691858"))) PPC_WEAK_FUNC(sub_82691858);
PPC_FUNC_IMPL(__imp__sub_82691858) {
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
	// lwz r11,-13548(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13548);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x826918d4
	if (!cr0.eq) goto loc_826918D4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13548(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13548, r11.u32);
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
	// bl 0x822b3140
	sub_822B3140(ctx, base);
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
	// stw r3,-13552(r27)
	PPC_STORE_U32(r27.u32 + -13552, ctx.r3.u32);
	// b 0x826918d8
	goto loc_826918D8;
loc_826918D4:
	// lwz r3,-13552(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -13552);
loc_826918D8:
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
	// beq 0x82691914
	if (cr0.eq) goto loc_82691914;
	// lwz r11,-632(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -632);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-632
	ctx.r3.s64 = r11.s64 + -632;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x82691990
	goto loc_82691990;
loc_82691914:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82691974
	if (!cr0.eq) goto loc_82691974;
	// addic. r11,r30,-636
	xer.ca = r30.u32 > 635;
	r11.s64 = r30.s64 + -636;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82691938
	if (!cr0.eq) goto loc_82691938;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82691948
	goto loc_82691948;
loc_82691938:
	// lwz r11,-632(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -632);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-632
	ctx.r3.s64 = r11.s64 + -632;
loc_82691948:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-632(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -632);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-632
	ctx.r4.s64 = r11.s64 + -632;
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
loc_82691974:
	// lwz r11,-632(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -632);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-632
	ctx.r3.s64 = r11.s64 + -632;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82691990:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8269199C"))) PPC_WEAK_FUNC(sub_8269199C);
PPC_FUNC_IMPL(__imp__sub_8269199C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13548
	r11.s64 = r11.s64 + -13548;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13548
	ctx.r10.s64 = ctx.r10.s64 + -13548;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826919C4"))) PPC_WEAK_FUNC(sub_826919C4);
PPC_FUNC_IMPL(__imp__sub_826919C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826919C8"))) PPC_WEAK_FUNC(sub_826919C8);
PPC_FUNC_IMPL(__imp__sub_826919C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82691858
	sub_82691858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826919D4"))) PPC_WEAK_FUNC(sub_826919D4);
PPC_FUNC_IMPL(__imp__sub_826919D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826919D8"))) PPC_WEAK_FUNC(sub_826919D8);
PPC_FUNC_IMPL(__imp__sub_826919D8) {
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
	// lwz r16,27480(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 27480);
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
	// lwz r4,-20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82691a20
	if (cr0.eq) goto loc_82691A20;
	// lwz r11,-12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -12);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82691A20:
	// addi r3,r30,-16
	ctx.r3.s64 = r30.s64 + -16;
	// bl 0x8213d298
	sub_8213D298(ctx, base);
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

__attribute__((alias("__imp__sub_826919E0"))) PPC_WEAK_FUNC(sub_826919E0);
PPC_FUNC_IMPL(__imp__sub_826919E0) {
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
	// lwz r4,-20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82691a20
	if (cr0.eq) goto loc_82691A20;
	// lwz r11,-12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -12);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82691A20:
	// addi r3,r30,-16
	ctx.r3.s64 = r30.s64 + -16;
	// bl 0x8213d298
	sub_8213D298(ctx, base);
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

__attribute__((alias("__imp__sub_82691A40"))) PPC_WEAK_FUNC(sub_82691A40);
PPC_FUNC_IMPL(__imp__sub_82691A40) {
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
	// addi r11,r11,-636
	r11.s64 = r11.s64 + -636;
	// addi r3,r11,620
	ctx.r3.s64 = r11.s64 + 620;
	// bl 0x8213d298
	sub_8213D298(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82691A70"))) PPC_WEAK_FUNC(sub_82691A70);
PPC_FUNC_IMPL(__imp__sub_82691A70) {
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
	// addi r30,r3,-636
	r30.s64 = ctx.r3.s64 + -636;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,636
	r31.s64 = r30.s64 + 636;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826919e0
	sub_826919E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82691aa8
	if (cr0.eq) goto loc_82691AA8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_82691AA8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82691AB4"))) PPC_WEAK_FUNC(sub_82691AB4);
PPC_FUNC_IMPL(__imp__sub_82691AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691AB8"))) PPC_WEAK_FUNC(sub_82691AB8);
PPC_FUNC_IMPL(__imp__sub_82691AB8) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,27672(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 27672);
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
	// beq cr6,0x82691b04
	if (cr6.eq) goto loc_82691B04;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// addi r11,r11,27656
	r11.s64 = r11.s64 + 27656;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_82691B04:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82375fe8
	sub_82375FE8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,27604
	r11.s64 = r11.s64 + 27604;
	// addi r10,r10,27540
	ctx.r10.s64 = ctx.r10.s64 + 27540;
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
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-64
	ctx.r10.s64 = r11.s64 + -64;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82691AC0"))) PPC_WEAK_FUNC(sub_82691AC0);
PPC_FUNC_IMPL(__imp__sub_82691AC0) {
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
	// beq cr6,0x82691b04
	if (cr6.eq) goto loc_82691B04;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// addi r11,r11,27656
	r11.s64 = r11.s64 + 27656;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_82691B04:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82375fe8
	sub_82375FE8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,27604
	r11.s64 = r11.s64 + 27604;
	// addi r10,r10,27540
	ctx.r10.s64 = ctx.r10.s64 + 27540;
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
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-64
	ctx.r10.s64 = r11.s64 + -64;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82691B58"))) PPC_WEAK_FUNC(sub_82691B58);
PPC_FUNC_IMPL(__imp__sub_82691B58) {
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
	// beq 0x82691b8c
	if (cr0.eq) goto loc_82691B8C;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,68
	ctx.r3.s64 = r11.s64 + 68;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_82691B8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82691B9C"))) PPC_WEAK_FUNC(sub_82691B9C);
PPC_FUNC_IMPL(__imp__sub_82691B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691BA0"))) PPC_WEAK_FUNC(sub_82691BA0);
PPC_FUNC_IMPL(__imp__sub_82691BA0) {
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
	// bl 0x822b3270
	sub_822B3270(ctx, base);
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

__attribute__((alias("__imp__sub_82691BD0"))) PPC_WEAK_FUNC(sub_82691BD0);
PPC_FUNC_IMPL(__imp__sub_82691BD0) {
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
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lbz r11,17(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82691bf8
	if (cr0.eq) goto loc_82691BF8;
	// bl 0x82692458
	sub_82692458(ctx, base);
loc_82691BF8:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lbz r11,17(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82691c0c
	if (cr0.eq) goto loc_82691C0C;
	// bl 0x8268df70
	sub_8268DF70(ctx, base);
loc_82691C0C:
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

__attribute__((alias("__imp__sub_82691C20"))) PPC_WEAK_FUNC(sub_82691C20);
PPC_FUNC_IMPL(__imp__sub_82691C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82376140
	sub_82376140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82691C30"))) PPC_WEAK_FUNC(sub_82691C30);
PPC_FUNC_IMPL(__imp__sub_82691C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82376110
	sub_82376110(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82691C40"))) PPC_WEAK_FUNC(sub_82691C40);
PPC_FUNC_IMPL(__imp__sub_82691C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x82691ba0
	sub_82691BA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82691C4C"))) PPC_WEAK_FUNC(sub_82691C4C);
PPC_FUNC_IMPL(__imp__sub_82691C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691C50"))) PPC_WEAK_FUNC(sub_82691C50);
PPC_FUNC_IMPL(__imp__sub_82691C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82691e50
	sub_82691E50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82691C5C"))) PPC_WEAK_FUNC(sub_82691C5C);
PPC_FUNC_IMPL(__imp__sub_82691C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

