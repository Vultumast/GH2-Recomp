#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_822D5024"))) PPC_WEAK_FUNC(sub_822D5024);
PPC_FUNC_IMPL(__imp__sub_822D5024) {
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
	// beq 0x822d5058
	if (cr0.eq) goto loc_822D5058;
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
loc_822D5058:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D5068"))) PPC_WEAK_FUNC(sub_822D5068);
PPC_FUNC_IMPL(__imp__sub_822D5068) {
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
	// bl 0x822b2de0
	sub_822B2DE0(ctx, base);
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

__attribute__((alias("__imp__sub_822D5098"))) PPC_WEAK_FUNC(sub_822D5098);
PPC_FUNC_IMPL(__imp__sub_822D5098) {
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
	// lbz r11,88(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 88);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822d50c4
	if (cr0.eq) goto loc_822D50C4;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-9836(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9836);
	// bl 0x822b0e28
	sub_822B0E28(ctx, base);
loc_822D50C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_822D50E0"))) PPC_WEAK_FUNC(sub_822D50E0);
PPC_FUNC_IMPL(__imp__sub_822D50E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// stb r10,56(r31)
	PPC_STORE_U8(r31.u32 + 56, ctx.r10.u8);
	// bl 0x823118d0
	sub_823118D0(ctx, base);
	// addi r10,r31,68
	ctx.r10.s64 = r31.s64 + 68;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f1,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f31,64(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// stfs f0,84(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// clrlwi. r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// stb r28,89(r31)
	PPC_STORE_U8(r31.u32 + 89, r28.u8);
	// stb r29,88(r31)
	PPC_STORE_U8(r31.u32 + 88, r29.u8);
	// beq 0x822d5188
	if (cr0.eq) goto loc_822D5188;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,-7564(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -7564);
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,17324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// fmuls f2,f31,f0
	ctx.f2.f64 = double(float(f31.f64 * f0.f64));
	// lfs f1,-14040(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -14040);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822f78a0
	sub_822F78A0(ctx, base);
loc_822D5188:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822D5194"))) PPC_WEAK_FUNC(sub_822D5194);
PPC_FUNC_IMPL(__imp__sub_822D5194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D5198"))) PPC_WEAK_FUNC(sub_822D5198);
PPC_FUNC_IMPL(__imp__sub_822D5198) {
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
	// bl 0x82376eb0
	sub_82376EB0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,88(r31)
	PPC_STORE_U8(r31.u32 + 88, r11.u8);
	// stb r10,89(r31)
	PPC_STORE_U8(r31.u32 + 89, ctx.r10.u8);
	// stb r11,56(r31)
	PPC_STORE_U8(r31.u32 + 56, r11.u8);
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

__attribute__((alias("__imp__sub_822D51D8"))) PPC_WEAK_FUNC(sub_822D51D8);
PPC_FUNC_IMPL(__imp__sub_822D51D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// bl 0x82377210
	sub_82377210(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x823118d0
	sub_823118D0(ctx, base);
	// lbz r11,56(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822d524c
	if (cr0.eq) goto loc_822D524C;
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,60(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fcmpu cr6,f1,f12
	cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// lfs f12,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f12.f64 = double(temp.f32);
	// ble cr6,0x822d522c
	if (!cr6.gt) goto loc_822D522C;
	// fmr f0,f12
	f0.f64 = ctx.f12.f64;
	// b 0x822d5234
	goto loc_822D5234;
loc_822D522C:
	// fsubs f13,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
loc_822D5234:
	// lbz r11,89(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 89);
	// stfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822d5270
	if (!cr0.eq) goto loc_822D5270;
	// fsubs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 - f0.f64));
	// b 0x822d526c
	goto loc_822D526C;
loc_822D524C:
	// lbz r11,89(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 89);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822d5264
	if (cr0.eq) goto loc_822D5264;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// b 0x822d526c
	goto loc_822D526C;
loc_822D5264:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
loc_822D526C:
	// stfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
loc_822D5270:
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

__attribute__((alias("__imp__sub_822D5284"))) PPC_WEAK_FUNC(sub_822D5284);
PPC_FUNC_IMPL(__imp__sub_822D5284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D5288"))) PPC_WEAK_FUNC(sub_822D5288);
PPC_FUNC_IMPL(__imp__sub_822D5288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82376588
	sub_82376588(ctx, base);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// lis r7,-32140
	ctx.r7.s64 = -2106327040;
	// lwz r10,-8132(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8132);
	// clrlwi. r11,r10,31
	r11.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,-8148
	ctx.r4.s64 = r11.s64 + -8148;
	// bne 0x822d530c
	if (!cr0.eq) goto loc_822D530C;
	// lwz r11,27088(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 27088);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,-8132(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8132, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lwa r8,64(r11)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 64));
	// lwa r11,60(r11)
	r11.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 60));
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stfs f0,4(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,12(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// frsp f0,f13
	f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,8(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
loc_822D530C:
	// lbz r11,56(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822d5344
	if (cr0.eq) goto loc_822D5344;
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	f0.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// lwz r3,27088(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 27088);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,68
	ctx.r5.s64 = r31.s64 + 68;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822D5344:
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

__attribute__((alias("__imp__sub_822D5358"))) PPC_WEAK_FUNC(sub_822D5358);
PPC_FUNC_IMPL(__imp__sub_822D5358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x822d5620
	sub_822D5620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D5364"))) PPC_WEAK_FUNC(sub_822D5364);
PPC_FUNC_IMPL(__imp__sub_822D5364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D5368"))) PPC_WEAK_FUNC(sub_822D5368);
PPC_FUNC_IMPL(__imp__sub_822D5368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-36
	ctx.r3.s64 = ctx.r3.s64 + -36;
	// b 0x82376140
	sub_82376140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D5378"))) PPC_WEAK_FUNC(sub_822D5378);
PPC_FUNC_IMPL(__imp__sub_822D5378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-36
	ctx.r3.s64 = ctx.r3.s64 + -36;
	// b 0x82376110
	sub_82376110(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D5388"))) PPC_WEAK_FUNC(sub_822D5388);
PPC_FUNC_IMPL(__imp__sub_822D5388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x822d5068
	sub_822D5068(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D5394"))) PPC_WEAK_FUNC(sub_822D5394);
PPC_FUNC_IMPL(__imp__sub_822D5394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D5398"))) PPC_WEAK_FUNC(sub_822D5398);
PPC_FUNC_IMPL(__imp__sub_822D5398) {
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
	// lwz r16,31624(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 31624);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32127
	r27.s64 = -2105475072;
	// lwz r11,-8124(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8124);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822d541c
	if (!cr0.eq) goto loc_822D541C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8124(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8124, r11.u32);
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
	// bl 0x822b2de0
	sub_822B2DE0(ctx, base);
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
	// stw r3,-8128(r27)
	PPC_STORE_U32(r27.u32 + -8128, ctx.r3.u32);
	// b 0x822d5420
	goto loc_822D5420;
loc_822D541C:
	// lwz r3,-8128(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -8128);
loc_822D5420:
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
	// beq 0x822d545c
	if (cr0.eq) goto loc_822D545C;
	// lwz r11,-92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -92);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-92
	ctx.r3.s64 = r11.s64 + -92;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x822d54d8
	goto loc_822D54D8;
loc_822D545C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x822d54bc
	if (!cr0.eq) goto loc_822D54BC;
	// addic. r11,r30,-96
	xer.ca = r30.u32 > 95;
	r11.s64 = r30.s64 + -96;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d5480
	if (!cr0.eq) goto loc_822D5480;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d5490
	goto loc_822D5490;
loc_822D5480:
	// lwz r11,-92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -92);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-92
	ctx.r3.s64 = r11.s64 + -92;
loc_822D5490:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -92);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-92
	ctx.r4.s64 = r11.s64 + -92;
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
loc_822D54BC:
	// lwz r11,-92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -92);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-92
	ctx.r3.s64 = r11.s64 + -92;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_822D54D8:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822D53A0"))) PPC_WEAK_FUNC(sub_822D53A0);
PPC_FUNC_IMPL(__imp__sub_822D53A0) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32127
	r27.s64 = -2105475072;
	// lwz r11,-8124(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8124);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822d541c
	if (!cr0.eq) goto loc_822D541C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8124(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8124, r11.u32);
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
	// bl 0x822b2de0
	sub_822B2DE0(ctx, base);
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
	// stw r3,-8128(r27)
	PPC_STORE_U32(r27.u32 + -8128, ctx.r3.u32);
	// b 0x822d5420
	goto loc_822D5420;
loc_822D541C:
	// lwz r3,-8128(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -8128);
loc_822D5420:
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
	// beq 0x822d545c
	if (cr0.eq) goto loc_822D545C;
	// lwz r11,-92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -92);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-92
	ctx.r3.s64 = r11.s64 + -92;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x822d54d8
	goto loc_822D54D8;
loc_822D545C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x822d54bc
	if (!cr0.eq) goto loc_822D54BC;
	// addic. r11,r30,-96
	xer.ca = r30.u32 > 95;
	r11.s64 = r30.s64 + -96;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d5480
	if (!cr0.eq) goto loc_822D5480;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d5490
	goto loc_822D5490;
loc_822D5480:
	// lwz r11,-92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -92);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-92
	ctx.r3.s64 = r11.s64 + -92;
loc_822D5490:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -92);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-92
	ctx.r4.s64 = r11.s64 + -92;
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
loc_822D54BC:
	// lwz r11,-92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -92);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-92
	ctx.r3.s64 = r11.s64 + -92;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_822D54D8:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822D54E4"))) PPC_WEAK_FUNC(sub_822D54E4);
PPC_FUNC_IMPL(__imp__sub_822D54E4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8124
	r11.s64 = r11.s64 + -8124;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8124
	ctx.r10.s64 = ctx.r10.s64 + -8124;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D550C"))) PPC_WEAK_FUNC(sub_822D550C);
PPC_FUNC_IMPL(__imp__sub_822D550C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D5510"))) PPC_WEAK_FUNC(sub_822D5510);
PPC_FUNC_IMPL(__imp__sub_822D5510) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r11,19376
	ctx.r4.s64 = r11.s64 + 19376;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823199b8
	sub_823199B8(ctx, base);
	// li r27,1
	r27.s64 = 1;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,31688
	ctx.r4.s64 = r11.s64 + 31688;
	// stb r27,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r27.u8);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823197b0
	sub_823197B0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r27.u8);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-5564
	ctx.r4.s64 = r11.s64 + -5564;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823197b0
	sub_823197B0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x822d50e0
	sub_822D50E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822D560C"))) PPC_WEAK_FUNC(sub_822D560C);
PPC_FUNC_IMPL(__imp__sub_822D560C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D5610"))) PPC_WEAK_FUNC(sub_822D5610);
PPC_FUNC_IMPL(__imp__sub_822D5610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x822d53a0
	sub_822D53A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D561C"))) PPC_WEAK_FUNC(sub_822D561C);
PPC_FUNC_IMPL(__imp__sub_822D561C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D5620"))) PPC_WEAK_FUNC(sub_822D5620);
PPC_FUNC_IMPL(__imp__sub_822D5620) {
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
	// addi r31,r3,-96
	r31.s64 = ctx.r3.s64 + -96;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x82376478
	sub_82376478(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d565c
	if (cr0.eq) goto loc_822D565C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822D565C:
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

__attribute__((alias("__imp__sub_822D5678"))) PPC_WEAK_FUNC(sub_822D5678);
PPC_FUNC_IMPL(__imp__sub_822D5678) {
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
	// lwz r16,31736(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 31736);
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-8116(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8116);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r29,r9,-8120
	r29.s64 = ctx.r9.s64 + -8120;
	// bne 0x822d56e4
	if (!cr0.eq) goto loc_822D56E4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8116(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8116, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31700
	ctx.r4.s64 = r11.s64 + 31700;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822D56E4:
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
	// beq 0x822d573c
	if (cr0.eq) goto loc_822D573C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r27,-96
	ctx.r4.s64 = r27.s64 + -96;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822d5510
	sub_822D5510(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822d573c
	if (cr6.eq) goto loc_822D573C;
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
	// beq 0x822d5788
	if (cr0.eq) goto loc_822D5788;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_822D5734:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822d5788
	goto loc_822D5788;
loc_822D573C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r27,-36
	ctx.r4.s64 = r27.s64 + -36;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82377300
	sub_82377300(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822d577c
	if (cr6.eq) goto loc_822D577C;
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
	// beq 0x822d5788
	if (cr0.eq) goto loc_822D5788;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x822d5734
	goto loc_822D5734;
loc_822D577C:
	// li r11,6
	r11.s64 = 6;
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_822D5788:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822D5680"))) PPC_WEAK_FUNC(sub_822D5680);
PPC_FUNC_IMPL(__imp__sub_822D5680) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-8116(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8116);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r29,r9,-8120
	r29.s64 = ctx.r9.s64 + -8120;
	// bne 0x822d56e4
	if (!cr0.eq) goto loc_822D56E4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8116(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8116, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,31700
	ctx.r4.s64 = r11.s64 + 31700;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822D56E4:
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
	// beq 0x822d573c
	if (cr0.eq) goto loc_822D573C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r27,-96
	ctx.r4.s64 = r27.s64 + -96;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822d5510
	sub_822D5510(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822d573c
	if (cr6.eq) goto loc_822D573C;
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
	// beq 0x822d5788
	if (cr0.eq) goto loc_822D5788;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_822D5734:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822d5788
	goto loc_822D5788;
loc_822D573C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r27,-36
	ctx.r4.s64 = r27.s64 + -36;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82377300
	sub_82377300(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822d577c
	if (cr6.eq) goto loc_822D577C;
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
	// beq 0x822d5788
	if (cr0.eq) goto loc_822D5788;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x822d5734
	goto loc_822D5734;
loc_822D577C:
	// li r11,6
	r11.s64 = 6;
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_822D5788:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822D5794"))) PPC_WEAK_FUNC(sub_822D5794);
PPC_FUNC_IMPL(__imp__sub_822D5794) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8116
	r11.s64 = r11.s64 + -8116;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8116
	ctx.r10.s64 = ctx.r10.s64 + -8116;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D57BC"))) PPC_WEAK_FUNC(sub_822D57BC);
PPC_FUNC_IMPL(__imp__sub_822D57BC) {
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

__attribute__((alias("__imp__sub_822D57E4"))) PPC_WEAK_FUNC(sub_822D57E4);
PPC_FUNC_IMPL(__imp__sub_822D57E4) {
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

__attribute__((alias("__imp__sub_822D580C"))) PPC_WEAK_FUNC(sub_822D580C);
PPC_FUNC_IMPL(__imp__sub_822D580C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D5810"))) PPC_WEAK_FUNC(sub_822D5810);
PPC_FUNC_IMPL(__imp__sub_822D5810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x822d5680
	sub_822D5680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D581C"))) PPC_WEAK_FUNC(sub_822D581C);
PPC_FUNC_IMPL(__imp__sub_822D581C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D5820"))) PPC_WEAK_FUNC(sub_822D5820);
PPC_FUNC_IMPL(__imp__sub_822D5820) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,31840(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 31840);
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82353920
	sub_82353920(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822D5828"))) PPC_WEAK_FUNC(sub_822D5828);
PPC_FUNC_IMPL(__imp__sub_822D5828) {
	PPC_FUNC_PROLOGUE();
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82353920
	sub_82353920(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822D5874"))) PPC_WEAK_FUNC(sub_822D5874);
PPC_FUNC_IMPL(__imp__sub_822D5874) {
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

__attribute__((alias("__imp__sub_822D589C"))) PPC_WEAK_FUNC(sub_822D589C);
PPC_FUNC_IMPL(__imp__sub_822D589C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D58A0"))) PPC_WEAK_FUNC(sub_822D58A0);
PPC_FUNC_IMPL(__imp__sub_822D58A0) {
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
	// lwz r16,32024(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32024);
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
	// beq cr6,0x822d58ec
	if (cr6.eq) goto loc_822D58EC;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// addi r11,r11,32008
	r11.s64 = r11.s64 + 32008;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_822D58EC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82375fe8
	sub_82375FE8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,31956
	r11.s64 = r11.s64 + 31956;
	// addi r10,r10,31892
	ctx.r10.s64 = ctx.r10.s64 + 31892;
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
	// addi r10,r11,-68
	ctx.r10.s64 = r11.s64 + -68;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D58A8"))) PPC_WEAK_FUNC(sub_822D58A8);
PPC_FUNC_IMPL(__imp__sub_822D58A8) {
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
	// beq cr6,0x822d58ec
	if (cr6.eq) goto loc_822D58EC;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// addi r11,r11,32008
	r11.s64 = r11.s64 + 32008;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_822D58EC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82375fe8
	sub_82375FE8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,31956
	r11.s64 = r11.s64 + 31956;
	// addi r10,r10,31892
	ctx.r10.s64 = ctx.r10.s64 + 31892;
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
	// addi r10,r11,-68
	ctx.r10.s64 = r11.s64 + -68;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D5944"))) PPC_WEAK_FUNC(sub_822D5944);
PPC_FUNC_IMPL(__imp__sub_822D5944) {
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
	// beq 0x822d5978
	if (cr0.eq) goto loc_822D5978;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,72
	ctx.r3.s64 = r11.s64 + 72;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_822D5978:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D5988"))) PPC_WEAK_FUNC(sub_822D5988);
PPC_FUNC_IMPL(__imp__sub_822D5988) {
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
	// bl 0x822b2f00
	sub_822B2F00(ctx, base);
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

__attribute__((alias("__imp__sub_822D59B8"))) PPC_WEAK_FUNC(sub_822D59B8);
PPC_FUNC_IMPL(__imp__sub_822D59B8) {
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
	// lwz r16,32088(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32088);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,2888
	ctx.r4.s64 = r11.s64 + 2888;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r30,-8112(r11)
	PPC_STORE_U32(r11.u32 + -8112, r30.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,-9608(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9608);
	// bl 0x822b4db8
	sub_822B4DB8(ctx, base);
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
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,22044
	ctx.r4.s64 = r11.s64 + 22044;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822d5828
	sub_822D5828(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d5a5c
	if (cr0.eq) goto loc_822D5A5C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,112(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// bl 0x8235a458
	sub_8235A458(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x822d5a60
	goto loc_822D5A60;
loc_822D5A5C:
	// li r11,0
	r11.s64 = 0;
loc_822D5A60:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// bl 0x823769e8
	sub_823769E8(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D59C0"))) PPC_WEAK_FUNC(sub_822D59C0);
PPC_FUNC_IMPL(__imp__sub_822D59C0) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,2888
	ctx.r4.s64 = r11.s64 + 2888;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r30,-8112(r11)
	PPC_STORE_U32(r11.u32 + -8112, r30.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,-9608(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9608);
	// bl 0x822b4db8
	sub_822B4DB8(ctx, base);
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
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,22044
	ctx.r4.s64 = r11.s64 + 22044;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822d5828
	sub_822D5828(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d5a5c
	if (cr0.eq) goto loc_822D5A5C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,112(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// bl 0x8235a458
	sub_8235A458(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x822d5a60
	goto loc_822D5A60;
loc_822D5A5C:
	// li r11,0
	r11.s64 = 0;
loc_822D5A60:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// bl 0x823769e8
	sub_823769E8(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D5A7C"))) PPC_WEAK_FUNC(sub_822D5A7C);
PPC_FUNC_IMPL(__imp__sub_822D5A7C) {
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

__attribute__((alias("__imp__sub_822D5AA4"))) PPC_WEAK_FUNC(sub_822D5AA4);
PPC_FUNC_IMPL(__imp__sub_822D5AA4) {
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

__attribute__((alias("__imp__sub_822D5ACC"))) PPC_WEAK_FUNC(sub_822D5ACC);
PPC_FUNC_IMPL(__imp__sub_822D5ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D5AD0"))) PPC_WEAK_FUNC(sub_822D5AD0);
PPC_FUNC_IMPL(__imp__sub_822D5AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r16,32184(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32184);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,2888
	ctx.r4.s64 = r11.s64 + 2888;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,-9608(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9608);
	// bl 0x822b4db8
	sub_822B4DB8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,22044
	ctx.r4.s64 = r11.s64 + 22044;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822d5828
	sub_822D5828(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d5b6c
	if (cr0.eq) goto loc_822D5B6C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,112(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// bl 0x8235a458
	sub_8235A458(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x822d5b70
	goto loc_822D5B70;
loc_822D5B6C:
	// li r30,0
	r30.s64 = 0;
loc_822D5B70:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,15600
	ctx.r3.s64 = r11.s64 + 15600;
	// bl 0x8235a0b8
	sub_8235A0B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359808
	sub_82359808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,60(r29)
	PPC_STORE_U32(r29.u32 + 60, r11.u32);
	// bl 0x82359848
	sub_82359848(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r3,64(r29)
	PPC_STORE_U32(r29.u32 + 64, ctx.r3.u32);
	// beq cr6,0x822d5bbc
	if (cr6.eq) goto loc_822D5BBC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822D5BBC:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D5AD8"))) PPC_WEAK_FUNC(sub_822D5AD8);
PPC_FUNC_IMPL(__imp__sub_822D5AD8) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,2888
	ctx.r4.s64 = r11.s64 + 2888;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,-9608(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9608);
	// bl 0x822b4db8
	sub_822B4DB8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,22044
	ctx.r4.s64 = r11.s64 + 22044;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822d5828
	sub_822D5828(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d5b6c
	if (cr0.eq) goto loc_822D5B6C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,112(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// bl 0x8235a458
	sub_8235A458(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x822d5b70
	goto loc_822D5B70;
loc_822D5B6C:
	// li r30,0
	r30.s64 = 0;
loc_822D5B70:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,15600
	ctx.r3.s64 = r11.s64 + 15600;
	// bl 0x8235a0b8
	sub_8235A0B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359808
	sub_82359808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,60(r29)
	PPC_STORE_U32(r29.u32 + 60, r11.u32);
	// bl 0x82359848
	sub_82359848(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r3,64(r29)
	PPC_STORE_U32(r29.u32 + 64, ctx.r3.u32);
	// beq cr6,0x822d5bbc
	if (cr6.eq) goto loc_822D5BBC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822D5BBC:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D5BCC"))) PPC_WEAK_FUNC(sub_822D5BCC);
PPC_FUNC_IMPL(__imp__sub_822D5BCC) {
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

__attribute__((alias("__imp__sub_822D5BF4"))) PPC_WEAK_FUNC(sub_822D5BF4);
PPC_FUNC_IMPL(__imp__sub_822D5BF4) {
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

__attribute__((alias("__imp__sub_822D5C1C"))) PPC_WEAK_FUNC(sub_822D5C1C);
PPC_FUNC_IMPL(__imp__sub_822D5C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D5C20"))) PPC_WEAK_FUNC(sub_822D5C20);
PPC_FUNC_IMPL(__imp__sub_822D5C20) {
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
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d5ca0
	if (cr0.eq) goto loc_822D5CA0;
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
	// beq 0x822d5ca0
	if (cr0.eq) goto loc_822D5CA0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x82359808
	sub_82359808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// bl 0x82359848
	sub_82359848(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r3,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r3.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822d5c98
	if (cr0.eq) goto loc_822D5C98;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822D5C98:
	// li r11,0
	r11.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
loc_822D5CA0:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
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

__attribute__((alias("__imp__sub_822D5CC4"))) PPC_WEAK_FUNC(sub_822D5CC4);
PPC_FUNC_IMPL(__imp__sub_822D5CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D5CC8"))) PPC_WEAK_FUNC(sub_822D5CC8);
PPC_FUNC_IMPL(__imp__sub_822D5CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D5CDC"))) PPC_WEAK_FUNC(sub_822D5CDC);
PPC_FUNC_IMPL(__imp__sub_822D5CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D5CE0"))) PPC_WEAK_FUNC(sub_822D5CE0);
PPC_FUNC_IMPL(__imp__sub_822D5CE0) {
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
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d5d18
	if (cr0.eq) goto loc_822D5D18;
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
loc_822D5D18:
	// li r30,0
	r30.s64 = 0;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// beq 0x822d5d34
	if (cr0.eq) goto loc_822D5D34;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
loc_822D5D34:
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
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

__attribute__((alias("__imp__sub_822D5D50"))) PPC_WEAK_FUNC(sub_822D5D50);
PPC_FUNC_IMPL(__imp__sub_822D5D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x82376140
	sub_82376140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D5D60"))) PPC_WEAK_FUNC(sub_822D5D60);
PPC_FUNC_IMPL(__imp__sub_822D5D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x822d5988
	sub_822D5988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D5D6C"))) PPC_WEAK_FUNC(sub_822D5D6C);
PPC_FUNC_IMPL(__imp__sub_822D5D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D5D70"))) PPC_WEAK_FUNC(sub_822D5D70);
PPC_FUNC_IMPL(__imp__sub_822D5D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x82376110
	sub_82376110(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D5D80"))) PPC_WEAK_FUNC(sub_822D5D80);
PPC_FUNC_IMPL(__imp__sub_822D5D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// addi r4,r4,-12
	ctx.r4.s64 = ctx.r4.s64 + -12;
	// b 0x82377300
	sub_82377300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D5D90"))) PPC_WEAK_FUNC(sub_822D5D90);
PPC_FUNC_IMPL(__imp__sub_822D5D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x822d5f68
	sub_822D5F68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D5D9C"))) PPC_WEAK_FUNC(sub_822D5D9C);
PPC_FUNC_IMPL(__imp__sub_822D5D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D5DA0"))) PPC_WEAK_FUNC(sub_822D5DA0);
PPC_FUNC_IMPL(__imp__sub_822D5DA0) {
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
	// lwz r16,32272(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32272);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32127
	r27.s64 = -2105475072;
	// lwz r11,-8104(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8104);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822d5e24
	if (!cr0.eq) goto loc_822D5E24;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8104(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8104, r11.u32);
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
	// bl 0x822b2f00
	sub_822B2F00(ctx, base);
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
	// stw r3,-8108(r27)
	PPC_STORE_U32(r27.u32 + -8108, ctx.r3.u32);
	// b 0x822d5e28
	goto loc_822D5E28;
loc_822D5E24:
	// lwz r3,-8108(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -8108);
loc_822D5E28:
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
	// beq 0x822d5e64
	if (cr0.eq) goto loc_822D5E64;
	// lwz r11,-68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -68);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-68
	ctx.r3.s64 = r11.s64 + -68;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x822d5ee0
	goto loc_822D5EE0;
loc_822D5E64:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x822d5ec4
	if (!cr0.eq) goto loc_822D5EC4;
	// addic. r11,r30,-72
	xer.ca = r30.u32 > 71;
	r11.s64 = r30.s64 + -72;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d5e88
	if (!cr0.eq) goto loc_822D5E88;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d5e98
	goto loc_822D5E98;
loc_822D5E88:
	// lwz r11,-68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -68);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-68
	ctx.r3.s64 = r11.s64 + -68;
loc_822D5E98:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -68);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-68
	ctx.r4.s64 = r11.s64 + -68;
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
loc_822D5EC4:
	// lwz r11,-68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -68);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-68
	ctx.r3.s64 = r11.s64 + -68;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_822D5EE0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822D5DA8"))) PPC_WEAK_FUNC(sub_822D5DA8);
PPC_FUNC_IMPL(__imp__sub_822D5DA8) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32127
	r27.s64 = -2105475072;
	// lwz r11,-8104(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8104);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x822d5e24
	if (!cr0.eq) goto loc_822D5E24;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8104(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8104, r11.u32);
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
	// bl 0x822b2f00
	sub_822B2F00(ctx, base);
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
	// stw r3,-8108(r27)
	PPC_STORE_U32(r27.u32 + -8108, ctx.r3.u32);
	// b 0x822d5e28
	goto loc_822D5E28;
loc_822D5E24:
	// lwz r3,-8108(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -8108);
loc_822D5E28:
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
	// beq 0x822d5e64
	if (cr0.eq) goto loc_822D5E64;
	// lwz r11,-68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -68);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-68
	ctx.r3.s64 = r11.s64 + -68;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x822d5ee0
	goto loc_822D5EE0;
loc_822D5E64:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x822d5ec4
	if (!cr0.eq) goto loc_822D5EC4;
	// addic. r11,r30,-72
	xer.ca = r30.u32 > 71;
	r11.s64 = r30.s64 + -72;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d5e88
	if (!cr0.eq) goto loc_822D5E88;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d5e98
	goto loc_822D5E98;
loc_822D5E88:
	// lwz r11,-68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -68);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-68
	ctx.r3.s64 = r11.s64 + -68;
loc_822D5E98:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -68);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-68
	ctx.r4.s64 = r11.s64 + -68;
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
loc_822D5EC4:
	// lwz r11,-68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -68);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-68
	ctx.r3.s64 = r11.s64 + -68;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_822D5EE0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822D5EEC"))) PPC_WEAK_FUNC(sub_822D5EEC);
PPC_FUNC_IMPL(__imp__sub_822D5EEC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8104
	r11.s64 = r11.s64 + -8104;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8104
	ctx.r10.s64 = ctx.r10.s64 + -8104;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D5F14"))) PPC_WEAK_FUNC(sub_822D5F14);
PPC_FUNC_IMPL(__imp__sub_822D5F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D5F18"))) PPC_WEAK_FUNC(sub_822D5F18);
PPC_FUNC_IMPL(__imp__sub_822D5F18) {
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
	// bl 0x822d5ce0
	sub_822D5CE0(ctx, base);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-8112(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8112, r11.u32);
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

__attribute__((alias("__imp__sub_822D5F58"))) PPC_WEAK_FUNC(sub_822D5F58);
PPC_FUNC_IMPL(__imp__sub_822D5F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x822d5da8
	sub_822D5DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D5F64"))) PPC_WEAK_FUNC(sub_822D5F64);
PPC_FUNC_IMPL(__imp__sub_822D5F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D5F68"))) PPC_WEAK_FUNC(sub_822D5F68);
PPC_FUNC_IMPL(__imp__sub_822D5F68) {
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
	// addi r31,r3,-72
	r31.s64 = ctx.r3.s64 + -72;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x82376478
	sub_82376478(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d5fa4
	if (cr0.eq) goto loc_822D5FA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822D5FA4:
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

__attribute__((alias("__imp__sub_822D5FC0"))) PPC_WEAK_FUNC(sub_822D5FC0);
PPC_FUNC_IMPL(__imp__sub_822D5FC0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,32440
	ctx.r4.s64 = r11.s64 + 32440;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
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
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r4,r11,32428
	ctx.r4.s64 = r11.s64 + 32428;
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
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// addi r4,r11,32416
	ctx.r4.s64 = r11.s64 + 32416;
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
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// addi r4,r11,32404
	ctx.r4.s64 = r11.s64 + 32404;
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
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r4,r11,32392
	ctx.r4.s64 = r11.s64 + 32392;
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
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// addi r4,r11,14956
	ctx.r4.s64 = r11.s64 + 14956;
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,32380
	ctx.r4.s64 = r11.s64 + 32380;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
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
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// addi r4,r11,32368
	ctx.r4.s64 = r11.s64 + 32368;
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
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,32352
	ctx.r4.s64 = r11.s64 + 32352;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,17324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f31.f64 = double(temp.f32);
	// fmuls f0,f1,f31
	f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
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
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,32336
	ctx.r4.s64 = r11.s64 + 32336;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-26880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -26880);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
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
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D6250"))) PPC_WEAK_FUNC(sub_822D6250);
PPC_FUNC_IMPL(__imp__sub_822D6250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-8100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -8100);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D625C"))) PPC_WEAK_FUNC(sub_822D625C);
PPC_FUNC_IMPL(__imp__sub_822D625C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D6260"))) PPC_WEAK_FUNC(sub_822D6260);
PPC_FUNC_IMPL(__imp__sub_822D6260) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	// lwa r11,16(r3)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 16));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x822d6284
	if (cr6.gt) goto loc_822D6284;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_822D6284:
	// lwa r11,12(r3)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 12));
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D62AC"))) PPC_WEAK_FUNC(sub_822D62AC);
PPC_FUNC_IMPL(__imp__sub_822D62AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D62B0"))) PPC_WEAK_FUNC(sub_822D62B0);
PPC_FUNC_IMPL(__imp__sub_822D62B0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwa r10,4(r3)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 4));
	// extsw r11,r4
	r11.s64 = ctx.r4.s32;
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// frsp f12,f0
	ctx.f12.f64 = double(float(f0.f64));
	// lfs f0,-4904(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4904);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfd f13,-8(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f13,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// lfs f13,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// ble cr6,0x822d630c
	if (!cr6.gt) goto loc_822D630C;
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// b 0x822d6310
	goto loc_822D6310;
loc_822D630C:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
loc_822D6310:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D6320"))) PPC_WEAK_FUNC(sub_822D6320);
PPC_FUNC_IMPL(__imp__sub_822D6320) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-17296
	ctx.r4.s64 = r11.s64 + -17296;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
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
	// bl 0x82319448
	sub_82319448(ctx, base);
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

__attribute__((alias("__imp__sub_822D6394"))) PPC_WEAK_FUNC(sub_822D6394);
PPC_FUNC_IMPL(__imp__sub_822D6394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D6398"))) PPC_WEAK_FUNC(sub_822D6398);
PPC_FUNC_IMPL(__imp__sub_822D6398) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,32492
	ctx.r4.s64 = r11.s64 + 32492;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822d6320
	sub_822D6320(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_822D640C"))) PPC_WEAK_FUNC(sub_822D640C);
PPC_FUNC_IMPL(__imp__sub_822D640C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D6410"))) PPC_WEAK_FUNC(sub_822D6410);
PPC_FUNC_IMPL(__imp__sub_822D6410) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// addi r31,r11,-1
	r31.s64 = r11.s64 + -1;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// blt cr6,0x822d6490
	if (cr6.lt) goto loc_822D6490;
	// extsw r11,r5
	r11.s64 = ctx.r5.s32;
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// rlwinm r30,r31,3,0,28
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f31,f0
	f31.f64 = double(float(f0.f64));
	// frsp f30,f13
	f30.f64 = double(float(ctx.f13.f64));
loc_822D6464:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f30.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x822d64a4
	if (!cr6.lt) goto loc_822D64A4;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// bge cr6,0x822d6464
	if (!cr6.lt) goto loc_822D6464;
loc_822D6490:
	// li r3,3
	ctx.r3.s64 = 3;
loc_822D6494:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
loc_822D64A4:
	// addi r3,r31,3
	ctx.r3.s64 = r31.s64 + 3;
	// b 0x822d6494
	goto loc_822D6494;
}

__attribute__((alias("__imp__sub_822D64AC"))) PPC_WEAK_FUNC(sub_822D64AC);
PPC_FUNC_IMPL(__imp__sub_822D64AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D64B0"))) PPC_WEAK_FUNC(sub_822D64B0);
PPC_FUNC_IMPL(__imp__sub_822D64B0) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-416
	ctx.r4.s64 = r11.s64 + -416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r5,r10,32508
	ctx.r5.s64 = ctx.r10.s64 + 32508;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319590
	sub_82319590(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r11,r29,-3
	r11.s64 = r29.s64 + -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D6528"))) PPC_WEAK_FUNC(sub_822D6528);
PPC_FUNC_IMPL(__imp__sub_822D6528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r11,-416
	ctx.r4.s64 = r11.s64 + -416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r5,r10,26320
	ctx.r5.s64 = ctx.r10.s64 + 26320;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319590
	sub_82319590(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82319448
	sub_82319448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(r31.s32, 3, xer);
	// bne cr6,0x822d658c
	if (!cr6.eq) goto loc_822D658C;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x822d65cc
	goto loc_822D65CC;
loc_822D658C:
	// addi r11,r31,-3
	r11.s64 = r31.s64 + -3;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// extsw r11,r28
	r11.s64 = r28.s32;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
loc_822D65CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822D65D4"))) PPC_WEAK_FUNC(sub_822D65D4);
PPC_FUNC_IMPL(__imp__sub_822D65D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D65D8"))) PPC_WEAK_FUNC(sub_822D65D8);
PPC_FUNC_IMPL(__imp__sub_822D65D8) {
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
	// beq 0x822d6618
	if (cr0.eq) goto loc_822D6618;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,24404
	ctx.r3.s64 = r11.s64 + 24404;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822d6620
	goto loc_822D6620;
loc_822D6618:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_822D6620:
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

__attribute__((alias("__imp__sub_822D663C"))) PPC_WEAK_FUNC(sub_822D663C);
PPC_FUNC_IMPL(__imp__sub_822D663C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D6640"))) PPC_WEAK_FUNC(sub_822D6640);
PPC_FUNC_IMPL(__imp__sub_822D6640) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-416
	ctx.r4.s64 = r11.s64 + -416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r5,r10,26320
	ctx.r5.s64 = ctx.r10.s64 + 26320;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319590
	sub_82319590(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82319448
	sub_82319448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d6410
	sub_822D6410(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822D66AC"))) PPC_WEAK_FUNC(sub_822D66AC);
PPC_FUNC_IMPL(__imp__sub_822D66AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D66B0"))) PPC_WEAK_FUNC(sub_822D66B0);
PPC_FUNC_IMPL(__imp__sub_822D66B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi. r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
loc_822D66D4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r4,r8
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r8,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x822d66d4
	if (cr6.lt) goto loc_822D66D4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D6708"))) PPC_WEAK_FUNC(sub_822D6708);
PPC_FUNC_IMPL(__imp__sub_822D6708) {
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
	// lwz r16,32572(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32572);
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
	// blt cr6,0x822d6764
	if (cr6.lt) goto loc_822D6764;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_822D6764:
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
	// bl 0x822d65d8
	sub_822D65D8(ctx, base);
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
	// bne cr6,0x822d67c8
	if (!cr6.eq) goto loc_822D67C8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x822d67c0
	if (cr6.eq) goto loc_822D67C0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_822D67C0:
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// b 0x822d67e0
	goto loc_822D67E0;
loc_822D67C8:
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
loc_822D67E0:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d6804
	if (!cr0.eq) goto loc_822D6804;
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
loc_822D6804:
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
	// b 0x822d684c
	goto loc_822D684C;
loc_822D682C:
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
loc_822D684C:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d682c
	if (!cr0.eq) goto loc_822D682C;
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

__attribute__((alias("__imp__sub_822D6710"))) PPC_WEAK_FUNC(sub_822D6710);
PPC_FUNC_IMPL(__imp__sub_822D6710) {
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
	// blt cr6,0x822d6764
	if (cr6.lt) goto loc_822D6764;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_822D6764:
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
	// bl 0x822d65d8
	sub_822D65D8(ctx, base);
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
	// bne cr6,0x822d67c8
	if (!cr6.eq) goto loc_822D67C8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x822d67c0
	if (cr6.eq) goto loc_822D67C0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_822D67C0:
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// b 0x822d67e0
	goto loc_822D67E0;
loc_822D67C8:
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
loc_822D67E0:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d6804
	if (!cr0.eq) goto loc_822D6804;
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
loc_822D6804:
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
	// b 0x822d684c
	goto loc_822D684C;
loc_822D682C:
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
loc_822D684C:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d682c
	if (!cr0.eq) goto loc_822D682C;
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

__attribute__((alias("__imp__sub_822D688C"))) PPC_WEAK_FUNC(sub_822D688C);
PPC_FUNC_IMPL(__imp__sub_822D688C) {
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
	// lwz r16,32572(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32572);
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
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// b 0x822d68ec
	goto loc_822D68EC;
loc_822D68E8:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_822D68EC:
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
	// bne 0x822d68e8
	if (!cr0.eq) goto loc_822D68E8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822d6920
	if (cr6.eq) goto loc_822D6920;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822D6920:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d6930
	if (cr0.eq) goto loc_822D6930;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822D6930:
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

__attribute__((alias("__imp__sub_822D6894"))) PPC_WEAK_FUNC(sub_822D6894);
PPC_FUNC_IMPL(__imp__sub_822D6894) {
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

__attribute__((alias("__imp__sub_822D68C0"))) PPC_WEAK_FUNC(sub_822D68C0);
PPC_FUNC_IMPL(__imp__sub_822D68C0) {
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
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// b 0x822d68ec
	goto loc_822D68EC;
loc_822D68E8:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_822D68EC:
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
	// bne 0x822d68e8
	if (!cr0.eq) goto loc_822D68E8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x822d6920
	if (cr6.eq) goto loc_822D6920;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822D6920:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d6930
	if (cr0.eq) goto loc_822D6930;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822D6930:
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

__attribute__((alias("__imp__sub_822D694C"))) PPC_WEAK_FUNC(sub_822D694C);
PPC_FUNC_IMPL(__imp__sub_822D694C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D6950"))) PPC_WEAK_FUNC(sub_822D6950);
PPC_FUNC_IMPL(__imp__sub_822D6950) {
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
	// beq cr6,0x822d6998
	if (cr6.eq) goto loc_822D6998;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822d6988
	if (cr0.eq) goto loc_822D6988;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_822D6988:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x822d69ac
	goto loc_822D69AC;
loc_822D6998:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x822d6710
	sub_822D6710(ctx, base);
loc_822D69AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D69BC"))) PPC_WEAK_FUNC(sub_822D69BC);
PPC_FUNC_IMPL(__imp__sub_822D69BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D69C0"))) PPC_WEAK_FUNC(sub_822D69C0);
PPC_FUNC_IMPL(__imp__sub_822D69C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r16,32696(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32696);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// addi r29,r30,20
	r29.s64 = r30.s64 + 20;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// stw r28,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r28.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-424
	ctx.r4.s64 = r11.s64 + -424;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,6168
	ctx.r4.s64 = r11.s64 + 6168;
	// stw r10,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r26,0(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x822d5fc0
	sub_822D5FC0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r27,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r27.u32);
	// addi r4,r11,9280
	ctx.r4.s64 = r11.s64 + 9280;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,32676
	ctx.r4.s64 = r11.s64 + 32676;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,32668
	ctx.r4.s64 = r11.s64 + 32668;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,32656
	ctx.r4.s64 = r11.s64 + 32656;
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r28,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r28.u32);
	// addi r4,r11,32464
	ctx.r4.s64 = r11.s64 + 32464;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,32472
	ctx.r4.s64 = r11.s64 + 32472;
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
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
	// li r27,1
	r27.s64 = 1;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// stw r27,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r27.u32);
	// bl 0x822d6950
	sub_822D6950(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,32648
	ctx.r4.s64 = r11.s64 + 32648;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x822d6c50
	if (!cr6.gt) goto loc_822D6C50;
	// li r25,8
	r25.s64 = 8;
loc_822D6BF0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d6950
	sub_822D6950(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x822d6bf0
	if (cr6.lt) goto loc_822D6BF0;
loc_822D6C50:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_822D69C8"))) PPC_WEAK_FUNC(sub_822D69C8);
PPC_FUNC_IMPL(__imp__sub_822D69C8) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// addi r29,r30,20
	r29.s64 = r30.s64 + 20;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// stw r28,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r28.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-424
	ctx.r4.s64 = r11.s64 + -424;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,6168
	ctx.r4.s64 = r11.s64 + 6168;
	// stw r10,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r26,0(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x822d5fc0
	sub_822D5FC0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r27,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r27.u32);
	// addi r4,r11,9280
	ctx.r4.s64 = r11.s64 + 9280;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,32676
	ctx.r4.s64 = r11.s64 + 32676;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,32668
	ctx.r4.s64 = r11.s64 + 32668;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,32656
	ctx.r4.s64 = r11.s64 + 32656;
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r28,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r28.u32);
	// addi r4,r11,32464
	ctx.r4.s64 = r11.s64 + 32464;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,32472
	ctx.r4.s64 = r11.s64 + 32472;
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
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
	// li r27,1
	r27.s64 = 1;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// stw r27,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r27.u32);
	// bl 0x822d6950
	sub_822D6950(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,32648
	ctx.r4.s64 = r11.s64 + 32648;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x822d6c50
	if (!cr6.gt) goto loc_822D6C50;
	// li r25,8
	r25.s64 = 8;
loc_822D6BF0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d6950
	sub_822D6950(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x822d6bf0
	if (cr6.lt) goto loc_822D6BF0;
loc_822D6C50:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_822D6C5C"))) PPC_WEAK_FUNC(sub_822D6C5C);
PPC_FUNC_IMPL(__imp__sub_822D6C5C) {
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
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
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

__attribute__((alias("__imp__sub_822D6C88"))) PPC_WEAK_FUNC(sub_822D6C88);
PPC_FUNC_IMPL(__imp__sub_822D6C88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,32752(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32752);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32127
	r29.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-8100(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -8100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x822d6cbc
	if (cr6.eq) goto loc_822D6CBC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822d68c0
	sub_822D68C0(ctx, base);
loc_822D6CBC:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d6cdc
	if (cr0.eq) goto loc_822D6CDC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822d69c8
	sub_822D69C8(ctx, base);
	// b 0x822d6ce0
	goto loc_822D6CE0;
loc_822D6CDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D6CE0:
	// stw r3,-8100(r29)
	PPC_STORE_U32(r29.u32 + -8100, ctx.r3.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D6C90"))) PPC_WEAK_FUNC(sub_822D6C90);
PPC_FUNC_IMPL(__imp__sub_822D6C90) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32127
	r29.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-8100(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -8100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x822d6cbc
	if (cr6.eq) goto loc_822D6CBC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822d68c0
	sub_822D68C0(ctx, base);
loc_822D6CBC:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d6cdc
	if (cr0.eq) goto loc_822D6CDC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822d69c8
	sub_822D69C8(ctx, base);
	// b 0x822d6ce0
	goto loc_822D6CE0;
loc_822D6CDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D6CE0:
	// stw r3,-8100(r29)
	PPC_STORE_U32(r29.u32 + -8100, ctx.r3.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D6CEC"))) PPC_WEAK_FUNC(sub_822D6CEC);
PPC_FUNC_IMPL(__imp__sub_822D6CEC) {
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

__attribute__((alias("__imp__sub_822D6D14"))) PPC_WEAK_FUNC(sub_822D6D14);
PPC_FUNC_IMPL(__imp__sub_822D6D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D6D18"))) PPC_WEAK_FUNC(sub_822D6D18);
PPC_FUNC_IMPL(__imp__sub_822D6D18) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x822d6d60
	if (cr0.eq) goto loc_822D6D60;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// b 0x822d6d64
	goto loc_822D6D64;
loc_822D6D60:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822D6D64:
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

__attribute__((alias("__imp__sub_822D6D78"))) PPC_WEAK_FUNC(sub_822D6D78);
PPC_FUNC_IMPL(__imp__sub_822D6D78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,-1
	r11.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r11.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_822D6DA4:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// cmpld cr6,r4,r8
	cr6.compare<uint64_t>(ctx.r4.u64, ctx.r8.u64, xer);
	// beq cr6,0x822d6dc4
	if (cr6.eq) goto loc_822D6DC4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x822d6da4
	if (cr6.lt) goto loc_822D6DA4;
	// blr 
	return;
loc_822D6DC4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// clrlwi. r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// beq 0x822d6ddc
	if (cr0.eq) goto loc_822D6DDC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x822d6de0
	goto loc_822D6DE0;
loc_822D6DDC:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_822D6DE0:
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// ld r11,16(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// sradi r11,r11,3
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0x7) != 0);
	r11.s64 = r11.s64 >> 3;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D6DF4"))) PPC_WEAK_FUNC(sub_822D6DF4);
PPC_FUNC_IMPL(__imp__sub_822D6DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D6DF8"))) PPC_WEAK_FUNC(sub_822D6DF8);
PPC_FUNC_IMPL(__imp__sub_822D6DF8) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x822d6e44
	if (cr6.eq) goto loc_822D6E44;
	// lbz r11,8(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822d6e34
	if (cr0.eq) goto loc_822D6E34;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8267ac00
	sub_8267AC00(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
loc_822D6E34:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x823b54e8
	sub_823B54E8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_822D6E44:
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

__attribute__((alias("__imp__sub_822D6E58"))) PPC_WEAK_FUNC(sub_822D6E58);
PPC_FUNC_IMPL(__imp__sub_822D6E58) {
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
	// lbz r11,48(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 48);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822d6e80
	if (cr0.eq) goto loc_822D6E80;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x823b66f8
	sub_823B66F8(ctx, base);
loc_822D6E80:
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
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

__attribute__((alias("__imp__sub_822D6EAC"))) PPC_WEAK_FUNC(sub_822D6EAC);
PPC_FUNC_IMPL(__imp__sub_822D6EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D6EB0"))) PPC_WEAK_FUNC(sub_822D6EB0);
PPC_FUNC_IMPL(__imp__sub_822D6EB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D6EB8"))) PPC_WEAK_FUNC(sub_822D6EB8);
PPC_FUNC_IMPL(__imp__sub_822D6EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D6EC4"))) PPC_WEAK_FUNC(sub_822D6EC4);
PPC_FUNC_IMPL(__imp__sub_822D6EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D6EC8"))) PPC_WEAK_FUNC(sub_822D6EC8);
PPC_FUNC_IMPL(__imp__sub_822D6EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,92(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D6ED8"))) PPC_WEAK_FUNC(sub_822D6ED8);
PPC_FUNC_IMPL(__imp__sub_822D6ED8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,-32584(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -32584);
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
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r11,r11,-32644
	r11.s64 = r11.s64 + -32644;
	// addi r10,r10,-32708
	ctx.r10.s64 = ctx.r10.s64 + -32708;
	// addi r28,r9,-440
	r28.s64 = ctx.r9.s64 + -440;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// stw r10,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r10.u32);
	// lwz r4,18972(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,-2968(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r30,-8096(r11)
	PPC_STORE_U32(r11.u32 + -8096, r30.u32);
	// bl 0x82315150
	sub_82315150(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822D6EE0"))) PPC_WEAK_FUNC(sub_822D6EE0);
PPC_FUNC_IMPL(__imp__sub_822D6EE0) {
	PPC_FUNC_PROLOGUE();
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
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r11,r11,-32644
	r11.s64 = r11.s64 + -32644;
	// addi r10,r10,-32708
	ctx.r10.s64 = ctx.r10.s64 + -32708;
	// addi r28,r9,-440
	r28.s64 = ctx.r9.s64 + -440;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// stw r10,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r10.u32);
	// lwz r4,18972(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r5,-2968(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r30,-8096(r11)
	PPC_STORE_U32(r11.u32 + -8096, r30.u32);
	// bl 0x82315150
	sub_82315150(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822D6F98"))) PPC_WEAK_FUNC(sub_822D6F98);
PPC_FUNC_IMPL(__imp__sub_822D6F98) {
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

__attribute__((alias("__imp__sub_822D6FC0"))) PPC_WEAK_FUNC(sub_822D6FC0);
PPC_FUNC_IMPL(__imp__sub_822D6FC0) {
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

__attribute__((alias("__imp__sub_822D6FEC"))) PPC_WEAK_FUNC(sub_822D6FEC);
PPC_FUNC_IMPL(__imp__sub_822D6FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D6FF0"))) PPC_WEAK_FUNC(sub_822D6FF0);
PPC_FUNC_IMPL(__imp__sub_822D6FF0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// bl 0x822d6d18
	sub_822D6D18(ctx, base);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D702C"))) PPC_WEAK_FUNC(sub_822D702C);
PPC_FUNC_IMPL(__imp__sub_822D702C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D7030"))) PPC_WEAK_FUNC(sub_822D7030);
PPC_FUNC_IMPL(__imp__sub_822D7030) {
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
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x822d7054
	if (cr6.lt) goto loc_822D7054;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822D7054:
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

__attribute__((alias("__imp__sub_822D7068"))) PPC_WEAK_FUNC(sub_822D7068);
PPC_FUNC_IMPL(__imp__sub_822D7068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822d7088
	if (cr6.eq) goto loc_822D7088;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_822D7088:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D7090"))) PPC_WEAK_FUNC(sub_822D7090);
PPC_FUNC_IMPL(__imp__sub_822D7090) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,52(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r5,56(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x822d6d18
	sub_822D6D18(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r3,r11,18888
	ctx.r3.s64 = r11.s64 + 18888;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82272ff0
	sub_82272FF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// bl 0x823b58f0
	sub_823B58F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D70E0"))) PPC_WEAK_FUNC(sub_822D70E0);
PPC_FUNC_IMPL(__imp__sub_822D70E0) {
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
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d7114
	if (cr0.eq) goto loc_822D7114;
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
loc_822D7114:
	// li r11,0
	r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
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

__attribute__((alias("__imp__sub_822D7130"))) PPC_WEAK_FUNC(sub_822D7130);
PPC_FUNC_IMPL(__imp__sub_822D7130) {
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
	// beq 0x822d7170
	if (cr0.eq) goto loc_822D7170;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,24480
	ctx.r3.s64 = r11.s64 + 24480;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822d7178
	goto loc_822D7178;
loc_822D7170:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_822D7178:
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

__attribute__((alias("__imp__sub_822D7194"))) PPC_WEAK_FUNC(sub_822D7194);
PPC_FUNC_IMPL(__imp__sub_822D7194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D7198"))) PPC_WEAK_FUNC(sub_822D7198);
PPC_FUNC_IMPL(__imp__sub_822D7198) {
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
	// beq 0x822d71d8
	if (cr0.eq) goto loc_822D71D8;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,24548
	ctx.r3.s64 = r11.s64 + 24548;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822d71e0
	goto loc_822D71E0;
loc_822D71D8:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_822D71E0:
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

__attribute__((alias("__imp__sub_822D71FC"))) PPC_WEAK_FUNC(sub_822D71FC);
PPC_FUNC_IMPL(__imp__sub_822D71FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D7200"))) PPC_WEAK_FUNC(sub_822D7200);
PPC_FUNC_IMPL(__imp__sub_822D7200) {
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
	// beq 0x822d7240
	if (cr0.eq) goto loc_822D7240;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,24564
	ctx.r3.s64 = r11.s64 + 24564;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822d7248
	goto loc_822D7248;
loc_822D7240:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_822D7248:
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

__attribute__((alias("__imp__sub_822D7264"))) PPC_WEAK_FUNC(sub_822D7264);
PPC_FUNC_IMPL(__imp__sub_822D7264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D7268"))) PPC_WEAK_FUNC(sub_822D7268);
PPC_FUNC_IMPL(__imp__sub_822D7268) {
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
	// beq 0x822d72a8
	if (cr0.eq) goto loc_822D72A8;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,19008
	ctx.r3.s64 = r11.s64 + 19008;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822d72b0
	goto loc_822D72B0;
loc_822D72A8:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_822D72B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_822D72CC"))) PPC_WEAK_FUNC(sub_822D72CC);
PPC_FUNC_IMPL(__imp__sub_822D72CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D72D0"))) PPC_WEAK_FUNC(sub_822D72D0);
PPC_FUNC_IMPL(__imp__sub_822D72D0) {
	PPC_FUNC_PROLOGUE();
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
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// addi r31,r3,-48
	r31.s64 = ctx.r3.s64 + -48;
	// lwz r30,152(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// b 0x822d7318
	goto loc_822D7318;
loc_822D7308:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r31,-48
	r31.s64 = r31.s64 + -48;
loc_822D7318:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,48
	ctx.r5.s64 = 48;
	// subfc r11,r11,r30
	xer.ca = r30.u32 >= r11.u32;
	r11.s64 = r30.s64 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d7308
	if (!cr0.eq) goto loc_822D7308;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_822D7350"))) PPC_WEAK_FUNC(sub_822D7350);
PPC_FUNC_IMPL(__imp__sub_822D7350) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// b 0x822d73bc
	goto loc_822D73BC;
loc_822D7384:
	// mulli r10,r31,48
	ctx.r10.s64 = r31.s64 * 48;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + r30.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822d73cc
	if (cr0.eq) goto loc_822D73CC;
	// mulli r11,r11,48
	r11.s64 = r11.s64 * 48;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r11,r31
	r11.u64 = r31.u64;
	// addi r10,r31,-1
	ctx.r10.s64 = r31.s64 + -1;
loc_822D73BC:
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r31.s64 = temp.s64;
	// bgt cr6,0x822d7384
	if (cr6.gt) goto loc_822D7384;
loc_822D73CC:
	// mulli r11,r11,48
	r11.s64 = r11.s64 * 48;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D73E8"))) PPC_WEAK_FUNC(sub_822D73E8);
PPC_FUNC_IMPL(__imp__sub_822D73E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x822d8068
	sub_822D8068(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D73F0"))) PPC_WEAK_FUNC(sub_822D73F0);
PPC_FUNC_IMPL(__imp__sub_822D73F0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r4,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r4.u32);
	// li r3,1798
	ctx.r3.s64 = 1798;
	// bl 0x8267aa70
	sub_8267AA70(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x822d7440
	if (cr0.eq) goto loc_822D7440;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d6df8
	sub_822D6DF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x822d749c
	goto loc_822D749C;
loc_822D7440:
	// li r11,1
	r11.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x8267acb0
	sub_8267ACB0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x822d7480
	if (cr0.eq) goto loc_822D7480;
loc_822D7470:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d6df8
	sub_822D6DF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x822d749c
	goto loc_822D749C;
loc_822D7480:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8267ad58
	sub_8267AD58(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x822d7470
	if (!cr0.eq) goto loc_822D7470;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D749C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D74A4"))) PPC_WEAK_FUNC(sub_822D74A4);
PPC_FUNC_IMPL(__imp__sub_822D74A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D74A8"))) PPC_WEAK_FUNC(sub_822D74A8);
PPC_FUNC_IMPL(__imp__sub_822D74A8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8267adf0
	sub_8267ADF0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d6df8
	sub_822D6DF8(ctx, base);
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

__attribute__((alias("__imp__sub_822D74F4"))) PPC_WEAK_FUNC(sub_822D74F4);
PPC_FUNC_IMPL(__imp__sub_822D74F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D74F8"))) PPC_WEAK_FUNC(sub_822D74F8);
PPC_FUNC_IMPL(__imp__sub_822D74F8) {
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
	// lwz r16,-32504(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -32504);
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// addi r11,r11,-32644
	r11.s64 = r11.s64 + -32644;
	// addi r10,r10,-32708
	ctx.r10.s64 = ctx.r10.s64 + -32708;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x822d70e0
	sub_822D70E0(ctx, base);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r11,0
	r11.s64 = 0;
	// stw r11,-8096(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8096, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D7500"))) PPC_WEAK_FUNC(sub_822D7500);
PPC_FUNC_IMPL(__imp__sub_822D7500) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// addi r11,r11,-32644
	r11.s64 = r11.s64 + -32644;
	// addi r10,r10,-32708
	ctx.r10.s64 = ctx.r10.s64 + -32708;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x822d70e0
	sub_822D70E0(ctx, base);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r11,0
	r11.s64 = 0;
	// stw r11,-8096(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8096, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-14332
	r11.s64 = r11.s64 + -14332;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D7560"))) PPC_WEAK_FUNC(sub_822D7560);
PPC_FUNC_IMPL(__imp__sub_822D7560) {
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

__attribute__((alias("__imp__sub_822D7588"))) PPC_WEAK_FUNC(sub_822D7588);
PPC_FUNC_IMPL(__imp__sub_822D7588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822d75b4
	if (cr6.eq) goto loc_822D75B4;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x822d75bc
	goto loc_822D75BC;
loc_822D75B4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_822D75BC:
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

__attribute__((alias("__imp__sub_822D75D4"))) PPC_WEAK_FUNC(sub_822D75D4);
PPC_FUNC_IMPL(__imp__sub_822D75D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D75D8"))) PPC_WEAK_FUNC(sub_822D75D8);
PPC_FUNC_IMPL(__imp__sub_822D75D8) {
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
	// lwz r16,-32432(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -32432);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822d7640
	if (cr6.eq) goto loc_822D7640;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq 0x822d7640
	if (cr0.eq) goto loc_822D7640;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x822d7640
	if (cr6.lt) goto loc_822D7640;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822D7640:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822d77b4
	if (cr6.eq) goto loc_822D77B4;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x822d77b4
	if (cr6.lt) goto loc_822D77B4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bge cr6,0x822d77b4
	if (!cr6.lt) goto loc_822D77B4;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x822d76a8
	if (!cr6.eq) goto loc_822D76A8;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,14924
	r11.s64 = r11.s64 + 14924;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_822D76A0:
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// b 0x822d77bc
	goto loc_822D77BC;
loc_822D76A8:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// bne cr6,0x822d76c0
	if (!cr6.eq) goto loc_822D76C0;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x822d77bc
	goto loc_822D77BC;
loc_822D76C0:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// sradi r11,r3,2
	xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0x3) != 0);
	r11.s64 = ctx.r3.s64 >> 2;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// sradi r11,r11,1
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0x1) != 0);
	r11.s64 = r11.s64 >> 1;
	// clrlwi r29,r3,30
	r29.u64 = ctx.r3.u32 & 0x3;
	// extsw r4,r11
	ctx.r4.s64 = r11.s32;
	// bne cr6,0x822d76f4
	if (!cr6.eq) goto loc_822D76F4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,14924
	ctx.r3.s64 = r11.s64 + 14924;
	// b 0x822d76a0
	goto loc_822D76A0;
loc_822D76F4:
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(r28.s32, 3, xer);
	// bne cr6,0x822d779c
	if (!cr6.eq) goto loc_822D779C;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r30,r30,52
	r30.s64 = r30.s64 + 52;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24440(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24440);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d77b4
	if (!cr0.eq) goto loc_822D77B4;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24444(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24444);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d77b4
	if (!cr0.eq) goto loc_822D77B4;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-32448
	ctx.r4.s64 = r11.s64 + -32448;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r10,-1332
	ctx.r3.s64 = ctx.r10.s64 + -1332;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82356db0
	sub_82356DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x823538b8
	sub_823538B8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-24616
	ctx.r3.s64 = r11.s64 + -24616;
	// bl 0x822776c0
	sub_822776C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x822d77bc
	goto loc_822D77BC;
loc_822D779C:
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(r28.s32, 4, xer);
	// bne cr6,0x822d77b4
	if (!cr6.eq) goto loc_822D77B4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// addi r3,r11,14924
	ctx.r3.s64 = r11.s64 + 14924;
	// b 0x822d76a0
	goto loc_822D76A0;
loc_822D77B4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9120
	ctx.r3.s64 = r11.s64 + 9120;
loc_822D77BC:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822D75E0"))) PPC_WEAK_FUNC(sub_822D75E0);
PPC_FUNC_IMPL(__imp__sub_822D75E0) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822d7640
	if (cr6.eq) goto loc_822D7640;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq 0x822d7640
	if (cr0.eq) goto loc_822D7640;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x822d7640
	if (cr6.lt) goto loc_822D7640;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822D7640:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822d77b4
	if (cr6.eq) goto loc_822D77B4;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x822d77b4
	if (cr6.lt) goto loc_822D77B4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bge cr6,0x822d77b4
	if (!cr6.lt) goto loc_822D77B4;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x822d76a8
	if (!cr6.eq) goto loc_822D76A8;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,14924
	r11.s64 = r11.s64 + 14924;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_822D76A0:
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// b 0x822d77bc
	goto loc_822D77BC;
loc_822D76A8:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// bne cr6,0x822d76c0
	if (!cr6.eq) goto loc_822D76C0;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x822d77bc
	goto loc_822D77BC;
loc_822D76C0:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// sradi r11,r3,2
	xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0x3) != 0);
	r11.s64 = ctx.r3.s64 >> 2;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// sradi r11,r11,1
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0x1) != 0);
	r11.s64 = r11.s64 >> 1;
	// clrlwi r29,r3,30
	r29.u64 = ctx.r3.u32 & 0x3;
	// extsw r4,r11
	ctx.r4.s64 = r11.s32;
	// bne cr6,0x822d76f4
	if (!cr6.eq) goto loc_822D76F4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,14924
	ctx.r3.s64 = r11.s64 + 14924;
	// b 0x822d76a0
	goto loc_822D76A0;
loc_822D76F4:
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(r28.s32, 3, xer);
	// bne cr6,0x822d779c
	if (!cr6.eq) goto loc_822D779C;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r30,r30,52
	r30.s64 = r30.s64 + 52;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24440(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24440);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d77b4
	if (!cr0.eq) goto loc_822D77B4;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24444(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24444);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d77b4
	if (!cr0.eq) goto loc_822D77B4;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-32448
	ctx.r4.s64 = r11.s64 + -32448;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r10,-1332
	ctx.r3.s64 = ctx.r10.s64 + -1332;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82356db0
	sub_82356DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x823538b8
	sub_823538B8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-24616
	ctx.r3.s64 = r11.s64 + -24616;
	// bl 0x822776c0
	sub_822776C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x822d77bc
	goto loc_822D77BC;
loc_822D779C:
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(r28.s32, 4, xer);
	// bne cr6,0x822d77b4
	if (!cr6.eq) goto loc_822D77B4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// addi r3,r11,14924
	ctx.r3.s64 = r11.s64 + 14924;
	// b 0x822d76a0
	goto loc_822D76A0;
loc_822D77B4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9120
	ctx.r3.s64 = r11.s64 + 9120;
loc_822D77BC:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822D77C4"))) PPC_WEAK_FUNC(sub_822D77C4);
PPC_FUNC_IMPL(__imp__sub_822D77C4) {
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

__attribute__((alias("__imp__sub_822D77EC"))) PPC_WEAK_FUNC(sub_822D77EC);
PPC_FUNC_IMPL(__imp__sub_822D77EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D77F0"))) PPC_WEAK_FUNC(sub_822D77F0);
PPC_FUNC_IMPL(__imp__sub_822D77F0) {
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
	// lwz r16,-32344(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -32344);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822d790c
	if (cr6.eq) goto loc_822D790C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq 0x822d790c
	if (cr0.eq) goto loc_822D790C;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x822d790c
	if (!cr6.gt) goto loc_822D790C;
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// addi r10,r11,64
	ctx.r10.s64 = r11.s64 + 64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r28,4(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r27,8(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
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
	// beq 0x822d789c
	if (cr0.eq) goto loc_822D789C;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822D789C:
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// addi r28,r31,88
	r28.s64 = r31.s64 + 88;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d78d4
	if (cr0.eq) goto loc_822D78D4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822D78D4:
	// stw r27,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r27.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d790c
	if (cr0.eq) goto loc_822D790C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822D790C:
	// stw r29,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r29.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r29,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r29.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822D77F8"))) PPC_WEAK_FUNC(sub_822D77F8);
PPC_FUNC_IMPL(__imp__sub_822D77F8) {
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
	// li r29,0
	r29.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822d790c
	if (cr6.eq) goto loc_822D790C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq 0x822d790c
	if (cr0.eq) goto loc_822D790C;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x822d790c
	if (!cr6.gt) goto loc_822D790C;
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// addi r10,r11,64
	ctx.r10.s64 = r11.s64 + 64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r28,4(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r27,8(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
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
	// beq 0x822d789c
	if (cr0.eq) goto loc_822D789C;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822D789C:
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// addi r28,r31,88
	r28.s64 = r31.s64 + 88;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d78d4
	if (cr0.eq) goto loc_822D78D4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822D78D4:
	// stw r27,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r27.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d790c
	if (cr0.eq) goto loc_822D790C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822D790C:
	// stw r29,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r29.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r29,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r29.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822D7920"))) PPC_WEAK_FUNC(sub_822D7920);
PPC_FUNC_IMPL(__imp__sub_822D7920) {
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

__attribute__((alias("__imp__sub_822D7948"))) PPC_WEAK_FUNC(sub_822D7948);
PPC_FUNC_IMPL(__imp__sub_822D7948) {
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

__attribute__((alias("__imp__sub_822D7970"))) PPC_WEAK_FUNC(sub_822D7970);
PPC_FUNC_IMPL(__imp__sub_822D7970) {
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

__attribute__((alias("__imp__sub_822D7998"))) PPC_WEAK_FUNC(sub_822D7998);
PPC_FUNC_IMPL(__imp__sub_822D7998) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r11,48(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// beq cr6,0x822d79d8
	if (cr6.eq) goto loc_822D79D8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_822D79D8:
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

__attribute__((alias("__imp__sub_822D79FC"))) PPC_WEAK_FUNC(sub_822D79FC);
PPC_FUNC_IMPL(__imp__sub_822D79FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D7A00"))) PPC_WEAK_FUNC(sub_822D7A00);
PPC_FUNC_IMPL(__imp__sub_822D7A00) {
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
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822d7a5c
	if (cr6.eq) goto loc_822D7A5C;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x822d7a60
	goto loc_822D7A60;
loc_822D7A5C:
	// mr r31,r29
	r31.u64 = r29.u64;
loc_822D7A60:
	// cmpldi cr6,r31,0
	cr6.compare<uint64_t>(r31.u64, 0, xer);
	// beq cr6,0x822d7a7c
	if (cr6.eq) goto loc_822D7A7C;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r3,r11,18888
	ctx.r3.s64 = r11.s64 + 18888;
	// bl 0x82272ff0
	sub_82272FF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823b5548
	sub_823B5548(ctx, base);
loc_822D7A7C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D7A90"))) PPC_WEAK_FUNC(sub_822D7A90);
PPC_FUNC_IMPL(__imp__sub_822D7A90) {
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
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x822d7b30
	if (cr0.eq) goto loc_822D7B30;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x822d7b00
	if (cr6.eq) goto loc_822D7B00;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823b5738
	sub_823B5738(ctx, base);
loc_822D7B00:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x822d7b30
	if (cr6.eq) goto loc_822D7B30;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823b5738
	sub_823B5738(ctx, base);
loc_822D7B30:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D7B44"))) PPC_WEAK_FUNC(sub_822D7B44);
PPC_FUNC_IMPL(__imp__sub_822D7B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D7B48"))) PPC_WEAK_FUNC(sub_822D7B48);
PPC_FUNC_IMPL(__imp__sub_822D7B48) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,-32224(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -32224);
	// mflr r12
	// bl 0x8239bce0
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	r22.s64 = 0;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r4,r11,-440
	ctx.r4.s64 = r11.s64 + -440;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stw r22,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r22.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r24,1
	r24.s64 = 1;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x822d7c7c
	if (!cr6.gt) goto loc_822D7C7C;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r27,8
	r27.s64 = 8;
	// addi r25,r11,-32248
	r25.s64 = r11.s64 + -32248;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r26,-32127
	r26.s64 = -2105475072;
	// addi r28,r11,-8080
	r28.s64 = r11.s64 + -8080;
loc_822D7BB0:
	// lwz r11,-8084(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -8084);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822d7bd0
	if (!cr0.eq) goto loc_822D7BD0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8084(r26)
	PPC_STORE_U32(r26.u32 + -8084, r11.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822D7BD0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
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
	// bne 0x822d7c68
	if (!cr0.eq) goto loc_822D7C68;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x822d7c38
	if (cr6.eq) goto loc_822D7C38;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823b5738
	sub_823B5738(ctx, base);
loc_822D7C38:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x822d7c68
	if (cr6.eq) goto loc_822D7C68;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823b5738
	sub_823B5738(ctx, base);
loc_822D7C68:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// blt cr6,0x822d7bb0
	if (cr6.lt) goto loc_822D7BB0;
loc_822D7C7C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r22,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r22.u32);
	// stw r22,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r22.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_822D7B50"))) PPC_WEAK_FUNC(sub_822D7B50);
PPC_FUNC_IMPL(__imp__sub_822D7B50) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	r22.s64 = 0;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r4,r11,-440
	ctx.r4.s64 = r11.s64 + -440;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stw r22,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r22.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r24,1
	r24.s64 = 1;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x822d7c7c
	if (!cr6.gt) goto loc_822D7C7C;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r27,8
	r27.s64 = 8;
	// addi r25,r11,-32248
	r25.s64 = r11.s64 + -32248;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r26,-32127
	r26.s64 = -2105475072;
	// addi r28,r11,-8080
	r28.s64 = r11.s64 + -8080;
loc_822D7BB0:
	// lwz r11,-8084(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -8084);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822d7bd0
	if (!cr0.eq) goto loc_822D7BD0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-8084(r26)
	PPC_STORE_U32(r26.u32 + -8084, r11.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822D7BD0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
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
	// bne 0x822d7c68
	if (!cr0.eq) goto loc_822D7C68;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x822d7c38
	if (cr6.eq) goto loc_822D7C38;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823b5738
	sub_823B5738(ctx, base);
loc_822D7C38:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x822d7c68
	if (cr6.eq) goto loc_822D7C68;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823b5738
	sub_823B5738(ctx, base);
loc_822D7C68:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// blt cr6,0x822d7bb0
	if (cr6.lt) goto loc_822D7BB0;
loc_822D7C7C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r22,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r22.u32);
	// stw r22,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r22.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_822D7C90"))) PPC_WEAK_FUNC(sub_822D7C90);
PPC_FUNC_IMPL(__imp__sub_822D7C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-8084
	r11.s64 = r11.s64 + -8084;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-8084
	ctx.r10.s64 = ctx.r10.s64 + -8084;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D7CB8"))) PPC_WEAK_FUNC(sub_822D7CB8);
PPC_FUNC_IMPL(__imp__sub_822D7CB8) {
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
	// bl 0x822d7130
	sub_822D7130(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d7ce8
	if (cr0.eq) goto loc_822D7CE8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_822D7CE8:
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

__attribute__((alias("__imp__sub_822D7CFC"))) PPC_WEAK_FUNC(sub_822D7CFC);
PPC_FUNC_IMPL(__imp__sub_822D7CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D7D00"))) PPC_WEAK_FUNC(sub_822D7D00);
PPC_FUNC_IMPL(__imp__sub_822D7D00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subfc r9,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// beq 0x822d7d44
	if (cr0.eq) goto loc_822D7D44;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822d7d68
	if (!cr0.eq) goto loc_822D7D68;
	// subfc r11,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	r11.s64 = r11.s64 - ctx.r9.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
loc_822D7D44:
	// subfc r11,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	r11.s64 = r11.s64 - ctx.r9.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// subfc r11,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
loc_822D7D68:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D7D70"))) PPC_WEAK_FUNC(sub_822D7D70);
PPC_FUNC_IMPL(__imp__sub_822D7D70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// beq cr6,0x822d7dc0
	if (cr6.eq) goto loc_822D7DC0;
loc_822D7D90:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// ld r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// ld r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// ld r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// bl 0x822d72d0
	sub_822D72D0(ctx, base);
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x822d7d90
	if (!cr6.eq) goto loc_822D7D90;
loc_822D7DC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D7DC8"))) PPC_WEAK_FUNC(sub_822D7DC8);
PPC_FUNC_IMPL(__imp__sub_822D7DC8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce4
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// addi r11,r4,1
	r11.s64 = ctx.r4.s64 + 1;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// b 0x822d7e40
	goto loc_822D7E40;
loc_822D7DFC:
	// mulli r11,r31,48
	r11.s64 = r31.s64 * 48;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,-40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -40);
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= r11.u32;
	r11.s64 = ctx.r10.s64 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d7e20
	if (cr0.eq) goto loc_822D7E20;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_822D7E20:
	// mulli r11,r4,48
	r11.s64 = ctx.r4.s64 * 48;
	// mulli r10,r31,48
	ctx.r10.s64 = r31.s64 * 48;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + r30.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_822D7E40:
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// blt cr6,0x822d7dfc
	if (cr6.lt) goto loc_822D7DFC;
	// bne cr6,0x822d7e70
	if (!cr6.eq) goto loc_822D7E70;
	// mulli r11,r31,48
	r11.s64 = r31.s64 * 48;
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// mulli r11,r4,48
	r11.s64 = ctx.r4.s64 * 48;
	// addi r4,r10,-48
	ctx.r4.s64 = ctx.r10.s64 + -48;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r4,r31,-1
	ctx.r4.s64 = r31.s64 + -1;
loc_822D7E70:
	// lbz r11,295(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 295);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stb r11,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, r11.u8);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// ld r11,280(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// bl 0x822d7350
	sub_822D7350(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_822D7EA8"))) PPC_WEAK_FUNC(sub_822D7EA8);
PPC_FUNC_IMPL(__imp__sub_822D7EA8) {
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
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r30,r31,20
	r30.s64 = r31.s64 + 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r11,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r11.u8);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x823b6648
	sub_823B6648(ctx, base);
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

__attribute__((alias("__imp__sub_822D7F14"))) PPC_WEAK_FUNC(sub_822D7F14);
PPC_FUNC_IMPL(__imp__sub_822D7F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D7F18"))) PPC_WEAK_FUNC(sub_822D7F18);
PPC_FUNC_IMPL(__imp__sub_822D7F18) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d7f74
	if (cr0.eq) goto loc_822D7F74;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d7f74
	if (!cr0.eq) goto loc_822D7F74;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x822d7f74
	if (cr6.eq) goto loc_822D7F74;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x822d7f78
	goto loc_822D7F78;
loc_822D7F74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D7F78:
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

__attribute__((alias("__imp__sub_822D7F8C"))) PPC_WEAK_FUNC(sub_822D7F8C);
PPC_FUNC_IMPL(__imp__sub_822D7F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D7F90"))) PPC_WEAK_FUNC(sub_822D7F90);
PPC_FUNC_IMPL(__imp__sub_822D7F90) {
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
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r29,r31,20
	r29.s64 = r31.s64 + 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// addi r30,r31,100
	r30.s64 = r31.s64 + 100;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r11.u8);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// beq cr6,0x822d7fec
	if (cr6.eq) goto loc_822D7FEC;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 52);
loc_822D7FEC:
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r8,r31,236
	ctx.r8.s64 = r31.s64 + 236;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// srawi r4,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r4.s64 = r11.s32 >> 3;
	// bl 0x823b5748
	sub_823B5748(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D8020"))) PPC_WEAK_FUNC(sub_822D8020);
PPC_FUNC_IMPL(__imp__sub_822D8020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,80(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x822d805c
	if (!cr6.eq) goto loc_822D805C;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d805c
	if (!cr0.eq) goto loc_822D805C;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x822d805c
	if (cr6.eq) goto loc_822D805C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// blr 
	return;
loc_822D805C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D8064"))) PPC_WEAK_FUNC(sub_822D8064);
PPC_FUNC_IMPL(__imp__sub_822D8064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D8068"))) PPC_WEAK_FUNC(sub_822D8068);
PPC_FUNC_IMPL(__imp__sub_822D8068) {
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
	// bl 0x822d7500
	sub_822D7500(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d8098
	if (cr0.eq) goto loc_822D8098;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822D8098:
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

__attribute__((alias("__imp__sub_822D80B4"))) PPC_WEAK_FUNC(sub_822D80B4);
PPC_FUNC_IMPL(__imp__sub_822D80B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D80B8"))) PPC_WEAK_FUNC(sub_822D80B8);
PPC_FUNC_IMPL(__imp__sub_822D80B8) {
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
	// beq cr6,0x822d8100
	if (cr6.eq) goto loc_822D8100;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x822d80f8
	if (cr0.eq) goto loc_822D80F8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x822d80fc
	goto loc_822D80FC;
loc_822D80F8:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_822D80FC:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_822D8100:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D810C"))) PPC_WEAK_FUNC(sub_822D810C);
PPC_FUNC_IMPL(__imp__sub_822D810C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D8110"))) PPC_WEAK_FUNC(sub_822D8110);
PPC_FUNC_IMPL(__imp__sub_822D8110) {
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
	// bl 0x822d7cb8
	sub_822D7CB8(ctx, base);
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

__attribute__((alias("__imp__sub_822D8174"))) PPC_WEAK_FUNC(sub_822D8174);
PPC_FUNC_IMPL(__imp__sub_822D8174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D8178"))) PPC_WEAK_FUNC(sub_822D8178);
PPC_FUNC_IMPL(__imp__sub_822D8178) {
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

__attribute__((alias("__imp__sub_822D81CC"))) PPC_WEAK_FUNC(sub_822D81CC);
PPC_FUNC_IMPL(__imp__sub_822D81CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D81D0"))) PPC_WEAK_FUNC(sub_822D81D0);
PPC_FUNC_IMPL(__imp__sub_822D81D0) {
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
	// b 0x822d8200
	goto loc_822D8200;
loc_822D81F0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822D8200:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x822d81f0
	if (!cr6.eq) goto loc_822D81F0;
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

__attribute__((alias("__imp__sub_822D8228"))) PPC_WEAK_FUNC(sub_822D8228);
PPC_FUNC_IMPL(__imp__sub_822D8228) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r6,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r6.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// std r5,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r5.u64);
	// std r7,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r7.u64);
	// std r8,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r8.u64);
	// std r9,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r9.u64);
	// std r10,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r10.u64);
	// lwz r29,200(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// b 0x822d8260
	goto loc_822D8260;
loc_822D825C:
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
loc_822D8260:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subfc r11,r29,r11
	xer.ca = r11.u32 >= r29.u32;
	r11.s64 = r11.s64 - r29.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d825c
	if (!cr0.eq) goto loc_822D825C;
loc_822D8274:
	// addi r30,r30,-48
	r30.s64 = r30.s64 + -48;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subfc r11,r11,r29
	xer.ca = r29.u32 >= r11.u32;
	r11.s64 = r29.s64 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d8274
	if (!cr0.eq) goto loc_822D8274;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bge cr6,0x822d82c8
	if (!cr6.lt) goto loc_822D82C8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// b 0x822d825c
	goto loc_822D825C;
loc_822D82C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D82D4"))) PPC_WEAK_FUNC(sub_822D82D4);
PPC_FUNC_IMPL(__imp__sub_822D82D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D82D8"))) PPC_WEAK_FUNC(sub_822D82D8);
PPC_FUNC_IMPL(__imp__sub_822D82D8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
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
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lbz r10,279(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 279);
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// stb r10,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r10.u8);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// ld r10,264(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// divw r5,r11,r5
	ctx.r5.s32 = r11.s32 / ctx.r5.s32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// bl 0x822d7dc8
	sub_822D7DC8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822D8354"))) PPC_WEAK_FUNC(sub_822D8354);
PPC_FUNC_IMPL(__imp__sub_822D8354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D8358"))) PPC_WEAK_FUNC(sub_822D8358);
PPC_FUNC_IMPL(__imp__sub_822D8358) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r10,48
	ctx.r10.s64 = 48;
	// subf r11,r29,r4
	r11.s64 = ctx.r4.s64 - r29.s64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// divw r28,r11,r10
	r28.s32 = r11.s32 / ctx.r10.s32;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// blt cr6,0x822d8408
	if (cr6.lt) goto loc_822D8408;
	// addi r11,r28,-2
	r11.s64 = r28.s64 + -2;
	// stb r27,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, r27.u8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r30,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r30.s64 = temp.s64;
	// mulli r11,r30,48
	r11.s64 = r30.s64 * 48;
	// add r31,r11,r29
	r31.u64 = r11.u64 + r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// ld r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// ld r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// ld r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// bl 0x822d7dc8
	sub_822D7DC8(ctx, base);
	// b 0x822d8400
	goto loc_822D8400;
loc_822D83C4:
	// addi r31,r31,-48
	r31.s64 = r31.s64 + -48;
	// stb r27,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, r27.u8);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ld r26,40(r11)
	r26.u64 = PPC_LOAD_U64(r11.u32 + 40);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// ld r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// ld r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// ld r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 32);
	// std r26,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r26.u64);
	// bl 0x822d7dc8
	sub_822D7DC8(ctx, base);
loc_822D8400:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x822d83c4
	if (!cr6.eq) goto loc_822D83C4;
loc_822D8408:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822D8410"))) PPC_WEAK_FUNC(sub_822D8410);
PPC_FUNC_IMPL(__imp__sub_822D8410) {
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
	// lwz r11,-8092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -8092);
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d74a8
	sub_822D74A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_822D8454"))) PPC_WEAK_FUNC(sub_822D8454);
PPC_FUNC_IMPL(__imp__sub_822D8454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D8458"))) PPC_WEAK_FUNC(sub_822D8458);
PPC_FUNC_IMPL(__imp__sub_822D8458) {
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
	// bl 0x822d7f18
	sub_822D7F18(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d848c
	if (cr0.eq) goto loc_822D848C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822d848c
	if (cr6.eq) goto loc_822D848C;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// b 0x822d8490
	goto loc_822D8490;
loc_822D848C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D8490:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D84A0"))) PPC_WEAK_FUNC(sub_822D84A0);
PPC_FUNC_IMPL(__imp__sub_822D84A0) {
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
	// bl 0x822d7f18
	sub_822D7F18(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d84d4
	if (cr0.eq) goto loc_822D84D4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822d84d4
	if (cr6.eq) goto loc_822D84D4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
loc_822D84D4:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
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

__attribute__((alias("__imp__sub_822D84EC"))) PPC_WEAK_FUNC(sub_822D84EC);
PPC_FUNC_IMPL(__imp__sub_822D84EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D84F0"))) PPC_WEAK_FUNC(sub_822D84F0);
PPC_FUNC_IMPL(__imp__sub_822D84F0) {
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
	// bl 0x822d8020
	sub_822D8020(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d8510
	if (cr0.eq) goto loc_822D8510;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x822d8514
	goto loc_822D8514;
loc_822D8510:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D8514:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D8524"))) PPC_WEAK_FUNC(sub_822D8524);
PPC_FUNC_IMPL(__imp__sub_822D8524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D8528"))) PPC_WEAK_FUNC(sub_822D8528);
PPC_FUNC_IMPL(__imp__sub_822D8528) {
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
	// bl 0x822d8020
	sub_822D8020(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d8554
	if (cr0.eq) goto loc_822D8554;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mulli r11,r4,48
	r11.s64 = ctx.r4.s64 * 48;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x822d8558
	goto loc_822D8558;
loc_822D8554:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D8558:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D8568"))) PPC_WEAK_FUNC(sub_822D8568);
PPC_FUNC_IMPL(__imp__sub_822D8568) {
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
	// bl 0x822d8020
	sub_822D8020(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d8590
	if (cr0.eq) goto loc_822D8590;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mulli r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 * 48;
	// ldx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + r11.u32);
	// b 0x822d8594
	goto loc_822D8594;
loc_822D8590:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D8594:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D85A4"))) PPC_WEAK_FUNC(sub_822D85A4);
PPC_FUNC_IMPL(__imp__sub_822D85A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D85A8"))) PPC_WEAK_FUNC(sub_822D85A8);
PPC_FUNC_IMPL(__imp__sub_822D85A8) {
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
	// bl 0x822d8020
	sub_822D8020(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d85d4
	if (cr0.eq) goto loc_822D85D4;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mulli r11,r4,48
	r11.s64 = ctx.r4.s64 * 48;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// ld r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// b 0x822d85d8
	goto loc_822D85D8;
loc_822D85D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D85D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D85E8"))) PPC_WEAK_FUNC(sub_822D85E8);
PPC_FUNC_IMPL(__imp__sub_822D85E8) {
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
	// bl 0x822d8020
	sub_822D8020(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d8614
	if (cr0.eq) goto loc_822D8614;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mulli r11,r4,48
	r11.s64 = ctx.r4.s64 * 48;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// b 0x822d861c
	goto loc_822D861C;
loc_822D8614:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9120
	ctx.r3.s64 = r11.s64 + 9120;
loc_822D861C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D862C"))) PPC_WEAK_FUNC(sub_822D862C);
PPC_FUNC_IMPL(__imp__sub_822D862C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D8630"))) PPC_WEAK_FUNC(sub_822D8630);
PPC_FUNC_IMPL(__imp__sub_822D8630) {
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
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// blt cr6,0x822d8678
	if (cr6.lt) goto loc_822D8678;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_822D8678:
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
	// bl 0x822d7198
	sub_822D7198(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x822d86b0
	if (cr0.eq) goto loc_822D86B0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_822D86B0:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x822d86d0
	if (cr6.eq) goto loc_822D86D0;
loc_822D86BC:
	// ld r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U64(r24.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bne 0x822d86bc
	if (!cr0.eq) goto loc_822D86BC;
loc_822D86D0:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x822d86f8
	if (!cr0.eq) goto loc_822D86F8;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x822d86f8
	if (cr0.eq) goto loc_822D86F8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_822D86F8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
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

__attribute__((alias("__imp__sub_822D872C"))) PPC_WEAK_FUNC(sub_822D872C);
PPC_FUNC_IMPL(__imp__sub_822D872C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D8730"))) PPC_WEAK_FUNC(sub_822D8730);
PPC_FUNC_IMPL(__imp__sub_822D8730) {
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
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r27,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r27.u32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r1,228
	ctx.r10.s64 = ctx.r1.s64 + 228;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// blt cr6,0x822d8774
	if (cr6.lt) goto loc_822D8774;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_822D8774:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r26,r10,r11
	r26.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x822d7268
	sub_822D7268(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r25
	r30.s64 = r25.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x822d87b0
	if (cr0.eq) goto loc_822D87B0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// b 0x822d87b4
	goto loc_822D87B4;
loc_822D87B0:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_822D87B4:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lbz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U8(r24.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d87f0
	if (!cr0.eq) goto loc_822D87F0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r27,r25,r11
	r27.s64 = r11.s64 - r25.s64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x822d87f0
	if (cr0.eq) goto loc_822D87F0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r30,r3,r27
	r30.u64 = ctx.r3.u64 + r27.u64;
loc_822D87F0:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r3,r4,r11
	ctx.r3.s64 = r11.s64 - ctx.r4.s64;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// add r11,r29,r26
	r11.u64 = r29.u64 + r26.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_822D8818"))) PPC_WEAK_FUNC(sub_822D8818);
PPC_FUNC_IMPL(__imp__sub_822D8818) {
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
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x822d8850
	if (cr6.lt) goto loc_822D8850;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x822d8854
	if (cr6.lt) goto loc_822D8854;
loc_822D8850:
	// li r11,0
	r11.s64 = 0;
loc_822D8854:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d888c
	if (cr0.eq) goto loc_822D888C;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lbz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U8(r26.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// bl 0x822d8818
	sub_822D8818(ctx, base);
	// b 0x822d891c
	goto loc_822D891C;
loc_822D888C:
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r27,r29,r31
	r27.s64 = r31.s64 - r29.s64;
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(r27.u32, r28.u32, xer);
	// ble cr6,0x822d88d8
	if (!cr6.gt) goto loc_822D88D8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// subf r3,r28,r31
	ctx.r3.s64 = r31.s64 - r28.s64;
	// bl 0x82122018
	sub_82122018(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r10,r29,r31
	ctx.r10.s64 = r31.s64 - r29.s64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// subf. r5,r28,r10
	ctx.r5.s64 = ctx.r10.s64 - r28.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// ble 0x822d88d0
	if (!cr0.gt) goto loc_822D88D0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r3,r5,r31
	ctx.r3.s64 = r31.s64 - ctx.r5.s64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
loc_822D88D0:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// b 0x822d8910
	goto loc_822D8910;
loc_822D88D8:
	// subf r28,r27,r28
	r28.s64 = r28.s64 - r27.s64;
	// lbz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U8(r26.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// add r5,r31,r28
	ctx.r5.u64 = r31.u64 + r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r5,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// bl 0x82122018
	sub_82122018(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r5,r29,r31
	ctx.r5.s64 = r31.s64 - r29.s64;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_822D8910:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lbz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U8(r26.u32 + 0);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
loc_822D891C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822D8924"))) PPC_WEAK_FUNC(sub_822D8924);
PPC_FUNC_IMPL(__imp__sub_822D8924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D8928"))) PPC_WEAK_FUNC(sub_822D8928);
PPC_FUNC_IMPL(__imp__sub_822D8928) {
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
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x822d895c
	if (cr6.lt) goto loc_822D895C;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x822d8960
	if (cr6.lt) goto loc_822D8960;
loc_822D895C:
	// li r11,0
	r11.s64 = 0;
loc_822D8960:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d8994
	if (cr0.eq) goto loc_822D8994;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// ld r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U64(r26.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// bl 0x822d8928
	sub_822D8928(ctx, base);
	// b 0x822d8a68
	goto loc_822D8A68;
loc_822D8994:
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r11,r29,r31
	r11.s64 = r31.s64 - r29.s64;
	// srawi r28,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r28.s64 = r11.s32 >> 3;
	// cmplw cr6,r28,r5
	cr6.compare<uint32_t>(r28.u32, ctx.r5.u32, xer);
	// ble cr6,0x822d8a08
	if (!cr6.gt) goto loc_822D8A08;
	// rlwinm r28,r5,3,0,28
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// subf r27,r28,r31
	r27.s64 = r31.s64 - r28.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82122018
	sub_82122018(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf. r5,r29,r27
	ctx.r5.s64 = r27.s64 - r29.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// ble 0x822d89e0
	if (!cr0.gt) goto loc_822D89E0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r3,r5,r31
	ctx.r3.s64 = r31.s64 - ctx.r5.s64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
loc_822D89E0:
	// add r10,r28,r29
	ctx.r10.u64 = r28.u64 + r29.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x822d8a68
	if (cr6.eq) goto loc_822D8A68;
loc_822D89F0:
	// ld r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U64(r26.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x822d89f0
	if (!cr6.eq) goto loc_822D89F0;
	// b 0x822d8a68
	goto loc_822D8A68;
loc_822D8A08:
	// subf. r11,r28,r5
	r11.s64 = ctx.r5.s64 - r28.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// beq 0x822d8a28
	if (cr0.eq) goto loc_822D8A28;
loc_822D8A14:
	// ld r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U64(r26.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// std r10,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// bne 0x822d8a14
	if (!cr0.eq) goto loc_822D8A14;
loc_822D8A28:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r5,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82122018
	sub_82122018(ctx, base);
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
	// beq cr6,0x822d8a68
	if (cr6.eq) goto loc_822D8A68;
loc_822D8A54:
	// ld r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U64(r26.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x822d8a54
	if (!cr6.eq) goto loc_822D8A54;
loc_822D8A68:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822D8A70"))) PPC_WEAK_FUNC(sub_822D8A70);
PPC_FUNC_IMPL(__imp__sub_822D8A70) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_822D8A8C:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x822d8b0c
	if (cr6.eq) goto loc_822D8B0C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822d8ab4
	if (cr0.eq) goto loc_822D8AB4;
loc_822D8AAC:
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// b 0x822d8a8c
	goto loc_822D8A8C;
loc_822D8AB4:
	// addi r30,r30,-48
	r30.s64 = r30.s64 + -48;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x822d8b0c
	if (cr6.eq) goto loc_822D8B0C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822d8ab4
	if (cr0.eq) goto loc_822D8AB4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// b 0x822d8aac
	goto loc_822D8AAC;
loc_822D8B0C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_822D8B28"))) PPC_WEAK_FUNC(sub_822D8B28);
PPC_FUNC_IMPL(__imp__sub_822D8B28) {
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
	// li r11,0
	r11.s64 = 0;
	// stb r5,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r5.u8);
	// addi r4,r4,-48
	ctx.r4.s64 = ctx.r4.s64 + -48;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// ld r11,40(r4)
	r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// ld r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// ld r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// ld r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// ld r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// ld r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// bl 0x822d82d8
	sub_822D82D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D8B78"))) PPC_WEAK_FUNC(sub_822D8B78);
PPC_FUNC_IMPL(__imp__sub_822D8B78) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8092
	ctx.r4.s64 = r11.s64 + -8092;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822d8178
	sub_822D8178(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D8BB0"))) PPC_WEAK_FUNC(sub_822D8BB0);
PPC_FUNC_IMPL(__imp__sub_822D8BB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,-32156
	r11.s64 = r11.s64 + -32156;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r4,52(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// subf r3,r4,r11
	ctx.r3.s64 = r11.s64 - ctx.r4.s64;
	// b 0x82355020
	sub_82355020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822D8BD4"))) PPC_WEAK_FUNC(sub_822D8BD4);
PPC_FUNC_IMPL(__imp__sub_822D8BD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D8BD8"))) PPC_WEAK_FUNC(sub_822D8BD8);
PPC_FUNC_IMPL(__imp__sub_822D8BD8) {
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-32156
	r11.s64 = r11.s64 + -32156;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822d8c18
	if (cr0.eq) goto loc_822D8C18;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// subf r3,r4,r11
	ctx.r3.s64 = r11.s64 - ctx.r4.s64;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822D8C18:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d8c28
	if (cr0.eq) goto loc_822D8C28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822D8C28:
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

__attribute__((alias("__imp__sub_822D8C44"))) PPC_WEAK_FUNC(sub_822D8C44);
PPC_FUNC_IMPL(__imp__sub_822D8C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D8C48"))) PPC_WEAK_FUNC(sub_822D8C48);
PPC_FUNC_IMPL(__imp__sub_822D8C48) {
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
	// bl 0x822d6e58
	sub_822D6E58(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x822d8c78
	if (cr6.eq) goto loc_822D8C78;
	// bl 0x823b54e8
	sub_823B54E8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_822D8C78:
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822d80b8
	sub_822D80B8(ctx, base);
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

__attribute__((alias("__imp__sub_822D8C9C"))) PPC_WEAK_FUNC(sub_822D8C9C);
PPC_FUNC_IMPL(__imp__sub_822D8C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D8CA0"))) PPC_WEAK_FUNC(sub_822D8CA0);
PPC_FUNC_IMPL(__imp__sub_822D8CA0) {
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-32112
	r11.s64 = r11.s64 + -32112;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x822d8c48
	sub_822D8C48(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,-32156
	r11.s64 = r11.s64 + -32156;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822d8ce8
	if (cr0.eq) goto loc_822D8CE8;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// subf r3,r4,r11
	ctx.r3.s64 = r11.s64 - ctx.r4.s64;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822D8CE8:
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

__attribute__((alias("__imp__sub_822D8CFC"))) PPC_WEAK_FUNC(sub_822D8CFC);
PPC_FUNC_IMPL(__imp__sub_822D8CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D8D00"))) PPC_WEAK_FUNC(sub_822D8D00);
PPC_FUNC_IMPL(__imp__sub_822D8D00) {
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
	// lwz r16,-32016(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -32016);
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-32068
	r11.s64 = r11.s64 + -32068;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822d8c48
	sub_822D8C48(ctx, base);
	// lwz r4,88(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822d8d58
	if (cr0.eq) goto loc_822D8D58;
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822D8D58:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,-32156
	r11.s64 = r11.s64 + -32156;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822d8d7c
	if (cr0.eq) goto loc_822D8D7C;
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// subf r3,r4,r11
	ctx.r3.s64 = r11.s64 - ctx.r4.s64;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822D8D7C:
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

__attribute__((alias("__imp__sub_822D8D08"))) PPC_WEAK_FUNC(sub_822D8D08);
PPC_FUNC_IMPL(__imp__sub_822D8D08) {
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-32068
	r11.s64 = r11.s64 + -32068;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822d8c48
	sub_822D8C48(ctx, base);
	// lwz r4,88(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822d8d58
	if (cr0.eq) goto loc_822D8D58;
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822D8D58:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,-32156
	r11.s64 = r11.s64 + -32156;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822d8d7c
	if (cr0.eq) goto loc_822D8D7C;
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// subf r3,r4,r11
	ctx.r3.s64 = r11.s64 - ctx.r4.s64;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822D8D7C:
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

__attribute__((alias("__imp__sub_822D8D94"))) PPC_WEAK_FUNC(sub_822D8D94);
PPC_FUNC_IMPL(__imp__sub_822D8D94) {
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
	// bl 0x822d8bb0
	sub_822D8BB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D8DBC"))) PPC_WEAK_FUNC(sub_822D8DBC);
PPC_FUNC_IMPL(__imp__sub_822D8DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D8DC0"))) PPC_WEAK_FUNC(sub_822D8DC0);
PPC_FUNC_IMPL(__imp__sub_822D8DC0) {
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
	// beq cr6,0x822d8e00
	if (cr6.eq) goto loc_822D8E00;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822d8df0
	if (cr0.eq) goto loc_822D8DF0;
	// ld r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
loc_822D8DF0:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x822d8e14
	goto loc_822D8E14;
loc_822D8E00:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x822d8630
	sub_822D8630(ctx, base);
loc_822D8E14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D8E24"))) PPC_WEAK_FUNC(sub_822D8E24);
PPC_FUNC_IMPL(__imp__sub_822D8E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D8E28"))) PPC_WEAK_FUNC(sub_822D8E28);
PPC_FUNC_IMPL(__imp__sub_822D8E28) {
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
	// beq cr6,0x822d8e70
	if (cr6.eq) goto loc_822D8E70;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x822d8e68
	if (cr0.eq) goto loc_822D8E68;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x822d8e6c
	goto loc_822D8E6C;
loc_822D8E68:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_822D8E6C:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_822D8E70:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D8E7C"))) PPC_WEAK_FUNC(sub_822D8E7C);
PPC_FUNC_IMPL(__imp__sub_822D8E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D8E80"))) PPC_WEAK_FUNC(sub_822D8E80);
PPC_FUNC_IMPL(__imp__sub_822D8E80) {
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
	// beq cr6,0x822d8ecc
	if (cr6.eq) goto loc_822D8ECC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x822d8eb8
	if (cr6.lt) goto loc_822D8EB8;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x822d8818
	sub_822D8818(ctx, base);
	// b 0x822d8ecc
	goto loc_822D8ECC;
loc_822D8EB8:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x822d8730
	sub_822D8730(ctx, base);
loc_822D8ECC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D8EDC"))) PPC_WEAK_FUNC(sub_822D8EDC);
PPC_FUNC_IMPL(__imp__sub_822D8EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D8EE0"))) PPC_WEAK_FUNC(sub_822D8EE0);
PPC_FUNC_IMPL(__imp__sub_822D8EE0) {
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
	// beq cr6,0x822d8f30
	if (cr6.eq) goto loc_822D8F30;
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
	// blt cr6,0x822d8f1c
	if (cr6.lt) goto loc_822D8F1C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x822d8928
	sub_822D8928(ctx, base);
	// b 0x822d8f30
	goto loc_822D8F30;
loc_822D8F1C:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x822d8630
	sub_822D8630(ctx, base);
loc_822D8F30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D8F40"))) PPC_WEAK_FUNC(sub_822D8F40);
PPC_FUNC_IMPL(__imp__sub_822D8F40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// std r5,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r5.u64);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= r11.u32;
	r11.s64 = ctx.r10.s64 - r11.s64;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// std r8,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r8.u64);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// std r9,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r9.u64);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d8fe8
	if (cr0.eq) goto loc_822D8FE8;
	// subf r11,r31,r3
	r11.s64 = ctx.r3.s64 - r31.s64;
	// li r10,48
	ctx.r10.s64 = 48;
	// addi r30,r3,48
	r30.s64 = ctx.r3.s64 + 48;
	// divw. r29,r11,r10
	r29.s32 = r11.s32 / ctx.r10.s32;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x822d8fd4
	if (!cr0.gt) goto loc_822D8FD4;
	// addi r28,r30,-48
	r28.s64 = r30.s64 + -48;
loc_822D8FB4:
	// addi r30,r30,-48
	r30.s64 = r30.s64 + -48;
	// addi r28,r28,-48
	r28.s64 = r28.s64 + -48;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bgt 0x822d8fb4
	if (cr0.gt) goto loc_822D8FB4;
loc_822D8FD4:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// b 0x822d8ff0
	goto loc_822D8FF0;
loc_822D8FE8:
	// lbz r10,215(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 215);
	// bl 0x822d72d0
	sub_822D72D0(ctx, base);
loc_822D8FF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822D8FF8"))) PPC_WEAK_FUNC(sub_822D8FF8);
PPC_FUNC_IMPL(__imp__sub_822D8FF8) {
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
	// bl 0x822d8ca0
	sub_822D8CA0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d9028
	if (cr0.eq) goto loc_822D9028;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822D9028:
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

__attribute__((alias("__imp__sub_822D9044"))) PPC_WEAK_FUNC(sub_822D9044);
PPC_FUNC_IMPL(__imp__sub_822D9044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D9048"))) PPC_WEAK_FUNC(sub_822D9048);
PPC_FUNC_IMPL(__imp__sub_822D9048) {
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
	// bl 0x822d8d08
	sub_822D8D08(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d9078
	if (cr0.eq) goto loc_822D9078;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822D9078:
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

__attribute__((alias("__imp__sub_822D9094"))) PPC_WEAK_FUNC(sub_822D9094);
PPC_FUNC_IMPL(__imp__sub_822D9094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D9098"))) PPC_WEAK_FUNC(sub_822D9098);
PPC_FUNC_IMPL(__imp__sub_822D9098) {
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
	// beq cr6,0x822d90f4
	if (cr6.eq) goto loc_822D90F4;
	// addi r31,r30,48
	r31.s64 = r30.s64 + 48;
	// b 0x822d90ec
	goto loc_822D90EC;
loc_822D90C0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ld r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// ld r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// ld r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// ld r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r28.u8);
	// bl 0x822d8f40
	sub_822D8F40(ctx, base);
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
loc_822D90EC:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x822d90c0
	if (!cr6.eq) goto loc_822D90C0;
loc_822D90F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822D90FC"))) PPC_WEAK_FUNC(sub_822D90FC);
PPC_FUNC_IMPL(__imp__sub_822D90FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D9100"))) PPC_WEAK_FUNC(sub_822D9100);
PPC_FUNC_IMPL(__imp__sub_822D9100) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// bl 0x822d8358
	sub_822D8358(ctx, base);
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// bge cr6,0x822d9194
	if (!cr6.lt) goto loc_822D9194;
loc_822D9138:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d9188
	if (cr0.eq) goto loc_822D9188;
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// li r26,0
	r26.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// ld r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ld r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ld r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r26.u32);
	// stb r28,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, r28.u8);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// bl 0x822d82d8
	sub_822D82D8(ctx, base);
loc_822D9188:
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// blt cr6,0x822d9138
	if (cr6.lt) goto loc_822D9138;
loc_822D9194:
	// subf r31,r29,r30
	r31.s64 = r30.s64 - r29.s64;
	// li r27,48
	r27.s64 = 48;
	// b 0x822d91b8
	goto loc_822D91B8;
loc_822D91A0:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d8b28
	sub_822D8B28(ctx, base);
	// addi r31,r31,-48
	r31.s64 = r31.s64 + -48;
	// addi r30,r30,-48
	r30.s64 = r30.s64 + -48;
loc_822D91B8:
	// divw r11,r31,r27
	r11.s32 = r31.s32 / r27.s32;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bgt cr6,0x822d91a0
	if (cr6.gt) goto loc_822D91A0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822D91CC"))) PPC_WEAK_FUNC(sub_822D91CC);
PPC_FUNC_IMPL(__imp__sub_822D91CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D91D0"))) PPC_WEAK_FUNC(sub_822D91D0);
PPC_FUNC_IMPL(__imp__sub_822D91D0) {
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
	// lwz r16,-31908(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -31908);
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
	// blt cr6,0x822d9230
	if (cr6.lt) goto loc_822D9230;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_822D9230:
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
	// bl 0x822d7200
	sub_822D7200(ctx, base);
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
	// bne cr6,0x822d929c
	if (!cr6.eq) goto loc_822D929C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x822d9294
	if (cr6.eq) goto loc_822D9294;
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
loc_822D9294:
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// b 0x822d92b4
	goto loc_822D92B4;
loc_822D929C:
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
loc_822D92B4:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d92d8
	if (!cr0.eq) goto loc_822D92D8;
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
loc_822D92D8:
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
	// b 0x822d9320
	goto loc_822D9320;
loc_822D9300:
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
loc_822D9320:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d9300
	if (!cr0.eq) goto loc_822D9300;
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

__attribute__((alias("__imp__sub_822D91D8"))) PPC_WEAK_FUNC(sub_822D91D8);
PPC_FUNC_IMPL(__imp__sub_822D91D8) {
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
	// blt cr6,0x822d9230
	if (cr6.lt) goto loc_822D9230;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_822D9230:
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
	// bl 0x822d7200
	sub_822D7200(ctx, base);
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
	// bne cr6,0x822d929c
	if (!cr6.eq) goto loc_822D929C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x822d9294
	if (cr6.eq) goto loc_822D9294;
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
loc_822D9294:
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// b 0x822d92b4
	goto loc_822D92B4;
loc_822D929C:
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
loc_822D92B4:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d92d8
	if (!cr0.eq) goto loc_822D92D8;
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
loc_822D92D8:
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
	// b 0x822d9320
	goto loc_822D9320;
loc_822D9300:
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
loc_822D9320:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822d9300
	if (!cr0.eq) goto loc_822D9300;
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

__attribute__((alias("__imp__sub_822D9360"))) PPC_WEAK_FUNC(sub_822D9360);
PPC_FUNC_IMPL(__imp__sub_822D9360) {
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
	// lwz r16,-31908(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -31908);
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

__attribute__((alias("__imp__sub_822D9368"))) PPC_WEAK_FUNC(sub_822D9368);
PPC_FUNC_IMPL(__imp__sub_822D9368) {
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

__attribute__((alias("__imp__sub_822D9398"))) PPC_WEAK_FUNC(sub_822D9398);
PPC_FUNC_IMPL(__imp__sub_822D9398) {
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
	// li r10,48
	ctx.r10.s64 = 48;
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
	// ble cr6,0x822d93ec
	if (!cr6.gt) goto loc_822D93EC;
	// addi r29,r3,768
	r29.s64 = ctx.r3.s64 + 768;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d9098
	sub_822D9098(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d7d70
	sub_822D7D70(ctx, base);
	// b 0x822d93f4
	goto loc_822D93F4;
loc_822D93EC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822d9098
	sub_822D9098(ctx, base);
loc_822D93F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D93FC"))) PPC_WEAK_FUNC(sub_822D93FC);
PPC_FUNC_IMPL(__imp__sub_822D93FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D9400"))) PPC_WEAK_FUNC(sub_822D9400);
PPC_FUNC_IMPL(__imp__sub_822D9400) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lbz r11,84(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 84);
	// addi r9,r31,16
	ctx.r9.s64 = r31.s64 + 16;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x822d9464
	if (cr0.eq) goto loc_822D9464;
	// ld r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// bl 0x823b5890
	sub_823B5890(ctx, base);
	// b 0x822d946c
	goto loc_822D946C;
loc_822D9464:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823b5830
	sub_823B5830(ctx, base);
loc_822D946C:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x822d94d4
	if (!cr6.eq) goto loc_822D94D4;
	// li r11,0
	r11.s64 = 0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - r11.s64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x822d94a8
	if (!cr6.lt) goto loc_822D94A8;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x822d80b8
	sub_822D80B8(ctx, base);
	// b 0x822d94bc
	goto loc_822D94BC;
loc_822D94A8:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x822d8e80
	sub_822D8E80(ctx, base);
loc_822D94BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d7ea8
	sub_822D7EA8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x822d94dc
	if (cr0.eq) goto loc_822D94DC;
	// cmpwi cr6,r30,997
	cr6.compare<int32_t>(r30.s32, 997, xer);
	// beq cr6,0x822d94dc
	if (cr6.eq) goto loc_822D94DC;
loc_822D94D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d8c48
	sub_822D8C48(ctx, base);
loc_822D94DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

__attribute__((alias("__imp__sub_822D94F8"))) PPC_WEAK_FUNC(sub_822D94F8);
PPC_FUNC_IMPL(__imp__sub_822D94F8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822d95f4
	if (cr0.eq) goto loc_822D95F4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x822d7f18
	sub_822D7F18(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822d95f4
	if (cr0.eq) goto loc_822D95F4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822d95f4
	if (cr6.eq) goto loc_822D95F4;
	// li r11,0
	r11.s64 = 0;
	// stb r11,84(r29)
	PPC_STORE_U8(r29.u32 + 84, r11.u8);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// bge cr6,0x822d9594
	if (!cr6.lt) goto loc_822D9594;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d8c48
	sub_822D8C48(ctx, base);
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// bgt cr6,0x822d95c0
	if (cr6.gt) goto loc_822D95C0;
	// addi r11,r30,-80
	r11.s64 = r30.s64 + -80;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bgt cr6,0x822d95e8
	if (cr6.gt) goto loc_822D95E8;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// b 0x822d95e8
	goto loc_822D95E8;
loc_822D9594:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r30,-40(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + -40);
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// ble cr6,0x822d95f4
	if (!cr6.gt) goto loc_822D95F4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d8c48
	sub_822D8C48(ctx, base);
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// ble cr6,0x822d95c8
	if (!cr6.gt) goto loc_822D95C8;
loc_822D95C0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x822d95ec
	goto loc_822D95EC;
loc_822D95C8:
	// addi r11,r30,-20
	r11.s64 = r30.s64 + -20;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bgt cr6,0x822d95e8
	if (cr6.gt) goto loc_822D95E8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_822D95E8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_822D95EC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d9400
	sub_822D9400(ctx, base);
loc_822D95F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822D95FC"))) PPC_WEAK_FUNC(sub_822D95FC);
PPC_FUNC_IMPL(__imp__sub_822D95FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D9600"))) PPC_WEAK_FUNC(sub_822D9600);
PPC_FUNC_IMPL(__imp__sub_822D9600) {
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
	// lwz r16,-31816(r4)
	r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + -31816);
	// mflr r12
	// bl 0x8239bcf0
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r27,r30,16
	r27.s64 = r30.s64 + 16;
	// addi r28,r30,52
	r28.s64 = r30.s64 + 52;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stb r29,48(r30)
	PPC_STORE_U8(r30.u32 + 48, r29.u8);
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// stw r29,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r29.u32);
	// stw r29,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r29.u32);
	// stw r29,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r29.u32);
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
	// stw r10,72(r30)
	PPC_STORE_U32(r30.u32 + 72, ctx.r10.u32);
	// stw r10,68(r30)
	PPC_STORE_U32(r30.u32 + 68, ctx.r10.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r4,84(r30)
	PPC_STORE_U32(r30.u32 + 84, ctx.r4.u32);
	// addi r10,r10,-32068
	ctx.r10.s64 = ctx.r10.s64 + -32068;
	// addi r3,r30,88
	ctx.r3.s64 = r30.s64 + 88;
	// stw r9,80(r30)
	PPC_STORE_U32(r30.u32 + 80, ctx.r9.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stw r29,236(r30)
	PPC_STORE_U32(r30.u32 + 236, r29.u32);
	// std r6,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r6.u64);
	// bl 0x822d8dc0
	sub_822D8DC0(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8267af90
	sub_8267AF90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x822d9714
	if (!cr0.eq) goto loc_822D9714;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - r11.s64;
	// stb r29,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r29.u8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x822d96dc
	if (!cr6.lt) goto loc_822D96DC;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x822d80b8
	sub_822D80B8(ctx, base);
	// b 0x822d96f0
	goto loc_822D96F0;
loc_822D96DC:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x822d8e80
	sub_822D8E80(ctx, base);
loc_822D96F0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d7ea8
	sub_822D7EA8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x822d9714
	if (cr0.eq) goto loc_822D9714;
	// cmpwi cr6,r3,997
	cr6.compare<int32_t>(ctx.r3.s32, 997, xer);
	// beq cr6,0x822d9714
	if (cr6.eq) goto loc_822D9714;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// bl 0x822d8c48
	sub_822D8C48(ctx, base);
loc_822D9714:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822D9608"))) PPC_WEAK_FUNC(sub_822D9608);
PPC_FUNC_IMPL(__imp__sub_822D9608) {
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r27,r30,16
	r27.s64 = r30.s64 + 16;
	// addi r28,r30,52
	r28.s64 = r30.s64 + 52;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stb r29,48(r30)
	PPC_STORE_U8(r30.u32 + 48, r29.u8);
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// stw r29,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r29.u32);
	// stw r29,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r29.u32);
	// stw r29,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r29.u32);
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
	// stw r10,72(r30)
	PPC_STORE_U32(r30.u32 + 72, ctx.r10.u32);
	// stw r10,68(r30)
	PPC_STORE_U32(r30.u32 + 68, ctx.r10.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r4,84(r30)
	PPC_STORE_U32(r30.u32 + 84, ctx.r4.u32);
	// addi r10,r10,-32068
	ctx.r10.s64 = ctx.r10.s64 + -32068;
	// addi r3,r30,88
	ctx.r3.s64 = r30.s64 + 88;
	// stw r9,80(r30)
	PPC_STORE_U32(r30.u32 + 80, ctx.r9.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stw r29,236(r30)
	PPC_STORE_U32(r30.u32 + 236, r29.u32);
	// std r6,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r6.u64);
	// bl 0x822d8dc0
	sub_822D8DC0(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8267af90
	sub_8267AF90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x822d9714
	if (!cr0.eq) goto loc_822D9714;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - r11.s64;
	// stb r29,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r29.u8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x822d96dc
	if (!cr6.lt) goto loc_822D96DC;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x822d80b8
	sub_822D80B8(ctx, base);
	// b 0x822d96f0
	goto loc_822D96F0;
loc_822D96DC:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x822d8e80
	sub_822D8E80(ctx, base);
loc_822D96F0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d7ea8
	sub_822D7EA8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x822d9714
	if (cr0.eq) goto loc_822D9714;
	// cmpwi cr6,r3,997
	cr6.compare<int32_t>(ctx.r3.s32, 997, xer);
	// beq cr6,0x822d9714
	if (cr6.eq) goto loc_822D9714;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// bl 0x822d8c48
	sub_822D8C48(ctx, base);
loc_822D9714:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822D9720"))) PPC_WEAK_FUNC(sub_822D9720);
PPC_FUNC_IMPL(__imp__sub_822D9720) {
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
	// bl 0x822d8bb0
	sub_822D8BB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D9748"))) PPC_WEAK_FUNC(sub_822D9748);
PPC_FUNC_IMPL(__imp__sub_822D9748) {
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
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
	// bl 0x821fed98
	sub_821FED98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822D9774"))) PPC_WEAK_FUNC(sub_822D9774);
PPC_FUNC_IMPL(__imp__sub_822D9774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D9778"))) PPC_WEAK_FUNC(sub_822D9778);
PPC_FUNC_IMPL(__imp__sub_822D9778) {
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
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmplwi cr6,r11,101
	cr6.compare<uint32_t>(r11.u32, 101, xer);
	// ble cr6,0x822d97f8
	if (!cr6.gt) goto loc_822D97F8;
	// li r11,0
	r11.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,101
	cr6.compare<uint32_t>(ctx.r10.u32, 101, xer);
	// ble cr6,0x822d97e0
	if (!cr6.gt) goto loc_822D97E0;
	// addi r4,r11,808
	ctx.r4.s64 = r11.s64 + 808;
	// bl 0x822d8e28
	sub_822D8E28(ctx, base);
	// b 0x822d97f8
	goto loc_822D97F8;
loc_822D97E0:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// subfic r5,r11,101
	xer.ca = r11.u32 <= 101;
	ctx.r5.s64 = 101 - r11.s64;
	// bl 0x822d8ee0
	sub_822D8EE0(ctx, base);
loc_822D97F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d7f90
	sub_822D7F90(ctx, base);
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

__attribute__((alias("__imp__sub_822D9814"))) PPC_WEAK_FUNC(sub_822D9814);
PPC_FUNC_IMPL(__imp__sub_822D9814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822D9818"))) PPC_WEAK_FUNC(sub_822D9818);
PPC_FUNC_IMPL(__imp__sub_822D9818) {
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
	// li r26,48
	r26.s64 = 48;
	// b 0x822d98c0
	goto loc_822D98C0;
loc_822D9840:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x822d98d0
	if (cr6.eq) goto loc_822D98D0;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// divw r11,r11,r26
	r11.s32 = r11.s32 / r26.s32;
	// addi r5,r31,-48
	ctx.r5.s64 = r31.s64 + -48;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// mulli r11,r11,48
	r11.s64 = r11.s64 * 48;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// bl 0x822d7d00
	sub_822D7D00(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r28.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// ld r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// ld r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 32);
	// ld r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 40);
	// bl 0x822d8228
	sub_822D8228(ctx, base);
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
	// bl 0x822d9818
	sub_822D9818(ctx, base);
	// subf r11,r30,r29
	r11.s64 = r29.s64 - r30.s64;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_822D98C0:
	// divw r11,r11,r26
	r11.s32 = r11.s32 / r26.s32;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bgt cr6,0x822d9840
	if (cr6.gt) goto loc_822D9840;
	// b 0x822d98e4
	goto loc_822D98E4;
loc_822D98D0:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822d9100
	sub_822D9100(ctx, base);
loc_822D98E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

