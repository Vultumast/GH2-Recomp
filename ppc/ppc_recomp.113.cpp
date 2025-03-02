#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8235D050"))) PPC_WEAK_FUNC(sub_8235D050);
PPC_FUNC_IMPL(__imp__sub_8235D050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, r11.u64);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// lfs f13,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// lwz r10,18972(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18972);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stfs f0,40(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235D098"))) PPC_WEAK_FUNC(sub_8235D098);
PPC_FUNC_IMPL(__imp__sub_8235D098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bgt 0x8235d0ac
	if (cr0.gt) goto loc_8235D0AC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8235D0AC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// bnelr cr6
	if (!cr6.eq) return;
	// mftb r11
	r11.u64 = __rdtsc();
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235D0D0"))) PPC_WEAK_FUNC(sub_8235D0D0);
PPC_FUNC_IMPL(__imp__sub_8235D0D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bgt 0x8235d0f0
	if (cr0.gt) goto loc_8235D0F0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8235D0F0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8235d124
	if (cr0.eq) goto loc_8235D124;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// bne 0x8235d124
	if (!cr0.eq) goto loc_8235D124;
	// mftb r11
	r11.u64 = __rdtsc();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// ld r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, r11.u64);
loc_8235D124:
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// ld r11,8(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lfs f11,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,18804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18804);
	f0.f64 = double(temp.f32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// sradi r11,r11,32
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0xFFFFFFFF) != 0);
	r11.s64 = r11.s64 >> 32;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// lfs f13,18800(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18800);
	ctx.f13.f64 = double(temp.f32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmadds f0,f10,f0,f13
	f0.f64 = double(float(ctx.f10.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f0,f0,f12,f11
	f0.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,48(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// bl 0x82271840
	sub_82271840(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235D194"))) PPC_WEAK_FUNC(sub_8235D194);
PPC_FUNC_IMPL(__imp__sub_8235D194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235D198"))) PPC_WEAK_FUNC(sub_8235D198);
PPC_FUNC_IMPL(__imp__sub_8235D198) {
	PPC_FUNC_PROLOGUE();
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
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r30,1
	r30.s64 = 1;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8235d1cc
	if (cr6.gt) goto loc_8235D1CC;
	// li r30,0
	r30.s64 = 0;
loc_8235D1CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82271840
	sub_82271840(ctx, base);
	// stfs f31,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235d1fc
	if (cr0.eq) goto loc_8235D1FC;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// bne 0x8235d1fc
	if (!cr0.eq) goto loc_8235D1FC;
	// mftb r11
	r11.u64 = __rdtsc();
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8235D1FC:
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

__attribute__((alias("__imp__sub_8235D218"))) PPC_WEAK_FUNC(sub_8235D218);
PPC_FUNC_IMPL(__imp__sub_8235D218) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x8235d24c
	if (cr6.gt) goto loc_8235D24C;
	// li r11,0
	r11.s64 = 0;
loc_8235D24C:
	// clrlwi. r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8235d25c
	if (cr0.eq) goto loc_8235D25C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235d0d0
	sub_8235D0D0(ctx, base);
loc_8235D25C:
	// stfs f31,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 52, temp.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8235d29c
	if (cr6.eq) goto loc_8235D29C;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r11,1
	r11.s64 = 1;
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt 0x8235d27c
	if (cr0.gt) goto loc_8235D27C;
	// li r11,0
	r11.s64 = 0;
loc_8235D27C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8235d29c
	if (!cr0.eq) goto loc_8235D29C;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// bne cr6,0x8235d29c
	if (!cr6.eq) goto loc_8235D29C;
	// mftb r11
	r11.u64 = __rdtsc();
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_8235D29C:
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

__attribute__((alias("__imp__sub_8235D2B8"))) PPC_WEAK_FUNC(sub_8235D2B8);
PPC_FUNC_IMPL(__imp__sub_8235D2B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x8235d2cc
	if (cr6.gt) goto loc_8235D2CC;
	// li r11,0
	r11.s64 = 0;
loc_8235D2CC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235d2f8
	if (cr0.eq) goto loc_8235D2F8;
	// mftb r11
	r11.u64 = __rdtsc();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
loc_8235D2F8:
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// ld r11,8(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lfs f12,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,18804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18804);
	f0.f64 = double(temp.f32);
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
	// lfd f10,-8(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// lfs f13,18800(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18800);
	ctx.f13.f64 = double(temp.f32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmadds f0,f10,f0,f13
	f0.f64 = double(float(ctx.f10.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f1,f0,f12,f11
	ctx.f1.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f11.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235D354"))) PPC_WEAK_FUNC(sub_8235D354);
PPC_FUNC_IMPL(__imp__sub_8235D354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235D358"))) PPC_WEAK_FUNC(sub_8235D358);
PPC_FUNC_IMPL(__imp__sub_8235D358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x8235d370
	if (cr6.lt) goto loc_8235D370;
	// li r11,0
	r11.s64 = 0;
loc_8235D370:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235D378"))) PPC_WEAK_FUNC(sub_8235D378);
PPC_FUNC_IMPL(__imp__sub_8235D378) {
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
	// lwz r16,-12376(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12376);
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
	// addi r29,r30,32
	r29.s64 = r30.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82361c70
	sub_82361C70(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,15764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 15764);
	// bl 0x82361d90
	sub_82361D90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82361e20
	sub_82361E20(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r30,2
	ctx.r4.s64 = r30.s64 + 2;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r30,14
	ctx.r4.s64 = r30.s64 + 14;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82361f20
	sub_82361F20(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8235D380"))) PPC_WEAK_FUNC(sub_8235D380);
PPC_FUNC_IMPL(__imp__sub_8235D380) {
	PPC_FUNC_PROLOGUE();
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
	// addi r29,r30,32
	r29.s64 = r30.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82361c70
	sub_82361C70(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,15764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 15764);
	// bl 0x82361d90
	sub_82361D90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82361e20
	sub_82361E20(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r30,2
	ctx.r4.s64 = r30.s64 + 2;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r30,14
	ctx.r4.s64 = r30.s64 + 14;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82361f20
	sub_82361F20(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8235D42C"))) PPC_WEAK_FUNC(sub_8235D42C);
PPC_FUNC_IMPL(__imp__sub_8235D42C) {
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
	// bl 0x82361f20
	sub_82361F20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235D454"))) PPC_WEAK_FUNC(sub_8235D454);
PPC_FUNC_IMPL(__imp__sub_8235D454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235D458"))) PPC_WEAK_FUNC(sub_8235D458);
PPC_FUNC_IMPL(__imp__sub_8235D458) {
	PPC_FUNC_PROLOGUE();
	// b 0x82352df0
	sub_82352DF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235D45C"))) PPC_WEAK_FUNC(sub_8235D45C);
PPC_FUNC_IMPL(__imp__sub_8235D45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235D460"))) PPC_WEAK_FUNC(sub_8235D460);
PPC_FUNC_IMPL(__imp__sub_8235D460) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x82352df0
	sub_82352DF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235D468"))) PPC_WEAK_FUNC(sub_8235D468);
PPC_FUNC_IMPL(__imp__sub_8235D468) {
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
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82361c70
	sub_82361C70(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,15752(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 15752);
	// bl 0x82361d90
	sub_82361D90(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 12);
	// rotlwi r11,r9,1
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r9,r9,r10
	ctx.r9.s32 = ctx.r9.s32 / ctx.r10.s32;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// twllei r10,0
	// andc r11,r10,r11
	r11.u64 = ctx.r10.u64 & ~r11.u64;
	// twlgei r11,-1
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8235D4D8"))) PPC_WEAK_FUNC(sub_8235D4D8);
PPC_FUNC_IMPL(__imp__sub_8235D4D8) {
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
	// addi r31,r3,32
	r31.s64 = ctx.r3.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82361c70
	sub_82361C70(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,15752(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 15752);
	// bl 0x82361d90
	sub_82361D90(ctx, base);
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

__attribute__((alias("__imp__sub_8235D51C"))) PPC_WEAK_FUNC(sub_8235D51C);
PPC_FUNC_IMPL(__imp__sub_8235D51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235D520"))) PPC_WEAK_FUNC(sub_8235D520);
PPC_FUNC_IMPL(__imp__sub_8235D520) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235d4d8
	sub_8235D4D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82361e20
	sub_82361E20(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// addi r11,r11,-12308
	r11.s64 = r11.s64 + -12308;
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

__attribute__((alias("__imp__sub_8235D57C"))) PPC_WEAK_FUNC(sub_8235D57C);
PPC_FUNC_IMPL(__imp__sub_8235D57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235D580"))) PPC_WEAK_FUNC(sub_8235D580);
PPC_FUNC_IMPL(__imp__sub_8235D580) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235D588"))) PPC_WEAK_FUNC(sub_8235D588);
PPC_FUNC_IMPL(__imp__sub_8235D588) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,33(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 33);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235D590"))) PPC_WEAK_FUNC(sub_8235D590);
PPC_FUNC_IMPL(__imp__sub_8235D590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,-12308
	r11.s64 = r11.s64 + -12308;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82361f20
	sub_82361F20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235D5A0"))) PPC_WEAK_FUNC(sub_8235D5A0);
PPC_FUNC_IMPL(__imp__sub_8235D5A0) {
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
	// beq 0x8235d5e0
	if (cr0.eq) goto loc_8235D5E0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r3,r11,-28300
	ctx.r3.s64 = r11.s64 + -28300;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8235d5e8
	goto loc_8235D5E8;
loc_8235D5E0:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_8235D5E8:
	// mulli r3,r31,28
	ctx.r3.s64 = r31.s64 * 28;
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

__attribute__((alias("__imp__sub_8235D604"))) PPC_WEAK_FUNC(sub_8235D604);
PPC_FUNC_IMPL(__imp__sub_8235D604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235D608"))) PPC_WEAK_FUNC(sub_8235D608);
PPC_FUNC_IMPL(__imp__sub_8235D608) {
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
	// beq 0x8235d648
	if (cr0.eq) goto loc_8235D648;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r3,r11,-28268
	ctx.r3.s64 = r11.s64 + -28268;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8235d650
	goto loc_8235D650;
loc_8235D648:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_8235D650:
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

__attribute__((alias("__imp__sub_8235D66C"))) PPC_WEAK_FUNC(sub_8235D66C);
PPC_FUNC_IMPL(__imp__sub_8235D66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235D670"))) PPC_WEAK_FUNC(sub_8235D670);
PPC_FUNC_IMPL(__imp__sub_8235D670) {
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
	// beq 0x8235d6b0
	if (cr0.eq) goto loc_8235D6B0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r3,r11,-28232
	ctx.r3.s64 = r11.s64 + -28232;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8235d6b8
	goto loc_8235D6B8;
loc_8235D6B0:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_8235D6B8:
	// mulli r3,r31,24
	ctx.r3.s64 = r31.s64 * 24;
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

__attribute__((alias("__imp__sub_8235D6D4"))) PPC_WEAK_FUNC(sub_8235D6D4);
PPC_FUNC_IMPL(__imp__sub_8235D6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235D6D8"))) PPC_WEAK_FUNC(sub_8235D6D8);
PPC_FUNC_IMPL(__imp__sub_8235D6D8) {
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
	// lwz r16,-12264(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12264);
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8235d728
	if (cr6.eq) goto loc_8235D728;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bl 0x82353768
	sub_82353768(ctx, base);
loc_8235D728:
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

__attribute__((alias("__imp__sub_8235D6E0"))) PPC_WEAK_FUNC(sub_8235D6E0);
PPC_FUNC_IMPL(__imp__sub_8235D6E0) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8235d728
	if (cr6.eq) goto loc_8235D728;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bl 0x82353768
	sub_82353768(ctx, base);
loc_8235D728:
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

__attribute__((alias("__imp__sub_8235D73C"))) PPC_WEAK_FUNC(sub_8235D73C);
PPC_FUNC_IMPL(__imp__sub_8235D73C) {
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
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235D768"))) PPC_WEAK_FUNC(sub_8235D768);
PPC_FUNC_IMPL(__imp__sub_8235D768) {
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
	// lwz r16,-12208(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12208);
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8235d7a4
	if (cr6.eq) goto loc_8235D7A4;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
loc_8235D7A4:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8235D770"))) PPC_WEAK_FUNC(sub_8235D770);
PPC_FUNC_IMPL(__imp__sub_8235D770) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8235d7a4
	if (cr6.eq) goto loc_8235D7A4;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
loc_8235D7A4:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8235D7AC"))) PPC_WEAK_FUNC(sub_8235D7AC);
PPC_FUNC_IMPL(__imp__sub_8235D7AC) {
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
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235D7D8"))) PPC_WEAK_FUNC(sub_8235D7D8);
PPC_FUNC_IMPL(__imp__sub_8235D7D8) {
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
	// beq 0x8235d844
	if (cr0.eq) goto loc_8235D844;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8235d874
	if (!cr0.eq) goto loc_8235D874;
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
	// beq 0x8235d83c
	if (cr0.eq) goto loc_8235D83C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8235d878
	goto loc_8235D878;
loc_8235D83C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8235d878
	goto loc_8235D878;
loc_8235D844:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8235d83c
	if (!cr0.eq) goto loc_8235D83C;
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
	// bne 0x8235d878
	if (!cr0.eq) goto loc_8235D878;
loc_8235D874:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8235D878:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8235D880"))) PPC_WEAK_FUNC(sub_8235D880);
PPC_FUNC_IMPL(__imp__sub_8235D880) {
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
	// addi r31,r30,-8
	r31.s64 = r30.s64 + -8;
	// b 0x8235d8b8
	goto loc_8235D8B8;
loc_8235D8A0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
loc_8235D8B8:
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
	// bne 0x8235d8a0
	if (!cr0.eq) goto loc_8235D8A0;
	// ld r11,136(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8235D8E0"))) PPC_WEAK_FUNC(sub_8235D8E0);
PPC_FUNC_IMPL(__imp__sub_8235D8E0) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// addze r30,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r30.s64 = temp.s64;
	// b 0x8235d958
	goto loc_8235D958;
loc_8235D910:
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// add r29,r11,r28
	r29.u64 = r11.u64 + r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235d960
	if (cr0.eq) goto loc_8235D960;
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r9,r30,-1
	ctx.r9.s64 = r30.s64 + -1;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// srawi r9,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// mr r31,r30
	r31.u64 = r30.u64;
	// addze r30,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	r30.s64 = temp.s64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_8235D958:
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(r31.s32, r27.s32, xer);
	// bgt cr6,0x8235d910
	if (cr6.gt) goto loc_8235D910;
loc_8235D960:
	// ld r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r10,r11,r28
	PPC_STORE_U64(r11.u32 + r28.u32, ctx.r10.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8235D974"))) PPC_WEAK_FUNC(sub_8235D974);
PPC_FUNC_IMPL(__imp__sub_8235D974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235D978"))) PPC_WEAK_FUNC(sub_8235D978);
PPC_FUNC_IMPL(__imp__sub_8235D978) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-12308
	r11.s64 = r11.s64 + -12308;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82361f20
	sub_82361F20(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235d9b4
	if (cr0.eq) goto loc_8235D9B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8235D9B4:
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

__attribute__((alias("__imp__sub_8235D9D0"))) PPC_WEAK_FUNC(sub_8235D9D0);
PPC_FUNC_IMPL(__imp__sub_8235D9D0) {
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
	// lwz r16,-12152(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12152);
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8235da20
	if (cr6.eq) goto loc_8235DA20;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bl 0x82353768
	sub_82353768(ctx, base);
loc_8235DA20:
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

__attribute__((alias("__imp__sub_8235D9D8"))) PPC_WEAK_FUNC(sub_8235D9D8);
PPC_FUNC_IMPL(__imp__sub_8235D9D8) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8235da20
	if (cr6.eq) goto loc_8235DA20;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bl 0x82353768
	sub_82353768(ctx, base);
loc_8235DA20:
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

__attribute__((alias("__imp__sub_8235DA34"))) PPC_WEAK_FUNC(sub_8235DA34);
PPC_FUNC_IMPL(__imp__sub_8235DA34) {
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
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235DA60"))) PPC_WEAK_FUNC(sub_8235DA60);
PPC_FUNC_IMPL(__imp__sub_8235DA60) {
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
	// lwz r16,-12096(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12096);
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8235da9c
	if (cr6.eq) goto loc_8235DA9C;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
loc_8235DA9C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8235DA68"))) PPC_WEAK_FUNC(sub_8235DA68);
PPC_FUNC_IMPL(__imp__sub_8235DA68) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8235da9c
	if (cr6.eq) goto loc_8235DA9C;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
loc_8235DA9C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8235DAA4"))) PPC_WEAK_FUNC(sub_8235DAA4);
PPC_FUNC_IMPL(__imp__sub_8235DAA4) {
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
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235DAD0"))) PPC_WEAK_FUNC(sub_8235DAD0);
PPC_FUNC_IMPL(__imp__sub_8235DAD0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r25,r30
	r25.u64 = r30.u64;
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8235db4c
	goto loc_8235DB4C;
loc_8235DB00:
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// addi r4,r3,-8
	ctx.r4.s64 = ctx.r3.s64 + -8;
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235db20
	if (cr0.eq) goto loc_8235DB20;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_8235DB20:
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,1
	ctx.r9.s64 = r31.s64 + 1;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r31
	r30.u64 = r31.u64;
	// rlwinm r31,r9,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_8235DB4C:
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// blt cr6,0x8235db00
	if (cr6.lt) goto loc_8235DB00;
	// bne cr6,0x8235db80
	if (!cr6.eq) goto loc_8235DB80;
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// addi r30,r31,-1
	r30.s64 = r31.s64 + -1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
loc_8235DB80:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235d8e0
	sub_8235D8E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8235DBA0"))) PPC_WEAK_FUNC(sub_8235DBA0);
PPC_FUNC_IMPL(__imp__sub_8235DBA0) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// subf r11,r30,r4
	r11.s64 = ctx.r4.s64 - r30.s64;
	// srawi r29,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r29.s64 = r11.s32 >> 3;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// blt cr6,0x8235dc04
	if (cr6.lt) goto loc_8235DC04;
	// addi r11,r29,-2
	r11.s64 = r29.s64 + -2;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r31,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r31.s64 = temp.s64;
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r30
	r28.u64 = r11.u64 + r30.u64;
	// b 0x8235dbe4
	goto loc_8235DBE4;
loc_8235DBDC:
	// addi r28,r28,-8
	r28.s64 = r28.s64 + -8;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_8235DBE4:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// ld r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U64(r28.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235dad0
	sub_8235DAD0(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x8235dbdc
	if (!cr6.eq) goto loc_8235DBDC;
loc_8235DC04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8235DC0C"))) PPC_WEAK_FUNC(sub_8235DC0C);
PPC_FUNC_IMPL(__imp__sub_8235DC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235DC10"))) PPC_WEAK_FUNC(sub_8235DC10);
PPC_FUNC_IMPL(__imp__sub_8235DC10) {
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
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// b 0x8235dc34
	goto loc_8235DC34;
loc_8235DC30:
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8235DC34:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8235dc30
	if (!cr0.eq) goto loc_8235DC30;
loc_8235DC4C:
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8235dc4c
	if (!cr0.eq) goto loc_8235DC4C;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bge cr6,0x8235dc8c
	if (!cr6.lt) goto loc_8235DC8C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
	// b 0x8235dc30
	goto loc_8235DC30;
loc_8235DC8C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8235DC98"))) PPC_WEAK_FUNC(sub_8235DC98);
PPC_FUNC_IMPL(__imp__sub_8235DC98) {
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
	// b 0x8235dcd0
	goto loc_8235DCD0;
loc_8235DCB8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,-20
	ctx.r3.s64 = r11.s64 + -20;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-28
	r11.s64 = r11.s64 + -28;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8235DCD0:
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
	// bne 0x8235dcb8
	if (!cr0.eq) goto loc_8235DCB8;
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

__attribute__((alias("__imp__sub_8235DD08"))) PPC_WEAK_FUNC(sub_8235DD08);
PPC_FUNC_IMPL(__imp__sub_8235DD08) {
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
	// b 0x8235dd40
	goto loc_8235DD40;
loc_8235DD28:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,-24
	ctx.r3.s64 = r11.s64 + -24;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-24
	r11.s64 = r11.s64 + -24;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8235DD40:
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
	// bne 0x8235dd28
	if (!cr0.eq) goto loc_8235DD28;
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

__attribute__((alias("__imp__sub_8235DD78"))) PPC_WEAK_FUNC(sub_8235DD78);
PPC_FUNC_IMPL(__imp__sub_8235DD78) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// beq cr6,0x8235ddb0
	if (cr6.eq) goto loc_8235DDB0;
loc_8235DD9C:
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x8235dd9c
	if (!cr6.eq) goto loc_8235DD9C;
loc_8235DDB0:
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

__attribute__((alias("__imp__sub_8235DDC8"))) PPC_WEAK_FUNC(sub_8235DDC8);
PPC_FUNC_IMPL(__imp__sub_8235DDC8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// beq cr6,0x8235de00
	if (cr6.eq) goto loc_8235DE00;
loc_8235DDEC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x8235ddec
	if (!cr6.eq) goto loc_8235DDEC;
loc_8235DE00:
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

__attribute__((alias("__imp__sub_8235DE18"))) PPC_WEAK_FUNC(sub_8235DE18);
PPC_FUNC_IMPL(__imp__sub_8235DE18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r16,-11996(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11996);
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
	// stw r5,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r5.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
loc_8235DE4C:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x8235de74
	if (cr6.eq) goto loc_8235DE74;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235d6e0
	sub_8235D6E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x8235de4c
	goto loc_8235DE4C;
loc_8235DE74:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8235DE20"))) PPC_WEAK_FUNC(sub_8235DE20);
PPC_FUNC_IMPL(__imp__sub_8235DE20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stw r5,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r5.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
loc_8235DE4C:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x8235de74
	if (cr6.eq) goto loc_8235DE74;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235d6e0
	sub_8235D6E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x8235de4c
	goto loc_8235DE4C;
loc_8235DE74:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8235DE80"))) PPC_WEAK_FUNC(sub_8235DE80);
PPC_FUNC_IMPL(__imp__sub_8235DE80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r12{};
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
	// lwz r16,-11996(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11996);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x8235dd78
	sub_8235DD78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-11892(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11892);
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
	// stw r5,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r5.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
loc_8235DEE4:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x8235df0c
	if (cr6.eq) goto loc_8235DF0C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235d770
	sub_8235D770(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x8235dee4
	goto loc_8235DEE4;
loc_8235DF0C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8235DE88"))) PPC_WEAK_FUNC(sub_8235DE88);
PPC_FUNC_IMPL(__imp__sub_8235DE88) {
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x8235dd78
	sub_8235DD78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_8235DEB8"))) PPC_WEAK_FUNC(sub_8235DEB8);
PPC_FUNC_IMPL(__imp__sub_8235DEB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stw r5,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r5.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
loc_8235DEE4:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x8235df0c
	if (cr6.eq) goto loc_8235DF0C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235d770
	sub_8235D770(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x8235dee4
	goto loc_8235DEE4;
loc_8235DF0C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8235DF18"))) PPC_WEAK_FUNC(sub_8235DF18);
PPC_FUNC_IMPL(__imp__sub_8235DF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-11892(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11892);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x8235ddc8
	sub_8235DDC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// mflr r12
	// bl 0x8239bcfc
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235dfbc
	if (cr0.eq) goto loc_8235DFBC;
	// subf r10,r29,r31
	ctx.r10.s64 = r31.s64 - r29.s64;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// srawi. r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x8235dfb0
	if (!cr0.gt) goto loc_8235DFB0;
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
loc_8235DF90:
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// bgt 0x8235df90
	if (cr0.gt) goto loc_8235DF90;
loc_8235DFB0:
	// ld r11,144(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,0(r29)
	PPC_STORE_U64(r29.u32 + 0, r11.u64);
	// b 0x8235dfcc
	goto loc_8235DFCC;
loc_8235DFBC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// ld r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235d880
	sub_8235D880(ctx, base);
loc_8235DFCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8235DF20"))) PPC_WEAK_FUNC(sub_8235DF20);
PPC_FUNC_IMPL(__imp__sub_8235DF20) {
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x8235ddc8
	sub_8235DDC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_8235DF48"))) PPC_WEAK_FUNC(sub_8235DF48);
PPC_FUNC_IMPL(__imp__sub_8235DF48) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235dfbc
	if (cr0.eq) goto loc_8235DFBC;
	// subf r10,r29,r31
	ctx.r10.s64 = r31.s64 - r29.s64;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// srawi. r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x8235dfb0
	if (!cr0.gt) goto loc_8235DFB0;
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
loc_8235DF90:
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// bgt 0x8235df90
	if (cr0.gt) goto loc_8235DF90;
loc_8235DFB0:
	// ld r11,144(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,0(r29)
	PPC_STORE_U64(r29.u32 + 0, r11.u64);
	// b 0x8235dfcc
	goto loc_8235DFCC;
loc_8235DFBC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// ld r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235d880
	sub_8235D880(ctx, base);
loc_8235DFCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8235DFD4"))) PPC_WEAK_FUNC(sub_8235DFD4);
PPC_FUNC_IMPL(__imp__sub_8235DFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235DFD8"))) PPC_WEAK_FUNC(sub_8235DFD8);
PPC_FUNC_IMPL(__imp__sub_8235DFD8) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// subf r11,r31,r4
	r11.s64 = ctx.r4.s64 - r31.s64;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// ble cr6,0x8235e040
	if (!cr6.gt) goto loc_8235E040;
	// addi r29,r31,-8
	r29.s64 = r31.s64 + -8;
loc_8235E000:
	// add r10,r29,r11
	ctx.r10.u64 = r29.u64 + r11.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r11,-8
	r30.s64 = r11.s64 + -8;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// srawi r5,r30,3
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7) != 0);
	ctx.r5.s64 = r30.s32 >> 3;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bl 0x8235dad0
	sub_8235DAD0(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// bgt cr6,0x8235e000
	if (cr6.gt) goto loc_8235E000;
loc_8235E040:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8235E048"))) PPC_WEAK_FUNC(sub_8235E048);
PPC_FUNC_IMPL(__imp__sub_8235E048) {
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
	// bl 0x8235dc98
	sub_8235DC98(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,28
	r11.s64 = 28;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// divw r11,r10,r11
	r11.s32 = ctx.r10.s32 / r11.s32;
	// mulli r3,r11,28
	ctx.r3.s64 = r11.s64 * 28;
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

__attribute__((alias("__imp__sub_8235E0AC"))) PPC_WEAK_FUNC(sub_8235E0AC);
PPC_FUNC_IMPL(__imp__sub_8235E0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235E0B0"))) PPC_WEAK_FUNC(sub_8235E0B0);
PPC_FUNC_IMPL(__imp__sub_8235E0B0) {
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
	// bl 0x8235dd08
	sub_8235DD08(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,24
	r11.s64 = 24;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// divw r11,r10,r11
	r11.s32 = ctx.r10.s32 / r11.s32;
	// mulli r3,r11,24
	ctx.r3.s64 = r11.s64 * 24;
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

__attribute__((alias("__imp__sub_8235E114"))) PPC_WEAK_FUNC(sub_8235E114);
PPC_FUNC_IMPL(__imp__sub_8235E114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235E118"))) PPC_WEAK_FUNC(sub_8235E118);
PPC_FUNC_IMPL(__imp__sub_8235E118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r16,-11788(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11788);
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
loc_8235E14C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8235e174
	if (cr6.eq) goto loc_8235E174;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235d6e0
	sub_8235D6E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// b 0x8235e14c
	goto loc_8235E14C;
loc_8235E174:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8235E120"))) PPC_WEAK_FUNC(sub_8235E120);
PPC_FUNC_IMPL(__imp__sub_8235E120) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
loc_8235E14C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8235e174
	if (cr6.eq) goto loc_8235E174;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235d6e0
	sub_8235D6E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// b 0x8235e14c
	goto loc_8235E14C;
loc_8235E174:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8235E180"))) PPC_WEAK_FUNC(sub_8235E180);
PPC_FUNC_IMPL(__imp__sub_8235E180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r12{};
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
	// lwz r16,-11788(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11788);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x8235dd78
	sub_8235DD78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-11684(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11684);
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
loc_8235E1E4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8235e20c
	if (cr6.eq) goto loc_8235E20C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235d770
	sub_8235D770(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// b 0x8235e1e4
	goto loc_8235E1E4;
loc_8235E20C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8235E188"))) PPC_WEAK_FUNC(sub_8235E188);
PPC_FUNC_IMPL(__imp__sub_8235E188) {
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x8235dd78
	sub_8235DD78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_8235E1B8"))) PPC_WEAK_FUNC(sub_8235E1B8);
PPC_FUNC_IMPL(__imp__sub_8235E1B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
loc_8235E1E4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8235e20c
	if (cr6.eq) goto loc_8235E20C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235d770
	sub_8235D770(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// b 0x8235e1e4
	goto loc_8235E1E4;
loc_8235E20C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8235E218"))) PPC_WEAK_FUNC(sub_8235E218);
PPC_FUNC_IMPL(__imp__sub_8235E218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
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
	// lwz r16,-11684(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11684);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x8235ddc8
	sub_8235DDC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
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
	// beq cr6,0x8235e290
	if (cr6.eq) goto loc_8235E290;
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// b 0x8235e288
	goto loc_8235E288;
loc_8235E270:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235df48
	sub_8235DF48(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8235E288:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x8235e270
	if (!cr6.eq) goto loc_8235E270;
loc_8235E290:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8235E220"))) PPC_WEAK_FUNC(sub_8235E220);
PPC_FUNC_IMPL(__imp__sub_8235E220) {
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x8235ddc8
	sub_8235DDC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_8235E248"))) PPC_WEAK_FUNC(sub_8235E248);
PPC_FUNC_IMPL(__imp__sub_8235E248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x8235e290
	if (cr6.eq) goto loc_8235E290;
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// b 0x8235e288
	goto loc_8235E288;
loc_8235E270:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235df48
	sub_8235DF48(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8235E288:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x8235e270
	if (!cr6.eq) goto loc_8235E270;
loc_8235E290:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8235E298"))) PPC_WEAK_FUNC(sub_8235E298);
PPC_FUNC_IMPL(__imp__sub_8235E298) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8235dba0
	sub_8235DBA0(ctx, base);
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// bge cr6,0x8235e320
	if (!cr6.lt) goto loc_8235E320;
loc_8235E2D0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235e314
	if (cr0.eq) goto loc_8235E314;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r10,r31,r29
	ctx.r10.s64 = r29.s64 - r31.s64;
	// ld r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// srawi r5,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x8235dad0
	sub_8235DAD0(ctx, base);
loc_8235E314:
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// blt cr6,0x8235e2d0
	if (cr6.lt) goto loc_8235E2D0;
loc_8235E320:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235dfd8
	sub_8235DFD8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8235E338"))) PPC_WEAK_FUNC(sub_8235E338);
PPC_FUNC_IMPL(__imp__sub_8235E338) {
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
	// lwz r16,-11624(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11624);
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
	// bl 0x8235dc98
	sub_8235DC98(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8235e3a4
	if (cr0.eq) goto loc_8235E3A4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,28
	ctx.r10.s64 = 28;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,28
	ctx.r3.s64 = r11.s64 * 28;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8235E3A4:
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

__attribute__((alias("__imp__sub_8235E340"))) PPC_WEAK_FUNC(sub_8235E340);
PPC_FUNC_IMPL(__imp__sub_8235E340) {
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
	// bl 0x8235dc98
	sub_8235DC98(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8235e3a4
	if (cr0.eq) goto loc_8235E3A4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,28
	ctx.r10.s64 = 28;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,28
	ctx.r3.s64 = r11.s64 * 28;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8235E3A4:
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

__attribute__((alias("__imp__sub_8235E3BC"))) PPC_WEAK_FUNC(sub_8235E3BC);
PPC_FUNC_IMPL(__imp__sub_8235E3BC) {
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
	// bl 0x8228dc38
	sub_8228DC38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235E3E4"))) PPC_WEAK_FUNC(sub_8235E3E4);
PPC_FUNC_IMPL(__imp__sub_8235E3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235E3E8"))) PPC_WEAK_FUNC(sub_8235E3E8);
PPC_FUNC_IMPL(__imp__sub_8235E3E8) {
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
	// lwz r16,-11560(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11560);
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
	// bl 0x8235dd08
	sub_8235DD08(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8235e454
	if (cr0.eq) goto loc_8235E454;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,24
	ctx.r10.s64 = 24;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,24
	ctx.r3.s64 = r11.s64 * 24;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8235E454:
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

__attribute__((alias("__imp__sub_8235E3F0"))) PPC_WEAK_FUNC(sub_8235E3F0);
PPC_FUNC_IMPL(__imp__sub_8235E3F0) {
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
	// bl 0x8235dd08
	sub_8235DD08(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8235e454
	if (cr0.eq) goto loc_8235E454;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,24
	ctx.r10.s64 = 24;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,24
	ctx.r3.s64 = r11.s64 * 24;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8235E454:
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

__attribute__((alias("__imp__sub_8235E46C"))) PPC_WEAK_FUNC(sub_8235E46C);
PPC_FUNC_IMPL(__imp__sub_8235E46C) {
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
	// bl 0x8221c2b0
	sub_8221C2B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235E494"))) PPC_WEAK_FUNC(sub_8235E494);
PPC_FUNC_IMPL(__imp__sub_8235E494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235E498"))) PPC_WEAK_FUNC(sub_8235E498);
PPC_FUNC_IMPL(__imp__sub_8235E498) {
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
	// lwz r16,-11452(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11452);
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
	// li r10,28
	ctx.r10.s64 = 28;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r27,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r27.u32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// addi r10,r31,244
	ctx.r10.s64 = r31.s64 + 244;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x8235e4f8
	if (cr6.lt) goto loc_8235E4F8;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_8235E4F8:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r25,r30,8
	r25.s64 = r30.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r24,r10,r11
	r24.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r24,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r24.u32);
	// bl 0x8235d5a0
	sub_8235D5A0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8235de20
	sub_8235DE20(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// bne cr6,0x8235e560
	if (!cr6.eq) goto loc_8235E560;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8235d9d8
	sub_8235D9D8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// b 0x8235e578
	goto loc_8235E578;
loc_8235E560:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8235e120
	sub_8235E120(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8235E578:
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8235e5a0
	if (!cr0.eq) goto loc_8235E5A0;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8235de20
	sub_8235DE20(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8235E5A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235e048
	sub_8235E048(ctx, base);
	// mulli r11,r24,28
	r11.s64 = r24.s64 * 28;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_8235E4A0"))) PPC_WEAK_FUNC(sub_8235E4A0);
PPC_FUNC_IMPL(__imp__sub_8235E4A0) {
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
	// li r10,28
	ctx.r10.s64 = 28;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r27,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r27.u32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// addi r10,r31,244
	ctx.r10.s64 = r31.s64 + 244;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x8235e4f8
	if (cr6.lt) goto loc_8235E4F8;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_8235E4F8:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r25,r30,8
	r25.s64 = r30.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r24,r10,r11
	r24.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r24,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r24.u32);
	// bl 0x8235d5a0
	sub_8235D5A0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8235de20
	sub_8235DE20(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// bne cr6,0x8235e560
	if (!cr6.eq) goto loc_8235E560;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8235d9d8
	sub_8235D9D8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// b 0x8235e578
	goto loc_8235E578;
loc_8235E560:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8235e120
	sub_8235E120(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8235E578:
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8235e5a0
	if (!cr0.eq) goto loc_8235E5A0;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8235de20
	sub_8235DE20(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8235E5A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235e048
	sub_8235E048(ctx, base);
	// mulli r11,r24,28
	r11.s64 = r24.s64 * 28;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_8235E5C4"))) PPC_WEAK_FUNC(sub_8235E5C4);
PPC_FUNC_IMPL(__imp__sub_8235E5C4) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// lwz r16,-11452(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11452);
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,88(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235dd78
	sub_8235DD78(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r3,r11,28
	ctx.r3.s64 = r11.s64 * 28;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-11324(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11324);
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
	// blt cr6,0x8235e664
	if (cr6.lt) goto loc_8235E664;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_8235E664:
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
	// bl 0x8235d608
	sub_8235D608(ctx, base);
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
	// bne cr6,0x8235e6c8
	if (!cr6.eq) goto loc_8235E6C8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8235e6c0
	if (cr6.eq) goto loc_8235E6C0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_8235E6C0:
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// b 0x8235e6e0
	goto loc_8235E6E0;
loc_8235E6C8:
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
loc_8235E6E0:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8235e704
	if (!cr0.eq) goto loc_8235E704;
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
loc_8235E704:
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
	// b 0x8235e74c
	goto loc_8235E74C;
loc_8235E72C:
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
loc_8235E74C:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8235e72c
	if (!cr0.eq) goto loc_8235E72C;
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

__attribute__((alias("__imp__sub_8235E5CC"))) PPC_WEAK_FUNC(sub_8235E5CC);
PPC_FUNC_IMPL(__imp__sub_8235E5CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
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
	// lwz r30,88(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235dd78
	sub_8235DD78(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r3,r11,28
	ctx.r3.s64 = r11.s64 * 28;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_8235E610"))) PPC_WEAK_FUNC(sub_8235E610);
PPC_FUNC_IMPL(__imp__sub_8235E610) {
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
	// blt cr6,0x8235e664
	if (cr6.lt) goto loc_8235E664;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_8235E664:
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
	// bl 0x8235d608
	sub_8235D608(ctx, base);
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
	// bne cr6,0x8235e6c8
	if (!cr6.eq) goto loc_8235E6C8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8235e6c0
	if (cr6.eq) goto loc_8235E6C0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_8235E6C0:
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// b 0x8235e6e0
	goto loc_8235E6E0;
loc_8235E6C8:
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
loc_8235E6E0:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8235e704
	if (!cr0.eq) goto loc_8235E704;
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
loc_8235E704:
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
	// b 0x8235e74c
	goto loc_8235E74C;
loc_8235E72C:
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
loc_8235E74C:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8235e72c
	if (!cr0.eq) goto loc_8235E72C;
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

__attribute__((alias("__imp__sub_8235E78C"))) PPC_WEAK_FUNC(sub_8235E78C);
PPC_FUNC_IMPL(__imp__sub_8235E78C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// lwz r16,-11324(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11324);
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
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-11196(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11196);
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
	// li r10,24
	ctx.r10.s64 = 24;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r27,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r27.u32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// addi r10,r31,244
	ctx.r10.s64 = r31.s64 + 244;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x8235e820
	if (cr6.lt) goto loc_8235E820;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_8235E820:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r25,r30,8
	r25.s64 = r30.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r24,r10,r11
	r24.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r24,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r24.u32);
	// bl 0x8235d670
	sub_8235D670(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8235deb8
	sub_8235DEB8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// bne cr6,0x8235e888
	if (!cr6.eq) goto loc_8235E888;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8235da68
	sub_8235DA68(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// b 0x8235e8a0
	goto loc_8235E8A0;
loc_8235E888:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8235e1b8
	sub_8235E1B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8235E8A0:
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8235e8c8
	if (!cr0.eq) goto loc_8235E8C8;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8235deb8
	sub_8235DEB8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8235E8C8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235e0b0
	sub_8235E0B0(ctx, base);
	// mulli r11,r24,24
	r11.s64 = r24.s64 * 24;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_8235E794"))) PPC_WEAK_FUNC(sub_8235E794);
PPC_FUNC_IMPL(__imp__sub_8235E794) {
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

__attribute__((alias("__imp__sub_8235E7C8"))) PPC_WEAK_FUNC(sub_8235E7C8);
PPC_FUNC_IMPL(__imp__sub_8235E7C8) {
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
	// li r10,24
	ctx.r10.s64 = 24;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r27,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r27.u32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// addi r10,r31,244
	ctx.r10.s64 = r31.s64 + 244;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x8235e820
	if (cr6.lt) goto loc_8235E820;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_8235E820:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r25,r30,8
	r25.s64 = r30.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r24,r10,r11
	r24.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r24,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r24.u32);
	// bl 0x8235d670
	sub_8235D670(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8235deb8
	sub_8235DEB8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// bne cr6,0x8235e888
	if (!cr6.eq) goto loc_8235E888;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8235da68
	sub_8235DA68(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// b 0x8235e8a0
	goto loc_8235E8A0;
loc_8235E888:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8235e1b8
	sub_8235E1B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8235E8A0:
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8235e8c8
	if (!cr0.eq) goto loc_8235E8C8;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8235deb8
	sub_8235DEB8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8235E8C8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235e0b0
	sub_8235E0B0(ctx, base);
	// mulli r11,r24,24
	r11.s64 = r24.s64 * 24;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_8235E8EC"))) PPC_WEAK_FUNC(sub_8235E8EC);
PPC_FUNC_IMPL(__imp__sub_8235E8EC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-11196(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11196);
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,88(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235ddc8
	sub_8235DDC8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r3,r11,24
	ctx.r3.s64 = r11.s64 * 24;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// mflr r12
	// bl 0x8239bcfc
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// subf r11,r3,r30
	r11.s64 = r30.s64 - ctx.r3.s64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(r11.s32, 128, xer);
	// ble cr6,0x8235e98c
	if (!cr6.gt) goto loc_8235E98C;
	// addi r31,r3,128
	r31.s64 = ctx.r3.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8235e248
	sub_8235E248(ctx, base);
	// b 0x8235e980
	goto loc_8235E980;
loc_8235E96C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235d880
	sub_8235D880(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8235E980:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x8235e96c
	if (!cr6.eq) goto loc_8235E96C;
	// b 0x8235e994
	goto loc_8235E994;
loc_8235E98C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8235e248
	sub_8235E248(ctx, base);
loc_8235E994:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8235E8F4"))) PPC_WEAK_FUNC(sub_8235E8F4);
PPC_FUNC_IMPL(__imp__sub_8235E8F4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
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
	// lwz r30,88(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235ddc8
	sub_8235DDC8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r3,r11,24
	ctx.r3.s64 = r11.s64 * 24;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_8235E930"))) PPC_WEAK_FUNC(sub_8235E930);
PPC_FUNC_IMPL(__imp__sub_8235E930) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// subf r11,r3,r30
	r11.s64 = r30.s64 - ctx.r3.s64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(r11.s32, 128, xer);
	// ble cr6,0x8235e98c
	if (!cr6.gt) goto loc_8235E98C;
	// addi r31,r3,128
	r31.s64 = ctx.r3.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8235e248
	sub_8235E248(ctx, base);
	// b 0x8235e980
	goto loc_8235E980;
loc_8235E96C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235d880
	sub_8235D880(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8235E980:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x8235e96c
	if (!cr6.eq) goto loc_8235E96C;
	// b 0x8235e994
	goto loc_8235E994;
loc_8235E98C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8235e248
	sub_8235E248(ctx, base);
loc_8235E994:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8235E99C"))) PPC_WEAK_FUNC(sub_8235E99C);
PPC_FUNC_IMPL(__imp__sub_8235E99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235E9A0"))) PPC_WEAK_FUNC(sub_8235E9A0);
PPC_FUNC_IMPL(__imp__sub_8235E9A0) {
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
	// lwz r16,-11112(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11112);
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
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// bl 0x82361f78
	sub_82361F78(ctx, base);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// bl 0x8235e340
	sub_8235E340(ctx, base);
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

__attribute__((alias("__imp__sub_8235E9A8"))) PPC_WEAK_FUNC(sub_8235E9A8);
PPC_FUNC_IMPL(__imp__sub_8235E9A8) {
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
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// bl 0x82361f78
	sub_82361F78(ctx, base);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// bl 0x8235e340
	sub_8235E340(ctx, base);
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

__attribute__((alias("__imp__sub_8235E9F0"))) PPC_WEAK_FUNC(sub_8235E9F0);
PPC_FUNC_IMPL(__imp__sub_8235E9F0) {
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
	// bl 0x8235e340
	sub_8235E340(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235EA1C"))) PPC_WEAK_FUNC(sub_8235EA1C);
PPC_FUNC_IMPL(__imp__sub_8235EA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235EA20"))) PPC_WEAK_FUNC(sub_8235EA20);
PPC_FUNC_IMPL(__imp__sub_8235EA20) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// b 0x8235eab0
	goto loc_8235EAB0;
loc_8235EA44:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x8235eac0
	if (cr6.eq) goto loc_8235EAC0;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// addi r5,r31,-8
	ctx.r5.s64 = r31.s64 + -8;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// bl 0x8235d7d8
	sub_8235D7D8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// bl 0x8235dc10
	sub_8235DC10(ctx, base);
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
	// bl 0x8235ea20
	sub_8235EA20(ctx, base);
	// subf r11,r30,r29
	r11.s64 = r29.s64 - r30.s64;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_8235EAB0:
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(r11.s32, 128, xer);
	// bgt cr6,0x8235ea44
	if (cr6.gt) goto loc_8235EA44;
	// b 0x8235ead4
	goto loc_8235EAD4;
loc_8235EAC0:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8235e298
	sub_8235E298(ctx, base);
loc_8235EAD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8235EADC"))) PPC_WEAK_FUNC(sub_8235EADC);
PPC_FUNC_IMPL(__imp__sub_8235EADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235EAE0"))) PPC_WEAK_FUNC(sub_8235EAE0);
PPC_FUNC_IMPL(__imp__sub_8235EAE0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x8235eb18
	if (cr6.eq) goto loc_8235EB18;
	// bl 0x8235d9d8
	sub_8235D9D8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x8235eb34
	goto loc_8235EB34;
loc_8235EB18:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235e4a0
	sub_8235E4A0(ctx, base);
loc_8235EB34:
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

__attribute__((alias("__imp__sub_8235EB48"))) PPC_WEAK_FUNC(sub_8235EB48);
PPC_FUNC_IMPL(__imp__sub_8235EB48) {
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
	// beq cr6,0x8235eb90
	if (cr6.eq) goto loc_8235EB90;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8235eb80
	if (cr0.eq) goto loc_8235EB80;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_8235EB80:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x8235eba4
	goto loc_8235EBA4;
loc_8235EB90:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x8235e610
	sub_8235E610(ctx, base);
loc_8235EBA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235EBB4"))) PPC_WEAK_FUNC(sub_8235EBB4);
PPC_FUNC_IMPL(__imp__sub_8235EBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235EBB8"))) PPC_WEAK_FUNC(sub_8235EBB8);
PPC_FUNC_IMPL(__imp__sub_8235EBB8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x8235ebf0
	if (cr6.eq) goto loc_8235EBF0;
	// bl 0x8235da68
	sub_8235DA68(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x8235ec0c
	goto loc_8235EC0C;
loc_8235EBF0:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235e7c8
	sub_8235E7C8(ctx, base);
loc_8235EC0C:
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

__attribute__((alias("__imp__sub_8235EC20"))) PPC_WEAK_FUNC(sub_8235EC20);
PPC_FUNC_IMPL(__imp__sub_8235EC20) {
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
	// beq cr6,0x8235ec88
	if (cr6.eq) goto loc_8235EC88;
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// b 0x8235ec58
	goto loc_8235EC58;
loc_8235EC50:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
loc_8235EC58:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8235ec50
	if (!cr6.eq) goto loc_8235EC50;
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
	// bl 0x8235ea20
	sub_8235EA20(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235e930
	sub_8235E930(ctx, base);
loc_8235EC88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8235EC90"))) PPC_WEAK_FUNC(sub_8235EC90);
PPC_FUNC_IMPL(__imp__sub_8235EC90) {
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
	// lwz r16,-10992(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -10992);
	// mflr r12
	// bl 0x8239bce4
	// addi r31,r1,-464
	r31.s64 = ctx.r1.s64 + -464;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r25
	r27.u64 = r25.u64;
	// mr r24,r25
	r24.u64 = r25.u64;
	// mr r23,r25
	r23.u64 = r25.u64;
	// stw r27,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r27.u32);
	// stw r24,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r24.u32);
	// stw r23,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r23.u32);
	// stw r25,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r25.u32);
	// stw r25,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r25.u32);
	// stw r25,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r25.u32);
	// addi r30,r26,32
	r30.s64 = r26.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82361c70
	sub_82361C70(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,15740(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 15740);
	// bl 0x82361d90
	sub_82361D90(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8235ed04
	if (!cr0.eq) goto loc_8235ED04;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8235e3f0
	sub_8235E3F0(ctx, base);
	// b 0x8235efb4
	goto loc_8235EFB4;
loc_8235ED04:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82361e20
	sub_82361E20(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8235ed98
	if (!cr6.gt) goto loc_8235ED98;
loc_8235ED30:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,124
	ctx.r4.s64 = r31.s64 + 124;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// bl 0x8235eb48
	sub_8235EB48(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x823591a0
	sub_823591A0(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8235ed30
	if (cr6.lt) goto loc_8235ED30;
	// lwz r23,112(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r24,108(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r27,104(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 104);
loc_8235ED98:
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82361f20
	sub_82361F20(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8235ede0
	if (!cr6.eq) goto loc_8235EDE0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8235e3f0
	sub_8235E3F0(ctx, base);
	// subf r10,r24,r27
	ctx.r10.s64 = r27.s64 - r24.s64;
	// mr r11,r24
	r11.u64 = r24.u64;
	// b 0x8235edc8
	goto loc_8235EDC8;
loc_8235EDC0:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// subf r10,r11,r27
	ctx.r10.s64 = r27.s64 - r11.s64;
loc_8235EDC8:
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8235edc0
	if (!cr0.eq) goto loc_8235EDC0;
	// b 0x8235ef98
	goto loc_8235EF98;
loc_8235EDE0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82361c70
	sub_82361C70(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,15720(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 15720);
	// bl 0x82361d90
	sub_82361D90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// bl 0x82362170
	sub_82362170(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8235eeb8
	if (!cr6.gt) goto loc_8235EEB8;
	// lis r28,-32127
	r28.s64 = -2105475072;
loc_8235EE18:
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// lwz r4,15744(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 15744);
	// bl 0x82361d90
	sub_82361D90(ctx, base);
	// addi r4,r31,336
	ctx.r4.s64 = r31.s64 + 336;
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x82361e20
	sub_82361E20(ctx, base);
	// lwz r11,308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,116
	ctx.r4.s64 = r31.s64 + 116;
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r29,r11,-4
	r29.s64 = r11.s64 + -4;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82353118
	sub_82353118(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// bl 0x82359250
	sub_82359250(ctx, base);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// lwz r29,116(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// bl 0x82353768
	sub_82353768(ctx, base);
	// stw r29,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r29.u32);
	// addi r4,r31,256
	ctx.r4.s64 = r31.s64 + 256;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8235ebb8
	sub_8235EBB8(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x82361f20
	sub_82361F20(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8235ee18
	if (cr6.lt) goto loc_8235EE18;
loc_8235EEB8:
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// bl 0x82361f78
	sub_82361F78(ctx, base);
	// lis r11,-32202
	r11.s64 = -2110390272;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r5,r11,-11432
	ctx.r5.s64 = r11.s64 + -11432;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8235ec20
	sub_8235EC20(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8235ef68
	if (!cr6.gt) goto loc_8235EF68;
	// addi r28,r26,20
	r28.s64 = r26.s64 + 20;
	// addi r30,r27,4
	r30.s64 = r27.s64 + 4;
loc_8235EEEC:
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r11,r25
	r11.u64 = r25.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8235ef20
	if (!cr6.gt) goto loc_8235EF20;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r9,r8,20
	ctx.r9.s64 = ctx.r8.s64 + 20;
loc_8235EF04:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// beq cr6,0x8235ef20
	if (cr6.eq) goto loc_8235EF20;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8235ef04
	if (cr6.lt) goto loc_8235EF04;
loc_8235EF20:
	// mulli r10,r11,24
	ctx.r10.s64 = r11.s64 * 24;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// stw r11,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r11.u32);
	// stw r10,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r10.u32);
	// bl 0x82353768
	sub_82353768(ctx, base);
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8235eae0
	sub_8235EAE0(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x8235eeec
	if (cr6.lt) goto loc_8235EEEC;
loc_8235EF68:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8235e3f0
	sub_8235E3F0(ctx, base);
	// subf r10,r24,r27
	ctx.r10.s64 = r27.s64 - r24.s64;
	// mr r11,r24
	r11.u64 = r24.u64;
	// b 0x8235ef84
	goto loc_8235EF84;
loc_8235EF7C:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// subf r10,r11,r27
	ctx.r10.s64 = r27.s64 - r11.s64;
loc_8235EF84:
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8235ef7c
	if (!cr0.eq) goto loc_8235EF7C;
loc_8235EF98:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8235efb4
	if (cr6.eq) goto loc_8235EFB4;
	// subf r11,r27,r23
	r11.s64 = r23.s64 - r27.s64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8235EFB4:
	// addi r1,r31,464
	ctx.r1.s64 = r31.s64 + 464;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8235EC98"))) PPC_WEAK_FUNC(sub_8235EC98);
PPC_FUNC_IMPL(__imp__sub_8235EC98) {
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
	// addi r31,r1,-464
	r31.s64 = ctx.r1.s64 + -464;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r25
	r27.u64 = r25.u64;
	// mr r24,r25
	r24.u64 = r25.u64;
	// mr r23,r25
	r23.u64 = r25.u64;
	// stw r27,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r27.u32);
	// stw r24,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r24.u32);
	// stw r23,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r23.u32);
	// stw r25,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r25.u32);
	// stw r25,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r25.u32);
	// stw r25,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r25.u32);
	// addi r30,r26,32
	r30.s64 = r26.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82361c70
	sub_82361C70(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,15740(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 15740);
	// bl 0x82361d90
	sub_82361D90(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8235ed04
	if (!cr0.eq) goto loc_8235ED04;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8235e3f0
	sub_8235E3F0(ctx, base);
	// b 0x8235efb4
	goto loc_8235EFB4;
loc_8235ED04:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82361e20
	sub_82361E20(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8235ed98
	if (!cr6.gt) goto loc_8235ED98;
loc_8235ED30:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,124
	ctx.r4.s64 = r31.s64 + 124;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// bl 0x8235eb48
	sub_8235EB48(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x823591a0
	sub_823591A0(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8235ed30
	if (cr6.lt) goto loc_8235ED30;
	// lwz r23,112(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r24,108(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r27,104(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 104);
loc_8235ED98:
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82361f20
	sub_82361F20(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8235ede0
	if (!cr6.eq) goto loc_8235EDE0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8235e3f0
	sub_8235E3F0(ctx, base);
	// subf r10,r24,r27
	ctx.r10.s64 = r27.s64 - r24.s64;
	// mr r11,r24
	r11.u64 = r24.u64;
	// b 0x8235edc8
	goto loc_8235EDC8;
loc_8235EDC0:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// subf r10,r11,r27
	ctx.r10.s64 = r27.s64 - r11.s64;
loc_8235EDC8:
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8235edc0
	if (!cr0.eq) goto loc_8235EDC0;
	// b 0x8235ef98
	goto loc_8235EF98;
loc_8235EDE0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82361c70
	sub_82361C70(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,15720(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 15720);
	// bl 0x82361d90
	sub_82361D90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// bl 0x82362170
	sub_82362170(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8235eeb8
	if (!cr6.gt) goto loc_8235EEB8;
	// lis r28,-32127
	r28.s64 = -2105475072;
loc_8235EE18:
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// lwz r4,15744(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 15744);
	// bl 0x82361d90
	sub_82361D90(ctx, base);
	// addi r4,r31,336
	ctx.r4.s64 = r31.s64 + 336;
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x82361e20
	sub_82361E20(ctx, base);
	// lwz r11,308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,116
	ctx.r4.s64 = r31.s64 + 116;
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r29,r11,-4
	r29.s64 = r11.s64 + -4;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82353118
	sub_82353118(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// bl 0x82359250
	sub_82359250(ctx, base);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// lwz r29,116(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// bl 0x82353768
	sub_82353768(ctx, base);
	// stw r29,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r29.u32);
	// addi r4,r31,256
	ctx.r4.s64 = r31.s64 + 256;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8235ebb8
	sub_8235EBB8(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x82361f20
	sub_82361F20(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8235ee18
	if (cr6.lt) goto loc_8235EE18;
loc_8235EEB8:
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// bl 0x82361f78
	sub_82361F78(ctx, base);
	// lis r11,-32202
	r11.s64 = -2110390272;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r5,r11,-11432
	ctx.r5.s64 = r11.s64 + -11432;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8235ec20
	sub_8235EC20(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8235ef68
	if (!cr6.gt) goto loc_8235EF68;
	// addi r28,r26,20
	r28.s64 = r26.s64 + 20;
	// addi r30,r27,4
	r30.s64 = r27.s64 + 4;
loc_8235EEEC:
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r11,r25
	r11.u64 = r25.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8235ef20
	if (!cr6.gt) goto loc_8235EF20;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r9,r8,20
	ctx.r9.s64 = ctx.r8.s64 + 20;
loc_8235EF04:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// beq cr6,0x8235ef20
	if (cr6.eq) goto loc_8235EF20;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8235ef04
	if (cr6.lt) goto loc_8235EF04;
loc_8235EF20:
	// mulli r10,r11,24
	ctx.r10.s64 = r11.s64 * 24;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// stw r11,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r11.u32);
	// stw r10,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r10.u32);
	// bl 0x82353768
	sub_82353768(ctx, base);
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8235eae0
	sub_8235EAE0(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x8235eeec
	if (cr6.lt) goto loc_8235EEEC;
loc_8235EF68:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8235e3f0
	sub_8235E3F0(ctx, base);
	// subf r10,r24,r27
	ctx.r10.s64 = r27.s64 - r24.s64;
	// mr r11,r24
	r11.u64 = r24.u64;
	// b 0x8235ef84
	goto loc_8235EF84;
loc_8235EF7C:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// subf r10,r11,r27
	ctx.r10.s64 = r27.s64 - r11.s64;
loc_8235EF84:
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8235ef7c
	if (!cr0.eq) goto loc_8235EF7C;
loc_8235EF98:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8235efb4
	if (cr6.eq) goto loc_8235EFB4;
	// subf r11,r27,r23
	r11.s64 = r23.s64 - r27.s64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8235EFB4:
	// addi r1,r31,464
	ctx.r1.s64 = r31.s64 + 464;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8235EFBC"))) PPC_WEAK_FUNC(sub_8235EFBC);
PPC_FUNC_IMPL(__imp__sub_8235EFBC) {
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
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
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

__attribute__((alias("__imp__sub_8235EFE4"))) PPC_WEAK_FUNC(sub_8235EFE4);
PPC_FUNC_IMPL(__imp__sub_8235EFE4) {
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
	// bl 0x8235e3f0
	sub_8235E3F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235F00C"))) PPC_WEAK_FUNC(sub_8235F00C);
PPC_FUNC_IMPL(__imp__sub_8235F00C) {
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
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82361f20
	sub_82361F20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235F034"))) PPC_WEAK_FUNC(sub_8235F034);
PPC_FUNC_IMPL(__imp__sub_8235F034) {
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
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// bl 0x82361f78
	sub_82361F78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235F05C"))) PPC_WEAK_FUNC(sub_8235F05C);
PPC_FUNC_IMPL(__imp__sub_8235F05C) {
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
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x82361f20
	sub_82361F20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235F084"))) PPC_WEAK_FUNC(sub_8235F084);
PPC_FUNC_IMPL(__imp__sub_8235F084) {
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
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
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

__attribute__((alias("__imp__sub_8235F0AC"))) PPC_WEAK_FUNC(sub_8235F0AC);
PPC_FUNC_IMPL(__imp__sub_8235F0AC) {
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
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
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

__attribute__((alias("__imp__sub_8235F0D4"))) PPC_WEAK_FUNC(sub_8235F0D4);
PPC_FUNC_IMPL(__imp__sub_8235F0D4) {
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
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x8235d460
	sub_8235D460(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235F0FC"))) PPC_WEAK_FUNC(sub_8235F0FC);
PPC_FUNC_IMPL(__imp__sub_8235F0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235F100"))) PPC_WEAK_FUNC(sub_8235F100);
PPC_FUNC_IMPL(__imp__sub_8235F100) {
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
	// lwz r16,-10768(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -10768);
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
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// bl 0x82361ff0
	sub_82361FF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235d380
	sub_8235D380(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235ec98
	sub_8235EC98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235d468
	sub_8235D468(ctx, base);
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

__attribute__((alias("__imp__sub_8235F108"))) PPC_WEAK_FUNC(sub_8235F108);
PPC_FUNC_IMPL(__imp__sub_8235F108) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,20
	r11.s64 = r30.s64 + 20;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// bl 0x82361ff0
	sub_82361FF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235d380
	sub_8235D380(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235ec98
	sub_8235EC98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235d468
	sub_8235D468(ctx, base);
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

__attribute__((alias("__imp__sub_8235F17C"))) PPC_WEAK_FUNC(sub_8235F17C);
PPC_FUNC_IMPL(__imp__sub_8235F17C) {
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
	// bl 0x8235e340
	sub_8235E340(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235F1A8"))) PPC_WEAK_FUNC(sub_8235F1A8);
PPC_FUNC_IMPL(__imp__sub_8235F1A8) {
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
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x82361f78
	sub_82361F78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235F1D4"))) PPC_WEAK_FUNC(sub_8235F1D4);
PPC_FUNC_IMPL(__imp__sub_8235F1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235F1D8"))) PPC_WEAK_FUNC(sub_8235F1D8);
PPC_FUNC_IMPL(__imp__sub_8235F1D8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,2120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2120);
	// lwz r10,2188(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2188);
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,2188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2188);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stw r11,2188(r31)
	PPC_STORE_U32(r31.u32 + 2188, r11.u32);
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

__attribute__((alias("__imp__sub_8235F22C"))) PPC_WEAK_FUNC(sub_8235F22C);
PPC_FUNC_IMPL(__imp__sub_8235F22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235F230"))) PPC_WEAK_FUNC(sub_8235F230);
PPC_FUNC_IMPL(__imp__sub_8235F230) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,2188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2188);
	// lwz r10,2108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2108);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8235f2a8
	if (!cr6.gt) goto loc_8235F2A8;
loc_8235F25C:
	// lwz r11,2108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2108);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,2108(r31)
	PPC_STORE_U32(r31.u32 + 2108, ctx.r3.u32);
	// lwz r11,2188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2188);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8235f25c
	if (cr6.gt) goto loc_8235F25C;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-10712
	ctx.r4.s64 = r11.s64 + -10712;
	// bl 0x82354ab0
	sub_82354AB0(ctx, base);
	// lwz r5,2188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 2188);
	// lwz r4,2112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 2112);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r3,2112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2112);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// stw r29,2112(r31)
	PPC_STORE_U32(r31.u32 + 2112, r29.u32);
loc_8235F2A8:
	// lwz r11,2112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2112);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,2188(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2188);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,2188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2188);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stw r11,2188(r31)
	PPC_STORE_U32(r31.u32 + 2188, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8235F2D4"))) PPC_WEAK_FUNC(sub_8235F2D4);
PPC_FUNC_IMPL(__imp__sub_8235F2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235F2D8"))) PPC_WEAK_FUNC(sub_8235F2D8);
PPC_FUNC_IMPL(__imp__sub_8235F2D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r9,-13634
	ctx.r9.s64 = -893517824;
	// ori r9,r9,57007
	ctx.r9.u64 = ctx.r9.u64 | 57007;
	// lwz r10,2196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2196);
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bne cr6,0x8235f324
	if (!cr6.eq) goto loc_8235F324;
	// lwz r10,2180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2180);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r10,r10,528
	ctx.r10.s64 = ctx.r10.s64 + 528;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_8235F324:
	// lwz r9,2180(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 2180);
	// lwz r10,2108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2108);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r9,r9,528
	ctx.r9.s64 = ctx.r9.s64 + 528;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r4,r5,r11
	ctx.r4.s64 = r11.s64 - ctx.r5.s64;
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

__attribute__((alias("__imp__sub_8235F358"))) PPC_WEAK_FUNC(sub_8235F358);
PPC_FUNC_IMPL(__imp__sub_8235F358) {
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
	// lis r10,-13378
	ctx.r10.s64 = -876740608;
	// ori r10,r10,57007
	ctx.r10.u64 = ctx.r10.u64 | 57007;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r30,2188(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 2188);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8235f3a8
	if (!cr6.eq) goto loc_8235F3A8;
	// lwz r11,2108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2108);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,2112(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 2112);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82362310
	sub_82362310(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8235F3A8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,2112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 2112);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// beq cr6,0x8235f3d4
	if (cr6.eq) goto loc_8235F3D4;
	// li r11,1
	r11.s64 = 1;
	// stb r11,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r11.u8);
loc_8235F3D4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_8235F3F0"))) PPC_WEAK_FUNC(sub_8235F3F0);
PPC_FUNC_IMPL(__imp__sub_8235F3F0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-13634
	r11.s64 = -893517824;
	// ori r11,r11,57007
	r11.u64 = r11.u64 | 57007;
	// lwz r10,2196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2196);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// beq cr6,0x8235f47c
	if (cr6.eq) goto loc_8235F47C;
	// lis r8,-13122
	ctx.r8.s64 = -859963392;
	// lwz r10,2108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2108);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r8,r8,57007
	ctx.r8.u64 = ctx.r8.u64 | 57007;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// lwz r9,2180(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 2180);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r9,r9,528
	ctx.r9.s64 = ctx.r9.s64 + 528;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// bne cr6,0x8235f460
	if (!cr6.eq) goto loc_8235F460;
	// addi r4,r11,-18
	ctx.r4.s64 = r11.s64 + -18;
	// subf r11,r11,r5
	r11.s64 = ctx.r5.s64 - r11.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,10
	ctx.r3.s64 = r11.s64 + 10;
	// b 0x8235f46c
	goto loc_8235F46C;
loc_8235F460:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// subf r11,r11,r5
	r11.s64 = ctx.r5.s64 - r11.s64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
loc_8235F46C:
	// bl 0x82362278
	sub_82362278(ctx, base);
	// lwz r11,2196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2196);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8235F47C:
	// lwz r11,2180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2180);
	// addi r11,r11,528
	r11.s64 = r11.s64 + 528;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// stw r11,2120(r31)
	PPC_STORE_U32(r31.u32 + 2120, r11.u32);
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

__attribute__((alias("__imp__sub_8235F4A4"))) PPC_WEAK_FUNC(sub_8235F4A4);
PPC_FUNC_IMPL(__imp__sub_8235F4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235F4A8"))) PPC_WEAK_FUNC(sub_8235F4A8);
PPC_FUNC_IMPL(__imp__sub_8235F4A8) {
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
	// lwz r16,-10640(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -10640);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x82359130
	sub_82359130(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r11,r11,-10692
	r11.s64 = r11.s64 + -10692;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// addi r28,r30,44
	r28.s64 = r30.s64 + 44;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r27,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r27.u32);
	// lis r9,-13378
	ctx.r9.s64 = -876740608;
	// bne 0x8235f510
	if (!cr0.eq) goto loc_8235F510;
	// lis r9,-13634
	ctx.r9.s64 = -893517824;
loc_8235F510:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r29,0
	r29.s64 = 0;
	// ori r9,r9,57007
	ctx.r9.u64 = ctx.r9.u64 | 57007;
	// addi r11,r30,2128
	r11.s64 = r30.s64 + 2128;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// subfic r10,r27,0
	xer.ca = r27.u32 <= 0;
	ctx.r10.s64 = 0 - r27.s64;
	// stw r29,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r29.u32);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r9,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// stw r29,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r29.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r29,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r29.u32);
	// andi. r10,r10,767
	ctx.r10.u64 = ctx.r10.u64 & 767;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// li r10,2064
	ctx.r10.s64 = 2064;
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// std r29,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r29.u64);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stw r29,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r29.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r29.u32);
	// lwz r10,18972(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18972);
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// stfs f0,40(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// stw r29,36(r11)
	PPC_STORE_U32(r11.u32 + 36, r29.u32);
	// stw r25,2176(r30)
	PPC_STORE_U32(r30.u32 + 2176, r25.u32);
	// stw r9,2180(r30)
	PPC_STORE_U32(r30.u32 + 2180, ctx.r9.u32);
	// stb r29,2184(r30)
	PPC_STORE_U8(r30.u32 + 2184, r29.u8);
	// stw r29,2188(r30)
	PPC_STORE_U32(r30.u32 + 2188, r29.u32);
	// stw r29,2112(r30)
	PPC_STORE_U32(r30.u32 + 2112, r29.u32);
	// stw r29,2116(r30)
	PPC_STORE_U32(r30.u32 + 2116, r29.u32);
	// stw r29,2120(r30)
	PPC_STORE_U32(r30.u32 + 2120, r29.u32);
	// bl 0x822767f8
	sub_822767F8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,36(r30)
	PPC_STORE_U8(r30.u32 + 36, r11.u8);
	// bne 0x8235f618
	if (!cr0.eq) goto loc_8235F618;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// li r5,2064
	ctx.r5.s64 = 2064;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bne cr6,0x8235f5fc
	if (!cr6.eq) goto loc_8235F5FC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,2176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 2176);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r11,-10712
	ctx.r4.s64 = r11.s64 + -10712;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,2108(r30)
	PPC_STORE_U32(r30.u32 + 2108, ctx.r3.u32);
	// bl 0x82354ab0
	sub_82354AB0(ctx, base);
	// stw r3,2112(r30)
	PPC_STORE_U32(r30.u32 + 2112, ctx.r3.u32);
	// stw r29,2180(r30)
	PPC_STORE_U32(r30.u32 + 2180, r29.u32);
	// b 0x8235f618
	goto loc_8235F618;
loc_8235F5FC:
	// li r11,1
	r11.s64 = 1;
	// stw r29,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r29.u32);
	// stb r11,2192(r30)
	PPC_STORE_U8(r30.u32 + 2192, r11.u8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8235F618:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8235F4B0"))) PPC_WEAK_FUNC(sub_8235F4B0);
PPC_FUNC_IMPL(__imp__sub_8235F4B0) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x82359130
	sub_82359130(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r11,r11,-10692
	r11.s64 = r11.s64 + -10692;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// addi r28,r30,44
	r28.s64 = r30.s64 + 44;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r27,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r27.u32);
	// lis r9,-13378
	ctx.r9.s64 = -876740608;
	// bne 0x8235f510
	if (!cr0.eq) goto loc_8235F510;
	// lis r9,-13634
	ctx.r9.s64 = -893517824;
loc_8235F510:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r29,0
	r29.s64 = 0;
	// ori r9,r9,57007
	ctx.r9.u64 = ctx.r9.u64 | 57007;
	// addi r11,r30,2128
	r11.s64 = r30.s64 + 2128;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// subfic r10,r27,0
	xer.ca = r27.u32 <= 0;
	ctx.r10.s64 = 0 - r27.s64;
	// stw r29,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r29.u32);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r9,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// stw r29,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r29.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r29,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r29.u32);
	// andi. r10,r10,767
	ctx.r10.u64 = ctx.r10.u64 & 767;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// li r10,2064
	ctx.r10.s64 = 2064;
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// std r29,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r29.u64);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stw r29,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r29.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r29.u32);
	// lwz r10,18972(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18972);
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// stfs f0,40(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// stw r29,36(r11)
	PPC_STORE_U32(r11.u32 + 36, r29.u32);
	// stw r25,2176(r30)
	PPC_STORE_U32(r30.u32 + 2176, r25.u32);
	// stw r9,2180(r30)
	PPC_STORE_U32(r30.u32 + 2180, ctx.r9.u32);
	// stb r29,2184(r30)
	PPC_STORE_U8(r30.u32 + 2184, r29.u8);
	// stw r29,2188(r30)
	PPC_STORE_U32(r30.u32 + 2188, r29.u32);
	// stw r29,2112(r30)
	PPC_STORE_U32(r30.u32 + 2112, r29.u32);
	// stw r29,2116(r30)
	PPC_STORE_U32(r30.u32 + 2116, r29.u32);
	// stw r29,2120(r30)
	PPC_STORE_U32(r30.u32 + 2120, r29.u32);
	// bl 0x822767f8
	sub_822767F8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,36(r30)
	PPC_STORE_U8(r30.u32 + 36, r11.u8);
	// bne 0x8235f618
	if (!cr0.eq) goto loc_8235F618;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// li r5,2064
	ctx.r5.s64 = 2064;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bne cr6,0x8235f5fc
	if (!cr6.eq) goto loc_8235F5FC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,2176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 2176);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r11,-10712
	ctx.r4.s64 = r11.s64 + -10712;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,2108(r30)
	PPC_STORE_U32(r30.u32 + 2108, ctx.r3.u32);
	// bl 0x82354ab0
	sub_82354AB0(ctx, base);
	// stw r3,2112(r30)
	PPC_STORE_U32(r30.u32 + 2112, ctx.r3.u32);
	// stw r29,2180(r30)
	PPC_STORE_U32(r30.u32 + 2180, r29.u32);
	// b 0x8235f618
	goto loc_8235F618;
loc_8235F5FC:
	// li r11,1
	r11.s64 = 1;
	// stw r29,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r29.u32);
	// stb r11,2192(r30)
	PPC_STORE_U8(r30.u32 + 2192, r11.u8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8235F618:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8235F624"))) PPC_WEAK_FUNC(sub_8235F624);
PPC_FUNC_IMPL(__imp__sub_8235F624) {
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
	// bl 0x82359150
	sub_82359150(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235F64C"))) PPC_WEAK_FUNC(sub_8235F64C);
PPC_FUNC_IMPL(__imp__sub_8235F64C) {
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
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
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

__attribute__((alias("__imp__sub_8235F678"))) PPC_WEAK_FUNC(sub_8235F678);
PPC_FUNC_IMPL(__imp__sub_8235F678) {
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
	// li r29,0
	r29.s64 = 0;
	// li r28,1
	r28.s64 = 1;
	// lbz r11,2192(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2192);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8235f8b0
	if (cr0.eq) goto loc_8235F8B0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8235f6c4
	if (!cr0.eq) goto loc_8235F6C4;
loc_8235F6BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8235f940
	goto loc_8235F940;
loc_8235F6C4:
	// stb r29,2192(r31)
	PPC_STORE_U8(r31.u32 + 2192, r29.u8);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r8,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r8,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r8,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r8,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8235f7a4
	if (!cr6.gt) goto loc_8235F7A4;
	// addi r10,r31,60
	ctx.r10.s64 = r31.s64 + 60;
loc_8235F76C:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r8,24,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// blt cr6,0x8235f76c
	if (cr6.lt) goto loc_8235F76C;
loc_8235F7A4:
	// lis r10,-13634
	ctx.r10.s64 = -893517824;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// ori r30,r10,57007
	r30.u64 = ctx.r10.u64 | 57007;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x8235f808
	if (cr6.eq) goto loc_8235F808;
	// lis r10,-13122
	ctx.r10.s64 = -859963392;
	// ori r10,r10,57007
	ctx.r10.u64 = ctx.r10.u64 | 57007;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8235f808
	if (cr6.eq) goto loc_8235F808;
	// lis r10,-13378
	ctx.r10.s64 = -876740608;
	// ori r10,r10,57007
	ctx.r10.u64 = ctx.r10.u64 | 57007;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8235f808
	if (cr6.eq) goto loc_8235F808;
	// lis r11,-13634
	r11.s64 = -893517824;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r29,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r29.u32);
	// ori r11,r11,57007
	r11.u64 = r11.u64 | 57007;
	// stw r28,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r28.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
loc_8235F808:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// stw r11,2108(r31)
	PPC_STORE_U32(r31.u32 + 2108, r11.u32);
	// beq cr6,0x8235f824
	if (cr6.eq) goto loc_8235F824;
	// addi r11,r11,256
	r11.s64 = r11.s64 + 256;
	// stw r11,2108(r31)
	PPC_STORE_U32(r31.u32 + 2108, r11.u32);
loc_8235F824:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r30,r11,-10712
	r30.s64 = r11.s64 + -10712;
	// ble cr6,0x8235f84c
	if (!cr6.gt) goto loc_8235F84C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,2108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2108);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82354ab0
	sub_82354AB0(ctx, base);
	// stw r3,2112(r31)
	PPC_STORE_U32(r31.u32 + 2112, ctx.r3.u32);
loc_8235F84C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,2108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2108);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82354ab0
	sub_82354AB0(ctx, base);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r11,r31,60
	r11.s64 = r31.s64 + 60;
	// stw r3,2116(r31)
	PPC_STORE_U32(r31.u32 + 2116, ctx.r3.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,2180(r31)
	PPC_STORE_U32(r31.u32 + 2180, r29.u32);
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r9,2196(r31)
	PPC_STORE_U32(r31.u32 + 2196, ctx.r9.u32);
	// stw r11,2200(r31)
	PPC_STORE_U32(r31.u32 + 2200, r11.u32);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,2188(r31)
	PPC_STORE_U32(r31.u32 + 2188, r11.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235f2d8
	sub_8235F2D8(ctx, base);
loc_8235F8B0:
	// lwz r11,2196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2196);
	// lwz r10,2188(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2188);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x8235f93c
	if (cr6.lt) goto loc_8235F93C;
	// lwz r10,2200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2200);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stb r29,2184(r31)
	PPC_STORE_U8(r31.u32 + 2184, r29.u8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8235f6bc
	if (cr6.eq) goto loc_8235F6BC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235f6bc
	if (cr0.eq) goto loc_8235F6BC;
	// lwz r9,2180(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 2180);
	// lwz r11,2196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2196);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r10,2200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2200);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r29,2188(r31)
	PPC_STORE_U32(r31.u32 + 2188, r29.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r28,2184(r31)
	PPC_STORE_U8(r31.u32 + 2184, r28.u8);
	// addi r8,r11,4
	ctx.r8.s64 = r11.s64 + 4;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// stw r11,2196(r31)
	PPC_STORE_U32(r31.u32 + 2196, r11.u32);
	// stw r9,2180(r31)
	PPC_STORE_U32(r31.u32 + 2180, ctx.r9.u32);
	// beq cr6,0x8235f934
	if (cr6.eq) goto loc_8235F934;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235f2d8
	sub_8235F2D8(ctx, base);
loc_8235F934:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235f3f0
	sub_8235F3F0(ctx, base);
loc_8235F93C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8235F940:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8235F948"))) PPC_WEAK_FUNC(sub_8235F948);
PPC_FUNC_IMPL(__imp__sub_8235F948) {
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
	// addi r30,r31,2188
	r30.s64 = r31.s64 + 2188;
	// lwz r11,2176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2176);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x8235f97c
	if (!cr6.lt) goto loc_8235F97C;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235f9e0
	if (cr0.eq) goto loc_8235F9E0;
loc_8235F97C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235f358
	sub_8235F358(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r10,r31,56
	ctx.r10.s64 = r31.s64 + 56;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r11,r11,15
	r11.s64 = r11.s64 + 15;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r3.u32);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// blt cr6,0x8235f9c0
	if (cr6.lt) goto loc_8235F9C0;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8235F9C0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r3,r9
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, xer);
	// blt cr6,0x8235f9d0
	if (cr6.lt) goto loc_8235F9D0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_8235F9D0:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
loc_8235F9E0:
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

__attribute__((alias("__imp__sub_8235F9F8"))) PPC_WEAK_FUNC(sub_8235F9F8);
PPC_FUNC_IMPL(__imp__sub_8235F9F8) {
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
	// lis r11,-32139
	r11.s64 = -2106261504;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-28192
	ctx.r6.s64 = r11.s64 + -28192;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,20060
	ctx.r5.s64 = r11.s64 + 20060;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235fa38
	if (cr0.eq) goto loc_8235FA38;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8235f948
	sub_8235F948(ctx, base);
loc_8235FA38:
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

__attribute__((alias("__imp__sub_8235FA50"))) PPC_WEAK_FUNC(sub_8235FA50);
PPC_FUNC_IMPL(__imp__sub_8235FA50) {
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
	// lwz r16,-10560(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -10560);
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
	// addi r11,r11,-10692
	r11.s64 = r11.s64 + -10692;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lbz r11,36(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 36);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8235fbb8
	if (!cr0.eq) goto loc_8235FBB8;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8235fbb8
	if (!cr6.eq) goto loc_8235FBB8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8235f948
	sub_8235F948(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8235fb0c
	if (!cr6.gt) goto loc_8235FB0C;
	// addi r10,r30,60
	ctx.r10.s64 = r30.s64 + 60;
loc_8235FAD4:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r8,24,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// blt cr6,0x8235fad4
	if (cr6.lt) goto loc_8235FAD4;
loc_8235FB0C:
	// addi r4,r30,44
	ctx.r4.s64 = r30.s64 + 44;
	// li r5,2064
	ctx.r5.s64 = 2064;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8235FBB8:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235fbd8
	if (cr0.eq) goto loc_8235FBD8;
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
loc_8235FBD8:
	// lwz r3,2112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 2112);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// lwz r3,2116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 2116);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359150
	sub_82359150(ctx, base);
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

__attribute__((alias("__imp__sub_8235FA58"))) PPC_WEAK_FUNC(sub_8235FA58);
PPC_FUNC_IMPL(__imp__sub_8235FA58) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-10692
	r11.s64 = r11.s64 + -10692;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lbz r11,36(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 36);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8235fbb8
	if (!cr0.eq) goto loc_8235FBB8;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8235fbb8
	if (!cr6.eq) goto loc_8235FBB8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8235f948
	sub_8235F948(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8235fb0c
	if (!cr6.gt) goto loc_8235FB0C;
	// addi r10,r30,60
	ctx.r10.s64 = r30.s64 + 60;
loc_8235FAD4:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r8,24,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// blt cr6,0x8235fad4
	if (cr6.lt) goto loc_8235FAD4;
loc_8235FB0C:
	// addi r4,r30,44
	ctx.r4.s64 = r30.s64 + 44;
	// li r5,2064
	ctx.r5.s64 = 2064;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8235FBB8:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235fbd8
	if (cr0.eq) goto loc_8235FBD8;
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
loc_8235FBD8:
	// lwz r3,2112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 2112);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// lwz r3,2116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 2116);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359150
	sub_82359150(ctx, base);
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

__attribute__((alias("__imp__sub_8235FC10"))) PPC_WEAK_FUNC(sub_8235FC10);
PPC_FUNC_IMPL(__imp__sub_8235FC10) {
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
	// bl 0x82359150
	sub_82359150(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235FC38"))) PPC_WEAK_FUNC(sub_8235FC38);
PPC_FUNC_IMPL(__imp__sub_8235FC38) {
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
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
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

__attribute__((alias("__imp__sub_8235FC64"))) PPC_WEAK_FUNC(sub_8235FC64);
PPC_FUNC_IMPL(__imp__sub_8235FC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235FC68"))) PPC_WEAK_FUNC(sub_8235FC68);
PPC_FUNC_IMPL(__imp__sub_8235FC68) {
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
	// bl 0x8235fa58
	sub_8235FA58(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235fc98
	if (cr0.eq) goto loc_8235FC98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_8235FC98:
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

__attribute__((alias("__imp__sub_8235FCB4"))) PPC_WEAK_FUNC(sub_8235FCB4);
PPC_FUNC_IMPL(__imp__sub_8235FCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235FCB8"))) PPC_WEAK_FUNC(sub_8235FCB8);
PPC_FUNC_IMPL(__imp__sub_8235FCB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8235fd0c
	if (cr6.lt) goto loc_8235FD0C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x8235c968
	sub_8235C968(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,8720
	ctx.r3.s64 = r11.s64 + 8720;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x822b20f8
	sub_822B20F8(ctx, base);
	// b 0x8235fd14
	goto loc_8235FD14;
loc_8235FD0C:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r11,-10496
	ctx.r3.s64 = r11.s64 + -10496;
loc_8235FD14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235FD24"))) PPC_WEAK_FUNC(sub_8235FD24);
PPC_FUNC_IMPL(__imp__sub_8235FD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235FD28"))) PPC_WEAK_FUNC(sub_8235FD28);
PPC_FUNC_IMPL(__imp__sub_8235FD28) {
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
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82361980
	sub_82361980(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235FD60"))) PPC_WEAK_FUNC(sub_8235FD60);
PPC_FUNC_IMPL(__imp__sub_8235FD60) {
	PPC_FUNC_PROLOGUE();
	// b 0x82358b38
	sub_82358B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235FD64"))) PPC_WEAK_FUNC(sub_8235FD64);
PPC_FUNC_IMPL(__imp__sub_8235FD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235FD68"))) PPC_WEAK_FUNC(sub_8235FD68);
PPC_FUNC_IMPL(__imp__sub_8235FD68) {
	PPC_FUNC_PROLOGUE();
	// b 0x82358b40
	sub_82358B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235FD6C"))) PPC_WEAK_FUNC(sub_8235FD6C);
PPC_FUNC_IMPL(__imp__sub_8235FD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235FD70"))) PPC_WEAK_FUNC(sub_8235FD70);
PPC_FUNC_IMPL(__imp__sub_8235FD70) {
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
	// addis r31,r3,2
	r31.s64 = ctx.r3.s64 + 131072;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r31,r31,-32368
	r31.s64 = r31.s64 + -32368;
	// addi r4,r11,16928
	ctx.r4.s64 = r11.s64 + 16928;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_8235FDB4"))) PPC_WEAK_FUNC(sub_8235FDB4);
PPC_FUNC_IMPL(__imp__sub_8235FDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235FDB8"))) PPC_WEAK_FUNC(sub_8235FDB8);
PPC_FUNC_IMPL(__imp__sub_8235FDB8) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-10468
	ctx.r4.s64 = r11.s64 + -10468;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r29,r11,-32168
	r29.s64 = r11.s64 + -32168;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// addi r28,r11,-10472
	r28.s64 = r11.s64 + -10472;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r27,r11,-10480
	r27.s64 = r11.s64 + -10480;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82357818
	sub_82357818(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823619f8
	sub_823619F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8235FE2C"))) PPC_WEAK_FUNC(sub_8235FE2C);
PPC_FUNC_IMPL(__imp__sub_8235FE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8235FE30"))) PPC_WEAK_FUNC(sub_8235FE30);
PPC_FUNC_IMPL(__imp__sub_8235FE30) {
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
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// li r30,0
	r30.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// beq cr6,0x8235fe74
	if (cr6.eq) goto loc_8235FE74;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// b 0x8235febc
	goto loc_8235FEBC;
loc_8235FE74:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x8235feac
	if (cr6.eq) goto loc_8235FEAC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82691148
	sub_82691148(ctx, base);
	// lis r11,16383
	r11.s64 = 1073676288;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8235fea0
	if (!cr6.gt) goto loc_8235FEA0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8235FEA0:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x8235feb4
	goto loc_8235FEB4;
loc_8235FEAC:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_8235FEB4:
	// li r11,1
	r11.s64 = 1;
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
loc_8235FEBC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8235fef0
	if (!cr6.gt) goto loc_8235FEF0;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8235FED0:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stwx r8,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x8235fed0
	if (cr6.lt) goto loc_8235FED0;
loc_8235FEF0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_8235FF10"))) PPC_WEAK_FUNC(sub_8235FF10);
PPC_FUNC_IMPL(__imp__sub_8235FF10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-2208(r1)
	ea = -2208 + ctx.r1.u32;
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
	// bl 0x82357518
	sub_82357518(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82357518
	sub_82357518(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82357518
	sub_82357518(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823571b0
	sub_823571B0(ctx, base);
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8235FF78"))) PPC_WEAK_FUNC(sub_8235FF78);
PPC_FUNC_IMPL(__imp__sub_8235FF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-2208(r1)
	ea = -2208 + ctx.r1.u32;
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
	// bl 0x82357718
	sub_82357718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82357518
	sub_82357518(ctx, base);
	// clrlwi r4,r30,24
	ctx.r4.u64 = r30.u32 & 0xFF;
	// bl 0x823573c0
	sub_823573C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823573c0
	sub_823573C0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823573c0
	sub_823573C0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823573c0
	sub_823573C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823571b0
	sub_823571B0(ctx, base);
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8235FFE0"))) PPC_WEAK_FUNC(sub_8235FFE0);
PPC_FUNC_IMPL(__imp__sub_8235FFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
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
	// bl 0x823573c0
	sub_823573C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823573c0
	sub_823573C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823571b0
	sub_823571B0(ctx, base);
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82360030"))) PPC_WEAK_FUNC(sub_82360030);
PPC_FUNC_IMPL(__imp__sub_82360030) {
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
	// beq 0x8236009c
	if (cr0.eq) goto loc_8236009C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823600cc
	if (!cr0.eq) goto loc_823600CC;
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
	// beq 0x82360094
	if (cr0.eq) goto loc_82360094;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x823600d0
	goto loc_823600D0;
loc_82360094:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x823600d0
	goto loc_823600D0;
loc_8236009C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82360094
	if (!cr0.eq) goto loc_82360094;
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
	// bne 0x823600d0
	if (!cr0.eq) goto loc_823600D0;
loc_823600CC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_823600D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823600D8"))) PPC_WEAK_FUNC(sub_823600D8);
PPC_FUNC_IMPL(__imp__sub_823600D8) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r31,r30,-4
	r31.s64 = r30.s64 + -4;
	// b 0x82360108
	goto loc_82360108;
loc_823600F8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
loc_82360108:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823600f8
	if (!cr0.eq) goto loc_823600F8;
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82360130"))) PPC_WEAK_FUNC(sub_82360130);
PPC_FUNC_IMPL(__imp__sub_82360130) {
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
	// stw r6,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// addze r30,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r30.s64 = temp.s64;
	// b 0x8236019c
	goto loc_8236019C;
loc_82360160:
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// add r28,r11,r29
	r28.u64 = r11.u64 + r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823601a4
	if (cr0.eq) goto loc_823601A4;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,-1
	ctx.r9.s64 = r30.s64 + -1;
	// mr r31,r30
	r31.u64 = r30.u64;
	// srawi r9,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// stwx r10,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r10.u32);
	// addze r30,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	r30.s64 = temp.s64;
loc_8236019C:
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(r31.s32, r27.s32, xer);
	// bgt cr6,0x82360160
	if (cr6.gt) goto loc_82360160;
loc_823601A4:
	// lwz r10,188(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823601B8"))) PPC_WEAK_FUNC(sub_823601B8);
PPC_FUNC_IMPL(__imp__sub_823601B8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x823601e4
	goto loc_823601E4;
loc_823601D8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x823618b0
	sub_823618B0(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_823601E4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x823601d8
	if (!cr6.eq) goto loc_823601D8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
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

__attribute__((alias("__imp__sub_82360210"))) PPC_WEAK_FUNC(sub_82360210);
PPC_FUNC_IMPL(__imp__sub_82360210) {
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
	// lwz r16,-10448(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -10448);
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
	// li r29,0
	r29.s64 = 0;
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// li r10,15
	ctx.r10.s64 = 15;
	// sth r29,12(r30)
	PPC_STORE_U16(r30.u32 + 12, r29.u16);
loc_8236023C:
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r29.u32);
	// stw r29,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r29.u32);
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// bge 0x8236023c
	if (!cr0.lt) goto loc_8236023C;
	// addi r27,r30,336
	r27.s64 = r30.s64 + 336;
	// li r28,1
	r28.s64 = 1;
loc_82360264:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82362408
	sub_82362408(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r27,r27,24588
	r27.s64 = r27.s64 + 24588;
	// bge 0x82360264
	if (!cr0.lt) goto loc_82360264;
	// addis r27,r30,1
	r27.s64 = r30.s64 + 65536;
	// li r28,1
	r28.s64 = 1;
	// addi r27,r27,-16024
	r27.s64 = r27.s64 + -16024;
loc_82360288:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82362408
	sub_82362408(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r27,r27,24588
	r27.s64 = r27.s64 + 24588;
	// bge 0x82360288
	if (!cr0.lt) goto loc_82360288;
	// lis r11,1
	r11.s64 = 65536;
	// lis r3,4
	ctx.r3.s64 = 262144;
	// ori r11,r11,33152
	r11.u64 = r11.u64 | 33152;
	// stwx r29,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, r29.u32);
	// bl 0x82358b38
	sub_82358B38(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addis r10,r30,2
	ctx.r10.s64 = r30.s64 + 131072;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r10,r10,-32380
	ctx.r10.s64 = ctx.r10.s64 + -32380;
	// addis r7,r11,4
	ctx.r7.s64 = r11.s64 + 262144;
	// ori r9,r9,33168
	ctx.r9.u64 = ctx.r9.u64 | 33168;
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// lis r3,512
	ctx.r3.s64 = 33554432;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stwx r29,r30,r9
	PPC_STORE_U32(r30.u32 + ctx.r9.u32, r29.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// bl 0x82358b38
	sub_82358B38(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8236032c
	if (cr0.eq) goto loc_8236032C;
	// li r11,-1
	r11.s64 = -1;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x8235fe30
	sub_8235FE30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8236032C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82360218"))) PPC_WEAK_FUNC(sub_82360218);
PPC_FUNC_IMPL(__imp__sub_82360218) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// li r10,15
	ctx.r10.s64 = 15;
	// sth r29,12(r30)
	PPC_STORE_U16(r30.u32 + 12, r29.u16);
loc_8236023C:
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r29.u32);
	// stw r29,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r29.u32);
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// bge 0x8236023c
	if (!cr0.lt) goto loc_8236023C;
	// addi r27,r30,336
	r27.s64 = r30.s64 + 336;
	// li r28,1
	r28.s64 = 1;
loc_82360264:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82362408
	sub_82362408(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r27,r27,24588
	r27.s64 = r27.s64 + 24588;
	// bge 0x82360264
	if (!cr0.lt) goto loc_82360264;
	// addis r27,r30,1
	r27.s64 = r30.s64 + 65536;
	// li r28,1
	r28.s64 = 1;
	// addi r27,r27,-16024
	r27.s64 = r27.s64 + -16024;
loc_82360288:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82362408
	sub_82362408(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r27,r27,24588
	r27.s64 = r27.s64 + 24588;
	// bge 0x82360288
	if (!cr0.lt) goto loc_82360288;
	// lis r11,1
	r11.s64 = 65536;
	// lis r3,4
	ctx.r3.s64 = 262144;
	// ori r11,r11,33152
	r11.u64 = r11.u64 | 33152;
	// stwx r29,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, r29.u32);
	// bl 0x82358b38
	sub_82358B38(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addis r10,r30,2
	ctx.r10.s64 = r30.s64 + 131072;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r10,r10,-32380
	ctx.r10.s64 = ctx.r10.s64 + -32380;
	// addis r7,r11,4
	ctx.r7.s64 = r11.s64 + 262144;
	// ori r9,r9,33168
	ctx.r9.u64 = ctx.r9.u64 | 33168;
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// lis r3,512
	ctx.r3.s64 = 33554432;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stwx r29,r30,r9
	PPC_STORE_U32(r30.u32 + ctx.r9.u32, r29.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// bl 0x82358b38
	sub_82358B38(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8236032c
	if (cr0.eq) goto loc_8236032C;
	// li r11,-1
	r11.s64 = -1;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x8235fe30
	sub_8235FE30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8236032C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8236033C"))) PPC_WEAK_FUNC(sub_8236033C);
PPC_FUNC_IMPL(__imp__sub_8236033C) {
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

__attribute__((alias("__imp__sub_82360364"))) PPC_WEAK_FUNC(sub_82360364);
PPC_FUNC_IMPL(__imp__sub_82360364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82360368"))) PPC_WEAK_FUNC(sub_82360368);
PPC_FUNC_IMPL(__imp__sub_82360368) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// bl 0x82362e40
	sub_82362E40(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82362e40
	sub_82362E40(ctx, base);
	// lwz r26,24580(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + 24580);
	// lwz r23,24580(r27)
	r23.u64 = PPC_LOAD_U32(r27.u32 + 24580);
	// li r30,0
	r30.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmpwi r26,0
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// ble 0x82360480
	if (!cr0.gt) goto loc_82360480;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r24,r11,-10368
	r24.s64 = r11.s64 + -10368;
loc_823603AC:
	// cmpw cr6,r29,r23
	cr6.compare<int32_t>(r29.s32, r23.s32, xer);
	// bge cr6,0x82360480
	if (!cr6.lt) goto loc_82360480;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82362430
	sub_82362430(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82362430
	sub_82362430(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_823603E0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x82360404
	if (cr0.eq) goto loc_82360404;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x823603e0
	if (cr6.eq) goto loc_823603E0;
loc_82360404:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bge 0x8236041c
	if (!cr0.lt) goto loc_8236041C;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82360444
	goto loc_82360444;
loc_8236041C:
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// ble cr6,0x8236043c
	if (!cr6.gt) goto loc_8236043C;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82360450
	goto loc_82360450;
loc_8236043C:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_82360444:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
loc_82360450:
	// subf. r5,r9,r11
	ctx.r5.s64 = r11.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// bne 0x82360464
	if (!cr0.eq) goto loc_82360464;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x82360478
	if (cr6.eq) goto loc_82360478;
loc_82360464:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8235ffe0
	sub_8235FFE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
loc_82360478:
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(r30.s32, r26.s32, xer);
	// blt cr6,0x823603ac
	if (cr6.lt) goto loc_823603AC;
loc_82360480:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82360488"))) PPC_WEAK_FUNC(sub_82360488);
PPC_FUNC_IMPL(__imp__sub_82360488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq 0x82360510
	if (cr0.eq) goto loc_82360510;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r5,29,3,31
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// twllei r8,0
	// divwu r10,r11,r8
	ctx.r10.u32 = r11.u32 / ctx.r8.u32;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r6
	ctx.r10.u64 = r11.u64 + ctx.r6.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// beq cr6,0x82360510
	if (cr6.eq) goto loc_82360510;
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
loc_823604CC:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x823604ec
	if (cr6.eq) goto loc_823604EC;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// subf r11,r11,r5
	r11.s64 = ctx.r5.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82360518
	if (!cr0.eq) goto loc_82360518;
loc_823604EC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x823604fc
	if (!cr6.eq) goto loc_823604FC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_823604FC:
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r6
	ctx.r10.u64 = r11.u64 + ctx.r6.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x823604cc
	if (!cr6.eq) goto loc_823604CC;
loc_82360510:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82360518:
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r6
	ctx.r3.u64 = r11.u64 + ctx.r6.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82360524"))) PPC_WEAK_FUNC(sub_82360524);
PPC_FUNC_IMPL(__imp__sub_82360524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82360528"))) PPC_WEAK_FUNC(sub_82360528);
PPC_FUNC_IMPL(__imp__sub_82360528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82360554
	if (!cr6.eq) goto loc_82360554;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82360554:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x823605a0
	goto loc_823605A0;
loc_82360570:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// bne cr6,0x8236059c
	if (!cr6.eq) goto loc_8236059C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_8236059C:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_823605A0:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82360570
	if (cr6.eq) goto loc_82360570;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823605B8"))) PPC_WEAK_FUNC(sub_823605B8);
PPC_FUNC_IMPL(__imp__sub_823605B8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823605e0
	if (cr6.eq) goto loc_823605E0;
	// li r28,0
	r28.s64 = 0;
	// b 0x82360610
	goto loc_82360610;
loc_823605E0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82691148
	sub_82691148(ctx, base);
	// lis r11,16383
	r11.s64 = 1073676288;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x82360604
	if (!cr6.gt) goto loc_82360604;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82360604:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,1
	r28.s64 = 1;
loc_82360610:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82360634
	if (!cr6.gt) goto loc_82360634;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82360620:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82360620
	if (!cr0.eq) goto loc_82360620;
loc_82360634:
	// li r11,0
	r11.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x823606b4
	goto loc_823606B4;
loc_82360644:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// twllei r29,0
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r11,r11,29,3,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// divwu r8,r11,r29
	ctx.r8.u32 = r11.u32 / r29.u32;
	// mullw r8,r8,r29
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r29.s32);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r30.u32);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82360698
	if (cr6.eq) goto loc_82360698;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_82360678:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bne cr6,0x82360688
	if (!cr6.eq) goto loc_82360688;
	// li r11,0
	r11.s64 = 0;
loc_82360688:
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r30.u32);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82360678
	if (!cr6.eq) goto loc_82360678;
loc_82360698:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
loc_823606B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82355568
	sub_82355568(ctx, base);
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82360644
	if (!cr0.eq) goto loc_82360644;
	// lbz r11,8(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823606d8
	if (cr0.eq) goto loc_823606D8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_823606D8:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stb r28,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823606EC"))) PPC_WEAK_FUNC(sub_823606EC);
PPC_FUNC_IMPL(__imp__sub_823606EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823606F0"))) PPC_WEAK_FUNC(sub_823606F0);
PPC_FUNC_IMPL(__imp__sub_823606F0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r25,r30
	r25.u64 = r30.u64;
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8236075c
	goto loc_8236075C;
loc_82360720:
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82360740
	if (cr0.eq) goto loc_82360740;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_82360740:
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r31
	r30.u64 = r31.u64;
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r9,r29
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r29.u32);
	// stwx r11,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + r29.u32, r11.u32);
loc_8236075C:
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// blt cr6,0x82360720
	if (cr6.lt) goto loc_82360720;
	// bne cr6,0x82360780
	if (!cr6.eq) goto loc_82360780;
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r30,r31,-1
	r30.s64 = r31.s64 + -1;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stwx r11,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + r29.u32, r11.u32);
loc_82360780:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82360130
	sub_82360130(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823607A0"))) PPC_WEAK_FUNC(sub_823607A0);
PPC_FUNC_IMPL(__imp__sub_823607A0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// stw r26,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r26.u32);
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// bl 0x82360488
	sub_82360488(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x823608cc
	if (cr0.eq) goto loc_823608CC;
	// lwz r31,0(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// lis r11,1
	r11.s64 = 65536;
	// ori r11,r11,33168
	r11.u64 = r11.u64 | 33168;
	// lwzx r3,r27,r11
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8236085c
	if (cr0.eq) goto loc_8236085C;
	// lbz r11,17(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8236085c
	if (!cr0.eq) goto loc_8236085C;
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8236085c
	if (!cr6.eq) goto loc_8236085C;
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8236085c
	if (!cr0.eq) goto loc_8236085C;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r4,r11,-10348
	ctx.r4.s64 = r11.s64 + -10348;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r30,r11,-32168
	r30.s64 = r11.s64 + -32168;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r29,r11,-28996
	r29.s64 = r11.s64 + -28996;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r28,r11,2828
	r28.s64 = r11.s64 + 2828;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82357958
	sub_82357958(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823619f8
	sub_823619F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
loc_8236085C:
	// lbz r11,17(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82360888
	if (!cr0.eq) goto loc_82360888;
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82362440
	sub_82362440(ctx, base);
loc_82360888:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// bl 0x82360528
	sub_82360528(ctx, base);
	// lhz r11,18(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 18);
	// lhz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U16(r27.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823608b0
	if (!cr6.eq) goto loc_823608B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823618b0
	sub_823618B0(ctx, base);
	// b 0x823608cc
	goto loc_823608CC;
loc_823608B0:
	// addis r11,r27,2
	r11.s64 = r27.s64 + 131072;
	// addi r11,r11,-32380
	r11.s64 = r11.s64 + -32380;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_823608CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823608D4"))) PPC_WEAK_FUNC(sub_823608D4);
PPC_FUNC_IMPL(__imp__sub_823608D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823608D8"))) PPC_WEAK_FUNC(sub_823608D8);
PPC_FUNC_IMPL(__imp__sub_823608D8) {
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
	// addis r31,r3,2
	r31.s64 = ctx.r3.s64 + 131072;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r31,r31,-32368
	r31.s64 = r31.s64 + -32368;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r4,r10,-10324
	ctx.r4.s64 = ctx.r10.s64 + -10324;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r30,r10,-32168
	r30.s64 = ctx.r10.s64 + -32168;
	// lwz r11,18752(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18752);
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-10332
	ctx.r4.s64 = r11.s64 + -10332;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82360940"))) PPC_WEAK_FUNC(sub_82360940);
PPC_FUNC_IMPL(__imp__sub_82360940) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,0
	r11.s64 = 0;
	// addis r30,r31,2
	r30.s64 = r31.s64 + 131072;
	// ori r29,r11,49512
	r29.u64 = r11.u64 | 49512;
	// addi r30,r30,-32384
	r30.s64 = r30.s64 + -32384;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,24588
	r11.s64 = r11.s64 * 24588;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// bl 0x82362420
	sub_82362420(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,24588
	r11.s64 = r11.s64 * 24588;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,336
	ctx.r3.s64 = r11.s64 + 336;
	// bl 0x82362420
	sub_82362420(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x823609dc
	goto loc_823609DC;
loc_82360994:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// mulli r10,r10,24588
	ctx.r10.s64 = ctx.r10.s64 * 24588;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// beq 0x823609c8
	if (cr0.eq) goto loc_823609C8;
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x823609d0
	goto loc_823609D0;
loc_823609C8:
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// addi r3,r10,336
	ctx.r3.s64 = ctx.r10.s64 + 336;
loc_823609D0:
	// bl 0x82362610
	sub_82362610(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r28,4
	ctx.r4.s64 = r28.s64 + 4;
loc_823609DC:
	// bl 0x82355568
	sub_82355568(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x82360994
	if (!cr0.eq) goto loc_82360994;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823609F0"))) PPC_WEAK_FUNC(sub_823609F0);
PPC_FUNC_IMPL(__imp__sub_823609F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x8239bccc
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// bl 0x82353d88
	sub_82353D88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x82360b8c
	if (!cr0.gt) goto loc_82360B8C;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r30,r29,20
	r30.s64 = r29.s64 + 20;
	// addi r27,r11,-9832
	r27.s64 = r11.s64 + -9832;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r26,r11,-9860
	r26.s64 = r11.s64 + -9860;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r25,r11,-9888
	r25.s64 = r11.s64 + -9888;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r24,r11,-9916
	r24.s64 = r11.s64 + -9916;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r23,r11,-9944
	r23.s64 = r11.s64 + -9944;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r22,r11,-9972
	r22.s64 = r11.s64 + -9972;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r21,r11,-10000
	r21.s64 = r11.s64 + -10000;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r20,r11,-10028
	r20.s64 = r11.s64 + -10028;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r19,r11,-10056
	r19.s64 = r11.s64 + -10056;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r18,r11,-10092
	r18.s64 = r11.s64 + -10092;
loc_82360A6C:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82354090
	sub_82354090(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82353e20
	sub_82353E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// bl 0x82353d88
	sub_82353D88(ctx, base);
	// cmpw cr6,r28,r3
	cr6.compare<int32_t>(r28.s32, ctx.r3.s32, xer);
	// blt cr6,0x82360a6c
	if (cr6.lt) goto loc_82360A6C;
loc_82360B8C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82360940
	sub_82360940(ctx, base);
	// addis r30,r29,2
	r30.s64 = r29.s64 + 131072;
	// addi r30,r30,-32384
	r30.s64 = r30.s64 + -32384;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,24588
	r11.s64 = r11.s64 * 24588;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r3,r11,336
	ctx.r3.s64 = r11.s64 + 336;
	// bl 0x82362e28
	sub_82362E28(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r26,r11,-10104
	r26.s64 = r11.s64 + -10104;
	// mulli r11,r10,24588
	r11.s64 = ctx.r10.s64 * 24588;
	// add r10,r11,r29
	ctx.r10.u64 = r11.u64 + r29.u64;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// addi r25,r11,-10116
	r25.s64 = r11.s64 + -10116;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r28,24916(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24916);
	// addi r27,r11,-10120
	r27.s64 = r11.s64 + -10120;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-10124
	ctx.r5.s64 = r11.s64 + -10124;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r4,r11,-10132
	ctx.r4.s64 = r11.s64 + -10132;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r11,-10160
	ctx.r3.s64 = r11.s64 + -10160;
	// bl 0x8235ff10
	sub_8235FF10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// li r24,0
	r24.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82360c78
	if (!cr6.gt) goto loc_82360C78;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r23,r11,-10188
	r23.s64 = r11.s64 + -10188;
loc_82360C20:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mulli r11,r11,24588
	r11.s64 = r11.s64 * 24588;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r3,r11,336
	ctx.r3.s64 = r11.s64 + 336;
	// bl 0x82362430
	sub_82362430(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r8,r17
	cr6.compare<int32_t>(ctx.r8.s32, r17.s32, xer);
	// blt cr6,0x82360c6c
	if (cr6.lt) goto loc_82360C6C;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lbz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8235ff78
	sub_8235FF78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
loc_82360C6C:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmpw cr6,r24,r28
	cr6.compare<int32_t>(r24.s32, r28.s32, xer);
	// blt cr6,0x82360c20
	if (cr6.lt) goto loc_82360C20;
loc_82360C78:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// mulli r11,r11,24588
	r11.s64 = r11.s64 * 24588;
	// ori r28,r10,49512
	r28.u64 = ctx.r10.u64 | 49512;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82362e28
	sub_82362E28(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mulli r11,r11,24588
	r11.s64 = r11.s64 * 24588;
	// add r9,r11,r29
	ctx.r9.u64 = r11.u64 + r29.u64;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// ori r10,r10,8556
	ctx.r10.u64 = ctx.r10.u64 | 8556;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r4,r11,-10200
	ctx.r4.s64 = r11.s64 + -10200;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r3,r11,-10224
	ctx.r3.s64 = r11.s64 + -10224;
	// lwzx r24,r9,r10
	r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82277738
	sub_82277738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// ble cr6,0x82360d40
	if (!cr6.gt) goto loc_82360D40;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r25,r11,-10248
	r25.s64 = r11.s64 + -10248;
loc_82360CEC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mulli r11,r11,24588
	r11.s64 = r11.s64 * 24588;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82362430
	sub_82362430(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r7,r17
	cr6.compare<int32_t>(ctx.r7.s32, r17.s32, xer);
	// blt cr6,0x82360d34
	if (cr6.lt) goto loc_82360D34;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821e22a8
	sub_821E22A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
loc_82360D34:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpw cr6,r26,r24
	cr6.compare<int32_t>(r26.s32, r24.s32, xer);
	// blt cr6,0x82360cec
	if (cr6.lt) goto loc_82360CEC;
loc_82360D40:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r26,r11,-10256
	r26.s64 = r11.s64 + -10256;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r4,r11,-10276
	ctx.r4.s64 = r11.s64 + -10276;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r25,r11,-10296
	r25.s64 = r11.s64 + -10296;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8218e470
	sub_8218E470(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mulli r11,r11,24588
	r11.s64 = r11.s64 * 24588;
	// subf r10,r11,r29
	ctx.r10.s64 = r29.s64 - r11.s64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r4,r10,24924
	ctx.r4.s64 = ctx.r10.s64 + 24924;
	// addi r3,r11,336
	ctx.r3.s64 = r11.s64 + 336;
	// bl 0x82360368
	sub_82360368(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r4,r11,-10316
	ctx.r4.s64 = r11.s64 + -10316;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8218e470
	sub_8218E470(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mulli r11,r11,24588
	r11.s64 = r11.s64 * 24588;
	// subf r10,r11,r29
	ctx.r10.s64 = r29.s64 - r11.s64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addis r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 65536;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// addi r4,r4,8564
	ctx.r4.s64 = ctx.r4.s64 + 8564;
	// bl 0x82360368
	sub_82360368(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subfic r11,r11,1
	xer.ca = r11.u32 <= 1;
	r11.s64 = 1 - r11.s64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd1c
	return;
}

__attribute__((alias("__imp__sub_82360DF0"))) PPC_WEAK_FUNC(sub_82360DF0);
PPC_FUNC_IMPL(__imp__sub_82360DF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82360488
	sub_82360488(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82360e1c
	if (cr0.eq) goto loc_82360E1C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82360e20
	goto loc_82360E20;
loc_82360E1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82360E20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82360E30"))) PPC_WEAK_FUNC(sub_82360E30);
PPC_FUNC_IMPL(__imp__sub_82360E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_82360E4C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82360e68
	if (!cr6.eq) goto loc_82360E68;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823605b8
	sub_823605B8(ctx, base);
loc_82360E68:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// twllei r8,0
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r11,r7,29,3,31
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// divwu r10,r11,r8
	ctx.r10.u32 = r11.u32 / ctx.r8.u32;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beq cr6,0x82360ef0
	if (cr6.eq) goto loc_82360EF0;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
loc_82360EA4:
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82360ef0
	if (cr6.eq) goto loc_82360EF0;
	// rotlwi r11,r4,0
	r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// subf r11,r11,r7
	r11.s64 = ctx.r7.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82360ef0
	if (!cr0.eq) goto loc_82360EF0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bne cr6,0x82360ed8
	if (!cr6.eq) goto loc_82360ED8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82360ED8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwzx r4,r11,r4
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// bne cr6,0x82360ea4
	if (!cr6.eq) goto loc_82360EA4;
loc_82360EF0:
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x82360f3c
	if (!cr6.eq) goto loc_82360F3C;
	// srawi r11,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	r11.s64 = ctx.r8.s32 >> 1;
	// addze r9,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r9.s64 = temp.s64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// ble cr6,0x82360f3c
	if (!cr6.gt) goto loc_82360F3C;
	// lbz r11,8(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82360f3c
	if (cr0.eq) goto loc_82360F3C;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823605b8
	sub_823605B8(ctx, base);
	// b 0x82360e4c
	goto loc_82360E4C;
loc_82360F3C:
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
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

__attribute__((alias("__imp__sub_82360F6C"))) PPC_WEAK_FUNC(sub_82360F6C);
PPC_FUNC_IMPL(__imp__sub_82360F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82360F70"))) PPC_WEAK_FUNC(sub_82360F70);
PPC_FUNC_IMPL(__imp__sub_82360F70) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// subf r11,r30,r4
	r11.s64 = ctx.r4.s64 - r30.s64;
	// srawi r29,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r29.s64 = r11.s32 >> 2;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// blt cr6,0x82360fd4
	if (cr6.lt) goto loc_82360FD4;
	// addi r11,r29,-2
	r11.s64 = r29.s64 + -2;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r31,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r31.s64 = temp.s64;
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r30
	r28.u64 = r11.u64 + r30.u64;
	// b 0x82360fb4
	goto loc_82360FB4;
loc_82360FAC:
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r28,r28,-4
	r28.s64 = r28.s64 + -4;
loc_82360FB4:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823606f0
	sub_823606F0(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x82360fac
	if (!cr6.eq) goto loc_82360FAC;
loc_82360FD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82360FDC"))) PPC_WEAK_FUNC(sub_82360FDC);
PPC_FUNC_IMPL(__imp__sub_82360FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82360FE0"))) PPC_WEAK_FUNC(sub_82360FE0);
PPC_FUNC_IMPL(__imp__sub_82360FE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r16,-9768(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9768);
	// mflr r12
	// bl 0x8239bcdc
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// bl 0x82361888
	sub_82361888(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82361054
	if (cr0.eq) goto loc_82361054;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82361950
	sub_82361950(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82361058
	goto loc_82361058;
loc_82361054:
	// li r11,0
	r11.s64 = 0;
loc_82361058:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82360e30
	sub_82360E30(ctx, base);
	// lis r11,1
	r11.s64 = 65536;
	// ori r11,r11,33168
	r11.u64 = r11.u64 | 33168;
	// lwzx r3,r22,r11
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823610e4
	if (cr0.eq) goto loc_823610E4;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823610e4
	if (!cr0.eq) goto loc_823610E4;
	// extsb. r11,r26
	r11.s64 = r26.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823610e4
	if (!cr0.eq) goto loc_823610E4;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823610e4
	if (!cr0.eq) goto loc_823610E4;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lwz r21,80(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r4,r11,-9796
	ctx.r4.s64 = r11.s64 + -9796;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r29,r11,-32168
	r29.s64 = r11.s64 + -32168;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r28,r11,-28996
	r28.s64 = r11.s64 + -28996;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r27,r11,-9804
	r27.s64 = r11.s64 + -9804;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82357958
	sub_82357958(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x823619f8
	sub_823619F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
loc_823610E4:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82361108
	if (!cr0.eq) goto loc_82361108;
	// extsb r11,r26
	r11.s64 = r26.s8;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r11,r22
	r11.u64 = r11.u64 + r22.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82362788
	sub_82362788(ctx, base);
loc_82361108:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_82360FE8"))) PPC_WEAK_FUNC(sub_82360FE8);
PPC_FUNC_IMPL(__imp__sub_82360FE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// bl 0x82361888
	sub_82361888(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82361054
	if (cr0.eq) goto loc_82361054;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82361950
	sub_82361950(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82361058
	goto loc_82361058;
loc_82361054:
	// li r11,0
	r11.s64 = 0;
loc_82361058:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82360e30
	sub_82360E30(ctx, base);
	// lis r11,1
	r11.s64 = 65536;
	// ori r11,r11,33168
	r11.u64 = r11.u64 | 33168;
	// lwzx r3,r22,r11
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823610e4
	if (cr0.eq) goto loc_823610E4;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823610e4
	if (!cr0.eq) goto loc_823610E4;
	// extsb. r11,r26
	r11.s64 = r26.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823610e4
	if (!cr0.eq) goto loc_823610E4;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823610e4
	if (!cr0.eq) goto loc_823610E4;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lwz r21,80(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r4,r11,-9796
	ctx.r4.s64 = r11.s64 + -9796;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r29,r11,-32168
	r29.s64 = r11.s64 + -32168;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r28,r11,-28996
	r28.s64 = r11.s64 + -28996;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r27,r11,-9804
	r27.s64 = r11.s64 + -9804;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82357958
	sub_82357958(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x823619f8
	sub_823619F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
loc_823610E4:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82361108
	if (!cr0.eq) goto loc_82361108;
	// extsb r11,r26
	r11.s64 = r26.s8;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r11,r22
	r11.u64 = r11.u64 + r22.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82362788
	sub_82362788(ctx, base);
loc_82361108:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_82361110"))) PPC_WEAK_FUNC(sub_82361110);
PPC_FUNC_IMPL(__imp__sub_82361110) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x823618b0
	sub_823618B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361138"))) PPC_WEAK_FUNC(sub_82361138);
PPC_FUNC_IMPL(__imp__sub_82361138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r28.u32);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82360488
	sub_82360488(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// bne cr6,0x82361180
	if (!cr6.eq) goto loc_82361180;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82361180:
	// cmpwi cr6,r26,-1
	cr6.compare<int32_t>(r26.s32, -1, xer);
	// bne cr6,0x8236118c
	if (!cr6.eq) goto loc_8236118C;
	// lwz r26,4(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_8236118C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lbz r27,20(r31)
	r27.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r28,16(r31)
	r28.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x823607a0
	sub_823607A0(ctx, base);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82360fe8
	sub_82360FE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823611D0"))) PPC_WEAK_FUNC(sub_823611D0);
PPC_FUNC_IMPL(__imp__sub_823611D0) {
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
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// b 0x823611f4
	goto loc_823611F4;
loc_823611F0:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_823611F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823611f0
	if (!cr0.eq) goto loc_823611F0;
loc_8236120C:
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8236120c
	if (!cr0.eq) goto loc_8236120C;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bge cr6,0x82361244
	if (!cr6.lt) goto loc_82361244;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x823611f0
	goto loc_823611F0;
loc_82361244:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82361250"))) PPC_WEAK_FUNC(sub_82361250);
PPC_FUNC_IMPL(__imp__sub_82361250) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823612a8
	if (cr0.eq) goto loc_823612A8;
	// subf. r5,r31,r30
	ctx.r5.s64 = r30.s64 - r31.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble 0x8236129c
	if (!cr0.gt) goto loc_8236129C;
	// subf r11,r5,r30
	r11.s64 = r30.s64 - ctx.r5.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
loc_8236129C:
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x823612b8
	goto loc_823612B8;
loc_823612A8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823600d8
	sub_823600D8(ctx, base);
loc_823612B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823612C0"))) PPC_WEAK_FUNC(sub_823612C0);
PPC_FUNC_IMPL(__imp__sub_823612C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x82361308
	if (cr6.eq) goto loc_82361308;
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// b 0x82361300
	goto loc_82361300;
loc_823612E8:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82361250
	sub_82361250(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82361300:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x823612e8
	if (!cr6.eq) goto loc_823612E8;
loc_82361308:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82361310"))) PPC_WEAK_FUNC(sub_82361310);
PPC_FUNC_IMPL(__imp__sub_82361310) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// subf r11,r31,r4
	r11.s64 = ctx.r4.s64 - r31.s64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// ble cr6,0x8236136c
	if (!cr6.gt) goto loc_8236136C;
	// addi r29,r31,-4
	r29.s64 = r31.s64 + -4;
loc_82361338:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwzx r6,r29,r11
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// srawi r5,r30,2
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r5.s64 = r30.s32 >> 2;
	// stwx r10,r29,r11
	PPC_STORE_U32(r29.u32 + r11.u32, ctx.r10.u32);
	// bl 0x823606f0
	sub_823606F0(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bgt cr6,0x82361338
	if (cr6.gt) goto loc_82361338;
loc_8236136C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82361374"))) PPC_WEAK_FUNC(sub_82361374);
PPC_FUNC_IMPL(__imp__sub_82361374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82361378"))) PPC_WEAK_FUNC(sub_82361378);
PPC_FUNC_IMPL(__imp__sub_82361378) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// subf r11,r3,r30
	r11.s64 = r30.s64 - ctx.r3.s64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// ble cr6,0x823613d4
	if (!cr6.gt) goto loc_823613D4;
	// addi r31,r3,64
	r31.s64 = ctx.r3.s64 + 64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823612c0
	sub_823612C0(ctx, base);
	// b 0x823613c8
	goto loc_823613C8;
loc_823613B4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823600d8
	sub_823600D8(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_823613C8:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x823613b4
	if (!cr6.eq) goto loc_823613B4;
	// b 0x823613dc
	goto loc_823613DC;
loc_823613D4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823612c0
	sub_823612C0(ctx, base);
loc_823613DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823613E4"))) PPC_WEAK_FUNC(sub_823613E4);
PPC_FUNC_IMPL(__imp__sub_823613E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823613E8"))) PPC_WEAK_FUNC(sub_823613E8);
PPC_FUNC_IMPL(__imp__sub_823613E8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82360f70
	sub_82360F70(ctx, base);
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// bge cr6,0x82361468
	if (!cr6.lt) goto loc_82361468;
loc_82361420:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8236145c
	if (cr0.eq) goto loc_8236145C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r10,r31,r29
	ctx.r10.s64 = r29.s64 - r31.s64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// srawi r5,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x823606f0
	sub_823606F0(ctx, base);
loc_8236145C:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// blt cr6,0x82361420
	if (cr6.lt) goto loc_82361420;
loc_82361468:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82361310
	sub_82361310(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82361480"))) PPC_WEAK_FUNC(sub_82361480);
PPC_FUNC_IMPL(__imp__sub_82361480) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// b 0x82361510
	goto loc_82361510;
loc_823614A4:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x82361520
	if (cr6.eq) goto loc_82361520;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// addi r5,r31,-4
	ctx.r5.s64 = r31.s64 + -4;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// bl 0x82360030
	sub_82360030(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823611d0
	sub_823611D0(ctx, base);
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
	// bl 0x82361480
	sub_82361480(ctx, base);
	// subf r11,r30,r29
	r11.s64 = r29.s64 - r30.s64;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_82361510:
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// bgt cr6,0x823614a4
	if (cr6.gt) goto loc_823614A4;
	// b 0x82361534
	goto loc_82361534;
loc_82361520:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823613e8
	sub_823613E8(ctx, base);
loc_82361534:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8236153C"))) PPC_WEAK_FUNC(sub_8236153C);
PPC_FUNC_IMPL(__imp__sub_8236153C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82361540"))) PPC_WEAK_FUNC(sub_82361540);
PPC_FUNC_IMPL(__imp__sub_82361540) {
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
	// beq cr6,0x823615a8
	if (cr6.eq) goto loc_823615A8;
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// b 0x82361578
	goto loc_82361578;
loc_82361570:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
loc_82361578:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82361570
	if (!cr6.eq) goto loc_82361570;
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
	// bl 0x82361480
	sub_82361480(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82361378
	sub_82361378(ctx, base);
loc_823615A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823615B0"))) PPC_WEAK_FUNC(sub_823615B0);
PPC_FUNC_IMPL(__imp__sub_823615B0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// ori r21,r10,33156
	r21.u64 = ctx.r10.u64 | 33156;
	// lhz r11,12(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82361728
	if (cr6.eq) goto loc_82361728;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,-9688
	ctx.r4.s64 = r11.s64 + -9688;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r22,r11,-32168
	r22.s64 = r11.s64 + -32168;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r11,18752(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18752);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,-10332
	ctx.r4.s64 = r11.s64 + -10332;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82355568
	sub_82355568(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82361664
	if (cr0.eq) goto loc_82361664;
	// lha r28,12(r31)
	r28.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 12));
loc_8236163C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lha r11,18(r11)
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 18));
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bne cr6,0x82361650
	if (!cr6.eq) goto loc_82361650;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_82361650:
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82355568
	sub_82355568(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8236163c
	if (!cr0.eq) goto loc_8236163C;
loc_82361664:
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82358b38
	sub_82358B38(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r26,r27
	r26.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x823616a8
	goto loc_823616A8;
loc_82361684:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 12);
	// lhz r9,18(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 18);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x823616a0
	if (!cr6.eq) goto loc_823616A0;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
loc_823616A0:
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_823616A8:
	// bl 0x82355568
	sub_82355568(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82361684
	if (!cr0.eq) goto loc_82361684;
	// lis r11,-32202
	r11.s64 = -2110390272;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r5,r11,-728
	ctx.r5.s64 = r11.s64 + -728;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82361540
	sub_82361540(ctx, base);
	// addis r28,r31,2
	r28.s64 = r31.s64 + 131072;
	// add r30,r31,r21
	r30.u64 = r31.u64 + r21.u64;
	// addi r28,r28,-32376
	r28.s64 = r28.s64 + -32376;
	// lis r11,-32202
	r11.s64 = -2110390272;
	// addi r5,r11,-728
	ctx.r5.s64 = r11.s64 + -728;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82361540
	sub_82361540(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r27
	r29.u64 = r27.u64;
	// addi r24,r11,-9696
	r24.s64 = r11.s64 + -9696;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r23,r11,-9704
	r23.s64 = r11.s64 + -9704;
loc_82361700:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(r29.u32, r26.u32, xer);
	// bne cr6,0x82361744
	if (!cr6.eq) goto loc_82361744;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82361784
	if (!cr6.eq) goto loc_82361784;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82358b40
	sub_82358B40(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
loc_82361728:
	// add r3,r31,r21
	ctx.r3.u64 = r31.u64 + r21.u64;
	// bl 0x823601b8
	sub_823601B8(ctx, base);
	// lhz r11,12(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,12(r31)
	PPC_STORE_U16(r31.u32 + 12, r11.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd2c
	return;
loc_82361744:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82361760
	if (cr6.eq) goto loc_82361760;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82361980
	sub_82361980(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8236177c
	if (!cr0.lt) goto loc_8236177C;
loc_82361760:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235fdb8
	sub_8235FDB8(ctx, base);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// b 0x82361700
	goto loc_82361700;
loc_8236177C:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8236179c
	if (!cr6.gt) goto loc_8236179C;
loc_82361784:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235fdb8
	sub_8235FDB8(ctx, base);
	// b 0x823617a0
	goto loc_823617A0;
loc_8236179C:
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
loc_823617A0:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// b 0x82361700
	goto loc_82361700;
}

__attribute__((alias("__imp__sub_823617A8"))) PPC_WEAK_FUNC(sub_823617A8);
PPC_FUNC_IMPL(__imp__sub_823617A8) {
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
	// lwz r16,-9664(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9664);
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,15712(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15712);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,15708
	r30.s64 = ctx.r9.s64 + 15708;
	// bne 0x82361800
	if (!cr0.eq) goto loc_82361800;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,15712(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15712, r11.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,15704
	ctx.r5.s64 = r11.s64 + 15704;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82362e58
	sub_82362E58(ctx, base);
loc_82361800:
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

__attribute__((alias("__imp__sub_823617B0"))) PPC_WEAK_FUNC(sub_823617B0);
PPC_FUNC_IMPL(__imp__sub_823617B0) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,15712(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15712);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,15708
	r30.s64 = ctx.r9.s64 + 15708;
	// bne 0x82361800
	if (!cr0.eq) goto loc_82361800;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,15712(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15712, r11.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,15704
	ctx.r5.s64 = r11.s64 + 15704;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82362e58
	sub_82362E58(ctx, base);
loc_82361800:
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

__attribute__((alias("__imp__sub_8236181C"))) PPC_WEAK_FUNC(sub_8236181C);
PPC_FUNC_IMPL(__imp__sub_8236181C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,15712
	r11.s64 = r11.s64 + 15712;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,15712
	ctx.r10.s64 = ctx.r10.s64 + 15712;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361844"))) PPC_WEAK_FUNC(sub_82361844);
PPC_FUNC_IMPL(__imp__sub_82361844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82361848"))) PPC_WEAK_FUNC(sub_82361848);
PPC_FUNC_IMPL(__imp__sub_82361848) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x823617b0
	sub_823617B0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82362e58
	sub_82362E58(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82361888"))) PPC_WEAK_FUNC(sub_82361888);
PPC_FUNC_IMPL(__imp__sub_82361888) {
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
	// bl 0x823617b0
	sub_823617B0(ctx, base);
	// bl 0x82362eb0
	sub_82362EB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823618AC"))) PPC_WEAK_FUNC(sub_823618AC);
PPC_FUNC_IMPL(__imp__sub_823618AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823618B0"))) PPC_WEAK_FUNC(sub_823618B0);
PPC_FUNC_IMPL(__imp__sub_823618B0) {
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
	// bl 0x823617b0
	sub_823617B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82362ed0
	sub_82362ED0(ctx, base);
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

__attribute__((alias("__imp__sub_823618E4"))) PPC_WEAK_FUNC(sub_823618E4);
PPC_FUNC_IMPL(__imp__sub_823618E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823618E8"))) PPC_WEAK_FUNC(sub_823618E8);
PPC_FUNC_IMPL(__imp__sub_823618E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_823618F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82361914
	if (cr0.eq) goto loc_82361914;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823618f0
	if (cr6.eq) goto loc_823618F0;
loc_82361914:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82361924
	if (cr0.eq) goto loc_82361924;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// blr 
	return;
loc_82361924:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8236193c
	if (!cr6.lt) goto loc_8236193C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8236193C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236194C"))) PPC_WEAK_FUNC(sub_8236194C);
PPC_FUNC_IMPL(__imp__sub_8236194C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82361950"))) PPC_WEAK_FUNC(sub_82361950);
PPC_FUNC_IMPL(__imp__sub_82361950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stb r8,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r8.u8);
	// stb r9,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r9.u8);
	// stb r10,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r10.u8);
	// lwz r11,15072(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 15072);
	// lhz r11,12(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 12);
	// sth r11,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361980"))) PPC_WEAK_FUNC(sub_82361980);
PPC_FUNC_IMPL(__imp__sub_82361980) {
	PPC_FUNC_PROLOGUE();
	// b 0x823618e8
	sub_823618E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82361984"))) PPC_WEAK_FUNC(sub_82361984);
PPC_FUNC_IMPL(__imp__sub_82361984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82361988"))) PPC_WEAK_FUNC(sub_82361988);
PPC_FUNC_IMPL(__imp__sub_82361988) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r11,-9604
	ctx.r3.s64 = r11.s64 + -9604;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x821ec8e8
	sub_821EC8E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lbz r11,17(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823619e0
	if (cr0.eq) goto loc_823619E0;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-9616
	ctx.r4.s64 = r11.s64 + -9616;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
loc_823619E0:
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

__attribute__((alias("__imp__sub_823619F8"))) PPC_WEAK_FUNC(sub_823619F8);
PPC_FUNC_IMPL(__imp__sub_823619F8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82361988
	sub_82361988(ctx, base);
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

__attribute__((alias("__imp__sub_82361A30"))) PPC_WEAK_FUNC(sub_82361A30);
PPC_FUNC_IMPL(__imp__sub_82361A30) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359250
	sub_82359250(ctx, base);
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,15748
	ctx.r4.s64 = r11.s64 + 15748;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239d9a0
	sub_8239D9A0(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82361ab4
	if (!cr0.eq) goto loc_82361AB4;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,15768
	ctx.r4.s64 = r11.s64 + 15768;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239d9a0
	sub_8239D9A0(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82361ab4
	if (!cr0.eq) goto loc_82361AB4;
	// li r11,0
	r11.s64 = 0;
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
	// b 0x82361ad8
	goto loc_82361AD8;
loc_82361AB4:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359250
	sub_82359250(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stb r10,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r10.u8);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82361AD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82361AE0"))) PPC_WEAK_FUNC(sub_82361AE0);
PPC_FUNC_IMPL(__imp__sub_82361AE0) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82361b98
	if (!cr0.eq) goto loc_82361B98;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// blt cr6,0x82361b54
	if (cr6.lt) goto loc_82361B54;
	// beq cr6,0x82361b48
	if (cr6.eq) goto loc_82361B48;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(r29.u32, 3, xer);
	// bge cr6,0x82361b80
	if (!cr6.lt) goto loc_82361B80;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// neg r11,r11
	r11.s64 = -r11.s64;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x82361b40
	if (!cr6.lt) goto loc_82361B40;
	// li r11,1
	r11.s64 = 1;
	// stb r11,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r11.u8);
loc_82361B40:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// b 0x82361b70
	goto loc_82361B70;
loc_82361B48:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x82361b78
	goto loc_82361B78;
loc_82361B54:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x82361b6c
	if (!cr6.gt) goto loc_82361B6C;
	// li r11,1
	r11.s64 = 1;
	// stb r11,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r11.u8);
loc_82361B6C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
loc_82361B70:
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
loc_82361B78:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x823591a0
	sub_823591A0(ctx, base);
loc_82361B80:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r3,33(r31)
	PPC_STORE_U8(r31.u32 + 33, ctx.r3.u8);
loc_82361B98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82361BA0"))) PPC_WEAK_FUNC(sub_82361BA0);
PPC_FUNC_IMPL(__imp__sub_82361BA0) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82361bd4
	if (cr0.eq) goto loc_82361BD4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82361bf0
	goto loc_82361BF0;
loc_82361BD4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
loc_82361BF0:
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

__attribute__((alias("__imp__sub_82361C04"))) PPC_WEAK_FUNC(sub_82361C04);
PPC_FUNC_IMPL(__imp__sub_82361C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82361C08"))) PPC_WEAK_FUNC(sub_82361C08);
PPC_FUNC_IMPL(__imp__sub_82361C08) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r5,r3,r11
	ctx.r5.s64 = r11.s64 - ctx.r3.s64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpw cr6,r30,r5
	cr6.compare<int32_t>(r30.s32, ctx.r5.s32, xer);
	// bge cr6,0x82361c58
	if (!cr6.lt) goto loc_82361C58;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82359250
	sub_82359250(ctx, base);
	// b 0x82361c64
	goto loc_82361C64;
loc_82361C58:
	// bl 0x82359250
	sub_82359250(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,33(r31)
	PPC_STORE_U8(r31.u32 + 33, r11.u8);
loc_82361C64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82361C6C"))) PPC_WEAK_FUNC(sub_82361C6C);
PPC_FUNC_IMPL(__imp__sub_82361C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82361C70"))) PPC_WEAK_FUNC(sub_82361C70);
PPC_FUNC_IMPL(__imp__sub_82361C70) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x823591a0
	sub_823591A0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stb r10,36(r31)
	PPC_STORE_U8(r31.u32 + 36, ctx.r10.u8);
	// stb r9,37(r31)
	PPC_STORE_U8(r31.u32 + 37, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_82361CC0"))) PPC_WEAK_FUNC(sub_82361CC0);
PPC_FUNC_IMPL(__imp__sub_82361CC0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stb r11,37(r31)
	PPC_STORE_U8(r31.u32 + 37, r11.u8);
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// blt cr6,0x82361cf4
	if (cr6.lt) goto loc_82361CF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r11.u8);
	// b 0x82361d88
	goto loc_82361D88;
loc_82361CF4:
	// li r11,1
	r11.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r11.u8);
	// bl 0x823591a0
	sub_823591A0(ctx, base);
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82361a30
	sub_82361A30(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,15760
	ctx.r4.s64 = r11.s64 + 15760;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8239d9a0
	sub_8239D9A0(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82361d78
	if (cr0.eq) goto loc_82361D78;
	// srawi r11,r29,1
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	r11.s64 = r29.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	// add r29,r11,r29
	r29.u64 = r11.u64 + r29.u64;
loc_82361D78:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
loc_82361D88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82361D90"))) PPC_WEAK_FUNC(sub_82361D90);
PPC_FUNC_IMPL(__imp__sub_82361D90) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// bl 0x82361cc0
	sub_82361CC0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82361df0
	if (cr0.eq) goto loc_82361DF0;
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
loc_82361DBC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x8239d9a0
	sub_8239D9A0(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82361e0c
	if (!cr0.eq) goto loc_82361E0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82361cc0
	sub_82361CC0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82361dbc
	if (!cr0.eq) goto loc_82361DBC;
loc_82361DF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82361DF4:
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
loc_82361E0C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82361df4
	goto loc_82361DF4;
}

__attribute__((alias("__imp__sub_82361E14"))) PPC_WEAK_FUNC(sub_82361E14);
PPC_FUNC_IMPL(__imp__sub_82361E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82361E18"))) PPC_WEAK_FUNC(sub_82361E18);
PPC_FUNC_IMPL(__imp__sub_82361E18) {
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
	// lwz r16,-9400(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9400);
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82359130
	sub_82359130(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// li r28,0
	r28.s64 = 0;
	// addi r11,r11,-9448
	r11.s64 = r11.s64 + -9448;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stb r28,32(r30)
	PPC_STORE_U8(r30.u32 + 32, r28.u8);
	// stb r28,33(r30)
	PPC_STORE_U8(r30.u32 + 33, r28.u8);
	// stw r28,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r28.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82361eb4
	if (cr0.eq) goto loc_82361EB4;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lbz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 36);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82361e94
	if (!cr0.eq) goto loc_82361E94;
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x82361e98
	goto loc_82361E98;
loc_82361E94:
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
loc_82361E98:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
loc_82361EB4:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r28,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r28.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stw r10,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r10.u32);
	// stb r9,20(r11)
	PPC_STORE_U8(r11.u32 + 20, ctx.r9.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82361E20"))) PPC_WEAK_FUNC(sub_82361E20);
PPC_FUNC_IMPL(__imp__sub_82361E20) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82359130
	sub_82359130(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// li r28,0
	r28.s64 = 0;
	// addi r11,r11,-9448
	r11.s64 = r11.s64 + -9448;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stb r28,32(r30)
	PPC_STORE_U8(r30.u32 + 32, r28.u8);
	// stb r28,33(r30)
	PPC_STORE_U8(r30.u32 + 33, r28.u8);
	// stw r28,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r28.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82361eb4
	if (cr0.eq) goto loc_82361EB4;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lbz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 36);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82361e94
	if (!cr0.eq) goto loc_82361E94;
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x82361e98
	goto loc_82361E98;
loc_82361E94:
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
loc_82361E98:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
loc_82361EB4:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r28,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r28.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stw r10,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r10.u32);
	// stb r9,20(r11)
	PPC_STORE_U8(r11.u32 + 20, ctx.r9.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82361EF8"))) PPC_WEAK_FUNC(sub_82361EF8);
PPC_FUNC_IMPL(__imp__sub_82361EF8) {
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
	// bl 0x82359150
	sub_82359150(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361F20"))) PPC_WEAK_FUNC(sub_82361F20);
PPC_FUNC_IMPL(__imp__sub_82361F20) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r10,r10,-9448
	ctx.r10.s64 = ctx.r10.s64 + -9448;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq 0x82361f54
	if (cr0.eq) goto loc_82361F54;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,20(r11)
	PPC_STORE_U8(r11.u32 + 20, ctx.r10.u8);
loc_82361F54:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359150
	sub_82359150(ctx, base);
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

__attribute__((alias("__imp__sub_82361F78"))) PPC_WEAK_FUNC(sub_82361F78);
PPC_FUNC_IMPL(__imp__sub_82361F78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82361f8c
	if (cr0.eq) goto loc_82361F8C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,20(r11)
	PPC_STORE_U8(r11.u32 + 20, ctx.r10.u8);
loc_82361F8C:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x821e7b68
	sub_821E7B68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82361F94"))) PPC_WEAK_FUNC(sub_82361F94);
PPC_FUNC_IMPL(__imp__sub_82361F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82361F98"))) PPC_WEAK_FUNC(sub_82361F98);
PPC_FUNC_IMPL(__imp__sub_82361F98) {
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
	// bl 0x82361f20
	sub_82361F20(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82361fc8
	if (cr0.eq) goto loc_82361FC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82361FC8:
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

__attribute__((alias("__imp__sub_82361FE4"))) PPC_WEAK_FUNC(sub_82361FE4);
PPC_FUNC_IMPL(__imp__sub_82361FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82361FE8"))) PPC_WEAK_FUNC(sub_82361FE8);
PPC_FUNC_IMPL(__imp__sub_82361FE8) {
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
	// lwz r16,-9344(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9344);
	// mflr r12
	// bl 0x8239bcec
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lis r27,-32250
	r27.s64 = -2113536000;
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r25,1
	r25.s64 = 1;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stb r29,20(r30)
	PPC_STORE_U8(r30.u32 + 20, r29.u8);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// lwz r11,-9460(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -9460);
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// stb r29,32(r30)
	PPC_STORE_U8(r30.u32 + 32, r29.u8);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// stb r25,37(r30)
	PPC_STORE_U8(r30.u32 + 37, r25.u8);
	// beq 0x8236207c
	if (cr0.eq) goto loc_8236207C;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq 0x82362074
	if (cr0.eq) goto loc_82362074;
	// lwz r11,-9460(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -9460);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r29,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r29.u32);
	// stb r29,8(r28)
	PPC_STORE_U8(r28.u32 + 8, r29.u8);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// bl 0x82361a30
	sub_82361A30(ctx, base);
	// mr r29,r28
	r29.u64 = r28.u64;
loc_82362074:
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// b 0x823620fc
	goto loc_823620FC;
loc_8236207C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823591a0
	sub_823591A0(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823591a0
	sub_823591A0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823620f8
	if (cr0.eq) goto loc_823620F8;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// subf r10,r27,r26
	ctx.r10.s64 = r26.s64 - r27.s64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,15748(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 15748);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r25,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r25.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_823620F8:
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
loc_823620FC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// beq 0x82362134
	if (cr0.eq) goto loc_82362134;
	// stb r25,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r25.u8);
loc_82362134:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82361c70
	sub_82361C70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82361FF0"))) PPC_WEAK_FUNC(sub_82361FF0);
PPC_FUNC_IMPL(__imp__sub_82361FF0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lis r27,-32250
	r27.s64 = -2113536000;
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r25,1
	r25.s64 = 1;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stb r29,20(r30)
	PPC_STORE_U8(r30.u32 + 20, r29.u8);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// lwz r11,-9460(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -9460);
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// stb r29,32(r30)
	PPC_STORE_U8(r30.u32 + 32, r29.u8);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// stb r25,37(r30)
	PPC_STORE_U8(r30.u32 + 37, r25.u8);
	// beq 0x8236207c
	if (cr0.eq) goto loc_8236207C;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq 0x82362074
	if (cr0.eq) goto loc_82362074;
	// lwz r11,-9460(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -9460);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r29,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r29.u32);
	// stb r29,8(r28)
	PPC_STORE_U8(r28.u32 + 8, r29.u8);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// bl 0x82361a30
	sub_82361A30(ctx, base);
	// mr r29,r28
	r29.u64 = r28.u64;
loc_82362074:
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// b 0x823620fc
	goto loc_823620FC;
loc_8236207C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823591a0
	sub_823591A0(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823591a0
	sub_823591A0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823620f8
	if (cr0.eq) goto loc_823620F8;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// subf r10,r27,r26
	ctx.r10.s64 = r26.s64 - r27.s64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,15748(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 15748);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r25,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r25.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_823620F8:
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
loc_823620FC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// beq 0x82362134
	if (cr0.eq) goto loc_82362134;
	// stb r25,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r25.u8);
loc_82362134:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82361c70
	sub_82361C70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82362148"))) PPC_WEAK_FUNC(sub_82362148);
PPC_FUNC_IMPL(__imp__sub_82362148) {
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

__attribute__((alias("__imp__sub_82362170"))) PPC_WEAK_FUNC(sub_82362170);
PPC_FUNC_IMPL(__imp__sub_82362170) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stb r30,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r30.u8);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lwz r11,-9460(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9460);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stb r30,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r30.u8);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stb r29,37(r31)
	PPC_STORE_U8(r31.u32 + 37, r29.u8);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823621fc
	if (cr0.eq) goto loc_823621FC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 36);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x823621dc
	if (!cr0.eq) goto loc_823621DC;
	// mr r11,r30
	r11.u64 = r30.u64;
	// b 0x823621e0
	goto loc_823621E0;
loc_823621DC:
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
loc_823621E0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
loc_823621FC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq 0x82362238
	if (cr0.eq) goto loc_82362238;
	// stb r29,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r29.u8);
loc_82362238:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82361c70
	sub_82361C70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8236224C"))) PPC_WEAK_FUNC(sub_8236224C);
PPC_FUNC_IMPL(__imp__sub_8236224C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362250"))) PPC_WEAK_FUNC(sub_82362250);
PPC_FUNC_IMPL(__imp__sub_82362250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-9280
	ctx.r4.s64 = ctx.r9.s64 + -9280;
	// mullw r3,r11,r10
	ctx.r3.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// b 0x82354930
	sub_82354930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236226C"))) PPC_WEAK_FUNC(sub_8236226C);
PPC_FUNC_IMPL(__imp__sub_8236226C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362270"))) PPC_WEAK_FUNC(sub_82362270);
PPC_FUNC_IMPL(__imp__sub_82362270) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82354b48
	sub_82354B48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82362278"))) PPC_WEAK_FUNC(sub_82362278);
PPC_FUNC_IMPL(__imp__sub_82362278) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// addi r5,r8,-9272
	ctx.r5.s64 = ctx.r8.s64 + -9272;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r7,-32202
	ctx.r7.s64 = -2110390272;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r7,8784
	r11.s64 = ctx.r7.s64 + 8784;
	// li r6,56
	ctx.r6.s64 = 56;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r4,-15
	ctx.r4.s64 = -15;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lis r8,-32202
	ctx.r8.s64 = -2110390272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// addi r11,r8,8816
	r11.s64 = ctx.r8.s64 + 8816;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// bl 0x8267b670
	sub_8267B670(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8267b8c8
	sub_8267B8C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8267cd68
	sub_8267CD68(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_8236230C"))) PPC_WEAK_FUNC(sub_8236230C);
PPC_FUNC_IMPL(__imp__sub_8236230C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362310"))) PPC_WEAK_FUNC(sub_82362310);
PPC_FUNC_IMPL(__imp__sub_82362310) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r27,-32202
	r27.s64 = -2110390272;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r28,-32202
	r28.s64 = -2110390272;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r11,r27,8784
	r11.s64 = r27.s64 + 8784;
	// addi r9,r10,-9272
	ctx.r9.s64 = ctx.r10.s64 + -9272;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// addi r11,r28,8816
	r11.s64 = r28.s64 + 8816;
	// li r7,9
	ctx.r7.s64 = 9;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r6,-15
	ctx.r6.s64 = -15;
	// li r10,56
	ctx.r10.s64 = 56;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8267e800
	sub_8267E800(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8267ceb0
	sub_8267CEB0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8267d4c8
	sub_8267D4C8(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823623A4"))) PPC_WEAK_FUNC(sub_823623A4);
PPC_FUNC_IMPL(__imp__sub_823623A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823623A8"))) PPC_WEAK_FUNC(sub_823623A8);
PPC_FUNC_IMPL(__imp__sub_823623A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// bge cr6,0x823623c0
	if (!cr6.lt) goto loc_823623C0;
	// li r11,0
	r11.s64 = 0;
loc_823623C0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823623C8"))) PPC_WEAK_FUNC(sub_823623C8);
PPC_FUNC_IMPL(__imp__sub_823623C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_823623D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823623f4
	if (cr0.eq) goto loc_823623F4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823623d0
	if (cr6.eq) goto loc_823623D0;
loc_823623F4:
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362408"))) PPC_WEAK_FUNC(sub_82362408);
PPC_FUNC_IMPL(__imp__sub_82362408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1024
	r11.s64 = 1024;
	// stb r4,24584(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24584, ctx.r4.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,24576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24576, r11.u32);
	// stw r10,24580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24580, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362420"))) PPC_WEAK_FUNC(sub_82362420);
PPC_FUNC_IMPL(__imp__sub_82362420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,24580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24580, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236242C"))) PPC_WEAK_FUNC(sub_8236242C);
PPC_FUNC_IMPL(__imp__sub_8236242C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362430"))) PPC_WEAK_FUNC(sub_82362430);
PPC_FUNC_IMPL(__imp__sub_82362430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r3,r11,r3
	ctx.r3.u64 = r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236243C"))) PPC_WEAK_FUNC(sub_8236243C);
PPC_FUNC_IMPL(__imp__sub_8236243C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

