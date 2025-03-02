#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8239A408"))) PPC_WEAK_FUNC(sub_8239A408);
PPC_FUNC_IMPL(__imp__sub_8239A408) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,32688(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32688);
	// mflr r12
	// bl 0x8239bcf4
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r28.u32);
	// bl 0x823991c0
	sub_823991C0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,30900
	r11.s64 = r11.s64 + 30900;
	// li r27,-1
	r27.s64 = -1;
	// addi r4,r10,32588
	ctx.r4.s64 = ctx.r10.s64 + 32588;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r28,36
	ctx.r3.s64 = r28.s64 + 36;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// addi r29,r28,48
	r29.s64 = r28.s64 + 48;
	// li r30,0
	r30.s64 = 0;
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r30.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82397ec0
	sub_82397EC0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r11,31204
	ctx.r4.s64 = r11.s64 + 31204;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821a73c8
	sub_821A73C8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f31.f64 = double(temp.f32);
	// stfs f31,156(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82397f90
	sub_82397F90(ctx, base);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// addi r4,r11,32580
	ctx.r4.s64 = r11.s64 + 32580;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821a73c8
	sub_821A73C8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// stfs f30,156(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82397f90
	sub_82397F90(ctx, base);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// addi r4,r11,32572
	ctx.r4.s64 = r11.s64 + 32572;
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821a73c8
	sub_821A73C8(ctx, base);
	// stfs f30,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82397f90
	sub_82397F90(ctx, base);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// addi r4,r11,32560
	ctx.r4.s64 = r11.s64 + 32560;
	// stw r30,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r30.u32);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// stw r30,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r30.u32);
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821a73c8
	sub_821A73C8(ctx, base);
	// stfs f31,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82397f90
	sub_82397F90(ctx, base);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8239A410"))) PPC_WEAK_FUNC(sub_8239A410);
PPC_FUNC_IMPL(__imp__sub_8239A410) {
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r28.u32);
	// bl 0x823991c0
	sub_823991C0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,30900
	r11.s64 = r11.s64 + 30900;
	// li r27,-1
	r27.s64 = -1;
	// addi r4,r10,32588
	ctx.r4.s64 = ctx.r10.s64 + 32588;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r28,36
	ctx.r3.s64 = r28.s64 + 36;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// addi r29,r28,48
	r29.s64 = r28.s64 + 48;
	// li r30,0
	r30.s64 = 0;
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r30.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82397ec0
	sub_82397EC0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r11,31204
	ctx.r4.s64 = r11.s64 + 31204;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821a73c8
	sub_821A73C8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f31.f64 = double(temp.f32);
	// stfs f31,156(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82397f90
	sub_82397F90(ctx, base);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// addi r4,r11,32580
	ctx.r4.s64 = r11.s64 + 32580;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821a73c8
	sub_821A73C8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// stfs f30,156(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82397f90
	sub_82397F90(ctx, base);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// addi r4,r11,32572
	ctx.r4.s64 = r11.s64 + 32572;
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821a73c8
	sub_821A73C8(ctx, base);
	// stfs f30,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82397f90
	sub_82397F90(ctx, base);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// addi r4,r11,32560
	ctx.r4.s64 = r11.s64 + 32560;
	// stw r30,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r30.u32);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// stw r30,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r30.u32);
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821a73c8
	sub_821A73C8(ctx, base);
	// stfs f31,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82397f90
	sub_82397F90(ctx, base);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8239A5C0"))) PPC_WEAK_FUNC(sub_8239A5C0);
