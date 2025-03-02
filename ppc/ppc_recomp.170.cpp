#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8268813C"))) PPC_WEAK_FUNC(sub_8268813C);
PPC_FUNC_IMPL(__imp__sub_8268813C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82688140"))) PPC_WEAK_FUNC(sub_82688140);
PPC_FUNC_IMPL(__imp__sub_82688140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addis r30,r31,1
	r30.s64 = r31.s64 + 65536;
	// addi r30,r30,-32712
	r30.s64 = r30.s64 + -32712;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82688218
	if (cr6.eq) goto loc_82688218;
	// lis r11,0
	r11.s64 = 0;
	// ori r11,r11,32828
	r11.u64 = r11.u64 | 32828;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x82689838
	sub_82689838(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82689838
	sub_82689838(ctx, base);
	// lis r11,0
	r11.s64 = 0;
	// subf r10,r29,r3
	ctx.r10.s64 = ctx.r3.s64 - r29.s64;
	// ori r11,r11,32836
	r11.u64 = r11.u64 | 32836;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// rlwinm r11,r11,14,0,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0xFFFFC000;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,5736(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f30.f64 = double(temp.f32);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// frsp f0,f12
	f0.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// fneg f31,f0
	f31.u64 = f0.u64 ^ 0x8000000000000000;
	// fsubs f2,f0,f31
	ctx.f2.f64 = double(float(f0.f64 - f31.f64));
	// fsubs f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 - f31.f64));
	// bl 0x82192610
	sub_82192610(ctx, base);
	// lis r11,0
	r11.s64 = 0;
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 + f31.f64));
	// ori r11,r11,32832
	r11.u64 = r11.u64 | 32832;
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// lwax r11,r31,r11
	r11.s64 = int32_t(PPC_LOAD_U32(r31.u32 + r11.u32));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// lfs f0,17324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// b 0x82688220
	goto loc_82688220;
loc_82688218:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
loc_82688220:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82688230"))) PPC_WEAK_FUNC(sub_82688230);
PPC_FUNC_IMPL(__imp__sub_82688230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addis r31,r11,1
	r31.s64 = r11.s64 + 65536;
	// ori r10,r10,32892
	ctx.r10.u64 = ctx.r10.u64 | 32892;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r31,r31,-32712
	r31.s64 = r31.s64 + -32712;
	// stwx r3,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826882a4
	if (cr6.eq) goto loc_826882A4;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r9,r10,32896
	ctx.r9.u64 = ctx.r10.u64 | 32896;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r10,6124
	ctx.r6.s64 = ctx.r10.s64 + 6124;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// lfsx f31,r11,r9
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	f31.f64 = double(temp.f32);
	// addi r5,r10,24988
	ctx.r5.s64 = ctx.r10.s64 + 24988;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8268a168
	sub_8268A168(ctx, base);
loc_826882A4:
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

__attribute__((alias("__imp__sub_826882BC"))) PPC_WEAK_FUNC(sub_826882BC);
PPC_FUNC_IMPL(__imp__sub_826882BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826882C0"))) PPC_WEAK_FUNC(sub_826882C0);
PPC_FUNC_IMPL(__imp__sub_826882C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,32896
	ctx.r10.u64 = ctx.r10.u64 | 32896;
	// ori r9,r9,32892
	ctx.r9.u64 = ctx.r9.u64 | 32892;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// stfsx f1,r3,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, temp.u32);
	// lwzx r4,r3,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826882E8"))) PPC_WEAK_FUNC(sub_826882E8);
PPC_FUNC_IMPL(__imp__sub_826882E8) {
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
	// beq 0x82688328
	if (cr0.eq) goto loc_82688328;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r3,r11,6740
	ctx.r3.s64 = r11.s64 + 6740;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82688330
	goto loc_82688330;
loc_82688328:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82688330:
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

__attribute__((alias("__imp__sub_8268834C"))) PPC_WEAK_FUNC(sub_8268834C);
PPC_FUNC_IMPL(__imp__sub_8268834C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82688350"))) PPC_WEAK_FUNC(sub_82688350);
PPC_FUNC_IMPL(__imp__sub_82688350) {
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
	// li r5,40
	ctx.r5.s64 = 40;
	// addis r3,r31,1
	ctx.r3.s64 = r31.s64 + 65536;
	// addi r3,r3,-32684
	ctx.r3.s64 = ctx.r3.s64 + -32684;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82687ed0
	sub_82687ED0(ctx, base);
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

__attribute__((alias("__imp__sub_82688390"))) PPC_WEAK_FUNC(sub_82688390);
PPC_FUNC_IMPL(__imp__sub_82688390) {
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
	// bl 0x826882e8
	sub_826882E8(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826883c0
	if (cr0.eq) goto loc_826883C0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_826883C0:
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

__attribute__((alias("__imp__sub_826883D4"))) PPC_WEAK_FUNC(sub_826883D4);
PPC_FUNC_IMPL(__imp__sub_826883D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826883D8"))) PPC_WEAK_FUNC(sub_826883D8);
PPC_FUNC_IMPL(__imp__sub_826883D8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// b 0x82688420
	goto loc_82688420;
loc_826883F4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82688414
	if (cr0.eq) goto loc_82688414;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82689688
	sub_82689688(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82688414:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82688420:
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
	// bne 0x826883f4
	if (!cr0.eq) goto loc_826883F4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8268844C"))) PPC_WEAK_FUNC(sub_8268844C);
PPC_FUNC_IMPL(__imp__sub_8268844C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82688450"))) PPC_WEAK_FUNC(sub_82688450);
PPC_FUNC_IMPL(__imp__sub_82688450) {
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
	// bl 0x82688390
	sub_82688390(ctx, base);
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

__attribute__((alias("__imp__sub_826884B4"))) PPC_WEAK_FUNC(sub_826884B4);
PPC_FUNC_IMPL(__imp__sub_826884B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826884B8"))) PPC_WEAK_FUNC(sub_826884B8);
PPC_FUNC_IMPL(__imp__sub_826884B8) {
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

__attribute__((alias("__imp__sub_8268850C"))) PPC_WEAK_FUNC(sub_8268850C);
PPC_FUNC_IMPL(__imp__sub_8268850C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82688510"))) PPC_WEAK_FUNC(sub_82688510);
PPC_FUNC_IMPL(__imp__sub_82688510) {
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
	// b 0x82688540
	goto loc_82688540;
loc_82688530:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82688540:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82688530
	if (!cr6.eq) goto loc_82688530;
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

__attribute__((alias("__imp__sub_82688568"))) PPC_WEAK_FUNC(sub_82688568);
PPC_FUNC_IMPL(__imp__sub_82688568) {
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x826883d8
	sub_826883D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82688510
	sub_82688510(ctx, base);
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

__attribute__((alias("__imp__sub_826885C0"))) PPC_WEAK_FUNC(sub_826885C0);
PPC_FUNC_IMPL(__imp__sub_826885C0) {
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
	// bl 0x826a6a60
	sub_826A6A60(ctx, base);
	// addis r31,r31,1
	r31.s64 = r31.s64 + 65536;
	// addi r31,r31,-32724
	r31.s64 = r31.s64 + -32724;
	// b 0x82688634
	goto loc_82688634;
loc_826885E8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x826897a8
	sub_826897A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82688648
	if (!cr0.eq) goto loc_82688648;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8268861c
	if (cr0.eq) goto loc_8268861C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82689688
	sub_82689688(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8268861C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826884b8
	sub_826884B8(ctx, base);
loc_82688634:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826885e8
	if (cr0.eq) goto loc_826885E8;
loc_82688648:
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

__attribute__((alias("__imp__sub_82688660"))) PPC_WEAK_FUNC(sub_82688660);
PPC_FUNC_IMPL(__imp__sub_82688660) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addis r31,r30,1
	r31.s64 = r30.s64 + 65536;
	// addi r31,r31,-32712
	r31.s64 = r31.s64 + -32712;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826886b4
	if (cr0.eq) goto loc_826886B4;
	// bl 0x826896f0
	sub_826896F0(ctx, base);
	// addis r4,r30,1
	ctx.r4.s64 = r30.s64 + 65536;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r4,r4,-32724
	ctx.r4.s64 = ctx.r4.s64 + -32724;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bl 0x82688450
	sub_82688450(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_826886B4:
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

__attribute__((alias("__imp__sub_826886CC"))) PPC_WEAK_FUNC(sub_826886CC);
PPC_FUNC_IMPL(__imp__sub_826886CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826886D0"))) PPC_WEAK_FUNC(sub_826886D0);
PPC_FUNC_IMPL(__imp__sub_826886D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82688510
	sub_82688510(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826886D4"))) PPC_WEAK_FUNC(sub_826886D4);
PPC_FUNC_IMPL(__imp__sub_826886D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826886D8"))) PPC_WEAK_FUNC(sub_826886D8);
PPC_FUNC_IMPL(__imp__sub_826886D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,22832(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 22832);
	// mflr r12
	// bl 0x8239bce4
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// bl 0x826a66d0
	sub_826A66D0(ctx, base);
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// li r29,0
	r29.s64 = 0;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addis r11,r30,1
	r11.s64 = r30.s64 + 65536;
	// addi r9,r9,22740
	ctx.r9.s64 = ctx.r9.s64 + 22740;
	// addi r11,r11,-32724
	r11.s64 = r11.s64 + -32724;
	// std r29,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r29.u64);
	// ld r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addis r27,r30,1
	r27.s64 = r30.s64 + 65536;
	// addis r23,r30,1
	r23.s64 = r30.s64 + 65536;
	// addis r26,r30,1
	r26.s64 = r30.s64 + 65536;
	// addis r25,r30,1
	r25.s64 = r30.s64 + 65536;
	// lfs f31,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r10,r10,32840
	ctx.r10.u64 = ctx.r10.u64 | 32840;
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// lis r11,0
	r11.s64 = 0;
	// ori r9,r9,32844
	ctx.r9.u64 = ctx.r9.u64 | 32844;
	// ori r11,r11,32836
	r11.u64 = r11.u64 | 32836;
	// ori r8,r8,32848
	ctx.r8.u64 = ctx.r8.u64 | 32848;
	// addi r27,r27,-32716
	r27.s64 = r27.s64 + -32716;
	// stfsx f31,r30,r10
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + ctx.r10.u32, temp.u32);
	// addi r23,r23,-32712
	r23.s64 = r23.s64 + -32712;
	// addi r26,r26,-32708
	r26.s64 = r26.s64 + -32708;
	// stfsx f30,r30,r9
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + ctx.r9.u32, temp.u32);
	// addi r25,r25,-32704
	r25.s64 = r25.s64 + -32704;
	// stwx r28,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, r28.u32);
	// addis r3,r30,1
	ctx.r3.s64 = r30.s64 + 65536;
	// stfsx f31,r30,r8
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + ctx.r8.u32, temp.u32);
	// stw r29,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r29.u32);
	// addi r3,r3,-32684
	ctx.r3.s64 = ctx.r3.s64 + -32684;
	// stw r29,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r29.u32);
	// stw r29,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r29.u32);
	// stw r24,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r24.u32);
	// bl 0x822f8898
	sub_822F8898(ctx, base);
	// lis r11,0
	r11.s64 = 0;
	// rlwinm r28,r28,14,0,17
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 14) & 0xFFFFC000;
	// ori r10,r11,32892
	ctx.r10.u64 = r11.u64 | 32892;
	// lis r11,0
	r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r9,r11,32896
	ctx.r9.u64 = r11.u64 | 32896;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stwx r29,r30,r10
	PPC_STORE_U32(r30.u32 + ctx.r10.u32, r29.u32);
	// addi r4,r11,22720
	ctx.r4.s64 = r11.s64 + 22720;
	// stfsx f31,r30,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + ctx.r9.u32, temp.u32);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,68
	ctx.r3.s64 = 68;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268881c
	if (cr0.eq) goto loc_8268881C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82689618
	sub_82689618(ctx, base);
	// b 0x82688820
	goto loc_82688820;
loc_8268881C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82688820:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r3,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// bl 0x826896e0
	sub_826896E0(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82689798
	sub_82689798(ctx, base);
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x82689768
	sub_82689768(ctx, base);
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82688864
	if (!cr0.eq) goto loc_82688864;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// b 0x82688870
	goto loc_82688870;
loc_82688864:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x8268a078
	sub_8268A078(ctx, base);
loc_82688870:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_826886E0"))) PPC_WEAK_FUNC(sub_826886E0);
PPC_FUNC_IMPL(__imp__sub_826886E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce4
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// bl 0x826a66d0
	sub_826A66D0(ctx, base);
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// li r29,0
	r29.s64 = 0;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addis r11,r30,1
	r11.s64 = r30.s64 + 65536;
	// addi r9,r9,22740
	ctx.r9.s64 = ctx.r9.s64 + 22740;
	// addi r11,r11,-32724
	r11.s64 = r11.s64 + -32724;
	// std r29,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r29.u64);
	// ld r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addis r27,r30,1
	r27.s64 = r30.s64 + 65536;
	// addis r23,r30,1
	r23.s64 = r30.s64 + 65536;
	// addis r26,r30,1
	r26.s64 = r30.s64 + 65536;
	// addis r25,r30,1
	r25.s64 = r30.s64 + 65536;
	// lfs f31,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r10,r10,32840
	ctx.r10.u64 = ctx.r10.u64 | 32840;
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// lis r11,0
	r11.s64 = 0;
	// ori r9,r9,32844
	ctx.r9.u64 = ctx.r9.u64 | 32844;
	// ori r11,r11,32836
	r11.u64 = r11.u64 | 32836;
	// ori r8,r8,32848
	ctx.r8.u64 = ctx.r8.u64 | 32848;
	// addi r27,r27,-32716
	r27.s64 = r27.s64 + -32716;
	// stfsx f31,r30,r10
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + ctx.r10.u32, temp.u32);
	// addi r23,r23,-32712
	r23.s64 = r23.s64 + -32712;
	// addi r26,r26,-32708
	r26.s64 = r26.s64 + -32708;
	// stfsx f30,r30,r9
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + ctx.r9.u32, temp.u32);
	// addi r25,r25,-32704
	r25.s64 = r25.s64 + -32704;
	// stwx r28,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, r28.u32);
	// addis r3,r30,1
	ctx.r3.s64 = r30.s64 + 65536;
	// stfsx f31,r30,r8
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + ctx.r8.u32, temp.u32);
	// stw r29,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r29.u32);
	// addi r3,r3,-32684
	ctx.r3.s64 = ctx.r3.s64 + -32684;
	// stw r29,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r29.u32);
	// stw r29,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r29.u32);
	// stw r24,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r24.u32);
	// bl 0x822f8898
	sub_822F8898(ctx, base);
	// lis r11,0
	r11.s64 = 0;
	// rlwinm r28,r28,14,0,17
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 14) & 0xFFFFC000;
	// ori r10,r11,32892
	ctx.r10.u64 = r11.u64 | 32892;
	// lis r11,0
	r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r9,r11,32896
	ctx.r9.u64 = r11.u64 | 32896;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stwx r29,r30,r10
	PPC_STORE_U32(r30.u32 + ctx.r10.u32, r29.u32);
	// addi r4,r11,22720
	ctx.r4.s64 = r11.s64 + 22720;
	// stfsx f31,r30,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + ctx.r9.u32, temp.u32);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,68
	ctx.r3.s64 = 68;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268881c
	if (cr0.eq) goto loc_8268881C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82689618
	sub_82689618(ctx, base);
	// b 0x82688820
	goto loc_82688820;
loc_8268881C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82688820:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r3,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// bl 0x826896e0
	sub_826896E0(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82689798
	sub_82689798(ctx, base);
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x82689768
	sub_82689768(ctx, base);
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82688864
	if (!cr0.eq) goto loc_82688864;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// b 0x82688870
	goto loc_82688870;
loc_82688864:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x8268a078
	sub_8268A078(ctx, base);
loc_82688870:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82688884"))) PPC_WEAK_FUNC(sub_82688884);
PPC_FUNC_IMPL(__imp__sub_82688884) {
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
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x826a67b8
	sub_826A67B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826888AC"))) PPC_WEAK_FUNC(sub_826888AC);
PPC_FUNC_IMPL(__imp__sub_826888AC) {
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
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,32812
	ctx.r10.u64 = ctx.r10.u64 | 32812;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x826886d0
	sub_826886D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826888E0"))) PPC_WEAK_FUNC(sub_826888E0);
PPC_FUNC_IMPL(__imp__sub_826888E0) {
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

__attribute__((alias("__imp__sub_82688908"))) PPC_WEAK_FUNC(sub_82688908);
PPC_FUNC_IMPL(__imp__sub_82688908) {
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
	// lwz r16,22968(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 22968);
	// mflr r12
	// bl 0x8239bcfc
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
	// addi r11,r11,22740
	r11.s64 = r11.s64 + 22740;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,0
	r11.s64 = 0;
	// ori r11,r11,32828
	r11.u64 = r11.u64 | 32828;
	// lwzx r29,r30,r11
	r29.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82688958
	if (cr0.eq) goto loc_82688958;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82689688
	sub_82689688(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82688958:
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82688988
	if (cr0.eq) goto loc_82688988;
	// lis r11,0
	r11.s64 = 0;
	// ori r11,r11,32824
	r11.u64 = r11.u64 | 32824;
	// lwzx r29,r30,r11
	r29.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82688988
	if (cr0.eq) goto loc_82688988;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82689688
	sub_82689688(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82688988:
	// addis r29,r30,1
	r29.s64 = r30.s64 + 65536;
	// addi r29,r29,-32724
	r29.s64 = r29.s64 + -32724;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82688568
	sub_82688568(ctx, base);
	// lis r11,0
	r11.s64 = 0;
	// ori r11,r11,32820
	r11.u64 = r11.u64 | 32820;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82688510
	sub_82688510(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a67b8
	sub_826A67B8(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82688910"))) PPC_WEAK_FUNC(sub_82688910);
PPC_FUNC_IMPL(__imp__sub_82688910) {
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,22740
	r11.s64 = r11.s64 + 22740;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,0
	r11.s64 = 0;
	// ori r11,r11,32828
	r11.u64 = r11.u64 | 32828;
	// lwzx r29,r30,r11
	r29.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82688958
	if (cr0.eq) goto loc_82688958;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82689688
	sub_82689688(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82688958:
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82688988
	if (cr0.eq) goto loc_82688988;
	// lis r11,0
	r11.s64 = 0;
	// ori r11,r11,32824
	r11.u64 = r11.u64 | 32824;
	// lwzx r29,r30,r11
	r29.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82688988
	if (cr0.eq) goto loc_82688988;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82689688
	sub_82689688(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82688988:
	// addis r29,r30,1
	r29.s64 = r30.s64 + 65536;
	// addi r29,r29,-32724
	r29.s64 = r29.s64 + -32724;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82688568
	sub_82688568(ctx, base);
	// lis r11,0
	r11.s64 = 0;
	// ori r11,r11,32820
	r11.u64 = r11.u64 | 32820;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82688510
	sub_82688510(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a67b8
	sub_826A67B8(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826889C0"))) PPC_WEAK_FUNC(sub_826889C0);
PPC_FUNC_IMPL(__imp__sub_826889C0) {
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
	// bl 0x826a67b8
	sub_826A67B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826889E8"))) PPC_WEAK_FUNC(sub_826889E8);
PPC_FUNC_IMPL(__imp__sub_826889E8) {
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
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,32812
	ctx.r10.u64 = ctx.r10.u64 | 32812;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x826886d0
	sub_826886D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82688A1C"))) PPC_WEAK_FUNC(sub_82688A1C);
PPC_FUNC_IMPL(__imp__sub_82688A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82688A20"))) PPC_WEAK_FUNC(sub_82688A20);
PPC_FUNC_IMPL(__imp__sub_82688A20) {
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
	// lwz r16,23064(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 23064);
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r3,0
	ctx.r3.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r4,r11,22616
	ctx.r4.s64 = r11.s64 + 22616;
	// li r5,32
	ctx.r5.s64 = 32;
	// ori r3,r3,32900
	ctx.r3.u64 = ctx.r3.u64 | 32900;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82688a7c
	if (cr0.eq) goto loc_82688A7C;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826886e0
	sub_826886E0(ctx, base);
	// b 0x82688a80
	goto loc_82688A80;
loc_82688A7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82688A80:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82688A28"))) PPC_WEAK_FUNC(sub_82688A28);
PPC_FUNC_IMPL(__imp__sub_82688A28) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r3,0
	ctx.r3.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r4,r11,22616
	ctx.r4.s64 = r11.s64 + 22616;
	// li r5,32
	ctx.r5.s64 = 32;
	// ori r3,r3,32900
	ctx.r3.u64 = ctx.r3.u64 | 32900;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82688a7c
	if (cr0.eq) goto loc_82688A7C;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826886e0
	sub_826886E0(ctx, base);
	// b 0x82688a80
	goto loc_82688A80;
loc_82688A7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82688A80:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82688A88"))) PPC_WEAK_FUNC(sub_82688A88);
PPC_FUNC_IMPL(__imp__sub_82688A88) {
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

__attribute__((alias("__imp__sub_82688AB0"))) PPC_WEAK_FUNC(sub_82688AB0);
PPC_FUNC_IMPL(__imp__sub_82688AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32151
	r11.s64 = -2107047936;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r11,r11,-30168
	r11.s64 = r11.s64 + -30168;
	// stw r11,-13320(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13320, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82688AC4"))) PPC_WEAK_FUNC(sub_82688AC4);
PPC_FUNC_IMPL(__imp__sub_82688AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82688AC8"))) PPC_WEAK_FUNC(sub_82688AC8);
PPC_FUNC_IMPL(__imp__sub_82688AC8) {
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
	// bl 0x82688910
	sub_82688910(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82688af8
	if (cr0.eq) goto loc_82688AF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_82688AF8:
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

__attribute__((alias("__imp__sub_82688B14"))) PPC_WEAK_FUNC(sub_82688B14);
PPC_FUNC_IMPL(__imp__sub_82688B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82688B18"))) PPC_WEAK_FUNC(sub_82688B18);
PPC_FUNC_IMPL(__imp__sub_82688B18) {
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
	// lwz r16,23120(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 23120);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-13716(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13716);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// addi r30,r9,-13720
	r30.s64 = ctx.r9.s64 + -13720;
	// bne 0x82688b64
	if (!cr0.eq) goto loc_82688B64;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13716(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13716, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-23216
	ctx.r4.s64 = r11.s64 + -23216;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82688B64:
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

__attribute__((alias("__imp__sub_82688B20"))) PPC_WEAK_FUNC(sub_82688B20);
PPC_FUNC_IMPL(__imp__sub_82688B20) {
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
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-13716(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13716);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// addi r30,r9,-13720
	r30.s64 = ctx.r9.s64 + -13720;
	// bne 0x82688b64
	if (!cr0.eq) goto loc_82688B64;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13716(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13716, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-23216
	ctx.r4.s64 = r11.s64 + -23216;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82688B64:
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

__attribute__((alias("__imp__sub_82688B78"))) PPC_WEAK_FUNC(sub_82688B78);
PPC_FUNC_IMPL(__imp__sub_82688B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13716
	r11.s64 = r11.s64 + -13716;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13716
	ctx.r10.s64 = ctx.r10.s64 + -13716;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82688BA0"))) PPC_WEAK_FUNC(sub_82688BA0);
PPC_FUNC_IMPL(__imp__sub_82688BA0) {
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
	// bl 0x82688b20
	sub_82688B20(ctx, base);
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

__attribute__((alias("__imp__sub_82688BD0"))) PPC_WEAK_FUNC(sub_82688BD0);
PPC_FUNC_IMPL(__imp__sub_82688BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r11,23244
	ctx.r5.s64 = r11.s64 + 23244;
	// b 0x82120f10
	sub_82120F10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82688BE0"))) PPC_WEAK_FUNC(sub_82688BE0);
PPC_FUNC_IMPL(__imp__sub_82688BE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82120f78
	sub_82120F78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82688BEC"))) PPC_WEAK_FUNC(sub_82688BEC);
PPC_FUNC_IMPL(__imp__sub_82688BEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82688BF0"))) PPC_WEAK_FUNC(sub_82688BF0);
PPC_FUNC_IMPL(__imp__sub_82688BF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82688BF8"))) PPC_WEAK_FUNC(sub_82688BF8);
PPC_FUNC_IMPL(__imp__sub_82688BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,84(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// addi r11,r11,-3
	r11.s64 = r11.s64 + -3;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82688C10"))) PPC_WEAK_FUNC(sub_82688C10);
PPC_FUNC_IMPL(__imp__sub_82688C10) {
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
	// lwz r16,23272(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 23272);
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822e5348
	sub_822E5348(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,92
	ctx.r3.s64 = 92;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// beq 0x82688c74
	if (cr0.eq) goto loc_82688C74;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822fe258
	sub_822FE258(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,23172
	r11.s64 = r11.s64 + 23172;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82688c78
	goto loc_82688C78;
loc_82688C74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82688C78:
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

__attribute__((alias("__imp__sub_82688C18"))) PPC_WEAK_FUNC(sub_82688C18);
PPC_FUNC_IMPL(__imp__sub_82688C18) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822e5348
	sub_822E5348(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,92
	ctx.r3.s64 = 92;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// beq 0x82688c74
	if (cr0.eq) goto loc_82688C74;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822fe258
	sub_822FE258(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,23172
	r11.s64 = r11.s64 + 23172;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82688c78
	goto loc_82688C78;
loc_82688C74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82688C78:
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

__attribute__((alias("__imp__sub_82688C90"))) PPC_WEAK_FUNC(sub_82688C90);
PPC_FUNC_IMPL(__imp__sub_82688C90) {
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

__attribute__((alias("__imp__sub_82688CB8"))) PPC_WEAK_FUNC(sub_82688CB8);
PPC_FUNC_IMPL(__imp__sub_82688CB8) {
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
	// lwz r16,23328(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 23328);
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
	// lwz r11,-13708(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13708);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82688d3c
	if (!cr0.eq) goto loc_82688D3C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13708(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13708, r11.u32);
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
	// bl 0x82688b20
	sub_82688B20(ctx, base);
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
	// stw r3,-13712(r28)
	PPC_STORE_U32(r28.u32 + -13712, ctx.r3.u32);
	// b 0x82688d40
	goto loc_82688D40;
loc_82688D3C:
	// lwz r3,-13712(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -13712);
loc_82688D40:
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
	// beq 0x82688d70
	if (cr0.eq) goto loc_82688D70;
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
	// b 0x82688db8
	goto loc_82688DB8;
loc_82688D70:
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
	// bne 0x82688dac
	if (!cr0.eq) goto loc_82688DAC;
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
loc_82688DAC:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82688DB8:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82688CC0"))) PPC_WEAK_FUNC(sub_82688CC0);
PPC_FUNC_IMPL(__imp__sub_82688CC0) {
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
	// lwz r11,-13708(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13708);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82688d3c
	if (!cr0.eq) goto loc_82688D3C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13708(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13708, r11.u32);
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
	// bl 0x82688b20
	sub_82688B20(ctx, base);
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
	// stw r3,-13712(r28)
	PPC_STORE_U32(r28.u32 + -13712, ctx.r3.u32);
	// b 0x82688d40
	goto loc_82688D40;
loc_82688D3C:
	// lwz r3,-13712(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -13712);
loc_82688D40:
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
	// beq 0x82688d70
	if (cr0.eq) goto loc_82688D70;
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
	// b 0x82688db8
	goto loc_82688DB8;
loc_82688D70:
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
	// bne 0x82688dac
	if (!cr0.eq) goto loc_82688DAC;
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
loc_82688DAC:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82688DB8:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82688DC4"))) PPC_WEAK_FUNC(sub_82688DC4);
PPC_FUNC_IMPL(__imp__sub_82688DC4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13708
	r11.s64 = r11.s64 + -13708;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13708
	ctx.r10.s64 = ctx.r10.s64 + -13708;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82688DEC"))) PPC_WEAK_FUNC(sub_82688DEC);
PPC_FUNC_IMPL(__imp__sub_82688DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82688DF0"))) PPC_WEAK_FUNC(sub_82688DF0);
PPC_FUNC_IMPL(__imp__sub_82688DF0) {
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
	// bl 0x822fe3a8
	sub_822FE3A8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82688e20
	if (cr0.eq) goto loc_82688E20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_82688E20:
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

__attribute__((alias("__imp__sub_82688E3C"))) PPC_WEAK_FUNC(sub_82688E3C);
PPC_FUNC_IMPL(__imp__sub_82688E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82688E40"))) PPC_WEAK_FUNC(sub_82688E40);
PPC_FUNC_IMPL(__imp__sub_82688E40) {
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
	// lwz r16,23400(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 23400);
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
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82688e98
	if (cr0.eq) goto loc_82688E98;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82688e90
	if (cr0.eq) goto loc_82688E90;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8268a3c0
	sub_8268A3C0(ctx, base);
	// b 0x82688e94
	goto loc_82688E94;
loc_82688E90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82688E94:
	// b 0x82688e9c
	goto loc_82688E9C;
loc_82688E98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82688E9C:
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

__attribute__((alias("__imp__sub_82688E48"))) PPC_WEAK_FUNC(sub_82688E48);
PPC_FUNC_IMPL(__imp__sub_82688E48) {
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
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82688e98
	if (cr0.eq) goto loc_82688E98;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82688e90
	if (cr0.eq) goto loc_82688E90;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8268a3c0
	sub_8268A3C0(ctx, base);
	// b 0x82688e94
	goto loc_82688E94;
loc_82688E90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82688E94:
	// b 0x82688e9c
	goto loc_82688E9C;
loc_82688E98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82688E9C:
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

__attribute__((alias("__imp__sub_82688EB4"))) PPC_WEAK_FUNC(sub_82688EB4);
PPC_FUNC_IMPL(__imp__sub_82688EB4) {
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

__attribute__((alias("__imp__sub_82688EDC"))) PPC_WEAK_FUNC(sub_82688EDC);
PPC_FUNC_IMPL(__imp__sub_82688EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82688EE0"))) PPC_WEAK_FUNC(sub_82688EE0);
PPC_FUNC_IMPL(__imp__sub_82688EE0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82688b20
	sub_82688B20(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,-29672
	ctx.r4.s64 = r11.s64 + -29672;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// lis r10,-32151
	ctx.r10.s64 = -2107047936;
	// lis r11,-32151
	r11.s64 = -2107047936;
	// addi r4,r10,-29728
	ctx.r4.s64 = ctx.r10.s64 + -29728;
	// addi r3,r11,-29744
	ctx.r3.s64 = r11.s64 + -29744;
	// bl 0x82300468
	sub_82300468(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82688F28"))) PPC_WEAK_FUNC(sub_82688F28);
PPC_FUNC_IMPL(__imp__sub_82688F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82688FA4"))) PPC_WEAK_FUNC(sub_82688FA4);
PPC_FUNC_IMPL(__imp__sub_82688FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82688FA8"))) PPC_WEAK_FUNC(sub_82688FA8);
PPC_FUNC_IMPL(__imp__sub_82688FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,23452
	r11.s64 = r11.s64 + 23452;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82688FB8"))) PPC_WEAK_FUNC(sub_82688FB8);
PPC_FUNC_IMPL(__imp__sub_82688FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82688FCC"))) PPC_WEAK_FUNC(sub_82688FCC);
PPC_FUNC_IMPL(__imp__sub_82688FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82688FD0"))) PPC_WEAK_FUNC(sub_82688FD0);
PPC_FUNC_IMPL(__imp__sub_82688FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82688FE4"))) PPC_WEAK_FUNC(sub_82688FE4);
PPC_FUNC_IMPL(__imp__sub_82688FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82688FE8"))) PPC_WEAK_FUNC(sub_82688FE8);
PPC_FUNC_IMPL(__imp__sub_82688FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82688FFC"))) PPC_WEAK_FUNC(sub_82688FFC);
PPC_FUNC_IMPL(__imp__sub_82688FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82689000"))) PPC_WEAK_FUNC(sub_82689000);
PPC_FUNC_IMPL(__imp__sub_82689000) {
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
	// addi r11,r11,23452
	r11.s64 = r11.s64 + 23452;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x8268902c
	if (cr0.eq) goto loc_8268902C;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8268902C:
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

__attribute__((alias("__imp__sub_82689044"))) PPC_WEAK_FUNC(sub_82689044);
PPC_FUNC_IMPL(__imp__sub_82689044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82689048"))) PPC_WEAK_FUNC(sub_82689048);
PPC_FUNC_IMPL(__imp__sub_82689048) {
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
	// lwz r16,23536(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 23536);
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
	// addi r11,r11,23488
	r11.s64 = r11.s64 + 23488;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268909c
	if (cr0.eq) goto loc_8268909C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268909C:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826890bc
	if (cr0.eq) goto loc_826890BC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826890BC:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,23452
	r11.s64 = r11.s64 + 23452;
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

__attribute__((alias("__imp__sub_82689050"))) PPC_WEAK_FUNC(sub_82689050);
PPC_FUNC_IMPL(__imp__sub_82689050) {
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,23488
	r11.s64 = r11.s64 + 23488;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268909c
	if (cr0.eq) goto loc_8268909C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268909C:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826890bc
	if (cr0.eq) goto loc_826890BC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826890BC:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,23452
	r11.s64 = r11.s64 + 23452;
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

__attribute__((alias("__imp__sub_826890E0"))) PPC_WEAK_FUNC(sub_826890E0);
PPC_FUNC_IMPL(__imp__sub_826890E0) {
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
	// bl 0x82688fa8
	sub_82688FA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82689108"))) PPC_WEAK_FUNC(sub_82689108);
PPC_FUNC_IMPL(__imp__sub_82689108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	f0.f64 = double(temp.f32);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 / f0.f64));
	// lfs f31,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	f31.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f1,40(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// beq cr6,0x82689160
	if (cr6.eq) goto loc_82689160;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82689160:
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// beq cr6,0x82689174
	if (cr6.eq) goto loc_82689174;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8268a970
	sub_8268A970(ctx, base);
loc_82689174:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x826891b8
	if (!cr6.gt) goto loc_826891B8;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x826891e4
	if (cr6.eq) goto loc_826891E4;
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
	// bl 0x82688f28
	sub_82688F28(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r4,r11,100
	ctx.r4.s64 = r11.s64 + 100;
	// bl 0x82688f28
	sub_82688F28(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// b 0x826891e0
	goto loc_826891E0;
loc_826891B8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x826891e4
	if (cr6.eq) goto loc_826891E4;
	// addi r3,r11,68
	ctx.r3.s64 = r11.s64 + 68;
	// bl 0x82688f28
	sub_82688F28(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r4,r11,24
	ctx.r4.s64 = r11.s64 + 24;
	// bl 0x82688f28
	sub_82688F28(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
loc_826891E0:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_826891E4:
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

__attribute__((alias("__imp__sub_826891FC"))) PPC_WEAK_FUNC(sub_826891FC);
PPC_FUNC_IMPL(__imp__sub_826891FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82689200"))) PPC_WEAK_FUNC(sub_82689200);
PPC_FUNC_IMPL(__imp__sub_82689200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,12
	ctx.r7.s64 = 12;
	// li r6,14
	ctx.r6.s64 = 14;
	// li r5,82
	ctx.r5.s64 = 82;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// b 0x8268b160
	sub_8268B160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689220"))) PPC_WEAK_FUNC(sub_82689220);
PPC_FUNC_IMPL(__imp__sub_82689220) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8268a788
	sub_8268A788(ctx, base);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(r30.u32, 1, xer);
	// blt cr6,0x826892e0
	if (cr6.lt) goto loc_826892E0;
	// beq cr6,0x826892cc
	if (cr6.eq) goto loc_826892CC;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(r30.u32, 3, xer);
	// blt cr6,0x826892b4
	if (cr6.lt) goto loc_826892B4;
	// beq cr6,0x826892a4
	if (cr6.eq) goto loc_826892A4;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(r30.u32, 5, xer);
	// blt cr6,0x82689298
	if (cr6.lt) goto loc_82689298;
	// beq cr6,0x8268927c
	if (cr6.eq) goto loc_8268927C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826892f8
	goto loc_826892F8;
loc_8268927C:
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
loc_82689284:
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82689288:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8268b160
	sub_8268B160(ctx, base);
	// b 0x826892f4
	goto loc_826892F4;
loc_82689298:
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// b 0x82689284
	goto loc_82689284;
loc_826892A4:
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82689288
	goto loc_82689288;
loc_826892B4:
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x8268a910
	sub_8268A910(ctx, base);
	// b 0x826892f4
	goto loc_826892F4;
loc_826892CC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82172d10
	sub_82172D10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8268c3a0
	sub_8268C3A0(ctx, base);
	// b 0x826892f4
	goto loc_826892F4;
loc_826892E0:
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x8268b628
	sub_8268B628(ctx, base);
loc_826892F4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_826892F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82689300"))) PPC_WEAK_FUNC(sub_82689300);
PPC_FUNC_IMPL(__imp__sub_82689300) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82689350"))) PPC_WEAK_FUNC(sub_82689350);
PPC_FUNC_IMPL(__imp__sub_82689350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82689374
	if (cr0.eq) goto loc_82689374;
	// addic. r3,r11,100
	xer.ca = r11.u32 > 4294967195;
	ctx.r3.s64 = r11.s64 + 100;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82689374
	if (cr0.eq) goto loc_82689374;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82689374:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268937C"))) PPC_WEAK_FUNC(sub_8268937C);
PPC_FUNC_IMPL(__imp__sub_8268937C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82689380"))) PPC_WEAK_FUNC(sub_82689380);
PPC_FUNC_IMPL(__imp__sub_82689380) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,23608(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 23608);
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
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r3,140
	ctx.r3.s64 = 140;
	// stw r4,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r4.u32);
	// addi r11,r11,23488
	r11.s64 = r11.s64 + 23488;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826893dc
	if (cr0.eq) goto loc_826893DC;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8268c010
	sub_8268C010(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x826893e0
	goto loc_826893E0;
loc_826893DC:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_826893E0:
	// li r3,156
	ctx.r3.s64 = 156;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82689408
	if (cr0.eq) goto loc_82689408;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8268b500
	sub_8268B500(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8268940c
	goto loc_8268940C;
loc_82689408:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8268940C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lfs f13,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,44(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// stfs f13,40(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// lfs f0,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// stfs f0,20(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// stfs f0,28(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 28, temp.u32);
	// bl 0x82689108
	sub_82689108(ctx, base);
	// stw r29,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r29.u32);
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82689388"))) PPC_WEAK_FUNC(sub_82689388);
PPC_FUNC_IMPL(__imp__sub_82689388) {
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
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r3,140
	ctx.r3.s64 = 140;
	// stw r4,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r4.u32);
	// addi r11,r11,23488
	r11.s64 = r11.s64 + 23488;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826893dc
	if (cr0.eq) goto loc_826893DC;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8268c010
	sub_8268C010(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x826893e0
	goto loc_826893E0;
loc_826893DC:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_826893E0:
	// li r3,156
	ctx.r3.s64 = 156;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82689408
	if (cr0.eq) goto loc_82689408;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8268b500
	sub_8268B500(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8268940c
	goto loc_8268940C;
loc_82689408:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8268940C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lfs f13,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,44(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// stfs f13,40(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// lfs f0,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// stfs f0,20(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// stfs f0,28(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 28, temp.u32);
	// bl 0x82689108
	sub_82689108(ctx, base);
	// stw r29,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r29.u32);
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82689454"))) PPC_WEAK_FUNC(sub_82689454);
PPC_FUNC_IMPL(__imp__sub_82689454) {
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
	// bl 0x82688fa8
	sub_82688FA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268947C"))) PPC_WEAK_FUNC(sub_8268947C);
PPC_FUNC_IMPL(__imp__sub_8268947C) {
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

__attribute__((alias("__imp__sub_826894A4"))) PPC_WEAK_FUNC(sub_826894A4);
PPC_FUNC_IMPL(__imp__sub_826894A4) {
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

__attribute__((alias("__imp__sub_826894CC"))) PPC_WEAK_FUNC(sub_826894CC);
PPC_FUNC_IMPL(__imp__sub_826894CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826894D0"))) PPC_WEAK_FUNC(sub_826894D0);
PPC_FUNC_IMPL(__imp__sub_826894D0) {
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
	// bl 0x82689050
	sub_82689050(ctx, base);
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

__attribute__((alias("__imp__sub_82689500"))) PPC_WEAK_FUNC(sub_82689500);
PPC_FUNC_IMPL(__imp__sub_82689500) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// bl 0x8268b660
	sub_8268B660(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8268a9e8
	sub_8268A9E8(ctx, base);
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

__attribute__((alias("__imp__sub_8268954C"))) PPC_WEAK_FUNC(sub_8268954C);
PPC_FUNC_IMPL(__imp__sub_8268954C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82689550"))) PPC_WEAK_FUNC(sub_82689550);
PPC_FUNC_IMPL(__imp__sub_82689550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// b 0x82689108
	sub_82689108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689558"))) PPC_WEAK_FUNC(sub_82689558);
PPC_FUNC_IMPL(__imp__sub_82689558) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	f0.f64 = double(temp.f32);
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x826895c0
	if (!cr6.eq) goto loc_826895C0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8268b720
	sub_8268B720(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x826895a0
	if (!cr0.eq) goto loc_826895A0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82688f28
	sub_82688F28(ctx, base);
loc_826895A0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82689610
	goto loc_82689610;
loc_826895C0:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f13.f64);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bge cr6,0x826895f0
	if (!cr6.lt) goto loc_826895F0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// b 0x8268960c
	goto loc_8268960C;
loc_826895F0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_8268960C:
	// bl 0x82688f28
	sub_82688F28(ctx, base);
loc_82689610:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82689618"))) PPC_WEAK_FUNC(sub_82689618);
PPC_FUNC_IMPL(__imp__sub_82689618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r4,49(r3)
	PPC_STORE_U8(ctx.r3.u32 + 49, ctx.r4.u8);
	// li r11,0
	r11.s64 = 0;
	// stb r5,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r5.u8);
	// lfs f0,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// lfs f13,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, r11.u8);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, r11.u32);
	// lfs f12,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f12.f64 = double(temp.f32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f12,44(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82689684"))) PPC_WEAK_FUNC(sub_82689684);
PPC_FUNC_IMPL(__imp__sub_82689684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82689688"))) PPC_WEAK_FUNC(sub_82689688);
PPC_FUNC_IMPL(__imp__sub_82689688) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826896b0
	if (cr0.eq) goto loc_826896B0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826a97b0
	sub_826A97B0(ctx, base);
loc_826896B0:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826896c8
	if (cr0.eq) goto loc_826896C8;
	// bl 0x826a9348
	sub_826A9348(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_826896C8:
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

__attribute__((alias("__imp__sub_826896DC"))) PPC_WEAK_FUNC(sub_826896DC);
PPC_FUNC_IMPL(__imp__sub_826896DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826896E0"))) PPC_WEAK_FUNC(sub_826896E0);
PPC_FUNC_IMPL(__imp__sub_826896E0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826896EC"))) PPC_WEAK_FUNC(sub_826896EC);
PPC_FUNC_IMPL(__imp__sub_826896EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826896F0"))) PPC_WEAK_FUNC(sub_826896F0);
PPC_FUNC_IMPL(__imp__sub_826896F0) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82689724
	if (cr0.eq) goto loc_82689724;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a9480
	sub_826A9480(ctx, base);
loc_82689724:
	// li r11,0
	r11.s64 = 0;
	// stb r11,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r11.u8);
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

__attribute__((alias("__imp__sub_82689740"))) PPC_WEAK_FUNC(sub_82689740);
PPC_FUNC_IMPL(__imp__sub_82689740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82689764"))) PPC_WEAK_FUNC(sub_82689764);
PPC_FUNC_IMPL(__imp__sub_82689764) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82689768"))) PPC_WEAK_FUNC(sub_82689768);
PPC_FUNC_IMPL(__imp__sub_82689768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// extsw r11,r4
	r11.s64 = ctx.r4.s32;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,23688(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 23688);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82689798"))) PPC_WEAK_FUNC(sub_82689798);
PPC_FUNC_IMPL(__imp__sub_82689798) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826897A4"))) PPC_WEAK_FUNC(sub_826897A4);
PPC_FUNC_IMPL(__imp__sub_826897A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826897A8"))) PPC_WEAK_FUNC(sub_826897A8);
PPC_FUNC_IMPL(__imp__sub_826897A8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x826897d0
	if (!cr0.eq) goto loc_826897D0;
loc_826897C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82689824
	goto loc_82689824;
loc_826897D0:
	// lbz r11,48(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 48);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826897e4
	if (cr0.eq) goto loc_826897E4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82689824
	goto loc_82689824;
loc_826897E4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826a95a0
	sub_826A95A0(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// andi. r11,r11,65
	r11.u64 = r11.u64 & 65;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826897c8
	if (cr0.eq) goto loc_826897C8;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a9410
	sub_826A9410(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
loc_82689824:
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

__attribute__((alias("__imp__sub_82689838"))) PPC_WEAK_FUNC(sub_82689838);
PPC_FUNC_IMPL(__imp__sub_82689838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826898ac
	if (cr0.eq) goto loc_826898AC;
	// lbz r11,49(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 49);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x826898ac
	if (!cr0.eq) goto loc_826898AC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826a9870
	sub_826A9870(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// bne cr6,0x8268988c
	if (!cr6.eq) goto loc_8268988C;
loc_82689884:
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x826898b0
	goto loc_826898B0;
loc_8268988C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// divwu r9,r11,r10
	ctx.r9.u32 = r11.u32 / ctx.r10.u32;
	// twllei r10,0
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// b 0x82689884
	goto loc_82689884;
loc_826898AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826898B0:
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

__attribute__((alias("__imp__sub_826898C4"))) PPC_WEAK_FUNC(sub_826898C4);
PPC_FUNC_IMPL(__imp__sub_826898C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826898C8"))) PPC_WEAK_FUNC(sub_826898C8);
PPC_FUNC_IMPL(__imp__sub_826898C8) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82689ba0
	if (cr6.eq) goto loc_82689BA0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r25,0
	r25.s64 = 0;
	// addi r10,r1,228
	ctx.r10.s64 = ctx.r1.s64 + 228;
	// mr r11,r25
	r11.u64 = r25.u64;
	// lfs f11,2480(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2480);
	ctx.f11.f64 = double(temp.f32);
loc_826898FC:
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// stfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// stb r9,-4(r10)
	PPC_STORE_U8(ctx.r10.u32 + -4, ctx.r9.u8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// blt cr6,0x826898fc
	if (cr6.lt) goto loc_826898FC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f10,32(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// li r24,2
	r24.s64 = 2;
	// li r26,1
	r26.s64 = 1;
	// lfs f13,11012(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11012);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f10,f13
	cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x8268994c
	if (!cr6.lt) goto loc_8268994C;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r11,4
	r11.s64 = 4;
	// li r31,5
	r31.s64 = 5;
	// lfs f13,23692(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23692);
	ctx.f13.f64 = double(temp.f32);
	// b 0x826899d4
	goto loc_826899D4;
loc_8268994C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-25364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, f0.f64);
	// bge cr6,0x82689964
	if (!cr6.lt) goto loc_82689964;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x826899d0
	goto loc_826899D0;
loc_82689964:
	// fcmpu cr6,f10,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x8268997c
	if (!cr6.lt) goto loc_8268997C;
	// mr r11,r25
	r11.u64 = r25.u64;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// mr r31,r24
	r31.u64 = r24.u64;
	// b 0x826899d4
	goto loc_826899D4;
loc_8268997C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f10,f12
	cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// bge cr6,0x826899a0
	if (!cr6.lt) goto loc_826899A0;
	// mr r11,r24
	r11.u64 = r24.u64;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
	// mr r31,r26
	r31.u64 = r26.u64;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x826899d4
	goto loc_826899D4;
loc_826899A0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,11004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11004);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f10,f13
	cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x826899c0
	if (!cr6.lt) goto loc_826899C0;
	// mr r11,r26
	r11.u64 = r26.u64;
	// fmr f0,f12
	f0.f64 = ctx.f12.f64;
	// li r31,5
	r31.s64 = 5;
	// b 0x826899d4
	goto loc_826899D4;
loc_826899C0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f13.f64;
	// li r11,5
	r11.s64 = 5;
	// lfs f13,-26876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26876);
	ctx.f13.f64 = double(temp.f32);
loc_826899D0:
	// li r31,4
	r31.s64 = 4;
loc_826899D4:
	// fsubs f12,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f10.f64 - f0.f64));
	// rlwinm r29,r11,3,0,28
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r28,r1,228
	r28.s64 = ctx.r1.s64 + 228;
	// fdivs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 / f0.f64));
	// lfs f0,-25408(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25408);
	f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8239de90
	sub_8239DE90(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// rlwinm r31,r31,3,0,28
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r1,228
	r30.s64 = ctx.r1.s64 + 228;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfsx f0,r29,r28
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + r28.u32, temp.u32);
	// bl 0x8239ddc0
	sub_8239DDC0(ctx, base);
	// lwz r3,52(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 52);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfsx f0,r31,r30
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + r30.u32, temp.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82689b40
	if (cr0.eq) goto loc_82689B40;
	// lfs f0,56(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 56);
	f0.f64 = double(temp.f32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lfs f13,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f13,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r11,26824
	ctx.r6.s64 = r11.s64 + 26824;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f13,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32137
	r11.s64 = -2106130432;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r11,6124
	ctx.r5.s64 = r11.s64 + 6124;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f13,268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stb r25,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r25.u8);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stb r26,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, r26.u8);
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r25.u8);
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r25.u8);
	// stb r26,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, r26.u8);
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82689adc
	if (cr0.eq) goto loc_82689ADC;
	// lfs f13,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f12,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f0.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f11.f64));
	// fmadds f0,f12,f0,f13
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82689ADC:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lwz r3,24(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// stb r24,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, r24.u8);
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r26.u8);
	// stb r24,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r24.u8);
	// stb r25,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, r25.u8);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r26,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, r26.u8);
	// stb r24,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, r24.u8);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// addi r11,r1,152
	r11.s64 = ctx.r1.s64 + 152;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r11.u32);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r11.u32);
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r11.u32);
	// li r11,3
	r11.s64 = 3;
	// stb r11,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, r11.u8);
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r11.u32);
	// bl 0x826a9548
	sub_826A9548(ctx, base);
loc_82689B40:
	// lwz r11,52(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 52);
	// li r10,6
	ctx.r10.s64 = 6;
	// lfsx f13,r29,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + r28.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// lfs f0,28(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 28);
	f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfsx f13,r29,r28
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r29.u32 + r28.u32, temp.u32);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// lfsx f13,r31,r30
	temp.u32 = PPC_LOAD_U32(r31.u32 + r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// stb r10,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r10.u8);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lwz r3,24(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// stfsx f0,r31,r30
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + r30.u32, temp.u32);
	// stb r26,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, r26.u8);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stb r11,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, r11.u8);
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// bl 0x826a9548
	sub_826A9548(ctx, base);
loc_82689BA0:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82689BAC"))) PPC_WEAK_FUNC(sub_82689BAC);
PPC_FUNC_IMPL(__imp__sub_82689BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82689BB0"))) PPC_WEAK_FUNC(sub_82689BB0);
PPC_FUNC_IMPL(__imp__sub_82689BB0) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f1,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822ffaf0
	sub_822FFAF0(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f0,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 272);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// beq 0x82689be8
	if (cr0.eq) goto loc_82689BE8;
	// bl 0x826a98c8
	sub_826A98C8(ctx, base);
loc_82689BE8:
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

__attribute__((alias("__imp__sub_82689BFC"))) PPC_WEAK_FUNC(sub_82689BFC);
PPC_FUNC_IMPL(__imp__sub_82689BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82689C00"))) PPC_WEAK_FUNC(sub_82689C00);
PPC_FUNC_IMPL(__imp__sub_82689C00) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82689c20
	goto loc_82689C20;
loc_82689C18:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x823b5498
	sub_823B5498(ctx, base);
loc_82689C20:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x826a95a0
	sub_826A95A0(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82689c18
	if (!cr0.eq) goto loc_82689C18;
	// lbz r11,60(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 60);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x826a9768
	sub_826A9768(ctx, base);
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

__attribute__((alias("__imp__sub_82689C68"))) PPC_WEAK_FUNC(sub_82689C68);
PPC_FUNC_IMPL(__imp__sub_82689C68) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82689ca0
	if (cr0.eq) goto loc_82689CA0;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82689ca0
	if (!cr0.eq) goto loc_82689CA0;
	// bl 0x826863d0
	sub_826863D0(ctx, base);
loc_82689CA0:
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lbz r11,49(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 49);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r31,0
	r31.s64 = 0;
	// stb r8,292(r1)
	PPC_STORE_U8(ctx.r1.u32 + 292, ctx.r8.u8);
	// stw r11,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, r11.u32);
	// beq 0x82689ce4
	if (cr0.eq) goto loc_82689CE4;
	// stb r6,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r6.u8);
	// stb r8,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r8.u8);
	// stb r31,301(r1)
	PPC_STORE_U8(ctx.r1.u32 + 301, r31.u8);
	// b 0x82689ce8
	goto loc_82689CE8;
loc_82689CE4:
	// stb r8,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r8.u8);
loc_82689CE8:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r7,6
	ctx.r7.s64 = 6;
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// stb r31,344(r1)
	PPC_STORE_U8(ctx.r1.u32 + 344, r31.u8);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, r31.u8);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f0,2552(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2552);
	f0.f64 = double(temp.f32);
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// stfs f0,348(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// stb r7,346(r1)
	PPC_STORE_U8(ctx.r1.u32 + 346, ctx.r7.u8);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r31,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, r31.u32);
	// subfic r5,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r5.s64;
	// rlwinm r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r5,0,31,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC1;
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// stb r4,345(r1)
	PPC_STORE_U8(ctx.r1.u32 + 345, ctx.r4.u8);
	// stb r9,347(r1)
	PPC_STORE_U8(ctx.r1.u32 + 347, ctx.r9.u8);
	// beq 0x82689d54
	if (cr0.eq) goto loc_82689D54;
	// lis r9,-32151
	ctx.r9.s64 = -2107047936;
	// addi r9,r9,-26816
	ctx.r9.s64 = ctx.r9.s64 + -26816;
	// stw r9,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r9.u32);
	// b 0x82689d58
	goto loc_82689D58;
loc_82689D54:
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, r31.u32);
loc_82689D58:
	// stw r31,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r30,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, r30.u32);
	// bne cr6,0x82689d6c
	if (!cr6.eq) goto loc_82689D6C;
	// stw r31,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, r31.u32);
loc_82689D6C:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// addi r10,r1,385
	ctx.r10.s64 = ctx.r1.s64 + 385;
loc_82689D74:
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// stfs f0,3(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 3, temp.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stb r31,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, r31.u8);
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
	// stb r5,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// blt cr6,0x82689d74
	if (cr6.lt) goto loc_82689D74;
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	f0.f64 = double(temp.f32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r31.u8);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stb r31,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, r31.u8);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stb r31,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, r31.u8);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stb r8,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r8.u8);
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stb r31,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r31.u8);
	// stfs f0,140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stb r31,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, r31.u8);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r31.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stb r31,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, r31.u8);
	// stb r31,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, r31.u8);
	// stb r8,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r8.u8);
	// beq cr6,0x82689e54
	if (cr6.eq) goto loc_82689E54;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r10,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// stw r10,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r10.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stb r8,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r8.u8);
	// stw r9,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r9.u32);
	// addi r9,r1,184
	ctx.r9.s64 = ctx.r1.s64 + 184;
	// stw r9,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r9.u32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stb r10,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r10.u8);
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r31.u32);
	// stb r7,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r7.u8);
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r11.u32);
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, r11.u32);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r11.u32);
	// addi r11,r1,200
	r11.s64 = ctx.r1.s64 + 200;
	// stw r11,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, r11.u32);
	// addi r11,r1,384
	r11.s64 = ctx.r1.s64 + 384;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r11.u32);
	// b 0x82689e70
	goto loc_82689E70;
loc_82689E54:
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// stb r7,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r7.u8);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, r11.u32);
	// addi r11,r1,384
	r11.s64 = ctx.r1.s64 + 384;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r11.u32);
loc_82689E70:
	// addi r11,r1,240
	r11.s64 = ctx.r1.s64 + 240;
	// stb r6,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r6.u8);
	// addi r29,r30,24
	r29.s64 = r30.s64 + 24;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r31.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stb r8,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r8.u8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r11,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, r11.u32);
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r11.u32);
	// addi r11,r1,216
	r11.s64 = ctx.r1.s64 + 216;
	// stw r11,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, r11.u32);
	// bl 0x826a9b98
	sub_826A9B98(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82689f78
	if (cr0.eq) goto loc_82689F78;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r31.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82689f5c
	if (cr0.lt) goto loc_82689F5C;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge cr6,0x82689f00
	if (!cr6.lt) goto loc_82689F00;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
loc_82689F00:
	// lbz r10,49(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 49);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82689f40
	if (cr0.eq) goto loc_82689F40;
	// srawi r9,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	ctx.r9.s64 = r11.s32 >> 7;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// subf r9,r9,r11
	ctx.r9.s64 = r11.s64 - ctx.r9.s64;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// srawi r11,r10,7
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	r11.s64 = ctx.r10.s32 >> 7;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r11,r11,7,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
loc_82689F40:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r11.u32);
	// b 0x82689f68
	goto loc_82689F68;
loc_82689F5C:
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r31.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r31.u32);
loc_82689F68:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x826a9708
	sub_826A9708(ctx, base);
loc_82689F78:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826898c8
	sub_826898C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82689bb0
	sub_82689BB0(ctx, base);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 40);
	f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x826a9480
	sub_826A9480(ctx, base);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f0,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 44);
	f0.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x826a9480
	sub_826A9480(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82689FD0"))) PPC_WEAK_FUNC(sub_82689FD0);
PPC_FUNC_IMPL(__imp__sub_82689FD0) {
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
	// bl 0x82689c68
	sub_82689C68(ctx, base);
	// lbz r11,60(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 60);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x826a9768
	sub_826A9768(ctx, base);
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

__attribute__((alias("__imp__sub_8268A018"))) PPC_WEAK_FUNC(sub_8268A018);
PPC_FUNC_IMPL(__imp__sub_8268A018) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// clrlwi r29,r30,24
	r29.u64 = r30.u32 & 0xFF;
	// lbz r11,48(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 48);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x8268a06c
	if (cr6.eq) goto loc_8268A06C;
	// bl 0x826897a8
	sub_826897A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268a06c
	if (cr0.eq) goto loc_8268A06C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stb r30,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r30.u8);
	// beq cr6,0x8268a064
	if (cr6.eq) goto loc_8268A064;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x826a97b0
	sub_826A97B0(ctx, base);
	// b 0x8268a06c
	goto loc_8268A06C;
loc_8268A064:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82689c00
	sub_82689C00(ctx, base);
loc_8268A06C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8268A074"))) PPC_WEAK_FUNC(sub_8268A074);
PPC_FUNC_IMPL(__imp__sub_8268A074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268A078"))) PPC_WEAK_FUNC(sub_8268A078);
PPC_FUNC_IMPL(__imp__sub_8268A078) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x8268a098
	if (cr6.gt) goto loc_8268A098;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x8268a09c
	if (!cr6.lt) goto loc_8268A09C;
loc_8268A098:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
loc_8268A09C:
	// stfs f1,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// b 0x826898c8
	sub_826898C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268A0A4"))) PPC_WEAK_FUNC(sub_8268A0A4);
PPC_FUNC_IMPL(__imp__sub_8268A0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268A0A8"))) PPC_WEAK_FUNC(sub_8268A0A8);
PPC_FUNC_IMPL(__imp__sub_8268A0A8) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f2,-27448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27448);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f0,-14520(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -14520);
	f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - f0.f64));
	// bl 0x82192610
	sub_82192610(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-27476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27476);
	f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 - f0.f64));
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// bl 0x826898c8
	sub_826898C8(ctx, base);
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

__attribute__((alias("__imp__sub_8268A100"))) PPC_WEAK_FUNC(sub_8268A100);
PPC_FUNC_IMPL(__imp__sub_8268A100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f0,-26880(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -26880);
	f0.f64 = double(temp.f32);
	// addi r11,r1,124
	r11.s64 = ctx.r1.s64 + 124;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x8268a12c
	if (cr6.gt) goto loc_8268A12C;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_8268A12C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,560(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8268a150
	if (!cr6.gt) goto loc_8268A150;
	// lbz r11,49(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 49);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268a150
	if (cr0.eq) goto loc_8268A150;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_8268A150:
	// stfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// bl 0x82689bb0
	sub_82689BB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268A168"))) PPC_WEAK_FUNC(sub_8268A168);
PPC_FUNC_IMPL(__imp__sub_8268A168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,-26876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -26876);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x8268a1a0
	if (cr6.gt) goto loc_8268A1A0;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f0,-31584(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31584);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x8268a1a4
	if (!cr6.lt) goto loc_8268A1A4;
loc_8268A1A0:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
loc_8268A1A4:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// stfs f1,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x8268a1c0
	if (!cr6.eq) goto loc_8268A1C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826898c8
	sub_826898C8(ctx, base);
	// b 0x8268a39c
	goto loc_8268A39C;
loc_8268A1C0:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r4,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r4.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268a39c
	if (cr0.eq) goto loc_8268A39C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826a95a0
	sub_826A95A0(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// andi. r11,r11,65
	r11.u64 = r11.u64 & 65;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// clrlwi. r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8268a228
	if (cr0.eq) goto loc_8268A228;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x826a97b0
	sub_826A97B0(ctx, base);
	// b 0x8268a20c
	goto loc_8268A20C;
loc_8268A204:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823b5498
	sub_823B5498(ctx, base);
loc_8268A20C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x826a95a0
	sub_826A95A0(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// andi. r11,r11,65
	r11.u64 = r11.u64 & 65;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8268a204
	if (!cr0.eq) goto loc_8268A204;
loc_8268A228:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r11,0
	r11.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r6,5
	ctx.r6.s64 = 5;
	// lfs f0,2480(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2480);
	f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r7,169(r1)
	PPC_STORE_U8(ctx.r1.u32 + 169, ctx.r7.u8);
	// li r7,4
	ctx.r7.s64 = 4;
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r11.u8);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, r11.u8);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, r11.u8);
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stb r9,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r9.u8);
	// stfs f0,140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// stfs f0,148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stb r11,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, r11.u8);
	// stfs f0,156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r11.u8);
	// stfs f0,164(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stb r11,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, r11.u8);
	// stfs f0,172(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stb r11,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, r11.u8);
	// stfs f0,180(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stb r9,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r9.u8);
	// stfs f0,188(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r11.u8);
	// stb r11,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, r11.u8);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r11,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, r11.u8);
	// stb r9,153(r1)
	PPC_STORE_U8(ctx.r1.u32 + 153, ctx.r9.u8);
	// stb r11,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r11.u8);
	// stb r8,161(r1)
	PPC_STORE_U8(ctx.r1.u32 + 161, ctx.r8.u8);
	// stb r11,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, r11.u8);
	// stb r11,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, r11.u8);
	// stb r7,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, ctx.r7.u8);
	// stb r11,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, r11.u8);
	// stb r6,185(r1)
	PPC_STORE_U8(ctx.r1.u32 + 185, ctx.r6.u8);
	// beq 0x8268a350
	if (cr0.eq) goto loc_8268A350;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r8,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r8.u8);
	// stw r6,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r6.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// stw r6,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r6.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r6,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r6.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stb r9,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r9.u8);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r6,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r6.u32);
	// addi r6,r1,200
	ctx.r6.s64 = ctx.r1.s64 + 200;
	// stw r9,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// stw r6,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r6.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r11.u32);
	// addi r11,r1,216
	r11.s64 = ctx.r1.s64 + 216;
	// stb r8,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r8.u8);
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// stw r10,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// stw r11,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, r11.u32);
	// li r11,6
	r11.s64 = 6;
	// stw r10,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r10.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stb r11,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, r11.u8);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r11.u32);
	// b 0x8268a370
	goto loc_8268A370;
loc_8268A350:
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r11.u32);
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, r11.u32);
	// li r11,6
	r11.s64 = 6;
	// stb r11,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, r11.u8);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r11.u32);
loc_8268A370:
	// addi r11,r1,240
	r11.s64 = ctx.r1.s64 + 240;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x826a94f0
	sub_826A94F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826898c8
	sub_826898C8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8268a39c
	if (cr6.eq) goto loc_8268A39C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82689c00
	sub_82689C00(ctx, base);
loc_8268A39C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
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

__attribute__((alias("__imp__sub_8268A3B4"))) PPC_WEAK_FUNC(sub_8268A3B4);
PPC_FUNC_IMPL(__imp__sub_8268A3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268A3B8"))) PPC_WEAK_FUNC(sub_8268A3B8);
PPC_FUNC_IMPL(__imp__sub_8268A3B8) {
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
	// lwz r16,23824(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 23824);
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
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x822ff950
	sub_822FF950(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r3,68
	ctx.r3.s64 = 68;
	// addi r11,r11,23700
	r11.s64 = r11.s64 + 23700;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq 0x8268a420
	if (cr0.eq) goto loc_8268A420;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82688bf8
	sub_82688BF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82689618
	sub_82689618(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8268a424
	goto loc_8268A424;
loc_8268A420:
	// li r11,0
	r11.s64 = 0;
loc_8268A424:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// bl 0x822fe4b0
	sub_822FE4B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x82689768
	sub_82689768(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82688bf0
	sub_82688BF0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238f3d8
	sub_8238F3D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x826896e0
	sub_826896E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822fe4d8
	sub_822FE4D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268a494
	if (cr0.eq) goto loc_8268A494;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822fe528
	sub_822FE528(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822fe500
	sub_822FE500(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x82689798
	sub_82689798(ctx, base);
loc_8268A494:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8268A3C0"))) PPC_WEAK_FUNC(sub_8268A3C0);
PPC_FUNC_IMPL(__imp__sub_8268A3C0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x822ff950
	sub_822FF950(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r3,68
	ctx.r3.s64 = 68;
	// addi r11,r11,23700
	r11.s64 = r11.s64 + 23700;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq 0x8268a420
	if (cr0.eq) goto loc_8268A420;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82688bf8
	sub_82688BF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82689618
	sub_82689618(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8268a424
	goto loc_8268A424;
loc_8268A420:
	// li r11,0
	r11.s64 = 0;
loc_8268A424:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// bl 0x822fe4b0
	sub_822FE4B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x82689768
	sub_82689768(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82688bf0
	sub_82688BF0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238f3d8
	sub_8238F3D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x826896e0
	sub_826896E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822fe4d8
	sub_822FE4D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268a494
	if (cr0.eq) goto loc_8268A494;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822fe528
	sub_822FE528(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822fe500
	sub_822FE500(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x82689798
	sub_82689798(ctx, base);
loc_8268A494:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8268A4A0"))) PPC_WEAK_FUNC(sub_8268A4A0);
PPC_FUNC_IMPL(__imp__sub_8268A4A0) {
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
	// bl 0x822ff768
	sub_822FF768(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268A4C8"))) PPC_WEAK_FUNC(sub_8268A4C8);
PPC_FUNC_IMPL(__imp__sub_8268A4C8) {
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

__attribute__((alias("__imp__sub_8268A4F0"))) PPC_WEAK_FUNC(sub_8268A4F0);
PPC_FUNC_IMPL(__imp__sub_8268A4F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// b 0x82689fd0
	sub_82689FD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268A4F8"))) PPC_WEAK_FUNC(sub_8268A4F8);
PPC_FUNC_IMPL(__imp__sub_8268A4F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// b 0x826896f0
	sub_826896F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268A500"))) PPC_WEAK_FUNC(sub_8268A500);
PPC_FUNC_IMPL(__imp__sub_8268A500) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// b 0x8268a018
	sub_8268A018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268A508"))) PPC_WEAK_FUNC(sub_8268A508);
PPC_FUNC_IMPL(__imp__sub_8268A508) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// b 0x826897a8
	sub_826897A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268A510"))) PPC_WEAK_FUNC(sub_8268A510);
PPC_FUNC_IMPL(__imp__sub_8268A510) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// b 0x8268a078
	sub_8268A078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268A518"))) PPC_WEAK_FUNC(sub_8268A518);
PPC_FUNC_IMPL(__imp__sub_8268A518) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// b 0x8268a0a8
	sub_8268A0A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268A520"))) PPC_WEAK_FUNC(sub_8268A520);
PPC_FUNC_IMPL(__imp__sub_8268A520) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// b 0x8268a100
	sub_8268A100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268A528"))) PPC_WEAK_FUNC(sub_8268A528);
PPC_FUNC_IMPL(__imp__sub_8268A528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lis r11,-32137
	r11.s64 = -2106130432;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r6,r11,6124
	ctx.r6.s64 = r11.s64 + 6124;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r11,24988
	ctx.r5.s64 = r11.s64 + 24988;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8268a168
	sub_8268A168(ctx, base);
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

__attribute__((alias("__imp__sub_8268A58C"))) PPC_WEAK_FUNC(sub_8268A58C);
PPC_FUNC_IMPL(__imp__sub_8268A58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268A590"))) PPC_WEAK_FUNC(sub_8268A590);
PPC_FUNC_IMPL(__imp__sub_8268A590) {
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
	// bl 0x822f88f8
	sub_822F88F8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f1,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// bl 0x822f8910
	sub_822F8910(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stfs f1,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
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

__attribute__((alias("__imp__sub_8268A5E4"))) PPC_WEAK_FUNC(sub_8268A5E4);
PPC_FUNC_IMPL(__imp__sub_8268A5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268A5E8"))) PPC_WEAK_FUNC(sub_8268A5E8);
PPC_FUNC_IMPL(__imp__sub_8268A5E8) {
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
	// lwz r16,23896(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 23896);
	// mflr r12
	// bl 0x8239bcfc
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
	// addi r11,r11,23700
	r11.s64 = r11.s64 + 23700;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r29,84(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8268a630
	if (cr0.eq) goto loc_8268A630;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82689688
	sub_82689688(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8268A630:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ff768
	sub_822FF768(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8268A5F0"))) PPC_WEAK_FUNC(sub_8268A5F0);
PPC_FUNC_IMPL(__imp__sub_8268A5F0) {
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,23700
	r11.s64 = r11.s64 + 23700;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r29,84(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8268a630
	if (cr0.eq) goto loc_8268A630;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82689688
	sub_82689688(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8268A630:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ff768
	sub_822FF768(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8268A640"))) PPC_WEAK_FUNC(sub_8268A640);
PPC_FUNC_IMPL(__imp__sub_8268A640) {
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
	// bl 0x822ff768
	sub_822FF768(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268A668"))) PPC_WEAK_FUNC(sub_8268A668);
PPC_FUNC_IMPL(__imp__sub_8268A668) {
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
	// bl 0x8268a5f0
	sub_8268A5F0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268a698
	if (cr0.eq) goto loc_8268A698;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8268A698:
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

__attribute__((alias("__imp__sub_8268A6B4"))) PPC_WEAK_FUNC(sub_8268A6B4);
PPC_FUNC_IMPL(__imp__sub_8268A6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268A6B8"))) PPC_WEAK_FUNC(sub_8268A6B8);
PPC_FUNC_IMPL(__imp__sub_8268A6B8) {
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
	// lwz r16,24048(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 24048);
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
	// addi r11,r11,23964
	r11.s64 = r11.s64 + 23964;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// addi r3,r30,100
	ctx.r3.s64 = r30.s64 + 100;
	// bl 0x8268c478
	sub_8268C478(ctx, base);
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// bl 0x8268c478
	sub_8268C478(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,23452
	r11.s64 = r11.s64 + 23452;
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

__attribute__((alias("__imp__sub_8268A6C0"))) PPC_WEAK_FUNC(sub_8268A6C0);
PPC_FUNC_IMPL(__imp__sub_8268A6C0) {
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
	// addi r11,r11,23964
	r11.s64 = r11.s64 + 23964;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// addi r3,r30,100
	ctx.r3.s64 = r30.s64 + 100;
	// bl 0x8268c478
	sub_8268C478(ctx, base);
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// bl 0x8268c478
	sub_8268C478(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,23452
	r11.s64 = r11.s64 + 23452;
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

__attribute__((alias("__imp__sub_8268A730"))) PPC_WEAK_FUNC(sub_8268A730);
PPC_FUNC_IMPL(__imp__sub_8268A730) {
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
	// bl 0x82688fa8
	sub_82688FA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268A758"))) PPC_WEAK_FUNC(sub_8268A758);
PPC_FUNC_IMPL(__imp__sub_8268A758) {
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
	// addi r3,r11,68
	ctx.r3.s64 = r11.s64 + 68;
	// bl 0x8268c478
	sub_8268C478(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268A784"))) PPC_WEAK_FUNC(sub_8268A784);
PPC_FUNC_IMPL(__imp__sub_8268A784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268A788"))) PPC_WEAK_FUNC(sub_8268A788);
PPC_FUNC_IMPL(__imp__sub_8268A788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8268a798
	if (cr6.eq) goto loc_8268A798;
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_8268A798:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8268a7a8
	if (cr6.eq) goto loc_8268A7A8;
	// lwz r11,144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
loc_8268A7A8:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8268a7b8
	if (cr6.eq) goto loc_8268A7B8;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
loc_8268A7B8:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268A7CC"))) PPC_WEAK_FUNC(sub_8268A7CC);
PPC_FUNC_IMPL(__imp__sub_8268A7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268A7D0"))) PPC_WEAK_FUNC(sub_8268A7D0);
PPC_FUNC_IMPL(__imp__sub_8268A7D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r7,r11,r5
	ctx.r7.s64 = ctx.r5.s64 - r11.s64;
loc_8268A7EC:
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfsx f0,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// std r6,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r6.u64);
	// subf r6,r10,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// std r8,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r8.u64);
	// lfsx f13,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f12,-32(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// lfd f12,-24(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fmadds f0,f11,f13,f0
	f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + f0.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f12
	f0.f64 = double(float(f0.f64 / ctx.f12.f64));
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x8268a7ec
	if (cr6.lt) goto loc_8268A7EC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268A864"))) PPC_WEAK_FUNC(sub_8268A864);
PPC_FUNC_IMPL(__imp__sub_8268A864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268A868"))) PPC_WEAK_FUNC(sub_8268A868);
PPC_FUNC_IMPL(__imp__sub_8268A868) {
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
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8268a8a4
	if (cr6.eq) goto loc_8268A8A4;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
loc_8268A8A4:
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

__attribute__((alias("__imp__sub_8268A8B8"))) PPC_WEAK_FUNC(sub_8268A8B8);
PPC_FUNC_IMPL(__imp__sub_8268A8B8) {
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
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268a868
	sub_8268A868(ctx, base);
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

__attribute__((alias("__imp__sub_8268A910"))) PPC_WEAK_FUNC(sub_8268A910);
PPC_FUNC_IMPL(__imp__sub_8268A910) {
	PPC_FUNC_PROLOGUE();
	// stw r4,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268A918"))) PPC_WEAK_FUNC(sub_8268A918);
PPC_FUNC_IMPL(__imp__sub_8268A918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bne cr6,0x8268a94c
	if (!cr6.eq) goto loc_8268A94C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x8268a940
	if (cr6.eq) goto loc_8268A940;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_8268A940:
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_8268A94C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x8268a964
	if (cr6.eq) goto loc_8268A964;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_8268A964:
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8268A970"))) PPC_WEAK_FUNC(sub_8268A970);
PPC_FUNC_IMPL(__imp__sub_8268A970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// stfs f1,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,2480(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2480);
	f0.f64 = double(temp.f32);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// stfs f0,64(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,5736(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5736);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// stfs f0,60(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fctiwz f0,f13
	f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,r8
	PPC_STORE_U32(ctx.r8.u32, f0.u32);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x8268a9d4
	if (!cr6.gt) goto loc_8268A9D4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8268A9D4:
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268A9E4"))) PPC_WEAK_FUNC(sub_8268A9E4);
PPC_FUNC_IMPL(__imp__sub_8268A9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268A9E8"))) PPC_WEAK_FUNC(sub_8268A9E8);
PPC_FUNC_IMPL(__imp__sub_8268A9E8) {
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
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x8268aa20
	if (cr6.eq) goto loc_8268AA20;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// bl 0x8268c490
	sub_8268C490(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8268c490
	sub_8268C490(ctx, base);
loc_8268AA20:
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

__attribute__((alias("__imp__sub_8268AA34"))) PPC_WEAK_FUNC(sub_8268AA34);
PPC_FUNC_IMPL(__imp__sub_8268AA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268AA38"))) PPC_WEAK_FUNC(sub_8268AA38);
PPC_FUNC_IMPL(__imp__sub_8268AA38) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8268ab08
	if (cr6.eq) goto loc_8268AB08;
	// addi r30,r31,100
	r30.s64 = r31.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x8268ab14
	if (cr6.lt) goto loc_8268AB14;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r28,r31,68
	r28.s64 = r31.s64 + 68;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8268c728
	sub_8268C728(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x8268aac4
	if (!cr6.eq) goto loc_8268AAC4;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// b 0x8268aac8
	goto loc_8268AAC8;
loc_8268AAC4:
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
loc_8268AAC8:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268a868
	sub_8268A868(ctx, base);
loc_8268AB08:
	// addi r4,r31,100
	ctx.r4.s64 = r31.s64 + 100;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x82688f28
	sub_82688F28(ctx, base);
loc_8268AB14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8268AB1C"))) PPC_WEAK_FUNC(sub_8268AB1C);
PPC_FUNC_IMPL(__imp__sub_8268AB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268AB20"))) PPC_WEAK_FUNC(sub_8268AB20);
PPC_FUNC_IMPL(__imp__sub_8268AB20) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x8268ab4c
	if (!cr6.eq) goto loc_8268AB4C;
	// bl 0x8268aa38
	sub_8268AA38(ctx, base);
	// b 0x8268ada8
	goto loc_8268ADA8;
loc_8268AB4C:
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// li r25,1
	r25.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8268abc8
	if (!cr6.eq) goto loc_8268ABC8;
	// addi r30,r31,100
	r30.s64 = r31.s64 + 100;
	// lwz r29,36(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// blt cr6,0x8268ada8
	if (cr6.lt) goto loc_8268ADA8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mullw r29,r10,r29
	r29.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r25,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r25.u32);
loc_8268ABC8:
	// addi r30,r31,100
	r30.s64 = r31.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x8268ada8
	if (cr6.lt) goto loc_8268ADA8;
	// addi r26,r31,68
	r26.s64 = r31.s64 + 68;
loc_8268ABF0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268a918
	sub_8268A918(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x8268c728
	sub_8268C728(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x8268ac60
	if (!cr6.eq) goto loc_8268AC60;
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r28
	ctx.r5.u64 = r11.u64 + r28.u64;
	// lwz r11,60(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// b 0x8268ac6c
	goto loc_8268AC6C;
loc_8268AC60:
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r28
	ctx.r5.u64 = r11.u64 + r28.u64;
	// lwz r11,64(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
loc_8268AC6C:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r27,r11,r10
	r27.s64 = ctx.r10.s64 - r11.s64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// ble 0x8268ace8
	if (!cr0.gt) goto loc_8268ACE8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r28,0(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268ACE8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mullw r28,r10,r9
	r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	f0.f64 = double(temp.f32);
	// lfs f13,60(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r25,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r25.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f13,0,r11
	PPC_STORE_U32(r11.u32, ctx.f13.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bge cr6,0x8268abf0
	if (!cr6.lt) goto loc_8268ABF0;
loc_8268ADA8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8268ADB0"))) PPC_WEAK_FUNC(sub_8268ADB0);
PPC_FUNC_IMPL(__imp__sub_8268ADB0) {
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
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268ab20
	sub_8268AB20(ctx, base);
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

__attribute__((alias("__imp__sub_8268ADF4"))) PPC_WEAK_FUNC(sub_8268ADF4);
PPC_FUNC_IMPL(__imp__sub_8268ADF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268ADF8"))) PPC_WEAK_FUNC(sub_8268ADF8);
PPC_FUNC_IMPL(__imp__sub_8268ADF8) {
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
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stw r4,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8268ae98
	if (!cr6.gt) goto loc_8268AE98;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// li r29,-1
	r29.s64 = -1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r30,r10,65535
	r30.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// ble cr6,0x8268ae4c
	if (!cr6.gt) goto loc_8268AE4C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8268AE4C:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r10,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r10.u32);
	// bl 0x8268a868
	sub_8268A868(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8268ae84
	if (!cr6.gt) goto loc_8268AE84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8268AE84:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// addi r11,r3,15
	r11.s64 = ctx.r3.s64 + 15;
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// rlwinm r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
loc_8268AE98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8268AEA0"))) PPC_WEAK_FUNC(sub_8268AEA0);
PPC_FUNC_IMPL(__imp__sub_8268AEA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// li r11,0
	r11.s64 = 0;
loc_8268AEB4:
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lwz r6,28(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f13,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// std r9,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r9.u64);
	// lfd f0,-16(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f12,-8(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfsx f13,r6,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + r11.u32, temp.u32);
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,4(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x8268aeb4
	if (cr6.lt) goto loc_8268AEB4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268AF2C"))) PPC_WEAK_FUNC(sub_8268AF2C);
PPC_FUNC_IMPL(__imp__sub_8268AF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268AF30"))) PPC_WEAK_FUNC(sub_8268AF30);
PPC_FUNC_IMPL(__imp__sub_8268AF30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r11,0
	r11.s64 = 0;
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8268AF44:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// extsw r7,r11
	ctx.r7.s64 = r11.s32;
	// lwz r6,28(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	f0.f64 = double(temp.f32);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f12,-8(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfsx f0,r6,r9
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, temp.u32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8268af44
	if (cr6.lt) goto loc_8268AF44;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268AFA0"))) PPC_WEAK_FUNC(sub_8268AFA0);
PPC_FUNC_IMPL(__imp__sub_8268AFA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// std r11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r11.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,-32(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 / ctx.f13.f64));
	// ble 0x8268b068
	if (!cr0.gt) goto loc_8268B068;
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// subf r6,r4,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r4.s64;
	// subfic r5,r4,-4
	xer.ca = ctx.r4.u32 <= 4294967292;
	ctx.r5.s64 = -4 - ctx.r4.s64;
loc_8268AFE4:
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lfs f11,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrldi r31,r9,32
	r31.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 + r11.u64;
	// std r7,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r7.u64);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// std r31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r31.u64);
	// lfsx f10,r9,r4
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfd f0,-32(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfd f13,-24(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fmadds f11,f10,f13,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f11,-4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// lfsx f11,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f11,f13,f0
	f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x8268afe4
	if (cr6.lt) goto loc_8268AFE4;
loc_8268B068:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268B070"))) PPC_WEAK_FUNC(sub_8268B070);
PPC_FUNC_IMPL(__imp__sub_8268B070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// lfd f1,-31368(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r11,r5,4
	r11.s64 = ctx.r5.s64 + 4;
	// subf r9,r5,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r5.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8268B090:
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fadd f1,f0,f1
	ctx.f1.f64 = f0.f64 + ctx.f1.f64;
	// bne 0x8268b090
	if (!cr0.eq) goto loc_8268B090;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268B0B0"))) PPC_WEAK_FUNC(sub_8268B0B0);
PPC_FUNC_IMPL(__imp__sub_8268B0B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfd f1,-31368(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r11,r11,-3
	r11.s64 = r11.s64 + -3;
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r5,12
	r11.s64 = ctx.r5.s64 + 12;
	// subf r8,r5,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r5.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8268B0E0:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	f0.f64 = double(temp.f32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f13,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// fmadds f0,f13,f12,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + f0.f64));
	// fadd f1,f0,f1
	ctx.f1.f64 = f0.f64 + ctx.f1.f64;
	// bne 0x8268b0e0
	if (!cr0.eq) goto loc_8268B0E0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268B110"))) PPC_WEAK_FUNC(sub_8268B110);
PPC_FUNC_IMPL(__imp__sub_8268B110) {
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
	// bl 0x8268a6c0
	sub_8268A6C0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268b140
	if (cr0.eq) goto loc_8268B140;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8268B140:
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

__attribute__((alias("__imp__sub_8268B15C"))) PPC_WEAK_FUNC(sub_8268B15C);
PPC_FUNC_IMPL(__imp__sub_8268B15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268B160"))) PPC_WEAK_FUNC(sub_8268B160);
PPC_FUNC_IMPL(__imp__sub_8268B160) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// mullw r10,r11,r6
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(ctx.r6.s32);
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// stw r5,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r5.u32);
	// stw r6,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r6.u32);
	// stw r7,152(r31)
	PPC_STORE_U32(r31.u32 + 152, ctx.r7.u32);
	// mullw r8,r11,r7
	ctx.r8.s64 = int64_t(r11.s32) * int64_t(ctx.r7.s32);
	// mullw r3,r11,r5
	ctx.r3.s64 = int64_t(r11.s32) * int64_t(ctx.r5.s32);
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// divwu r4,r8,r9
	ctx.r4.u32 = ctx.r8.u32 / ctx.r9.u32;
	// divwu r9,r3,r9
	ctx.r9.u32 = ctx.r3.u32 / ctx.r9.u32;
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// stw r9,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r9.u32);
	// bge cr6,0x8268b1bc
	if (!cr6.lt) goto loc_8268B1BC;
	// li r4,16
	ctx.r4.s64 = 16;
loc_8268B1BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268adf8
	sub_8268ADF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8268a970
	sub_8268A970(ctx, base);
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

__attribute__((alias("__imp__sub_8268B1E4"))) PPC_WEAK_FUNC(sub_8268B1E4);
PPC_FUNC_IMPL(__imp__sub_8268B1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268B1E8"))) PPC_WEAK_FUNC(sub_8268B1E8);
PPC_FUNC_IMPL(__imp__sub_8268B1E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8268aea0
	sub_8268AEA0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r28,0
	r28.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// lfd f31,15712(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r11.u32 + 15712);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8268b260
	if (!cr6.gt) goto loc_8268B260;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
loc_8268B220:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x8268b24c
	if (!cr6.gt) goto loc_8268B24C;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r28,r30
	r28.u64 = r30.u64;
loc_8268B24C:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8268b220
	if (cr6.lt) goto loc_8268B220;
loc_8268B260:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8268B284"))) PPC_WEAK_FUNC(sub_8268B284);
PPC_FUNC_IMPL(__imp__sub_8268B284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268B288"))) PPC_WEAK_FUNC(sub_8268B288);
PPC_FUNC_IMPL(__imp__sub_8268B288) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce4
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// bl 0x8268aea0
	sub_8268AEA0(ctx, base);
	// lis r11,-32137
	r11.s64 = -2106130432;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,7032
	r11.s64 = r11.s64 + 7032;
	// li r25,0
	r25.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// mr r28,r11
	r28.u64 = r11.u64;
	// lfd f31,15712(r10)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 15712);
	// mr r29,r11
	r29.u64 = r11.u64;
	// li r27,4
	r27.s64 = 4;
loc_8268B2C8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8268b334
	if (cr6.eq) goto loc_8268B334;
	// mr r11,r29
	r11.u64 = r29.u64;
	// mr r24,r28
	r24.u64 = r28.u64;
loc_8268B2DC:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// add r30,r26,r11
	r30.u64 = r26.u64 + r11.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bge cr6,0x8268b334
	if (!cr6.lt) goto loc_8268B334;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r23
	ctx.r4.u64 = r11.u64 + r23.u64;
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x8268b320
	if (!cr6.gt) goto loc_8268B320;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r25,r30
	r25.u64 = r30.u64;
loc_8268B320:
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// mr r11,r24
	r11.u64 = r24.u64;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8268b2dc
	if (!cr6.eq) goto loc_8268B2DC;
loc_8268B334:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// mr r26,r25
	r26.u64 = r25.u64;
	// addi r29,r29,96
	r29.s64 = r29.s64 + 96;
	// addi r28,r28,96
	r28.s64 = r28.s64 + 96;
	// bne 0x8268b2c8
	if (!cr0.eq) goto loc_8268B2C8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8268B36C"))) PPC_WEAK_FUNC(sub_8268B36C);
PPC_FUNC_IMPL(__imp__sub_8268B36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268B370"))) PPC_WEAK_FUNC(sub_8268B370);
PPC_FUNC_IMPL(__imp__sub_8268B370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8268af30
	sub_8268AF30(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r28,0
	r28.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// lfd f31,15712(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r11.u32 + 15712);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8268b3e8
	if (!cr6.gt) goto loc_8268B3E8;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
loc_8268B3A8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x8268b3d4
	if (!cr6.gt) goto loc_8268B3D4;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r28,r30
	r28.u64 = r30.u64;
loc_8268B3D4:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8268b3a8
	if (cr6.lt) goto loc_8268B3A8;
loc_8268B3E8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8268B40C"))) PPC_WEAK_FUNC(sub_8268B40C);
PPC_FUNC_IMPL(__imp__sub_8268B40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268B410"))) PPC_WEAK_FUNC(sub_8268B410);
PPC_FUNC_IMPL(__imp__sub_8268B410) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce4
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// bl 0x8268af30
	sub_8268AF30(ctx, base);
	// lis r11,-32137
	r11.s64 = -2106130432;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,7032
	r11.s64 = r11.s64 + 7032;
	// li r25,0
	r25.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// mr r28,r11
	r28.u64 = r11.u64;
	// lfd f31,15712(r10)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 15712);
	// mr r29,r11
	r29.u64 = r11.u64;
	// li r27,4
	r27.s64 = 4;
loc_8268B450:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8268b4bc
	if (cr6.eq) goto loc_8268B4BC;
	// mr r11,r29
	r11.u64 = r29.u64;
	// mr r24,r28
	r24.u64 = r28.u64;
loc_8268B464:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// add r30,r26,r11
	r30.u64 = r26.u64 + r11.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bge cr6,0x8268b4bc
	if (!cr6.lt) goto loc_8268B4BC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r23
	ctx.r4.u64 = r11.u64 + r23.u64;
	// lwz r11,40(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x8268b4a8
	if (!cr6.gt) goto loc_8268B4A8;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r25,r30
	r25.u64 = r30.u64;
loc_8268B4A8:
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// mr r11,r24
	r11.u64 = r24.u64;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8268b464
	if (!cr6.eq) goto loc_8268B464;
loc_8268B4BC:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// mr r26,r25
	r26.u64 = r25.u64;
	// addi r29,r29,96
	r29.s64 = r29.s64 + 96;
	// addi r28,r28,96
	r28.s64 = r28.s64 + 96;
	// bne 0x8268b450
	if (!cr0.eq) goto loc_8268B450;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8268B4F4"))) PPC_WEAK_FUNC(sub_8268B4F4);
PPC_FUNC_IMPL(__imp__sub_8268B4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268B4F8"))) PPC_WEAK_FUNC(sub_8268B4F8);
PPC_FUNC_IMPL(__imp__sub_8268B4F8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,24128(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 24128);
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
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// addi r11,r11,23964
	r11.s64 = r11.s64 + 23964;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x8268c448
	sub_8268C448(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r30,100
	ctx.r3.s64 = r30.s64 + 100;
	// bl 0x8268c448
	sub_8268C448(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r7,12
	ctx.r7.s64 = 12;
	// li r6,14
	ctx.r6.s64 = 14;
	// li r5,82
	ctx.r5.s64 = 82;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// ori r4,r4,44100
	ctx.r4.u64 = ctx.r4.u64 | 44100;
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r11.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// bl 0x8268b160
	sub_8268B160(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8268a970
	sub_8268A970(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8268B500"))) PPC_WEAK_FUNC(sub_8268B500);
PPC_FUNC_IMPL(__imp__sub_8268B500) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// addi r11,r11,23964
	r11.s64 = r11.s64 + 23964;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x8268c448
	sub_8268C448(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r30,100
	ctx.r3.s64 = r30.s64 + 100;
	// bl 0x8268c448
	sub_8268C448(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r7,12
	ctx.r7.s64 = 12;
	// li r6,14
	ctx.r6.s64 = 14;
	// li r5,82
	ctx.r5.s64 = 82;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// ori r4,r4,44100
	ctx.r4.u64 = ctx.r4.u64 | 44100;
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r11.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// bl 0x8268b160
	sub_8268B160(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8268a970
	sub_8268A970(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8268B5A4"))) PPC_WEAK_FUNC(sub_8268B5A4);
PPC_FUNC_IMPL(__imp__sub_8268B5A4) {
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
	// bl 0x82688fa8
	sub_82688FA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268B5CC"))) PPC_WEAK_FUNC(sub_8268B5CC);
PPC_FUNC_IMPL(__imp__sub_8268B5CC) {
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
	// addi r3,r11,68
	ctx.r3.s64 = r11.s64 + 68;
	// bl 0x8268c478
	sub_8268C478(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268B5F8"))) PPC_WEAK_FUNC(sub_8268B5F8);
PPC_FUNC_IMPL(__imp__sub_8268B5F8) {
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
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// bl 0x8268c478
	sub_8268C478(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268B624"))) PPC_WEAK_FUNC(sub_8268B624);
PPC_FUNC_IMPL(__imp__sub_8268B624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268B628"))) PPC_WEAK_FUNC(sub_8268B628);
PPC_FUNC_IMPL(__imp__sub_8268B628) {
	PPC_FUNC_PROLOGUE();
	// stw r4,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268B630"))) PPC_WEAK_FUNC(sub_8268B630);
PPC_FUNC_IMPL(__imp__sub_8268B630) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// lfs f0,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f0.f64 = double(temp.f32);
	// ble cr6,0x8268b654
	if (!cr6.gt) goto loc_8268B654;
	// fdivs f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 / ctx.f1.f64));
	// b 0x8268b658
	goto loc_8268B658;
loc_8268B654:
	// fmuls f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
loc_8268B658:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x8268c398
	sub_8268C398(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268B660"))) PPC_WEAK_FUNC(sub_8268B660);
PPC_FUNC_IMPL(__imp__sub_8268B660) {
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
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x8268b6b8
	if (cr6.eq) goto loc_8268B6B8;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// stw r4,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r4.u32);
	// bl 0x8268c490
	sub_8268C490(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8268c490
	sub_8268C490(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8268c490
	sub_8268C490(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268B6B8:
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

__attribute__((alias("__imp__sub_8268B6CC"))) PPC_WEAK_FUNC(sub_8268B6CC);
PPC_FUNC_IMPL(__imp__sub_8268B6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268B6D0"))) PPC_WEAK_FUNC(sub_8268B6D0);
PPC_FUNC_IMPL(__imp__sub_8268B6D0) {
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
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_8268B720"))) PPC_WEAK_FUNC(sub_8268B720);
PPC_FUNC_IMPL(__imp__sub_8268B720) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8268b764
	if (cr0.eq) goto loc_8268B764;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268B764:
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

__attribute__((alias("__imp__sub_8268B778"))) PPC_WEAK_FUNC(sub_8268B778);
PPC_FUNC_IMPL(__imp__sub_8268B778) {
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
	// stfs f0,124(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f0,132(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268B790"))) PPC_WEAK_FUNC(sub_8268B790);
PPC_FUNC_IMPL(__imp__sub_8268B790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x8268b7f0
	if (cr6.gt) goto loc_8268B7F0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_8268B7B4:
	// lfs f13,124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f11,132(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f10,f11,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f13,124(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,124(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 124, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8268b7b4
	if (!cr6.gt) goto loc_8268B7B4;
loc_8268B7F0:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
loc_8268B800:
	// stfs f13,124(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 124, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8268b830
	if (!cr6.gt) goto loc_8268B830;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
loc_8268B810:
	// lfs f13,124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// stfs f13,124(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 124, temp.u32);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x8268b86c
	if (!cr6.lt) goto loc_8268B86C;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x8268b810
	if (cr6.gt) goto loc_8268B810;
loc_8268B830:
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f12,f11,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f13,124(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// b 0x8268b800
	goto loc_8268B800;
loc_8268B86C:
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	f0.f64 = double(temp.f32);
	// stfs f0,132(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 132, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268B880"))) PPC_WEAK_FUNC(sub_8268B880);
PPC_FUNC_IMPL(__imp__sub_8268B880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x8268b904
	if (cr6.gt) goto loc_8268B904;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_8268B8AC:
	// lfs f13,124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f11,132(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f10,f11,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f13,124(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f11,136(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f10,f11,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f13,124(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,124(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 124, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8268b8ac
	if (!cr6.gt) goto loc_8268B8AC;
loc_8268B904:
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f13,124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
loc_8268B914:
	// stfs f13,124(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 124, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8268b944
	if (!cr6.gt) goto loc_8268B944;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
loc_8268B924:
	// lfs f13,124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// stfs f13,124(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 124, temp.u32);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bge cr6,0x8268b9b0
	if (!cr6.lt) goto loc_8268B9B0;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x8268b924
	if (cr6.gt) goto loc_8268B924;
loc_8268B944:
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f13,124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f11,r4,r5
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmadds f13,f11,f13,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f13,124(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f11,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f10,f11,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f13,124(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// b 0x8268b914
	goto loc_8268B914;
loc_8268B9B0:
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	f0.f64 = double(temp.f32);
	// stfs f0,132(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 132, temp.u32);
	// lfs f0,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	f0.f64 = double(temp.f32);
	// stfs f0,136(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 136, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268B9CC"))) PPC_WEAK_FUNC(sub_8268B9CC);
PPC_FUNC_IMPL(__imp__sub_8268B9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268B9D0"))) PPC_WEAK_FUNC(sub_8268B9D0);
PPC_FUNC_IMPL(__imp__sub_8268B9D0) {
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
	// lwz r16,24296(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 24296);
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
	// addi r28,r30,88
	r28.s64 = r30.s64 + 88;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// addi r11,r11,24204
	r11.s64 = r11.s64 + 24204;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x8268c448
	sub_8268C448(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r30,56
	ctx.r3.s64 = r30.s64 + 56;
	// bl 0x8268c448
	sub_8268C448(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8268c448
	sub_8268C448(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// stw r10,120(r30)
	PPC_STORE_U32(r30.u32 + 120, ctx.r10.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268ba70
	if (cr0.eq) goto loc_8268BA70;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8268c3b0
	sub_8268C3B0(ctx, base);
	// b 0x8268ba74
	goto loc_8268BA74;
loc_8268BA70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268BA74:
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8268B9D8"))) PPC_WEAK_FUNC(sub_8268B9D8);
PPC_FUNC_IMPL(__imp__sub_8268B9D8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r28,r30,88
	r28.s64 = r30.s64 + 88;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// addi r11,r11,24204
	r11.s64 = r11.s64 + 24204;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x8268c448
	sub_8268C448(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r30,56
	ctx.r3.s64 = r30.s64 + 56;
	// bl 0x8268c448
	sub_8268C448(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8268c448
	sub_8268C448(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// stw r10,120(r30)
	PPC_STORE_U32(r30.u32 + 120, ctx.r10.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268ba70
	if (cr0.eq) goto loc_8268BA70;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8268c3b0
	sub_8268C3B0(ctx, base);
	// b 0x8268ba74
	goto loc_8268BA74;
loc_8268BA70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268BA74:
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8268BA84"))) PPC_WEAK_FUNC(sub_8268BA84);
PPC_FUNC_IMPL(__imp__sub_8268BA84) {
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
	// bl 0x82688fa8
	sub_82688FA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268BAAC"))) PPC_WEAK_FUNC(sub_8268BAAC);
PPC_FUNC_IMPL(__imp__sub_8268BAAC) {
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
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x8268c478
	sub_8268C478(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268BAD8"))) PPC_WEAK_FUNC(sub_8268BAD8);
PPC_FUNC_IMPL(__imp__sub_8268BAD8) {
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
	// addi r3,r11,56
	ctx.r3.s64 = r11.s64 + 56;
	// bl 0x8268c478
	sub_8268C478(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268BB04"))) PPC_WEAK_FUNC(sub_8268BB04);
PPC_FUNC_IMPL(__imp__sub_8268BB04) {
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
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
	// bl 0x8268c478
	sub_8268C478(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268BB30"))) PPC_WEAK_FUNC(sub_8268BB30);
PPC_FUNC_IMPL(__imp__sub_8268BB30) {
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

__attribute__((alias("__imp__sub_8268BB58"))) PPC_WEAK_FUNC(sub_8268BB58);
PPC_FUNC_IMPL(__imp__sub_8268BB58) {
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
	// lwz r16,24416(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 24416);
	// mflr r12
	// bl 0x8239bcfc
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
	// addi r11,r11,24204
	r11.s64 = r11.s64 + 24204;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r29,12(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8268bba0
	if (cr0.eq) goto loc_8268BBA0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8268c168
	sub_8268C168(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8268BBA0:
	// addi r3,r30,88
	ctx.r3.s64 = r30.s64 + 88;
	// bl 0x8268c478
	sub_8268C478(ctx, base);
	// addi r3,r30,56
	ctx.r3.s64 = r30.s64 + 56;
	// bl 0x8268c478
	sub_8268C478(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x8268c478
	sub_8268C478(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,23452
	r11.s64 = r11.s64 + 23452;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8268BB60"))) PPC_WEAK_FUNC(sub_8268BB60);
PPC_FUNC_IMPL(__imp__sub_8268BB60) {
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,24204
	r11.s64 = r11.s64 + 24204;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r29,12(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8268bba0
	if (cr0.eq) goto loc_8268BBA0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8268c168
	sub_8268C168(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8268BBA0:
	// addi r3,r30,88
	ctx.r3.s64 = r30.s64 + 88;
	// bl 0x8268c478
	sub_8268C478(ctx, base);
	// addi r3,r30,56
	ctx.r3.s64 = r30.s64 + 56;
	// bl 0x8268c478
	sub_8268C478(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x8268c478
	sub_8268C478(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,23452
	r11.s64 = r11.s64 + 23452;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8268BBCC"))) PPC_WEAK_FUNC(sub_8268BBCC);
PPC_FUNC_IMPL(__imp__sub_8268BBCC) {
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
	// bl 0x82688fa8
	sub_82688FA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268BBF4"))) PPC_WEAK_FUNC(sub_8268BBF4);
PPC_FUNC_IMPL(__imp__sub_8268BBF4) {
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
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x8268c478
	sub_8268C478(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268BC20"))) PPC_WEAK_FUNC(sub_8268BC20);
PPC_FUNC_IMPL(__imp__sub_8268BC20) {
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
	// addi r3,r11,56
	ctx.r3.s64 = r11.s64 + 56;
	// bl 0x8268c478
	sub_8268C478(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268BC4C"))) PPC_WEAK_FUNC(sub_8268BC4C);
PPC_FUNC_IMPL(__imp__sub_8268BC4C) {
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
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
	// bl 0x8268c478
	sub_8268C478(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268BC78"))) PPC_WEAK_FUNC(sub_8268BC78);
PPC_FUNC_IMPL(__imp__sub_8268BC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrldi r11,r29,32
	r11.u64 = r29.u64 & 0xFFFFFFFF;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / f0.f64));
	// lfs f0,-21452(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -21452);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8268c728
	sub_8268C728(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x8268bcfc
	if (!cr6.eq) goto loc_8268BCFC;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// b 0x8268bd00
	goto loc_8268BD00;
loc_8268BCFC:
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
loc_8268BD00:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r27,20(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r29,r31,88
	r29.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8268c728
	sub_8268C728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// bl 0x8268c390
	sub_8268C390(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8268BDB8"))) PPC_WEAK_FUNC(sub_8268BDB8);
PPC_FUNC_IMPL(__imp__sub_8268BDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r26,20(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r29,r31,56
	r29.s64 = r31.s64 + 56;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8268c728
	sub_8268C728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// bl 0x8268c390
	sub_8268C390(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrldi r11,r28,32
	r11.u64 = r28.u64 & 0xFFFFFFFF;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / f0.f64));
	// lfs f0,-21452(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -21452);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r31,88
	r29.s64 = r31.s64 + 88;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8268c728
	sub_8268C728(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x8268bee4
	if (!cr6.eq) goto loc_8268BEE4;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// b 0x8268bee8
	goto loc_8268BEE8;
loc_8268BEE4:
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
loc_8268BEE8:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8268BF10"))) PPC_WEAK_FUNC(sub_8268BF10);
PPC_FUNC_IMPL(__imp__sub_8268BF10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8268bffc
	if (cr6.eq) goto loc_8268BFFC;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8268bfd0
	if (!cr6.eq) goto loc_8268BFD0;
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r28,r31,88
	r28.s64 = r31.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / f0.f64));
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8268c728
	sub_8268C728(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x8268bfa8
	if (!cr6.eq) goto loc_8268BFA8;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// b 0x8268bfac
	goto loc_8268BFAC;
loc_8268BFA8:
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
loc_8268BFAC:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8268bffc
	goto loc_8268BFFC;
loc_8268BFD0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x8268bff8
	if (!cr6.lt) goto loc_8268BFF8;
	// bl 0x8268bc78
	sub_8268BC78(ctx, base);
	// b 0x8268bffc
	goto loc_8268BFFC;
loc_8268BFF8:
	// bl 0x8268bdb8
	sub_8268BDB8(ctx, base);
loc_8268BFFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8268C004"))) PPC_WEAK_FUNC(sub_8268C004);
PPC_FUNC_IMPL(__imp__sub_8268C004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268C008"))) PPC_WEAK_FUNC(sub_8268C008);
PPC_FUNC_IMPL(__imp__sub_8268C008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,24552(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 24552);
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
	// bl 0x8268b9d8
	sub_8268B9D8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,24492
	r11.s64 = r11.s64 + 24492;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,124(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 124, temp.u32);
	// stfs f0,136(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 136, temp.u32);
	// stfs f0,132(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 132, temp.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lfs f13,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f13,16(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// lfd f1,-28592(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + -28592);
	// bl 0x8268c398
	sub_8268C398(ctx, base);
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

__attribute__((alias("__imp__sub_8268C010"))) PPC_WEAK_FUNC(sub_8268C010);
PPC_FUNC_IMPL(__imp__sub_8268C010) {
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
	// bl 0x8268b9d8
	sub_8268B9D8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,24492
	r11.s64 = r11.s64 + 24492;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,124(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 124, temp.u32);
	// stfs f0,136(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 136, temp.u32);
	// stfs f0,132(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 132, temp.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lfs f13,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f13,16(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// lfd f1,-28592(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + -28592);
	// bl 0x8268c398
	sub_8268C398(ctx, base);
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

__attribute__((alias("__imp__sub_8268C08C"))) PPC_WEAK_FUNC(sub_8268C08C);
PPC_FUNC_IMPL(__imp__sub_8268C08C) {
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
	// bl 0x8268bb60
	sub_8268BB60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268C0B4"))) PPC_WEAK_FUNC(sub_8268C0B4);
PPC_FUNC_IMPL(__imp__sub_8268C0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268C0B8"))) PPC_WEAK_FUNC(sub_8268C0B8);
PPC_FUNC_IMPL(__imp__sub_8268C0B8) {
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
	// bl 0x8268bb60
	sub_8268BB60(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268c0e8
	if (cr0.eq) goto loc_8268C0E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8268C0E8:
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

__attribute__((alias("__imp__sub_8268C104"))) PPC_WEAK_FUNC(sub_8268C104);
PPC_FUNC_IMPL(__imp__sub_8268C104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268C108"))) PPC_WEAK_FUNC(sub_8268C108);
PPC_FUNC_IMPL(__imp__sub_8268C108) {
	PPC_FUNC_PROLOGUE();
	// b 0x8268bf10
	sub_8268BF10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268C10C"))) PPC_WEAK_FUNC(sub_8268C10C);
PPC_FUNC_IMPL(__imp__sub_8268C10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268C110"))) PPC_WEAK_FUNC(sub_8268C110);
PPC_FUNC_IMPL(__imp__sub_8268C110) {
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
	// addi r11,r11,24492
	r11.s64 = r11.s64 + 24492;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8268bb60
	sub_8268BB60(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268c14c
	if (cr0.eq) goto loc_8268C14C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8268C14C:
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

__attribute__((alias("__imp__sub_8268C168"))) PPC_WEAK_FUNC(sub_8268C168);
PPC_FUNC_IMPL(__imp__sub_8268C168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8268C188"))) PPC_WEAK_FUNC(sub_8268C188);
PPC_FUNC_IMPL(__imp__sub_8268C188) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268C18C"))) PPC_WEAK_FUNC(sub_8268C18C);
PPC_FUNC_IMPL(__imp__sub_8268C18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268C190"))) PPC_WEAK_FUNC(sub_8268C190);
PPC_FUNC_IMPL(__imp__sub_8268C190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x8239bcf4
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8239d5d0
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,8191
	r11.s64 = 536805376;
	// li r30,-1
	r30.s64 = -1;
	// ori r10,r11,65535
	ctx.r10.u64 = r11.u64 | 65535;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x8268c1c8
	if (!cr6.gt) goto loc_8268C1C8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8268C1C8:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8268c1ec
	if (!cr6.gt) goto loc_8268C1EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8268C1EC:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfd f13,8(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lfd f0,264(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 264);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// fmul f28,f13,f0
	f28.f64 = ctx.f13.f64 * f0.f64;
	// lfd f24,-31368(r10)
	f24.u64 = PPC_LOAD_U64(ctx.r10.u32 + -31368);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// fmr f30,f24
	f30.f64 = f24.f64;
	// lfd f0,31200(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 31200);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmul f23,f28,f0
	f23.f64 = f28.f64 * f0.f64;
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfd f0,-10016(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -10016);
	// fdiv f27,f0,f13
	f27.f64 = f0.f64 / ctx.f13.f64;
	// beq 0x8268c2dc
	if (cr0.eq) goto loc_8268C2DC;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r29,r27
	r29.u64 = r27.u64;
	// lfd f25,-31872(r8)
	f25.u64 = PPC_LOAD_U64(ctx.r8.u32 + -31872);
	// lfd f26,-31880(r9)
	f26.u64 = PPC_LOAD_U64(ctx.r9.u32 + -31880);
	// lfd f22,-31360(r10)
	f22.u64 = PPC_LOAD_U64(ctx.r10.u32 + -31360);
loc_8268C264:
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fsub f29,f0,f13
	f29.f64 = f0.f64 - ctx.f13.f64;
	// fmul f31,f29,f23
	f31.f64 = f29.f64 * f23.f64;
	// fcmpu cr6,f31,f24
	cr6.compare(f31.f64, f24.f64);
	// beq cr6,0x8268c2ac
	if (cr6.eq) goto loc_8268C2AC;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8239ddc0
	sub_8239DDC0(ctx, base);
	// fdiv f0,f28,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = f28.f64 / f31.f64;
	// fmul f31,f1,f0
	f31.f64 = ctx.f1.f64 * f0.f64;
	// b 0x8268c2b0
	goto loc_8268C2B0;
loc_8268C2AC:
	// fmr f31,f22
	ctx.fpscr.disableFlushMode();
	f31.f64 = f22.f64;
loc_8268C2B0:
	// fmul f1,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64 * f27.f64;
	// bl 0x8239de90
	sub_8239DE90(ctx, base);
	// fmadd f0,f1,f26,f25
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64 * f26.f64 + f25.f64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fmul f0,f0,f31
	f0.f64 = f0.f64 * f31.f64;
	// stfd f0,0(r29)
	PPC_STORE_U64(r29.u32 + 0, f0.u64);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// fadd f30,f0,f30
	f30.f64 = f0.f64 + f30.f64;
	// blt cr6,0x8268c264
	if (cr6.lt) goto loc_8268C264;
loc_8268C2DC:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfd f0,24600(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 24600);
	// fdiv f12,f0,f30
	ctx.f12.f64 = f0.f64 / f30.f64;
	// ble cr6,0x8268c350
	if (!cr6.gt) goto loc_8268C350;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// lfd f10,18488(r7)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 18488);
	// lfd f11,-28592(r8)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r8.u32 + -28592);
loc_8268C310:
	// lfd f0,0(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fmul f13,f12,f0
	ctx.f13.f64 = ctx.f12.f64 * f0.f64;
	// fcmpu cr6,f13,f24
	cr6.compare(ctx.f13.f64, f24.f64);
	// blt cr6,0x8268c328
	if (cr6.lt) goto loc_8268C328;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
	// b 0x8268c32c
	goto loc_8268C32C;
loc_8268C328:
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f10.f64;
loc_8268C32C:
	// fadd f0,f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = f0.f64 + ctx.f13.f64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x8268c310
	if (cr6.lt) goto loc_8268C310;
loc_8268C350:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,14
	ctx.r6.s64 = 14;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8239d61c
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8268C390"))) PPC_WEAK_FUNC(sub_8268C390);
PPC_FUNC_IMPL(__imp__sub_8268C390) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8268c9b8
	sub_8268C9B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268C398"))) PPC_WEAK_FUNC(sub_8268C398);
PPC_FUNC_IMPL(__imp__sub_8268C398) {
	PPC_FUNC_PROLOGUE();
	// stfd f1,8(r3)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.f1.u64);
	// b 0x8268c190
	sub_8268C190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268C3A0"))) PPC_WEAK_FUNC(sub_8268C3A0);
PPC_FUNC_IMPL(__imp__sub_8268C3A0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// b 0x8268c190
	sub_8268C190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268C3A8"))) PPC_WEAK_FUNC(sub_8268C3A8);
PPC_FUNC_IMPL(__imp__sub_8268C3A8) {
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
	PPCRegister f0{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,24616(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 24616);
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
	// li r3,28
	ctx.r3.s64 = 28;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r5,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r5.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268c3f0
	if (cr0.eq) goto loc_8268C3F0;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x8268c7c0
	sub_8268C7C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8268c3f4
	goto loc_8268C3F4;
loc_8268C3F0:
	// li r11,0
	r11.s64 = 0;
loc_8268C3F4:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// lfd f0,-28592(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -28592);
	// stfd f0,8(r30)
	PPC_STORE_U64(r30.u32 + 8, f0.u64);
	// bl 0x8268c190
	sub_8268C190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8268C3B0"))) PPC_WEAK_FUNC(sub_8268C3B0);
PPC_FUNC_IMPL(__imp__sub_8268C3B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// li r3,28
	ctx.r3.s64 = 28;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r5,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r5.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268c3f0
	if (cr0.eq) goto loc_8268C3F0;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x8268c7c0
	sub_8268C7C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8268c3f4
	goto loc_8268C3F4;
loc_8268C3F0:
	// li r11,0
	r11.s64 = 0;
loc_8268C3F4:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// lfd f0,-28592(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -28592);
	// stfd f0,8(r30)
	PPC_STORE_U64(r30.u32 + 8, f0.u64);
	// bl 0x8268c190
	sub_8268C190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8268C41C"))) PPC_WEAK_FUNC(sub_8268C41C);
PPC_FUNC_IMPL(__imp__sub_8268C41C) {
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

__attribute__((alias("__imp__sub_8268C444"))) PPC_WEAK_FUNC(sub_8268C444);
PPC_FUNC_IMPL(__imp__sub_8268C444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268C448"))) PPC_WEAK_FUNC(sub_8268C448);
PPC_FUNC_IMPL(__imp__sub_8268C448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// addi r10,r11,24684
	ctx.r10.s64 = r11.s64 + 24684;
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
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268C478"))) PPC_WEAK_FUNC(sub_8268C478);
PPC_FUNC_IMPL(__imp__sub_8268C478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r10,24684
	ctx.r10.s64 = ctx.r10.s64 + 24684;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x821e7b68
	sub_821E7B68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268C490"))) PPC_WEAK_FUNC(sub_8268C490);
PPC_FUNC_IMPL(__imp__sub_8268C490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// twllei r4,0
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// divwu r11,r11,r4
	r11.u32 = r11.u32 / ctx.r4.u32;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268C4B0"))) PPC_WEAK_FUNC(sub_8268C4B0);
PPC_FUNC_IMPL(__imp__sub_8268C4B0) {
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
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8268c508
	if (cr6.eq) goto loc_8268C508;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mullw r30,r10,r9
	r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
loc_8268C508:
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

__attribute__((alias("__imp__sub_8268C520"))) PPC_WEAK_FUNC(sub_8268C520);
PPC_FUNC_IMPL(__imp__sub_8268C520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268C53C"))) PPC_WEAK_FUNC(sub_8268C53C);
PPC_FUNC_IMPL(__imp__sub_8268C53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268C540"))) PPC_WEAK_FUNC(sub_8268C540);
PPC_FUNC_IMPL(__imp__sub_8268C540) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r30,20(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, xer);
	// bgt cr6,0x8268c564
	if (cr6.gt) goto loc_8268C564;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
loc_8268C564:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mullw r28,r10,r30
	r28.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8268C5B0"))) PPC_WEAK_FUNC(sub_8268C5B0);
PPC_FUNC_IMPL(__imp__sub_8268C5B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// blt cr6,0x8268c5cc
	if (cr6.lt) goto loc_8268C5CC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
loc_8268C5CC:
	// subf r10,r4,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r4.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268C5E8"))) PPC_WEAK_FUNC(sub_8268C5E8);
PPC_FUNC_IMPL(__imp__sub_8268C5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268C5F8"))) PPC_WEAK_FUNC(sub_8268C5F8);
PPC_FUNC_IMPL(__imp__sub_8268C5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268C608"))) PPC_WEAK_FUNC(sub_8268C608);
PPC_FUNC_IMPL(__imp__sub_8268C608) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// twllei r9,0
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8268c6c4
	if (!cr6.gt) goto loc_8268C6C4;
	// mullw r11,r11,r4
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r4.s32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8268c668
	if (!cr6.gt) goto loc_8268C668;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8268C668:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mullw r28,r10,r9
	r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r30,15
	ctx.r10.s64 = r30.s64 + 15;
	// rlwinm r29,r10,0,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// b 0x8268c6cc
	goto loc_8268C6CC;
loc_8268C6C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268c4b0
	sub_8268C4B0(ctx, base);
loc_8268C6CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8268C6D4"))) PPC_WEAK_FUNC(sub_8268C6D4);
PPC_FUNC_IMPL(__imp__sub_8268C6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268C6D8"))) PPC_WEAK_FUNC(sub_8268C6D8);
PPC_FUNC_IMPL(__imp__sub_8268C6D8) {
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
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + r11.u64;
	// bl 0x8268c608
	sub_8268C608(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
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

__attribute__((alias("__imp__sub_8268C724"))) PPC_WEAK_FUNC(sub_8268C724);
PPC_FUNC_IMPL(__imp__sub_8268C724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268C728"))) PPC_WEAK_FUNC(sub_8268C728);
PPC_FUNC_IMPL(__imp__sub_8268C728) {
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
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + r11.u64;
	// bl 0x8268c608
	sub_8268C608(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
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

__attribute__((alias("__imp__sub_8268C774"))) PPC_WEAK_FUNC(sub_8268C774);
PPC_FUNC_IMPL(__imp__sub_8268C774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268C778"))) PPC_WEAK_FUNC(sub_8268C778);
PPC_FUNC_IMPL(__imp__sub_8268C778) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mullw r28,r11,r30
	r28.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// bl 0x8268c728
	sub_8268C728(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

