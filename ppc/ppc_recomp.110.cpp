#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8234F3E0"))) PPC_WEAK_FUNC(sub_8234F3E0);
PPC_FUNC_IMPL(__imp__sub_8234F3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234f210
	sub_8234F210(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8234F424"))) PPC_WEAK_FUNC(sub_8234F424);
PPC_FUNC_IMPL(__imp__sub_8234F424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234F428"))) PPC_WEAK_FUNC(sub_8234F428);
PPC_FUNC_IMPL(__imp__sub_8234F428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// lbz r11,8(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, r11.u8);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, r11.u32);
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// lbz r11,32(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 32);
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, r11.u8);
	// lwz r11,36(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// lwz r11,40(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// lfs f0,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lbz r11,48(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 48);
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, r11.u8);
	// lwz r11,52(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, r11.u32);
	// lwz r11,56(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, r11.u32);
	// lwz r11,60(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, r11.u32);
	// lbz r11,64(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 64);
	// stb r11,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, r11.u8);
	// lwz r11,68(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, r11.u32);
	// lwz r11,72(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, r11.u32);
	// lfs f0,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	f0.f64 = double(temp.f32);
	// stfs f0,116(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lfs f0,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,120(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234F4D4"))) PPC_WEAK_FUNC(sub_8234F4D4);
PPC_FUNC_IMPL(__imp__sub_8234F4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234F4D8"))) PPC_WEAK_FUNC(sub_8234F4D8);
PPC_FUNC_IMPL(__imp__sub_8234F4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// lbz r11,32(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// stb r11,8(r4)
	PPC_STORE_U8(ctx.r4.u32 + 8, r11.u8);
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f0,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, r11.u32);
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, r11.u32);
	// lbz r11,72(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// stb r11,32(r4)
	PPC_STORE_U8(ctx.r4.u32 + 32, r11.u8);
	// lwz r11,76(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r11,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, r11.u32);
	// lwz r11,80(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r11,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, r11.u32);
	// lfs f0,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lbz r11,88(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 88);
	// stb r11,48(r4)
	PPC_STORE_U8(ctx.r4.u32 + 48, r11.u8);
	// lwz r11,92(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// stw r11,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, r11.u32);
	// lwz r11,96(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// stw r11,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, r11.u32);
	// lwz r11,100(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// stw r11,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, r11.u32);
	// lbz r11,104(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 104);
	// stb r11,64(r4)
	PPC_STORE_U8(ctx.r4.u32 + 64, r11.u8);
	// lwz r11,108(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// stw r11,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, r11.u32);
	// lwz r11,112(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// stw r11,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, r11.u32);
	// lfs f0,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	f0.f64 = double(temp.f32);
	// stfs f0,76(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// lfs f0,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234F584"))) PPC_WEAK_FUNC(sub_8234F584);
PPC_FUNC_IMPL(__imp__sub_8234F584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234F588"))) PPC_WEAK_FUNC(sub_8234F588);
PPC_FUNC_IMPL(__imp__sub_8234F588) {
	PPC_FUNC_PROLOGUE();
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234F590"))) PPC_WEAK_FUNC(sub_8234F590);
PPC_FUNC_IMPL(__imp__sub_8234F590) {
	PPC_FUNC_PROLOGUE();
	// stb r4,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234F598"))) PPC_WEAK_FUNC(sub_8234F598);
PPC_FUNC_IMPL(__imp__sub_8234F598) {
	PPC_FUNC_PROLOGUE();
	// stb r4,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234F5A0"))) PPC_WEAK_FUNC(sub_8234F5A0);
PPC_FUNC_IMPL(__imp__sub_8234F5A0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 88);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234F5A8"))) PPC_WEAK_FUNC(sub_8234F5A8);
PPC_FUNC_IMPL(__imp__sub_8234F5A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r4,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r4.u8);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,80(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234F5C4"))) PPC_WEAK_FUNC(sub_8234F5C4);
PPC_FUNC_IMPL(__imp__sub_8234F5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234F5C8"))) PPC_WEAK_FUNC(sub_8234F5C8);
PPC_FUNC_IMPL(__imp__sub_8234F5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234F5D0"))) PPC_WEAK_FUNC(sub_8234F5D0);
PPC_FUNC_IMPL(__imp__sub_8234F5D0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fadds f0,f0,f2
	f0.f64 = double(float(f0.f64 + ctx.f2.f64));
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	f0.f64 = double(float(f0.f64 - ctx.f1.f64));
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8234f5f4
	if (!cr6.gt) goto loc_8234F5F4;
	// li r11,0
	r11.s64 = 0;
loc_8234F5F4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234F5FC"))) PPC_WEAK_FUNC(sub_8234F5FC);
PPC_FUNC_IMPL(__imp__sub_8234F5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234F600"))) PPC_WEAK_FUNC(sub_8234F600);
PPC_FUNC_IMPL(__imp__sub_8234F600) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stb r10,104(r31)
	PPC_STORE_U8(r31.u32 + 104, ctx.r10.u8);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8234F65C"))) PPC_WEAK_FUNC(sub_8234F65C);
PPC_FUNC_IMPL(__imp__sub_8234F65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234F660"))) PPC_WEAK_FUNC(sub_8234F660);
PPC_FUNC_IMPL(__imp__sub_8234F660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x82357718
	sub_82357718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823573c0
	sub_823573C0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82357598
	sub_82357598(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823573c0
	sub_823573C0(ctx, base);
	// clrlwi r4,r29,24
	ctx.r4.u64 = r29.u32 & 0xFF;
	// bl 0x823573c0
	sub_823573C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823571b0
	sub_823571B0(ctx, base);
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8234F6C4"))) PPC_WEAK_FUNC(sub_8234F6C4);
PPC_FUNC_IMPL(__imp__sub_8234F6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234F6C8"))) PPC_WEAK_FUNC(sub_8234F6C8);
PPC_FUNC_IMPL(__imp__sub_8234F6C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82340ed0
	sub_82340ED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234f600
	sub_8234F600(ctx, base);
	// li r30,-1
	r30.s64 = -1;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	f0.f64 = double(temp.f32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 + f31.f64));
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// bl 0x8234dea0
	sub_8234DEA0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// lfs f0,-11848(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11848);
	f0.f64 = double(temp.f32);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// lwz r9,100(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// stfs f0,84(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r10.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_8234F768"))) PPC_WEAK_FUNC(sub_8234F768);
PPC_FUNC_IMPL(__imp__sub_8234F768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234F790"))) PPC_WEAK_FUNC(sub_8234F790);
PPC_FUNC_IMPL(__imp__sub_8234F790) {
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
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8234f7f4
	if (!cr6.eq) goto loc_8234F7F4;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,-2180
	r30.s64 = r11.s64 + -2180;
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8234f7f4
	if (cr0.eq) goto loc_8234F7F4;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r3,r11,-19524
	ctx.r3.s64 = r11.s64 + -19524;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x8233a348
	sub_8233A348(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8234a1e8
	sub_8234A1E8(ctx, base);
loc_8234F7F4:
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// b 0x8234f824
	goto loc_8234F824;
loc_8234F7FC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_8234F824:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8234f7fc
	if (!cr6.eq) goto loc_8234F7FC;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8234f850
	if (cr0.eq) goto loc_8234F850;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8234b5f8
	sub_8234B5F8(ctx, base);
loc_8234F850:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8234F85C"))) PPC_WEAK_FUNC(sub_8234F85C);
PPC_FUNC_IMPL(__imp__sub_8234F85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234F860"))) PPC_WEAK_FUNC(sub_8234F860);
PPC_FUNC_IMPL(__imp__sub_8234F860) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8234f8bc
	if (!cr6.eq) goto loc_8234F8BC;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,-2180
	r30.s64 = r11.s64 + -2180;
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8234f8bc
	if (cr0.eq) goto loc_8234F8BC;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r11,-19500
	ctx.r3.s64 = r11.s64 + -19500;
	// bl 0x8233a2d8
	sub_8233A2D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8234a1e8
	sub_8234A1E8(ctx, base);
loc_8234F8BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234f600
	sub_8234F600(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8744(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8744);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x8234f98c
	if (!cr6.gt) goto loc_8234F98C;
	// stfs f31,84(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x8234f918
	if (cr6.eq) goto loc_8234F918;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x8234f910
	if (!cr6.eq) goto loc_8234F910;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,116(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8234F910:
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// bne cr6,0x8234f930
	if (!cr6.eq) goto loc_8234F930;
loc_8234F918:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// addi r29,r11,-1
	r29.s64 = r11.s64 + -1;
loc_8234F930:
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// b 0x8234f960
	goto loc_8234F960;
loc_8234F938:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_8234F960:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8234f938
	if (!cr6.eq) goto loc_8234F938;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8234f98c
	if (cr0.eq) goto loc_8234F98C;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8234b530
	sub_8234B530(ctx, base);
loc_8234F98C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8234F998"))) PPC_WEAK_FUNC(sub_8234F998);
PPC_FUNC_IMPL(__imp__sub_8234F998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8234f9f4
	if (!cr6.eq) goto loc_8234F9F4;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,-2180
	r30.s64 = r11.s64 + -2180;
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8234f9f4
	if (cr0.eq) goto loc_8234F9F4;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r3,r11,-19476
	ctx.r3.s64 = r11.s64 + -19476;
	// bl 0x8233a2d8
	sub_8233A2D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8234a1e8
	sub_8234A1E8(ctx, base);
loc_8234F9F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234f600
	sub_8234F600(ctx, base);
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// b 0x8234fa2c
	goto loc_8234FA2C;
loc_8234FA04:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lbz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_8234FA2C:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8234fa04
	if (!cr6.eq) goto loc_8234FA04;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8234fa58
	if (cr0.eq) goto loc_8234FA58;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lbz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 32);
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8234b560
	sub_8234B560(ctx, base);
loc_8234FA58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8234FA64"))) PPC_WEAK_FUNC(sub_8234FA64);
PPC_FUNC_IMPL(__imp__sub_8234FA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234FA68"))) PPC_WEAK_FUNC(sub_8234FA68);
PPC_FUNC_IMPL(__imp__sub_8234FA68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r31,48(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// b 0x8234fab0
	goto loc_8234FAB0;
loc_8234FA8C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8234FAB0:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8234fa8c
	if (!cr6.eq) goto loc_8234FA8C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8234FAC8"))) PPC_WEAK_FUNC(sub_8234FAC8);
PPC_FUNC_IMPL(__imp__sub_8234FAC8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r31,48(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// b 0x8234fb0c
	goto loc_8234FB0C;
loc_8234FAE8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8234FB0C:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8234fae8
	if (!cr6.eq) goto loc_8234FAE8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8234FB20"))) PPC_WEAK_FUNC(sub_8234FB20);
PPC_FUNC_IMPL(__imp__sub_8234FB20) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,48(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// b 0x8234fb5c
	goto loc_8234FB5C;
loc_8234FB3C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8234FB5C:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8234fb3c
	if (!cr6.eq) goto loc_8234FB3C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8234FB70"))) PPC_WEAK_FUNC(sub_8234FB70);
PPC_FUNC_IMPL(__imp__sub_8234FB70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lwz r31,48(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// b 0x8234fbc4
	goto loc_8234FBC4;
loc_8234FB9C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8234FBC4:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8234fb9c
	if (!cr6.eq) goto loc_8234FB9C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8234FBE0"))) PPC_WEAK_FUNC(sub_8234FBE0);
PPC_FUNC_IMPL(__imp__sub_8234FBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r31,48(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// b 0x8234fc28
	goto loc_8234FC28;
loc_8234FC04:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8234FC28:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8234fc04
	if (!cr6.eq) goto loc_8234FC04;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8234FC40"))) PPC_WEAK_FUNC(sub_8234FC40);
PPC_FUNC_IMPL(__imp__sub_8234FC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// lbz r11,32(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8234fc9c
	if (cr0.eq) goto loc_8234FC9C;
	// lwz r31,48(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// b 0x8234fc90
	goto loc_8234FC90;
loc_8234FC74:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8234FC90:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8234fc74
	if (!cr6.eq) goto loc_8234FC74;
loc_8234FC9C:
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

__attribute__((alias("__imp__sub_8234FCB8"))) PPC_WEAK_FUNC(sub_8234FCB8);
PPC_FUNC_IMPL(__imp__sub_8234FCB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r31,48(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// b 0x8234fd00
	goto loc_8234FD00;
loc_8234FCDC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8234FD00:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8234fcdc
	if (!cr6.eq) goto loc_8234FCDC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8234FD18"))) PPC_WEAK_FUNC(sub_8234FD18);
PPC_FUNC_IMPL(__imp__sub_8234FD18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r31,48(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// b 0x8234fd60
	goto loc_8234FD60;
loc_8234FD3C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8234FD60:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8234fd3c
	if (!cr6.eq) goto loc_8234FD3C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8234FD78"))) PPC_WEAK_FUNC(sub_8234FD78);
PPC_FUNC_IMPL(__imp__sub_8234FD78) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8234fda4
	if (!cr6.gt) goto loc_8234FDA4;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
loc_8234FDA4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234fac8
	sub_8234FAC8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234fb20
	sub_8234FB20(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8234FDF4"))) PPC_WEAK_FUNC(sub_8234FDF4);
PPC_FUNC_IMPL(__imp__sub_8234FDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234FDF8"))) PPC_WEAK_FUNC(sub_8234FDF8);
PPC_FUNC_IMPL(__imp__sub_8234FDF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,76(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// b 0x8234fe10
	goto loc_8234FE10;
loc_8234FE00:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
loc_8234FE10:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// blt cr6,0x8234fe00
	if (cr6.lt) goto loc_8234FE00;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234FE20"))) PPC_WEAK_FUNC(sub_8234FE20);
PPC_FUNC_IMPL(__imp__sub_8234FE20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// stbx r9,r7,r30
	PPC_STORE_U8(ctx.r7.u32 + r30.u32, ctx.r9.u8);
	// bl 0x8234f790
	sub_8234F790(ctx, base);
	// lbz r11,88(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 88);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8234fe94
	if (cr0.eq) goto loc_8234FE94;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8234fe88
	if (!cr0.eq) goto loc_8234FE88;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8234fe90
	goto loc_8234FE90;
loc_8234FE88:
	// neg r3,r4
	ctx.r3.s64 = -ctx.r4.s64;
	// bl 0x8226dcb8
	sub_8226DCB8(ctx, base);
loc_8234FE90:
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
loc_8234FE94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234f600
	sub_8234F600(ctx, base);
	// lbz r11,13(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 13);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8234fed4
	if (!cr0.eq) goto loc_8234FED4;
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// lhz r11,8(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 8);
	// stfs f31,116(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// b 0x8234fee4
	goto loc_8234FEE4;
loc_8234FED4:
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
loc_8234FEE4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8234FF14"))) PPC_WEAK_FUNC(sub_8234FF14);
PPC_FUNC_IMPL(__imp__sub_8234FF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234FF18"))) PPC_WEAK_FUNC(sub_8234FF18);
PPC_FUNC_IMPL(__imp__sub_8234FF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,-19452(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -19452);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x8234ff8c
	if (cr6.lt) goto loc_8234FF8C;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r31,120
	r11.s64 = r31.s64 + 120;
	// stb r10,104(r31)
	PPC_STORE_U8(r31.u32 + 104, ctx.r10.u8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// blt cr6,0x8234ff84
	if (cr6.lt) goto loc_8234FF84;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8234FF84:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
loc_8234FF8C:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82350068
	if (cr6.eq) goto loc_82350068;
	// lbz r11,104(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 104);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82350054
	if (cr0.eq) goto loc_82350054;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 120);
	f0.f64 = double(temp.f32);
	// lfs f13,-25364(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x82350054
	if (cr6.eq) goto loc_82350054;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - f0.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f31.f64 = double(temp.f32);
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// fdivs f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 / f0.f64));
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x8234fc40
	sub_8234FC40(ctx, base);
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	f0.f64 = double(temp.f32);
	// fsubs f0,f29,f0
	f0.f64 = double(float(f29.f64 - f0.f64));
	// lwa r11,112(r31)
	r11.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 112));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x82350008
	if (!cr6.gt) goto loc_82350008;
	// fmr f0,f31
	f0.f64 = f31.f64;
	// b 0x8235001c
	goto loc_8235001C;
loc_82350008:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x8235001c
	if (!cr6.lt) goto loc_8235001C;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_8235001C:
	// lwa r11,108(r31)
	r11.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 108));
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(f0.f64 * f30.f64));
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823500a4
	goto loc_823500A4;
loc_82350054:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8234fc40
	sub_8234FC40(ctx, base);
	// b 0x823500a4
	goto loc_823500A4;
loc_82350068:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8234fc40
	sub_8234FC40(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-25364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
loc_823500A4:
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

__attribute__((alias("__imp__sub_823500C4"))) PPC_WEAK_FUNC(sub_823500C4);
PPC_FUNC_IMPL(__imp__sub_823500C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823500C8"))) PPC_WEAK_FUNC(sub_823500C8);
PPC_FUNC_IMPL(__imp__sub_823500C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82350120
	if (cr6.eq) goto loc_82350120;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r11,12(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 12);
loc_823500F4:
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// and. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82350118
	if (cr0.eq) goto loc_82350118;
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
loc_82350118:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge 0x823500f4
	if (!cr0.lt) goto loc_823500F4;
loc_82350120:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350128"))) PPC_WEAK_FUNC(sub_82350128);
PPC_FUNC_IMPL(__imp__sub_82350128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r11,r9
	r11.s64 = ctx.r9.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 + f0.f64));
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fsubs f2,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(f31.f64 - ctx.f1.f64));
	// bl 0x8234fb70
	sub_8234FB70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234f600
	sub_8234F600(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_823501C0"))) PPC_WEAK_FUNC(sub_823501C0);
PPC_FUNC_IMPL(__imp__sub_823501C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82334628
	sub_82334628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823501D8"))) PPC_WEAK_FUNC(sub_823501D8);
PPC_FUNC_IMPL(__imp__sub_823501D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r6,r4,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r10,r6,r3
	ctx.r10.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// ble cr6,0x8235021c
	if (!cr6.gt) goto loc_8235021C;
	// addi r9,r10,-12
	ctx.r9.s64 = ctx.r10.s64 + -12;
loc_82350204:
	// lwz r31,0(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r31,r7
	cr6.compare<int32_t>(r31.s32, ctx.r7.s32, xer);
	// bne cr6,0x8235021c
	if (!cr6.eq) goto loc_8235021C;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// bgt 0x82350204
	if (cr0.gt) goto loc_82350204;
loc_8235021C:
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 1;
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r31,r30,r31
	r31.s64 = r31.s64 - r30.s64;
	// srawi r31,r31,4
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xF) != 0);
	r31.s64 = r31.s32 >> 4;
	// cmpw cr6,r9,r31
	cr6.compare<int32_t>(ctx.r9.s32, r31.s32, xer);
	// bge cr6,0x8235026c
	if (!cr6.lt) goto loc_8235026C;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
loc_8235023C:
	// lwz r31,0(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r31,r7
	cr6.compare<int32_t>(r31.s32, ctx.r7.s32, xer);
	// bne cr6,0x8235026c
	if (!cr6.eq) goto loc_8235026C;
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// subf r31,r30,r31
	r31.s64 = r31.s64 - r30.s64;
	// srawi r31,r31,4
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xF) != 0);
	r31.s64 = r31.s32 >> 4;
	// cmpw cr6,r9,r31
	cr6.compare<int32_t>(ctx.r9.s32, r31.s32, xer);
	// blt cr6,0x8235023c
	if (cr6.lt) goto loc_8235023C;
loc_8235026C:
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmpw cr6,r8,r4
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, xer);
	// bgt cr6,0x823502c0
	if (cr6.gt) goto loc_823502C0;
	// subf r11,r8,r4
	r11.s64 = ctx.r4.s64 - ctx.r8.s64;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
loc_82350280:
	// add r10,r6,r3
	ctx.r10.u64 = ctx.r6.u64 + ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// lbz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
loc_8235028C:
	// li r7,1
	ctx.r7.s64 = 1;
	// slw r7,r7,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// and. r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x823502ac
	if (!cr0.eq) goto loc_823502AC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// blt cr6,0x8235028c
	if (cr6.lt) goto loc_8235028C;
	// li r11,-1
	r11.s64 = -1;
loc_823502AC:
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x823502b8
	if (!cr6.gt) goto loc_823502B8;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_823502B8:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82350280
	if (!cr0.eq) goto loc_82350280;
loc_823502C0:
	// subf r11,r9,r5
	r11.s64 = ctx.r5.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823502DC"))) PPC_WEAK_FUNC(sub_823502DC);
PPC_FUNC_IMPL(__imp__sub_823502DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823502E0"))) PPC_WEAK_FUNC(sub_823502E0);
PPC_FUNC_IMPL(__imp__sub_823502E0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82350358
	if (cr0.eq) goto loc_82350358;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823503c4
	goto loc_823503C4;
loc_82350358:
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234fe20
	sub_8234FE20(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823501d8
	sub_823501D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823503c4
	if (cr0.eq) goto loc_823503C4;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r4,r29,-1
	ctx.r4.s64 = r29.s64 + -1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823503c4
	if (cr0.eq) goto loc_823503C4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823503C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823503D0"))) PPC_WEAK_FUNC(sub_823503D0);
PPC_FUNC_IMPL(__imp__sub_823503D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r3,116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82350458
	if (cr0.eq) goto loc_82350458;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82350478
	goto loc_82350478;
loc_82350458:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8234f860
	sub_8234F860(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82350478:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82350484"))) PPC_WEAK_FUNC(sub_82350484);
PPC_FUNC_IMPL(__imp__sub_82350484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350488"))) PPC_WEAK_FUNC(sub_82350488);
PPC_FUNC_IMPL(__imp__sub_82350488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x823504f0
	if (cr0.eq) goto loc_823504F0;
	// bl 0x8234fbe0
	sub_8234FBE0(ctx, base);
	// b 0x82350508
	goto loc_82350508;
loc_823504F0:
	// bl 0x8234f998
	sub_8234F998(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82350508:
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

__attribute__((alias("__imp__sub_82350524"))) PPC_WEAK_FUNC(sub_82350524);
PPC_FUNC_IMPL(__imp__sub_82350524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350528"))) PPC_WEAK_FUNC(sub_82350528);
PPC_FUNC_IMPL(__imp__sub_82350528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82350598
	if (!cr6.eq) goto loc_82350598;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,-2180
	r30.s64 = r11.s64 + -2180;
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82350598
	if (cr0.eq) goto loc_82350598;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r11,-19448
	ctx.r3.s64 = r11.s64 + -19448;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// bl 0x8234f660
	sub_8234F660(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8234a1e8
	sub_8234A1E8(ctx, base);
loc_82350598:
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// b 0x823505c4
	goto loc_823505C4;
loc_823505A0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_823505C4:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x823505a0
	if (!cr6.eq) goto loc_823505A0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823505DC"))) PPC_WEAK_FUNC(sub_823505DC);
PPC_FUNC_IMPL(__imp__sub_823505DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823505E0"))) PPC_WEAK_FUNC(sub_823505E0);
PPC_FUNC_IMPL(__imp__sub_823505E0) {
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
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// bge cr6,0x8235062c
	if (!cr6.lt) goto loc_8235062C;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8235060C:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8235060c
	if (cr6.lt) goto loc_8235060C;
	// b 0x82350644
	goto loc_82350644;
loc_8235062C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82350644:
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x8235065c
	if (!cr6.gt) goto loc_8235065C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234fb20
	sub_8234FB20(ctx, base);
loc_8235065C:
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
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

__attribute__((alias("__imp__sub_82350678"))) PPC_WEAK_FUNC(sub_82350678);
PPC_FUNC_IMPL(__imp__sub_82350678) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	f0.f64 = double(temp.f32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 + ctx.f1.f64));
	// bl 0x8234ddd0
	sub_8234DDD0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82334628
	sub_82334628(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823506d8
	if (cr0.eq) goto loc_823506D8;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbzx r11,r11,r30
	r11.u64 = PPC_LOAD_U8(r11.u32 + r30.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823506f8
	if (cr0.eq) goto loc_823506F8;
loc_823506D8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r3,r30,1
	ctx.r3.s64 = r30.s64 + 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// blt cr6,0x823506fc
	if (cr6.lt) goto loc_823506FC;
loc_823506F8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_823506FC:
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

__attribute__((alias("__imp__sub_82350714"))) PPC_WEAK_FUNC(sub_82350714);
PPC_FUNC_IMPL(__imp__sub_82350714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350718"))) PPC_WEAK_FUNC(sub_82350718);
PPC_FUNC_IMPL(__imp__sub_82350718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f27{};
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
	// bl 0x8239d5e4
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// addi r28,r11,-1
	r28.s64 = r11.s64 + -1;
	// cmpw cr6,r10,r28
	cr6.compare<int32_t>(ctx.r10.s32, r28.s32, xer);
	// beq cr6,0x82350920
	if (cr6.eq) goto loc_82350920;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f29,5736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5736);
	f29.f64 = double(temp.f32);
	// lfs f27,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f27.f64 = double(temp.f32);
loc_82350768:
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,112(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82350920
	if (cr0.eq) goto loc_82350920;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8234dc70
	sub_8234DC70(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x823507b4
	if (cr6.lt) goto loc_823507B4;
	// li r11,0
	r11.s64 = 0;
loc_823507B4:
	// clrlwi. r29,r11,24
	r29.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x823507c4
	if (cr0.eq) goto loc_823507C4;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// b 0x823507dc
	goto loc_823507DC;
loc_823507C4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823507DC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fadds f31,f1,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 + f30.f64));
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,116(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82350834
	if (cr6.eq) goto loc_82350834;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8234dc70
	sub_8234DC70(ctx, base);
	// fadds f13,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + f30.f64));
	// lfs f0,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	f0.f64 = double(temp.f32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fmsubs f0,f13,f29,f0
	f0.f64 = double(float(ctx.f13.f64 * f29.f64 - f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// blt cr6,0x82350830
	if (cr6.lt) goto loc_82350830;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_82350830:
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
loc_82350834:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82334628
	sub_82334628(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82350858
	if (!cr0.eq) goto loc_82350858;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
loc_82350858:
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f28.f64);
	// bge cr6,0x82350920
	if (!cr6.lt) goto loc_82350920;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x823508f8
	if (!cr0.eq) goto loc_823508F8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82334628
	sub_82334628(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823508dc
	if (cr0.eq) goto loc_823508DC;
	// lbz r11,72(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823508f4
	if (cr0.eq) goto loc_823508F4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823508c8
	if (cr6.eq) goto loc_823508C8;
	// bl 0x8234fa68
	sub_8234FA68(ctx, base);
	// b 0x823508f8
	goto loc_823508F8;
loc_823508C8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823508f8
	goto loc_823508F8;
loc_823508DC:
	// lbz r11,32(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823508f8
	if (cr0.eq) goto loc_823508F8;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
loc_823508F4:
	// bl 0x8234fbe0
	sub_8234FBE0(ctx, base);
loc_823508F8:
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82350914
	if (!cr6.eq) goto loc_82350914;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234fb20
	sub_8234FB20(ctx, base);
loc_82350914:
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bne cr6,0x82350768
	if (!cr6.eq) goto loc_82350768;
loc_82350920:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8239d630
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82350930"))) PPC_WEAK_FUNC(sub_82350930);
PPC_FUNC_IMPL(__imp__sub_82350930) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lbz r11,88(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 88);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82350a20
	if (cr0.eq) goto loc_82350A20;
	// lbz r11,32(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82350a20
	if (cr0.eq) goto loc_82350A20;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// addi r28,r11,-1
	r28.s64 = r11.s64 + -1;
	// cmpw cr6,r10,r28
	cr6.compare<int32_t>(ctx.r10.s32, r28.s32, xer);
	// bgt cr6,0x82350a20
	if (cr6.gt) goto loc_82350A20;
loc_82350984:
	// lwz r30,100(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8234dc70
	sub_8234DC70(ctx, base);
	// lwa r11,96(r31)
	r11.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 96));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// ble cr6,0x82350a20
	if (!cr6.gt) goto loc_82350A20;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r29,r30,4,0,27
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// bl 0x82334628
	sub_82334628(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82350a04
	if (cr0.eq) goto loc_82350A04;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lbz r11,12(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r6,r11,1
	ctx.r6.u64 = r11.u64 ^ 1;
	// bl 0x8234fe20
	sub_8234FE20(ctx, base);
	// b 0x82350a08
	goto loc_82350A08;
loc_82350A04:
	// bl 0x8234fbe0
	sub_8234FBE0(ctx, base);
loc_82350A08:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// ble cr6,0x82350984
	if (!cr6.gt) goto loc_82350984;
loc_82350A20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82350A2C"))) PPC_WEAK_FUNC(sub_82350A2C);
PPC_FUNC_IMPL(__imp__sub_82350A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350A30"))) PPC_WEAK_FUNC(sub_82350A30);
PPC_FUNC_IMPL(__imp__sub_82350A30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// addi r29,r11,-1
	r29.s64 = r11.s64 + -1;
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, r29.s32, xer);
	// beq cr6,0x82350ac8
	if (cr6.eq) goto loc_82350AC8;
loc_82350A6C:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8234dc70
	sub_8234DC70(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// bge cr6,0x82350ac8
	if (!cr6.lt) goto loc_82350AC8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82334628
	sub_82334628(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82350abc
	if (cr0.eq) goto loc_82350ABC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82350528
	sub_82350528(ctx, base);
loc_82350ABC:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bne cr6,0x82350a6c
	if (!cr6.eq) goto loc_82350A6C;
loc_82350AC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82350AD4"))) PPC_WEAK_FUNC(sub_82350AD4);
PPC_FUNC_IMPL(__imp__sub_82350AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350AD8"))) PPC_WEAK_FUNC(sub_82350AD8);
PPC_FUNC_IMPL(__imp__sub_82350AD8) {
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
	// lwz r16,-19224(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19224);
	// mflr r12
	// bl 0x8239bce8
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
	// li r29,0
	r29.s64 = 0;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// addi r26,r30,20
	r26.s64 = r30.s64 + 20;
	// lfs f13,17320(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r30,48
	ctx.r10.s64 = r30.s64 + 48;
	// stw r5,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// stw r7,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r7.u32);
	// stw r8,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r26.u32 + 0, temp.u32);
	// stw r9,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r9.u32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stfs f0,40(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// stb r29,32(r30)
	PPC_STORE_U8(r30.u32 + 32, r29.u8);
	// addi r3,r11,-19356
	ctx.r3.s64 = r11.s64 + -19356;
	// stfs f0,44(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// li r11,-1
	r11.s64 = -1;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r29.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r11.u32);
	// addi r27,r30,92
	r27.s64 = r30.s64 + 92;
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
	// addi r25,r30,108
	r25.s64 = r30.s64 + 108;
	// addi r24,r30,112
	r24.s64 = r30.s64 + 112;
	// stfs f0,116(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 116, temp.u32);
	// li r11,1000
	r11.s64 = 1000;
	// stw r6,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r6.u32);
	// lfs f13,-11848(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11848);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f13,84(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 84, temp.u32);
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
	// stw r4,68(r30)
	PPC_STORE_U32(r30.u32 + 68, ctx.r4.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stb r29,88(r30)
	PPC_STORE_U8(r30.u32 + 88, r29.u8);
	// stw r29,100(r30)
	PPC_STORE_U32(r30.u32 + 100, r29.u32);
	// lfs f12,-25364(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25364);
	ctx.f12.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f12,120(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 120, temp.u32);
	// stw r29,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r29.u32);
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// stb r10,72(r30)
	PPC_STORE_U8(r30.u32 + 72, ctx.r10.u8);
	// stb r10,104(r30)
	PPC_STORE_U8(r30.u32 + 104, ctx.r10.u8);
	// stw r10,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82350c68
	if (cr6.eq) goto loc_82350C68;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-19372
	ctx.r4.s64 = r11.s64 + -19372;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-19380
	ctx.r4.s64 = r11.s64 + -19380;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-19400
	ctx.r4.s64 = r11.s64 + -19400;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-19424
	ctx.r4.s64 = r11.s64 + -19424;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
loc_82350C68:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82350c80
	if (cr0.eq) goto loc_82350C80;
	// neg r3,r4
	ctx.r3.s64 = -ctx.r4.s64;
	// bl 0x8226dcb8
	sub_8226DCB8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82350C80:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,96(r30)
	PPC_STORE_U32(r30.u32 + 96, r29.u32);
	// bl 0x8234f600
	sub_8234F600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82350AE0"))) PPC_WEAK_FUNC(sub_82350AE0);
PPC_FUNC_IMPL(__imp__sub_82350AE0) {
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
	// li r29,0
	r29.s64 = 0;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// addi r26,r30,20
	r26.s64 = r30.s64 + 20;
	// lfs f13,17320(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r30,48
	ctx.r10.s64 = r30.s64 + 48;
	// stw r5,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// stw r7,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r7.u32);
	// stw r8,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r26.u32 + 0, temp.u32);
	// stw r9,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r9.u32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stfs f0,40(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// stb r29,32(r30)
	PPC_STORE_U8(r30.u32 + 32, r29.u8);
	// addi r3,r11,-19356
	ctx.r3.s64 = r11.s64 + -19356;
	// stfs f0,44(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// li r11,-1
	r11.s64 = -1;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r29.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r11.u32);
	// addi r27,r30,92
	r27.s64 = r30.s64 + 92;
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
	// addi r25,r30,108
	r25.s64 = r30.s64 + 108;
	// addi r24,r30,112
	r24.s64 = r30.s64 + 112;
	// stfs f0,116(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 116, temp.u32);
	// li r11,1000
	r11.s64 = 1000;
	// stw r6,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r6.u32);
	// lfs f13,-11848(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11848);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f13,84(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 84, temp.u32);
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
	// stw r4,68(r30)
	PPC_STORE_U32(r30.u32 + 68, ctx.r4.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stb r29,88(r30)
	PPC_STORE_U8(r30.u32 + 88, r29.u8);
	// stw r29,100(r30)
	PPC_STORE_U32(r30.u32 + 100, r29.u32);
	// lfs f12,-25364(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25364);
	ctx.f12.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f12,120(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 120, temp.u32);
	// stw r29,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r29.u32);
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// stb r10,72(r30)
	PPC_STORE_U8(r30.u32 + 72, ctx.r10.u8);
	// stb r10,104(r30)
	PPC_STORE_U8(r30.u32 + 104, ctx.r10.u8);
	// stw r10,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82350c68
	if (cr6.eq) goto loc_82350C68;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-19372
	ctx.r4.s64 = r11.s64 + -19372;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-19380
	ctx.r4.s64 = r11.s64 + -19380;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-19400
	ctx.r4.s64 = r11.s64 + -19400;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-19424
	ctx.r4.s64 = r11.s64 + -19424;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
loc_82350C68:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82350c80
	if (cr0.eq) goto loc_82350C80;
	// neg r3,r4
	ctx.r3.s64 = -ctx.r4.s64;
	// bl 0x8226dcb8
	sub_8226DCB8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82350C80:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,96(r30)
	PPC_STORE_U32(r30.u32 + 96, r29.u32);
	// bl 0x8234f600
	sub_8234F600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82350C98"))) PPC_WEAK_FUNC(sub_82350C98);
PPC_FUNC_IMPL(__imp__sub_82350C98) {
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
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
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

__attribute__((alias("__imp__sub_82350CC4"))) PPC_WEAK_FUNC(sub_82350CC4);
PPC_FUNC_IMPL(__imp__sub_82350CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350CC8"))) PPC_WEAK_FUNC(sub_82350CC8);
PPC_FUNC_IMPL(__imp__sub_82350CC8) {
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
	// lwz r16,-19168(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19168);
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
	// addi r11,r11,-19356
	r11.s64 = r11.s64 + -19356;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x8234f600
	sub_8234F600(ctx, base);
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82350d20
	if (cr0.eq) goto loc_82350D20;
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
loc_82350D20:
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

__attribute__((alias("__imp__sub_82350CD0"))) PPC_WEAK_FUNC(sub_82350CD0);
PPC_FUNC_IMPL(__imp__sub_82350CD0) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-19356
	r11.s64 = r11.s64 + -19356;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x8234f600
	sub_8234F600(ctx, base);
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82350d20
	if (cr0.eq) goto loc_82350D20;
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
loc_82350D20:
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

__attribute__((alias("__imp__sub_82350D38"))) PPC_WEAK_FUNC(sub_82350D38);
PPC_FUNC_IMPL(__imp__sub_82350D38) {
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
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
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

__attribute__((alias("__imp__sub_82350D64"))) PPC_WEAK_FUNC(sub_82350D64);
PPC_FUNC_IMPL(__imp__sub_82350D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350D68"))) PPC_WEAK_FUNC(sub_82350D68);
PPC_FUNC_IMPL(__imp__sub_82350D68) {
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
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82350da0
	if (cr6.eq) goto loc_82350DA0;
	// lfs f0,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x82350da0
	if (!cr6.lt) goto loc_82350DA0;
	// bl 0x8234f600
	sub_8234F600(ctx, base);
loc_82350DA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82350930
	sub_82350930(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82350718
	sub_82350718(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82350a30
	sub_82350A30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8234ff18
	sub_8234FF18(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82350E00"))) PPC_WEAK_FUNC(sub_82350E00);
PPC_FUNC_IMPL(__imp__sub_82350E00) {
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
	// bl 0x82350cd0
	sub_82350CD0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82350e30
	if (cr0.eq) goto loc_82350E30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82350E30:
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

__attribute__((alias("__imp__sub_82350E4C"))) PPC_WEAK_FUNC(sub_82350E4C);
PPC_FUNC_IMPL(__imp__sub_82350E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350E50"))) PPC_WEAK_FUNC(sub_82350E50);
PPC_FUNC_IMPL(__imp__sub_82350E50) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x8234ac00
	sub_8234AC00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350E7C"))) PPC_WEAK_FUNC(sub_82350E7C);
PPC_FUNC_IMPL(__imp__sub_82350E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350E80"))) PPC_WEAK_FUNC(sub_82350E80);
PPC_FUNC_IMPL(__imp__sub_82350E80) {
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
	// addi r11,r11,-19108
	r11.s64 = r11.s64 + -19108;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82350eac
	if (cr0.eq) goto loc_82350EAC;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82350EAC:
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

__attribute__((alias("__imp__sub_82350EC4"))) PPC_WEAK_FUNC(sub_82350EC4);
PPC_FUNC_IMPL(__imp__sub_82350EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350EC8"))) PPC_WEAK_FUNC(sub_82350EC8);
PPC_FUNC_IMPL(__imp__sub_82350EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,-19108
	r11.s64 = r11.s64 + -19108;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350ED8"))) PPC_WEAK_FUNC(sub_82350ED8);
PPC_FUNC_IMPL(__imp__sub_82350ED8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x82350f1c
	goto loc_82350F1C;
loc_82350EF4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82350f38
	if (cr0.eq) goto loc_82350F38;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82350F1C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// ble cr6,0x82350ef4
	if (!cr6.gt) goto loc_82350EF4;
	// lis r3,15
	ctx.r3.s64 = 983040;
	// ori r3,r3,16959
	ctx.r3.u64 = ctx.r3.u64 | 16959;
loc_82350F30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
loc_82350F38:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82350f30
	goto loc_82350F30;
}

__attribute__((alias("__imp__sub_82350F40"))) PPC_WEAK_FUNC(sub_82350F40);
PPC_FUNC_IMPL(__imp__sub_82350F40) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82350ed8
	sub_82350ED8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82350ed8
	sub_82350ED8(ctx, base);
	// cmpw cr6,r27,r3
	cr6.compare<int32_t>(r27.s32, ctx.r3.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82350f90
	if (cr6.lt) goto loc_82350F90;
	// li r11,0
	r11.s64 = 0;
loc_82350F90:
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// beq 0x82351018
	if (cr0.eq) goto loc_82351018;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82350ed8
	sub_82350ED8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82350ed8
	sub_82350ED8(ctx, base);
	// cmpw cr6,r27,r3
	cr6.compare<int32_t>(r27.s32, ctx.r3.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82350fc8
	if (cr6.lt) goto loc_82350FC8;
	// li r11,0
	r11.s64 = 0;
loc_82350FC8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82351084
	if (!cr0.eq) goto loc_82351084;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82350ed8
	sub_82350ED8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82350ed8
	sub_82350ED8(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82351000
	if (cr6.lt) goto loc_82351000;
	// li r11,0
	r11.s64 = 0;
loc_82351000:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82351010
	if (cr0.eq) goto loc_82351010;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x82351088
	goto loc_82351088;
loc_82351010:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82351088
	goto loc_82351088;
loc_82351018:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82350ed8
	sub_82350ED8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82350ed8
	sub_82350ED8(ctx, base);
	// cmpw cr6,r27,r3
	cr6.compare<int32_t>(r27.s32, ctx.r3.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82351040
	if (cr6.lt) goto loc_82351040;
	// li r11,0
	r11.s64 = 0;
loc_82351040:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82351010
	if (!cr0.eq) goto loc_82351010;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82350ed8
	sub_82350ED8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82350ed8
	sub_82350ED8(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82351078
	if (cr6.lt) goto loc_82351078;
	// li r11,0
	r11.s64 = 0;
loc_82351078:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bne 0x82351088
	if (!cr0.eq) goto loc_82351088;
loc_82351084:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82351088:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82351090"))) PPC_WEAK_FUNC(sub_82351090);
PPC_FUNC_IMPL(__imp__sub_82351090) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// addi r31,r30,-4
	r31.s64 = r30.s64 + -4;
loc_823510B0:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82350ed8
	sub_82350ED8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82350ed8
	sub_82350ED8(ctx, base);
	// cmpw cr6,r3,r28
	cr6.compare<int32_t>(ctx.r3.s32, r28.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x823510dc
	if (cr6.lt) goto loc_823510DC;
	// li r11,0
	r11.s64 = 0;
loc_823510DC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823510f8
	if (cr0.eq) goto loc_823510F8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// b 0x823510b0
	goto loc_823510B0;
loc_823510F8:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82351104"))) PPC_WEAK_FUNC(sub_82351104);
PPC_FUNC_IMPL(__imp__sub_82351104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351108"))) PPC_WEAK_FUNC(sub_82351108);
PPC_FUNC_IMPL(__imp__sub_82351108) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// std r7,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r7.u64);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// std r8,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r8.u64);
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// addze r30,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r30.s64 = temp.s64;
	// b 0x82351190
	goto loc_82351190;
loc_8235113C:
	// rlwinm r28,r30,2,0,29
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwzx r4,r28,r29
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// bl 0x82350ed8
	sub_82350ED8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82350ed8
	sub_82350ED8(ctx, base);
	// cmpw cr6,r25,r3
	cr6.compare<int32_t>(r25.s32, ctx.r3.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x8235116c
	if (cr6.lt) goto loc_8235116C;
	// li r11,0
	r11.s64 = 0;
loc_8235116C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82351198
	if (cr0.eq) goto loc_82351198;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
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
loc_82351190:
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(r31.s32, r27.s32, xer);
	// bgt cr6,0x8235113c
	if (cr6.gt) goto loc_8235113C;
loc_82351198:
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823511A8"))) PPC_WEAK_FUNC(sub_823511A8);
PPC_FUNC_IMPL(__imp__sub_823511A8) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823316b8
	sub_823316B8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82351210
	if (!cr6.lt) goto loc_82351210;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_823511F8:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x82351228
	if (cr0.eq) goto loc_82351228;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x823511f8
	if (cr6.lt) goto loc_823511F8;
loc_82351210:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82351214:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82351228:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82351214
	goto loc_82351214;
}

__attribute__((alias("__imp__sub_82351230"))) PPC_WEAK_FUNC(sub_82351230);
PPC_FUNC_IMPL(__imp__sub_82351230) {
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
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// std r28,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, r28.u64);
	// bl 0x82350ed8
	sub_82350ED8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82350ed8
	sub_82350ED8(ctx, base);
	// cmpw cr6,r3,r27
	cr6.compare<int32_t>(ctx.r3.s32, r27.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82351280
	if (cr6.lt) goto loc_82351280;
	// li r11,0
	r11.s64 = 0;
loc_82351280:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823512a8
	if (cr0.eq) goto loc_823512A8;
	// subf. r5,r31,r30
	ctx.r5.s64 = r30.s64 - r31.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble 0x823512a0
	if (!cr0.gt) goto loc_823512A0;
	// subf r11,r5,r30
	r11.s64 = r30.s64 - ctx.r5.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
loc_823512A0:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x823512c0
	goto loc_823512C0;
loc_823512A8:
	// lwz r11,184(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82351090
	sub_82351090(ctx, base);
loc_823512C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823512C8"))) PPC_WEAK_FUNC(sub_823512C8);
PPC_FUNC_IMPL(__imp__sub_823512C8) {
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
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// beq cr6,0x82351310
	if (cr6.eq) goto loc_82351310;
loc_823512EC:
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82351090
	sub_82351090(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x823512ec
	if (!cr6.eq) goto loc_823512EC;
loc_82351310:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82351318"))) PPC_WEAK_FUNC(sub_82351318);
PPC_FUNC_IMPL(__imp__sub_82351318) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// std r8,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r8.u64);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// std r25,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, r25.u64);
	// mr r24,r30
	r24.u64 = r30.u64;
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x823513b0
	goto loc_823513B0;
loc_82351350:
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r28,-4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// bl 0x82350ed8
	sub_82350ED8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82350ed8
	sub_82350ED8(ctx, base);
	// cmpw cr6,r23,r3
	cr6.compare<int32_t>(r23.s32, ctx.r3.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82351388
	if (cr6.lt) goto loc_82351388;
	// li r11,0
	r11.s64 = 0;
loc_82351388:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82351394
	if (cr0.eq) goto loc_82351394;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_82351394:
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
loc_823513B0:
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(r31.s32, r27.s32, xer);
	// blt cr6,0x82351350
	if (cr6.lt) goto loc_82351350;
	// bne cr6,0x823513d4
	if (!cr6.eq) goto loc_823513D4;
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
loc_823513D4:
	// lwz r11,216(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82351108
	sub_82351108(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_823513FC"))) PPC_WEAK_FUNC(sub_823513FC);
PPC_FUNC_IMPL(__imp__sub_823513FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351400"))) PPC_WEAK_FUNC(sub_82351400);
PPC_FUNC_IMPL(__imp__sub_82351400) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
loc_82351420:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82350ed8
	sub_82350ED8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82350ed8
	sub_82350ED8(ctx, base);
	// cmpw cr6,r28,r3
	cr6.compare<int32_t>(r28.s32, ctx.r3.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x8235144c
	if (cr6.lt) goto loc_8235144C;
	// li r11,0
	r11.s64 = 0;
loc_8235144C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235145c
	if (cr0.eq) goto loc_8235145C;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x82351420
	goto loc_82351420;
loc_8235145C:
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82350ed8
	sub_82350ED8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82350ed8
	sub_82350ED8(ctx, base);
	// cmpw cr6,r3,r28
	cr6.compare<int32_t>(ctx.r3.s32, r28.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x8235148c
	if (cr6.lt) goto loc_8235148C;
	// li r11,0
	r11.s64 = 0;
loc_8235148C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8235145c
	if (!cr0.eq) goto loc_8235145C;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bge cr6,0x823514b4
	if (!cr6.lt) goto loc_823514B4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82351420
	goto loc_82351420;
loc_823514B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823514C0"))) PPC_WEAK_FUNC(sub_823514C0);
PPC_FUNC_IMPL(__imp__sub_823514C0) {
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
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x82351514
	if (cr6.eq) goto loc_82351514;
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// b 0x8235150c
	goto loc_8235150C;
loc_823514EC:
	// lwz r11,184(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82351230
	sub_82351230(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8235150C:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x823514ec
	if (!cr6.eq) goto loc_823514EC;
loc_82351514:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8235151C"))) PPC_WEAK_FUNC(sub_8235151C);
PPC_FUNC_IMPL(__imp__sub_8235151C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351520"))) PPC_WEAK_FUNC(sub_82351520);
PPC_FUNC_IMPL(__imp__sub_82351520) {
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
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// subf r11,r30,r4
	r11.s64 = ctx.r4.s64 - r30.s64;
	// srawi r29,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r29.s64 = r11.s32 >> 2;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// blt cr6,0x82351594
	if (cr6.lt) goto loc_82351594;
	// addi r11,r29,-2
	r11.s64 = r29.s64 + -2;
	// lwz r26,184(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// rldicr r8,r26,32,63
	ctx.r8.u64 = __builtin_rotateleft64(r26.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// addze r31,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r31.s64 = temp.s64;
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r30
	r28.u64 = r11.u64 + r30.u64;
	// b 0x82351574
	goto loc_82351574;
loc_82351568:
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r28,r28,-4
	r28.s64 = r28.s64 + -4;
	// rldicr r8,r26,32,31
	ctx.r8.u64 = __builtin_rotateleft64(r26.u64, 32) & 0xFFFFFFFF00000000;
loc_82351574:
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
	// bl 0x82351318
	sub_82351318(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x82351568
	if (!cr6.eq) goto loc_82351568;
loc_82351594:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8235159C"))) PPC_WEAK_FUNC(sub_8235159C);
PPC_FUNC_IMPL(__imp__sub_8235159C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823515A0"))) PPC_WEAK_FUNC(sub_823515A0);
PPC_FUNC_IMPL(__imp__sub_823515A0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,-19064(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19064);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82352058
	sub_82352058(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r11,r11,-19088
	r11.s64 = r11.s64 + -19088;
	// stw r27,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r27.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-19100
	ctx.r4.s64 = r11.s64 + -19100;
	// stw r10,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
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
	// cntlzw r8,r3
	ctx.r8.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r11,0
	r11.s64 = 0;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// addi r9,r30,44
	ctx.r9.s64 = r30.s64 + 44;
	// stb r8,28(r30)
	PPC_STORE_U8(r30.u32 + 28, ctx.r8.u8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823515A8"))) PPC_WEAK_FUNC(sub_823515A8);
PPC_FUNC_IMPL(__imp__sub_823515A8) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82352058
	sub_82352058(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r11,r11,-19088
	r11.s64 = r11.s64 + -19088;
	// stw r27,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r27.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-19100
	ctx.r4.s64 = r11.s64 + -19100;
	// stw r10,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
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
	// cntlzw r8,r3
	ctx.r8.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r11,0
	r11.s64 = 0;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// addi r9,r30,44
	ctx.r9.s64 = r30.s64 + 44;
	// stb r8,28(r30)
	PPC_STORE_U8(r30.u32 + 28, ctx.r8.u8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82351690"))) PPC_WEAK_FUNC(sub_82351690);
PPC_FUNC_IMPL(__imp__sub_82351690) {
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
	// bl 0x82350ec8
	sub_82350EC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823516B8"))) PPC_WEAK_FUNC(sub_823516B8);
PPC_FUNC_IMPL(__imp__sub_823516B8) {
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
	// lwz r16,-19000(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19000);
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
	// beq 0x82351700
	if (cr0.eq) goto loc_82351700;
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
loc_82351700:
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82351720
	if (cr0.eq) goto loc_82351720;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82351720:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,-19108
	r11.s64 = r11.s64 + -19108;
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

__attribute__((alias("__imp__sub_823516C0"))) PPC_WEAK_FUNC(sub_823516C0);
PPC_FUNC_IMPL(__imp__sub_823516C0) {
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
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82351700
	if (cr0.eq) goto loc_82351700;
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
loc_82351700:
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82351720
	if (cr0.eq) goto loc_82351720;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82351720:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,-19108
	r11.s64 = r11.s64 + -19108;
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

__attribute__((alias("__imp__sub_82351744"))) PPC_WEAK_FUNC(sub_82351744);
PPC_FUNC_IMPL(__imp__sub_82351744) {
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
	// bl 0x82350ec8
	sub_82350EC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235176C"))) PPC_WEAK_FUNC(sub_8235176C);
PPC_FUNC_IMPL(__imp__sub_8235176C) {
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

__attribute__((alias("__imp__sub_82351798"))) PPC_WEAK_FUNC(sub_82351798);
PPC_FUNC_IMPL(__imp__sub_82351798) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// subf r11,r3,r29
	r11.s64 = r29.s64 - ctx.r3.s64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// ble cr6,0x823517f8
	if (!cr6.gt) goto loc_823517F8;
	// lwz r28,168(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r30,r3,64
	r30.s64 = ctx.r3.s64 + 64;
	// rldicr r7,r28,32,63
	ctx.r7.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823514c0
	sub_823514C0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// rldicr r7,r28,32,63
	ctx.r7.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823512c8
	sub_823512C8(ctx, base);
	// b 0x82351808
	goto loc_82351808;
loc_823517F8:
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x823514c0
	sub_823514C0(ctx, base);
loc_82351808:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82351810"))) PPC_WEAK_FUNC(sub_82351810);
PPC_FUNC_IMPL(__imp__sub_82351810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// subf r10,r3,r11
	ctx.r10.s64 = r11.s64 - ctx.r3.s64;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// srawi r5,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// stw r9,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r9.u32);
	// bl 0x82351318
	sub_82351318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351860"))) PPC_WEAK_FUNC(sub_82351860);
PPC_FUNC_IMPL(__imp__sub_82351860) {
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
	// bl 0x823516c0
	sub_823516C0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82351890
	if (cr0.eq) goto loc_82351890;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82351890:
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

__attribute__((alias("__imp__sub_823518AC"))) PPC_WEAK_FUNC(sub_823518AC);
PPC_FUNC_IMPL(__imp__sub_823518AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823518B0"))) PPC_WEAK_FUNC(sub_823518B0);
PPC_FUNC_IMPL(__imp__sub_823518B0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// subf r30,r29,r31
	r30.s64 = r31.s64 - r29.s64;
	// b 0x823518f4
	goto loc_823518F4;
loc_823518D4:
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82351810
	sub_82351810(ctx, base);
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
loc_823518F4:
	// rlwinm r11,r30,0,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bgt cr6,0x823518d4
	if (cr6.gt) goto loc_823518D4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82351908"))) PPC_WEAK_FUNC(sub_82351908);
PPC_FUNC_IMPL(__imp__sub_82351908) {
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
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// std r8,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r8.u64);
	// lwz r26,216(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rldicr r6,r26,32,63
	ctx.r6.u64 = __builtin_rotateleft64(r26.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r28,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, r28.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82351520
	sub_82351520(ctx, base);
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(r29.u32, r25.u32, xer);
	// bge cr6,0x823519bc
	if (!cr6.lt) goto loc_823519BC;
loc_82351950:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r27,0(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82350ed8
	sub_82350ED8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82350ed8
	sub_82350ED8(ctx, base);
	// cmpw cr6,r24,r3
	cr6.compare<int32_t>(r24.s32, ctx.r3.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82351980
	if (cr6.lt) goto loc_82351980;
	// li r11,0
	r11.s64 = 0;
loc_82351980:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823519b0
	if (cr0.eq) goto loc_823519B0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r10,r31,r29
	ctx.r10.s64 = r29.s64 - r31.s64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rldicr r8,r26,32,31
	ctx.r8.u64 = __builtin_rotateleft64(r26.u64, 32) & 0xFFFFFFFF00000000;
	// srawi r5,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82351318
	sub_82351318(ctx, base);
loc_823519B0:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(r30.u32, r25.u32, xer);
	// blt cr6,0x82351950
	if (cr6.lt) goto loc_82351950;
loc_823519BC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rldicr r6,r26,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r26.u64, 32) & 0xFFFFFFFF00000000;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823518b0
	sub_823518B0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_823519D8"))) PPC_WEAK_FUNC(sub_823519D8);
PPC_FUNC_IMPL(__imp__sub_823519D8) {
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
	// std r8,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r8.u64);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// ble cr6,0x82351aac
	if (!cr6.gt) goto loc_82351AAC;
	// lwz r26,200(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
loc_82351A0C:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x82351a94
	if (cr6.eq) goto loc_82351A94;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rldicr r7,r26,32,31
	ctx.r7.u64 = __builtin_rotateleft64(r26.u64, 32) & 0xFFFFFFFF00000000;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addi r5,r31,-4
	ctx.r5.s64 = r31.s64 + -4;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// bl 0x82350f40
	sub_82350F40(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// rldicr r7,r26,32,31
	ctx.r7.u64 = __builtin_rotateleft64(r26.u64, 32) & 0xFFFFFFFF00000000;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82351400
	sub_82351400(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// rldicr r8,r26,32,31
	ctx.r8.u64 = __builtin_rotateleft64(r26.u64, 32) & 0xFFFFFFFF00000000;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x823519d8
	sub_823519D8(ctx, base);
	// subf r11,r30,r29
	r11.s64 = r29.s64 - r30.s64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// bgt cr6,0x82351a0c
	if (cr6.gt) goto loc_82351A0C;
	// b 0x82351aac
	goto loc_82351AAC;
loc_82351A94:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// rldicr r8,r26,32,31
	ctx.r8.u64 = __builtin_rotateleft64(r26.u64, 32) & 0xFFFFFFFF00000000;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82351908
	sub_82351908(ctx, base);
loc_82351AAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82351AB4"))) PPC_WEAK_FUNC(sub_82351AB4);
PPC_FUNC_IMPL(__imp__sub_82351AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351AB8"))) PPC_WEAK_FUNC(sub_82351AB8);
PPC_FUNC_IMPL(__imp__sub_82351AB8) {
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
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x82351b30
	if (cr6.eq) goto loc_82351B30;
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// b 0x82351af4
	goto loc_82351AF4;
loc_82351AEC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
loc_82351AF4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82351aec
	if (!cr6.eq) goto loc_82351AEC;
	// lwz r29,168(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rldicr r8,r29,32,63
	ctx.r8.u64 = __builtin_rotateleft64(r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823519d8
	sub_823519D8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rldicr r6,r29,32,63
	ctx.r6.u64 = __builtin_rotateleft64(r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82351798
	sub_82351798(ctx, base);
loc_82351B30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82351B38"))) PPC_WEAK_FUNC(sub_82351B38);
PPC_FUNC_IMPL(__imp__sub_82351B38) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// addi r23,r5,-1
	r23.s64 = ctx.r5.s64 + -1;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// lwz r11,24(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// blt cr6,0x82351b74
	if (cr6.lt) goto loc_82351B74;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
loc_82351B74:
	// lwz r11,20(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 20);
	// lwz r24,0(r10)
	r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(r11.s32, r24.s32, xer);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// blt cr6,0x82351b98
	if (cr6.lt) goto loc_82351B98;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_82351B98:
	// addi r25,r20,32
	r25.s64 = r20.s64 + 32;
	// lwz r10,4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// lwz r16,0(r11)
	r16.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r17,0
	r17.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// lwz r19,4(r10)
	r19.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r19,r10
	cr6.compare<uint32_t>(r19.u32, ctx.r10.u32, xer);
	// bge cr6,0x82351bdc
	if (!cr6.lt) goto loc_82351BDC;
	// rlwinm r10,r19,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x8218fdf8
	sub_8218FDF8(ctx, base);
	// b 0x82351bf4
	goto loc_82351BF4;
loc_82351BDC:
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// subf r5,r11,r19
	ctx.r5.s64 = r19.s64 - r11.s64;
	// bl 0x8218fe50
	sub_8218FE50(ctx, base);
loc_82351BF4:
	// addi r28,r20,44
	r28.s64 = r20.s64 + 44;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r19,r10
	cr6.compare<uint32_t>(r19.u32, ctx.r10.u32, xer);
	// bge cr6,0x82351c28
	if (!cr6.lt) goto loc_82351C28;
	// rlwinm r10,r19,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x8218fdf8
	sub_8218FDF8(ctx, base);
	// b 0x82351c40
	goto loc_82351C40;
loc_82351C28:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// subf r5,r11,r19
	ctx.r5.s64 = r19.s64 - r11.s64;
	// bl 0x8218fe50
	sub_8218FE50(ctx, base);
loc_82351C40:
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// ble cr6,0x82351c78
	if (!cr6.gt) goto loc_82351C78;
	// mr r11,r17
	r11.u64 = r17.u64;
loc_82351C50:
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r19
	cr6.compare<int32_t>(ctx.r10.s32, r19.s32, xer);
	// stwx r7,r11,r8
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stwx r9,r11,r8
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// blt cr6,0x82351c50
	if (cr6.lt) goto loc_82351C50;
loc_82351C78:
	// addi r18,r31,1
	r18.s64 = r31.s64 + 1;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r20.u32);
	// rldicr r6,r24,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r24.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r4,48(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 48);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r18.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82351ab8
	sub_82351AB8(ctx, base);
	// mr r31,r18
	r31.u64 = r18.u64;
	// b 0x82351e00
	goto loc_82351E00;
loc_82351CA0:
	// mr r26,r17
	r26.u64 = r17.u64;
	// mr r27,r17
	r27.u64 = r17.u64;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// ble cr6,0x82351d54
	if (!cr6.gt) goto loc_82351D54;
	// mr r29,r17
	r29.u64 = r17.u64;
loc_82351CB4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,16(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 16);
	// lwzx r30,r29,r11
	r30.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// beq cr6,0x82351d2c
	if (cr6.eq) goto loc_82351D2C;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82351d2c
	if (!cr6.eq) goto loc_82351D2C;
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82351d2c
	if (cr0.eq) goto loc_82351D2C;
	// cmpw cr6,r31,r23
	cr6.compare<int32_t>(r31.s32, r23.s32, xer);
	// beq cr6,0x82351d40
	if (cr6.eq) goto loc_82351D40;
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// addi r5,r31,1
	ctx.r5.s64 = r31.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82351d40
	if (!cr0.eq) goto loc_82351D40;
loc_82351D2C:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r27,r19
	cr6.compare<int32_t>(r27.s32, r19.s32, xer);
	// blt cr6,0x82351cb4
	if (cr6.lt) goto loc_82351CB4;
	// b 0x82351d54
	goto loc_82351D54;
loc_82351D40:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,1
	r26.s64 = 1;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r31.u32);
loc_82351D54:
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82351dfc
	if (!cr0.eq) goto loc_82351DFC;
	// mr r27,r17
	r27.u64 = r17.u64;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// ble cr6,0x82351dfc
	if (!cr6.gt) goto loc_82351DFC;
	// mr r29,r17
	r29.u64 = r17.u64;
loc_82351D6C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,16(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 16);
	// lwzx r30,r29,r11
	r30.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// beq cr6,0x82351ddc
	if (cr6.eq) goto loc_82351DDC;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82351ddc
	if (!cr6.eq) goto loc_82351DDC;
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82351ddc
	if (cr0.eq) goto loc_82351DDC;
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// addi r5,r31,1
	ctx.r5.s64 = r31.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82351df0
	if (cr0.eq) goto loc_82351DF0;
loc_82351DDC:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r27,r19
	cr6.compare<int32_t>(r27.s32, r19.s32, xer);
	// blt cr6,0x82351d6c
	if (cr6.lt) goto loc_82351D6C;
	// b 0x82351dfc
	goto loc_82351DFC;
loc_82351DF0:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r31.u32);
loc_82351DFC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82351E00:
	// cmpw cr6,r31,r24
	cr6.compare<int32_t>(r31.s32, r24.s32, xer);
	// ble cr6,0x82351ca0
	if (!cr6.gt) goto loc_82351CA0;
	// cmpw cr6,r16,r24
	cr6.compare<int32_t>(r16.s32, r24.s32, xer);
	// bge cr6,0x82351ed4
	if (!cr6.lt) goto loc_82351ED4;
loc_82351E10:
	// addi r29,r16,1
	r29.s64 = r16.s64 + 1;
	// mr r26,r17
	r26.u64 = r17.u64;
	// mr r27,r17
	r27.u64 = r17.u64;
	// cmpw cr6,r29,r24
	cr6.compare<int32_t>(r29.s32, r24.s32, xer);
	// bgt cr6,0x82351ed4
	if (cr6.gt) goto loc_82351ED4;
	// mr r30,r17
	r30.u64 = r17.u64;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// ble cr6,0x82351ebc
	if (!cr6.gt) goto loc_82351EBC;
	// mr r28,r17
	r28.u64 = r17.u64;
loc_82351E34:
	// lwz r11,16(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 16);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// beq cr6,0x82351ea0
	if (cr6.eq) goto loc_82351EA0;
	// mr r31,r18
	r31.u64 = r18.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// b 0x82351e70
	goto loc_82351E70;
loc_82351E4C:
	// bne 0x82351e6c
	if (!cr0.eq) goto loc_82351E6C;
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82351E6C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82351E70:
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82351e4c
	if (!cr6.gt) goto loc_82351E4C;
	// beq 0x82351e84
	if (cr0.eq) goto loc_82351E84;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
loc_82351E84:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwzx r11,r28,r11
	r11.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82351ea0
	if (cr6.eq) goto loc_82351EA0;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// ble cr6,0x82351ea0
	if (!cr6.gt) goto loc_82351EA0;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_82351EA0:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r30,r19
	cr6.compare<int32_t>(r30.s32, r19.s32, xer);
	// blt cr6,0x82351e34
	if (cr6.lt) goto loc_82351E34;
	// cmpw cr6,r26,r27
	cr6.compare<int32_t>(r26.s32, r27.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x82351ec0
	if (cr6.gt) goto loc_82351EC0;
loc_82351EBC:
	// mr r11,r17
	r11.u64 = r17.u64;
loc_82351EC0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82351ed4
	if (cr0.eq) goto loc_82351ED4;
	// mr r16,r29
	r16.u64 = r29.u64;
	// cmpw cr6,r29,r24
	cr6.compare<int32_t>(r29.s32, r24.s32, xer);
	// blt cr6,0x82351e10
	if (cr6.lt) goto loc_82351E10;
loc_82351ED4:
	// lbz r11,28(r20)
	r11.u64 = PPC_LOAD_U8(r20.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82352048
	if (cr0.eq) goto loc_82352048;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r24
	r31.u64 = r24.u64;
	// addi r21,r11,14920
	r21.s64 = r11.s64 + 14920;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// cmpw cr6,r24,r18
	cr6.compare<int32_t>(r24.s32, r18.s32, xer);
	// addi r30,r11,18840
	r30.s64 = r11.s64 + 18840;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r22,r11,2936
	r22.s64 = r11.s64 + 2936;
	// blt cr6,0x82351ff0
	if (cr6.lt) goto loc_82351FF0;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r25,r11,-18940
	r25.s64 = r11.s64 + -18940;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r24,r11,25924
	r24.s64 = r11.s64 + 25924;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r26,r11,-18944
	r26.s64 = r11.s64 + -18944;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r23,r11,-21448
	r23.s64 = r11.s64 + -21448;
loc_82351F24:
	// cmpwi cr6,r31,10
	cr6.compare<int32_t>(r31.s32, 10, xer);
	// bge cr6,0x82351f38
	if (!cr6.lt) goto loc_82351F38;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
loc_82351F38:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82357818
	sub_82357818(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r28,r17
	r28.u64 = r17.u64;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// ble cr6,0x82351fd8
	if (!cr6.gt) goto loc_82351FD8;
	// rlwinm r27,r31,4,0,27
	r27.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r29,r17
	r29.u64 = r17.u64;
loc_82351F60:
	// lwz r11,12(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 12);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82351f94
	if (cr0.eq) goto loc_82351F94;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// b 0x82351fc0
	goto loc_82351FC0;
loc_82351F94:
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82351fc0
	if (cr0.eq) goto loc_82351FC0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_82351FC0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r19
	cr6.compare<int32_t>(r28.s32, r19.s32, xer);
	// blt cr6,0x82351f60
	if (cr6.lt) goto loc_82351F60;
loc_82351FD8:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// cmpw cr6,r31,r18
	cr6.compare<int32_t>(r31.s32, r18.s32, xer);
	// bge cr6,0x82351f24
	if (!cr6.lt) goto loc_82351F24;
loc_82351FF0:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-32164
	ctx.r4.s64 = r11.s64 + -32164;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// mr r31,r17
	r31.u64 = r17.u64;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// ble cr6,0x8235203c
	if (!cr6.gt) goto loc_8235203C;
loc_8235200C:
	// lwz r11,16(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bne cr6,0x82352028
	if (!cr6.eq) goto loc_82352028;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// b 0x82352030
	goto loc_82352030;
loc_82352028:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82357818
	sub_82357818(ctx, base);
loc_82352030:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r19
	cr6.compare<int32_t>(r31.s32, r19.s32, xer);
	// blt cr6,0x8235200c
	if (cr6.lt) goto loc_8235200C;
loc_8235203C:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
loc_82352048:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8239bd18
	return;
}

__attribute__((alias("__imp__sub_82352054"))) PPC_WEAK_FUNC(sub_82352054);
PPC_FUNC_IMPL(__imp__sub_82352054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352058"))) PPC_WEAK_FUNC(sub_82352058);
PPC_FUNC_IMPL(__imp__sub_82352058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// addi r11,r11,-18932
	r11.s64 = r11.s64 + -18932;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82352070"))) PPC_WEAK_FUNC(sub_82352070);
PPC_FUNC_IMPL(__imp__sub_82352070) {
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
	// addi r11,r11,-19108
	r11.s64 = r11.s64 + -19108;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x8235209c
	if (cr0.eq) goto loc_8235209C;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8235209C:
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

__attribute__((alias("__imp__sub_823520B4"))) PPC_WEAK_FUNC(sub_823520B4);
PPC_FUNC_IMPL(__imp__sub_823520B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823520B8"))) PPC_WEAK_FUNC(sub_823520B8);
PPC_FUNC_IMPL(__imp__sub_823520B8) {
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
	// lwz r16,-18896(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18896);
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
	// stw r5,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// stw r6,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,-18916
	r11.s64 = r11.s64 + -18916;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_823520C0"))) PPC_WEAK_FUNC(sub_823520C0);
PPC_FUNC_IMPL(__imp__sub_823520C0) {
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
	// stw r5,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// stw r6,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,-18916
	r11.s64 = r11.s64 + -18916;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82352120"))) PPC_WEAK_FUNC(sub_82352120);
PPC_FUNC_IMPL(__imp__sub_82352120) {
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
	// bl 0x82350ec8
	sub_82350EC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82352148"))) PPC_WEAK_FUNC(sub_82352148);
PPC_FUNC_IMPL(__imp__sub_82352148) {
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
	// addi r11,r11,-19108
	r11.s64 = r11.s64 + -19108;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82352174
	if (cr0.eq) goto loc_82352174;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82352174:
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

__attribute__((alias("__imp__sub_8235218C"))) PPC_WEAK_FUNC(sub_8235218C);
PPC_FUNC_IMPL(__imp__sub_8235218C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352190"))) PPC_WEAK_FUNC(sub_82352190);
PPC_FUNC_IMPL(__imp__sub_82352190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r5,-1
	r11.s64 = ctx.r5.s64 + -1;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, r11.u32);
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// blt cr6,0x823521b4
	if (cr6.lt) goto loc_823521B4;
	// addi r11,r1,-12
	r11.s64 = ctx.r1.s64 + -12;
loc_823521B4:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823521BC"))) PPC_WEAK_FUNC(sub_823521BC);
PPC_FUNC_IMPL(__imp__sub_823521BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823521C0"))) PPC_WEAK_FUNC(sub_823521C0);
PPC_FUNC_IMPL(__imp__sub_823521C0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r28,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r28.s64 = r11.s32 >> 4;
	// bl 0x8234afe8
	sub_8234AFE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r28,-1
	r11.s64 = r28.s64 + -1;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bne cr6,0x82352238
	if (!cr6.eq) goto loc_82352238;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r4,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 1;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stw r4,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r4.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// b 0x823522b0
	goto loc_823522B0;
loc_82352238:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r29,r4,1
	r29.s64 = ctx.r4.s64 + 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r29,4,0,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
loc_823522B0:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823522BC"))) PPC_WEAK_FUNC(sub_823522BC);
PPC_FUNC_IMPL(__imp__sub_823522BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823522C0"))) PPC_WEAK_FUNC(sub_823522C0);
PPC_FUNC_IMPL(__imp__sub_823522C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,-18844
	r11.s64 = r11.s64 + -18844;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823522D0"))) PPC_WEAK_FUNC(sub_823522D0);
PPC_FUNC_IMPL(__imp__sub_823522D0) {
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
	// addi r11,r11,-18844
	r11.s64 = r11.s64 + -18844;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x823522fc
	if (cr0.eq) goto loc_823522FC;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_823522FC:
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

__attribute__((alias("__imp__sub_82352314"))) PPC_WEAK_FUNC(sub_82352314);
PPC_FUNC_IMPL(__imp__sub_82352314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352318"))) PPC_WEAK_FUNC(sub_82352318);
PPC_FUNC_IMPL(__imp__sub_82352318) {
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
	// lwz r16,-18808(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18808);
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
	// stw r5,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// addi r11,r11,-18828
	r11.s64 = r11.s64 + -18828;
	// stw r6,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82352320"))) PPC_WEAK_FUNC(sub_82352320);
PPC_FUNC_IMPL(__imp__sub_82352320) {
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
	// stw r5,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// addi r11,r11,-18828
	r11.s64 = r11.s64 + -18828;
	// stw r6,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82352380"))) PPC_WEAK_FUNC(sub_82352380);
PPC_FUNC_IMPL(__imp__sub_82352380) {
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
	// bl 0x823522c0
	sub_823522C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823523A8"))) PPC_WEAK_FUNC(sub_823523A8);
PPC_FUNC_IMPL(__imp__sub_823523A8) {
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
	// addi r11,r11,-18844
	r11.s64 = r11.s64 + -18844;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x823523d4
	if (cr0.eq) goto loc_823523D4;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_823523D4:
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

__attribute__((alias("__imp__sub_823523EC"))) PPC_WEAK_FUNC(sub_823523EC);
PPC_FUNC_IMPL(__imp__sub_823523EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823523F0"))) PPC_WEAK_FUNC(sub_823523F0);
PPC_FUNC_IMPL(__imp__sub_823523F0) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8234afe8
	sub_8234AFE8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r11,r3,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
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

__attribute__((alias("__imp__sub_82352438"))) PPC_WEAK_FUNC(sub_82352438);
PPC_FUNC_IMPL(__imp__sub_82352438) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// srawi r28,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r28.s64 = r11.s32 >> 4;
	// cmpw cr6,r10,r28
	cr6.compare<int32_t>(ctx.r10.s32, r28.s32, xer);
	// bge cr6,0x823524c4
	if (!cr6.lt) goto loc_823524C4;
loc_82352470:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823524ac
	if (!cr0.eq) goto loc_823524AC;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82352c28
	sub_82352C28(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823524c4
	if (!cr0.eq) goto loc_823524C4;
loc_823524AC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// blt cr6,0x82352470
	if (cr6.lt) goto loc_82352470;
loc_823524C4:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpw cr6,r9,r28
	cr6.compare<int32_t>(ctx.r9.s32, r28.s32, xer);
	// bne cr6,0x823524e0
	if (!cr6.eq) goto loc_823524E0;
	// li r11,-1
	r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x823525ac
	goto loc_823525AC;
loc_823524E0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r28,-1
	r11.s64 = r28.s64 + -1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// blt cr6,0x82352508
	if (cr6.lt) goto loc_82352508;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_82352508:
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r27,r28,4,0,27
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
loc_82352510:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// add r3,r27,r11
	ctx.r3.u64 = r27.u64 + r11.u64;
	// bl 0x82352c28
	sub_82352C28(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82352538
	if (!cr0.eq) goto loc_82352538;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// addi r27,r27,-16
	r27.s64 = r27.s64 + -16;
	// b 0x82352510
	goto loc_82352510;
loc_82352538:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r28,4,0,27
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r8,r28,1
	ctx.r8.s64 = r28.s64 + 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 8, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 12, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r8,20(r29)
	PPC_STORE_U32(r29.u32 + 20, ctx.r8.u32);
	// stw r11,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r11.u32);
loc_823525AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823525B4"))) PPC_WEAK_FUNC(sub_823525B4);
PPC_FUNC_IMPL(__imp__sub_823525B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823525B8"))) PPC_WEAK_FUNC(sub_823525B8);
PPC_FUNC_IMPL(__imp__sub_823525B8) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8234afe8
	sub_8234AFE8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x823525f4
	if (!cr6.eq) goto loc_823525F4;
	// li r11,-1
	r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82352608
	goto loc_82352608;
loc_823525F4:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82352438
	sub_82352438(ctx, base);
loc_82352608:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82352610"))) PPC_WEAK_FUNC(sub_82352610);
PPC_FUNC_IMPL(__imp__sub_82352610) {
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
	// bl 0x82350ae0
	sub_82350AE0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,-18756
	r11.s64 = r11.s64 + -18756;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r9,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8235265C"))) PPC_WEAK_FUNC(sub_8235265C);
PPC_FUNC_IMPL(__imp__sub_8235265C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352660"))) PPC_WEAK_FUNC(sub_82352660);
PPC_FUNC_IMPL(__imp__sub_82352660) {
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
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82352694
	if (cr0.eq) goto loc_82352694;
	// bl 0x822ecb08
	sub_822ECB08(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// stw r10,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r10.u32);
loc_82352694:
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

__attribute__((alias("__imp__sub_823526A8"))) PPC_WEAK_FUNC(sub_823526A8);
PPC_FUNC_IMPL(__imp__sub_823526A8) {
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
	// bl 0x82350cd0
	sub_82350CD0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823526d8
	if (cr0.eq) goto loc_823526D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_823526D8:
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

__attribute__((alias("__imp__sub_823526F4"))) PPC_WEAK_FUNC(sub_823526F4);
PPC_FUNC_IMPL(__imp__sub_823526F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823526F8"))) PPC_WEAK_FUNC(sub_823526F8);
PPC_FUNC_IMPL(__imp__sub_823526F8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82352728
	if (cr0.eq) goto loc_82352728;
	// bl 0x822ecb08
	sub_822ECB08(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
loc_82352728:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82352790
	if (cr6.lt) goto loc_82352790;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// bl 0x82331848
	sub_82331848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823431b0
	sub_823431B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r10,-18632
	ctx.r3.s64 = ctx.r10.s64 + -18632;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-7564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7564);
	// bl 0x822ac190
	sub_822AC190(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r3,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r3.u32);
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
	// stw r30,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r30.u32);
loc_82352790:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82352798"))) PPC_WEAK_FUNC(sub_82352798);
PPC_FUNC_IMPL(__imp__sub_82352798) {
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
	// bl 0x82350ae0
	sub_82350AE0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-18612
	r11.s64 = r11.s64 + -18612;
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

__attribute__((alias("__imp__sub_823527D4"))) PPC_WEAK_FUNC(sub_823527D4);
PPC_FUNC_IMPL(__imp__sub_823527D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823527D8"))) PPC_WEAK_FUNC(sub_823527D8);
PPC_FUNC_IMPL(__imp__sub_823527D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,-18612
	r11.s64 = r11.s64 + -18612;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82350cd0
	sub_82350CD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823527E8"))) PPC_WEAK_FUNC(sub_823527E8);
PPC_FUNC_IMPL(__imp__sub_823527E8) {
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
	// addi r11,r11,-18612
	r11.s64 = r11.s64 + -18612;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82350cd0
	sub_82350CD0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82352824
	if (cr0.eq) goto loc_82352824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82352824:
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

__attribute__((alias("__imp__sub_82352840"))) PPC_WEAK_FUNC(sub_82352840);
PPC_FUNC_IMPL(__imp__sub_82352840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x8239bcfc
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r29,1
	r29.s64 = 1;
	// cmpw cr6,r4,r5
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// bgt cr6,0x823528c8
	if (cr6.gt) goto loc_823528C8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r31,4(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r9,r11,12
	ctx.r9.s64 = r11.s64 + 12;
loc_8235287C:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,0
	r11.s64 = 0;
loc_82352884:
	// slw r3,r29,r11
	ctx.r3.u64 = r11.u8 & 0x20 ? 0 : (r29.u32 << (r11.u8 & 0x3F));
	// and. r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823528a0
	if (!cr0.eq) goto loc_823528A0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// blt cr6,0x82352884
	if (cr6.lt) goto loc_82352884;
	// li r11,-1
	r11.s64 = -1;
loc_823528A0:
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(r11.s32, ctx.r6.s32, xer);
	// beq cr6,0x82352974
	if (cr6.eq) goto loc_82352974;
	// lbzx r11,r31,r8
	r11.u64 = PPC_LOAD_U8(r31.u32 + ctx.r8.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823528b8
	if (!cr0.eq) goto loc_823528B8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_823528B8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmpw cr6,r8,r5
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, xer);
	// ble cr6,0x8235287c
	if (!cr6.gt) goto loc_8235287C;
loc_823528C8:
	// cntlzw r11,r7
	r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// li r7,999
	ctx.r7.s64 = 999;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r5
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// bgt cr6,0x82352970
	if (cr6.gt) goto loc_82352970;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r4,r11,24
	ctx.r4.u64 = r11.u32 & 0xFF;
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r9,r11,12
	ctx.r9.s64 = r11.s64 + 12;
loc_82352900:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8235291c
	if (!cr6.eq) goto loc_8235291C;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbzx r11,r11,r8
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r8.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82352960
	if (!cr0.eq) goto loc_82352960;
loc_8235291C:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,0
	r11.s64 = 0;
loc_82352924:
	// slw r31,r29,r11
	r31.u64 = r11.u8 & 0x20 ? 0 : (r29.u32 << (r11.u8 & 0x3F));
	// and. r31,r31,r10
	r31.u64 = r31.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82352940
	if (!cr0.eq) goto loc_82352940;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// blt cr6,0x82352924
	if (cr6.lt) goto loc_82352924;
	// li r11,-1
	r11.s64 = -1;
loc_82352940:
	// subf r11,r11,r6
	r11.s64 = ctx.r6.s64 - r11.s64;
	// srawi r10,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = r11.s32 >> 31;
	// xor r11,r11,r10
	r11.u64 = r11.u64 ^ ctx.r10.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// bge cr6,0x82352960
	if (!cr6.lt) goto loc_82352960;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_82352960:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmpw cr6,r8,r5
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, xer);
	// ble cr6,0x82352900
	if (!cr6.gt) goto loc_82352900;
loc_82352970:
	// b 0x8239bd4c
	return;
loc_82352974:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x82352970
	goto loc_82352970;
}

__attribute__((alias("__imp__sub_8235297C"))) PPC_WEAK_FUNC(sub_8235297C);
PPC_FUNC_IMPL(__imp__sub_8235297C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352980"))) PPC_WEAK_FUNC(sub_82352980);
PPC_FUNC_IMPL(__imp__sub_82352980) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x823529ac
	if (cr6.eq) goto loc_823529AC;
	// bl 0x82350128
	sub_82350128(ctx, base);
loc_823529AC:
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
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfs f0,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	f0.f64 = double(temp.f32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 + f31.f64));
	// bl 0x8234ddd0
	sub_8234DDD0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8234dc70
	sub_8234DC70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x8234dc80
	sub_8234DC80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x8234f5d0
	sub_8234F5D0(ctx, base);
	// addi r28,r30,1
	r28.s64 = r30.s64 + 1;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r30
	r29.u64 = r30.u64;
	// b 0x82352a30
	goto loc_82352A30;
loc_82352A14:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8234dc70
	sub_8234DC70(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f30.f64);
	// bne cr6,0x82352a4c
	if (!cr6.eq) goto loc_82352A4C;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_82352A30:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(r28.s32, ctx.r10.s32, xer);
	// blt cr6,0x82352a14
	if (cr6.lt) goto loc_82352A14;
loc_82352A4C:
	// addic. r11,r30,-1
	xer.ca = r30.u32 > 0;
	r11.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82352a78
	if (cr0.lt) goto loc_82352A78;
loc_82352A54:
	// addi r28,r30,-1
	r28.s64 = r30.s64 + -1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8234dc70
	sub_8234DC70(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f30.f64);
	// bne cr6,0x82352a78
	if (!cr6.eq) goto loc_82352A78;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// bge cr6,0x82352a54
	if (!cr6.lt) goto loc_82352A54;
loc_82352A78:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82352b68
	if (cr6.lt) goto loc_82352B68;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82352840
	sub_82352840(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8234dc80
	sub_8234DC80(ctx, base);
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82352b48
	if (cr0.eq) goto loc_82352B48;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r30,4,0,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// lbzx r11,r8,r30
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + r30.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82352b48
	if (!cr0.eq) goto loc_82352B48;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823501c0
	sub_823501C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82352b48
	if (cr0.eq) goto loc_82352B48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82334630
	sub_82334630(ctx, base);
	// lbz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 12);
	// li r11,0
	r11.s64 = 0;
loc_82352AF8:
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r9,r9,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// and. r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82352b18
	if (!cr0.eq) goto loc_82352B18;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// blt cr6,0x82352af8
	if (cr6.lt) goto loc_82352AF8;
	// li r11,-1
	r11.s64 = -1;
loc_82352B18:
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x82352b5c
	if (!cr6.eq) goto loc_82352B5C;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82352b68
	goto loc_82352B68;
loc_82352B48:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_82352B5C:
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82352B68:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82352B78"))) PPC_WEAK_FUNC(sub_82352B78);
PPC_FUNC_IMPL(__imp__sub_82352B78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// li r11,0
	r11.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
loc_82352B94:
	// slw r9,r5,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (r11.u8 & 0x3F));
	// and. r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82352bb0
	if (!cr0.eq) goto loc_82352BB0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// blt cr6,0x82352b94
	if (cr6.lt) goto loc_82352B94;
	// li r11,-1
	r11.s64 = -1;
loc_82352BB0:
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// bge cr6,0x82352c20
	if (!cr6.lt) goto loc_82352C20;
	// rlwinm r8,r3,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
loc_82352BD0:
	// add r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 + ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
loc_82352BDC:
	// slw r4,r5,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// and. r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 & ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82352bf8
	if (!cr0.eq) goto loc_82352BF8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// blt cr6,0x82352bdc
	if (cr6.lt) goto loc_82352BDC;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82352BF8:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// blt cr6,0x82352bd0
	if (cr6.lt) goto loc_82352BD0;
loc_82352C20:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82352C28"))) PPC_WEAK_FUNC(sub_82352C28);
PPC_FUNC_IMPL(__imp__sub_82352C28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82352c54
	if (!cr6.lt) goto loc_82352C54;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_82352C3C:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x82352c5c
	if (cr0.eq) goto loc_82352C5C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82352c3c
	if (cr6.lt) goto loc_82352C3C;
loc_82352C54:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82352C5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82352C64"))) PPC_WEAK_FUNC(sub_82352C64);
PPC_FUNC_IMPL(__imp__sub_82352C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352C68"))) PPC_WEAK_FUNC(sub_82352C68);
PPC_FUNC_IMPL(__imp__sub_82352C68) {
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
	// bl 0x82357790
	sub_82357790(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r11,r11,-18480
	r11.s64 = r11.s64 + -18480;
	// addi r10,r10,-2084
	ctx.r10.s64 = ctx.r10.s64 + -2084;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82352CB8"))) PPC_WEAK_FUNC(sub_82352CB8);
PPC_FUNC_IMPL(__imp__sub_82352CB8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x82352d24
	if (!cr6.gt) goto loc_82352D24;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r29,1
	ctx.r3.s64 = r29.s64 + 1;
	// addi r4,r11,-18472
	ctx.r4.s64 = r11.s64 + -18472;
	// bl 0x82354ff8
	sub_82354FF8(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stbx r11,r30,r29
	PPC_STORE_U8(r30.u32 + r29.u32, r11.u8);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82352d1c
	if (cr0.eq) goto loc_82352D1C;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82352D1C:
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
loc_82352D24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82352D2C"))) PPC_WEAK_FUNC(sub_82352D2C);
PPC_FUNC_IMPL(__imp__sub_82352D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352D30"))) PPC_WEAK_FUNC(sub_82352D30);
PPC_FUNC_IMPL(__imp__sub_82352D30) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-18448(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18448);
	// mflr r12
	// bl 0x8239bcf4
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
	// bl 0x82357790
	sub_82357790(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r11,r11,-18480
	r11.s64 = r11.s64 + -18480;
	// addi r10,r10,-2084
	ctx.r10.s64 = ctx.r10.s64 + -2084;
	// li r27,0
	r27.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// stw r27,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r27.u32);
	// bl 0x82352cb8
	sub_82352CB8(ctx, base);
	// mr r11,r27
	r11.u64 = r27.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82352da8
	if (cr6.eq) goto loc_82352DA8;
loc_82352D94:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stbx r28,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, r28.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// blt cr6,0x82352d94
	if (cr6.lt) goto loc_82352D94;
loc_82352DA8:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stbx r27,r11,r29
	PPC_STORE_U8(r11.u32 + r29.u32, r27.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82352D38"))) PPC_WEAK_FUNC(sub_82352D38);
PPC_FUNC_IMPL(__imp__sub_82352D38) {
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
	// bl 0x82357790
	sub_82357790(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r11,r11,-18480
	r11.s64 = r11.s64 + -18480;
	// addi r10,r10,-2084
	ctx.r10.s64 = ctx.r10.s64 + -2084;
	// li r27,0
	r27.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// stw r27,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r27.u32);
	// bl 0x82352cb8
	sub_82352CB8(ctx, base);
	// mr r11,r27
	r11.u64 = r27.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82352da8
	if (cr6.eq) goto loc_82352DA8;
loc_82352D94:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stbx r28,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, r28.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// blt cr6,0x82352d94
	if (cr6.lt) goto loc_82352D94;
loc_82352DA8:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stbx r27,r11,r29
	PPC_STORE_U8(r11.u32 + r29.u32, r27.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82352DBC"))) PPC_WEAK_FUNC(sub_82352DBC);
PPC_FUNC_IMPL(__imp__sub_82352DBC) {
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

__attribute__((alias("__imp__sub_82352DE4"))) PPC_WEAK_FUNC(sub_82352DE4);
PPC_FUNC_IMPL(__imp__sub_82352DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352DE8"))) PPC_WEAK_FUNC(sub_82352DE8);
PPC_FUNC_IMPL(__imp__sub_82352DE8) {
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
	// lwz r16,-18392(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18392);
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
	// addi r11,r11,-18480
	r11.s64 = r11.s64 + -18480;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82352e34
	if (cr0.eq) goto loc_82352E34;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82352E34:
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

__attribute__((alias("__imp__sub_82352DF0"))) PPC_WEAK_FUNC(sub_82352DF0);
PPC_FUNC_IMPL(__imp__sub_82352DF0) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-18480
	r11.s64 = r11.s64 + -18480;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82352e34
	if (cr0.eq) goto loc_82352E34;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82352E34:
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

__attribute__((alias("__imp__sub_82352E58"))) PPC_WEAK_FUNC(sub_82352E58);
PPC_FUNC_IMPL(__imp__sub_82352E58) {
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

__attribute__((alias("__imp__sub_82352E80"))) PPC_WEAK_FUNC(sub_82352E80);
PPC_FUNC_IMPL(__imp__sub_82352E80) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82352f20
	if (cr6.eq) goto loc_82352F20;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82352f20
	if (cr6.eq) goto loc_82352F20;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82352EB0:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82352eb0
	if (!cr6.eq) goto loc_82352EB0;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r31,r10,0
	r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82352ED4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82352ed4
	if (!cr6.eq) goto loc_82352ED4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r4,r11,r31
	ctx.r4.u64 = r11.u64 + r31.u64;
	// bl 0x82352cb8
	sub_82352CB8(ctx, base);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
loc_82352F08:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x82352f08
	if (!cr0.eq) goto loc_82352F08;
loc_82352F20:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82352F2C"))) PPC_WEAK_FUNC(sub_82352F2C);
PPC_FUNC_IMPL(__imp__sub_82352F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352F30"))) PPC_WEAK_FUNC(sub_82352F30);
PPC_FUNC_IMPL(__imp__sub_82352F30) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82352F4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82352f4c
	if (!cr6.eq) goto loc_82352F4C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r30,r11,0
	r30.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// bl 0x82352cb8
	sub_82352CB8(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stbx r29,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, r29.u8);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82352F98"))) PPC_WEAK_FUNC(sub_82352F98);
PPC_FUNC_IMPL(__imp__sub_82352F98) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82352cb8
	sub_82352CB8(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
loc_82352FC4:
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
	// bne 0x82352fc4
	if (!cr0.eq) goto loc_82352FC4;
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

__attribute__((alias("__imp__sub_82352FF8"))) PPC_WEAK_FUNC(sub_82352FF8);
PPC_FUNC_IMPL(__imp__sub_82352FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r3,r11,r4
	ctx.r3.u64 = r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353004"))) PPC_WEAK_FUNC(sub_82353004);
PPC_FUNC_IMPL(__imp__sub_82353004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353008"))) PPC_WEAK_FUNC(sub_82353008);
PPC_FUNC_IMPL(__imp__sub_82353008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
loc_82353010:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82353034
	if (cr0.eq) goto loc_82353034;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82353010
	if (cr6.eq) goto loc_82353010;
loc_82353034:
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353048"))) PPC_WEAK_FUNC(sub_82353048);
PPC_FUNC_IMPL(__imp__sub_82353048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235305c
	if (!cr6.eq) goto loc_8235305C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8235305C:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_82353060:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82353084
	if (cr0.eq) goto loc_82353084;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82353060
	if (cr6.eq) goto loc_82353060;
loc_82353084:
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353094"))) PPC_WEAK_FUNC(sub_82353094);
PPC_FUNC_IMPL(__imp__sub_82353094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353098"))) PPC_WEAK_FUNC(sub_82353098);
PPC_FUNC_IMPL(__imp__sub_82353098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
loc_823530A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823530c4
	if (cr0.eq) goto loc_823530C4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823530a0
	if (cr6.eq) goto loc_823530A0;
loc_823530C4:
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823530D4"))) PPC_WEAK_FUNC(sub_823530D4);
PPC_FUNC_IMPL(__imp__sub_823530D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823530D8"))) PPC_WEAK_FUNC(sub_823530D8);
PPC_FUNC_IMPL(__imp__sub_823530D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_823530E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82353104
	if (cr0.eq) goto loc_82353104;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823530e0
	if (cr6.eq) goto loc_823530E0;
loc_82353104:
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

__attribute__((alias("__imp__sub_82353118"))) PPC_WEAK_FUNC(sub_82353118);
PPC_FUNC_IMPL(__imp__sub_82353118) {
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
	// bl 0x82352cb8
	sub_82352CB8(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r30
	PPC_STORE_U8(r11.u32 + r30.u32, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_8235315C"))) PPC_WEAK_FUNC(sub_8235315C);
PPC_FUNC_IMPL(__imp__sub_8235315C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353160"))) PPC_WEAK_FUNC(sub_82353160);
PPC_FUNC_IMPL(__imp__sub_82353160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82353190
	if (cr0.eq) goto loc_82353190;
	// extsb r8,r4
	ctx.r8.s64 = ctx.r4.s8;
loc_82353178:
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// beq cr6,0x82353190
	if (cr6.eq) goto loc_82353190;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82353178
	if (!cr0.eq) goto loc_82353178;
loc_82353190:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// subf r3,r9,r11
	ctx.r3.s64 = r11.s64 - ctx.r9.s64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823531A8"))) PPC_WEAK_FUNC(sub_823531A8);
PPC_FUNC_IMPL(__imp__sub_823531A8) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8239e218
	sub_8239E218(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823531d8
	if (cr0.eq) goto loc_823531D8;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x823531dc
	goto loc_823531DC;
loc_823531D8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823531DC:
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

__attribute__((alias("__imp__sub_823531F0"))) PPC_WEAK_FUNC(sub_823531F0);
PPC_FUNC_IMPL(__imp__sub_823531F0) {
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
	// lwz r16,-18336(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18336);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// add r10,r30,r27
	ctx.r10.u64 = r30.u64 + r27.u64;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x8235322c
	if (!cr6.gt) goto loc_8235322C;
	// subf r27,r30,r11
	r27.s64 = r11.s64 - r30.s64;
loc_8235322C:
	// mr r11,r26
	r11.u64 = r26.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82353234:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82353234
	if (!cr6.eq) goto loc_82353234;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r29,r11,0
	r29.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// ble cr6,0x82353314
	if (!cr6.gt) goto loc_82353314;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82353268:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82353268
	if (!cr6.eq) goto loc_82353268;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x82352cb8
	sub_82352CB8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// bl 0x8239d550
	sub_8239D550(ctx, base);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x8239d550
	sub_8239D550(ctx, base);
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
loc_823532D0:
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
	// bne 0x823532d0
	if (!cr0.eq) goto loc_823532D0;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// stw r9,16(r28)
	PPC_STORE_U32(r28.u32 + 16, ctx.r9.u32);
	// stw r8,12(r28)
	PPC_STORE_U32(r28.u32 + 12, ctx.r8.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// b 0x82353360
	goto loc_82353360;
loc_82353314:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x8239d550
	sub_8239D550(ctx, base);
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// add r9,r11,r30
	ctx.r9.u64 = r11.u64 + r30.u64;
	// add r10,r11,r29
	ctx.r10.u64 = r11.u64 + r29.u64;
	// add r11,r9,r27
	r11.u64 = ctx.r9.u64 + r27.u64;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + r30.u64;
	// b 0x8235334c
	goto loc_8235334C;
loc_82353340:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8235334C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82353340
	if (!cr0.eq) goto loc_82353340;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
loc_82353360:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823531F8"))) PPC_WEAK_FUNC(sub_823531F8);
PPC_FUNC_IMPL(__imp__sub_823531F8) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// add r10,r30,r27
	ctx.r10.u64 = r30.u64 + r27.u64;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x8235322c
	if (!cr6.gt) goto loc_8235322C;
	// subf r27,r30,r11
	r27.s64 = r11.s64 - r30.s64;
loc_8235322C:
	// mr r11,r26
	r11.u64 = r26.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82353234:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82353234
	if (!cr6.eq) goto loc_82353234;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r29,r11,0
	r29.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// ble cr6,0x82353314
	if (!cr6.gt) goto loc_82353314;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82353268:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82353268
	if (!cr6.eq) goto loc_82353268;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x82352cb8
	sub_82352CB8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// bl 0x8239d550
	sub_8239D550(ctx, base);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x8239d550
	sub_8239D550(ctx, base);
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
loc_823532D0:
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
	// bne 0x823532d0
	if (!cr0.eq) goto loc_823532D0;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// stw r9,16(r28)
	PPC_STORE_U32(r28.u32 + 16, ctx.r9.u32);
	// stw r8,12(r28)
	PPC_STORE_U32(r28.u32 + 12, ctx.r8.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// b 0x82353360
	goto loc_82353360;
loc_82353314:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x8239d550
	sub_8239D550(ctx, base);
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// add r9,r11,r30
	ctx.r9.u64 = r11.u64 + r30.u64;
	// add r10,r11,r29
	ctx.r10.u64 = r11.u64 + r29.u64;
	// add r11,r9,r27
	r11.u64 = ctx.r9.u64 + r27.u64;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + r30.u64;
	// b 0x8235334c
	goto loc_8235334C;
loc_82353340:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8235334C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82353340
	if (!cr0.eq) goto loc_82353340;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
loc_82353360:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8235336C"))) PPC_WEAK_FUNC(sub_8235336C);
PPC_FUNC_IMPL(__imp__sub_8235336C) {
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

__attribute__((alias("__imp__sub_82353394"))) PPC_WEAK_FUNC(sub_82353394);
PPC_FUNC_IMPL(__imp__sub_82353394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353398"))) PPC_WEAK_FUNC(sub_82353398);
PPC_FUNC_IMPL(__imp__sub_82353398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823533A8"))) PPC_WEAK_FUNC(sub_823533A8);
PPC_FUNC_IMPL(__imp__sub_823533A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r4
	PPC_STORE_U8(r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823533C4"))) PPC_WEAK_FUNC(sub_823533C4);
PPC_FUNC_IMPL(__imp__sub_823533C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823533C8"))) PPC_WEAK_FUNC(sub_823533C8);
PPC_FUNC_IMPL(__imp__sub_823533C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r6,r11,9120
	ctx.r6.s64 = r11.s64 + 9120;
	// b 0x823531f8
	sub_823531F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823533D4"))) PPC_WEAK_FUNC(sub_823533D4);
PPC_FUNC_IMPL(__imp__sub_823533D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823533D8"))) PPC_WEAK_FUNC(sub_823533D8);
PPC_FUNC_IMPL(__imp__sub_823533D8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x823531f8
	sub_823531F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823533E4"))) PPC_WEAK_FUNC(sub_823533E4);
PPC_FUNC_IMPL(__imp__sub_823533E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823533E8"))) PPC_WEAK_FUNC(sub_823533E8);
PPC_FUNC_IMPL(__imp__sub_823533E8) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stb r26,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r26.u8);
	// bl 0x8239e218
	sub_8239E218(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823534a4
	if (cr0.eq) goto loc_823534A4;
	// li r26,1
	r26.s64 = 1;
loc_8235341C:
	// subf r30,r31,r3
	r30.s64 = ctx.r3.s64 - r31.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823a12a0
	sub_823A12A0(ctx, base);
	// mr r11,r27
	r11.u64 = r27.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82353438:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82353438
	if (!cr6.eq) goto loc_82353438;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8235344C:
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
	// bne 0x8235344c
	if (!cr0.eq) goto loc_8235344C;
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8235346C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8235346c
	if (!cr6.eq) goto loc_8235346C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239e218
	sub_8239E218(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8235341c
	if (!cr0.eq) goto loc_8235341C;
loc_823534A4:
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823534a4
	if (!cr6.eq) goto loc_823534A4;
	// addi r11,r29,-1
	r11.s64 = r29.s64 + -1;
loc_823534B8:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x823534b8
	if (!cr0.eq) goto loc_823534B8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823534DC"))) PPC_WEAK_FUNC(sub_823534DC);
PPC_FUNC_IMPL(__imp__sub_823534DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823534E0"))) PPC_WEAK_FUNC(sub_823534E0);
PPC_FUNC_IMPL(__imp__sub_823534E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// extsb. r11,r10
	r11.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82353558
	if (cr0.eq) goto loc_82353558;
loc_823534FC:
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// bge cr6,0x8235353c
	if (!cr6.lt) goto loc_8235353C;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82353520
	if (cr0.eq) goto loc_82353520;
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82353528
	if (!cr0.eq) goto loc_82353528;
loc_82353520:
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82353528:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// extsb. r11,r10
	r11.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823534fc
	if (!cr0.eq) goto loc_823534FC;
loc_8235353C:
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// ble cr6,0x82353558
	if (!cr6.gt) goto loc_82353558;
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bne cr6,0x82353558
	if (!cr6.eq) goto loc_82353558;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_82353558:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353564"))) PPC_WEAK_FUNC(sub_82353564);
PPC_FUNC_IMPL(__imp__sub_82353564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353568"))) PPC_WEAK_FUNC(sub_82353568);
PPC_FUNC_IMPL(__imp__sub_82353568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// b 0x82353588
	goto loc_82353588;
loc_82353570:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82353594
	if (cr6.eq) goto loc_82353594;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82353588:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82353570
	if (!cr0.eq) goto loc_82353570;
loc_82353594:
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// bne cr6,0x823535b0
	if (!cr6.eq) goto loc_823535B0;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823535b4
	if (!cr6.eq) goto loc_823535B4;
loc_823535B0:
	// li r11,1
	r11.s64 = 1;
loc_823535B4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823535BC"))) PPC_WEAK_FUNC(sub_823535BC);
PPC_FUNC_IMPL(__imp__sub_823535BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823535C0"))) PPC_WEAK_FUNC(sub_823535C0);
PPC_FUNC_IMPL(__imp__sub_823535C0) {
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
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823535f0
	if (cr0.eq) goto loc_823535F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_823535F0:
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

__attribute__((alias("__imp__sub_8235360C"))) PPC_WEAK_FUNC(sub_8235360C);
PPC_FUNC_IMPL(__imp__sub_8235360C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353610"))) PPC_WEAK_FUNC(sub_82353610);
PPC_FUNC_IMPL(__imp__sub_82353610) {
	PPC_FUNC_PROLOGUE();
	// b 0x82352e80
	sub_82352E80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82353614"))) PPC_WEAK_FUNC(sub_82353614);
PPC_FUNC_IMPL(__imp__sub_82353614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353618"))) PPC_WEAK_FUNC(sub_82353618);
PPC_FUNC_IMPL(__imp__sub_82353618) {
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
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x823536bc
	if (cr6.eq) goto loc_823536BC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823536a4
	if (cr6.eq) goto loc_823536A4;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823536a4
	if (cr6.eq) goto loc_823536A4;
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8235365C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8235365c
	if (!cr6.eq) goto loc_8235365C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x82352cb8
	sub_82352CB8(ctx, base);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82353688:
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
	// bne 0x82353688
	if (!cr0.eq) goto loc_82353688;
	// b 0x823536bc
	goto loc_823536BC;
loc_823536A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82352cb8
	sub_82352CB8(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
loc_823536BC:
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

__attribute__((alias("__imp__sub_823536D8"))) PPC_WEAK_FUNC(sub_823536D8);
PPC_FUNC_IMPL(__imp__sub_823536D8) {
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
	// lwz r16,-18248(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18248);
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
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x82357790
	sub_82357790(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r11,r11,-18480
	r11.s64 = r11.s64 + -18480;
	// addi r10,r10,-2084
	ctx.r10.s64 = ctx.r10.s64 + -2084;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// bl 0x82353618
	sub_82353618(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823536E0"))) PPC_WEAK_FUNC(sub_823536E0);
PPC_FUNC_IMPL(__imp__sub_823536E0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x82357790
	sub_82357790(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r11,r11,-18480
	r11.s64 = r11.s64 + -18480;
	// addi r10,r10,-2084
	ctx.r10.s64 = ctx.r10.s64 + -2084;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// bl 0x82353618
	sub_82353618(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82353738"))) PPC_WEAK_FUNC(sub_82353738);
PPC_FUNC_IMPL(__imp__sub_82353738) {
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

__attribute__((alias("__imp__sub_82353760"))) PPC_WEAK_FUNC(sub_82353760);
PPC_FUNC_IMPL(__imp__sub_82353760) {
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
	// lwz r16,-18192(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18192);
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
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x82357790
	sub_82357790(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r11,r11,-18480
	r11.s64 = r11.s64 + -18480;
	// addi r10,r10,-2084
	ctx.r10.s64 = ctx.r10.s64 + -2084;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x82353618
	sub_82353618(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82353768"))) PPC_WEAK_FUNC(sub_82353768);
PPC_FUNC_IMPL(__imp__sub_82353768) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x82357790
	sub_82357790(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r11,r11,-18480
	r11.s64 = r11.s64 + -18480;
	// addi r10,r10,-2084
	ctx.r10.s64 = ctx.r10.s64 + -2084;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x82353618
	sub_82353618(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823537C0"))) PPC_WEAK_FUNC(sub_823537C0);
PPC_FUNC_IMPL(__imp__sub_823537C0) {
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

__attribute__((alias("__imp__sub_823537E8"))) PPC_WEAK_FUNC(sub_823537E8);
PPC_FUNC_IMPL(__imp__sub_823537E8) {
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
	// lwz r16,-18136(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18136);
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82353768
	sub_82353768(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82352e80
	sub_82352E80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823537F0"))) PPC_WEAK_FUNC(sub_823537F0);
PPC_FUNC_IMPL(__imp__sub_823537F0) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82353768
	sub_82353768(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82352e80
	sub_82352E80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82353838"))) PPC_WEAK_FUNC(sub_82353838);
PPC_FUNC_IMPL(__imp__sub_82353838) {
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
	// beq 0x82353868
	if (cr0.eq) goto loc_82353868;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_82353868:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353878"))) PPC_WEAK_FUNC(sub_82353878);
PPC_FUNC_IMPL(__imp__sub_82353878) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r4,r11,r5
	ctx.r4.u64 = r11.u64 + ctx.r5.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x823536e0
	sub_823536E0(ctx, base);
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

__attribute__((alias("__imp__sub_823538B8"))) PPC_WEAK_FUNC(sub_823538B8);
PPC_FUNC_IMPL(__imp__sub_823538B8) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r29,0
	r29.s64 = 0;
	// add r9,r11,r30
	ctx.r9.u64 = r11.u64 + r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bge cr6,0x82353908
	if (!cr6.lt) goto loc_82353908;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239d550
	sub_8239D550(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stbx r29,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, r29.u8);
loc_82353908:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8235391C"))) PPC_WEAK_FUNC(sub_8235391C);
PPC_FUNC_IMPL(__imp__sub_8235391C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353920"))) PPC_WEAK_FUNC(sub_82353920);
PPC_FUNC_IMPL(__imp__sub_82353920) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8235395c
	if (cr6.eq) goto loc_8235395C;
	// lbz r11,0(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8235395c
	if (cr6.eq) goto loc_8235395C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82276480
	sub_82276480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82353964
	goto loc_82353964;
loc_8235395C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
loc_82353964:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82353618
	sub_82353618(ctx, base);
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

__attribute__((alias("__imp__sub_82353980"))) PPC_WEAK_FUNC(sub_82353980);
PPC_FUNC_IMPL(__imp__sub_82353980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// b 0x82691230
	sub_82691230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82353990"))) PPC_WEAK_FUNC(sub_82353990);
PPC_FUNC_IMPL(__imp__sub_82353990) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353994"))) PPC_WEAK_FUNC(sub_82353994);
PPC_FUNC_IMPL(__imp__sub_82353994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353998"))) PPC_WEAK_FUNC(sub_82353998);
PPC_FUNC_IMPL(__imp__sub_82353998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-2040
	r11.s64 = r11.s64 + -2040;
	// lwz r10,592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 592);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x823539bc
	if (cr6.eq) goto loc_823539BC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// blr 
	return;
loc_823539BC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823539C4"))) PPC_WEAK_FUNC(sub_823539C4);
PPC_FUNC_IMPL(__imp__sub_823539C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823539C8"))) PPC_WEAK_FUNC(sub_823539C8);
PPC_FUNC_IMPL(__imp__sub_823539C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-2040
	r11.s64 = r11.s64 + -2040;
	// lwz r10,592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 592);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x823539ec
	if (cr6.eq) goto loc_823539EC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// b 0x823539f0
	goto loc_823539F0;
loc_823539EC:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_823539F0:
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82353a08
	if (cr6.eq) goto loc_82353A08;
	// addi r9,r11,64
	ctx.r9.s64 = r11.s64 + 64;
	// rlwinm r11,r10,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r9
	ctx.r3.u64 = r11.u64 + ctx.r9.u64;
	// blr 
	return;
loc_82353A08:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353A10"))) PPC_WEAK_FUNC(sub_82353A10);
PPC_FUNC_IMPL(__imp__sub_82353A10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x82353a5c
	goto loc_82353A5C;
loc_82353A28:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bge cr6,0x82353a40
	if (!cr6.lt) goto loc_82353A40;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
loc_82353A40:
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_82353A5C:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82353a28
	if (!cr0.eq) goto loc_82353A28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353A68"))) PPC_WEAK_FUNC(sub_82353A68);
PPC_FUNC_IMPL(__imp__sub_82353A68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r7,r10,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r5.u8 & 0x3F));
loc_82353A80:
	// srawi r10,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r10.s64 = r11.s32 >> 2;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// srw r8,r8,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r5.u8 & 0x3F));
	// slw r8,r8,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r5.u8 & 0x3F));
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bge cr6,0x82353ac0
	if (!cr6.lt) goto loc_82353AC0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82353a80
	if (!cr0.eq) goto loc_82353A80;
	// blr 
	return;
loc_82353AC0:
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// stw r10,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r10.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// stw r3,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353AD4"))) PPC_WEAK_FUNC(sub_82353AD4);
PPC_FUNC_IMPL(__imp__sub_82353AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353AD8"))) PPC_WEAK_FUNC(sub_82353AD8);
PPC_FUNC_IMPL(__imp__sub_82353AD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r7,r10,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r5.u8 & 0x3F));
loc_82353AF0:
	// srawi r10,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r10.s64 = r11.s32 >> 2;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// srw r8,r8,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r5.u8 & 0x3F));
	// slw r8,r8,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r5.u8 & 0x3F));
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x82353b38
	if (cr6.lt) goto loc_82353B38;
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bge cr6,0x82353b38
	if (!cr6.lt) goto loc_82353B38;
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// stw r10,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r10.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// stw r3,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r3.u32);
loc_82353B38:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82353af0
	if (!cr0.eq) goto loc_82353AF0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353B4C"))) PPC_WEAK_FUNC(sub_82353B4C);
PPC_FUNC_IMPL(__imp__sub_82353B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353B50"))) PPC_WEAK_FUNC(sub_82353B50);
PPC_FUNC_IMPL(__imp__sub_82353B50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r31,32767
	r31.s64 = 2147418112;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r31,r31,65535
	r31.u64 = r31.u64 | 65535;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82353bd4
	if (cr0.eq) goto loc_82353BD4;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r30,r10,r5
	r30.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r5.u8 & 0x3F));
loc_82353B78:
	// srawi r10,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r10.s64 = r11.s32 >> 2;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r30,r10
	ctx.r8.u64 = r30.u64 + ctx.r10.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// srw r8,r8,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r5.u8 & 0x3F));
	// slw r8,r8,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r5.u8 & 0x3F));
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x82353bc4
	if (cr6.lt) goto loc_82353BC4;
	// cmpw cr6,r7,r31
	cr6.compare<int32_t>(ctx.r7.s32, r31.s32, xer);
	// bge cr6,0x82353bc4
	if (!cr6.lt) goto loc_82353BC4;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// stw r10,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r10.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// stw r3,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r3.u32);
loc_82353BC4:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82353b78
	if (!cr0.eq) goto loc_82353B78;
loc_82353BD4:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353BE0"))) PPC_WEAK_FUNC(sub_82353BE0);
PPC_FUNC_IMPL(__imp__sub_82353BE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// addi r8,r5,2
	ctx.r8.s64 = ctx.r5.s64 + 2;
loc_82353BF4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r9,r4,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r4.s64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// sraw r9,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// srawi. r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt 0x82353c2c
	if (cr0.lt) goto loc_82353C2C;
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// stw r7,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r7.u32);
loc_82353C2C:
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82353bf4
	if (!cr0.eq) goto loc_82353BF4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353C40"))) PPC_WEAK_FUNC(sub_82353C40);
PPC_FUNC_IMPL(__imp__sub_82353C40) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,-1436(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82353c70
	if (cr6.eq) goto loc_82353C70;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_82353C70:
	// bl 0x823539c8
	sub_823539C8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82353c90
	if (cr0.eq) goto loc_82353C90;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,3
	r11.s64 = 3;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// b 0x82353c98
	goto loc_82353C98;
loc_82353C90:
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82353C98:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82353ca8
	if (cr6.eq) goto loc_82353CA8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82353CA8:
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

__attribute__((alias("__imp__sub_82353CC4"))) PPC_WEAK_FUNC(sub_82353CC4);
PPC_FUNC_IMPL(__imp__sub_82353CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353CC8"))) PPC_WEAK_FUNC(sub_82353CC8);
PPC_FUNC_IMPL(__imp__sub_82353CC8) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,-1436(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82353cf8
	if (cr6.eq) goto loc_82353CF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_82353CF8:
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x82353d0c
	if (cr6.eq) goto loc_82353D0C;
	// bl 0x823539c8
	sub_823539C8(ctx, base);
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r30.u32);
loc_82353D0C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82353d1c
	if (cr6.eq) goto loc_82353D1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82353D1C:
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

__attribute__((alias("__imp__sub_82353D34"))) PPC_WEAK_FUNC(sub_82353D34);
PPC_FUNC_IMPL(__imp__sub_82353D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353D38"))) PPC_WEAK_FUNC(sub_82353D38);
PPC_FUNC_IMPL(__imp__sub_82353D38) {
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
	// lis r31,-32139
	r31.s64 = -2106261504;
	// lwz r11,-28968(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -28968);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82353d6c
	if (cr6.eq) goto loc_82353D6C;
	// bl 0x823b6748
	sub_823B6748(ctx, base);
	// lwz r11,-28968(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -28968);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82353d70
	if (!cr6.eq) goto loc_82353D70;
loc_82353D6C:
	// li r11,1
	r11.s64 = 1;
loc_82353D70:
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

__attribute__((alias("__imp__sub_82353D88"))) PPC_WEAK_FUNC(sub_82353D88);
PPC_FUNC_IMPL(__imp__sub_82353D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-1452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1452);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353D94"))) PPC_WEAK_FUNC(sub_82353D94);
PPC_FUNC_IMPL(__imp__sub_82353D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353D98"))) PPC_WEAK_FUNC(sub_82353D98);
PPC_FUNC_IMPL(__imp__sub_82353D98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,-1976
	r11.s64 = r11.s64 + -1976;
	// lwz r5,524(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 524);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82353df8
	if (!cr6.gt) goto loc_82353DF8;
	// addi r7,r11,8
	ctx.r7.s64 = r11.s64 + 8;
loc_82353DB4:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82353DBC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82353de0
	if (cr0.eq) goto loc_82353DE0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82353dbc
	if (cr6.eq) goto loc_82353DBC;
loc_82353DE0:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82353e00
	if (cr0.eq) goto loc_82353E00;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// cmpw cr6,r6,r5
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, xer);
	// blt cr6,0x82353db4
	if (cr6.lt) goto loc_82353DB4;
loc_82353DF8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82353E00:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353E08"))) PPC_WEAK_FUNC(sub_82353E08);
PPC_FUNC_IMPL(__imp__sub_82353E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32127
	r11.s64 = -2105475072;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-1976
	r11.s64 = r11.s64 + -1976;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353E20"))) PPC_WEAK_FUNC(sub_82353E20);
PPC_FUNC_IMPL(__imp__sub_82353E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32127
	r11.s64 = -2105475072;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-1976
	r11.s64 = r11.s64 + -1976;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353E3C"))) PPC_WEAK_FUNC(sub_82353E3C);
PPC_FUNC_IMPL(__imp__sub_82353E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353E40"))) PPC_WEAK_FUNC(sub_82353E40);
PPC_FUNC_IMPL(__imp__sub_82353E40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,-16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353E48"))) PPC_WEAK_FUNC(sub_82353E48);
PPC_FUNC_IMPL(__imp__sub_82353E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353E64"))) PPC_WEAK_FUNC(sub_82353E64);
PPC_FUNC_IMPL(__imp__sub_82353E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353E68"))) PPC_WEAK_FUNC(sub_82353E68);
PPC_FUNC_IMPL(__imp__sub_82353E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353E7C"))) PPC_WEAK_FUNC(sub_82353E7C);
PPC_FUNC_IMPL(__imp__sub_82353E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353E80"))) PPC_WEAK_FUNC(sub_82353E80);
PPC_FUNC_IMPL(__imp__sub_82353E80) {
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
	// stwu r1,-2176(r1)
	ea = -2176 + ctx.r1.u32;
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
	// bl 0x82357718
	sub_82357718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823572c0
	sub_823572C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823573c0
	sub_823573C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823571b0
	sub_823571B0(ctx, base);
	// addi r1,r1,2176
	ctx.r1.s64 = ctx.r1.s64 + 2176;
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

__attribute__((alias("__imp__sub_82353EDC"))) PPC_WEAK_FUNC(sub_82353EDC);
PPC_FUNC_IMPL(__imp__sub_82353EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353EE0"))) PPC_WEAK_FUNC(sub_82353EE0);
PPC_FUNC_IMPL(__imp__sub_82353EE0) {
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
	// bl 0x823572c0
	sub_823572C0(ctx, base);
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

__attribute__((alias("__imp__sub_82353F30"))) PPC_WEAK_FUNC(sub_82353F30);
PPC_FUNC_IMPL(__imp__sub_82353F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
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
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x82357718
	sub_82357718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823573c0
	sub_823573C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82357518
	sub_82357518(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823572c0
	sub_823572C0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823573c0
	sub_823573C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823571b0
	sub_823571B0(ctx, base);
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82353F8C"))) PPC_WEAK_FUNC(sub_82353F8C);
PPC_FUNC_IMPL(__imp__sub_82353F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353F90"))) PPC_WEAK_FUNC(sub_82353F90);
PPC_FUNC_IMPL(__imp__sub_82353F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
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
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x82357718
	sub_82357718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823572c0
	sub_823572C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823573c0
	sub_823573C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82357340
	sub_82357340(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82357518
	sub_82357518(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823571b0
	sub_823571B0(ctx, base);
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82353FEC"))) PPC_WEAK_FUNC(sub_82353FEC);
PPC_FUNC_IMPL(__imp__sub_82353FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353FF0"))) PPC_WEAK_FUNC(sub_82353FF0);
PPC_FUNC_IMPL(__imp__sub_82353FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82354084
	if (!cr6.eq) goto loc_82354084;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x82354020
	if (cr6.lt) goto loc_82354020;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82354020:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// blt cr6,0x8235407c
	if (cr6.lt) goto loc_8235407C;
	// addi r11,r4,12
	r11.s64 = ctx.r4.s64 + 12;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x8235407c
	if (!cr6.lt) goto loc_8235407C;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// ori r10,r10,57005
	ctx.r10.u64 = ctx.r10.u64 | 57005;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235407c
	if (cr0.eq) goto loc_8235407C;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82354070:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x82354070
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82354070;
loc_8235407C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82354084:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235408C"))) PPC_WEAK_FUNC(sub_8235408C);
PPC_FUNC_IMPL(__imp__sub_8235408C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354090"))) PPC_WEAK_FUNC(sub_82354090);
PPC_FUNC_IMPL(__imp__sub_82354090) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r31,-1436(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823540c4
	if (cr6.eq) goto loc_823540C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_823540C4:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// rlwinm r10,r30,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-1976
	r11.s64 = r11.s64 + -1976;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82353a10
	sub_82353A10(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823540f4
	if (cr6.eq) goto loc_823540F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_823540F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823540FC"))) PPC_WEAK_FUNC(sub_823540FC);
PPC_FUNC_IMPL(__imp__sub_823540FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354100"))) PPC_WEAK_FUNC(sub_82354100);
PPC_FUNC_IMPL(__imp__sub_82354100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r6,-4
	r11.s64 = ctx.r6.s64 + -4;
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// rlwinm r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stb r8,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r8.u8);
	// subf r9,r9,r11
	ctx.r9.s64 = r11.s64 - ctx.r9.s64;
	// srawi r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// subf r10,r9,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r9.s64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,-1464(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1464);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,-1464(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1464, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// ori r9,r9,57005
	ctx.r9.u64 = ctx.r9.u64 | 57005;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_823541B0:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823541b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823541B0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823541C0"))) PPC_WEAK_FUNC(sub_823541C0);
PPC_FUNC_IMPL(__imp__sub_823541C0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// ori r31,r10,65535
	r31.u64 = ctx.r10.u64 | 65535;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// blt cr6,0x8235424c
	if (cr6.lt) goto loc_8235424C;
	// beq cr6,0x82354238
	if (cr6.eq) goto loc_82354238;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82354224
	if (cr6.lt) goto loc_82354224;
	// bne cr6,0x82354274
	if (!cr6.eq) goto loc_82354274;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// bl 0x82353be0
	sub_82353BE0(ctx, base);
	// b 0x8235425c
	goto loc_8235425C;
loc_82354224:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82353b50
	sub_82353B50(ctx, base);
	// b 0x8235425c
	goto loc_8235425C;
loc_82354238:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82353ad8
	sub_82353AD8(ctx, base);
	// b 0x8235425c
	goto loc_8235425C;
loc_8235424C:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82353a68
	sub_82353A68(ctx, base);
loc_8235425C:
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r31,104(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwz r30,100(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bne cr6,0x82354288
	if (!cr6.eq) goto loc_82354288;
loc_82354274:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82353a10
	sub_82353A10(ctx, base);
loc_82354288:
	// cmpwi cr6,r7,8
	cr6.compare<int32_t>(ctx.r7.s32, 8, xer);
	// ble cr6,0x823542e0
	if (!cr6.gt) goto loc_823542E0;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r7,r31
	r31.s64 = r31.s64 - ctx.r7.s64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r31.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// beq cr6,0x823542d4
	if (cr6.eq) goto loc_823542D4;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// b 0x823542d8
	goto loc_823542D8;
loc_823542D4:
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_823542D8:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_823542E0:
	// add r10,r7,r29
	ctx.r10.u64 = ctx.r7.u64 + r29.u64;
	// subf r9,r10,r31
	ctx.r9.s64 = r31.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,8
	cr6.compare<int32_t>(ctx.r9.s32, 8, xer);
	// ble cr6,0x82354310
	if (!cr6.gt) goto loc_82354310;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r5.u32);
	// b 0x82354318
	goto loc_82354318;
loc_82354310:
	// lwz r11,8(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_82354318:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82354328
	if (!cr6.eq) goto loc_82354328;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x8235432c
	goto loc_8235432C;
loc_82354328:
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_8235432C:
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r10,r9,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// stb r7,3(r11)
	PPC_STORE_U8(r11.u32 + 3, ctx.r7.u8);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// b 0x82354360
	goto loc_82354360;
loc_82354354:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82354360:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82354354
	if (!cr6.eq) goto loc_82354354;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x823543c4
	if (cr6.lt) goto loc_823543C4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// rlwinm r8,r9,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x823543c4
	if (!cr6.lt) goto loc_823543C4;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lis r8,-21555
	ctx.r8.s64 = -1412628480;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// ori r8,r8,43981
	ctx.r8.u64 = ctx.r8.u64 | 43981;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r9,r9,1
	xer.ca = ctx.r9.u32 > 4294967294;
	ctx.r9.s64 = ctx.r9.s64 + 1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823543c4
	if (cr0.eq) goto loc_823543C4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_823543B8:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823543b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823543B8;
loc_823543C4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// rlwinm r11,r10,24,8,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823543DC"))) PPC_WEAK_FUNC(sub_823543DC);
PPC_FUNC_IMPL(__imp__sub_823543DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823543E0"))) PPC_WEAK_FUNC(sub_823543E0);
PPC_FUNC_IMPL(__imp__sub_823543E0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8235450c
	if (cr6.lt) goto loc_8235450C;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8235450c
	if (!cr6.lt) goto loc_8235450C;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// li r31,0
	r31.s64 = 0;
	// b 0x8235443c
	goto loc_8235443C;
loc_8235442C:
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x82354444
	if (!cr6.lt) goto loc_82354444;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_8235443C:
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne 0x8235442c
	if (!cr0.eq) goto loc_8235442C;
loc_82354444:
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lwz r10,-1464(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1464);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,-1464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -1464, ctx.r8.u32);
	// rlwinm r8,r7,2,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r6,r8,r11
	ctx.r6.s64 = r11.s64 - ctx.r8.s64;
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// stw r4,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82354484
	if (cr6.eq) goto loc_82354484;
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// b 0x82354488
	goto loc_82354488;
loc_82354484:
	// stw r6,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r6.u32);
loc_82354488:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x823544d8
	if (cr6.lt) goto loc_823544D8;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r6,12
	r11.s64 = ctx.r6.s64 + 12;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x823544d8
	if (!cr6.lt) goto loc_823544D8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// ori r9,r9,57005
	ctx.r9.u64 = ctx.r9.u64 | 57005;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r10,r10,1
	xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823544d8
	if (cr0.eq) goto loc_823544D8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_823544CC:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x823544cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823544CC;
loc_823544D8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823544ec
	if (cr6.eq) goto loc_823544EC;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x82353ff0
	sub_82353FF0(ctx, base);
loc_823544EC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82354504
	if (cr6.eq) goto loc_82354504;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82353ff0
	sub_82353FF0(ctx, base);
loc_82354504:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82354510
	goto loc_82354510;
loc_8235450C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82354510:
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

__attribute__((alias("__imp__sub_82354528"))) PPC_WEAK_FUNC(sub_82354528);
PPC_FUNC_IMPL(__imp__sub_82354528) {
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
	// stwu r1,-2176(r1)
	ea = -2176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x823545c4
	if (!cr6.gt) goto loc_823545C4;
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// bne cr6,0x82354564
	if (!cr6.eq) goto loc_82354564;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r11,-18024
	ctx.r3.s64 = r11.s64 + -18024;
	// bl 0x82353e80
	sub_82353E80(ctx, base);
	// b 0x82354570
	goto loc_82354570;
loc_82354564:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r11,-18048
	ctx.r3.s64 = r11.s64 + -18048;
	// bl 0x82353ee0
	sub_82353EE0(ctx, base);
loc_82354570:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823545a0
	if (cr6.eq) goto loc_823545A0;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r3,r11,-18064
	ctx.r3.s64 = r11.s64 + -18064;
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
loc_823545A0:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-32168
	ctx.r4.s64 = r11.s64 + -32168;
	// bl 0x82357718
	sub_82357718(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823571b0
	sub_823571B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
loc_823545C4:
	// addi r1,r1,2176
	ctx.r1.s64 = ctx.r1.s64 + 2176;
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