PPC_FUNC_IMPL(__imp__sub_8239A5C0) {
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
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// bl 0x823980b8
	sub_823980B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239A5E8"))) PPC_WEAK_FUNC(sub_8239A5E8);
PPC_FUNC_IMPL(__imp__sub_8239A5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// bl 0x8218ef48
	sub_8218EF48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239A614"))) PPC_WEAK_FUNC(sub_8239A614);
PPC_FUNC_IMPL(__imp__sub_8239A614) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// bl 0x823980a8
	sub_823980A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239A640"))) PPC_WEAK_FUNC(sub_8239A640);
PPC_FUNC_IMPL(__imp__sub_8239A640) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8218ef48
	sub_8218EF48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239A668"))) PPC_WEAK_FUNC(sub_8239A668);
PPC_FUNC_IMPL(__imp__sub_8239A668) {
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
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82396918
	sub_82396918(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239A690"))) PPC_WEAK_FUNC(sub_8239A690);
PPC_FUNC_IMPL(__imp__sub_8239A690) {
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
	// bl 0x8218ef48
	sub_8218EF48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239A6B8"))) PPC_WEAK_FUNC(sub_8239A6B8);
PPC_FUNC_IMPL(__imp__sub_8239A6B8) {
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
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82396918
	sub_82396918(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239A6E0"))) PPC_WEAK_FUNC(sub_8239A6E0);
PPC_FUNC_IMPL(__imp__sub_8239A6E0) {
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
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8218ef48
	sub_8218EF48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239A708"))) PPC_WEAK_FUNC(sub_8239A708);
PPC_FUNC_IMPL(__imp__sub_8239A708) {
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
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82396918
	sub_82396918(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239A730"))) PPC_WEAK_FUNC(sub_8239A730);
PPC_FUNC_IMPL(__imp__sub_8239A730) {
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
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8218ef48
	sub_8218EF48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239A758"))) PPC_WEAK_FUNC(sub_8239A758);
PPC_FUNC_IMPL(__imp__sub_8239A758) {
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
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82396918
	sub_82396918(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239A780"))) PPC_WEAK_FUNC(sub_8239A780);
PPC_FUNC_IMPL(__imp__sub_8239A780) {
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
	// bl 0x82399068
	sub_82399068(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239a7b0
	if (cr0.eq) goto loc_8239A7B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823825f0
	sub_823825F0(ctx, base);
loc_8239A7B0:
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

__attribute__((alias("__imp__sub_8239A7CC"))) PPC_WEAK_FUNC(sub_8239A7CC);
PPC_FUNC_IMPL(__imp__sub_8239A7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239A7D0"))) PPC_WEAK_FUNC(sub_8239A7D0);
PPC_FUNC_IMPL(__imp__sub_8239A7D0) {
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
	// lwz r16,-32240(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -32240);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-320
	r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17044(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17044);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239aed4
	if (!cr6.eq) goto loc_8239AED4;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,17040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 17040);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239a810
	if (!cr6.eq) goto loc_8239A810;
	// bl 0x82396b00
	sub_82396B00(ctx, base);
	// stw r3,17040(r30)
	PPC_STORE_U32(r30.u32 + 17040, ctx.r3.u32);
loc_8239A810:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r30,0
	r30.s64 = 0;
	// beq 0x8239a838
	if (cr0.eq) goto loc_8239A838;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// b 0x8239a83c
	goto loc_8239A83C;
loc_8239A838:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8239A83C:
	// stw r11,17044(r29)
	PPC_STORE_U32(r29.u32 + 17044, r11.u32);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17048(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17048);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239a858
	if (!cr6.eq) goto loc_8239A858;
	// bl 0x82396d50
	sub_82396D50(ctx, base);
	// stw r3,17048(r29)
	PPC_STORE_U32(r29.u32 + 17048, ctx.r3.u32);
loc_8239A858:
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17052(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17052);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239a870
	if (!cr6.eq) goto loc_8239A870;
	// bl 0x82396e68
	sub_82396E68(ctx, base);
	// stw r3,17052(r29)
	PPC_STORE_U32(r29.u32 + 17052, ctx.r3.u32);
loc_8239A870:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239a890
	if (cr0.eq) goto loc_8239A890;
	// bl 0x823993f8
	sub_823993F8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8239a894
	goto loc_8239A894;
loc_8239A890:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8239A894:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r28,-1
	r28.s64 = -1;
	// addi r4,r11,18980
	ctx.r4.s64 = r11.s64 + 18980;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389ce0
	sub_82389CE0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ad8
	sub_82387AD8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r30.u32);
	// bl 0x82396c10
	sub_82396C10(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17056(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17056);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239a900
	if (!cr6.eq) goto loc_8239A900;
	// bl 0x82396f80
	sub_82396F80(ctx, base);
	// stw r3,17056(r29)
	PPC_STORE_U32(r29.u32 + 17056, ctx.r3.u32);
loc_8239A900:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239a920
	if (cr0.eq) goto loc_8239A920;
	// bl 0x82399678
	sub_82399678(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8239a924
	goto loc_8239A924;
loc_8239A920:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8239A924:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,-32552
	ctx.r4.s64 = r11.s64 + -32552;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389ce0
	sub_82389CE0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ad8
	sub_82387AD8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r30.u32);
	// bl 0x82396c10
	sub_82396C10(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17060(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17060);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239a98c
	if (!cr6.eq) goto loc_8239A98C;
	// bl 0x82397098
	sub_82397098(ctx, base);
	// stw r3,17060(r29)
	PPC_STORE_U32(r29.u32 + 17060, ctx.r3.u32);
loc_8239A98C:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239a9ac
	if (cr0.eq) goto loc_8239A9AC;
	// bl 0x82399848
	sub_82399848(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8239a9b0
	goto loc_8239A9B0;
loc_8239A9AC:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8239A9B0:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,18960
	ctx.r4.s64 = r11.s64 + 18960;
	// addi r3,r31,248
	ctx.r3.s64 = r31.s64 + 248;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389ce0
	sub_82389CE0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ad8
	sub_82387AD8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r30.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r30.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r30.u32);
	// bl 0x82396c10
	sub_82396C10(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17064(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17064);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239aa18
	if (!cr6.eq) goto loc_8239AA18;
	// bl 0x823971b0
	sub_823971B0(ctx, base);
	// stw r3,17064(r29)
	PPC_STORE_U32(r29.u32 + 17064, ctx.r3.u32);
loc_8239AA18:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239aa38
	if (cr0.eq) goto loc_8239AA38;
	// bl 0x82399a18
	sub_82399A18(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8239aa3c
	goto loc_8239AA3C;
loc_8239AA38:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8239AA3C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,-32564
	ctx.r4.s64 = r11.s64 + -32564;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389ce0
	sub_82389CE0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ad8
	sub_82387AD8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r30.u32);
	// bl 0x82396c10
	sub_82396C10(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17068(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17068);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239aaa4
	if (!cr6.eq) goto loc_8239AAA4;
	// bl 0x823972c8
	sub_823972C8(ctx, base);
	// stw r3,17068(r29)
	PPC_STORE_U32(r29.u32 + 17068, ctx.r3.u32);
loc_8239AAA4:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239aac4
	if (cr0.eq) goto loc_8239AAC4;
	// bl 0x82399be8
	sub_82399BE8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8239aac8
	goto loc_8239AAC8;
loc_8239AAC4:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8239AAC8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,-32572
	ctx.r4.s64 = r11.s64 + -32572;
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389ce0
	sub_82389CE0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ad8
	sub_82387AD8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,216(r31)
	PPC_STORE_U32(r31.u32 + 216, r30.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r30.u32);
	// bl 0x82396c10
	sub_82396C10(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17072(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17072);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239ab30
	if (!cr6.eq) goto loc_8239AB30;
	// bl 0x823973e0
	sub_823973E0(ctx, base);
	// stw r3,17072(r29)
	PPC_STORE_U32(r29.u32 + 17072, ctx.r3.u32);
loc_8239AB30:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239ab50
	if (cr0.eq) goto loc_8239AB50;
	// bl 0x82399d08
	sub_82399D08(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8239ab54
	goto loc_8239AB54;
loc_8239AB50:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8239AB54:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,-32580
	ctx.r4.s64 = r11.s64 + -32580;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389ce0
	sub_82389CE0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ad8
	sub_82387AD8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// bl 0x82396c10
	sub_82396C10(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17076(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17076);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239abbc
	if (!cr6.eq) goto loc_8239ABBC;
	// bl 0x823974f8
	sub_823974F8(ctx, base);
	// stw r3,17076(r29)
	PPC_STORE_U32(r29.u32 + 17076, ctx.r3.u32);
loc_8239ABBC:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239abdc
	if (cr0.eq) goto loc_8239ABDC;
	// bl 0x82399e28
	sub_82399E28(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8239abe0
	goto loc_8239ABE0;
loc_8239ABDC:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8239ABE0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,-32592
	ctx.r4.s64 = r11.s64 + -32592;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389ce0
	sub_82389CE0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ad8
	sub_82387AD8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// bl 0x82396c10
	sub_82396C10(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17080(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239ac48
	if (!cr6.eq) goto loc_8239AC48;
	// bl 0x82397610
	sub_82397610(ctx, base);
	// stw r3,17080(r29)
	PPC_STORE_U32(r29.u32 + 17080, ctx.r3.u32);
loc_8239AC48:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239ac68
	if (cr0.eq) goto loc_8239AC68;
	// bl 0x82399f48
	sub_82399F48(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8239ac6c
	goto loc_8239AC6C;
loc_8239AC68:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8239AC6C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,-32604
	ctx.r4.s64 = r11.s64 + -32604;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389ce0
	sub_82389CE0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ad8
	sub_82387AD8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r30.u32);
	// bl 0x82396c10
	sub_82396C10(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17084(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17084);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239acd4
	if (!cr6.eq) goto loc_8239ACD4;
	// bl 0x82397728
	sub_82397728(ctx, base);
	// stw r3,17084(r29)
	PPC_STORE_U32(r29.u32 + 17084, ctx.r3.u32);
loc_8239ACD4:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239acf4
	if (cr0.eq) goto loc_8239ACF4;
	// bl 0x8239a118
	sub_8239A118(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8239acf8
	goto loc_8239ACF8;
loc_8239ACF4:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8239ACF8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,-32616
	ctx.r4.s64 = r11.s64 + -32616;
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389ce0
	sub_82389CE0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ad8
	sub_82387AD8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
	// bl 0x82396c10
	sub_82396C10(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17088(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17088);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239ad60
	if (!cr6.eq) goto loc_8239AD60;
	// bl 0x82397840
	sub_82397840(ctx, base);
	// stw r3,17088(r29)
	PPC_STORE_U32(r29.u32 + 17088, ctx.r3.u32);
loc_8239AD60:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239ad80
	if (cr0.eq) goto loc_8239AD80;
	// bl 0x8239a2f0
	sub_8239A2F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8239ad84
	goto loc_8239AD84;
loc_8239AD80:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8239AD84:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,-32624
	ctx.r4.s64 = r11.s64 + -32624;
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389ce0
	sub_82389CE0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ad8
	sub_82387AD8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r30.u32);
	// bl 0x82396c10
	sub_82396C10(ctx, base);
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239adf4
	if (cr0.eq) goto loc_8239ADF4;
	// bl 0x823992d8
	sub_823992D8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8239adf8
	goto loc_8239ADF8;
loc_8239ADF4:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8239ADF8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,-32640
	ctx.r4.s64 = r11.s64 + -32640;
	// addi r3,r31,232
	ctx.r3.s64 = r31.s64 + 232;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389ce0
	sub_82389CE0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ad8
	sub_82387AD8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r30.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r30.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r30.u32);
	// bl 0x82396c10
	sub_82396C10(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17092(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17092);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239ae60
	if (!cr6.eq) goto loc_8239AE60;
	// bl 0x82397958
	sub_82397958(ctx, base);
	// stw r3,17092(r29)
	PPC_STORE_U32(r29.u32 + 17092, ctx.r3.u32);
loc_8239AE60:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239ae80
	if (cr0.eq) goto loc_8239AE80;
	// bl 0x8239a410
	sub_8239A410(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8239ae84
	goto loc_8239AE84;
loc_8239AE80:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8239AE84:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,-32656
	ctx.r4.s64 = r11.s64 + -32656;
	// addi r3,r31,264
	ctx.r3.s64 = r31.s64 + 264;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389ce0
	sub_82389CE0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ad8
	sub_82387AD8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,264(r31)
	PPC_STORE_U32(r31.u32 + 264, r30.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r30.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r30.u32);
	// bl 0x82396c10
	sub_82396C10(ctx, base);
loc_8239AED4:
	// addi r1,r31,320
	ctx.r1.s64 = r31.s64 + 320;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8239A7D8"))) PPC_WEAK_FUNC(sub_8239A7D8);
PPC_FUNC_IMPL(__imp__sub_8239A7D8) {
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
	// addi r31,r1,-320
	r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17044(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17044);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239aed4
	if (!cr6.eq) goto loc_8239AED4;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,17040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 17040);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239a810
	if (!cr6.eq) goto loc_8239A810;
	// bl 0x82396b00
	sub_82396B00(ctx, base);
	// stw r3,17040(r30)
	PPC_STORE_U32(r30.u32 + 17040, ctx.r3.u32);
loc_8239A810:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r30,0
	r30.s64 = 0;
	// beq 0x8239a838
	if (cr0.eq) goto loc_8239A838;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// b 0x8239a83c
	goto loc_8239A83C;
loc_8239A838:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8239A83C:
	// stw r11,17044(r29)
	PPC_STORE_U32(r29.u32 + 17044, r11.u32);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17048(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17048);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239a858
	if (!cr6.eq) goto loc_8239A858;
	// bl 0x82396d50
	sub_82396D50(ctx, base);
	// stw r3,17048(r29)
	PPC_STORE_U32(r29.u32 + 17048, ctx.r3.u32);
loc_8239A858:
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17052(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17052);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239a870
	if (!cr6.eq) goto loc_8239A870;
	// bl 0x82396e68
	sub_82396E68(ctx, base);
	// stw r3,17052(r29)
	PPC_STORE_U32(r29.u32 + 17052, ctx.r3.u32);
loc_8239A870:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239a890
	if (cr0.eq) goto loc_8239A890;
	// bl 0x823993f8
	sub_823993F8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8239a894
	goto loc_8239A894;
loc_8239A890:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8239A894:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r28,-1
	r28.s64 = -1;
	// addi r4,r11,18980
	ctx.r4.s64 = r11.s64 + 18980;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389ce0
	sub_82389CE0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ad8
	sub_82387AD8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r30.u32);
	// bl 0x82396c10
	sub_82396C10(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17056(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17056);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239a900
	if (!cr6.eq) goto loc_8239A900;
	// bl 0x82396f80
	sub_82396F80(ctx, base);
	// stw r3,17056(r29)
	PPC_STORE_U32(r29.u32 + 17056, ctx.r3.u32);
loc_8239A900:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239a920
	if (cr0.eq) goto loc_8239A920;
	// bl 0x82399678
	sub_82399678(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8239a924
	goto loc_8239A924;
loc_8239A920:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8239A924:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,-32552
	ctx.r4.s64 = r11.s64 + -32552;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389ce0
	sub_82389CE0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ad8
	sub_82387AD8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r30.u32);
	// bl 0x82396c10
	sub_82396C10(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17060(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17060);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239a98c
	if (!cr6.eq) goto loc_8239A98C;
	// bl 0x82397098
	sub_82397098(ctx, base);
	// stw r3,17060(r29)
	PPC_STORE_U32(r29.u32 + 17060, ctx.r3.u32);
loc_8239A98C:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239a9ac
	if (cr0.eq) goto loc_8239A9AC;
	// bl 0x82399848
	sub_82399848(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8239a9b0
	goto loc_8239A9B0;
loc_8239A9AC:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8239A9B0:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,18960
	ctx.r4.s64 = r11.s64 + 18960;
	// addi r3,r31,248
	ctx.r3.s64 = r31.s64 + 248;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389ce0
	sub_82389CE0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ad8
	sub_82387AD8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r30.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r30.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r30.u32);
	// bl 0x82396c10
	sub_82396C10(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17064(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17064);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239aa18
	if (!cr6.eq) goto loc_8239AA18;
	// bl 0x823971b0
	sub_823971B0(ctx, base);
	// stw r3,17064(r29)
	PPC_STORE_U32(r29.u32 + 17064, ctx.r3.u32);
loc_8239AA18:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239aa38
	if (cr0.eq) goto loc_8239AA38;
	// bl 0x82399a18
	sub_82399A18(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8239aa3c
	goto loc_8239AA3C;
loc_8239AA38:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8239AA3C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,-32564
	ctx.r4.s64 = r11.s64 + -32564;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389ce0
	sub_82389CE0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ad8
	sub_82387AD8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r30.u32);
	// bl 0x82396c10
	sub_82396C10(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17068(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17068);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239aaa4
	if (!cr6.eq) goto loc_8239AAA4;
	// bl 0x823972c8
	sub_823972C8(ctx, base);
	// stw r3,17068(r29)
	PPC_STORE_U32(r29.u32 + 17068, ctx.r3.u32);
loc_8239AAA4:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239aac4
	if (cr0.eq) goto loc_8239AAC4;
	// bl 0x82399be8
	sub_82399BE8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8239aac8
	goto loc_8239AAC8;
loc_8239AAC4:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8239AAC8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,-32572
	ctx.r4.s64 = r11.s64 + -32572;
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389ce0
	sub_82389CE0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ad8
	sub_82387AD8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,216(r31)
	PPC_STORE_U32(r31.u32 + 216, r30.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r30.u32);
	// bl 0x82396c10
	sub_82396C10(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17072(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17072);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239ab30
	if (!cr6.eq) goto loc_8239AB30;
	// bl 0x823973e0
	sub_823973E0(ctx, base);
	// stw r3,17072(r29)
	PPC_STORE_U32(r29.u32 + 17072, ctx.r3.u32);
loc_8239AB30:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239ab50
	if (cr0.eq) goto loc_8239AB50;
	// bl 0x82399d08
	sub_82399D08(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8239ab54
	goto loc_8239AB54;
loc_8239AB50:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8239AB54:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,-32580
	ctx.r4.s64 = r11.s64 + -32580;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389ce0
	sub_82389CE0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ad8
	sub_82387AD8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// bl 0x82396c10
	sub_82396C10(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17076(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17076);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239abbc
	if (!cr6.eq) goto loc_8239ABBC;
	// bl 0x823974f8
	sub_823974F8(ctx, base);
	// stw r3,17076(r29)
	PPC_STORE_U32(r29.u32 + 17076, ctx.r3.u32);
loc_8239ABBC:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239abdc
	if (cr0.eq) goto loc_8239ABDC;
	// bl 0x82399e28
	sub_82399E28(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8239abe0
	goto loc_8239ABE0;
loc_8239ABDC:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8239ABE0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,-32592
	ctx.r4.s64 = r11.s64 + -32592;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389ce0
	sub_82389CE0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ad8
	sub_82387AD8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// bl 0x82396c10
	sub_82396C10(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17080(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239ac48
	if (!cr6.eq) goto loc_8239AC48;
	// bl 0x82397610
	sub_82397610(ctx, base);
	// stw r3,17080(r29)
	PPC_STORE_U32(r29.u32 + 17080, ctx.r3.u32);
loc_8239AC48:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239ac68
	if (cr0.eq) goto loc_8239AC68;
	// bl 0x82399f48
	sub_82399F48(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8239ac6c
	goto loc_8239AC6C;
loc_8239AC68:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8239AC6C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,-32604
	ctx.r4.s64 = r11.s64 + -32604;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389ce0
	sub_82389CE0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ad8
	sub_82387AD8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r30.u32);
	// bl 0x82396c10
	sub_82396C10(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17084(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17084);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239acd4
	if (!cr6.eq) goto loc_8239ACD4;
	// bl 0x82397728
	sub_82397728(ctx, base);
	// stw r3,17084(r29)
	PPC_STORE_U32(r29.u32 + 17084, ctx.r3.u32);
loc_8239ACD4:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239acf4
	if (cr0.eq) goto loc_8239ACF4;
	// bl 0x8239a118
	sub_8239A118(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8239acf8
	goto loc_8239ACF8;
loc_8239ACF4:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8239ACF8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,-32616
	ctx.r4.s64 = r11.s64 + -32616;
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389ce0
	sub_82389CE0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ad8
	sub_82387AD8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
	// bl 0x82396c10
	sub_82396C10(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17088(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17088);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239ad60
	if (!cr6.eq) goto loc_8239AD60;
	// bl 0x82397840
	sub_82397840(ctx, base);
	// stw r3,17088(r29)
	PPC_STORE_U32(r29.u32 + 17088, ctx.r3.u32);
loc_8239AD60:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239ad80
	if (cr0.eq) goto loc_8239AD80;
	// bl 0x8239a2f0
	sub_8239A2F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8239ad84
	goto loc_8239AD84;
loc_8239AD80:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8239AD84:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,-32624
	ctx.r4.s64 = r11.s64 + -32624;
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389ce0
	sub_82389CE0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ad8
	sub_82387AD8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r30.u32);
	// bl 0x82396c10
	sub_82396C10(ctx, base);
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239adf4
	if (cr0.eq) goto loc_8239ADF4;
	// bl 0x823992d8
	sub_823992D8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8239adf8
	goto loc_8239ADF8;
loc_8239ADF4:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8239ADF8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,-32640
	ctx.r4.s64 = r11.s64 + -32640;
	// addi r3,r31,232
	ctx.r3.s64 = r31.s64 + 232;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389ce0
	sub_82389CE0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ad8
	sub_82387AD8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r30.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r30.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r30.u32);
	// bl 0x82396c10
	sub_82396C10(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,17092(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17092);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239ae60
	if (!cr6.eq) goto loc_8239AE60;
	// bl 0x82397958
	sub_82397958(ctx, base);
	// stw r3,17092(r29)
	PPC_STORE_U32(r29.u32 + 17092, ctx.r3.u32);
loc_8239AE60:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239ae80
	if (cr0.eq) goto loc_8239AE80;
	// bl 0x8239a410
	sub_8239A410(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8239ae84
	goto loc_8239AE84;
loc_8239AE80:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8239AE84:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,-32656
	ctx.r4.s64 = r11.s64 + -32656;
	// addi r3,r31,264
	ctx.r3.s64 = r31.s64 + 264;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389ce0
	sub_82389CE0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ad8
	sub_82387AD8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,264(r31)
	PPC_STORE_U32(r31.u32 + 264, r30.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r30.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r30.u32);
	// bl 0x82396c10
	sub_82396C10(ctx, base);
loc_8239AED4:
	// addi r1,r31,320
	ctx.r1.s64 = r31.s64 + 320;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8239AEDC"))) PPC_WEAK_FUNC(sub_8239AEDC);
PPC_FUNC_IMPL(__imp__sub_8239AEDC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 276);
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

__attribute__((alias("__imp__sub_8239AF04"))) PPC_WEAK_FUNC(sub_8239AF04);
PPC_FUNC_IMPL(__imp__sub_8239AF04) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x8218e140
	sub_8218E140(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239AF2C"))) PPC_WEAK_FUNC(sub_8239AF2C);
PPC_FUNC_IMPL(__imp__sub_8239AF2C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x8218ef48
	sub_8218EF48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239AF54"))) PPC_WEAK_FUNC(sub_8239AF54);
PPC_FUNC_IMPL(__imp__sub_8239AF54) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239AF7C"))) PPC_WEAK_FUNC(sub_8239AF7C);
PPC_FUNC_IMPL(__imp__sub_8239AF7C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x8218e140
	sub_8218E140(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239AFA4"))) PPC_WEAK_FUNC(sub_8239AFA4);
PPC_FUNC_IMPL(__imp__sub_8239AFA4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x8218ef48
	sub_8218EF48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239AFCC"))) PPC_WEAK_FUNC(sub_8239AFCC);
PPC_FUNC_IMPL(__imp__sub_8239AFCC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239AFF4"))) PPC_WEAK_FUNC(sub_8239AFF4);
PPC_FUNC_IMPL(__imp__sub_8239AFF4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x8218e140
	sub_8218E140(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B01C"))) PPC_WEAK_FUNC(sub_8239B01C);
PPC_FUNC_IMPL(__imp__sub_8239B01C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,248
	ctx.r3.s64 = r31.s64 + 248;
	// bl 0x8218ef48
	sub_8218EF48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B044"))) PPC_WEAK_FUNC(sub_8239B044);
PPC_FUNC_IMPL(__imp__sub_8239B044) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B06C"))) PPC_WEAK_FUNC(sub_8239B06C);
PPC_FUNC_IMPL(__imp__sub_8239B06C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x8218e140
	sub_8218E140(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B094"))) PPC_WEAK_FUNC(sub_8239B094);
PPC_FUNC_IMPL(__imp__sub_8239B094) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x8218ef48
	sub_8218EF48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B0BC"))) PPC_WEAK_FUNC(sub_8239B0BC);
PPC_FUNC_IMPL(__imp__sub_8239B0BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B0E4"))) PPC_WEAK_FUNC(sub_8239B0E4);
PPC_FUNC_IMPL(__imp__sub_8239B0E4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x8218e140
	sub_8218E140(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B10C"))) PPC_WEAK_FUNC(sub_8239B10C);
PPC_FUNC_IMPL(__imp__sub_8239B10C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x8218ef48
	sub_8218EF48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B134"))) PPC_WEAK_FUNC(sub_8239B134);
PPC_FUNC_IMPL(__imp__sub_8239B134) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B15C"))) PPC_WEAK_FUNC(sub_8239B15C);
PPC_FUNC_IMPL(__imp__sub_8239B15C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x8218e140
	sub_8218E140(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B184"))) PPC_WEAK_FUNC(sub_8239B184);
PPC_FUNC_IMPL(__imp__sub_8239B184) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8218ef48
	sub_8218EF48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B1AC"))) PPC_WEAK_FUNC(sub_8239B1AC);
PPC_FUNC_IMPL(__imp__sub_8239B1AC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B1D4"))) PPC_WEAK_FUNC(sub_8239B1D4);
PPC_FUNC_IMPL(__imp__sub_8239B1D4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x8218e140
	sub_8218E140(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B1FC"))) PPC_WEAK_FUNC(sub_8239B1FC);
PPC_FUNC_IMPL(__imp__sub_8239B1FC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8218ef48
	sub_8218EF48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B224"))) PPC_WEAK_FUNC(sub_8239B224);
PPC_FUNC_IMPL(__imp__sub_8239B224) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B24C"))) PPC_WEAK_FUNC(sub_8239B24C);
PPC_FUNC_IMPL(__imp__sub_8239B24C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x8218e140
	sub_8218E140(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B274"))) PPC_WEAK_FUNC(sub_8239B274);
PPC_FUNC_IMPL(__imp__sub_8239B274) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x8218ef48
	sub_8218EF48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B29C"))) PPC_WEAK_FUNC(sub_8239B29C);
PPC_FUNC_IMPL(__imp__sub_8239B29C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B2C4"))) PPC_WEAK_FUNC(sub_8239B2C4);
PPC_FUNC_IMPL(__imp__sub_8239B2C4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x8218e140
	sub_8218E140(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B2EC"))) PPC_WEAK_FUNC(sub_8239B2EC);
PPC_FUNC_IMPL(__imp__sub_8239B2EC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x8218ef48
	sub_8218EF48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B314"))) PPC_WEAK_FUNC(sub_8239B314);
PPC_FUNC_IMPL(__imp__sub_8239B314) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B33C"))) PPC_WEAK_FUNC(sub_8239B33C);
PPC_FUNC_IMPL(__imp__sub_8239B33C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x8218e140
	sub_8218E140(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B364"))) PPC_WEAK_FUNC(sub_8239B364);
PPC_FUNC_IMPL(__imp__sub_8239B364) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x8218ef48
	sub_8218EF48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B38C"))) PPC_WEAK_FUNC(sub_8239B38C);
PPC_FUNC_IMPL(__imp__sub_8239B38C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B3B4"))) PPC_WEAK_FUNC(sub_8239B3B4);
PPC_FUNC_IMPL(__imp__sub_8239B3B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x8218e140
	sub_8218E140(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B3DC"))) PPC_WEAK_FUNC(sub_8239B3DC);
PPC_FUNC_IMPL(__imp__sub_8239B3DC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,232
	ctx.r3.s64 = r31.s64 + 232;
	// bl 0x8218ef48
	sub_8218EF48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B404"))) PPC_WEAK_FUNC(sub_8239B404);
PPC_FUNC_IMPL(__imp__sub_8239B404) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B42C"))) PPC_WEAK_FUNC(sub_8239B42C);
PPC_FUNC_IMPL(__imp__sub_8239B42C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x8218e140
	sub_8218E140(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B454"))) PPC_WEAK_FUNC(sub_8239B454);
PPC_FUNC_IMPL(__imp__sub_8239B454) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,264
	ctx.r3.s64 = r31.s64 + 264;
	// bl 0x8218ef48
	sub_8218EF48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B47C"))) PPC_WEAK_FUNC(sub_8239B47C);
PPC_FUNC_IMPL(__imp__sub_8239B47C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B4A4"))) PPC_WEAK_FUNC(sub_8239B4A4);
PPC_FUNC_IMPL(__imp__sub_8239B4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239B4A8"))) PPC_WEAK_FUNC(sub_8239B4A8);
PPC_FUNC_IMPL(__imp__sub_8239B4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B4CC"))) PPC_WEAK_FUNC(sub_8239B4CC);
PPC_FUNC_IMPL(__imp__sub_8239B4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239B4D0"))) PPC_WEAK_FUNC(sub_8239B4D0);
PPC_FUNC_IMPL(__imp__sub_8239B4D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B4FC"))) PPC_WEAK_FUNC(sub_8239B4FC);
PPC_FUNC_IMPL(__imp__sub_8239B4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239B500"))) PPC_WEAK_FUNC(sub_8239B500);
PPC_FUNC_IMPL(__imp__sub_8239B500) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// bl 0x82386168
	sub_82386168(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bl 0x82386318
	sub_82386318(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82386318
	sub_82386318(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82386318
	sub_82386318(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82386318
	sub_82386318(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8239B560"))) PPC_WEAK_FUNC(sub_8239B560);
PPC_FUNC_IMPL(__imp__sub_8239B560) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// bl 0x82386168
	sub_82386168(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82386318
	sub_82386318(ctx, base);
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

__attribute__((alias("__imp__sub_8239B5B4"))) PPC_WEAK_FUNC(sub_8239B5B4);
PPC_FUNC_IMPL(__imp__sub_8239B5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239B5B8"))) PPC_WEAK_FUNC(sub_8239B5B8);
PPC_FUNC_IMPL(__imp__sub_8239B5B8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239B5BC"))) PPC_WEAK_FUNC(sub_8239B5BC);
PPC_FUNC_IMPL(__imp__sub_8239B5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239B5C0"))) PPC_WEAK_FUNC(sub_8239B5C0);
PPC_FUNC_IMPL(__imp__sub_8239B5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r10,r10,10248
	ctx.r10.s64 = ctx.r10.s64 + 10248;
	// addi r11,r11,-23136
	r11.s64 = r11.s64 + -23136;
	// lis r30,-32198
	r30.s64 = -2110128128;
	// lis r31,-32198
	r31.s64 = -2110128128;
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// lis r4,-32198
	ctx.r4.s64 = -2110128128;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r10,r30,7096
	ctx.r10.s64 = r30.s64 + 7096;
	// lis r5,-32198
	ctx.r5.s64 = -2110128128;
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r7,-32198
	ctx.r7.s64 = -2110128128;
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r10,r31,7080
	ctx.r10.s64 = r31.s64 + 7080;
	// lis r9,-32198
	ctx.r9.s64 = -2110128128;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// addi r10,r3,7088
	ctx.r10.s64 = ctx.r3.s64 + 7088;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// addi r10,r4,6952
	ctx.r10.s64 = ctx.r4.s64 + 6952;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// addi r10,r5,10248
	ctx.r10.s64 = ctx.r5.s64 + 10248;
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// addi r10,r6,10168
	ctx.r10.s64 = ctx.r6.s64 + 10168;
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// addi r10,r7,6984
	ctx.r10.s64 = ctx.r7.s64 + 6984;
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// addi r10,r8,6768
	ctx.r10.s64 = ctx.r8.s64 + 6768;
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// addi r10,r9,6608
	ctx.r10.s64 = ctx.r9.s64 + 6608;
	// stw r10,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r10.u32);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B654"))) PPC_WEAK_FUNC(sub_8239B654);
PPC_FUNC_IMPL(__imp__sub_8239B654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239B658"))) PPC_WEAK_FUNC(sub_8239B658);
PPC_FUNC_IMPL(__imp__sub_8239B658) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239b5c0
	sub_8239B5C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239B65C"))) PPC_WEAK_FUNC(sub_8239B65C);
PPC_FUNC_IMPL(__imp__sub_8239B65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239B660"))) PPC_WEAK_FUNC(sub_8239B660);
PPC_FUNC_IMPL(__imp__sub_8239B660) {
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
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// stw r31,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r31.u32);
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

__attribute__((alias("__imp__sub_8239B690"))) PPC_WEAK_FUNC(sub_8239B690);
PPC_FUNC_IMPL(__imp__sub_8239B690) {
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
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B6B4"))) PPC_WEAK_FUNC(sub_8239B6B4);
PPC_FUNC_IMPL(__imp__sub_8239B6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239B6B8"))) PPC_WEAK_FUNC(sub_8239B6B8);
PPC_FUNC_IMPL(__imp__sub_8239B6B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B6D8"))) PPC_WEAK_FUNC(sub_8239B6D8);
PPC_FUNC_IMPL(__imp__sub_8239B6D8) {
	PPC_FUNC_PROLOGUE();
	// li r5,2624
	ctx.r5.s64 = 2624;
	// b 0x8239d800
	sub_8239D800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239B6E0"))) PPC_WEAK_FUNC(sub_8239B6E0);
PPC_FUNC_IMPL(__imp__sub_8239B6E0) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823a2d20
	sub_823A2D20(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8239b748
	if (cr0.eq) goto loc_8239B748;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mulli r11,r10,20
	r11.s64 = ctx.r10.s64 * 20;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
loc_8239B720:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// cmpw cr6,r3,r8
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, xer);
	// ble cr6,0x8239b73c
	if (!cr6.gt) goto loc_8239B73C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r3,r8
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, xer);
	// ble cr6,0x8239b76c
	if (!cr6.gt) goto loc_8239B76C;
loc_8239B73C:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-20
	r11.s64 = r11.s64 + -20;
	// bne 0x8239b720
	if (!cr0.eq) goto loc_8239B720;
loc_8239B748:
	// li r11,0
	r11.s64 = 0;
loc_8239B74C:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8239B76C:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// b 0x8239b74c
	goto loc_8239B74C;
}

__attribute__((alias("__imp__sub_8239B774"))) PPC_WEAK_FUNC(sub_8239B774);
PPC_FUNC_IMPL(__imp__sub_8239B774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239B778"))) PPC_WEAK_FUNC(sub_8239B778);
PPC_FUNC_IMPL(__imp__sub_8239B778) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239b7ac
	if (cr6.eq) goto loc_8239B7AC;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8239b7ac
	if (cr0.eq) goto loc_8239B7AC;
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8239b7b0
	goto loc_8239B7B0;
loc_8239B7AC:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8239B7B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x823a2d20
	sub_823A2D20(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8239b800
	if (cr0.eq) goto loc_8239B800;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mulli r11,r10,20
	r11.s64 = ctx.r10.s64 * 20;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
loc_8239B7D8:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// cmpw cr6,r3,r8
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, xer);
	// ble cr6,0x8239b7f4
	if (!cr6.gt) goto loc_8239B7F4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r3,r8
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, xer);
	// ble cr6,0x8239b814
	if (!cr6.gt) goto loc_8239B814;
loc_8239B7F4:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-20
	r11.s64 = r11.s64 + -20;
	// bne 0x8239b7d8
	if (!cr0.eq) goto loc_8239B7D8;
loc_8239B800:
	// li r11,0
	r11.s64 = 0;
loc_8239B804:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239b81c
	if (!cr6.eq) goto loc_8239B81C;
	// li r6,-1
	ctx.r6.s64 = -1;
	// b 0x8239b824
	goto loc_8239B824;
loc_8239B814:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// b 0x8239b804
	goto loc_8239B804;
loc_8239B81C:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
loc_8239B824:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823a2f68
	sub_823A2F68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8239B83C"))) PPC_WEAK_FUNC(sub_8239B83C);
PPC_FUNC_IMPL(__imp__sub_8239B83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239B840"))) PPC_WEAK_FUNC(sub_8239B840);
PPC_FUNC_IMPL(__imp__sub_8239B840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lwz r11,12(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239b868
	if (cr6.eq) goto loc_8239B868;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8239b868
	if (cr0.eq) goto loc_8239B868;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_8239B868:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x823a3c40
	sub_823A3C40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239B878"))) PPC_WEAK_FUNC(sub_8239B878);
PPC_FUNC_IMPL(__imp__sub_8239B878) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
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
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823a3c40
	sub_823A3C40(ctx, base);
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,176(r11)
	PPC_STORE_U32(r11.u32 + 176, ctx.r10.u32);
	// stw r9,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8239B8F0"))) PPC_WEAK_FUNC(sub_8239B8F0);
PPC_FUNC_IMPL(__imp__sub_8239B8F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r19,19276(r14)
	r19.u64 = PPC_LOAD_U32(r14.u32 + 19276);
	// lwz r16,-15120(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -15120);
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
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r4,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r4.u32);
	// stw r5,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r5.u32);
	// stw r6,172(r31)
	PPC_STORE_U32(r31.u32 + 172, ctx.r6.u32);
	// stw r7,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r7.u32);
	// li r29,0
	r29.s64 = 0;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r5,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r5.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r11,116(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8239B8F8"))) PPC_WEAK_FUNC(sub_8239B8F8);
PPC_FUNC_IMPL(__imp__sub_8239B8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r4,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r4.u32);
	// stw r5,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r5.u32);
	// stw r6,172(r31)
	PPC_STORE_U32(r31.u32 + 172, ctx.r6.u32);
	// stw r7,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r7.u32);
	// li r29,0
	r29.s64 = 0;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r5,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r5.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r11,116(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8239B970"))) PPC_WEAK_FUNC(sub_8239B970);
PPC_FUNC_IMPL(__imp__sub_8239B970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r31,80
	ctx.r9.s64 = r31.s64 + 80;
	// lwz r8,180(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lwz r7,172(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// lwz r6,164(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r5,156(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x8239b878
	sub_8239B878(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B9B8"))) PPC_WEAK_FUNC(sub_8239B9B8);
PPC_FUNC_IMPL(__imp__sub_8239B9B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r24,0
	r24.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// bl 0x823a2d20
	sub_823A2D20(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8239b9fc
	if (!cr6.eq) goto loc_8239B9FC;
	// bl 0x823a3ec0
	sub_823A3EC0(ctx, base);
loc_8239B9FC:
	// li r11,-1
	r11.s64 = -1;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// beq cr6,0x8239ba48
	if (cr6.eq) goto loc_8239BA48;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mulli r11,r30,20
	r11.s64 = r30.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
loc_8239BA24:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(r29.s32, ctx.r10.s32, xer);
	// ble cr6,0x8239ba3c
	if (!cr6.gt) goto loc_8239BA3C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(r29.s32, ctx.r10.s32, xer);
	// ble cr6,0x8239ba48
	if (!cr6.gt) goto loc_8239BA48;
loc_8239BA3C:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,-20
	r11.s64 = r11.s64 + -20;
	// bne 0x8239ba24
	if (!cr0.eq) goto loc_8239BA24;
loc_8239BA48:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8239ba60
	if (cr6.eq) goto loc_8239BA60;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mulli r11,r9,20
	r11.s64 = ctx.r9.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r28,r11,-20
	r28.s64 = r11.s64 + -20;
loc_8239BA60:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8239baec
	if (cr6.eq) goto loc_8239BAEC;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
loc_8239BA70:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// beq cr6,0x8239baa0
	if (cr6.eq) goto loc_8239BAA0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// ble cr6,0x8239bad0
	if (!cr6.gt) goto loc_8239BAD0;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bgt cr6,0x8239bad0
	if (cr6.gt) goto loc_8239BAD0;
loc_8239BAA0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r25,r8
	cr6.compare<int32_t>(r25.s32, ctx.r8.s32, xer);
	// blt cr6,0x8239bad0
	if (cr6.lt) goto loc_8239BAD0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// bgt cr6,0x8239bad0
	if (cr6.gt) goto loc_8239BAD0;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x8239bac8
	if (!cr6.eq) goto loc_8239BAC8;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
loc_8239BAC8:
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
loc_8239BAD0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// blt cr6,0x8239ba70
	if (cr6.lt) goto loc_8239BA70;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x8239bafc
	if (!cr6.eq) goto loc_8239BAFC;
loc_8239BAEC:
	// stw r24,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r24,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r24.u32);
	// b 0x8239bb08
	goto loc_8239BB08;
loc_8239BAFC:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
loc_8239BB08:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8239BB10"))) PPC_WEAK_FUNC(sub_8239BB10);
PPC_FUNC_IMPL(__imp__sub_8239BB10) {
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
	// lis r10,-8083
	ctx.r10.s64 = -529727488;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r10,r10,29539
	ctx.r10.u64 = ctx.r10.u64 | 29539;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8239bb8c
	if (!cr6.eq) goto loc_8239BB8C;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x8239bb8c
	if (!cr6.eq) goto loc_8239BB8C;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// ori r10,r10,1312
	ctx.r10.u64 = ctx.r10.u64 | 1312;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8239bb78
	if (cr6.eq) goto loc_8239BB78;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// ori r10,r10,1313
	ctx.r10.u64 = ctx.r10.u64 | 1313;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8239bb78
	if (cr6.eq) goto loc_8239BB78;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// ori r10,r10,1314
	ctx.r10.u64 = ctx.r10.u64 | 1314;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8239bb8c
	if (!cr6.eq) goto loc_8239BB8C;
loc_8239BB78:
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8239bb94
	goto loc_8239BB94;
loc_8239BB8C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8239BB94:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r31,148(r11)
	PPC_STORE_U32(r11.u32 + 148, r31.u32);
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

__attribute__((alias("__imp__sub_8239BBC8"))) PPC_WEAK_FUNC(sub_8239BBC8);
PPC_FUNC_IMPL(__imp__sub_8239BBC8) {
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
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// b 0x8239bbf8
	goto loc_8239BBF8;
loc_8239BBE8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// beq cr6,0x8239bc18
	if (cr6.eq) goto loc_8239BC18;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_8239BBF8:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8239bbe8
	if (!cr0.eq) goto loc_8239BBE8;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8239BC04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8239BC18:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8239bc04
	goto loc_8239BC04;
}

__attribute__((alias("__imp__sub_8239BC20"))) PPC_WEAK_FUNC(sub_8239BC20);
PPC_FUNC_IMPL(__imp__sub_8239BC20) {
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
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239bc4c
	if (cr6.eq) goto loc_8239BC4C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8239bc50
	if (!cr6.eq) goto loc_8239BC50;
loc_8239BC4C:
	// bl 0x823a3ec0
	sub_823A3EC0(ctx, base);
loc_8239BC50:
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8239bc70
	if (!cr6.eq) goto loc_8239BC70;
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, r11.u32);
	// b 0x8239bc9c
	goto loc_8239BC9C;
loc_8239BC70:
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// b 0x8239bc8c
	goto loc_8239BC8C;
loc_8239BC7C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x8239bcb0
	if (cr6.eq) goto loc_8239BCB0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8239BC8C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8239bc7c
	if (!cr6.eq) goto loc_8239BC7C;
	// bl 0x823a3ec0
	sub_823A3EC0(ctx, base);
loc_8239BC9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8239BCB0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// b 0x8239bc9c
	goto loc_8239BC9C;
}

__attribute__((alias("__imp__sub_8239BCBC"))) PPC_WEAK_FUNC(sub_8239BCBC);
PPC_FUNC_IMPL(__imp__sub_8239BCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp____savegprlr_14"))) PPC_WEAK_FUNC(__savegprlr_14);
PPC_FUNC_IMPL(__imp____savegprlr_14) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r15{};
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
	// std r14,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, r14.u64);
	// std r15,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, r15.u64);
	// std r16,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, r16.u64);
	// std r17,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, r17.u64);
	// std r18,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, r18.u64);
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_15"))) PPC_WEAK_FUNC(__savegprlr_15);
PPC_FUNC_IMPL(__imp____savegprlr_15) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r15{};
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
	// std r15,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, r15.u64);
	// std r16,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, r16.u64);
	// std r17,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, r17.u64);
	// std r18,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, r18.u64);
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_16"))) PPC_WEAK_FUNC(__savegprlr_16);
PPC_FUNC_IMPL(__imp____savegprlr_16) {
	PPC_FUNC_PROLOGUE();
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
	// std r16,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, r16.u64);
	// std r17,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, r17.u64);
	// std r18,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, r18.u64);
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_17"))) PPC_WEAK_FUNC(__savegprlr_17);
PPC_FUNC_IMPL(__imp____savegprlr_17) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// std r17,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, r17.u64);
	// std r18,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, r18.u64);
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_18"))) PPC_WEAK_FUNC(__savegprlr_18);
PPC_FUNC_IMPL(__imp____savegprlr_18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// std r18,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, r18.u64);
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_19"))) PPC_WEAK_FUNC(__savegprlr_19);
PPC_FUNC_IMPL(__imp____savegprlr_19) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_20"))) PPC_WEAK_FUNC(__savegprlr_20);
PPC_FUNC_IMPL(__imp____savegprlr_20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_21"))) PPC_WEAK_FUNC(__savegprlr_21);
PPC_FUNC_IMPL(__imp____savegprlr_21) {
	PPC_FUNC_PROLOGUE();
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
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_22"))) PPC_WEAK_FUNC(__savegprlr_22);
PPC_FUNC_IMPL(__imp____savegprlr_22) {
	PPC_FUNC_PROLOGUE();
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
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_23"))) PPC_WEAK_FUNC(__savegprlr_23);
PPC_FUNC_IMPL(__imp____savegprlr_23) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_24"))) PPC_WEAK_FUNC(__savegprlr_24);
PPC_FUNC_IMPL(__imp____savegprlr_24) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_25"))) PPC_WEAK_FUNC(__savegprlr_25);
PPC_FUNC_IMPL(__imp____savegprlr_25) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_26"))) PPC_WEAK_FUNC(__savegprlr_26);
PPC_FUNC_IMPL(__imp____savegprlr_26) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_27"))) PPC_WEAK_FUNC(__savegprlr_27);
PPC_FUNC_IMPL(__imp____savegprlr_27) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_28"))) PPC_WEAK_FUNC(__savegprlr_28);
PPC_FUNC_IMPL(__imp____savegprlr_28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_29"))) PPC_WEAK_FUNC(__savegprlr_29);
PPC_FUNC_IMPL(__imp____savegprlr_29) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_30"))) PPC_WEAK_FUNC(__savegprlr_30);
PPC_FUNC_IMPL(__imp____savegprlr_30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_31"))) PPC_WEAK_FUNC(__savegprlr_31);
PPC_FUNC_IMPL(__imp____savegprlr_31) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_14"))) PPC_WEAK_FUNC(__restgprlr_14);
PPC_FUNC_IMPL(__imp____restgprlr_14) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r15{};
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
	// ld r14,-152(r1)
	r14.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// ld r15,-144(r1)
	r15.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// ld r16,-136(r1)
	r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// ld r17,-128(r1)
	r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_15"))) PPC_WEAK_FUNC(__restgprlr_15);
PPC_FUNC_IMPL(__imp____restgprlr_15) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r15{};
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
	// ld r15,-144(r1)
	r15.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// ld r16,-136(r1)
	r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// ld r17,-128(r1)
	r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_16"))) PPC_WEAK_FUNC(__restgprlr_16);
PPC_FUNC_IMPL(__imp____restgprlr_16) {
	PPC_FUNC_PROLOGUE();
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
	// ld r16,-136(r1)
	r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// ld r17,-128(r1)
	r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_17"))) PPC_WEAK_FUNC(__restgprlr_17);
PPC_FUNC_IMPL(__imp____restgprlr_17) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// ld r17,-128(r1)
	r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_18"))) PPC_WEAK_FUNC(__restgprlr_18);
PPC_FUNC_IMPL(__imp____restgprlr_18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// ld r18,-120(r1)
	r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_19"))) PPC_WEAK_FUNC(__restgprlr_19);
PPC_FUNC_IMPL(__imp____restgprlr_19) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// ld r19,-112(r1)
	r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_20"))) PPC_WEAK_FUNC(__restgprlr_20);
PPC_FUNC_IMPL(__imp____restgprlr_20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// ld r20,-104(r1)
	r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_21"))) PPC_WEAK_FUNC(__restgprlr_21);
PPC_FUNC_IMPL(__imp____restgprlr_21) {
	PPC_FUNC_PROLOGUE();
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
	// ld r21,-96(r1)
	r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_22"))) PPC_WEAK_FUNC(__restgprlr_22);
PPC_FUNC_IMPL(__imp____restgprlr_22) {
	PPC_FUNC_PROLOGUE();
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
	// ld r22,-88(r1)
	r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_23"))) PPC_WEAK_FUNC(__restgprlr_23);
PPC_FUNC_IMPL(__imp____restgprlr_23) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// ld r23,-80(r1)
	r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_24"))) PPC_WEAK_FUNC(__restgprlr_24);
PPC_FUNC_IMPL(__imp____restgprlr_24) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// ld r24,-72(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_25"))) PPC_WEAK_FUNC(__restgprlr_25);
PPC_FUNC_IMPL(__imp____restgprlr_25) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// ld r25,-64(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_26"))) PPC_WEAK_FUNC(__restgprlr_26);
PPC_FUNC_IMPL(__imp____restgprlr_26) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// ld r26,-56(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_27"))) PPC_WEAK_FUNC(__restgprlr_27);
PPC_FUNC_IMPL(__imp____restgprlr_27) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// ld r27,-48(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_28"))) PPC_WEAK_FUNC(__restgprlr_28);
PPC_FUNC_IMPL(__imp____restgprlr_28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// ld r28,-40(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_29"))) PPC_WEAK_FUNC(__restgprlr_29);
PPC_FUNC_IMPL(__imp____restgprlr_29) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// ld r29,-32(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_30"))) PPC_WEAK_FUNC(__restgprlr_30);
PPC_FUNC_IMPL(__imp____restgprlr_30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_31"))) PPC_WEAK_FUNC(__restgprlr_31);
PPC_FUNC_IMPL(__imp____restgprlr_31) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239BD64"))) PPC_WEAK_FUNC(sub_8239BD64);
PPC_FUNC_IMPL(__imp__sub_8239BD64) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r12{};
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// mr r12,r5
	r12.u64 = ctx.r5.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8239BD70"))) PPC_WEAK_FUNC(sub_8239BD70);
PPC_FUNC_IMPL(__imp__sub_8239BD70) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239bea8
	sub_8239BEA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239BD74"))) PPC_WEAK_FUNC(sub_8239BD74);
PPC_FUNC_IMPL(__imp__sub_8239BD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239BD78"))) PPC_WEAK_FUNC(sub_8239BD78);
PPC_FUNC_IMPL(__imp__sub_8239BD78) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-31604
	r11.s64 = r11.s64 + -31604;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8239bdd8
	sub_8239BDD8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239bdb4
	if (cr0.eq) goto loc_8239BDB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8239BDB4:
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

__attribute__((alias("__imp__sub_8239BDD0"))) PPC_WEAK_FUNC(sub_8239BDD0);
PPC_FUNC_IMPL(__imp__sub_8239BDD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r19,19276(r14)
	r19.u64 = PPC_LOAD_U32(r14.u32 + 19276);
	// lwz r16,-15096(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -15096);
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
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x823a4260
	sub_823A4260(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8239be58
	if (cr0.eq) goto loc_8239BE58;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,17100
	r11.s64 = r11.s64 + 17100;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_8239BE18:
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8239be48
	if (cr6.eq) goto loc_8239BE48;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x8239be3c
	if (cr6.eq) goto loc_8239BE3C;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8239be18
	goto loc_8239BE18;
loc_8239BE3C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
loc_8239BE48:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_8239BE58:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	r12.s64 = r31.s64 + 112;
	// bl 0x8239be7c
	sub_8239BE7C(ctx, base);
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

__attribute__((alias("__imp__sub_8239BDD8"))) PPC_WEAK_FUNC(sub_8239BDD8);
PPC_FUNC_IMPL(__imp__sub_8239BDD8) {
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
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x823a4260
	sub_823A4260(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8239be58
	if (cr0.eq) goto loc_8239BE58;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,17100
	r11.s64 = r11.s64 + 17100;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_8239BE18:
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8239be48
	if (cr6.eq) goto loc_8239BE48;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x8239be3c
	if (cr6.eq) goto loc_8239BE3C;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8239be18
	goto loc_8239BE18;
loc_8239BE3C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
loc_8239BE48:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_8239BE58:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	r12.s64 = r31.s64 + 112;
	// bl 0x8239be7c
	sub_8239BE7C(ctx, base);
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

__attribute__((alias("__imp__sub_8239BE7C"))) PPC_WEAK_FUNC(sub_8239BE7C);
PPC_FUNC_IMPL(__imp__sub_8239BE7C) {
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
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x823a4100
	sub_823A4100(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239BEA0"))) PPC_WEAK_FUNC(sub_8239BEA0);
PPC_FUNC_IMPL(__imp__sub_8239BEA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r19,19276(r14)
	r19.u64 = PPC_LOAD_U32(r14.u32 + 19276);
	// lwz r16,-15072(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -15072);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r27,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r27.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239bff0
	if (!cr6.eq) goto loc_8239BFF0;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r11,-32198
	r11.s64 = -2110128128;
	// li r8,10240
	ctx.r8.s64 = 10240;
	// addi r7,r10,-12816
	ctx.r7.s64 = ctx.r10.s64 + -12816;
	// addi r6,r11,-11128
	ctx.r6.s64 = r11.s64 + -11128;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r27,9
	ctx.r4.s64 = r27.s64 + 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823aaff0
	sub_823AAFF0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x8239bf04
	if (!cr0.eq) goto loc_8239BF04;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8239bff4
	goto loc_8239BFF4;
loc_8239BF04:
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8239BF0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8239bf0c
	if (!cr6.eq) goto loc_8239BF0C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi. r30,r11,0
	r30.u64 = __builtin_rotateleft32(r11.u32, 0);
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8239bf4c
	if (cr0.eq) goto loc_8239BF4C;
loc_8239BF2C:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// lbzx r11,r30,r28
	r11.u64 = PPC_LOAD_U8(r30.u32 + r28.u32);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// bne cr6,0x8239bf50
	if (!cr6.eq) goto loc_8239BF50;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stbx r11,r30,r28
	PPC_STORE_U8(r30.u32 + r28.u32, r11.u8);
	// bne cr6,0x8239bf2c
	if (!cr6.eq) goto loc_8239BF2C;
loc_8239BF4C:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
loc_8239BF50:
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x823a4260
	sub_823A4260(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239bfdc
	if (!cr6.eq) goto loc_8239BFDC;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8239d488
	sub_8239D488(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x8239bfdc
	if (cr0.eq) goto loc_8239BFDC;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d488
	sub_8239D488(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r3.u32);
	// beq 0x8239bfd4
	if (cr0.eq) goto loc_8239BFD4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8239d3a0
	sub_8239D3A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8239bfbc
	if (cr0.eq) goto loc_8239BFBC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823a3f80
	sub_823A3F80(ctx, base);
loc_8239BFBC:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// stw r29,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r29.u32);
	// b 0x8239bfdc
	goto loc_8239BFDC;
loc_8239BFD4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
loc_8239BFDC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x8239bffc
	sub_8239BFFC(ctx, base);
loc_8239BFF0:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 4);
loc_8239BFF4:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8239BEA8"))) PPC_WEAK_FUNC(sub_8239BEA8);
PPC_FUNC_IMPL(__imp__sub_8239BEA8) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r27,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r27.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239bff0
	if (!cr6.eq) goto loc_8239BFF0;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r11,-32198
	r11.s64 = -2110128128;
	// li r8,10240
	ctx.r8.s64 = 10240;
	// addi r7,r10,-12816
	ctx.r7.s64 = ctx.r10.s64 + -12816;
	// addi r6,r11,-11128
	ctx.r6.s64 = r11.s64 + -11128;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r27,9
	ctx.r4.s64 = r27.s64 + 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823aaff0
	sub_823AAFF0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x8239bf04
	if (!cr0.eq) goto loc_8239BF04;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8239bff4
	goto loc_8239BFF4;
loc_8239BF04:
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8239BF0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8239bf0c
	if (!cr6.eq) goto loc_8239BF0C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi. r30,r11,0
	r30.u64 = __builtin_rotateleft32(r11.u32, 0);
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8239bf4c
	if (cr0.eq) goto loc_8239BF4C;
loc_8239BF2C:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// lbzx r11,r30,r28
	r11.u64 = PPC_LOAD_U8(r30.u32 + r28.u32);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// bne cr6,0x8239bf50
	if (!cr6.eq) goto loc_8239BF50;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stbx r11,r30,r28
	PPC_STORE_U8(r30.u32 + r28.u32, r11.u8);
	// bne cr6,0x8239bf2c
	if (!cr6.eq) goto loc_8239BF2C;
loc_8239BF4C:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
loc_8239BF50:
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x823a4260
	sub_823A4260(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239bfdc
	if (!cr6.eq) goto loc_8239BFDC;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8239d488
	sub_8239D488(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x8239bfdc
	if (cr0.eq) goto loc_8239BFDC;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d488
	sub_8239D488(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r3.u32);
	// beq 0x8239bfd4
	if (cr0.eq) goto loc_8239BFD4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8239d3a0
	sub_8239D3A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8239bfbc
	if (cr0.eq) goto loc_8239BFBC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823a3f80
	sub_823A3F80(ctx, base);
loc_8239BFBC:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// stw r29,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r29.u32);
	// b 0x8239bfdc
	goto loc_8239BFDC;
loc_8239BFD4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
loc_8239BFDC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x8239bffc
	sub_8239BFFC(ctx, base);
loc_8239BFF0:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 4);
loc_8239BFF4:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8239BFFC"))) PPC_WEAK_FUNC(sub_8239BFFC);
PPC_FUNC_IMPL(__imp__sub_8239BFFC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x823a4100
	sub_823A4100(ctx, base);
	// lwz r27,164(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239C024"))) PPC_WEAK_FUNC(sub_8239C024);
PPC_FUNC_IMPL(__imp__sub_8239C024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239C028"))) PPC_WEAK_FUNC(sub_8239C028);
PPC_FUNC_IMPL(__imp__sub_8239C028) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,4996
	r11.s64 = r11.s64 + 4996;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8239c09c
	if (cr0.eq) goto loc_8239C09C;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8239C058:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8239c058
	if (!cr6.eq) goto loc_8239C058;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239d488
	sub_8239D488(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// beq 0x8239c0a4
	if (cr0.eq) goto loc_8239C0A4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x8239d3a0
	sub_8239D3A0(ctx, base);
	// b 0x8239c0a4
	goto loc_8239C0A4;
loc_8239C09C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_8239C0A4:
	// li r11,1
	r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8239C0B8"))) PPC_WEAK_FUNC(sub_8239C0B8);
PPC_FUNC_IMPL(__imp__sub_8239C0B8) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8239c028
	sub_8239C028(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-31600
	r11.s64 = r11.s64 + -31600;
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

__attribute__((alias("__imp__sub_8239C0FC"))) PPC_WEAK_FUNC(sub_8239C0FC);
PPC_FUNC_IMPL(__imp__sub_8239C0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239C100"))) PPC_WEAK_FUNC(sub_8239C100);
PPC_FUNC_IMPL(__imp__sub_8239C100) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,4996
	r11.s64 = r11.s64 + 4996;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x8239c13c
	if (cr6.eq) goto loc_8239C13C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
loc_8239C13C:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239c14c
	if (cr0.eq) goto loc_8239C14C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8239C14C:
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

__attribute__((alias("__imp__sub_8239C168"))) PPC_WEAK_FUNC(sub_8239C168);
PPC_FUNC_IMPL(__imp__sub_8239C168) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,4996
	r11.s64 = r11.s64 + 4996;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x8239c1a4
	if (cr6.eq) goto loc_8239C1A4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
loc_8239C1A4:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239c1b4
	if (cr0.eq) goto loc_8239C1B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8239C1B4:
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

__attribute__((alias("__imp__sub_8239C1D0"))) PPC_WEAK_FUNC(sub_8239C1D0);
PPC_FUNC_IMPL(__imp__sub_8239C1D0) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x8239c028
	sub_8239C028(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-31584
	r11.s64 = r11.s64 + -31584;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_8239C218"))) PPC_WEAK_FUNC(sub_8239C218);
PPC_FUNC_IMPL(__imp__sub_8239C218) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,4996
	r11.s64 = r11.s64 + 4996;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x8239c254
	if (cr6.eq) goto loc_8239C254;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
loc_8239C254:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239c264
	if (cr0.eq) goto loc_8239C264;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8239C264:
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

__attribute__((alias("__imp__sub_8239C280"))) PPC_WEAK_FUNC(sub_8239C280);
PPC_FUNC_IMPL(__imp__sub_8239C280) {
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
	// bl 0x821247e8
	sub_821247E8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-31592
	r11.s64 = r11.s64 + -31592;
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

__attribute__((alias("__imp__sub_8239C2BC"))) PPC_WEAK_FUNC(sub_8239C2BC);
PPC_FUNC_IMPL(__imp__sub_8239C2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239C2C0"))) PPC_WEAK_FUNC(sub_8239C2C0);
PPC_FUNC_IMPL(__imp__sub_8239C2C0) {
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
	// bl 0x821247e8
	sub_821247E8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-31584
	r11.s64 = r11.s64 + -31584;
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

__attribute__((alias("__imp__sub_8239C2FC"))) PPC_WEAK_FUNC(sub_8239C2FC);
PPC_FUNC_IMPL(__imp__sub_8239C2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239C300"))) PPC_WEAK_FUNC(sub_8239C300);
PPC_FUNC_IMPL(__imp__sub_8239C300) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x8239c3f0
	if (cr0.eq) goto loc_8239C3F0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_8239C324:
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x8239c37c
	if (cr6.eq) goto loc_8239C37C;
	// addi r10,r5,8
	ctx.r10.s64 = ctx.r5.s64 + 8;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_8239C33C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8239c360
	if (cr0.eq) goto loc_8239C360;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8239c33c
	if (cr6.eq) goto loc_8239C33C;
loc_8239C360:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x8239c37c
	if (cr0.eq) goto loc_8239C37C;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, r30.u32, xer);
	// blt cr6,0x8239c324
	if (cr6.lt) goto loc_8239C324;
	// b 0x8239c3f0
	goto loc_8239C3F0;
loc_8239C37C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, r30.u32, xer);
	// bge cr6,0x8239c3f0
	if (!cr6.lt) goto loc_8239C3F0;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r31
	ctx.r6.u64 = r11.u64 + r31.u64;
loc_8239C390:
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8239c3f0
	if (!cr0.eq) goto loc_8239C3F0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x8239c3f4
	if (cr6.eq) goto loc_8239C3F4;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_8239C3B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8239c3d8
	if (cr0.eq) goto loc_8239C3D8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8239c3b4
	if (cr6.eq) goto loc_8239C3B4;
loc_8239C3D8:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x8239c3f4
	if (cr0.eq) goto loc_8239C3F4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, r30.u32, xer);
	// blt cr6,0x8239c390
	if (cr6.lt) goto loc_8239C390;
loc_8239C3F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239C3F4:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239C400"))) PPC_WEAK_FUNC(sub_8239C400);
PPC_FUNC_IMPL(__imp__sub_8239C400) {
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
	// mflr r12
	// bl 0x8239bcec
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// li r29,-1
	r29.s64 = -1;
	// lwz r28,8(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r31,0
	r31.s64 = 0;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x8239c5a0
	if (cr0.eq) goto loc_8239C5A0;
	// mr r26,r11
	r26.u64 = r11.u64;
loc_8239C438:
	// subf r11,r29,r31
	r11.s64 = r31.s64 - r29.s64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// ble cr6,0x8239c49c
	if (!cr6.gt) goto loc_8239C49C;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// beq cr6,0x8239c488
	if (cr6.eq) goto loc_8239C488;
	// addi r10,r7,8
	ctx.r10.s64 = ctx.r7.s64 + 8;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_8239C45C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8239c480
	if (cr0.eq) goto loc_8239C480;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8239c45c
	if (cr6.eq) goto loc_8239C45C;
loc_8239C480:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x8239c49c
	if (!cr0.eq) goto loc_8239C49C;
loc_8239C488:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x8239c52c
	if (!cr6.eq) goto loc_8239C52C;
	// lwz r30,4(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r31
	r29.u64 = r31.u64;
loc_8239C49C:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x8239c4dc
	if (cr6.eq) goto loc_8239C4DC;
	// addi r10,r5,8
	ctx.r10.s64 = ctx.r5.s64 + 8;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_8239C4B0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8239c4d4
	if (cr0.eq) goto loc_8239C4D4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8239c4b0
	if (cr6.eq) goto loc_8239C4B0;
loc_8239C4D4:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x8239c518
	if (!cr0.eq) goto loc_8239C518;
loc_8239C4DC:
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x8239c4fc
	if (cr0.lt) goto loc_8239C4FC;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
loc_8239C4FC:
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(r11.s32, ctx.r6.s32, xer);
	// bne cr6,0x8239c518
	if (!cr6.eq) goto loc_8239C518;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8239c54c
	if (!cr6.eq) goto loc_8239C54C;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
loc_8239C518:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// blt cr6,0x8239c438
	if (cr6.lt) goto loc_8239C438;
	// b 0x8239c5a0
	goto loc_8239C5A0;
loc_8239C52C:
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8239c5a0
	if (!cr0.eq) goto loc_8239C5A0;
	// lwz r11,20(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 20);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8239c5a0
	if (!cr0.eq) goto loc_8239C5A0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8239c5a4
	goto loc_8239C5A4;
loc_8239C54C:
	// subf r11,r29,r31
	r11.s64 = r31.s64 - r29.s64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bgt cr6,0x8239c594
	if (cr6.gt) goto loc_8239C594;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8239c57c
	if (!cr0.eq) goto loc_8239C57C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8239c5a4
	if (!cr6.eq) goto loc_8239C5A4;
loc_8239C56C:
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
loc_8239C570:
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8239c5a0
	if (!cr0.eq) goto loc_8239C5A0;
	// b 0x8239c5a4
	goto loc_8239C5A4;
loc_8239C57C:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// b 0x8239c570
	goto loc_8239C570;
loc_8239C594:
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239c56c
	if (cr0.eq) goto loc_8239C56C;
loc_8239C5A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239C5A4:
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8239C5A8"))) PPC_WEAK_FUNC(sub_8239C5A8);
PPC_FUNC_IMPL(__imp__sub_8239C5A8) {
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
	// mflr r12
	// bl 0x8239bcdc
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// li r25,0
	r25.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// li r21,0
	r21.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// lwz r26,8(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r28,-1
	r28.s64 = -1;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// li r24,1
	r24.s64 = 1;
	// li r23,-1
	r23.s64 = -1;
	// li r29,0
	r29.s64 = 0;
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// beq 0x8239c7a4
	if (cr0.eq) goto loc_8239C7A4;
loc_8239C5E8:
	// subf r10,r28,r29
	ctx.r10.s64 = r29.s64 - r28.s64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// ble cr6,0x8239c654
	if (!cr6.gt) goto loc_8239C654;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// beq cr6,0x8239c638
	if (cr6.eq) goto loc_8239C638;
	// addi r9,r7,8
	ctx.r9.s64 = ctx.r7.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_8239C60C:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r31,0(r9)
	r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r31,r31,r8
	r31.s64 = ctx.r8.s64 - r31.s64;
	// beq 0x8239c630
	if (cr0.eq) goto loc_8239C630;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x8239c60c
	if (cr6.eq) goto loc_8239C60C;
loc_8239C630:
	// cmpwi r31,0
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8239c654
	if (!cr0.eq) goto loc_8239C654;
loc_8239C638:
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8239c648
	if (!cr0.eq) goto loc_8239C648;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
loc_8239C648:
	// lwz r27,4(r4)
	r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_8239C654:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// beq cr6,0x8239c694
	if (cr6.eq) goto loc_8239C694;
	// addi r9,r5,8
	ctx.r9.s64 = ctx.r5.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_8239C668:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r31,0(r9)
	r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r31,r31,r8
	r31.s64 = ctx.r8.s64 - r31.s64;
	// beq 0x8239c68c
	if (cr0.eq) goto loc_8239C68C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x8239c668
	if (cr6.eq) goto loc_8239C668;
loc_8239C68C:
	// cmpwi r31,0
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8239c794
	if (!cr0.eq) goto loc_8239C794;
loc_8239C694:
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x8239c6b4
	if (cr0.lt) goto loc_8239C6B4;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8239C6B4:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// bne cr6,0x8239c794
	if (!cr6.eq) goto loc_8239C794;
	// subf r10,r28,r29
	ctx.r10.s64 = r29.s64 - r28.s64;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bgt cr6,0x8239c780
	if (cr6.gt) goto loc_8239C780;
	// clrlwi. r9,r24,24
	ctx.r9.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8239c794
	if (cr0.eq) goto loc_8239C794;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// rlwinm. r9,r9,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8239c704
	if (!cr0.eq) goto loc_8239C704;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8239c6fc
	if (!cr6.eq) goto loc_8239C6FC;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8239c6fc
	if (cr0.eq) goto loc_8239C6FC;
	// li r24,0
	r24.s64 = 0;
loc_8239C6FC:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8239c72c
	goto loc_8239C72C;
loc_8239C704:
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8239c724
	if (cr0.eq) goto loc_8239C724;
	// li r24,0
	r24.s64 = 0;
loc_8239C724:
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
loc_8239C72C:
	// clrlwi. r9,r24,24
	ctx.r9.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8239c794
	if (cr0.eq) goto loc_8239C794;
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8239c794
	if (cr0.eq) goto loc_8239C794;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x8239c75c
	if (cr0.lt) goto loc_8239C75C;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8239C75C:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq cr6,0x8239c774
	if (cr6.eq) goto loc_8239C774;
	// cmpw cr6,r23,r10
	cr6.compare<int32_t>(r23.s32, ctx.r10.s32, xer);
	// bne cr6,0x8239c7d0
	if (!cr6.eq) goto loc_8239C7D0;
loc_8239C774:
	// mr r25,r30
	r25.u64 = r30.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// b 0x8239c794
	goto loc_8239C794;
loc_8239C780:
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// andi. r10,r10,5
	ctx.r10.u64 = ctx.r10.u64 & 5;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8239c794
	if (!cr0.eq) goto loc_8239C794;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
loc_8239C794:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(r29.u32, r26.u32, xer);
	// blt cr6,0x8239c5e8
	if (cr6.lt) goto loc_8239C5E8;
loc_8239C7A4:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239c7bc
	if (cr0.eq) goto loc_8239C7BC;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8239c7bc
	if (cr6.eq) goto loc_8239C7BC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x8239c7d4
	goto loc_8239C7D4;
loc_8239C7BC:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x8239c7d0
	if (cr6.eq) goto loc_8239C7D0;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bne cr6,0x8239c7d4
	if (!cr6.eq) goto loc_8239C7D4;
loc_8239C7D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239C7D4:
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_8239C7D8"))) PPC_WEAK_FUNC(sub_8239C7D8);
PPC_FUNC_IMPL(__imp__sub_8239C7D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r19,19276(r14)
	r19.u64 = PPC_LOAD_U32(r14.u32 + 19276);
	// lwz r16,-15048(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -15048);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8239c938
	if (cr6.eq) {
		// ERROR 8239C938
		return;
	}
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r30,r8,r3
	r30.s64 = ctx.r3.s64 - ctx.r8.s64;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8239c840
	if (cr0.eq) goto loc_8239C840;
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r30,r10,r30
	r30.s64 = r30.s64 - ctx.r10.s64;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
loc_8239C840:
	// subf r10,r4,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r4.s64;
	// subf r6,r30,r10
	ctx.r6.s64 = ctx.r10.s64 - r30.s64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x8239c868
	if (!cr0.eq) goto loc_8239C868;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8239c300
	sub_8239C300(ctx, base);
	// b 0x8239c88c
	goto loc_8239C88C;
loc_8239C868:
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bne 0x8239c888
	if (!cr0.eq) goto loc_8239C888;
	// bl 0x8239c400
	sub_8239C400(ctx, base);
	// b 0x8239c88c
	goto loc_8239C88C;
loc_8239C888:
	// bl 0x8239c5a8
	sub_8239C5A8(ctx, base);
loc_8239C88C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8239c8c8
	if (cr6.eq) goto loc_8239C8C8;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x8239c8b4
	if (cr0.lt) goto loc_8239C8B4;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
loc_8239C8B4:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// b 0x8239c8fc
	goto loc_8239C8FC;
loc_8239C8C8:
	// li r30,0
	r30.s64 = 0;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x8239c8fc
	if (cr6.eq) goto loc_8239C8FC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-31540
	ctx.r4.s64 = r11.s64 + -31540;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8239c0b8
	sub_8239C0B8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r4,r11,-13160
	ctx.r4.s64 = r11.s64 + -13160;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8239C8FC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8239c934
	// ERROR 8239C934
	return;
}

__attribute__((alias("__imp__sub_8239C7E0"))) PPC_WEAK_FUNC(sub_8239C7E0);
PPC_FUNC_IMPL(__imp__sub_8239C7E0) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8239c938
	if (cr6.eq) goto loc_8239C938;
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r30,r8,r3
	r30.s64 = ctx.r3.s64 - ctx.r8.s64;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8239c840
	if (cr0.eq) goto loc_8239C840;
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r30,r10,r30
	r30.s64 = r30.s64 - ctx.r10.s64;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
loc_8239C840:
	// subf r10,r4,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r4.s64;
	// subf r6,r30,r10
	ctx.r6.s64 = ctx.r10.s64 - r30.s64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x8239c868
	if (!cr0.eq) goto loc_8239C868;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8239c300
	sub_8239C300(ctx, base);
	// b 0x8239c88c
	goto loc_8239C88C;
loc_8239C868:
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bne 0x8239c888
	if (!cr0.eq) goto loc_8239C888;
	// bl 0x8239c400
	sub_8239C400(ctx, base);
	// b 0x8239c88c
	goto loc_8239C88C;
loc_8239C888:
	// bl 0x8239c5a8
	sub_8239C5A8(ctx, base);
loc_8239C88C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8239c8c8
	if (cr6.eq) goto loc_8239C8C8;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x8239c8b4
	if (cr0.lt) goto loc_8239C8B4;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
loc_8239C8B4:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// b 0x8239c8fc
	goto loc_8239C8FC;
loc_8239C8C8:
	// li r30,0
	r30.s64 = 0;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x8239c8fc
	if (cr6.eq) goto loc_8239C8FC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-31540
	ctx.r4.s64 = r11.s64 + -31540;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8239c0b8
	sub_8239C0B8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r4,r11,-13160
	ctx.r4.s64 = r11.s64 + -13160;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8239C8FC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8239c934
	goto loc_8239C934;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-31576
	ctx.r4.s64 = r11.s64 + -31576;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// li r30,0
	r30.s64 = 0;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// bl 0x8239c1d0
	sub_8239C1D0(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r4,r11,-13248
	ctx.r4.s64 = r11.s64 + -13248;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
loc_8239C934:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8239C938:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8239C90C"))) PPC_WEAK_FUNC(sub_8239C90C);
PPC_FUNC_IMPL(__imp__sub_8239C90C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-31576
	ctx.r4.s64 = r11.s64 + -31576;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// li r30,0
	r30.s64 = 0;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// bl 0x8239c1d0
	sub_8239C1D0(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r4,r11,-13248
	ctx.r4.s64 = r11.s64 + -13248;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8239C940"))) PPC_WEAK_FUNC(sub_8239C940);
PPC_FUNC_IMPL(__imp__sub_8239C940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,5
	ctx.r10.u64 = ctx.r10.u64 | 5;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239C964"))) PPC_WEAK_FUNC(sub_8239C964);
PPC_FUNC_IMPL(__imp__sub_8239C964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239C968"))) PPC_WEAK_FUNC(sub_8239C968);
PPC_FUNC_IMPL(__imp__sub_8239C968) {
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
	// bl 0x821247e8
	sub_821247E8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-31600
	r11.s64 = r11.s64 + -31600;
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

__attribute__((alias("__imp__sub_8239C9A4"))) PPC_WEAK_FUNC(sub_8239C9A4);
PPC_FUNC_IMPL(__imp__sub_8239C9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239C9A8"))) PPC_WEAK_FUNC(sub_8239C9A8);
PPC_FUNC_IMPL(__imp__sub_8239C9A8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r11,-31520
	ctx.r4.s64 = r11.s64 + -31520;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8239ca00
	if (cr6.eq) goto loc_8239CA00;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239ca00
	if (cr0.eq) goto loc_8239CA00;
	// lis r11,409
	r11.s64 = 26804224;
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
loc_8239CA00:
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823b6758
	sub_823B6758(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8239CA2C"))) PPC_WEAK_FUNC(sub_8239CA2C);
PPC_FUNC_IMPL(__imp__sub_8239CA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239CA30"))) PPC_WEAK_FUNC(sub_8239CA30);
PPC_FUNC_IMPL(__imp__sub_8239CA30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r19,19276(r14)
	r19.u64 = PPC_LOAD_U32(r14.u32 + 19276);
	// lwz r16,-15024(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -15024);
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8239CA60:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r27,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r27.u32);
	// blt 0x8239ca88
	if (cr0.lt) goto loc_8239CA88;
	// subf r30,r29,r30
	r30.s64 = r30.s64 - r29.s64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8239ca60
	goto loc_8239CA60;
loc_8239CA88:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8239CA38"))) PPC_WEAK_FUNC(sub_8239CA38);
PPC_FUNC_IMPL(__imp__sub_8239CA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8239CA60:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r27,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r27.u32);
	// blt 0x8239ca88
	if (cr0.lt) goto loc_8239CA88;
	// subf r30,r29,r30
	r30.s64 = r30.s64 - r29.s64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8239ca60
	goto loc_8239CA60;
loc_8239CA88:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8239CA9C"))) PPC_WEAK_FUNC(sub_8239CA9C);
PPC_FUNC_IMPL(__imp__sub_8239CA9C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-8083
	r11.s64 = -529727488;
	// ori r11,r11,29539
	r11.u64 = r11.u64 | 29539;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8239caec
	if (cr6.eq) goto loc_8239CAEC;
	// li r11,0
	r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8239caf4
	goto loc_8239CAF4;
loc_8239CAEC:
	// bl 0x823a3e60
	sub_823A3E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8239CAF4:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239CB08"))) PPC_WEAK_FUNC(sub_8239CB08);
PPC_FUNC_IMPL(__imp__sub_8239CB08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r19,19276(r14)
	r19.u64 = PPC_LOAD_U32(r14.u32 + 19276);
	// lwz r16,-15000(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -15000);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r28,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r28.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r27,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r27.u32);
	// mullw r11,r30,r28
	r11.s64 = int64_t(r30.s32) * int64_t(r28.s32);
	// add r29,r11,r3
	r29.u64 = r11.u64 + ctx.r3.u64;
	// stw r29,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r29.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8239CB4C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r28.u32);
	// blt 0x8239cb74
	if (cr0.lt) goto loc_8239CB74;
	// subf r29,r30,r29
	r29.s64 = r29.s64 - r30.s64;
	// stw r29,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r29.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8239cb4c
	goto loc_8239CB4C;
loc_8239CB74:
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x8239cbc8
	sub_8239CBC8(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8239CB10"))) PPC_WEAK_FUNC(sub_8239CB10);
PPC_FUNC_IMPL(__imp__sub_8239CB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r28,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r28.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r27,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r27.u32);
	// mullw r11,r30,r28
	r11.s64 = int64_t(r30.s32) * int64_t(r28.s32);
	// add r29,r11,r3
	r29.u64 = r11.u64 + ctx.r3.u64;
	// stw r29,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r29.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8239CB4C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r28.u32);
	// blt 0x8239cb74
	if (cr0.lt) goto loc_8239CB74;
	// subf r29,r30,r29
	r29.s64 = r29.s64 - r30.s64;
	// stw r29,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r29.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8239cb4c
	goto loc_8239CB4C;
loc_8239CB74:
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x8239cbc8
	sub_8239CBC8(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8239CB90"))) PPC_WEAK_FUNC(sub_8239CB90);
PPC_FUNC_IMPL(__imp__sub_8239CB90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r29,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r29.u64);
	// std r28,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r28.u64);
	// std r27,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r27.u64);
	// mflr r12
	// stw r12,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,188(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// lwz r28,180(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lwz r30,172(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// lwz r29,164(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// b 0x8239cbec
	goto loc_8239CBEC;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r29,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r29.u64);
	// std r28,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r28.u64);
	// std r27,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r27.u64);
	// mflr r12
	// stw r12,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_8239CBEC:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8239cc0c
	if (!cr6.eq) goto loc_8239CC0C;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239ca38
	sub_8239CA38(ctx, base);
loc_8239CC0C:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r29,-24(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r28,-32(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r27,-40(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lwz r12,-48(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239CBC8"))) PPC_WEAK_FUNC(sub_8239CBC8);
PPC_FUNC_IMPL(__imp__sub_8239CBC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r29,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r29.u64);
	// std r28,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r28.u64);
	// std r27,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r27.u64);
	// mflr r12
	// stw r12,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8239cc0c
	if (!cr6.eq) goto loc_8239CC0C;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239ca38
	sub_8239CA38(ctx, base);
loc_8239CC0C:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r29,-24(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r28,-32(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r27,-40(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lwz r12,-48(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239CC30"))) PPC_WEAK_FUNC(sub_8239CC30);
PPC_FUNC_IMPL(__imp__sub_8239CC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r19,19276(r14)
	r19.u64 = PPC_LOAD_U32(r14.u32 + 19276);
	// lwz r16,-14976(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14976);
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
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r29,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r29.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r7,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r7.u32);
	// li r28,0
	r28.s64 = 0;
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8239CC70:
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// cmpw cr6,r28,r26
	cr6.compare<int32_t>(r28.s32, r26.s32, xer);
	// bge cr6,0x8239cc9c
	if (!cr6.lt) goto loc_8239CC9C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x8239cc70
	goto loc_8239CC70;
loc_8239CC9C:
	// li r11,1
	r11.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x8239cce8
	sub_8239CCE8(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8239CC38"))) PPC_WEAK_FUNC(sub_8239CC38);
PPC_FUNC_IMPL(__imp__sub_8239CC38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r29,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r29.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r7,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r7.u32);
	// li r28,0
	r28.s64 = 0;
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8239CC70:
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// cmpw cr6,r28,r26
	cr6.compare<int32_t>(r28.s32, r26.s32, xer);
	// bge cr6,0x8239cc9c
	if (!cr6.lt) goto loc_8239CC9C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x8239cc70
	goto loc_8239CC70;
loc_8239CC9C:
	// li r11,1
	r11.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x8239cce8
	sub_8239CCE8(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8239CCB8"))) PPC_WEAK_FUNC(sub_8239CCB8);
PPC_FUNC_IMPL(__imp__sub_8239CCB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r29,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r29.u64);
	// std r28,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r28.u64);
	// mflr r12
	// stw r12,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,172(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// lwz r30,164(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x8239cd08
	goto loc_8239CD08;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r29,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r29.u64);
	// std r28,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r28.u64);
	// mflr r12
	// stw r12,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_8239CD08:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8239cd28
	if (!cr6.eq) goto loc_8239CD28;
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239ca38
	sub_8239CA38(ctx, base);
loc_8239CD28:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r29,-24(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r28,-32(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lwz r12,-40(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239CCE8"))) PPC_WEAK_FUNC(sub_8239CCE8);
PPC_FUNC_IMPL(__imp__sub_8239CCE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r29,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r29.u64);
	// std r28,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r28.u64);
	// mflr r12
	// stw r12,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8239cd28
	if (!cr6.eq) goto loc_8239CD28;
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239ca38
	sub_8239CA38(ctx, base);
loc_8239CD28:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r29,-24(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r28,-32(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lwz r12,-40(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239CD48"))) PPC_WEAK_FUNC(sub_8239CD48);
PPC_FUNC_IMPL(__imp__sub_8239CD48) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239CD4C"))) PPC_WEAK_FUNC(sub_8239CD4C);
PPC_FUNC_IMPL(__imp__sub_8239CD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239CD50"))) PPC_WEAK_FUNC(sub_8239CD50);
PPC_FUNC_IMPL(__imp__sub_8239CD50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r0{};
	// addi r0,r5,1
	r0.s64 = ctx.r5.s64 + 1;
	// mtctr r0
	ctr.u64 = r0.u64;
	// ori r6,r3,0
	ctx.r6.u64 = ctx.r3.u64 | 0;
	// b 0x8239cd6c
	goto loc_8239CD6C;
loc_8239CD60:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stb r4,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r4.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_8239CD6C:
	// andi. r0,r6,3
	r0.u64 = ctx.r6.u64 & 3;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// bdnzf eq,0x8239cd60
	--ctr.u64;
	if (ctr.u32 != 0 && !cr0.eq) goto loc_8239CD60;
	// rlwimi r4,r4,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm. r0,r5,28,4,31
	r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// rlwimi r4,r4,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// beq+ 0x8239cda0
	if (cr0.eq) goto loc_8239CDA0;
	// mtctr r0
	ctr.u64 = r0.u64;
loc_8239CD88:
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// stw r4,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r4.u32);
	// stw r4,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
	// stw r4,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r4.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz+ 0x8239cd88
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239CD88;
loc_8239CDA0:
	// rlwinm. r0,r5,30,30,31
	r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// beq- 0x8239cdcc
	if (cr0.eq) goto loc_8239CDCC;
	// mtctr r0
	ctr.u64 = r0.u64;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdz- 0x8239cdcc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8239CDCC;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdz- 0x8239cdcc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8239CDCC;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
loc_8239CDCC:
	// andi. r0,r5,3
	r0.u64 = ctx.r5.u64 & 3;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// mtctr r0
	ctr.u64 = r0.u64;
	// beqlr+ 
	if (cr0.eq) return;
	// stb r4,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r4.u8);
	// bdzlr- 
	--ctr.u64;
	if (ctr.u32 == 0) return;
}

__attribute__((alias("__imp__sub_8239CDE0"))) PPC_WEAK_FUNC(sub_8239CDE0);
PPC_FUNC_IMPL(__imp__sub_8239CDE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// stb r4,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r4.u8);
	// bdzlr- 
	--ctr.u64;
	if (ctr.u32 == 0) return;
}

__attribute__((alias("__imp__sub_8239CDE8"))) PPC_WEAK_FUNC(sub_8239CDE8);
PPC_FUNC_IMPL(__imp__sub_8239CDE8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239CDF0"))) PPC_WEAK_FUNC(sub_8239CDF0);
PPC_FUNC_IMPL(__imp__sub_8239CDF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8239ce38
	if (cr6.eq) goto loc_8239CE38;
	// bl 0x823b99e8
	sub_823B99E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823b8e48
	sub_823B8E48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8239ce38
	if (!cr0.eq) goto loc_8239CE38;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823b6468
	sub_823B6468(ctx, base);
	// bl 0x8239ff28
	sub_8239FF28(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_8239CE38:
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

__attribute__((alias("__imp__sub_8239CE4C"))) PPC_WEAK_FUNC(sub_8239CE4C);
PPC_FUNC_IMPL(__imp__sub_8239CE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239CE50"))) PPC_WEAK_FUNC(sub_8239CE50);
PPC_FUNC_IMPL(__imp__sub_8239CE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	PPCCRRegister cr6{};
	PPCCRRegister cr7{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// std r3,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r3.u64);
	// clrlwi r6,r3,29
	ctx.r6.u64 = ctx.r3.u32 & 0x7;
	// dcbt r0,r4
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// subfic r6,r6,8
	xer.ca = ctx.r6.u32 <= 8;
	ctx.r6.s64 = 8 - ctx.r6.s64;
	// beq 0x8239ceb4
	if (cr0.eq) goto loc_8239CEB4;
	// cmplw r5,r6
	cr0.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// ble 0x8239ced0
	if (!cr0.gt) goto loc_8239CED0;
	// cmplwi r6,4
	cr0.compare<uint32_t>(ctx.r6.u32, 4, xer);
	// beq 0x8239cea0
	if (cr0.eq) goto loc_8239CEA0;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_8239CE88:
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x8239ce88
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239CE88;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x8239ceb4
	goto loc_8239CEB4;
loc_8239CEA0:
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_8239CEB4:
	// clrlwi r6,r4,29
	ctx.r6.u64 = ctx.r4.u32 & 0x7;
	// cmplwi cr6,r6,4
	cr6.compare<uint32_t>(ctx.r6.u32, 4, xer);
	// cmplwi cr1,r6,0
	cr1.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// cmplwi cr7,r5,128
	cr7.compare<uint32_t>(ctx.r5.u32, 128, xer);
	// beq cr6,0x8239d068
	if (cr6.eq) goto loc_8239D068;
	// bne cr1,0x8239d198
	if (!cr1.eq) goto loc_8239D198;
	// bge cr7,0x8239cf3c
	if (!cr7.lt) goto loc_8239CF3C;
loc_8239CED0:
	// dcbtst r0,r3
	// addi r4,r4,-8
	ctx.r4.s64 = ctx.r4.s64 + -8;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
loc_8239CEDC:
	// rlwinm r7,r5,29,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0xF;
	// clrlwi r6,r5,29
	ctx.r6.u64 = ctx.r5.u32 & 0x7;
	// cmplwi cr1,r7,0
	cr1.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr1,0x8239cf00
	if (cr1.eq) goto loc_8239CF00;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_8239CEF4:
	// ldu r7,8(r4)
	ea = 8 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U64(ea);
	ctx.r4.u32 = ea;
	// stdu r7,8(r3)
	ea = 8 + ctx.r3.u32;
	PPC_STORE_U64(ea, ctx.r7.u64);
	ctx.r3.u32 = ea;
	// bdnz 0x8239cef4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239CEF4;
loc_8239CF00:
	// cmplwi cr1,r6,4
	cr1.compare<uint32_t>(ctx.r6.u32, 4, xer);
	// beq cr6,0x8239cf24
	if (cr6.eq) goto loc_8239CF24;
	// beq cr1,0x8239cf2c
	if (cr1.eq) goto loc_8239CF2C;
	// addi r3,r3,7
	ctx.r3.s64 = ctx.r3.s64 + 7;
	// addi r4,r4,7
	ctx.r4.s64 = ctx.r4.s64 + 7;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_8239CF18:
	// lbzu r7,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r7,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x8239cf18
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239CF18;
loc_8239CF24:
	// ld r3,-8(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8239CF2C:
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// ld r3,-8(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8239CF3C:
	// clrlwi r6,r3,25
	ctx.r6.u64 = ctx.r3.u32 & 0x7F;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// addi r4,r4,-8
	ctx.r4.s64 = ctx.r4.s64 + -8;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// subfic r6,r6,128
	xer.ca = ctx.r6.u32 <= 128;
	ctx.r6.s64 = 128 - ctx.r6.s64;
	// beq 0x8239cf6c
	if (cr0.eq) goto loc_8239CF6C;
	// rlwinm r7,r6,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_8239CF60:
	// ldu r7,8(r4)
	ea = 8 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U64(ea);
	ctx.r4.u32 = ea;
	// stdu r7,8(r3)
	ea = 8 + ctx.r3.u32;
	PPC_STORE_U64(ea, ctx.r7.u64);
	ctx.r3.u32 = ea;
	// bdnz 0x8239cf60
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239CF60;
loc_8239CF6C:
	// rlwinm r6,r5,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq 0x8239cedc
	if (cr0.eq) goto loc_8239CEDC;
	// addi r10,r5,127
	ctx.r10.s64 = ctx.r5.s64 + 127;
	// clrlwi r8,r5,25
	ctx.r8.u64 = ctx.r5.u32 & 0x7F;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi cr1,r8,0
	cr1.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8239CF9C:
	// dcbt r9,r4
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// bdnz 0x8239cf9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239CF9C;
	// add r12,r4,r5
	r12.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// subf r11,r9,r12
	r11.s64 = r12.s64 - ctx.r9.s64;
	// add r12,r3,r5
	r12.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_8239CFBC:
	// ld r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// ld r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// ld r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r6,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r6.u64);
	// ld r6,32(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r7,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r7.u64);
	// ld r7,40(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// ld r8,48(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// std r6,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r6.u64);
	// ld r6,56(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 56);
	// std r7,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r7.u64);
	// ld r7,64(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 64);
	// std r8,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r8.u64);
	// ld r8,72(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 72);
	// std r6,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, ctx.r6.u64);
	// ld r6,80(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 80);
	// std r7,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r7.u64);
	// ld r7,88(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 88);
	// std r8,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, ctx.r8.u64);
	// ld r8,96(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 96);
	// std r6,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, ctx.r6.u64);
	// ld r6,104(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 104);
	// std r7,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.r7.u64);
	// ld r7,112(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 112);
	// std r8,96(r3)
	PPC_STORE_U64(ctx.r3.u32 + 96, ctx.r8.u64);
	// ld r8,120(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 120);
	// std r6,104(r3)
	PPC_STORE_U64(ctx.r3.u32 + 104, ctx.r6.u64);
	// ldu r6,128(r4)
	ea = 128 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U64(ea);
	ctx.r4.u32 = ea;
	// std r7,112(r3)
	PPC_STORE_U64(ctx.r3.u32 + 112, ctx.r7.u64);
	// std r8,120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 120, ctx.r8.u64);
	// stdu r6,128(r3)
	ea = 128 + ctx.r3.u32;
	PPC_STORE_U64(ea, ctx.r6.u64);
	ctx.r3.u32 = ea;
	// cmplw r4,r11
	cr0.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge 0x8239d050
	if (!cr0.lt) goto loc_8239D050;
	// dcbt r9,r4
	// bdnz 0x8239cfbc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239CFBC;
	// b 0x8239cedc
	goto loc_8239CEDC;
loc_8239D050:
	// beq cr1,0x8239d060
	if (cr1.eq) goto loc_8239D060;
	// li r8,-1
	ctx.r8.s64 = -1;
	// dcbtst r8,r12
	// cmplwi cr1,r8,0
	cr1.compare<uint32_t>(ctx.r8.u32, 0, xer);
loc_8239D060:
	// bdnz 0x8239cfbc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239CFBC;
	// b 0x8239cedc
	goto loc_8239CEDC;
loc_8239D068:
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// bge cr7,0x8239d0c0
	if (!cr7.lt) goto loc_8239D0C0;
	// dcbtst r0,r3
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
loc_8239D078:
	// rlwinm r7,r5,30,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x1F;
	// clrlwi r6,r5,30
	ctx.r6.u64 = ctx.r5.u32 & 0x3;
	// cmplwi cr1,r7,0
	cr1.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr1,0x8239d09c
	if (cr1.eq) goto loc_8239D09C;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_8239D090:
	// lwzu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// bdnz 0x8239d090
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239D090;
loc_8239D09C:
	// beq cr6,0x8239d0b8
	if (cr6.eq) goto loc_8239D0B8;
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_8239D0AC:
	// lbzu r7,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r7,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x8239d0ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239D0AC;
loc_8239D0B8:
	// ld r3,-8(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8239D0C0:
	// clrlwi r6,r3,25
	ctx.r6.u64 = ctx.r3.u32 & 0x7F;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// subfic r6,r6,128
	xer.ca = ctx.r6.u32 <= 128;
	ctx.r6.s64 = 128 - ctx.r6.s64;
	// beq 0x8239d0ec
	if (cr0.eq) goto loc_8239D0EC;
	// rlwinm r7,r6,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_8239D0E0:
	// lwzu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// bdnz 0x8239d0e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239D0E0;
loc_8239D0EC:
	// rlwinm r6,r5,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq 0x8239d078
	if (cr0.eq) goto loc_8239D078;
	// addi r10,r5,127
	ctx.r10.s64 = ctx.r5.s64 + 127;
	// clrlwi r8,r5,25
	ctx.r8.u64 = ctx.r5.u32 & 0x7F;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi cr1,r8,0
	cr1.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,4
	ctx.r9.s64 = 4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8239D11C:
	// dcbt r9,r4
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// bdnz 0x8239d11c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239D11C;
	// add r12,r4,r5
	r12.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// subf r11,r9,r12
	r11.s64 = r12.s64 - ctx.r9.s64;
	// add r12,r3,r5
	r12.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_8239D13C:
	// li r6,8
	ctx.r6.s64 = 8;
loc_8239D140:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// lwz r0,4(r4)
	r0.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r0,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r0.u32);
	// lwzu r0,16(r4)
	ea = 16 + ctx.r4.u32;
	r0.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stwu r0,16(r3)
	ea = 16 + ctx.r3.u32;
	PPC_STORE_U32(ea, r0.u32);
	ctx.r3.u32 = ea;
	// bne 0x8239d140
	if (!cr0.eq) goto loc_8239D140;
	// cmplw r4,r11
	cr0.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge 0x8239d180
	if (!cr0.lt) goto loc_8239D180;
	// dcbt r9,r4
	// bdnz 0x8239d13c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239D13C;
	// b 0x8239d078
	goto loc_8239D078;
loc_8239D180:
	// beq cr1,0x8239d190
	if (cr1.eq) goto loc_8239D190;
	// li r8,-1
	ctx.r8.s64 = -1;
	// dcbtst r8,r12
	// cmplwi cr1,r8,0
	cr1.compare<uint32_t>(ctx.r8.u32, 0, xer);
loc_8239D190:
	// bdnz 0x8239d13c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239D13C;
	// b 0x8239d078
	goto loc_8239D078;
loc_8239D198:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// bge cr7,0x8239d1cc
	if (!cr7.lt) goto loc_8239D1CC;
	// dcbtst r0,r3
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
loc_8239D1A8:
	// clrlwi r6,r5,25
	ctx.r6.u64 = ctx.r5.u32 & 0x7F;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// beq 0x8239d1c4
	if (cr0.eq) goto loc_8239D1C4;
loc_8239D1B8:
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x8239d1b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239D1B8;
loc_8239D1C4:
	// ld r3,-8(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8239D1CC:
	// clrlwi r6,r3,25
	ctx.r6.u64 = ctx.r3.u32 & 0x7F;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// subfic r6,r6,128
	xer.ca = ctx.r6.u32 <= 128;
	ctx.r6.s64 = 128 - ctx.r6.s64;
	// beq 0x8239d1f4
	if (cr0.eq) goto loc_8239D1F4;
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_8239D1E8:
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x8239d1e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239D1E8;
loc_8239D1F4:
	// rlwinm r6,r5,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq 0x8239d1a8
	if (cr0.eq) goto loc_8239D1A8;
	// addi r10,r5,127
	ctx.r10.s64 = ctx.r5.s64 + 127;
	// clrlwi r8,r5,25
	ctx.r8.u64 = ctx.r5.u32 & 0x7F;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi cr1,r8,0
	cr1.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8239D224:
	// dcbt r9,r4
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// bdnz 0x8239d224
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239D224;
	// add r12,r4,r5
	r12.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// subf r11,r9,r12
	r11.s64 = r12.s64 - ctx.r9.s64;
	// add r12,r3,r5
	r12.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_8239D244:
	// li r6,32
	ctx.r6.s64 = 32;
loc_8239D248:
	// lbz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r7,1(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1, ctx.r7.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x8239d248
	if (!cr0.eq) goto loc_8239D248;
	// cmplw r4,r11
	cr0.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge 0x8239d290
	if (!cr0.lt) goto loc_8239D290;
	// dcbt r9,r4
	// bdnz 0x8239d244
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239D244;
	// b 0x8239d1a8
	goto loc_8239D1A8;
loc_8239D290:
	// beq cr1,0x8239d2a0
	if (cr1.eq) goto loc_8239D2A0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// dcbtst r8,r12
	// cmplwi cr1,r8,0
	cr1.compare<uint32_t>(ctx.r8.u32, 0, xer);
loc_8239D2A0:
	// bdnz 0x8239d244
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239D244;
	// b 0x8239d1a8
	goto loc_8239D1A8;
}

__attribute__((alias("__imp__sub_8239D2A8"))) PPC_WEAK_FUNC(sub_8239D2A8);
PPC_FUNC_IMPL(__imp__sub_8239D2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r0{};
	// addi r0,r5,1
	r0.s64 = ctx.r5.s64 + 1;
	// ori r6,r3,0
	ctx.r6.u64 = ctx.r3.u64 | 0;
	// mtctr r0
	ctr.u64 = r0.u64;
	// b 0x8239d2cc
	goto loc_8239D2CC;
loc_8239D2B8:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lbz r0,0(r4)
	r0.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r0,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r0.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_8239D2CC:
	// andi. r0,r6,3
	r0.u64 = ctx.r6.u64 & 3;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// bdnzf eq,0x8239d2b8
	--ctr.u64;
	if (ctr.u32 != 0 && !cr0.eq) goto loc_8239D2B8;
	// rlwinm. r0,r5,30,2,31
	r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// beq- 0x8239d2fc
	if (cr0.eq) goto loc_8239D2FC;
	// mtctr r0
	ctr.u64 = r0.u64;
	// andi. r0,r4,3
	r0.u64 = ctx.r4.u64 & 3;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// bne- 0x8239d320
	if (!cr0.eq) goto loc_8239D320;
loc_8239D2E8:
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz+ 0x8239d2e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239D2E8;
loc_8239D2FC:
	// andi. r0,r5,3
	r0.u64 = ctx.r5.u64 & 3;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// mtctr r0
	ctr.u64 = r0.u64;
	// beqlr+ 
	if (cr0.eq) return;
loc_8239D308:
	// lbz r0,0(r4)
	r0.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r0,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r0.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// bdnz+ 0x8239d308
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239D308;
	// blr 
	return;
loc_8239D320:
	// lbz r7,3(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x8239d320
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239D320;
	// b 0x8239d2fc
	goto loc_8239D2FC;
}

__attribute__((alias("__imp__sub_8239D350"))) PPC_WEAK_FUNC(sub_8239D350);
PPC_FUNC_IMPL(__imp__sub_8239D350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,17624(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17624);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8239d374
	if (cr0.eq) goto loc_8239D374;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8239D374:
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x823aba48
	sub_823ABA48(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823aba28
	sub_823ABA28(ctx, base);
	// bl 0x823ab978
	sub_823AB978(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239D39C"))) PPC_WEAK_FUNC(sub_8239D39C);
PPC_FUNC_IMPL(__imp__sub_8239D39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239D3A0"))) PPC_WEAK_FUNC(sub_8239D3A0);
PPC_FUNC_IMPL(__imp__sub_8239D3A0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8239d3c0
	if (cr6.eq) goto loc_8239D3C0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8239d3f0
	if (!cr6.eq) goto loc_8239D3F0;
loc_8239D3C0:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x823a3f38
	sub_823A3F38(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x8239d470
	goto loc_8239D470;
loc_8239D3F0:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8239d42c
	if (!cr6.eq) goto loc_8239D42C;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_8239D408:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823a3f38
	sub_823A3F38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8239d470
	goto loc_8239D470;
loc_8239D42C:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8239D430:
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// beq 0x8239d450
	if (cr0.eq) goto loc_8239D450;
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8239d430
	if (!cr0.eq) goto loc_8239D430;
loc_8239D450:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8239d46c
	if (!cr6.eq) goto loc_8239D46C;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x8239d408
	goto loc_8239D408;
loc_8239D46C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239D470:
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

__attribute__((alias("__imp__sub_8239D484"))) PPC_WEAK_FUNC(sub_8239D484);
PPC_FUNC_IMPL(__imp__sub_8239D484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239D488"))) PPC_WEAK_FUNC(sub_8239D488);
PPC_FUNC_IMPL(__imp__sub_8239D488) {
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
	// li r11,-4096
	r11.s64 = -4096;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bgt cr6,0x8239d52c
	if (cr6.gt) goto loc_8239D52C;
	// lis r28,-32127
	r28.s64 = -2105475072;
loc_8239D4A8:
	// bl 0x823b99e8
	sub_823B99E8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8239d4c8
	if (!cr0.eq) goto loc_8239D4C8;
	// bl 0x823aba90
	sub_823ABA90(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x823aba48
	sub_823ABA48(ctx, base);
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x8239f080
	sub_8239F080(ctx, base);
loc_8239D4C8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// mr r31,r30
	r31.u64 = r30.u64;
	// bne cr6,0x8239d4d8
	if (!cr6.eq) goto loc_8239D4D8;
	// li r31,1
	r31.s64 = 1;
loc_8239D4D8:
	// bl 0x823b99e8
	sub_823B99E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823b8560
	sub_823B8560(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8239d524
	if (!cr0.eq) goto loc_8239D524;
	// lwz r11,17632(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 17632);
	// li r31,12
	r31.s64 = 12;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8239d514
	if (cr6.eq) goto loc_8239D514;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823abae0
	sub_823ABAE0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8239d4a8
	if (!cr0.eq) goto loc_8239D4A8;
	// b 0x8239d51c
	goto loc_8239D51C;
loc_8239D514:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_8239D51C:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_8239D524:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8239d548
	goto loc_8239D548;
loc_8239D52C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823abae0
	sub_823ABAE0(ctx, base);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8239D548:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8239D550"))) PPC_WEAK_FUNC(sub_8239D550);
PPC_FUNC_IMPL(__imp__sub_8239D550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8239D55C:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// beq 0x8239d57c
	if (cr0.eq) goto loc_8239D57C;
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x8239d55c
	if (!cr0.eq) goto loc_8239D55C;
loc_8239D57C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addic. r10,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8239D59C:
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8239d59c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239D59C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239D5AC"))) PPC_WEAK_FUNC(sub_8239D5AC);
PPC_FUNC_IMPL(__imp__sub_8239D5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp____savefpr_14"))) PPC_WEAK_FUNC(__savefpr_14);
PPC_FUNC_IMPL(__imp____savefpr_14) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f14{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
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
	// stfd f14,-144(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -144, f14.u64);
	// stfd f15,-136(r12)
	PPC_STORE_U64(r12.u32 + -136, f15.u64);
	// stfd f16,-128(r12)
	PPC_STORE_U64(r12.u32 + -128, f16.u64);
	// stfd f17,-120(r12)
	PPC_STORE_U64(r12.u32 + -120, f17.u64);
	// stfd f18,-112(r12)
	PPC_STORE_U64(r12.u32 + -112, f18.u64);
	// stfd f19,-104(r12)
	PPC_STORE_U64(r12.u32 + -104, f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(r12.u32 + -96, f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(r12.u32 + -88, f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(r12.u32 + -80, f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(r12.u32 + -72, f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_15"))) PPC_WEAK_FUNC(__savefpr_15);
PPC_FUNC_IMPL(__imp____savefpr_15) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
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
	// stfd f15,-136(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -136, f15.u64);
	// stfd f16,-128(r12)
	PPC_STORE_U64(r12.u32 + -128, f16.u64);
	// stfd f17,-120(r12)
	PPC_STORE_U64(r12.u32 + -120, f17.u64);
	// stfd f18,-112(r12)
	PPC_STORE_U64(r12.u32 + -112, f18.u64);
	// stfd f19,-104(r12)
	PPC_STORE_U64(r12.u32 + -104, f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(r12.u32 + -96, f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(r12.u32 + -88, f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(r12.u32 + -80, f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(r12.u32 + -72, f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_16"))) PPC_WEAK_FUNC(__savefpr_16);
PPC_FUNC_IMPL(__imp____savefpr_16) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
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
	// stfd f16,-128(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -128, f16.u64);
	// stfd f17,-120(r12)
	PPC_STORE_U64(r12.u32 + -120, f17.u64);
	// stfd f18,-112(r12)
	PPC_STORE_U64(r12.u32 + -112, f18.u64);
	// stfd f19,-104(r12)
	PPC_STORE_U64(r12.u32 + -104, f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(r12.u32 + -96, f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(r12.u32 + -88, f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(r12.u32 + -80, f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(r12.u32 + -72, f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_17"))) PPC_WEAK_FUNC(__savefpr_17);
PPC_FUNC_IMPL(__imp____savefpr_17) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
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
	// stfd f17,-120(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -120, f17.u64);
	// stfd f18,-112(r12)
	PPC_STORE_U64(r12.u32 + -112, f18.u64);
	// stfd f19,-104(r12)
	PPC_STORE_U64(r12.u32 + -104, f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(r12.u32 + -96, f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(r12.u32 + -88, f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(r12.u32 + -80, f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(r12.u32 + -72, f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_18"))) PPC_WEAK_FUNC(__savefpr_18);
PPC_FUNC_IMPL(__imp____savefpr_18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
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
	// stfd f18,-112(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -112, f18.u64);
	// stfd f19,-104(r12)
	PPC_STORE_U64(r12.u32 + -104, f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(r12.u32 + -96, f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(r12.u32 + -88, f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(r12.u32 + -80, f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(r12.u32 + -72, f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_19"))) PPC_WEAK_FUNC(__savefpr_19);
PPC_FUNC_IMPL(__imp____savefpr_19) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f19{};
	PPCRegister f20{};
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
	// stfd f19,-104(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -104, f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(r12.u32 + -96, f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(r12.u32 + -88, f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(r12.u32 + -80, f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(r12.u32 + -72, f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_20"))) PPC_WEAK_FUNC(__savefpr_20);
PPC_FUNC_IMPL(__imp____savefpr_20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f20{};
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
	// stfd f20,-96(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -96, f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(r12.u32 + -88, f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(r12.u32 + -80, f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(r12.u32 + -72, f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_21"))) PPC_WEAK_FUNC(__savefpr_21);
PPC_FUNC_IMPL(__imp____savefpr_21) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// stfd f21,-88(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -88, f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(r12.u32 + -80, f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(r12.u32 + -72, f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_22"))) PPC_WEAK_FUNC(__savefpr_22);
PPC_FUNC_IMPL(__imp____savefpr_22) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// stfd f22,-80(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -80, f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(r12.u32 + -72, f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_23"))) PPC_WEAK_FUNC(__savefpr_23);
PPC_FUNC_IMPL(__imp____savefpr_23) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f23,-72(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -72, f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_24"))) PPC_WEAK_FUNC(__savefpr_24);
PPC_FUNC_IMPL(__imp____savefpr_24) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f24,-64(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_25"))) PPC_WEAK_FUNC(__savefpr_25);
PPC_FUNC_IMPL(__imp____savefpr_25) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f25,-56(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_26"))) PPC_WEAK_FUNC(__savefpr_26);
PPC_FUNC_IMPL(__imp____savefpr_26) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f26,-48(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_27"))) PPC_WEAK_FUNC(__savefpr_27);
PPC_FUNC_IMPL(__imp____savefpr_27) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f27,-40(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_28"))) PPC_WEAK_FUNC(__savefpr_28);
PPC_FUNC_IMPL(__imp____savefpr_28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f28,-32(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_29"))) PPC_WEAK_FUNC(__savefpr_29);
PPC_FUNC_IMPL(__imp____savefpr_29) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f29,-24(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_30"))) PPC_WEAK_FUNC(__savefpr_30);
PPC_FUNC_IMPL(__imp____savefpr_30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f30,-16(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_31"))) PPC_WEAK_FUNC(__savefpr_31);
PPC_FUNC_IMPL(__imp____savefpr_31) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f31{};
	// stfd f31,-8(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_14"))) PPC_WEAK_FUNC(__restfpr_14);
PPC_FUNC_IMPL(__imp____restfpr_14) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f14{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
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
	// lfd f14,-144(r12)
	ctx.fpscr.disableFlushMode();
	f14.u64 = PPC_LOAD_U64(r12.u32 + -144);
	// lfd f15,-136(r12)
	f15.u64 = PPC_LOAD_U64(r12.u32 + -136);
	// lfd f16,-128(r12)
	f16.u64 = PPC_LOAD_U64(r12.u32 + -128);
	// lfd f17,-120(r12)
	f17.u64 = PPC_LOAD_U64(r12.u32 + -120);
	// lfd f18,-112(r12)
	f18.u64 = PPC_LOAD_U64(r12.u32 + -112);
	// lfd f19,-104(r12)
	f19.u64 = PPC_LOAD_U64(r12.u32 + -104);
	// lfd f20,-96(r12)
	f20.u64 = PPC_LOAD_U64(r12.u32 + -96);
	// lfd f21,-88(r12)
	f21.u64 = PPC_LOAD_U64(r12.u32 + -88);
	// lfd f22,-80(r12)
	f22.u64 = PPC_LOAD_U64(r12.u32 + -80);
	// lfd f23,-72(r12)
	f23.u64 = PPC_LOAD_U64(r12.u32 + -72);
	// lfd f24,-64(r12)
	f24.u64 = PPC_LOAD_U64(r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = PPC_LOAD_U64(r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_15"))) PPC_WEAK_FUNC(__restfpr_15);
PPC_FUNC_IMPL(__imp____restfpr_15) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
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
	// lfd f15,-136(r12)
	ctx.fpscr.disableFlushMode();
	f15.u64 = PPC_LOAD_U64(r12.u32 + -136);
	// lfd f16,-128(r12)
	f16.u64 = PPC_LOAD_U64(r12.u32 + -128);
	// lfd f17,-120(r12)
	f17.u64 = PPC_LOAD_U64(r12.u32 + -120);
	// lfd f18,-112(r12)
	f18.u64 = PPC_LOAD_U64(r12.u32 + -112);
	// lfd f19,-104(r12)
	f19.u64 = PPC_LOAD_U64(r12.u32 + -104);
	// lfd f20,-96(r12)
	f20.u64 = PPC_LOAD_U64(r12.u32 + -96);
	// lfd f21,-88(r12)
	f21.u64 = PPC_LOAD_U64(r12.u32 + -88);
	// lfd f22,-80(r12)
	f22.u64 = PPC_LOAD_U64(r12.u32 + -80);
	// lfd f23,-72(r12)
	f23.u64 = PPC_LOAD_U64(r12.u32 + -72);
	// lfd f24,-64(r12)
	f24.u64 = PPC_LOAD_U64(r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = PPC_LOAD_U64(r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_16"))) PPC_WEAK_FUNC(__restfpr_16);
PPC_FUNC_IMPL(__imp____restfpr_16) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
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
	// lfd f16,-128(r12)
	ctx.fpscr.disableFlushMode();
	f16.u64 = PPC_LOAD_U64(r12.u32 + -128);
	// lfd f17,-120(r12)
	f17.u64 = PPC_LOAD_U64(r12.u32 + -120);
	// lfd f18,-112(r12)
	f18.u64 = PPC_LOAD_U64(r12.u32 + -112);
	// lfd f19,-104(r12)
	f19.u64 = PPC_LOAD_U64(r12.u32 + -104);
	// lfd f20,-96(r12)
	f20.u64 = PPC_LOAD_U64(r12.u32 + -96);
	// lfd f21,-88(r12)
	f21.u64 = PPC_LOAD_U64(r12.u32 + -88);
	// lfd f22,-80(r12)
	f22.u64 = PPC_LOAD_U64(r12.u32 + -80);
	// lfd f23,-72(r12)
	f23.u64 = PPC_LOAD_U64(r12.u32 + -72);
	// lfd f24,-64(r12)
	f24.u64 = PPC_LOAD_U64(r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = PPC_LOAD_U64(r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_17"))) PPC_WEAK_FUNC(__restfpr_17);
PPC_FUNC_IMPL(__imp____restfpr_17) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
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
	// lfd f17,-120(r12)
	ctx.fpscr.disableFlushMode();
	f17.u64 = PPC_LOAD_U64(r12.u32 + -120);
	// lfd f18,-112(r12)
	f18.u64 = PPC_LOAD_U64(r12.u32 + -112);
	// lfd f19,-104(r12)
	f19.u64 = PPC_LOAD_U64(r12.u32 + -104);
	// lfd f20,-96(r12)
	f20.u64 = PPC_LOAD_U64(r12.u32 + -96);
	// lfd f21,-88(r12)
	f21.u64 = PPC_LOAD_U64(r12.u32 + -88);
	// lfd f22,-80(r12)
	f22.u64 = PPC_LOAD_U64(r12.u32 + -80);
	// lfd f23,-72(r12)
	f23.u64 = PPC_LOAD_U64(r12.u32 + -72);
	// lfd f24,-64(r12)
	f24.u64 = PPC_LOAD_U64(r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = PPC_LOAD_U64(r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_18"))) PPC_WEAK_FUNC(__restfpr_18);
PPC_FUNC_IMPL(__imp____restfpr_18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
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
	// lfd f18,-112(r12)
	ctx.fpscr.disableFlushMode();
	f18.u64 = PPC_LOAD_U64(r12.u32 + -112);
	// lfd f19,-104(r12)
	f19.u64 = PPC_LOAD_U64(r12.u32 + -104);
	// lfd f20,-96(r12)
	f20.u64 = PPC_LOAD_U64(r12.u32 + -96);
	// lfd f21,-88(r12)
	f21.u64 = PPC_LOAD_U64(r12.u32 + -88);
	// lfd f22,-80(r12)
	f22.u64 = PPC_LOAD_U64(r12.u32 + -80);
	// lfd f23,-72(r12)
	f23.u64 = PPC_LOAD_U64(r12.u32 + -72);
	// lfd f24,-64(r12)
	f24.u64 = PPC_LOAD_U64(r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = PPC_LOAD_U64(r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_19"))) PPC_WEAK_FUNC(__restfpr_19);
PPC_FUNC_IMPL(__imp____restfpr_19) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f19{};
	PPCRegister f20{};
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
	// lfd f19,-104(r12)
	ctx.fpscr.disableFlushMode();
	f19.u64 = PPC_LOAD_U64(r12.u32 + -104);
	// lfd f20,-96(r12)
	f20.u64 = PPC_LOAD_U64(r12.u32 + -96);
	// lfd f21,-88(r12)
	f21.u64 = PPC_LOAD_U64(r12.u32 + -88);
	// lfd f22,-80(r12)
	f22.u64 = PPC_LOAD_U64(r12.u32 + -80);
	// lfd f23,-72(r12)
	f23.u64 = PPC_LOAD_U64(r12.u32 + -72);
	// lfd f24,-64(r12)
	f24.u64 = PPC_LOAD_U64(r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = PPC_LOAD_U64(r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_20"))) PPC_WEAK_FUNC(__restfpr_20);
PPC_FUNC_IMPL(__imp____restfpr_20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f20{};
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
	// lfd f20,-96(r12)
	ctx.fpscr.disableFlushMode();
	f20.u64 = PPC_LOAD_U64(r12.u32 + -96);
	// lfd f21,-88(r12)
	f21.u64 = PPC_LOAD_U64(r12.u32 + -88);
	// lfd f22,-80(r12)
	f22.u64 = PPC_LOAD_U64(r12.u32 + -80);
	// lfd f23,-72(r12)
	f23.u64 = PPC_LOAD_U64(r12.u32 + -72);
	// lfd f24,-64(r12)
	f24.u64 = PPC_LOAD_U64(r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = PPC_LOAD_U64(r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_21"))) PPC_WEAK_FUNC(__restfpr_21);
PPC_FUNC_IMPL(__imp____restfpr_21) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// lfd f21,-88(r12)
	ctx.fpscr.disableFlushMode();
	f21.u64 = PPC_LOAD_U64(r12.u32 + -88);
	// lfd f22,-80(r12)
	f22.u64 = PPC_LOAD_U64(r12.u32 + -80);
	// lfd f23,-72(r12)
	f23.u64 = PPC_LOAD_U64(r12.u32 + -72);
	// lfd f24,-64(r12)
	f24.u64 = PPC_LOAD_U64(r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = PPC_LOAD_U64(r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_22"))) PPC_WEAK_FUNC(__restfpr_22);
PPC_FUNC_IMPL(__imp____restfpr_22) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
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
	// lfd f22,-80(r12)
	ctx.fpscr.disableFlushMode();
	f22.u64 = PPC_LOAD_U64(r12.u32 + -80);
	// lfd f23,-72(r12)
	f23.u64 = PPC_LOAD_U64(r12.u32 + -72);
	// lfd f24,-64(r12)
	f24.u64 = PPC_LOAD_U64(r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = PPC_LOAD_U64(r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_23"))) PPC_WEAK_FUNC(__restfpr_23);
PPC_FUNC_IMPL(__imp____restfpr_23) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f23,-72(r12)
	ctx.fpscr.disableFlushMode();
	f23.u64 = PPC_LOAD_U64(r12.u32 + -72);
	// lfd f24,-64(r12)
	f24.u64 = PPC_LOAD_U64(r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = PPC_LOAD_U64(r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_24"))) PPC_WEAK_FUNC(__restfpr_24);
PPC_FUNC_IMPL(__imp____restfpr_24) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f24,-64(r12)
	ctx.fpscr.disableFlushMode();
	f24.u64 = PPC_LOAD_U64(r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = PPC_LOAD_U64(r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_25"))) PPC_WEAK_FUNC(__restfpr_25);
PPC_FUNC_IMPL(__imp____restfpr_25) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f25,-56(r12)
	ctx.fpscr.disableFlushMode();
	f25.u64 = PPC_LOAD_U64(r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_26"))) PPC_WEAK_FUNC(__restfpr_26);
PPC_FUNC_IMPL(__imp____restfpr_26) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f26,-48(r12)
	ctx.fpscr.disableFlushMode();
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_27"))) PPC_WEAK_FUNC(__restfpr_27);
PPC_FUNC_IMPL(__imp____restfpr_27) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f27,-40(r12)
	ctx.fpscr.disableFlushMode();
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_28"))) PPC_WEAK_FUNC(__restfpr_28);
PPC_FUNC_IMPL(__imp____restfpr_28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f28,-32(r12)
	ctx.fpscr.disableFlushMode();
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_29"))) PPC_WEAK_FUNC(__restfpr_29);
PPC_FUNC_IMPL(__imp____restfpr_29) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f29,-24(r12)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_30"))) PPC_WEAK_FUNC(__restfpr_30);
PPC_FUNC_IMPL(__imp____restfpr_30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f30,-16(r12)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_31"))) PPC_WEAK_FUNC(__restfpr_31);
PPC_FUNC_IMPL(__imp____restfpr_31) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f31{};
	// lfd f31,-8(r12)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239D648"))) PPC_WEAK_FUNC(sub_8239D648);
PPC_FUNC_IMPL(__imp__sub_8239D648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r3,-97
	r11.s64 = ctx.r3.s64 + -97;
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(r11.u32, 25, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239D65C"))) PPC_WEAK_FUNC(sub_8239D65C);
PPC_FUNC_IMPL(__imp__sub_8239D65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239D660"))) PPC_WEAK_FUNC(sub_8239D660);
PPC_FUNC_IMPL(__imp__sub_8239D660) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x823abc70
	sub_823ABC70(ctx, base);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,15152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15152, r11.u32);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// stw r11,15148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15148, r11.u32);
	// bne 0x8239d698
	if (!cr0.eq) goto loc_8239D698;
	// li r3,24
	ctx.r3.s64 = 24;
	// b 0x8239d6a4
	goto loc_8239D6A4;
loc_8239D698:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8239D6A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239D6B4"))) PPC_WEAK_FUNC(sub_8239D6B4);
PPC_FUNC_IMPL(__imp__sub_8239D6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239D6B8"))) PPC_WEAK_FUNC(sub_8239D6B8);
PPC_FUNC_IMPL(__imp__sub_8239D6B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
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
	// lwz r19,19276(r14)
	r19.u64 = PPC_LOAD_U32(r14.u32 + 19276);
	// lwz r16,-14952(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14952);
	// mflr r12
	// bl 0x8239bce4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// bl 0x8239f0d0
	sub_8239F0D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r25,-32126
	r25.s64 = -2105409536;
	// lwz r28,15152(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + 15152);
	// lis r24,-32126
	r24.s64 = -2105409536;
	// lwz r30,15148(r24)
	r30.u64 = PPC_LOAD_U32(r24.u32 + 15148);
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// blt cr6,0x8239d784
	if (cr6.lt) goto loc_8239D784;
	// subf r26,r28,r30
	r26.s64 = r30.s64 - r28.s64;
	// addi r27,r26,4
	r27.s64 = r26.s64 + 4;
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(r27.u32, 4, xer);
	// blt cr6,0x8239d784
	if (cr6.lt) goto loc_8239D784;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823abb28
	sub_823ABB28(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// bge cr6,0x8239d770
	if (!cr6.lt) goto loc_8239D770;
	// cmplwi cr6,r29,2048
	cr6.compare<uint32_t>(r29.u32, 2048, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// blt cr6,0x8239d728
	if (cr6.lt) goto loc_8239D728;
	// li r11,2048
	r11.s64 = 2048;
loc_8239D728:
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// cmplw cr6,r4,r29
	cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, xer);
	// blt cr6,0x8239d744
	if (cr6.lt) goto loc_8239D744;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823a1098
	sub_823A1098(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8239d760
	if (!cr0.eq) goto loc_8239D760;
loc_8239D744:
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// cmplw cr6,r4,r29
	cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, xer);
	// blt cr6,0x8239d784
	if (cr6.lt) goto loc_8239D784;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823a1098
	sub_823A1098(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239d784
	if (cr0.eq) goto loc_8239D784;
loc_8239D760:
	// stw r3,15152(r25)
	PPC_STORE_U32(r25.u32 + 15152, ctx.r3.u32);
	// srawi r11,r26,2
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x3) != 0);
	r11.s64 = r26.s32 >> 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r3
	r30.u64 = r11.u64 + ctx.r3.u64;
loc_8239D770:
	// stw r23,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r23.u32);
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stw r11,15148(r24)
	PPC_STORE_U32(r24.u32 + 15148, r11.u32);
	// stw r23,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r23.u32);
	// b 0x8239d78c
	goto loc_8239D78C;
loc_8239D784:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8239D78C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	r12.s64 = r31.s64 + 176;
	// bl 0x8239d7a4
	sub_8239D7A4(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8239D6C0"))) PPC_WEAK_FUNC(sub_8239D6C0);
PPC_FUNC_IMPL(__imp__sub_8239D6C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// bl 0x8239f0d0
	sub_8239F0D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r25,-32126
	r25.s64 = -2105409536;
	// lwz r28,15152(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + 15152);
	// lis r24,-32126
	r24.s64 = -2105409536;
	// lwz r30,15148(r24)
	r30.u64 = PPC_LOAD_U32(r24.u32 + 15148);
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// blt cr6,0x8239d784
	if (cr6.lt) goto loc_8239D784;
	// subf r26,r28,r30
	r26.s64 = r30.s64 - r28.s64;
	// addi r27,r26,4
	r27.s64 = r26.s64 + 4;
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(r27.u32, 4, xer);
	// blt cr6,0x8239d784
	if (cr6.lt) goto loc_8239D784;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823abb28
	sub_823ABB28(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// bge cr6,0x8239d770
	if (!cr6.lt) goto loc_8239D770;
	// cmplwi cr6,r29,2048
	cr6.compare<uint32_t>(r29.u32, 2048, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// blt cr6,0x8239d728
	if (cr6.lt) goto loc_8239D728;
	// li r11,2048
	r11.s64 = 2048;
loc_8239D728:
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// cmplw cr6,r4,r29
	cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, xer);
	// blt cr6,0x8239d744
	if (cr6.lt) goto loc_8239D744;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823a1098
	sub_823A1098(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8239d760
	if (!cr0.eq) goto loc_8239D760;
loc_8239D744:
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// cmplw cr6,r4,r29
	cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, xer);
	// blt cr6,0x8239d784
	if (cr6.lt) goto loc_8239D784;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823a1098
	sub_823A1098(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239d784
	if (cr0.eq) goto loc_8239D784;
loc_8239D760:
	// stw r3,15152(r25)
	PPC_STORE_U32(r25.u32 + 15152, ctx.r3.u32);
	// srawi r11,r26,2
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x3) != 0);
	r11.s64 = r26.s32 >> 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r3
	r30.u64 = r11.u64 + ctx.r3.u64;
loc_8239D770:
	// stw r23,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r23.u32);
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stw r11,15148(r24)
	PPC_STORE_U32(r24.u32 + 15148, r11.u32);
	// stw r23,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r23.u32);
	// b 0x8239d78c
	goto loc_8239D78C;
loc_8239D784:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8239D78C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	r12.s64 = r31.s64 + 176;
	// bl 0x8239d7a4
	sub_8239D7A4(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8239D7A4"))) PPC_WEAK_FUNC(sub_8239D7A4);
PPC_FUNC_IMPL(__imp__sub_8239D7A4) {
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
	// bl 0x8239f0d8
	sub_8239F0D8(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239D7C4"))) PPC_WEAK_FUNC(sub_8239D7C4);
PPC_FUNC_IMPL(__imp__sub_8239D7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239D7C8"))) PPC_WEAK_FUNC(sub_8239D7C8);
PPC_FUNC_IMPL(__imp__sub_8239D7C8) {
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
	// bl 0x8239d6c0
	sub_8239D6C0(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// neg r3,r11
	ctx.r3.s64 = -r11.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239D7F4"))) PPC_WEAK_FUNC(sub_8239D7F4);
PPC_FUNC_IMPL(__imp__sub_8239D7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239D7F8"))) PPC_WEAK_FUNC(sub_8239D7F8);
PPC_FUNC_IMPL(__imp__sub_8239D7F8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239D7FC"))) PPC_WEAK_FUNC(sub_8239D7FC);
PPC_FUNC_IMPL(__imp__sub_8239D7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239D800"))) PPC_WEAK_FUNC(sub_8239D800);
PPC_FUNC_IMPL(__imp__sub_8239D800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r0{};
	// cmpw r3,r4
	cr0.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, xer);
	// beqlr- 
	if (cr0.eq) return;
	// bge+ 0x8239d810
	if (!cr0.lt) goto loc_8239D810;
	// b 0x8239ce50
	sub_8239CE50(ctx, base);
	return;
loc_8239D810:
	// addi r0,r5,1
	r0.s64 = ctx.r5.s64 + 1;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mtctr r0
	ctr.u64 = r0.u64;
	// b 0x8239d838
	goto loc_8239D838;
loc_8239D824:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lbz r0,-1(r4)
	r0.u64 = PPC_LOAD_U8(ctx.r4.u32 + -1);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stb r0,-1(r3)
	PPC_STORE_U8(ctx.r3.u32 + -1, r0.u8);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
loc_8239D838:
	// andi. r0,r3,3
	r0.u64 = ctx.r3.u64 & 3;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// bdnzf eq,0x8239d824
	--ctr.u64;
	if (ctr.u32 != 0 && !cr0.eq) goto loc_8239D824;
	// rlwinm. r0,r5,30,2,31
	r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// beq- 0x8239d868
	if (cr0.eq) goto loc_8239D868;
	// mtctr r0
	ctr.u64 = r0.u64;
	// andi. r0,r4,3
	r0.u64 = ctx.r4.u64 & 3;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// bne- 0x8239d88c
	if (!cr0.eq) goto loc_8239D88C;
loc_8239D854:
	// lwz r7,-4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r7,-4(r3)
	PPC_STORE_U32(ctx.r3.u32 + -4, ctx.r7.u32);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// bdnz+ 0x8239d854
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239D854;
loc_8239D868:
	// andi. r0,r5,3
	r0.u64 = ctx.r5.u64 & 3;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// mtctr r0
	ctr.u64 = r0.u64;
	// beqlr+ 
	if (cr0.eq) return;
loc_8239D874:
	// lbz r0,-1(r4)
	r0.u64 = PPC_LOAD_U8(ctx.r4.u32 + -1);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stb r0,-1(r3)
	PPC_STORE_U8(ctx.r3.u32 + -1, r0.u8);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// bdnz+ 0x8239d874
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239D874;
	// blr 
	return;
loc_8239D88C:
	// lbz r7,-1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + -1);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// lbz r8,-2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + -2);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,-3(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + -3);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// lbz r10,-4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + -4);
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// bdnz 0x8239d88c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239D88C;
	// b 0x8239d868
	goto loc_8239D868;
}

__attribute__((alias("__imp__sub_8239D8BC"))) PPC_WEAK_FUNC(sub_8239D8BC);
PPC_FUNC_IMPL(__imp__sub_8239D8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239D8C0"))) PPC_WEAK_FUNC(sub_8239D8C0);
PPC_FUNC_IMPL(__imp__sub_8239D8C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-31368(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// addi r11,r11,-31488
	r11.s64 = r11.s64 + -31488;
	// addi r10,r10,-24608
	ctx.r10.s64 = ctx.r10.s64 + -24608;
	// lfd f0,0(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// fmul f0,f1,f0
	f0.f64 = ctx.f1.f64 * f0.f64;
	// lfd f12,0(r10)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lfd f11,8(r10)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfd f9,80(r11)
	ctx.f9.u64 = PPC_LOAD_U64(r11.u32 + 80);
	// lfd f10,-31376(r10)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r10.u32 + -31376);
	// fctid f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// fnmsub f0,f12,f13,f1
	f0.f64 = -(ctx.f12.f64 * ctx.f13.f64 - ctx.f1.f64);
	// lfd f12,32(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 32);
	// fnmsub f13,f11,f13,f0
	ctx.f13.f64 = -(ctx.f11.f64 * ctx.f13.f64 - f0.f64);
	// fmul f0,f13,f13
	f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fnmsub f11,f0,f10,f12
	ctx.f11.f64 = -(f0.f64 * ctx.f10.f64 - ctx.f12.f64);
	// clrldi r10,r10,63
	ctx.r10.u64 = ctx.r10.u64 & 0x1;
	// cmpdi cr6,r10,0
	cr6.compare<int64_t>(ctx.r10.s64, 0, xer);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfd f12,-31384(r10)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + -31384);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// fmsub f10,f0,f9,f12
	ctx.f10.f64 = f0.f64 * ctx.f9.f64 - ctx.f12.f64;
	// lfd f12,-31392(r10)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + -31392);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// fmsub f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 - ctx.f12.f64;
	// lfd f12,64(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 64);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,48(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 48);
	// fmadd f9,f11,f0,f12
	ctx.f9.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// lfd f11,-31400(r10)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r10.u32 + -31400);
	// fmsub f11,f10,f0,f11
	ctx.f11.f64 = ctx.f10.f64 * f0.f64 - ctx.f11.f64;
	// fmul f13,f9,f13
	ctx.f13.f64 = ctx.f9.f64 * ctx.f13.f64;
	// fmadd f0,f11,f0,f12
	f0.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// beq cr6,0x8239d974
	if (cr6.eq) goto loc_8239D974;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fdiv f0,f0,f13
	f0.f64 = f0.f64 / ctx.f13.f64;
	// b 0x8239d978
	goto loc_8239D978;
loc_8239D974:
	// fdiv f0,f13,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f13.f64 / f0.f64;
loc_8239D978:
	// fabs f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfd f12,16(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// lfd f13,-22584(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -22584);
	// fsub f12,f11,f12
	ctx.f12.f64 = ctx.f11.f64 - ctx.f12.f64;
	// fsel f1,f12,f13,f0
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239D994"))) PPC_WEAK_FUNC(sub_8239D994);
PPC_FUNC_IMPL(__imp__sub_8239D994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239D998"))) PPC_WEAK_FUNC(sub_8239D998);
PPC_FUNC_IMPL(__imp__sub_8239D998) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239D99C"))) PPC_WEAK_FUNC(sub_8239D99C);
PPC_FUNC_IMPL(__imp__sub_8239D99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239D9A0"))) PPC_WEAK_FUNC(sub_8239D9A0);
PPC_FUNC_IMPL(__imp__sub_8239D9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	PPCRegister r0{};
	uint32_t ea{};
	// mr. r0,r5
	r0.u64 = ctx.r5.u64;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// ble 0x8239d9e4
	if (!cr0.gt) goto loc_8239D9E4;
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr1,r8,0
	cr1.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subfc. r3,r7,r8
	xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdnzf 4*cr1+eq,0x8239d9c8
	--ctr.u64;
	if (ctr.u32 != 0 && !cr1.eq) goto loc_8239D9C8;
	// blr 
	return;
loc_8239D9C8:
	// bnelr 
	if (!cr0.eq) return;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzu r7,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// cmpwi cr1,r8,0
	cr1.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subfc. r3,r7,r8
	xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdnzf 4*cr1+eq,0x8239d9c8
	--ctr.u64;
	if (ctr.u32 != 0 && !cr1.eq) goto loc_8239D9C8;
	// blr 
	return;
loc_8239D9E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239D9EC"))) PPC_WEAK_FUNC(sub_8239D9EC);
PPC_FUNC_IMPL(__imp__sub_8239D9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239D9F0"))) PPC_WEAK_FUNC(sub_8239D9F0);
PPC_FUNC_IMPL(__imp__sub_8239D9F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	uint32_t ea{};
	// lbz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8239da14
	if (cr0.eq) goto loc_8239DA14;
loc_8239D9FC:
	// cmpwi cr1,r6,0
	cr1.compare<int32_t>(ctx.r6.s32, 0, xer);
	// cmpw r6,r4
	cr0.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, xer);
	// beq cr1,0x8239da24
	if (cr1.eq) goto loc_8239DA24;
	// beq 0x8239da28
	if (cr0.eq) goto loc_8239DA28;
	// lbzu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// b 0x8239d9fc
	goto loc_8239D9FC;
loc_8239DA14:
	// cmpwi r6,0
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x8239da28
	if (cr0.eq) goto loc_8239DA28;
	// lbzu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// b 0x8239da14
	goto loc_8239DA14;
loc_8239DA24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239DA28:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239DA2C"))) PPC_WEAK_FUNC(sub_8239DA2C);
PPC_FUNC_IMPL(__imp__sub_8239DA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239DA30"))) PPC_WEAK_FUNC(sub_8239DA30);
PPC_FUNC_IMPL(__imp__sub_8239DA30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fabs f13,f1
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfd f12,-31352(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + -31352);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fsub f12,f12,f13
	ctx.f12.f64 = ctx.f12.f64 - ctx.f13.f64;
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfd f13,-31360(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -31360);
	// fsub f10,f1,f0
	ctx.f10.f64 = ctx.f1.f64 - f0.f64;
	// fsub f13,f0,f13
	ctx.f13.f64 = f0.f64 - ctx.f13.f64;
	// fsel f0,f10,f0,f13
	f0.f64 = ctx.f10.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// fsel f0,f12,f0,f1
	f0.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f1.f64;
	// fsel f1,f11,f1,f0
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f1.f64 : f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239DA6C"))) PPC_WEAK_FUNC(sub_8239DA6C);
PPC_FUNC_IMPL(__imp__sub_8239DA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239DA70"))) PPC_WEAK_FUNC(sub_8239DA70);
PPC_FUNC_IMPL(__imp__sub_8239DA70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// stfd f2,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f2.u64);
	// lhz r11,16(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,0,17,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r11,32752
	cr6.compare<uint32_t>(r11.u32, 32752, xer);
	// bne cr6,0x8239da94
	if (!cr6.eq) goto loc_8239DA94;
loc_8239DA88:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lfd f1,-22584(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -22584);
	// blr 
	return;
loc_8239DA94:
	// lhz r11,24(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 24);
	// rlwinm r11,r11,0,17,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r11,32752
	cr6.compare<uint32_t>(r11.u32, 32752, xer);
	// bne cr6,0x8239dad8
	if (!cr6.eq) goto loc_8239DAD8;
	// lwz r11,24(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// lis r10,32752
	ctx.r10.s64 = 2146435072;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// bne cr6,0x8239dac0
	if (!cr6.eq) goto loc_8239DAC0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8239DAC0:
	// lis r9,-16
	ctx.r9.s64 = -1048576;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8239da88
	if (!cr6.eq) goto loc_8239DA88;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x8239da88
	goto loc_8239DA88;
loc_8239DAD8:
	// ld r10,24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// ld r7,16(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 16);
	// clrldi r11,r10,1
	r11.u64 = ctx.r10.u64 & 0x7FFFFFFFFFFFFFFF;
	// clrldi r9,r7,1
	ctx.r9.u64 = ctx.r7.u64 & 0x7FFFFFFFFFFFFFFF;
	// cmpld cr6,r9,r11
	cr6.compare<uint64_t>(ctx.r9.u64, r11.u64, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// rldicr r4,r7,0,0
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u64, 0) & 0x8000000000000000;
	// rldicl r8,r10,12,53
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 12) & 0x7FF;
	// rldicl r10,r10,11,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 11) & 0x7FFFFFFFFFFFFFFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// rldicl r11,r7,12,53
	r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 12) & 0x7FF;
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// rldicr r10,r10,0,52
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFFFFFFF800;
	// rldicr r6,r9,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// cmpdi cr6,r8,0
	cr6.compare<int64_t>(ctx.r8.s64, 0, xer);
	// bne cr6,0x8239db34
	if (!cr6.eq) goto loc_8239DB34;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x8239da88
	if (cr6.eq) goto loc_8239DA88;
	// cntlzd r9,r10
	ctx.r9.u64 = ctx.r10.u64 == 0 ? 64 : __builtin_clzll(ctx.r10.u64);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// subfic r8,r9,1
	xer.ca = ctx.r9.u32 <= 1;
	ctx.r8.s64 = 1 - ctx.r9.s64;
	// sld r5,r10,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// b 0x8239db38
	goto loc_8239DB38;
loc_8239DB34:
	// or r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 | ctx.r6.u64;
loc_8239DB38:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// rldimi r10,r7,11,1
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r7.u64, 11) & 0x7FFFFFFFFFFFF800) | (ctx.r10.u64 & 0x80000000000007FF);
	// bne cr6,0x8239db64
	if (!cr6.eq) goto loc_8239DB64;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cntlzd r11,r10
	r11.u64 = ctx.r10.u64 == 0 ? 64 : __builtin_clzll(ctx.r10.u64);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// sld r10,r10,r11
	ctx.r10.u64 = r11.u8 & 0x40 ? 0 : (ctx.r10.u64 << (r11.u8 & 0x7F));
	// subfic r11,r11,1
	xer.ca = r11.u32 <= 1;
	r11.s64 = 1 - r11.s64;
	// b 0x8239db68
	goto loc_8239DB68;
loc_8239DB64:
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
loc_8239DB68:
	// rldicl r7,r5,63,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// b 0x8239db94
	goto loc_8239DB94;
loc_8239DB70:
	// cmpld cr6,r10,r5
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r5.u64, xer);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// bge cr6,0x8239db80
	if (!cr6.lt) goto loc_8239DB80;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_8239DB80:
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzd r9,r10
	ctx.r9.u64 = ctx.r10.u64 == 0 ? 64 : __builtin_clzll(ctx.r10.u64);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// sld r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
loc_8239DB94:
	// cmpd cr6,r11,r8
	cr6.compare<int64_t>(r11.s64, ctx.r8.s64, xer);
	// bgt cr6,0x8239db70
	if (cr6.gt) goto loc_8239DB70;
	// bne cr6,0x8239dbbc
	if (!cr6.eq) goto loc_8239DBBC;
	// cmpld cr6,r10,r5
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r5.u64, xer);
	// blt cr6,0x8239dbbc
	if (cr6.lt) goto loc_8239DBBC;
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// cntlzd r9,r10
	ctx.r9.u64 = ctx.r10.u64 == 0 ? 64 : __builtin_clzll(ctx.r10.u64);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// sld r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
loc_8239DBBC:
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x8239dbec
	if (cr6.eq) goto loc_8239DBEC;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// bgt cr6,0x8239dbd8
	if (cr6.gt) goto loc_8239DBD8;
	// subfic r9,r11,1
	xer.ca = r11.u32 <= 1;
	ctx.r9.s64 = 1 - r11.s64;
	// li r11,0
	r11.s64 = 0;
	// srd r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
loc_8239DBD8:
	// rldicr r11,r11,52,11
	r11.u64 = __builtin_rotateleft64(r11.u64, 52) & 0xFFF0000000000000;
	// rldicl r10,r10,53,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 53) & 0xFFFFFFFFFFFFF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
loc_8239DBEC:
	// lfd f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239DBF4"))) PPC_WEAK_FUNC(sub_8239DBF4);
PPC_FUNC_IMPL(__imp__sub_8239DBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239DBF8"))) PPC_WEAK_FUNC(sub_8239DBF8);
PPC_FUNC_IMPL(__imp__sub_8239DBF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r11,r11,-24592
	r11.s64 = r11.s64 + -24592;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8239dc34
	if (!cr6.gt) goto loc_8239DC34;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// subfic r10,r4,1
	xer.ca = ctx.r4.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r4.s64;
	// fsub f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 - ctx.f13.f64;
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmul f0,f13,f0
	f0.f64 = ctx.f13.f64 * f0.f64;
	// fsqrt f13,f0
	ctx.f13.f64 = sqrt(f0.f64);
	// fmul f13,f13,f11
	ctx.f13.f64 = ctx.f13.f64 * ctx.f11.f64;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x8239dc50
	goto loc_8239DC50;
loc_8239DC34:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// fmul f0,f13,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8239dc50
	if (!cr6.eq) goto loc_8239DC50;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f12
	cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// beqlr cr6
	if (cr6.eq) return;
loc_8239DC50:
	// lfd f11,120(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 120);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// fadd f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 + f0.f64;
	// lfd f12,80(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 80);
	// lfd f11,72(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 72);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// fmadd f11,f12,f0,f11
	ctx.f11.f64 = ctx.f12.f64 * f0.f64 + ctx.f11.f64;
	// lfd f12,112(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 112);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,64(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 64);
	// fmadd f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,104(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 104);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,56(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 56);
	// fmadd f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,96(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 96);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,48(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 48);
	// fmadd f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,88(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 88);
	// fmadd f12,f10,f0,f12
	ctx.f12.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// fmul f0,f11,f0
	f0.f64 = ctx.f11.f64 * f0.f64;
	// fmul f0,f0,f13
	f0.f64 = f0.f64 * ctx.f13.f64;
	// fdiv f0,f0,f12
	f0.f64 = f0.f64 / ctx.f12.f64;
	// fadd f0,f0,f13
	f0.f64 = f0.f64 + ctx.f13.f64;
	// bne cr6,0x8239dccc
	if (!cr6.eq) goto loc_8239DCCC;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lfdx f13,r10,r11
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + r11.u32);
	// fadd f0,f13,f0
	f0.f64 = ctx.f13.f64 + f0.f64;
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// b 0x8239dce4
	goto loc_8239DCE4;
loc_8239DCCC:
	// addi r9,r11,32
	ctx.r9.s64 = r11.s64 + 32;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lfdx f13,r10,r9
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// lfdx f12,r10,r11
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + r11.u32);
	// fadd f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 + f0.f64;
	// fsub f0,f12,f0
	f0.f64 = ctx.f12.f64 - f0.f64;
loc_8239DCE4:
	// fsel f1,f1,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239DCEC"))) PPC_WEAK_FUNC(sub_8239DCEC);
PPC_FUNC_IMPL(__imp__sub_8239DCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239DCF0"))) PPC_WEAK_FUNC(sub_8239DCF0);
PPC_FUNC_IMPL(__imp__sub_8239DCF0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r11,r11,-24592
	r11.s64 = r11.s64 + -24592;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8239dd2c
	if (!cr6.gt) goto loc_8239DD2C;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fsub f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 - ctx.f13.f64;
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmul f0,f13,f0
	f0.f64 = ctx.f13.f64 * f0.f64;
	// fsqrt f13,f0
	ctx.f13.f64 = sqrt(f0.f64);
	// fmul f13,f13,f11
	ctx.f13.f64 = ctx.f13.f64 * ctx.f11.f64;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x8239dd40
	goto loc_8239DD40;
loc_8239DD2C:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmul f0,f13,f13
	f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fcmpu cr6,f1,f12
	cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// beqlr cr6
	if (cr6.eq) return;
loc_8239DD40:
	// lfd f11,120(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 120);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// fadd f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 + f0.f64;
	// lfd f12,80(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 80);
	// lfd f11,72(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 72);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// fmadd f11,f12,f0,f11
	ctx.f11.f64 = ctx.f12.f64 * f0.f64 + ctx.f11.f64;
	// lfd f12,112(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 112);
	// lfdx f9,r10,r9
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,64(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 64);
	// fmadd f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,104(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 104);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,56(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 56);
	// fmadd f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,96(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 96);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,48(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 48);
	// fmadd f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,88(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 88);
	// fmadd f12,f10,f0,f12
	ctx.f12.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// fmul f0,f11,f0
	f0.f64 = ctx.f11.f64 * f0.f64;
	// fmul f0,f0,f13
	f0.f64 = f0.f64 * ctx.f13.f64;
	// fdiv f0,f0,f12
	f0.f64 = f0.f64 / ctx.f12.f64;
	// fadd f0,f0,f13
	f0.f64 = f0.f64 + ctx.f13.f64;
	// fadd f0,f0,f9
	f0.f64 = f0.f64 + ctx.f9.f64;
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// fsel f1,f1,f0,f13
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239DDB8"))) PPC_WEAK_FUNC(sub_8239DDB8);
PPC_FUNC_IMPL(__imp__sub_8239DDB8) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8239dbf8
	sub_8239DBF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239DDC0"))) PPC_WEAK_FUNC(sub_8239DDC0);
PPC_FUNC_IMPL(__imp__sub_8239DDC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32139
	r11.s64 = -2106261504;
	// fabs f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// stfd f12,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f12.u64);
	// addi r11,r11,-24464
	r11.s64 = r11.s64 + -24464;
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f9,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fsel f9,f1,f9,f0
	ctx.f9.f64 = ctx.f1.f64 >= 0.0 ? ctx.f9.f64 : f0.f64;
	// lfd f0,8(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// fmul f0,f0,f12
	f0.f64 = f0.f64 * ctx.f12.f64;
	// lfd f13,40(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 40);
	// lfd f11,48(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 48);
	// lfd f10,112(r11)
	ctx.f10.u64 = PPC_LOAD_U64(r11.u32 + 112);
	// fctid f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&f0.f64));
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fnmsub f13,f13,f0,f12
	ctx.f13.f64 = -(ctx.f13.f64 * f0.f64 - ctx.f12.f64);
	// fctidz f8,f0
	ctx.f8.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// fnmsub f13,f11,f0,f13
	ctx.f13.f64 = -(ctx.f11.f64 * f0.f64 - ctx.f13.f64);
	// lfd f11,104(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 104);
	// fmul f0,f13,f13
	f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fmadd f10,f10,f0,f11
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f11.f64;
	// lfd f11,96(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 96);
	// fmadd f10,f10,f0,f11
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f11.f64;
	// lfd f11,88(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 88);
	// fmadd f10,f10,f0,f11
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f11.f64;
	// lfd f11,80(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 80);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// clrldi r10,r10,63
	ctx.r10.u64 = ctx.r10.u64 & 0x1;
	// cmpdi cr6,r10,0
	cr6.compare<int64_t>(ctx.r10.s64, 0, xer);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// fmadd f10,f10,f0,f11
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f11.f64;
	// lfd f11,72(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 72);
	// fmadd f10,f10,f0,f11
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f11.f64;
	// lfd f11,64(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 64);
	// fmadd f10,f10,f0,f11
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f11.f64;
	// lfd f11,56(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 56);
	// fmadd f10,f10,f0,f11
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f11.f64;
	// lfd f11,-31360(r10)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r10.u32 + -31360);
	// fmadd f0,f10,f0,f11
	f0.f64 = ctx.f10.f64 * f0.f64 + ctx.f11.f64;
	// fmul f0,f0,f13
	f0.f64 = f0.f64 * ctx.f13.f64;
	// beq cr6,0x8239de68
	if (cr6.eq) goto loc_8239DE68;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
loc_8239DE68:
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// cmpdi cr6,r10,0
	cr6.compare<int64_t>(ctx.r10.s64, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lfd f13,16(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// fmul f11,f0,f9
	ctx.f11.f64 = f0.f64 * ctx.f9.f64;
	// fsub f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 - ctx.f13.f64;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// lfd f0,-22584(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -22584);
	// fsel f1,f13,f0,f11
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? f0.f64 : ctx.f11.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239DE90"))) PPC_WEAK_FUNC(sub_8239DE90);
PPC_FUNC_IMPL(__imp__sub_8239DE90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// fabs f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r11,r11,-24464
	r11.s64 = r11.s64 + -24464;
	// lfd f0,0(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfd f10,40(r11)
	ctx.f10.u64 = PPC_LOAD_U64(r11.u32 + 40);
	// fadd f11,f0,f12
	ctx.f11.f64 = f0.f64 + ctx.f12.f64;
	// lfd f0,8(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// lfd f9,48(r11)
	ctx.f9.u64 = PPC_LOAD_U64(r11.u32 + 48);
	// lfd f8,112(r11)
	ctx.f8.u64 = PPC_LOAD_U64(r11.u32 + 112);
	// fmul f0,f0,f11
	f0.f64 = f0.f64 * ctx.f11.f64;
	// fctid f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&f0.f64));
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fmr f7,f0
	ctx.f7.f64 = f0.f64;
	// fsub f0,f0,f13
	f0.f64 = f0.f64 - ctx.f13.f64;
	// fctidz f13,f7
	ctx.f13.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f7.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// fnmsub f13,f10,f0,f12
	ctx.f13.f64 = -(ctx.f10.f64 * f0.f64 - ctx.f12.f64);
	// lfd f10,104(r11)
	ctx.f10.u64 = PPC_LOAD_U64(r11.u32 + 104);
	// fnmsub f13,f9,f0,f13
	ctx.f13.f64 = -(ctx.f9.f64 * f0.f64 - ctx.f13.f64);
	// fmul f0,f13,f13
	f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fmadd f9,f8,f0,f10
	ctx.f9.f64 = ctx.f8.f64 * f0.f64 + ctx.f10.f64;
	// lfd f10,96(r11)
	ctx.f10.u64 = PPC_LOAD_U64(r11.u32 + 96);
	// fmadd f9,f9,f0,f10
	ctx.f9.f64 = ctx.f9.f64 * f0.f64 + ctx.f10.f64;
	// lfd f10,88(r11)
	ctx.f10.u64 = PPC_LOAD_U64(r11.u32 + 88);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fmadd f9,f9,f0,f10
	ctx.f9.f64 = ctx.f9.f64 * f0.f64 + ctx.f10.f64;
	// lfd f10,80(r11)
	ctx.f10.u64 = PPC_LOAD_U64(r11.u32 + 80);
	// clrldi r10,r10,63
	ctx.r10.u64 = ctx.r10.u64 & 0x1;
	// cmpdi cr6,r10,0
	cr6.compare<int64_t>(ctx.r10.s64, 0, xer);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// fmadd f9,f9,f0,f10
	ctx.f9.f64 = ctx.f9.f64 * f0.f64 + ctx.f10.f64;
	// lfd f10,72(r11)
	ctx.f10.u64 = PPC_LOAD_U64(r11.u32 + 72);
	// fmadd f9,f9,f0,f10
	ctx.f9.f64 = ctx.f9.f64 * f0.f64 + ctx.f10.f64;
	// lfd f10,64(r11)
	ctx.f10.u64 = PPC_LOAD_U64(r11.u32 + 64);
	// fmadd f9,f9,f0,f10
	ctx.f9.f64 = ctx.f9.f64 * f0.f64 + ctx.f10.f64;
	// lfd f10,56(r11)
	ctx.f10.u64 = PPC_LOAD_U64(r11.u32 + 56);
	// fmadd f9,f9,f0,f10
	ctx.f9.f64 = ctx.f9.f64 * f0.f64 + ctx.f10.f64;
	// lfd f10,-31360(r10)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r10.u32 + -31360);
	// fmadd f0,f9,f0,f10
	f0.f64 = ctx.f9.f64 * f0.f64 + ctx.f10.f64;
	// fmul f0,f0,f13
	f0.f64 = f0.f64 * ctx.f13.f64;
	// beq cr6,0x8239df3c
	if (cr6.eq) goto loc_8239DF3C;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
loc_8239DF3C:
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x8239df50
	if (!cr6.eq) goto loc_8239DF50;
	// lfs f1,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8239DF50:
	// lfd f12,16(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// fsub f12,f11,f12
	ctx.f12.f64 = ctx.f11.f64 - ctx.f12.f64;
	// lfd f13,-22584(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -22584);
	// fsel f1,f12,f13,f0
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239DF68"))) PPC_WEAK_FUNC(sub_8239DF68);
PPC_FUNC_IMPL(__imp__sub_8239DF68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// addi r11,r11,-24344
	r11.s64 = r11.s64 + -24344;
	// lfs f0,176(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 176);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8239dfa4
	if (!cr6.gt) goto loc_8239DFA4;
	// lfd f12,48(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 48);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x8239df98
	if (!cr6.gt) goto loc_8239DF98;
	// lfd f0,8(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// b 0x8239e034
	goto loc_8239E034;
loc_8239DF98:
	// li r10,2
	ctx.r10.s64 = 2;
	// fdiv f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f0.f64 / ctx.f13.f64;
	// b 0x8239dfa8
	goto loc_8239DFA8;
loc_8239DFA4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8239DFA8:
	// lfd f12,24(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x8239dfc8
	if (!cr6.gt) goto loc_8239DFC8;
	// lfd f12,40(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fadd f11,f12,f13
	ctx.f11.f64 = ctx.f12.f64 + ctx.f13.f64;
	// fmsub f0,f12,f13,f0
	f0.f64 = ctx.f12.f64 * ctx.f13.f64 - f0.f64;
	// fdiv f13,f0,f11
	ctx.f13.f64 = f0.f64 / ctx.f11.f64;
loc_8239DFC8:
	// fmul f0,f13,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// lfd f11,112(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 112);
	// lfd f12,80(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 80);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// fadd f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 + f0.f64;
	// lfd f11,72(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 72);
	// fmadd f11,f12,f0,f11
	ctx.f11.f64 = ctx.f12.f64 * f0.f64 + ctx.f11.f64;
	// lfd f12,104(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 104);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,64(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 64);
	// fmadd f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,96(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 96);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,56(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 56);
	// fmadd f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,88(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 88);
	// fmadd f12,f10,f0,f12
	ctx.f12.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// fmul f0,f11,f0
	f0.f64 = ctx.f11.f64 * f0.f64;
	// fmul f0,f0,f13
	f0.f64 = f0.f64 * ctx.f13.f64;
	// fdiv f0,f0,f12
	f0.f64 = f0.f64 / ctx.f12.f64;
	// fadd f0,f0,f13
	f0.f64 = f0.f64 + ctx.f13.f64;
	// ble cr6,0x8239e024
	if (!cr6.gt) goto loc_8239E024;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
loc_8239E024:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// lfdx f13,r10,r11
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + r11.u32);
	// fadd f0,f13,f0
	f0.f64 = ctx.f13.f64 + f0.f64;
loc_8239E034:
	// ld r11,-16(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// fsel f1,f1,f0,f13
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239E04C"))) PPC_WEAK_FUNC(sub_8239E04C);
PPC_FUNC_IMPL(__imp__sub_8239E04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239E050"))) PPC_WEAK_FUNC(sub_8239E050);
PPC_FUNC_IMPL(__imp__sub_8239E050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32139
	r11.s64 = -2106261504;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// stfd f2,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f2.u64);
	// addi r11,r11,-24344
	r11.s64 = r11.s64 + -24344;
	// lfs f0,168(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 168);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, f0.f64);
	// bne cr6,0x8239e0a8
	if (!cr6.eq) goto loc_8239E0A8;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bne cr6,0x8239e0a0
	if (!cr6.eq) goto loc_8239E0A0;
	// lwz r10,24(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r10,16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8239e098
	if (cr0.eq) goto loc_8239E098;
	// lfd f0,16(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_8239E098:
	// lfd f1,16(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// blr 
	return;
loc_8239E0A0:
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// b 0x8239e160
	goto loc_8239E160;
loc_8239E0A8:
	// fabs f12,f2
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// li r10,0
	ctx.r10.s64 = 0;
	// fabs f13,f1
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fmr f0,f12
	f0.f64 = ctx.f12.f64;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8239e0cc
	if (!cr6.gt) goto loc_8239E0CC;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r10,2
	ctx.r10.s64 = 2;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_8239E0CC:
	// fdiv f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 / f0.f64;
	// lfd f0,24(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8239e0f4
	if (!cr6.gt) goto loc_8239E0F4;
	// lfd f0,40(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f12,176(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// fadd f11,f0,f13
	ctx.f11.f64 = f0.f64 + ctx.f13.f64;
	// fmsub f0,f0,f13,f12
	f0.f64 = f0.f64 * ctx.f13.f64 - ctx.f12.f64;
	// fdiv f13,f0,f11
	ctx.f13.f64 = f0.f64 / ctx.f11.f64;
loc_8239E0F4:
	// fmul f0,f13,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// lfd f11,112(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 112);
	// lfd f12,80(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 80);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// fadd f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 + f0.f64;
	// lfd f11,72(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 72);
	// fmadd f11,f12,f0,f11
	ctx.f11.f64 = ctx.f12.f64 * f0.f64 + ctx.f11.f64;
	// lfd f12,104(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 104);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,64(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 64);
	// fmadd f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,96(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 96);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,56(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 56);
	// fmadd f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,88(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 88);
	// fmadd f12,f10,f0,f12
	ctx.f12.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// fmul f0,f11,f0
	f0.f64 = ctx.f11.f64 * f0.f64;
	// fmul f0,f0,f13
	f0.f64 = f0.f64 * ctx.f13.f64;
	// fdiv f0,f0,f12
	f0.f64 = f0.f64 / ctx.f12.f64;
	// fadd f0,f0,f13
	f0.f64 = f0.f64 + ctx.f13.f64;
	// ble cr6,0x8239e150
	if (!cr6.gt) goto loc_8239E150;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
loc_8239E150:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,128
	ctx.r9.s64 = r11.s64 + 128;
	// lfdx f13,r10,r9
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// fadd f0,f13,f0
	f0.f64 = ctx.f13.f64 + f0.f64;
loc_8239E160:
	// lfd f13,16(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// lwz r11,16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// fsub f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 - f0.f64;
	// fsel f1,f2,f0,f13
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239E180"))) PPC_WEAK_FUNC(sub_8239E180);
PPC_FUNC_IMPL(__imp__sub_8239E180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fabs f13,f1
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfd f12,-31352(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + -31352);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fsub f12,f12,f13
	ctx.f12.f64 = ctx.f12.f64 - ctx.f13.f64;
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfd f13,-31360(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -31360);
	// fsub f10,f0,f1
	ctx.f10.f64 = f0.f64 - ctx.f1.f64;
	// fadd f13,f0,f13
	ctx.f13.f64 = f0.f64 + ctx.f13.f64;
	// fsel f0,f10,f0,f13
	f0.f64 = ctx.f10.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// fsel f0,f12,f0,f1
	f0.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f1.f64;
	// fsel f1,f11,f1,f0
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f1.f64 : f0.f64;
	// blr 
	return;
}

