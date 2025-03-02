#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8230C840"))) PPC_WEAK_FUNC(sub_8230C840);
PPC_FUNC_IMPL(__imp__sub_8230C840) {
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
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8230c90c
	if (cr0.eq) goto loc_8230C90C;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8230c90c
	if (cr6.eq) goto loc_8230C90C;
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8230c90c
	if (cr0.eq) goto loc_8230C90C;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f1
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// twllei r11,0
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// divwu r7,r8,r11
	ctx.r7.u32 = ctx.r8.u32 / r11.u32;
	// mullw r11,r7,r11
	r11.s64 = int64_t(ctx.r7.s32) * int64_t(r11.s32);
	// subf r30,r11,r8
	r30.s64 = ctx.r8.s64 - r11.s64;
	// subf. r11,r9,r30
	r11.s64 = r30.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8230c90c
	if (cr0.eq) goto loc_8230C90C;
	// lbz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 36);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x8230c8ec
	if (cr0.eq) goto loc_8230C8EC;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x8230c8e0
	if (cr6.gt) goto loc_8230C8E0;
	// bl 0x8230bee8
	sub_8230BEE8(ctx, base);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// bl 0x8230c3d8
	sub_8230C3D8(ctx, base);
	// b 0x8230c900
	goto loc_8230C900;
loc_8230C8E0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8230c458
	sub_8230C458(ctx, base);
	// b 0x8230c900
	goto loc_8230C900;
loc_8230C8EC:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mullw r11,r11,r30
	r11.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
loc_8230C900:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// bl 0x8230c2f8
	sub_8230C2F8(ctx, base);
loc_8230C90C:
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

__attribute__((alias("__imp__sub_8230C924"))) PPC_WEAK_FUNC(sub_8230C924);
PPC_FUNC_IMPL(__imp__sub_8230C924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230C928"))) PPC_WEAK_FUNC(sub_8230C928);
PPC_FUNC_IMPL(__imp__sub_8230C928) {
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
	// lwz r16,5152(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5152);
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
	// beq cr6,0x8230c974
	if (cr6.eq) goto loc_8230C974;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r30,112
	ctx.r3.s64 = r30.s64 + 112;
	// addi r11,r11,5136
	r11.s64 = r11.s64 + 5136;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8230C974:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8220e940
	sub_8220E940(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,4948
	r11.s64 = r11.s64 + 4948;
	// addi r10,r10,4884
	ctx.r10.s64 = ctx.r10.s64 + 4884;
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
	// addi r10,r11,-108
	ctx.r10.s64 = r11.s64 + -108;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r29.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
	// stw r29,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r29.u32);
	// stw r29,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8230C930"))) PPC_WEAK_FUNC(sub_8230C930);
PPC_FUNC_IMPL(__imp__sub_8230C930) {
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
	// beq cr6,0x8230c974
	if (cr6.eq) goto loc_8230C974;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r30,112
	ctx.r3.s64 = r30.s64 + 112;
	// addi r11,r11,5136
	r11.s64 = r11.s64 + 5136;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8230C974:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8220e940
	sub_8220E940(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,4948
	r11.s64 = r11.s64 + 4948;
	// addi r10,r10,4884
	ctx.r10.s64 = ctx.r10.s64 + 4884;
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
	// addi r10,r11,-108
	ctx.r10.s64 = r11.s64 + -108;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r29.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
	// stw r29,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r29.u32);
	// stw r29,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8230C9DC"))) PPC_WEAK_FUNC(sub_8230C9DC);
PPC_FUNC_IMPL(__imp__sub_8230C9DC) {
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
	// beq 0x8230ca10
	if (cr0.eq) goto loc_8230CA10;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,112
	ctx.r3.s64 = r11.s64 + 112;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_8230CA10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230CA20"))) PPC_WEAK_FUNC(sub_8230CA20);
PPC_FUNC_IMPL(__imp__sub_8230CA20) {
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
	// addi r30,r3,-112
	r30.s64 = ctx.r3.s64 + -112;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,112
	r31.s64 = r30.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8230c500
	sub_8230C500(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8230ca58
	if (cr0.eq) goto loc_8230CA58;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_8230CA58:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8230CA64"))) PPC_WEAK_FUNC(sub_8230CA64);
PPC_FUNC_IMPL(__imp__sub_8230CA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230CA68"))) PPC_WEAK_FUNC(sub_8230CA68);
PPC_FUNC_IMPL(__imp__sub_8230CA68) {
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
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r9,r9,5396
	ctx.r9.s64 = ctx.r9.s64 + 5396;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r11,r11,5352
	r11.s64 = r11.s64 + 5352;
	// stw r9,-688(r3)
	PPC_STORE_U32(ctx.r3.u32 + -688, ctx.r9.u32);
	// addi r10,r10,5332
	ctx.r10.s64 = ctx.r10.s64 + 5332;
	// addi r8,r8,5292
	ctx.r8.s64 = ctx.r8.s64 + 5292;
	// lwz r9,-708(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + -708);
	// addi r7,r7,5276
	ctx.r7.s64 = ctx.r7.s64 + 5276;
	// addi r31,r3,-8
	r31.s64 = ctx.r3.s64 + -8;
	// stw r11,-712(r3)
	PPC_STORE_U32(ctx.r3.u32 + -712, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// stw r10,-696(r3)
	PPC_STORE_U32(ctx.r3.u32 + -696, ctx.r10.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r8,-508(r3)
	PPC_STORE_U32(ctx.r3.u32 + -508, ctx.r8.u32);
	// addi r11,r11,5212
	r11.s64 = r11.s64 + 5212;
	// stw r7,-12(r3)
	PPC_STORE_U32(ctx.r3.u32 + -12, ctx.r7.u32);
	// addi r10,r10,5204
	ctx.r10.s64 = ctx.r10.s64 + 5204;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stw r11,-708(r9)
	PPC_STORE_U32(ctx.r9.u32 + -708, r11.u32);
	// lwz r11,-708(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -708);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r10,-708(r11)
	PPC_STORE_U32(r11.u32 + -708, ctx.r10.u32);
	// lwz r11,-708(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -708);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-708
	ctx.r10.s64 = r11.s64 + -708;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r10,-712(r11)
	PPC_STORE_U32(r11.u32 + -712, ctx.r10.u32);
	// lwz r11,-708(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -708);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-752
	ctx.r10.s64 = r11.s64 + -752;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r10,-712(r11)
	PPC_STORE_U32(r11.u32 + -712, ctx.r10.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82214830
	sub_82214830(ctx, base);
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

__attribute__((alias("__imp__sub_8230CB3C"))) PPC_WEAK_FUNC(sub_8230CB3C);
PPC_FUNC_IMPL(__imp__sub_8230CB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230CB40"))) PPC_WEAK_FUNC(sub_8230CB40);
PPC_FUNC_IMPL(__imp__sub_8230CB40) {
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
	// bl 0x82301ed0
	sub_82301ED0(ctx, base);
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

__attribute__((alias("__imp__sub_8230CB70"))) PPC_WEAK_FUNC(sub_8230CB70);
PPC_FUNC_IMPL(__imp__sub_8230CB70) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,704(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 704);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8230ccf8
	if (cr6.eq) goto loc_8230CCF8;
	// lwz r11,240(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 240);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8230ccf8
	if (cr0.eq) goto loc_8230CCF8;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,-30144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30144);
	f0.f64 = double(temp.f32);
loc_8230CBA8:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,704(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 704);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f9,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,0(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f9,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,4(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f9,40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r9,704(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 704);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f13.u32);
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// fctidz f12,f11
	ctx.f12.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// fctidz f11,f10
	ctx.f11.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// stfiwx f13,0,r7
	PPC_STORE_U32(ctx.r7.u32, ctx.f13.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// rlwimi r8,r7,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// stfiwx f12,0,r6
	PPC_STORE_U32(ctx.r6.u32, ctx.f12.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// rlwimi r7,r8,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// stfiwx f11,0,r6
	PPC_STORE_U32(ctx.r6.u32, ctx.f11.u32);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwimi r8,r7,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// stw r8,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// lfs f13,96(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,704(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 704);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfs f13,16(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// lwz r9,704(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 704);
	// lfs f13,104(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// stfs f13,20(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// lwz r11,116(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8230cba8
	if (!cr0.eq) goto loc_8230CBA8;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x8230ccf8
	if (cr6.eq) goto loc_8230CCF8;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r31,r11,-6464
	r31.s64 = r11.s64 + -6464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,-5372(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -5372);
	// bl 0x823ca620
	sub_823CA620(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r6,24
	ctx.r6.s64 = 24;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x823c6fb8
	sub_823C6FB8(ctx, base);
	// mulli r5,r30,24
	ctx.r5.s64 = r30.s64 * 24;
	// lwz r4,704(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 704);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// bl 0x823c7458
	sub_823C7458(ctx, base);
	// lwz r11,384(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 384);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,384(r31)
	PPC_STORE_U32(r31.u32 + 384, r11.u32);
loc_8230CCF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8230CD00"))) PPC_WEAK_FUNC(sub_8230CD00);
PPC_FUNC_IMPL(__imp__sub_8230CD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x8230cb40
	sub_8230CB40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230CD0C"))) PPC_WEAK_FUNC(sub_8230CD0C);
PPC_FUNC_IMPL(__imp__sub_8230CD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230CD10"))) PPC_WEAK_FUNC(sub_8230CD10);
PPC_FUNC_IMPL(__imp__sub_8230CD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// addi r4,r4,-8
	ctx.r4.s64 = ctx.r4.s64 + -8;
	// b 0x822159d0
	sub_822159D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230CD20"))) PPC_WEAK_FUNC(sub_8230CD20);
PPC_FUNC_IMPL(__imp__sub_8230CD20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82214a98
	sub_82214A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230CD30"))) PPC_WEAK_FUNC(sub_8230CD30);
PPC_FUNC_IMPL(__imp__sub_8230CD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x822151d0
	sub_822151D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230CD40"))) PPC_WEAK_FUNC(sub_8230CD40);
PPC_FUNC_IMPL(__imp__sub_8230CD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8230d2d0
	sub_8230D2D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230CD4C"))) PPC_WEAK_FUNC(sub_8230CD4C);
PPC_FUNC_IMPL(__imp__sub_8230CD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230CD50"))) PPC_WEAK_FUNC(sub_8230CD50);
PPC_FUNC_IMPL(__imp__sub_8230CD50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82212760
	sub_82212760(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230CD60"))) PPC_WEAK_FUNC(sub_8230CD60);
PPC_FUNC_IMPL(__imp__sub_8230CD60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82216ad0
	sub_82216AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230CD70"))) PPC_WEAK_FUNC(sub_8230CD70);
PPC_FUNC_IMPL(__imp__sub_8230CD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82213b00
	sub_82213B00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230CD80"))) PPC_WEAK_FUNC(sub_8230CD80);
PPC_FUNC_IMPL(__imp__sub_8230CD80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x822153c0
	sub_822153C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230CD90"))) PPC_WEAK_FUNC(sub_8230CD90);
PPC_FUNC_IMPL(__imp__sub_8230CD90) {
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
	// lwz r16,5408(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5408);
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
	// lwz r11,-5364(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5364);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8230ce14
	if (!cr0.eq) goto loc_8230CE14;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5364(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5364, r11.u32);
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
	// bl 0x82301ed0
	sub_82301ED0(ctx, base);
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
	// stw r3,-5368(r27)
	PPC_STORE_U32(r27.u32 + -5368, ctx.r3.u32);
	// b 0x8230ce18
	goto loc_8230CE18;
loc_8230CE14:
	// lwz r3,-5368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -5368);
loc_8230CE18:
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
	// beq 0x8230ce54
	if (cr0.eq) goto loc_8230CE54;
	// lwz r11,-708(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -708);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-708
	ctx.r3.s64 = r11.s64 + -708;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8230ced0
	goto loc_8230CED0;
loc_8230CE54:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8230ceb4
	if (!cr0.eq) goto loc_8230CEB4;
	// addic. r11,r30,-712
	xer.ca = r30.u32 > 711;
	r11.s64 = r30.s64 + -712;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8230ce78
	if (!cr0.eq) goto loc_8230CE78;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8230ce88
	goto loc_8230CE88;
loc_8230CE78:
	// lwz r11,-708(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -708);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-708
	ctx.r3.s64 = r11.s64 + -708;
loc_8230CE88:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-708(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -708);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-708
	ctx.r4.s64 = r11.s64 + -708;
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
loc_8230CEB4:
	// lwz r11,-708(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -708);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-708
	ctx.r3.s64 = r11.s64 + -708;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8230CED0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8230CD98"))) PPC_WEAK_FUNC(sub_8230CD98);
PPC_FUNC_IMPL(__imp__sub_8230CD98) {
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
	// lwz r11,-5364(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5364);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8230ce14
	if (!cr0.eq) goto loc_8230CE14;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5364(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5364, r11.u32);
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
	// bl 0x82301ed0
	sub_82301ED0(ctx, base);
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
	// stw r3,-5368(r27)
	PPC_STORE_U32(r27.u32 + -5368, ctx.r3.u32);
	// b 0x8230ce18
	goto loc_8230CE18;
loc_8230CE14:
	// lwz r3,-5368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -5368);
loc_8230CE18:
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
	// beq 0x8230ce54
	if (cr0.eq) goto loc_8230CE54;
	// lwz r11,-708(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -708);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-708
	ctx.r3.s64 = r11.s64 + -708;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8230ced0
	goto loc_8230CED0;
loc_8230CE54:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8230ceb4
	if (!cr0.eq) goto loc_8230CEB4;
	// addic. r11,r30,-712
	xer.ca = r30.u32 > 711;
	r11.s64 = r30.s64 + -712;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8230ce78
	if (!cr0.eq) goto loc_8230CE78;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8230ce88
	goto loc_8230CE88;
loc_8230CE78:
	// lwz r11,-708(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -708);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-708
	ctx.r3.s64 = r11.s64 + -708;
loc_8230CE88:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-708(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -708);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-708
	ctx.r4.s64 = r11.s64 + -708;
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
loc_8230CEB4:
	// lwz r11,-708(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -708);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-708
	ctx.r3.s64 = r11.s64 + -708;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8230CED0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8230CEDC"))) PPC_WEAK_FUNC(sub_8230CEDC);
PPC_FUNC_IMPL(__imp__sub_8230CEDC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-5364
	r11.s64 = r11.s64 + -5364;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-5364
	ctx.r10.s64 = ctx.r10.s64 + -5364;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230CF04"))) PPC_WEAK_FUNC(sub_8230CF04);
PPC_FUNC_IMPL(__imp__sub_8230CF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230CF08"))) PPC_WEAK_FUNC(sub_8230CF08);
PPC_FUNC_IMPL(__imp__sub_8230CF08) {
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
	// lwz r16,5544(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5544);
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
	// beq cr6,0x8230cfac
	if (cr6.eq) goto loc_8230CFAC;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r11,r11,5512
	r11.s64 = r11.s64 + 5512;
	// addi r10,r10,5504
	ctx.r10.s64 = ctx.r10.s64 + 5504;
	// addi r9,r9,5492
	ctx.r9.s64 = ctx.r9.s64 + 5492;
	// addi r8,r8,5480
	ctx.r8.s64 = ctx.r8.s64 + 5480;
	// addi r7,r7,5472
	ctx.r7.s64 = ctx.r7.s64 + 5472;
	// addi r3,r30,712
	ctx.r3.s64 = r30.s64 + 712;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// stw r9,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r9.u32);
	// stw r8,208(r30)
	PPC_STORE_U32(r30.u32 + 208, ctx.r8.u32);
	// stw r7,760(r30)
	PPC_STORE_U32(r30.u32 + 760, ctx.r7.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,756
	r11.s64 = r30.s64 + 756;
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
loc_8230CFAC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82214c78
	sub_82214C78(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,3532
	r11.s64 = r11.s64 + 3532;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// stw r11,700(r30)
	PPC_STORE_U32(r30.u32 + 700, r11.u32);
	// addi r10,r10,5352
	ctx.r10.s64 = ctx.r10.s64 + 5352;
	// addi r9,r9,5332
	ctx.r9.s64 = ctx.r9.s64 + 5332;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r8,5396
	ctx.r8.s64 = ctx.r8.s64 + 5396;
	// addi r7,r7,5292
	ctx.r7.s64 = ctx.r7.s64 + 5292;
	// addi r6,r6,5276
	ctx.r6.s64 = ctx.r6.s64 + 5276;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r9,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r9.u32);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// stw r8,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r8.u32);
	// addi r5,r5,5212
	ctx.r5.s64 = ctx.r5.s64 + 5212;
	// stw r7,204(r30)
	PPC_STORE_U32(r30.u32 + 204, ctx.r7.u32);
	// addi r4,r4,5204
	ctx.r4.s64 = ctx.r4.s64 + 5204;
	// stw r6,700(r30)
	PPC_STORE_U32(r30.u32 + 700, ctx.r6.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-708
	ctx.r10.s64 = r11.s64 + -708;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-752
	ctx.r10.s64 = r11.s64 + -752;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r29,704(r30)
	PPC_STORE_U32(r30.u32 + 704, r29.u32);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,-5372(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -5372);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8230d080
	if (!cr6.eq) goto loc_8230D080;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-6464
	ctx.r3.s64 = r11.s64 + -6464;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,27508
	ctx.r3.s64 = r11.s64 + 27508;
	// bl 0x823ca638
	sub_823CA638(ctx, base);
	// stw r3,-5372(r29)
	PPC_STORE_U32(r29.u32 + -5372, ctx.r3.u32);
loc_8230D080:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8230CF10"))) PPC_WEAK_FUNC(sub_8230CF10);
PPC_FUNC_IMPL(__imp__sub_8230CF10) {
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
	// beq cr6,0x8230cfac
	if (cr6.eq) goto loc_8230CFAC;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r11,r11,5512
	r11.s64 = r11.s64 + 5512;
	// addi r10,r10,5504
	ctx.r10.s64 = ctx.r10.s64 + 5504;
	// addi r9,r9,5492
	ctx.r9.s64 = ctx.r9.s64 + 5492;
	// addi r8,r8,5480
	ctx.r8.s64 = ctx.r8.s64 + 5480;
	// addi r7,r7,5472
	ctx.r7.s64 = ctx.r7.s64 + 5472;
	// addi r3,r30,712
	ctx.r3.s64 = r30.s64 + 712;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// stw r9,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r9.u32);
	// stw r8,208(r30)
	PPC_STORE_U32(r30.u32 + 208, ctx.r8.u32);
	// stw r7,760(r30)
	PPC_STORE_U32(r30.u32 + 760, ctx.r7.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,756
	r11.s64 = r30.s64 + 756;
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
loc_8230CFAC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82214c78
	sub_82214C78(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,3532
	r11.s64 = r11.s64 + 3532;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// stw r11,700(r30)
	PPC_STORE_U32(r30.u32 + 700, r11.u32);
	// addi r10,r10,5352
	ctx.r10.s64 = ctx.r10.s64 + 5352;
	// addi r9,r9,5332
	ctx.r9.s64 = ctx.r9.s64 + 5332;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r8,5396
	ctx.r8.s64 = ctx.r8.s64 + 5396;
	// addi r7,r7,5292
	ctx.r7.s64 = ctx.r7.s64 + 5292;
	// addi r6,r6,5276
	ctx.r6.s64 = ctx.r6.s64 + 5276;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r9,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r9.u32);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// stw r8,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r8.u32);
	// addi r5,r5,5212
	ctx.r5.s64 = ctx.r5.s64 + 5212;
	// stw r7,204(r30)
	PPC_STORE_U32(r30.u32 + 204, ctx.r7.u32);
	// addi r4,r4,5204
	ctx.r4.s64 = ctx.r4.s64 + 5204;
	// stw r6,700(r30)
	PPC_STORE_U32(r30.u32 + 700, ctx.r6.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-708
	ctx.r10.s64 = r11.s64 + -708;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-752
	ctx.r10.s64 = r11.s64 + -752;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r29,704(r30)
	PPC_STORE_U32(r30.u32 + 704, r29.u32);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,-5372(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -5372);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8230d080
	if (!cr6.eq) goto loc_8230D080;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-6464
	ctx.r3.s64 = r11.s64 + -6464;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,27508
	ctx.r3.s64 = r11.s64 + 27508;
	// bl 0x823ca638
	sub_823CA638(ctx, base);
	// stw r3,-5372(r29)
	PPC_STORE_U32(r29.u32 + -5372, ctx.r3.u32);
loc_8230D080:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8230D08C"))) PPC_WEAK_FUNC(sub_8230D08C);
PPC_FUNC_IMPL(__imp__sub_8230D08C) {
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
	// beq 0x8230d0c0
	if (cr0.eq) goto loc_8230D0C0;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,712
	ctx.r3.s64 = r11.s64 + 712;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_8230D0C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230D0D0"))) PPC_WEAK_FUNC(sub_8230D0D0);
PPC_FUNC_IMPL(__imp__sub_8230D0D0) {
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
	// addi r3,r11,704
	ctx.r3.s64 = r11.s64 + 704;
	// bl 0x82214830
	sub_82214830(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230D0FC"))) PPC_WEAK_FUNC(sub_8230D0FC);
PPC_FUNC_IMPL(__imp__sub_8230D0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230D100"))) PPC_WEAK_FUNC(sub_8230D100);
PPC_FUNC_IMPL(__imp__sub_8230D100) {
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
	// bl 0x82213a20
	sub_82213A20(ctx, base);
	// lwz r3,704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 704);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,704(r31)
	PPC_STORE_U32(r31.u32 + 704, ctx.r10.u32);
	// beq 0x8230d160
	if (cr0.eq) goto loc_8230D160;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8230d160
	if (cr0.eq) goto loc_8230D160;
	// lis r10,2730
	ctx.r10.s64 = 178913280;
	// mulli r3,r11,24
	ctx.r3.s64 = r11.s64 * 24;
	// ori r10,r10,43690
	ctx.r10.u64 = ctx.r10.u64 | 43690;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8230d158
	if (!cr6.gt) goto loc_8230D158;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8230D158:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// stw r3,704(r31)
	PPC_STORE_U32(r31.u32 + 704, ctx.r3.u32);
loc_8230D160:
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

__attribute__((alias("__imp__sub_8230D174"))) PPC_WEAK_FUNC(sub_8230D174);
PPC_FUNC_IMPL(__imp__sub_8230D174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230D178"))) PPC_WEAK_FUNC(sub_8230D178);
PPC_FUNC_IMPL(__imp__sub_8230D178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82216888
	sub_82216888(ctx, base);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8230d2b4
	if (cr6.eq) goto loc_8230D2B4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r30,260
	r29.s64 = r30.s64 + 260;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f31,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x8226a840
	sub_8226A840(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// addi r28,r1,96
	r28.s64 = ctx.r1.s64 + 96;
	// lwz r3,11556(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 11556);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8216db48
	sub_8216DB48(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,-5540
	r31.s64 = r11.s64 + -5540;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x823060c8
	sub_823060C8(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,48
	ctx.r4.s64 = 48;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823060c8
	sub_823060C8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82306be8
	sub_82306BE8(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,252(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 252);
	// bl 0x82308098
	sub_82308098(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,-204
	ctx.r3.s64 = r30.s64 + -204;
	// bl 0x8230cb70
	sub_8230CB70(ctx, base);
loc_8230D2B4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8230D2C0"))) PPC_WEAK_FUNC(sub_8230D2C0);
PPC_FUNC_IMPL(__imp__sub_8230D2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8230cd98
	sub_8230CD98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230D2CC"))) PPC_WEAK_FUNC(sub_8230D2CC);
PPC_FUNC_IMPL(__imp__sub_8230D2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230D2D0"))) PPC_WEAK_FUNC(sub_8230D2D0);
PPC_FUNC_IMPL(__imp__sub_8230D2D0) {
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
	// addi r30,r3,-712
	r30.s64 = ctx.r3.s64 + -712;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,712
	r31.s64 = r30.s64 + 712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8230ca68
	sub_8230CA68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8230d308
	if (cr0.eq) goto loc_8230D308;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_8230D308:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8230D314"))) PPC_WEAK_FUNC(sub_8230D314);
PPC_FUNC_IMPL(__imp__sub_8230D314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230D318"))) PPC_WEAK_FUNC(sub_8230D318);
PPC_FUNC_IMPL(__imp__sub_8230D318) {
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
	// bl 0x82270c08
	sub_82270C08(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8230d340
	if (!cr6.eq) goto loc_8230D340;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8230d360
	goto loc_8230D360;
loc_8230D340:
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	// addi r3,r11,338
	ctx.r3.s64 = r11.s64 + 338;
loc_8230D360:
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

__attribute__((alias("__imp__sub_8230D374"))) PPC_WEAK_FUNC(sub_8230D374);
PPC_FUNC_IMPL(__imp__sub_8230D374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230D378"))) PPC_WEAK_FUNC(sub_8230D378);
PPC_FUNC_IMPL(__imp__sub_8230D378) {
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
	// bl 0x82270c08
	sub_82270C08(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8230d3c8
	if (!cr6.eq) goto loc_8230D3C8;
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8230d3bc
	if (cr0.eq) goto loc_8230D3BC;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-5356(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -5356);
	// b 0x8230d3cc
	goto loc_8230D3CC;
loc_8230D3BC:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-5360(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -5360);
	// b 0x8230d3cc
	goto loc_8230D3CC;
loc_8230D3C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230D3CC:
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

__attribute__((alias("__imp__sub_8230D3E0"))) PPC_WEAK_FUNC(sub_8230D3E0);
PPC_FUNC_IMPL(__imp__sub_8230D3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	f0.f64 = double(temp.f32);
	// lfs f13,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f0,-30144(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -30144);
	f0.f64 = double(temp.f32);
	// lfs f13,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f12,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f11,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lfs f10,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// fctidz f12,f11
	ctx.f12.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// lwz r11,-16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// rlwimi r10,r11,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// stfiwx f12,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f12.u32);
	// lwz r11,-16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// rlwimi r11,r10,8,0,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (r11.u64 & 0xFFFFFFFF000000FF);
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwimi r10,r11,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230D49C"))) PPC_WEAK_FUNC(sub_8230D49C);
PPC_FUNC_IMPL(__imp__sub_8230D49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230D4A0"))) PPC_WEAK_FUNC(sub_8230D4A0);
PPC_FUNC_IMPL(__imp__sub_8230D4A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,296(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8230d4bc
	if (cr6.eq) goto loc_8230D4BC;
	// lwz r11,304(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x8230d4c0
	if (!cr6.eq) goto loc_8230D4C0;
loc_8230D4BC:
	// li r11,0
	r11.s64 = 0;
loc_8230D4C0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8230d4d8
	if (!cr0.eq) goto loc_8230D4D8;
	// lwz r11,272(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x8230d4dc
	if (cr6.eq) goto loc_8230D4DC;
loc_8230D4D8:
	// li r11,1
	r11.s64 = 1;
loc_8230D4DC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230D4E4"))) PPC_WEAK_FUNC(sub_8230D4E4);
PPC_FUNC_IMPL(__imp__sub_8230D4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230D4E8"))) PPC_WEAK_FUNC(sub_8230D4E8);
PPC_FUNC_IMPL(__imp__sub_8230D4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r10,5620
	ctx.r10.s64 = ctx.r10.s64 + 5620;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x823c3e88
	sub_823C3E88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230D500"))) PPC_WEAK_FUNC(sub_8230D500);
PPC_FUNC_IMPL(__imp__sub_8230D500) {
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
	// addi r11,r11,5612
	r11.s64 = r11.s64 + 5612;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x823c3d80
	sub_823C3D80(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8230d540
	if (cr0.eq) goto loc_8230D540;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8230D540:
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

__attribute__((alias("__imp__sub_8230D55C"))) PPC_WEAK_FUNC(sub_8230D55C);
PPC_FUNC_IMPL(__imp__sub_8230D55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230D560"))) PPC_WEAK_FUNC(sub_8230D560);
PPC_FUNC_IMPL(__imp__sub_8230D560) {
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
	// addi r11,r11,5620
	r11.s64 = r11.s64 + 5620;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x823c3e88
	sub_823C3E88(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8230d5a0
	if (cr0.eq) goto loc_8230D5A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8230D5A0:
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

__attribute__((alias("__imp__sub_8230D5BC"))) PPC_WEAK_FUNC(sub_8230D5BC);
PPC_FUNC_IMPL(__imp__sub_8230D5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230D5C0"))) PPC_WEAK_FUNC(sub_8230D5C0);
PPC_FUNC_IMPL(__imp__sub_8230D5C0) {
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,5612
	r11.s64 = r11.s64 + 5612;
	// addi r30,r10,-6464
	r30.s64 = ctx.r10.s64 + -6464;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823c3e98
	sub_823C3E98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8230d64c
	if (cr0.eq) goto loc_8230D64C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823bfe20
	sub_823BFE20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823bfe20
	sub_823BFE20(ctx, base);
loc_8230D64C:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c3d30
	sub_823C3D30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8230D674"))) PPC_WEAK_FUNC(sub_8230D674);
PPC_FUNC_IMPL(__imp__sub_8230D674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230D678"))) PPC_WEAK_FUNC(sub_8230D678);
PPC_FUNC_IMPL(__imp__sub_8230D678) {
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,5620
	r11.s64 = r11.s64 + 5620;
	// addi r30,r10,-6464
	r30.s64 = ctx.r10.s64 + -6464;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823c3e98
	sub_823C3E98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8230d704
	if (cr0.eq) goto loc_8230D704;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823bfe20
	sub_823BFE20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823bfe20
	sub_823BFE20(ctx, base);
loc_8230D704:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c3e40
	sub_823C3E40(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8230D72C"))) PPC_WEAK_FUNC(sub_8230D72C);
PPC_FUNC_IMPL(__imp__sub_8230D72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230D730"))) PPC_WEAK_FUNC(sub_8230D730);
PPC_FUNC_IMPL(__imp__sub_8230D730) {
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
	// lwz r16,5816(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5816);
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x8230d7bc
	if (cr6.eq) goto loc_8230D7BC;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r11,r11,5784
	r11.s64 = r11.s64 + 5784;
	// addi r10,r10,5772
	ctx.r10.s64 = ctx.r10.s64 + 5772;
	// addi r9,r9,5764
	ctx.r9.s64 = ctx.r9.s64 + 5764;
	// addi r3,r30,316
	ctx.r3.s64 = r30.s64 + 316;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// stw r9,364(r30)
	PPC_STORE_U32(r30.u32 + 364, ctx.r9.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,360
	r11.s64 = r30.s64 + 360;
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
loc_8230D7BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c0048
	sub_821C0048(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,3532
	r11.s64 = r11.s64 + 3532;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r10,r10,5724
	ctx.r10.s64 = ctx.r10.s64 + 5724;
	// addi r9,r9,5716
	ctx.r9.s64 = ctx.r9.s64 + 5716;
	// stw r11,284(r30)
	PPC_STORE_U32(r30.u32 + 284, r11.u32);
	// addi r8,r8,5700
	ctx.r8.s64 = ctx.r8.s64 + 5700;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r7,r7,5636
	ctx.r7.s64 = ctx.r7.s64 + 5636;
	// stw r9,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r9.u32);
	// addi r6,r6,5628
	ctx.r6.s64 = ctx.r6.s64 + 5628;
	// stw r8,284(r30)
	PPC_STORE_U32(r30.u32 + 284, ctx.r8.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-312
	ctx.r10.s64 = r11.s64 + -312;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-356
	ctx.r10.s64 = r11.s64 + -356;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r29,288(r30)
	PPC_STORE_U32(r30.u32 + 288, r29.u32);
	// stw r29,292(r30)
	PPC_STORE_U32(r30.u32 + 292, r29.u32);
	// stw r29,296(r30)
	PPC_STORE_U32(r30.u32 + 296, r29.u32);
	// stw r29,300(r30)
	PPC_STORE_U32(r30.u32 + 300, r29.u32);
	// stw r29,304(r30)
	PPC_STORE_U32(r30.u32 + 304, r29.u32);
	// stw r29,308(r30)
	PPC_STORE_U32(r30.u32 + 308, r29.u32);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,-5360(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -5360);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r28,r11,27824
	r28.s64 = r11.s64 + 27824;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r27,r11,-6464
	r27.s64 = r11.s64 + -6464;
	// bne cr6,0x8230d894
	if (!cr6.eq) goto loc_8230D894;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// addi r3,r28,-232
	ctx.r3.s64 = r28.s64 + -232;
	// bl 0x823ca638
	sub_823CA638(ctx, base);
	// stw r3,-5360(r29)
	PPC_STORE_U32(r29.u32 + -5360, ctx.r3.u32);
loc_8230D894:
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,-5356(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -5356);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8230d8b8
	if (!cr6.eq) goto loc_8230D8B8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// addi r3,r28,-160
	ctx.r3.s64 = r28.s64 + -160;
	// bl 0x823ca638
	sub_823CA638(ctx, base);
	// stw r3,-5356(r29)
	PPC_STORE_U32(r29.u32 + -5356, ctx.r3.u32);
loc_8230D8B8:
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,-5352(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -5352);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8230d8dc
	if (!cr6.eq) goto loc_8230D8DC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// addi r3,r28,-72
	ctx.r3.s64 = r28.s64 + -72;
	// bl 0x823ca638
	sub_823CA638(ctx, base);
	// stw r3,-5352(r29)
	PPC_STORE_U32(r29.u32 + -5352, ctx.r3.u32);
loc_8230D8DC:
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,-5348(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -5348);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8230d900
	if (!cr6.eq) goto loc_8230D900;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823ca638
	sub_823CA638(ctx, base);
	// stw r3,-5348(r29)
	PPC_STORE_U32(r29.u32 + -5348, ctx.r3.u32);
loc_8230D900:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8230D738"))) PPC_WEAK_FUNC(sub_8230D738);
PPC_FUNC_IMPL(__imp__sub_8230D738) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x8230d7bc
	if (cr6.eq) goto loc_8230D7BC;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r11,r11,5784
	r11.s64 = r11.s64 + 5784;
	// addi r10,r10,5772
	ctx.r10.s64 = ctx.r10.s64 + 5772;
	// addi r9,r9,5764
	ctx.r9.s64 = ctx.r9.s64 + 5764;
	// addi r3,r30,316
	ctx.r3.s64 = r30.s64 + 316;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// stw r9,364(r30)
	PPC_STORE_U32(r30.u32 + 364, ctx.r9.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,360
	r11.s64 = r30.s64 + 360;
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
loc_8230D7BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c0048
	sub_821C0048(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,3532
	r11.s64 = r11.s64 + 3532;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r10,r10,5724
	ctx.r10.s64 = ctx.r10.s64 + 5724;
	// addi r9,r9,5716
	ctx.r9.s64 = ctx.r9.s64 + 5716;
	// stw r11,284(r30)
	PPC_STORE_U32(r30.u32 + 284, r11.u32);
	// addi r8,r8,5700
	ctx.r8.s64 = ctx.r8.s64 + 5700;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r7,r7,5636
	ctx.r7.s64 = ctx.r7.s64 + 5636;
	// stw r9,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r9.u32);
	// addi r6,r6,5628
	ctx.r6.s64 = ctx.r6.s64 + 5628;
	// stw r8,284(r30)
	PPC_STORE_U32(r30.u32 + 284, ctx.r8.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-312
	ctx.r10.s64 = r11.s64 + -312;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-356
	ctx.r10.s64 = r11.s64 + -356;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r29,288(r30)
	PPC_STORE_U32(r30.u32 + 288, r29.u32);
	// stw r29,292(r30)
	PPC_STORE_U32(r30.u32 + 292, r29.u32);
	// stw r29,296(r30)
	PPC_STORE_U32(r30.u32 + 296, r29.u32);
	// stw r29,300(r30)
	PPC_STORE_U32(r30.u32 + 300, r29.u32);
	// stw r29,304(r30)
	PPC_STORE_U32(r30.u32 + 304, r29.u32);
	// stw r29,308(r30)
	PPC_STORE_U32(r30.u32 + 308, r29.u32);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,-5360(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -5360);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r28,r11,27824
	r28.s64 = r11.s64 + 27824;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r27,r11,-6464
	r27.s64 = r11.s64 + -6464;
	// bne cr6,0x8230d894
	if (!cr6.eq) goto loc_8230D894;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// addi r3,r28,-232
	ctx.r3.s64 = r28.s64 + -232;
	// bl 0x823ca638
	sub_823CA638(ctx, base);
	// stw r3,-5360(r29)
	PPC_STORE_U32(r29.u32 + -5360, ctx.r3.u32);
loc_8230D894:
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,-5356(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -5356);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8230d8b8
	if (!cr6.eq) goto loc_8230D8B8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// addi r3,r28,-160
	ctx.r3.s64 = r28.s64 + -160;
	// bl 0x823ca638
	sub_823CA638(ctx, base);
	// stw r3,-5356(r29)
	PPC_STORE_U32(r29.u32 + -5356, ctx.r3.u32);
loc_8230D8B8:
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,-5352(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -5352);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8230d8dc
	if (!cr6.eq) goto loc_8230D8DC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// addi r3,r28,-72
	ctx.r3.s64 = r28.s64 + -72;
	// bl 0x823ca638
	sub_823CA638(ctx, base);
	// stw r3,-5352(r29)
	PPC_STORE_U32(r29.u32 + -5352, ctx.r3.u32);
loc_8230D8DC:
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,-5348(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -5348);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8230d900
	if (!cr6.eq) goto loc_8230D900;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823ca638
	sub_823CA638(ctx, base);
	// stw r3,-5348(r29)
	PPC_STORE_U32(r29.u32 + -5348, ctx.r3.u32);
loc_8230D900:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8230D90C"))) PPC_WEAK_FUNC(sub_8230D90C);
PPC_FUNC_IMPL(__imp__sub_8230D90C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8230d940
	if (cr0.eq) goto loc_8230D940;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,316
	ctx.r3.s64 = r11.s64 + 316;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_8230D940:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230D950"))) PPC_WEAK_FUNC(sub_8230D950);
PPC_FUNC_IMPL(__imp__sub_8230D950) {
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
	// addi r3,r11,288
	ctx.r3.s64 = r11.s64 + 288;
	// bl 0x821c0550
	sub_821C0550(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230D97C"))) PPC_WEAK_FUNC(sub_8230D97C);
PPC_FUNC_IMPL(__imp__sub_8230D97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230D980"))) PPC_WEAK_FUNC(sub_8230D980);
PPC_FUNC_IMPL(__imp__sub_8230D980) {
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
	// bl 0x82301ad8
	sub_82301AD8(ctx, base);
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

__attribute__((alias("__imp__sub_8230D9B0"))) PPC_WEAK_FUNC(sub_8230D9B0);
PPC_FUNC_IMPL(__imp__sub_8230D9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// addi r4,r4,-28
	ctx.r4.s64 = ctx.r4.s64 + -28;
	// b 0x821c3a38
	sub_821C3A38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230D9C0"))) PPC_WEAK_FUNC(sub_8230D9C0);
PPC_FUNC_IMPL(__imp__sub_8230D9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8230ed70
	sub_8230ED70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230D9CC"))) PPC_WEAK_FUNC(sub_8230D9CC);
PPC_FUNC_IMPL(__imp__sub_8230D9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230D9D0"))) PPC_WEAK_FUNC(sub_8230D9D0);
PPC_FUNC_IMPL(__imp__sub_8230D9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x821bf3b8
	sub_821BF3B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230D9E0"))) PPC_WEAK_FUNC(sub_8230D9E0);
PPC_FUNC_IMPL(__imp__sub_8230D9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x821bc288
	sub_821BC288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230D9F0"))) PPC_WEAK_FUNC(sub_8230D9F0);
PPC_FUNC_IMPL(__imp__sub_8230D9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x8230d980
	sub_8230D980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230D9FC"))) PPC_WEAK_FUNC(sub_8230D9FC);
PPC_FUNC_IMPL(__imp__sub_8230D9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230DA00"))) PPC_WEAK_FUNC(sub_8230DA00);
PPC_FUNC_IMPL(__imp__sub_8230DA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x821bda58
	sub_821BDA58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230DA10"))) PPC_WEAK_FUNC(sub_8230DA10);
PPC_FUNC_IMPL(__imp__sub_8230DA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x821c0350
	sub_821C0350(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230DA20"))) PPC_WEAK_FUNC(sub_8230DA20);
PPC_FUNC_IMPL(__imp__sub_8230DA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x821c2b60
	sub_821C2B60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230DA30"))) PPC_WEAK_FUNC(sub_8230DA30);
PPC_FUNC_IMPL(__imp__sub_8230DA30) {
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
	// lwz r16,5888(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5888);
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
	// lwz r11,-5340(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5340);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8230dab4
	if (!cr0.eq) goto loc_8230DAB4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5340(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5340, r11.u32);
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
	// bl 0x82301ad8
	sub_82301AD8(ctx, base);
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
	// stw r3,-5344(r27)
	PPC_STORE_U32(r27.u32 + -5344, ctx.r3.u32);
	// b 0x8230dab8
	goto loc_8230DAB8;
loc_8230DAB4:
	// lwz r3,-5344(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -5344);
loc_8230DAB8:
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
	// beq 0x8230daf4
	if (cr0.eq) goto loc_8230DAF4;
	// lwz r11,-312(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -312);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-312
	ctx.r3.s64 = r11.s64 + -312;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8230db70
	goto loc_8230DB70;
loc_8230DAF4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8230db54
	if (!cr0.eq) goto loc_8230DB54;
	// addic. r11,r30,-316
	xer.ca = r30.u32 > 315;
	r11.s64 = r30.s64 + -316;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8230db18
	if (!cr0.eq) goto loc_8230DB18;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8230db28
	goto loc_8230DB28;
loc_8230DB18:
	// lwz r11,-312(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -312);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-312
	ctx.r3.s64 = r11.s64 + -312;
loc_8230DB28:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-312(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -312);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-312
	ctx.r4.s64 = r11.s64 + -312;
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
loc_8230DB54:
	// lwz r11,-312(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -312);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-312
	ctx.r3.s64 = r11.s64 + -312;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8230DB70:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8230DA38"))) PPC_WEAK_FUNC(sub_8230DA38);
PPC_FUNC_IMPL(__imp__sub_8230DA38) {
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
	// lwz r11,-5340(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5340);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8230dab4
	if (!cr0.eq) goto loc_8230DAB4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5340(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5340, r11.u32);
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
	// bl 0x82301ad8
	sub_82301AD8(ctx, base);
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
	// stw r3,-5344(r27)
	PPC_STORE_U32(r27.u32 + -5344, ctx.r3.u32);
	// b 0x8230dab8
	goto loc_8230DAB8;
loc_8230DAB4:
	// lwz r3,-5344(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -5344);
loc_8230DAB8:
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
	// beq 0x8230daf4
	if (cr0.eq) goto loc_8230DAF4;
	// lwz r11,-312(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -312);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-312
	ctx.r3.s64 = r11.s64 + -312;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8230db70
	goto loc_8230DB70;
loc_8230DAF4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8230db54
	if (!cr0.eq) goto loc_8230DB54;
	// addic. r11,r30,-316
	xer.ca = r30.u32 > 315;
	r11.s64 = r30.s64 + -316;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8230db18
	if (!cr0.eq) goto loc_8230DB18;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8230db28
	goto loc_8230DB28;
loc_8230DB18:
	// lwz r11,-312(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -312);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-312
	ctx.r3.s64 = r11.s64 + -312;
loc_8230DB28:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-312(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -312);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-312
	ctx.r4.s64 = r11.s64 + -312;
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
loc_8230DB54:
	// lwz r11,-312(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -312);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-312
	ctx.r3.s64 = r11.s64 + -312;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8230DB70:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8230DB7C"))) PPC_WEAK_FUNC(sub_8230DB7C);
PPC_FUNC_IMPL(__imp__sub_8230DB7C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-5340
	r11.s64 = r11.s64 + -5340;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-5340
	ctx.r10.s64 = ctx.r10.s64 + -5340;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230DBA4"))) PPC_WEAK_FUNC(sub_8230DBA4);
PPC_FUNC_IMPL(__imp__sub_8230DBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230DBA8"))) PPC_WEAK_FUNC(sub_8230DBA8);
PPC_FUNC_IMPL(__imp__sub_8230DBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r10,5612
	ctx.r10.s64 = ctx.r10.s64 + 5612;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x823c3d80
	sub_823C3D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230DBC0"))) PPC_WEAK_FUNC(sub_8230DBC0);
PPC_FUNC_IMPL(__imp__sub_8230DBC0) {
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
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8230dc64
	if (!cr0.eq) goto loc_8230DC64;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-6464
	ctx.r3.s64 = r11.s64 + -6464;
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// mulli r30,r11,3
	r30.s64 = r11.s64 * 3;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823c3c68
	sub_823C3C68(ctx, base);
	// stw r3,308(r31)
	PPC_STORE_U32(r31.u32 + 308, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x823c3d30
	sub_823C3D30(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// bl 0x823c3e40
	sub_823C3E40(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8230dc50
	if (cr6.eq) goto loc_8230DC50;
loc_8230DC38:
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x8230dc38
	if (!cr0.eq) goto loc_8230DC38;
loc_8230DC50:
	// lwz r3,304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// bl 0x823c3e88
	sub_823C3E88(ctx, base);
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// bl 0x823c3d80
	sub_823C3D80(ctx, base);
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 308);
loc_8230DC64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8230DC6C"))) PPC_WEAK_FUNC(sub_8230DC6C);
PPC_FUNC_IMPL(__imp__sub_8230DC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230DC70"))) PPC_WEAK_FUNC(sub_8230DC70);
PPC_FUNC_IMPL(__imp__sub_8230DC70) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8230dcac
	if (!cr0.eq) goto loc_8230DCAC;
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-5540
	r11.s64 = r11.s64 + -5540;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x8230ddb0
	goto loc_8230DDB0;
loc_8230DCAC:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// bl 0x8226a630
	sub_8226A630(ctx, base);
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8230dd00
	if (cr0.eq) goto loc_8230DD00;
	// li r30,3
	r30.s64 = 3;
	// addi r29,r1,272
	r29.s64 = ctx.r1.s64 + 272;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r11,240
	ctx.r3.s64 = r11.s64 + 240;
	// bl 0x8226a630
	sub_8226A630(ctx, base);
loc_8230DD00:
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8230dd3c
	if (cr0.eq) goto loc_8230DD3C;
	// bne cr6,0x8230dd1c
	if (!cr6.eq) goto loc_8230DD1C;
	// li r30,2
	r30.s64 = 2;
loc_8230DD1C:
	// addi r29,r1,208
	r29.s64 = ctx.r1.s64 + 208;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r11,176
	ctx.r3.s64 = r11.s64 + 176;
	// bl 0x8226a630
	sub_8226A630(ctx, base);
	// b 0x8230dd50
	goto loc_8230DD50;
loc_8230DD3C:
	// beq cr6,0x8230dd50
	if (cr6.eq) goto loc_8230DD50;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_8230DD50:
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8230dd8c
	if (cr0.eq) goto loc_8230DD8C;
	// bne cr6,0x8230dd6c
	if (!cr6.eq) goto loc_8230DD6C;
	// li r30,1
	r30.s64 = 1;
loc_8230DD6C:
	// addi r29,r1,144
	r29.s64 = ctx.r1.s64 + 144;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r11,112
	ctx.r3.s64 = r11.s64 + 112;
	// bl 0x8226a630
	sub_8226A630(ctx, base);
	// b 0x8230dda0
	goto loc_8230DDA0;
loc_8230DD8C:
	// beq cr6,0x8230dda0
	if (cr6.eq) goto loc_8230DDA0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_8230DDA0:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r5,r30,1
	ctx.r5.s64 = r30.s64 + 1;
	// addi r3,r11,-5540
	ctx.r3.s64 = r11.s64 + -5540;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_8230DDB0:
	// bl 0x82306be8
	sub_82306BE8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8230DDBC"))) PPC_WEAK_FUNC(sub_8230DDBC);
PPC_FUNC_IMPL(__imp__sub_8230DDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230DDC0"))) PPC_WEAK_FUNC(sub_8230DDC0);
PPC_FUNC_IMPL(__imp__sub_8230DDC0) {
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
	// addi r11,r11,5612
	r11.s64 = r11.s64 + 5612;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x823c3d80
	sub_823C3D80(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8230de00
	if (cr0.eq) goto loc_8230DE00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8230DE00:
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

__attribute__((alias("__imp__sub_8230DE1C"))) PPC_WEAK_FUNC(sub_8230DE1C);
PPC_FUNC_IMPL(__imp__sub_8230DE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230DE20"))) PPC_WEAK_FUNC(sub_8230DE20);
PPC_FUNC_IMPL(__imp__sub_8230DE20) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,5968(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5968);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x8230d5c0
	sub_8230D5C0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8230d5c0
	sub_8230D5C0(ctx, base);
	// mullw r5,r29,r28
	ctx.r5.s64 = int64_t(r29.s32) * int64_t(r28.s32);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x823c3d80
	sub_823C3D80(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x823c3d80
	sub_823C3D80(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8230DE28"))) PPC_WEAK_FUNC(sub_8230DE28);
PPC_FUNC_IMPL(__imp__sub_8230DE28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x8230d5c0
	sub_8230D5C0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8230d5c0
	sub_8230D5C0(ctx, base);
	// mullw r5,r29,r28
	ctx.r5.s64 = int64_t(r29.s32) * int64_t(r28.s32);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x823c3d80
	sub_823C3D80(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x823c3d80
	sub_823C3D80(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8230DE8C"))) PPC_WEAK_FUNC(sub_8230DE8C);
PPC_FUNC_IMPL(__imp__sub_8230DE8C) {
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
	// bl 0x8230dba8
	sub_8230DBA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230DEB4"))) PPC_WEAK_FUNC(sub_8230DEB4);
PPC_FUNC_IMPL(__imp__sub_8230DEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230DEB8"))) PPC_WEAK_FUNC(sub_8230DEB8);
PPC_FUNC_IMPL(__imp__sub_8230DEB8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,6024(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6024);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x8230d678
	sub_8230D678(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8230d678
	sub_8230D678(ctx, base);
	// mullw r5,r29,r28
	ctx.r5.s64 = int64_t(r29.s32) * int64_t(r28.s32);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x823c3e88
	sub_823C3E88(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x823c3e88
	sub_823C3E88(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8230DEC0"))) PPC_WEAK_FUNC(sub_8230DEC0);
PPC_FUNC_IMPL(__imp__sub_8230DEC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x8230d678
	sub_8230D678(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8230d678
	sub_8230D678(ctx, base);
	// mullw r5,r29,r28
	ctx.r5.s64 = int64_t(r29.s32) * int64_t(r28.s32);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x823c3e88
	sub_823C3E88(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x823c3e88
	sub_823C3E88(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8230DF24"))) PPC_WEAK_FUNC(sub_8230DF24);
PPC_FUNC_IMPL(__imp__sub_8230DF24) {
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
	// bl 0x8230d4e8
	sub_8230D4E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230DF4C"))) PPC_WEAK_FUNC(sub_8230DF4C);
PPC_FUNC_IMPL(__imp__sub_8230DF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230DF50"))) PPC_WEAK_FUNC(sub_8230DF50);
PPC_FUNC_IMPL(__imp__sub_8230DF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8230da38
	sub_8230DA38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230DF5C"))) PPC_WEAK_FUNC(sub_8230DF5C);
PPC_FUNC_IMPL(__imp__sub_8230DF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230DF60"))) PPC_WEAK_FUNC(sub_8230DF60);
PPC_FUNC_IMPL(__imp__sub_8230DF60) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 268);
	// lwz r4,296(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 296);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8230e034
	if (cr0.eq) goto loc_8230E034;
	// bl 0x8230d5c0
	sub_8230D5C0(ctx, base);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x8230e05c
	if (cr6.eq) goto loc_8230E05C;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
loc_8230DFBC:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-32(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + -32, temp.u32);
	// stfs f0,-24(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -24, temp.u32);
	// stfs f13,-28(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + -28, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	f0.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f13,-4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	f0.f64 = double(temp.f32);
	// lfs f13,44(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,12(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	f0.f64 = double(temp.f32);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// stfs f12,-20(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + -20, temp.u32);
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// stfs f0,-12(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -12, temp.u32);
	// stfs f13,-16(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + -16, temp.u32);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, xer);
	// bne cr6,0x8230dfbc
	if (!cr6.eq) goto loc_8230DFBC;
	// b 0x8230e05c
	goto loc_8230E05C;
loc_8230E034:
	// bl 0x8230d5c0
	sub_8230D5C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x8230e05c
	if (cr6.eq) goto loc_8230E05C;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_8230E048:
	// bl 0x8230d3e0
	sub_8230D3E0(ctx, base);
	// addi r4,r4,64
	ctx.r4.s64 = ctx.r4.s64 + 64;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// cmplw cr6,r4,r30
	cr6.compare<uint32_t>(ctx.r4.u32, r30.u32, xer);
	// bne cr6,0x8230e048
	if (!cr6.eq) goto loc_8230E048;
loc_8230E05C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x823c3d80
	sub_823C3D80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_8230E07C"))) PPC_WEAK_FUNC(sub_8230E07C);
PPC_FUNC_IMPL(__imp__sub_8230E07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230E080"))) PPC_WEAK_FUNC(sub_8230E080);
PPC_FUNC_IMPL(__imp__sub_8230E080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,-6464
	r29.s64 = r11.s64 + -6464;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// lwz r11,272(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8230e1c0
	if (cr6.eq) goto loc_8230E1C0;
	// lwz r11,264(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// li r28,6
	r28.s64 = 6;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// lwz r9,224(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r10,r10,r28
	ctx.r10.s32 = ctx.r10.s32 / r28.s32;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8230e26c
	if (cr0.eq) goto loc_8230E26C;
	// lwz r11,220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8230e26c
	if (cr6.eq) goto loc_8230E26C;
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8230e0fc
	if (cr0.eq) goto loc_8230E0FC;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,-5348(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -5348);
	// b 0x8230e104
	goto loc_8230E104;
loc_8230E0FC:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,-5352(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -5352);
loc_8230E104:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ca620
	sub_823CA620(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lwz r11,264(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r7,228(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// lwz r6,220(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// lwz r11,224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// subf r11,r11,r7
	r11.s64 = ctx.r7.s64 - r11.s64;
	// divw r11,r11,r28
	r11.s32 = r11.s32 / r28.s32;
	// mulli r7,r11,3
	ctx.r7.s64 = r11.s64 * 3;
	// bl 0x823c74d8
	sub_823C74D8(ctx, base);
	// lwz r11,264(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,224(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r11,r11,r28
	r11.s32 = r11.s32 / r28.s32;
	// mulli r5,r11,6
	ctx.r5.s64 = r11.s64 * 6;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,264(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// rlwinm r5,r10,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823c7458
	sub_823C7458(ctx, base);
	// lwz r11,264(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// lwz r11,224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r11,r28
	ctx.r10.s32 = r11.s32 / r28.s32;
	// lwz r11,384(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 384);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,384(r29)
	PPC_STORE_U32(r29.u32 + 384, r11.u32);
	// b 0x8230e26c
	goto loc_8230E26C;
loc_8230E1C0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,304(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// bl 0x823bffc8
	sub_823BFFC8(ctx, base);
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,296(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// li r4,0
	ctx.r4.s64 = 0;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// addi r7,r11,36
	ctx.r7.s64 = r11.s64 + 36;
	// bl 0x823bfe20
	sub_823BFE20(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r5,300(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823bfe20
	sub_823BFE20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8230d378
	sub_8230D378(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ca620
	sub_823CA620(ctx, base);
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mulli r7,r11,3
	ctx.r7.s64 = r11.s64 * 3;
	// bl 0x823c7df0
	sub_823C7DF0(ctx, base);
	// lwz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// lwz r11,384(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 384);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,384(r29)
	PPC_STORE_U32(r29.u32 + 384, r11.u32);
	// bl 0x823bffc8
	sub_823BFFC8(ctx, base);
loc_8230E26C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8230E274"))) PPC_WEAK_FUNC(sub_8230E274);
PPC_FUNC_IMPL(__imp__sub_8230E274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230E278"))) PPC_WEAK_FUNC(sub_8230E278);
PPC_FUNC_IMPL(__imp__sub_8230E278) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-6464
	r11.s64 = r11.s64 + -6464;
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 396);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,396(r11)
	PPC_STORE_U32(r11.u32 + 396, ctx.r10.u32);
	// lwz r30,264(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8230d4a0
	sub_8230D4A0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8230e2f0
	if (cr0.eq) goto loc_8230E2F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8230dc70
	sub_8230DC70(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r31,244(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// addi r29,r11,-5540
	r29.s64 = r11.s64 + -5540;
loc_8230E2C4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82308098
	sub_82308098(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8230e080
	sub_8230E080(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8230e2f0
	if (cr6.eq) goto loc_8230E2F0;
	// lwz r31,172(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x8230e2c4
	if (!cr0.eq) goto loc_8230E2C4;
loc_8230E2F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8230E2F8"))) PPC_WEAK_FUNC(sub_8230E2F8);
PPC_FUNC_IMPL(__imp__sub_8230E2F8) {
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
	// lwz r16,6080(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6080);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,5724
	r11.s64 = r11.s64 + 5724;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r10,r10,5716
	ctx.r10.s64 = ctx.r10.s64 + 5716;
	// addi r9,r9,5700
	ctx.r9.s64 = ctx.r9.s64 + 5700;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,-316(r30)
	PPC_STORE_U32(r30.u32 + -316, r11.u32);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lwz r11,-312(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -312);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r8,r8,5636
	ctx.r8.s64 = ctx.r8.s64 + 5636;
	// stw r10,-280(r30)
	PPC_STORE_U32(r30.u32 + -280, ctx.r10.u32);
	// addi r7,r7,5628
	ctx.r7.s64 = ctx.r7.s64 + 5628;
	// stw r9,-32(r30)
	PPC_STORE_U32(r30.u32 + -32, ctx.r9.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,-312(r11)
	PPC_STORE_U32(r11.u32 + -312, ctx.r8.u32);
	// lwz r11,-312(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -312);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r7,-312(r11)
	PPC_STORE_U32(r11.u32 + -312, ctx.r7.u32);
	// lwz r11,-312(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -312);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-312
	ctx.r10.s64 = r11.s64 + -312;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-316(r11)
	PPC_STORE_U32(r11.u32 + -316, ctx.r10.u32);
	// lwz r11,-312(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -312);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-356
	ctx.r10.s64 = r11.s64 + -356;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-316(r11)
	PPC_STORE_U32(r11.u32 + -316, ctx.r10.u32);
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r29,r11,-6464
	r29.s64 = r11.s64 + -6464;
	// beq 0x8230e3b8
	if (cr0.eq) goto loc_8230E3B8;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r29,480
	ctx.r3.s64 = r29.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230E3B8:
	// lwz r11,-16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -16);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r28,-20(r30)
	PPC_STORE_U32(r30.u32 + -20, r28.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq 0x8230e3dc
	if (cr0.eq) goto loc_8230E3DC;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r29,480
	ctx.r3.s64 = r29.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230E3DC:
	// lwz r11,-12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -12);
	// stw r28,-16(r30)
	PPC_STORE_U32(r30.u32 + -16, r28.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq 0x8230e3fc
	if (cr0.eq) goto loc_8230E3FC;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r29,480
	ctx.r3.s64 = r29.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230E3FC:
	// lwz r11,-8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// stw r28,-12(r30)
	PPC_STORE_U32(r30.u32 + -12, r28.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq 0x8230e41c
	if (cr0.eq) goto loc_8230E41C;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r29,480
	ctx.r3.s64 = r29.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230E41C:
	// stw r28,-8(r30)
	PPC_STORE_U32(r30.u32 + -8, r28.u32);
	// addi r3,r30,-28
	ctx.r3.s64 = r30.s64 + -28;
	// bl 0x821c0550
	sub_821C0550(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8230E300"))) PPC_WEAK_FUNC(sub_8230E300);
PPC_FUNC_IMPL(__imp__sub_8230E300) {
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,5724
	r11.s64 = r11.s64 + 5724;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r10,r10,5716
	ctx.r10.s64 = ctx.r10.s64 + 5716;
	// addi r9,r9,5700
	ctx.r9.s64 = ctx.r9.s64 + 5700;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,-316(r30)
	PPC_STORE_U32(r30.u32 + -316, r11.u32);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lwz r11,-312(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -312);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r8,r8,5636
	ctx.r8.s64 = ctx.r8.s64 + 5636;
	// stw r10,-280(r30)
	PPC_STORE_U32(r30.u32 + -280, ctx.r10.u32);
	// addi r7,r7,5628
	ctx.r7.s64 = ctx.r7.s64 + 5628;
	// stw r9,-32(r30)
	PPC_STORE_U32(r30.u32 + -32, ctx.r9.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,-312(r11)
	PPC_STORE_U32(r11.u32 + -312, ctx.r8.u32);
	// lwz r11,-312(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -312);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r7,-312(r11)
	PPC_STORE_U32(r11.u32 + -312, ctx.r7.u32);
	// lwz r11,-312(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -312);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-312
	ctx.r10.s64 = r11.s64 + -312;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-316(r11)
	PPC_STORE_U32(r11.u32 + -316, ctx.r10.u32);
	// lwz r11,-312(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -312);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-356
	ctx.r10.s64 = r11.s64 + -356;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-316(r11)
	PPC_STORE_U32(r11.u32 + -316, ctx.r10.u32);
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r29,r11,-6464
	r29.s64 = r11.s64 + -6464;
	// beq 0x8230e3b8
	if (cr0.eq) goto loc_8230E3B8;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r29,480
	ctx.r3.s64 = r29.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230E3B8:
	// lwz r11,-16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -16);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r28,-20(r30)
	PPC_STORE_U32(r30.u32 + -20, r28.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq 0x8230e3dc
	if (cr0.eq) goto loc_8230E3DC;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r29,480
	ctx.r3.s64 = r29.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230E3DC:
	// lwz r11,-12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -12);
	// stw r28,-16(r30)
	PPC_STORE_U32(r30.u32 + -16, r28.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq 0x8230e3fc
	if (cr0.eq) goto loc_8230E3FC;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r29,480
	ctx.r3.s64 = r29.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230E3FC:
	// lwz r11,-8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// stw r28,-12(r30)
	PPC_STORE_U32(r30.u32 + -12, r28.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq 0x8230e41c
	if (cr0.eq) goto loc_8230E41C;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r29,480
	ctx.r3.s64 = r29.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230E41C:
	// stw r28,-8(r30)
	PPC_STORE_U32(r30.u32 + -8, r28.u32);
	// addi r3,r30,-28
	ctx.r3.s64 = r30.s64 + -28;
	// bl 0x821c0550
	sub_821C0550(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8230E430"))) PPC_WEAK_FUNC(sub_8230E430);
PPC_FUNC_IMPL(__imp__sub_8230E430) {
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
	// addi r11,r11,-316
	r11.s64 = r11.s64 + -316;
	// addi r3,r11,288
	ctx.r3.s64 = r11.s64 + 288;
	// bl 0x821c0550
	sub_821C0550(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230E460"))) PPC_WEAK_FUNC(sub_8230E460);
PPC_FUNC_IMPL(__imp__sub_8230E460) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,6168(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6168);
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r29,r30,-28
	r29.s64 = r30.s64 + -28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821c2878
	sub_821C2878(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,27984
	ctx.r6.s64 = r11.s64 + 27984;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,920
	ctx.r5.s64 = r11.s64 + 920;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8230e650
	if (cr0.eq) goto loc_8230E650;
	// lwz r11,-52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -52);
	// addi r10,r30,-316
	ctx.r10.s64 = r30.s64 + -316;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8230e650
	if (!cr6.eq) goto loc_8230E650;
	// lwz r11,-44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8230e650
	if (!cr6.eq) goto loc_8230E650;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,6144
	ctx.r4.s64 = r11.s64 + 6144;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82120fd0
	sub_82120FD0(ctx, base);
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r25,r11,-6464
	r25.s64 = r11.s64 + -6464;
	// beq 0x8230e514
	if (cr0.eq) goto loc_8230E514;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r25,480
	ctx.r3.s64 = r25.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230E514:
	// lwz r11,-16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -16);
	// li r26,0
	r26.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r26,-20(r30)
	PPC_STORE_U32(r30.u32 + -20, r26.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq 0x8230e538
	if (cr0.eq) goto loc_8230E538;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r25,480
	ctx.r3.s64 = r25.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230E538:
	// stw r26,-16(r30)
	PPC_STORE_U32(r30.u32 + -16, r26.u32);
	// lwz r11,288(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 288);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// beq 0x8230e5f4
	if (cr0.eq) goto loc_8230E5F4;
	// lwz r11,-48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -48);
	// addi r3,r30,-316
	ctx.r3.s64 = r30.s64 + -316;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// addi r27,r11,36
	r27.s64 = r11.s64 + 36;
	// bl 0x8230d318
	sub_8230D318(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x823110f8
	sub_823110F8(ctx, base);
	// lwz r11,-48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -48);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stw r4,-20(r30)
	PPC_STORE_U32(r30.u32 + -20, ctx.r4.u32);
	// lwz r3,296(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 296);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// addi r6,r11,36
	ctx.r6.s64 = r11.s64 + 36;
	// bl 0x8230de28
	sub_8230DE28(ctx, base);
	// bl 0x82270c08
	sub_82270C08(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8230e5f4
	if (!cr6.eq) goto loc_8230E5F4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823110f8
	sub_823110F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r4,-16(r30)
	PPC_STORE_U32(r30.u32 + -16, ctx.r4.u32);
	// lwz r3,300(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 300);
	// bl 0x8230de28
	sub_8230DE28(ctx, base);
loc_8230E5F4:
	// lwz r11,-12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq 0x8230e610
	if (cr0.eq) goto loc_8230E610;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r25,480
	ctx.r3.s64 = r25.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230E610:
	// stw r26,-12(r30)
	PPC_STORE_U32(r30.u32 + -12, r26.u32);
	// lwz r3,292(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 292);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,-24(r30)
	PPC_STORE_U32(r30.u32 + -24, ctx.r3.u32);
	// beq 0x8230e648
	if (cr0.eq) goto loc_8230E648;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82311148
	sub_82311148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,6
	ctx.r6.s64 = 6;
	// lwz r5,-24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + -24);
	// stw r4,-12(r30)
	PPC_STORE_U32(r30.u32 + -12, ctx.r4.u32);
	// lwz r3,304(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 304);
	// bl 0x8230dec0
	sub_8230DEC0(ctx, base);
loc_8230E648:
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82121018
	sub_82121018(ctx, base);
loc_8230E650:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8230E468"))) PPC_WEAK_FUNC(sub_8230E468);
PPC_FUNC_IMPL(__imp__sub_8230E468) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r29,r30,-28
	r29.s64 = r30.s64 + -28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821c2878
	sub_821C2878(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,27984
	ctx.r6.s64 = r11.s64 + 27984;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,920
	ctx.r5.s64 = r11.s64 + 920;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8230e650
	if (cr0.eq) goto loc_8230E650;
	// lwz r11,-52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -52);
	// addi r10,r30,-316
	ctx.r10.s64 = r30.s64 + -316;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8230e650
	if (!cr6.eq) goto loc_8230E650;
	// lwz r11,-44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8230e650
	if (!cr6.eq) goto loc_8230E650;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,6144
	ctx.r4.s64 = r11.s64 + 6144;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82120fd0
	sub_82120FD0(ctx, base);
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r25,r11,-6464
	r25.s64 = r11.s64 + -6464;
	// beq 0x8230e514
	if (cr0.eq) goto loc_8230E514;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r25,480
	ctx.r3.s64 = r25.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230E514:
	// lwz r11,-16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -16);
	// li r26,0
	r26.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r26,-20(r30)
	PPC_STORE_U32(r30.u32 + -20, r26.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq 0x8230e538
	if (cr0.eq) goto loc_8230E538;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r25,480
	ctx.r3.s64 = r25.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230E538:
	// stw r26,-16(r30)
	PPC_STORE_U32(r30.u32 + -16, r26.u32);
	// lwz r11,288(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 288);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// beq 0x8230e5f4
	if (cr0.eq) goto loc_8230E5F4;
	// lwz r11,-48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -48);
	// addi r3,r30,-316
	ctx.r3.s64 = r30.s64 + -316;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// addi r27,r11,36
	r27.s64 = r11.s64 + 36;
	// bl 0x8230d318
	sub_8230D318(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x823110f8
	sub_823110F8(ctx, base);
	// lwz r11,-48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -48);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stw r4,-20(r30)
	PPC_STORE_U32(r30.u32 + -20, ctx.r4.u32);
	// lwz r3,296(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 296);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// addi r6,r11,36
	ctx.r6.s64 = r11.s64 + 36;
	// bl 0x8230de28
	sub_8230DE28(ctx, base);
	// bl 0x82270c08
	sub_82270C08(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8230e5f4
	if (!cr6.eq) goto loc_8230E5F4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823110f8
	sub_823110F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r4,-16(r30)
	PPC_STORE_U32(r30.u32 + -16, ctx.r4.u32);
	// lwz r3,300(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 300);
	// bl 0x8230de28
	sub_8230DE28(ctx, base);
loc_8230E5F4:
	// lwz r11,-12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq 0x8230e610
	if (cr0.eq) goto loc_8230E610;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r25,480
	ctx.r3.s64 = r25.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230E610:
	// stw r26,-12(r30)
	PPC_STORE_U32(r30.u32 + -12, r26.u32);
	// lwz r3,292(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 292);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,-24(r30)
	PPC_STORE_U32(r30.u32 + -24, ctx.r3.u32);
	// beq 0x8230e648
	if (cr0.eq) goto loc_8230E648;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82311148
	sub_82311148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,6
	ctx.r6.s64 = 6;
	// lwz r5,-24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + -24);
	// stw r4,-12(r30)
	PPC_STORE_U32(r30.u32 + -12, ctx.r4.u32);
	// lwz r3,304(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 304);
	// bl 0x8230dec0
	sub_8230DEC0(ctx, base);
loc_8230E648:
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82121018
	sub_82121018(ctx, base);
loc_8230E650:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8230E658"))) PPC_WEAK_FUNC(sub_8230E658);
PPC_FUNC_IMPL(__imp__sub_8230E658) {
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
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82121018
	sub_82121018(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230E680"))) PPC_WEAK_FUNC(sub_8230E680);
PPC_FUNC_IMPL(__imp__sub_8230E680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8230e468
	sub_8230E468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230E68C"))) PPC_WEAK_FUNC(sub_8230E68C);
PPC_FUNC_IMPL(__imp__sub_8230E68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230E690"))) PPC_WEAK_FUNC(sub_8230E690);
PPC_FUNC_IMPL(__imp__sub_8230E690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,6248(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6248);
	// mflr r12
	// bl 0x8239bcd8
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// addi r31,r1,-336
	r31.s64 = ctx.r1.s64 + -336;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// lwz r11,264(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 264);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stfs f31,128(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f31,132(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f31,136(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// lwz r29,220(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// lwz r9,228(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// lwz r11,224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// divw r21,r11,r10
	r21.s32 = r11.s32 / ctx.r10.s32;
	// bl 0x82125300
	sub_82125300(ctx, base);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x822f94f8
	sub_822F94F8(ctx, base);
	// lwz r27,104(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// mr r11,r27
	r11.u64 = r27.u64;
	// beq cr6,0x8230e73c
	if (cr6.eq) goto loc_8230E73C;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8230e734
	if (cr0.eq) goto loc_8230E734;
	// mtctr r29
	ctr.u64 = r29.u64;
loc_8230E728:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8230e728
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8230E728;
loc_8230E734:
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
loc_8230E73C:
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// li r23,0
	r23.s64 = 0;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x8230e954
	if (!cr6.gt) goto loc_8230E954;
	// li r22,0
	r22.s64 = 0;
loc_8230E750:
	// lwz r11,264(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 264);
	// addi r6,r31,192
	ctx.r6.s64 = r31.s64 + 192;
	// addi r5,r31,176
	ctx.r5.s64 = r31.s64 + 176;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// lwz r7,216(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// add r30,r10,r22
	r30.u64 = ctx.r10.u64 + r22.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rotlwi r11,r11,6
	r11.u64 = __builtin_rotateleft32(r11.u32, 6);
	// add r28,r11,r7
	r28.u64 = r11.u64 + ctx.r7.u64;
	// lhz r11,2(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// lhz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// rotlwi r10,r11,6
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 6);
	// rotlwi r11,r7,6
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 6);
	// add r26,r10,r8
	r26.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r25,r11,r9
	r25.u64 = r11.u64 + ctx.r9.u64;
	// bl 0x821c5c10
	sub_821C5C10(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8230e944
	if (cr0.eq) goto loc_8230E944;
	// lfs f11,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 192);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// lfs f12,180(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// lfs f13,176(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f10,184(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,200(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 200);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,196(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 196);
	f0.f64 = double(temp.f32);
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmsubs f0,f0,f13,f8
	f0.f64 = double(float(f0.f64 * ctx.f13.f64 - ctx.f8.f64));
	// stfs f0,168(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// fmsubs f13,f10,f11,f7
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f7.f64));
	// stfs f13,164(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// fmsubs f12,f9,f12,f6
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f12,160(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// bl 0x8214f728
	sub_8214F728(ctx, base);
	// addi r6,r31,144
	ctx.r6.s64 = r31.s64 + 144;
	// addi r5,r28,16
	ctx.r5.s64 = r28.s64 + 16;
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x821c49c0
	sub_821C49C0(ctx, base);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lfs f12,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// lfs f11,144(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,148(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// lfsx f0,r11,r27
	temp.u32 = PPC_LOAD_U32(r11.u32 + r27.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x8230e85c
	if (!cr6.eq) goto loc_8230E85C;
	// stfsx f1,r11,r27
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + r27.u32, temp.u32);
loc_8230E85C:
	// addi r6,r31,144
	ctx.r6.s64 = r31.s64 + 144;
	// addi r5,r26,16
	ctx.r5.s64 = r26.s64 + 16;
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x821c49c0
	sub_821C49C0(ctx, base);
	// lhz r11,2(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lfs f12,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// lfs f11,144(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,148(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lhz r11,2(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// lfsx f0,r11,r27
	temp.u32 = PPC_LOAD_U32(r11.u32 + r27.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x8230e8d0
	if (!cr6.eq) goto loc_8230E8D0;
	// lhz r11,2(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// stfsx f1,r11,r27
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + r27.u32, temp.u32);
loc_8230E8D0:
	// addi r6,r31,144
	ctx.r6.s64 = r31.s64 + 144;
	// addi r5,r25,16
	ctx.r5.s64 = r25.s64 + 16;
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x821c49c0
	sub_821C49C0(ctx, base);
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lfs f12,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// lfs f11,144(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,148(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// lfsx f0,r11,r27
	temp.u32 = PPC_LOAD_U32(r11.u32 + r27.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x8230e944
	if (!cr6.eq) goto loc_8230E944;
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// stfsx f1,r11,r27
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + r27.u32, temp.u32);
loc_8230E944:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r22,r22,6
	r22.s64 = r22.s64 + 6;
	// cmpw cr6,r23,r21
	cr6.compare<int32_t>(r23.s32, r21.s32, xer);
	// blt cr6,0x8230e750
	if (cr6.lt) goto loc_8230E750;
loc_8230E954:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8230d5c0
	sub_8230D5C0(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x8230e9c0
	if (!cr6.gt) goto loc_8230E9C0;
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// mr r28,r27
	r28.u64 = r27.u64;
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
	// subfic r26,r11,-8
	xer.ca = r11.u32 <= 4294967288;
	r26.s64 = -8 - r11.s64;
loc_8230E97C:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// add r11,r26,r30
	r11.u64 = r26.u64 + r30.u64;
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8214f728
	sub_8214F728(ctx, base);
	// lfs f0,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 208);
	f0.f64 = double(temp.f32);
	// stfs f0,-8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + -8, temp.u32);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// lfs f0,212(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 212);
	f0.f64 = double(temp.f32);
	// stfs f0,-4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + -4, temp.u32);
	// lfs f0,216(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 216);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// bne 0x8230e97c
	if (!cr0.eq) goto loc_8230E97C;
loc_8230E9C0:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x823c3d80
	sub_823C3D80(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8230e9e8
	if (cr6.eq) goto loc_8230E9E8;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8230E9E8:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// b 0x8230e9f8
	goto loc_8230E9F8;
loc_8230E9F4:
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
loc_8230E9F8:
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
	// bne 0x8230e9f4
	if (!cr0.eq) goto loc_8230E9F4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8230ea2c
	if (cr6.eq) goto loc_8230EA2C;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8230EA2C:
	// addi r1,r31,336
	ctx.r1.s64 = r31.s64 + 336;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_8230E698"))) PPC_WEAK_FUNC(sub_8230E698);
PPC_FUNC_IMPL(__imp__sub_8230E698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd8
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// addi r31,r1,-336
	r31.s64 = ctx.r1.s64 + -336;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// lwz r11,264(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 264);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stfs f31,128(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f31,132(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f31,136(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// lwz r29,220(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// lwz r9,228(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// lwz r11,224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// divw r21,r11,r10
	r21.s32 = r11.s32 / ctx.r10.s32;
	// bl 0x82125300
	sub_82125300(ctx, base);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x822f94f8
	sub_822F94F8(ctx, base);
	// lwz r27,104(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// mr r11,r27
	r11.u64 = r27.u64;
	// beq cr6,0x8230e73c
	if (cr6.eq) goto loc_8230E73C;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8230e734
	if (cr0.eq) goto loc_8230E734;
	// mtctr r29
	ctr.u64 = r29.u64;
loc_8230E728:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8230e728
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8230E728;
loc_8230E734:
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
loc_8230E73C:
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// li r23,0
	r23.s64 = 0;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x8230e954
	if (!cr6.gt) goto loc_8230E954;
	// li r22,0
	r22.s64 = 0;
loc_8230E750:
	// lwz r11,264(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 264);
	// addi r6,r31,192
	ctx.r6.s64 = r31.s64 + 192;
	// addi r5,r31,176
	ctx.r5.s64 = r31.s64 + 176;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// lwz r7,216(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// add r30,r10,r22
	r30.u64 = ctx.r10.u64 + r22.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rotlwi r11,r11,6
	r11.u64 = __builtin_rotateleft32(r11.u32, 6);
	// add r28,r11,r7
	r28.u64 = r11.u64 + ctx.r7.u64;
	// lhz r11,2(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// lhz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// rotlwi r10,r11,6
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 6);
	// rotlwi r11,r7,6
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 6);
	// add r26,r10,r8
	r26.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r25,r11,r9
	r25.u64 = r11.u64 + ctx.r9.u64;
	// bl 0x821c5c10
	sub_821C5C10(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8230e944
	if (cr0.eq) goto loc_8230E944;
	// lfs f11,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 192);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// lfs f12,180(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// lfs f13,176(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f10,184(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,200(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 200);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,196(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 196);
	f0.f64 = double(temp.f32);
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmsubs f0,f0,f13,f8
	f0.f64 = double(float(f0.f64 * ctx.f13.f64 - ctx.f8.f64));
	// stfs f0,168(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// fmsubs f13,f10,f11,f7
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f7.f64));
	// stfs f13,164(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// fmsubs f12,f9,f12,f6
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f12,160(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// bl 0x8214f728
	sub_8214F728(ctx, base);
	// addi r6,r31,144
	ctx.r6.s64 = r31.s64 + 144;
	// addi r5,r28,16
	ctx.r5.s64 = r28.s64 + 16;
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x821c49c0
	sub_821C49C0(ctx, base);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lfs f12,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// lfs f11,144(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,148(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// lfsx f0,r11,r27
	temp.u32 = PPC_LOAD_U32(r11.u32 + r27.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x8230e85c
	if (!cr6.eq) goto loc_8230E85C;
	// stfsx f1,r11,r27
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + r27.u32, temp.u32);
loc_8230E85C:
	// addi r6,r31,144
	ctx.r6.s64 = r31.s64 + 144;
	// addi r5,r26,16
	ctx.r5.s64 = r26.s64 + 16;
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x821c49c0
	sub_821C49C0(ctx, base);
	// lhz r11,2(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lfs f12,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// lfs f11,144(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,148(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lhz r11,2(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// lfsx f0,r11,r27
	temp.u32 = PPC_LOAD_U32(r11.u32 + r27.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x8230e8d0
	if (!cr6.eq) goto loc_8230E8D0;
	// lhz r11,2(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// stfsx f1,r11,r27
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + r27.u32, temp.u32);
loc_8230E8D0:
	// addi r6,r31,144
	ctx.r6.s64 = r31.s64 + 144;
	// addi r5,r25,16
	ctx.r5.s64 = r25.s64 + 16;
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x821c49c0
	sub_821C49C0(ctx, base);
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lfs f12,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// lfs f11,144(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,148(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// lfsx f0,r11,r27
	temp.u32 = PPC_LOAD_U32(r11.u32 + r27.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x8230e944
	if (!cr6.eq) goto loc_8230E944;
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// stfsx f1,r11,r27
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + r27.u32, temp.u32);
loc_8230E944:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r22,r22,6
	r22.s64 = r22.s64 + 6;
	// cmpw cr6,r23,r21
	cr6.compare<int32_t>(r23.s32, r21.s32, xer);
	// blt cr6,0x8230e750
	if (cr6.lt) goto loc_8230E750;
loc_8230E954:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8230d5c0
	sub_8230D5C0(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x8230e9c0
	if (!cr6.gt) goto loc_8230E9C0;
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// mr r28,r27
	r28.u64 = r27.u64;
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
	// subfic r26,r11,-8
	xer.ca = r11.u32 <= 4294967288;
	r26.s64 = -8 - r11.s64;
loc_8230E97C:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// add r11,r26,r30
	r11.u64 = r26.u64 + r30.u64;
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8214f728
	sub_8214F728(ctx, base);
	// lfs f0,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 208);
	f0.f64 = double(temp.f32);
	// stfs f0,-8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + -8, temp.u32);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// lfs f0,212(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 212);
	f0.f64 = double(temp.f32);
	// stfs f0,-4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + -4, temp.u32);
	// lfs f0,216(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 216);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// bne 0x8230e97c
	if (!cr0.eq) goto loc_8230E97C;
loc_8230E9C0:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x823c3d80
	sub_823C3D80(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8230e9e8
	if (cr6.eq) goto loc_8230E9E8;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8230E9E8:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// b 0x8230e9f8
	goto loc_8230E9F8;
loc_8230E9F4:
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
loc_8230E9F8:
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
	// bne 0x8230e9f4
	if (!cr0.eq) goto loc_8230E9F4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8230ea2c
	if (cr6.eq) goto loc_8230EA2C;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8230EA2C:
	// addi r1,r31,336
	ctx.r1.s64 = r31.s64 + 336;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_8230EA38"))) PPC_WEAK_FUNC(sub_8230EA38);
PPC_FUNC_IMPL(__imp__sub_8230EA38) {
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
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8221ca10
	sub_8221CA10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230EA60"))) PPC_WEAK_FUNC(sub_8230EA60);
PPC_FUNC_IMPL(__imp__sub_8230EA60) {
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
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
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

__attribute__((alias("__imp__sub_8230EA88"))) PPC_WEAK_FUNC(sub_8230EA88);
PPC_FUNC_IMPL(__imp__sub_8230EA88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r16,6336(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6336);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r4,r11,6144
	ctx.r4.s64 = r11.s64 + 6144;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82120fd0
	sub_82120FD0(ctx, base);
	// lwz r3,264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// beq cr6,0x8230eaf8
	if (cr6.eq) goto loc_8230EAF8;
	// lwz r11,272(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// clrlwi. r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8230eaf4
	if (cr0.eq) goto loc_8230EAF4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8230EAF4:
	// b 0x8230ed34
	goto loc_8230ED34;
loc_8230EAF8:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c1208
	sub_821C1208(ctx, base);
	// lwz r11,272(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8230eb14
	if (cr6.eq) goto loc_8230EB14;
	// b 0x8230ed34
	goto loc_8230ED34;
loc_8230EB14:
	// clrlwi. r11,r25,27
	r11.u64 = r25.u32 & 0x1F;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r27,264(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r29,r27,216
	r29.s64 = r27.s64 + 216;
	// addi r24,r11,-6464
	r24.s64 = r11.s64 + -6464;
	// li r26,0
	r26.s64 = 0;
	// beq 0x8230ebbc
	if (cr0.eq) goto loc_8230EBBC;
	// lwz r11,296(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 296);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// beq 0x8230eb4c
	if (cr0.eq) goto loc_8230EB4C;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// addi r3,r24,480
	ctx.r3.s64 = r24.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230EB4C:
	// stw r26,296(r30)
	PPC_STORE_U32(r30.u32 + 296, r26.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,288(r30)
	PPC_STORE_U32(r30.u32 + 288, r11.u32);
	// beq 0x8230ebbc
	if (cr0.eq) goto loc_8230EBBC;
	// lwz r11,268(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 268);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// addi r28,r11,36
	r28.s64 = r11.s64 + 36;
	// bl 0x8230d318
	sub_8230D318(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,288(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 288);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x823110f8
	sub_823110F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,296(r30)
	PPC_STORE_U32(r30.u32 + 296, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r5,r11,r4
	ctx.r5.u64 = r11.u64 + ctx.r4.u64;
	// bl 0x8230df60
	sub_8230DF60(ctx, base);
loc_8230EBBC:
	// rlwinm. r11,r25,0,26,26
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8230ec80
	if (cr0.eq) goto loc_8230EC80;
	// lwz r11,304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 304);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// beq 0x8230ebe0
	if (cr0.eq) goto loc_8230EBE0;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// addi r3,r24,480
	ctx.r3.s64 = r24.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230EBE0:
	// stw r26,304(r30)
	PPC_STORE_U32(r30.u32 + 304, r26.u32);
	// li r11,6
	r11.s64 = 6;
	// lwz r10,228(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 228);
	// lwz r9,224(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 224);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r3,r10,r11
	ctx.r3.s32 = ctx.r10.s32 / r11.s32;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,292(r30)
	PPC_STORE_U32(r30.u32 + 292, ctx.r3.u32);
	// beq 0x8230ec80
	if (cr0.eq) goto loc_8230EC80;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82311148
	sub_82311148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r4,304(r30)
	PPC_STORE_U32(r30.u32 + 304, ctx.r4.u32);
	// bl 0x8230d678
	sub_8230D678(ctx, base);
	// lwz r11,292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 292);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8230ec78
	if (!cr6.gt) goto loc_8230EC78;
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_8230EC38:
	// lwz r11,224(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 224);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// sth r7,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// sth r7,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lhz r11,4(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// sth r11,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, r11.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lwz r11,292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 292);
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// blt cr6,0x8230ec38
	if (cr6.lt) goto loc_8230EC38;
loc_8230EC78:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x823c3e88
	sub_823C3E88(ctx, base);
loc_8230EC80:
	// bl 0x82270c08
	sub_82270C08(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8230ece0
	if (!cr6.eq) goto loc_8230ECE0;
	// clrlwi. r11,r25,31
	r11.u64 = r25.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8230ece0
	if (cr0.eq) goto loc_8230ECE0;
	// lwz r11,300(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 300);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// beq 0x8230ecb0
	if (cr0.eq) goto loc_8230ECB0;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// addi r3,r24,480
	ctx.r3.s64 = r24.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230ECB0:
	// lwz r3,288(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 288);
	// stw r26,300(r30)
	PPC_STORE_U32(r30.u32 + 300, r26.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8230ece0
	if (cr0.eq) goto loc_8230ECE0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823110f8
	sub_823110F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r4,300(r30)
	PPC_STORE_U32(r30.u32 + 300, ctx.r4.u32);
	// bl 0x8230e698
	sub_8230E698(ctx, base);
loc_8230ECE0:
	// lwz r11,272(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// clrlwi. r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8230ecf8
	if (!cr0.eq) goto loc_8230ECF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,216
	ctx.r3.s64 = r30.s64 + 216;
	// bl 0x821bce48
	sub_821BCE48(ctx, base);
loc_8230ECF8:
	// lwz r11,272(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8230ed34
	if (!cr0.eq) goto loc_8230ED34;
	// addi r11,r30,224
	r11.s64 = r30.s64 + 224;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r26,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r26.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r26,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r26.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// bl 0x821bfb98
	sub_821BFB98(ctx, base);
loc_8230ED34:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82121018
	sub_82121018(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8230EA90"))) PPC_WEAK_FUNC(sub_8230EA90);
PPC_FUNC_IMPL(__imp__sub_8230EA90) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r4,r11,6144
	ctx.r4.s64 = r11.s64 + 6144;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82120fd0
	sub_82120FD0(ctx, base);
	// lwz r3,264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// beq cr6,0x8230eaf8
	if (cr6.eq) goto loc_8230EAF8;
	// lwz r11,272(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// clrlwi. r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8230eaf4
	if (cr0.eq) goto loc_8230EAF4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8230EAF4:
	// b 0x8230ed34
	goto loc_8230ED34;
loc_8230EAF8:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c1208
	sub_821C1208(ctx, base);
	// lwz r11,272(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8230eb14
	if (cr6.eq) goto loc_8230EB14;
	// b 0x8230ed34
	goto loc_8230ED34;
loc_8230EB14:
	// clrlwi. r11,r25,27
	r11.u64 = r25.u32 & 0x1F;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r27,264(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r29,r27,216
	r29.s64 = r27.s64 + 216;
	// addi r24,r11,-6464
	r24.s64 = r11.s64 + -6464;
	// li r26,0
	r26.s64 = 0;
	// beq 0x8230ebbc
	if (cr0.eq) goto loc_8230EBBC;
	// lwz r11,296(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 296);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// beq 0x8230eb4c
	if (cr0.eq) goto loc_8230EB4C;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// addi r3,r24,480
	ctx.r3.s64 = r24.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230EB4C:
	// stw r26,296(r30)
	PPC_STORE_U32(r30.u32 + 296, r26.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,288(r30)
	PPC_STORE_U32(r30.u32 + 288, r11.u32);
	// beq 0x8230ebbc
	if (cr0.eq) goto loc_8230EBBC;
	// lwz r11,268(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 268);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// addi r28,r11,36
	r28.s64 = r11.s64 + 36;
	// bl 0x8230d318
	sub_8230D318(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,288(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 288);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x823110f8
	sub_823110F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,296(r30)
	PPC_STORE_U32(r30.u32 + 296, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r5,r11,r4
	ctx.r5.u64 = r11.u64 + ctx.r4.u64;
	// bl 0x8230df60
	sub_8230DF60(ctx, base);
loc_8230EBBC:
	// rlwinm. r11,r25,0,26,26
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8230ec80
	if (cr0.eq) goto loc_8230EC80;
	// lwz r11,304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 304);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// beq 0x8230ebe0
	if (cr0.eq) goto loc_8230EBE0;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// addi r3,r24,480
	ctx.r3.s64 = r24.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230EBE0:
	// stw r26,304(r30)
	PPC_STORE_U32(r30.u32 + 304, r26.u32);
	// li r11,6
	r11.s64 = 6;
	// lwz r10,228(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 228);
	// lwz r9,224(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 224);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r3,r10,r11
	ctx.r3.s32 = ctx.r10.s32 / r11.s32;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,292(r30)
	PPC_STORE_U32(r30.u32 + 292, ctx.r3.u32);
	// beq 0x8230ec80
	if (cr0.eq) goto loc_8230EC80;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82311148
	sub_82311148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r4,304(r30)
	PPC_STORE_U32(r30.u32 + 304, ctx.r4.u32);
	// bl 0x8230d678
	sub_8230D678(ctx, base);
	// lwz r11,292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 292);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8230ec78
	if (!cr6.gt) goto loc_8230EC78;
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_8230EC38:
	// lwz r11,224(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 224);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// sth r7,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// sth r7,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lhz r11,4(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// sth r11,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, r11.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lwz r11,292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 292);
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// blt cr6,0x8230ec38
	if (cr6.lt) goto loc_8230EC38;
loc_8230EC78:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x823c3e88
	sub_823C3E88(ctx, base);
loc_8230EC80:
	// bl 0x82270c08
	sub_82270C08(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8230ece0
	if (!cr6.eq) goto loc_8230ECE0;
	// clrlwi. r11,r25,31
	r11.u64 = r25.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8230ece0
	if (cr0.eq) goto loc_8230ECE0;
	// lwz r11,300(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 300);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// beq 0x8230ecb0
	if (cr0.eq) goto loc_8230ECB0;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// addi r3,r24,480
	ctx.r3.s64 = r24.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230ECB0:
	// lwz r3,288(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 288);
	// stw r26,300(r30)
	PPC_STORE_U32(r30.u32 + 300, r26.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8230ece0
	if (cr0.eq) goto loc_8230ECE0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823110f8
	sub_823110F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r4,300(r30)
	PPC_STORE_U32(r30.u32 + 300, ctx.r4.u32);
	// bl 0x8230e698
	sub_8230E698(ctx, base);
loc_8230ECE0:
	// lwz r11,272(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// clrlwi. r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8230ecf8
	if (!cr0.eq) goto loc_8230ECF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,216
	ctx.r3.s64 = r30.s64 + 216;
	// bl 0x821bce48
	sub_821BCE48(ctx, base);
loc_8230ECF8:
	// lwz r11,272(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8230ed34
	if (!cr0.eq) goto loc_8230ED34;
	// addi r11,r30,224
	r11.s64 = r30.s64 + 224;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r26,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r26.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r26,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r26.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// bl 0x821bfb98
	sub_821BFB98(ctx, base);
loc_8230ED34:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82121018
	sub_82121018(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8230ED44"))) PPC_WEAK_FUNC(sub_8230ED44);
PPC_FUNC_IMPL(__imp__sub_8230ED44) {
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
	// bl 0x82121018
	sub_82121018(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230ED6C"))) PPC_WEAK_FUNC(sub_8230ED6C);
PPC_FUNC_IMPL(__imp__sub_8230ED6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230ED70"))) PPC_WEAK_FUNC(sub_8230ED70);
PPC_FUNC_IMPL(__imp__sub_8230ED70) {
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
	// addi r30,r3,-316
	r30.s64 = ctx.r3.s64 + -316;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,316
	r31.s64 = r30.s64 + 316;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8230e300
	sub_8230E300(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8230edac
	if (cr0.eq) goto loc_8230EDAC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,368
	ctx.r3.s64 = 368;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_8230EDAC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8230EDB8"))) PPC_WEAK_FUNC(sub_8230EDB8);
PPC_FUNC_IMPL(__imp__sub_8230EDB8) {
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
	// lwz r16,6440(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6440);
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
	// lwz r11,-5328(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5328);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-5332
	r30.s64 = ctx.r9.s64 + -5332;
	// bne 0x8230ee04
	if (!cr0.eq) goto loc_8230EE04;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5328(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5328, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-184
	ctx.r4.s64 = r11.s64 + -184;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8230EE04:
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

__attribute__((alias("__imp__sub_8230EDC0"))) PPC_WEAK_FUNC(sub_8230EDC0);
PPC_FUNC_IMPL(__imp__sub_8230EDC0) {
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
	// lwz r11,-5328(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5328);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-5332
	r30.s64 = ctx.r9.s64 + -5332;
	// bne 0x8230ee04
	if (!cr0.eq) goto loc_8230EE04;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5328(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5328, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-184
	ctx.r4.s64 = r11.s64 + -184;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8230EE04:
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

__attribute__((alias("__imp__sub_8230EE18"))) PPC_WEAK_FUNC(sub_8230EE18);
PPC_FUNC_IMPL(__imp__sub_8230EE18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-5328
	r11.s64 = r11.s64 + -5328;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-5328
	ctx.r10.s64 = ctx.r10.s64 + -5328;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230EE40"))) PPC_WEAK_FUNC(sub_8230EE40);
PPC_FUNC_IMPL(__imp__sub_8230EE40) {
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
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r3,-5336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -5336);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8230ee6c
	if (cr6.eq) goto loc_8230EE6C;
	// bl 0x823c3be8
	sub_823C3BE8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-5336(r31)
	PPC_STORE_U32(r31.u32 + -5336, r11.u32);
loc_8230EE6C:
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

__attribute__((alias("__imp__sub_8230EE80"))) PPC_WEAK_FUNC(sub_8230EE80);
PPC_FUNC_IMPL(__imp__sub_8230EE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230EE8C"))) PPC_WEAK_FUNC(sub_8230EE8C);
PPC_FUNC_IMPL(__imp__sub_8230EE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230EE90"))) PPC_WEAK_FUNC(sub_8230EE90);
PPC_FUNC_IMPL(__imp__sub_8230EE90) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,6504(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6504);
	// mflr r12
	// bl 0x8239bce4
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,6144
	ctx.r4.s64 = r11.s64 + 6144;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82120fd0
	sub_82120FD0(ctx, base);
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// divwu r9,r10,r9
	ctx.r9.u32 = ctx.r10.u32 / ctx.r9.u32;
	// mulli r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 * 3;
	// lwz r28,264(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 264);
	// subf r24,r9,r10
	r24.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r11,r24,17
	r11.s64 = r24.s64 + 17;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r27,r30
	r11.u64 = PPC_LOAD_U32(r27.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,264(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 264);
	// addi r29,r11,216
	r29.s64 = r11.s64 + 216;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r23,r11,-6464
	r23.s64 = r11.s64 + -6464;
	// bne cr6,0x8230ef54
	if (!cr6.eq) goto loc_8230EF54;
	// lwz r11,268(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 268);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r26,4(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// addi r25,r11,36
	r25.s64 = r11.s64 + 36;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8230d318
	sub_8230D318(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r3,r25,r26
	ctx.r3.s64 = int64_t(r25.s32) * int64_t(r26.s32);
	// bl 0x823c3c68
	sub_823C3C68(ctx, base);
	// stwx r3,r27,r30
	PPC_STORE_U32(r27.u32 + r30.u32, ctx.r3.u32);
loc_8230EF54:
	// addi r11,r24,20
	r11.s64 = r24.s64 + 20;
	// rlwinm r25,r11,2,0,29
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r25,r30
	r11.u64 = PPC_LOAD_U32(r25.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8230ef88
	if (!cr6.eq) goto loc_8230EF88;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r26,4(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r26,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823c3c68
	sub_823C3C68(ctx, base);
	// stwx r3,r25,r30
	PPC_STORE_U32(r25.u32 + r30.u32, ctx.r3.u32);
loc_8230EF88:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r27,r30
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + r30.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8230d5c0
	sub_8230D5C0(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,5956
	r11.s64 = r11.s64 + 5956;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r27,0(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// beq cr6,0x8230efec
	if (cr6.eq) goto loc_8230EFEC;
	// lwz r26,96(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_8230EFC0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8230d3e0
	sub_8230D3E0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r27,r27,64
	r27.s64 = r27.s64 + 64;
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r26,r26,36
	r26.s64 = r26.s64 + 36;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x8230efc0
	if (!cr6.eq) goto loc_8230EFC0;
loc_8230EFEC:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// bl 0x823c3d80
	sub_823C3D80(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r25,r30
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + r30.u32);
	// bl 0x8230e698
	sub_8230E698(ctx, base);
	// addi r10,r24,23
	ctx.r10.s64 = r24.s64 + 23;
	// lwz r11,264(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 264);
	// li r29,6
	r29.s64 = 6;
	// rlwinm r27,r10,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r27,r30
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// lwz r11,224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r11,r11,r29
	r11.s32 = r11.s32 / r29.s32;
	// mulli r26,r11,3
	r26.s64 = r11.s64 * 3;
	// bne cr6,0x8230f04c
	if (!cr6.eq) goto loc_8230F04C;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r26,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823c3c68
	sub_823C3C68(ctx, base);
	// stwx r3,r27,r30
	PPC_STORE_U32(r27.u32 + r30.u32, ctx.r3.u32);
loc_8230F04C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r3,r27,r30
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c3d30
	sub_823C3D30(ctx, base);
	// lwz r11,264(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 264);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,228(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// lwz r8,224(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw. r9,r9,r29
	ctx.r9.s32 = ctx.r9.s32 / r29.s32;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8230f0d0
	if (cr0.eq) goto loc_8230F0D0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8230F080:
	// lwz r11,224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lhz r11,4(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// addi r3,r8,4
	ctx.r3.s64 = ctx.r8.s64 + 4;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// lwz r11,264(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 264);
	// lwz r8,228(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// lwz r7,224(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// divw r8,r8,r29
	ctx.r8.s32 = ctx.r8.s32 / r29.s32;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x8230f080
	if (!cr6.eq) goto loc_8230F080;
loc_8230F0D0:
	// lwzx r3,r27,r30
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r30.u32);
	// bl 0x823c3d80
	sub_823C3D80(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82121018
	sub_82121018(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8230EE98"))) PPC_WEAK_FUNC(sub_8230EE98);
PPC_FUNC_IMPL(__imp__sub_8230EE98) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,6144
	ctx.r4.s64 = r11.s64 + 6144;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82120fd0
	sub_82120FD0(ctx, base);
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// divwu r9,r10,r9
	ctx.r9.u32 = ctx.r10.u32 / ctx.r9.u32;
	// mulli r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 * 3;
	// lwz r28,264(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 264);
	// subf r24,r9,r10
	r24.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r11,r24,17
	r11.s64 = r24.s64 + 17;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r27,r30
	r11.u64 = PPC_LOAD_U32(r27.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,264(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 264);
	// addi r29,r11,216
	r29.s64 = r11.s64 + 216;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r23,r11,-6464
	r23.s64 = r11.s64 + -6464;
	// bne cr6,0x8230ef54
	if (!cr6.eq) goto loc_8230EF54;
	// lwz r11,268(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 268);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r26,4(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// addi r25,r11,36
	r25.s64 = r11.s64 + 36;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8230d318
	sub_8230D318(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r3,r25,r26
	ctx.r3.s64 = int64_t(r25.s32) * int64_t(r26.s32);
	// bl 0x823c3c68
	sub_823C3C68(ctx, base);
	// stwx r3,r27,r30
	PPC_STORE_U32(r27.u32 + r30.u32, ctx.r3.u32);
loc_8230EF54:
	// addi r11,r24,20
	r11.s64 = r24.s64 + 20;
	// rlwinm r25,r11,2,0,29
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r25,r30
	r11.u64 = PPC_LOAD_U32(r25.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8230ef88
	if (!cr6.eq) goto loc_8230EF88;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r26,4(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r26,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823c3c68
	sub_823C3C68(ctx, base);
	// stwx r3,r25,r30
	PPC_STORE_U32(r25.u32 + r30.u32, ctx.r3.u32);
loc_8230EF88:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r27,r30
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + r30.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8230d5c0
	sub_8230D5C0(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,5956
	r11.s64 = r11.s64 + 5956;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r27,0(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// beq cr6,0x8230efec
	if (cr6.eq) goto loc_8230EFEC;
	// lwz r26,96(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_8230EFC0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8230d3e0
	sub_8230D3E0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r27,r27,64
	r27.s64 = r27.s64 + 64;
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r26,r26,36
	r26.s64 = r26.s64 + 36;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x8230efc0
	if (!cr6.eq) goto loc_8230EFC0;
loc_8230EFEC:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// bl 0x823c3d80
	sub_823C3D80(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r25,r30
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + r30.u32);
	// bl 0x8230e698
	sub_8230E698(ctx, base);
	// addi r10,r24,23
	ctx.r10.s64 = r24.s64 + 23;
	// lwz r11,264(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 264);
	// li r29,6
	r29.s64 = 6;
	// rlwinm r27,r10,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r27,r30
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// lwz r11,224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r11,r11,r29
	r11.s32 = r11.s32 / r29.s32;
	// mulli r26,r11,3
	r26.s64 = r11.s64 * 3;
	// bne cr6,0x8230f04c
	if (!cr6.eq) goto loc_8230F04C;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r26,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823c3c68
	sub_823C3C68(ctx, base);
	// stwx r3,r27,r30
	PPC_STORE_U32(r27.u32 + r30.u32, ctx.r3.u32);
loc_8230F04C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r3,r27,r30
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c3d30
	sub_823C3D30(ctx, base);
	// lwz r11,264(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 264);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,228(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// lwz r8,224(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw. r9,r9,r29
	ctx.r9.s32 = ctx.r9.s32 / r29.s32;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8230f0d0
	if (cr0.eq) goto loc_8230F0D0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8230F080:
	// lwz r11,224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lhz r11,4(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// addi r3,r8,4
	ctx.r3.s64 = ctx.r8.s64 + 4;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// lwz r11,264(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 264);
	// lwz r8,228(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// lwz r7,224(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// divw r8,r8,r29
	ctx.r8.s32 = ctx.r8.s32 / r29.s32;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x8230f080
	if (!cr6.eq) goto loc_8230F080;
loc_8230F0D0:
	// lwzx r3,r27,r30
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r30.u32);
	// bl 0x823c3d80
	sub_823C3D80(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82121018
	sub_82121018(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8230F0E8"))) PPC_WEAK_FUNC(sub_8230F0E8);
PPC_FUNC_IMPL(__imp__sub_8230F0E8) {
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
	// bl 0x82121018
	sub_82121018(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F110"))) PPC_WEAK_FUNC(sub_8230F110);
PPC_FUNC_IMPL(__imp__sub_8230F110) {
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
	// bl 0x8230dba8
	sub_8230DBA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F138"))) PPC_WEAK_FUNC(sub_8230F138);
PPC_FUNC_IMPL(__imp__sub_8230F138) {
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
	PPCRegister f0{};
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r31,44(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r30,264(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// lwz r11,264(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// lwz r11,272(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 272);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8230f19c
	if (cr6.eq) goto loc_8230F19C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8230ee98
	sub_8230EE98(ctx, base);
loc_8230F19C:
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// lwz r10,264(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r10,272(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r10,268(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 268);
	// andi. r11,r11,17
	r11.u64 = r11.u64 & 17;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r23,r11,2
	r23.s64 = r11.s64 + 2;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r31,r11,-6464
	r31.s64 = r11.s64 + -6464;
	// cntlzw r11,r10
	r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// beq cr6,0x8230f2c4
	if (cr6.eq) goto loc_8230F2C4;
	// addi r27,r11,36
	r27.s64 = r11.s64 + 36;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// lwz r11,64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// li r28,3
	r28.s64 = 3;
	// li r8,1
	ctx.r8.s64 = 1;
	// divwu r10,r11,r28
	ctx.r10.u32 = r11.u32 / r28.u32;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mulli r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 * 3;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,17
	r11.s64 = r11.s64 + 17;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r29
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x823bfe20
	sub_823BFE20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// lwz r11,64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// li r8,1
	ctx.r8.s64 = 1;
	// divwu r10,r11,r28
	ctx.r10.u32 = r11.u32 / r28.u32;
	// li r7,16
	ctx.r7.s64 = 16;
	// mulli r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 * 3;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r29
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x823bfe20
	sub_823BFE20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// lwz r11,64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// li r8,1
	ctx.r8.s64 = 1;
	// divwu r10,r11,r28
	ctx.r10.u32 = r11.u32 / r28.u32;
	// li r7,4
	ctx.r7.s64 = 4;
	// mulli r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 * 3;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r11,r11,23
	r11.s64 = r11.s64 + 23;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r29
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x823bfe20
	sub_823BFE20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,-5336(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -5336);
	// bl 0x823ca620
	sub_823CA620(ctx, base);
	// lwz r11,264(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r9,228(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// lwz r11,224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// b 0x8230f34c
	goto loc_8230F34C;
loc_8230F2C4:
	// addi r28,r11,36
	r28.s64 = r11.s64 + 36;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,296(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 296);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823bfe20
	sub_823BFE20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r5,300(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 300);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823bfe20
	sub_823BFE20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8230dbc0
	sub_8230DBC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823bfe20
	sub_823BFE20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,-5336(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -5336);
	// bl 0x823ca620
	sub_823CA620(ctx, base);
	// lwz r11,292(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 292);
loc_8230F34C:
	// mulli r30,r11,3
	r30.s64 = r11.s64 * 3;
	// extsw r10,r30
	ctx.r10.s64 = r30.s32;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r4,89
	ctx.r4.s64 = 89;
	// addi r25,r11,-5540
	r25.s64 = r11.s64 + -5540;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// bl 0x82305f90
	sub_82305F90(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r26,r29,48
	r26.s64 = r29.s64 + 48;
	// lfs f31,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lfs f30,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f30.f64 = double(temp.f32);
loc_8230F38C:
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f30,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x82306be8
	sub_82306BE8(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82308098
	sub_82308098(ctx, base);
	// lwz r28,0(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// b 0x8230f438
	goto loc_8230F438;
loc_8230F3E4:
	// li r27,0
	r27.s64 = 0;
loc_8230F3E8:
	// subf r11,r28,r26
	r11.s64 = r26.s64 - r28.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8230f418
	if (!cr0.eq) goto loc_8230F418;
	// addi r5,r28,8
	ctx.r5.s64 = r28.s64 + 8;
	// addi r4,r27,92
	ctx.r4.s64 = r27.s64 + 92;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823062f8
	sub_823062F8(ctx, base);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r27,128
	cr6.compare<int32_t>(r27.s32, 128, xer);
	// blt cr6,0x8230f3e8
	if (cr6.lt) goto loc_8230F3E8;
loc_8230F418:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// srawi r11,r27,2
	xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3) != 0);
	r11.s64 = r27.s32 >> 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mullw r6,r11,r30
	ctx.r6.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// bl 0x823c7a08
	sub_823C7A08(ctx, base);
loc_8230F438:
	// subf r11,r28,r26
	r11.s64 = r26.s64 - r28.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8230f3e4
	if (!cr0.eq) goto loc_8230F3E4;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8230f464
	if (cr6.eq) goto loc_8230F464;
	// lwz r24,172(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + 172);
	// cmplwi r24,0
	cr0.compare<uint32_t>(r24.u32, 0, xer);
	// bne 0x8230f38c
	if (!cr0.eq) goto loc_8230F38C;
loc_8230F464:
	// lwz r11,64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,64(r29)
	PPC_STORE_U32(r29.u32 + 64, r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8230F480"))) PPC_WEAK_FUNC(sub_8230F480);
PPC_FUNC_IMPL(__imp__sub_8230F480) {
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
	// addi r31,r30,48
	r31.s64 = r30.s64 + 48;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8230f528
	if (!cr0.eq) goto loc_8230F528;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8230f528
	if (cr0.eq) goto loc_8230F528;
	// lwz r3,264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 264);
	// bl 0x8230d4a0
	sub_8230D4A0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8230f528
	if (cr0.eq) goto loc_8230F528;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,27088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 27088);
	// lwz r11,204(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8230f4e8
	if (!cr6.eq) goto loc_8230F4E8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8230f138
	sub_8230F138(ctx, base);
loc_8230F4E8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8230f4fc
	goto loc_8230F4FC;
loc_8230F4F4:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8230F4FC:
	// subf r9,r11,r31
	ctx.r9.s64 = r31.s64 - r11.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x8230f4f4
	if (!cr0.eq) goto loc_8230F4F4;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-6464
	r11.s64 = r11.s64 + -6464;
	// lwz r9,392(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 392);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,392(r11)
	PPC_STORE_U32(r11.u32 + 392, ctx.r10.u32);
loc_8230F528:
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

__attribute__((alias("__imp__sub_8230F540"))) PPC_WEAK_FUNC(sub_8230F540);
PPC_FUNC_IMPL(__imp__sub_8230F540) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,6728(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6728);
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
	// beq cr6,0x8230f5c0
	if (cr6.eq) goto loc_8230F5C0;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,6708
	r11.s64 = r11.s64 + 6708;
	// addi r10,r10,6700
	ctx.r10.s64 = ctx.r10.s64 + 6700;
	// addi r3,r30,108
	ctx.r3.s64 = r30.s64 + 108;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,156(r30)
	PPC_STORE_U32(r30.u32 + 156, ctx.r10.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,152
	r11.s64 = r30.s64 + 152;
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
loc_8230F5C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f43f0
	sub_821F43F0(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,6660
	r11.s64 = r11.s64 + 6660;
	// addi r9,r10,6596
	ctx.r9.s64 = ctx.r10.s64 + 6596;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r8,r10,6588
	ctx.r8.s64 = ctx.r10.s64 + 6588;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r10,r30,68
	ctx.r10.s64 = r30.s64 + 68;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r11,-104
	ctx.r9.s64 = r11.s64 + -104;
	// stwx r9,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r9,r11,-148
	ctx.r9.s64 = r11.s64 + -148;
	// stwx r9,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r9.u32);
	// stb r6,56(r30)
	PPC_STORE_U8(r30.u32 + 56, ctx.r6.u8);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
loc_8230F640:
	// stw r29,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, r29.u32);
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r29,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r29.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8230f640
	if (!cr0.eq) goto loc_8230F640;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8230F548"))) PPC_WEAK_FUNC(sub_8230F548);
PPC_FUNC_IMPL(__imp__sub_8230F548) {
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
	// beq cr6,0x8230f5c0
	if (cr6.eq) goto loc_8230F5C0;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,6708
	r11.s64 = r11.s64 + 6708;
	// addi r10,r10,6700
	ctx.r10.s64 = ctx.r10.s64 + 6700;
	// addi r3,r30,108
	ctx.r3.s64 = r30.s64 + 108;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,156(r30)
	PPC_STORE_U32(r30.u32 + 156, ctx.r10.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,152
	r11.s64 = r30.s64 + 152;
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
loc_8230F5C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f43f0
	sub_821F43F0(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,6660
	r11.s64 = r11.s64 + 6660;
	// addi r9,r10,6596
	ctx.r9.s64 = ctx.r10.s64 + 6596;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r8,r10,6588
	ctx.r8.s64 = ctx.r10.s64 + 6588;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r10,r30,68
	ctx.r10.s64 = r30.s64 + 68;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r11,-104
	ctx.r9.s64 = r11.s64 + -104;
	// stwx r9,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r9,r11,-148
	ctx.r9.s64 = r11.s64 + -148;
	// stwx r9,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r9.u32);
	// stb r6,56(r30)
	PPC_STORE_U8(r30.u32 + 56, ctx.r6.u8);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
loc_8230F640:
	// stw r29,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, r29.u32);
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r29,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r29.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8230f640
	if (!cr0.eq) goto loc_8230F640;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8230F664"))) PPC_WEAK_FUNC(sub_8230F664);
PPC_FUNC_IMPL(__imp__sub_8230F664) {
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
	// beq 0x8230f698
	if (cr0.eq) goto loc_8230F698;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,108
	ctx.r3.s64 = r11.s64 + 108;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_8230F698:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F6A8"))) PPC_WEAK_FUNC(sub_8230F6A8);
PPC_FUNC_IMPL(__imp__sub_8230F6A8) {
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
	// bl 0x8230edc0
	sub_8230EDC0(ctx, base);
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

__attribute__((alias("__imp__sub_8230F6D8"))) PPC_WEAK_FUNC(sub_8230F6D8);
PPC_FUNC_IMPL(__imp__sub_8230F6D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// b 0x821f3ac8
	sub_821F3AC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230F6E8"))) PPC_WEAK_FUNC(sub_8230F6E8);
PPC_FUNC_IMPL(__imp__sub_8230F6E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x8230f6a8
	sub_8230F6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230F6F4"))) PPC_WEAK_FUNC(sub_8230F6F4);
PPC_FUNC_IMPL(__imp__sub_8230F6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F6F8"))) PPC_WEAK_FUNC(sub_8230F6F8);
PPC_FUNC_IMPL(__imp__sub_8230F6F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// b 0x821f2bd0
	sub_821F2BD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230F708"))) PPC_WEAK_FUNC(sub_8230F708);
PPC_FUNC_IMPL(__imp__sub_8230F708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// addi r4,r4,-48
	ctx.r4.s64 = ctx.r4.s64 + -48;
	// b 0x821f4818
	sub_821F4818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230F718"))) PPC_WEAK_FUNC(sub_8230F718);
PPC_FUNC_IMPL(__imp__sub_8230F718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// b 0x821f5708
	sub_821F5708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230F728"))) PPC_WEAK_FUNC(sub_8230F728);
PPC_FUNC_IMPL(__imp__sub_8230F728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-68
	ctx.r3.s64 = ctx.r3.s64 + -68;
	// b 0x821b2890
	sub_821B2890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230F738"))) PPC_WEAK_FUNC(sub_8230F738);
PPC_FUNC_IMPL(__imp__sub_8230F738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8230fad0
	sub_8230FAD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230F744"))) PPC_WEAK_FUNC(sub_8230F744);
PPC_FUNC_IMPL(__imp__sub_8230F744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F748"))) PPC_WEAK_FUNC(sub_8230F748);
PPC_FUNC_IMPL(__imp__sub_8230F748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// b 0x821f40e8
	sub_821F40E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230F758"))) PPC_WEAK_FUNC(sub_8230F758);
PPC_FUNC_IMPL(__imp__sub_8230F758) {
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
	// lwz r16,6784(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6784);
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
	// lwz r11,-5320(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5320);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8230f7dc
	if (!cr0.eq) goto loc_8230F7DC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5320(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5320, r11.u32);
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
	// bl 0x8230edc0
	sub_8230EDC0(ctx, base);
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
	// stw r3,-5324(r27)
	PPC_STORE_U32(r27.u32 + -5324, ctx.r3.u32);
	// b 0x8230f7e0
	goto loc_8230F7E0;
loc_8230F7DC:
	// lwz r3,-5324(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -5324);
loc_8230F7E0:
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
	// beq 0x8230f81c
	if (cr0.eq) goto loc_8230F81C;
	// lwz r11,-104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -104);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-104
	ctx.r3.s64 = r11.s64 + -104;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8230f898
	goto loc_8230F898;
loc_8230F81C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8230f87c
	if (!cr0.eq) goto loc_8230F87C;
	// addic. r11,r30,-108
	xer.ca = r30.u32 > 107;
	r11.s64 = r30.s64 + -108;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8230f840
	if (!cr0.eq) goto loc_8230F840;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8230f850
	goto loc_8230F850;
loc_8230F840:
	// lwz r11,-104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -104);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-104
	ctx.r3.s64 = r11.s64 + -104;
loc_8230F850:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -104);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-104
	ctx.r4.s64 = r11.s64 + -104;
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
loc_8230F87C:
	// lwz r11,-104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -104);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-104
	ctx.r3.s64 = r11.s64 + -104;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8230F898:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8230F760"))) PPC_WEAK_FUNC(sub_8230F760);
PPC_FUNC_IMPL(__imp__sub_8230F760) {
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
	// lwz r11,-5320(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5320);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8230f7dc
	if (!cr0.eq) goto loc_8230F7DC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5320(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5320, r11.u32);
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
	// bl 0x8230edc0
	sub_8230EDC0(ctx, base);
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
	// stw r3,-5324(r27)
	PPC_STORE_U32(r27.u32 + -5324, ctx.r3.u32);
	// b 0x8230f7e0
	goto loc_8230F7E0;
loc_8230F7DC:
	// lwz r3,-5324(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -5324);
loc_8230F7E0:
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
	// beq 0x8230f81c
	if (cr0.eq) goto loc_8230F81C;
	// lwz r11,-104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -104);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-104
	ctx.r3.s64 = r11.s64 + -104;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x8230f898
	goto loc_8230F898;
loc_8230F81C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8230f87c
	if (!cr0.eq) goto loc_8230F87C;
	// addic. r11,r30,-108
	xer.ca = r30.u32 > 107;
	r11.s64 = r30.s64 + -108;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8230f840
	if (!cr0.eq) goto loc_8230F840;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8230f850
	goto loc_8230F850;
loc_8230F840:
	// lwz r11,-104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -104);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-104
	ctx.r3.s64 = r11.s64 + -104;
loc_8230F850:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -104);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-104
	ctx.r4.s64 = r11.s64 + -104;
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
loc_8230F87C:
	// lwz r11,-104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -104);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-104
	ctx.r3.s64 = r11.s64 + -104;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8230F898:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8230F8A4"))) PPC_WEAK_FUNC(sub_8230F8A4);
PPC_FUNC_IMPL(__imp__sub_8230F8A4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-5320
	r11.s64 = r11.s64 + -5320;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-5320
	ctx.r10.s64 = ctx.r10.s64 + -5320;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F8CC"))) PPC_WEAK_FUNC(sub_8230F8CC);
PPC_FUNC_IMPL(__imp__sub_8230F8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F8D0"))) PPC_WEAK_FUNC(sub_8230F8D0);
PPC_FUNC_IMPL(__imp__sub_8230F8D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8230f760
	sub_8230F760(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230F8DC"))) PPC_WEAK_FUNC(sub_8230F8DC);
PPC_FUNC_IMPL(__imp__sub_8230F8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F8E0"))) PPC_WEAK_FUNC(sub_8230F8E0);
PPC_FUNC_IMPL(__imp__sub_8230F8E0) {
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
	// lwz r16,6856(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6856);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,6660
	r11.s64 = r11.s64 + 6660;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r10,r10,6596
	ctx.r10.s64 = ctx.r10.s64 + 6596;
	// addi r9,r9,6588
	ctx.r9.s64 = ctx.r9.s64 + 6588;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r11,-108(r30)
	PPC_STORE_U32(r30.u32 + -108, r11.u32);
	// lwz r11,-104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -104);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-104(r11)
	PPC_STORE_U32(r11.u32 + -104, ctx.r10.u32);
	// lwz r11,-104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -104);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,-104(r11)
	PPC_STORE_U32(r11.u32 + -104, ctx.r9.u32);
	// lwz r11,-104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -104);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-104
	ctx.r10.s64 = r11.s64 + -104;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-108(r11)
	PPC_STORE_U32(r11.u32 + -108, ctx.r10.u32);
	// lwz r11,-104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -104);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-148
	ctx.r10.s64 = r11.s64 + -148;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-108(r11)
	PPC_STORE_U32(r11.u32 + -108, ctx.r10.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r29,r30,-40
	r29.s64 = r30.s64 + -40;
	// li r27,3
	r27.s64 = 3;
	// addi r25,r11,-6464
	r25.s64 = r11.s64 + -6464;
	// li r26,0
	r26.s64 = 0;
loc_8230F978:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq 0x8230f994
	if (cr0.eq) goto loc_8230F994;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r25,480
	ctx.r3.s64 = r25.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230F994:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r26,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r26.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq 0x8230f9b4
	if (cr0.eq) goto loc_8230F9B4;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r25,480
	ctx.r3.s64 = r25.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230F9B4:
	// addi r28,r29,12
	r28.s64 = r29.s64 + 12;
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq 0x8230f9d8
	if (cr0.eq) goto loc_8230F9D8;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r25,480
	ctx.r3.s64 = r25.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230F9D8:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x8230f978
	if (!cr0.eq) goto loc_8230F978;
	// addi r3,r30,-48
	ctx.r3.s64 = r30.s64 + -48;
	// bl 0x821f4798
	sub_821F4798(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8230F8E8"))) PPC_WEAK_FUNC(sub_8230F8E8);
PPC_FUNC_IMPL(__imp__sub_8230F8E8) {
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,6660
	r11.s64 = r11.s64 + 6660;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r10,r10,6596
	ctx.r10.s64 = ctx.r10.s64 + 6596;
	// addi r9,r9,6588
	ctx.r9.s64 = ctx.r9.s64 + 6588;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r11,-108(r30)
	PPC_STORE_U32(r30.u32 + -108, r11.u32);
	// lwz r11,-104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -104);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-104(r11)
	PPC_STORE_U32(r11.u32 + -104, ctx.r10.u32);
	// lwz r11,-104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -104);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,-104(r11)
	PPC_STORE_U32(r11.u32 + -104, ctx.r9.u32);
	// lwz r11,-104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -104);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-104
	ctx.r10.s64 = r11.s64 + -104;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-108(r11)
	PPC_STORE_U32(r11.u32 + -108, ctx.r10.u32);
	// lwz r11,-104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -104);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-148
	ctx.r10.s64 = r11.s64 + -148;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-108(r11)
	PPC_STORE_U32(r11.u32 + -108, ctx.r10.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r29,r30,-40
	r29.s64 = r30.s64 + -40;
	// li r27,3
	r27.s64 = 3;
	// addi r25,r11,-6464
	r25.s64 = r11.s64 + -6464;
	// li r26,0
	r26.s64 = 0;
loc_8230F978:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq 0x8230f994
	if (cr0.eq) goto loc_8230F994;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r25,480
	ctx.r3.s64 = r25.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230F994:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r26,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r26.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq 0x8230f9b4
	if (cr0.eq) goto loc_8230F9B4;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r25,480
	ctx.r3.s64 = r25.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230F9B4:
	// addi r28,r29,12
	r28.s64 = r29.s64 + 12;
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq 0x8230f9d8
	if (cr0.eq) goto loc_8230F9D8;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r25,480
	ctx.r3.s64 = r25.s64 + 480;
	// bl 0x82305270
	sub_82305270(ctx, base);
loc_8230F9D8:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x8230f978
	if (!cr0.eq) goto loc_8230F978;
	// addi r3,r30,-48
	ctx.r3.s64 = r30.s64 + -48;
	// bl 0x821f4798
	sub_821F4798(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8230F9F8"))) PPC_WEAK_FUNC(sub_8230F9F8);
PPC_FUNC_IMPL(__imp__sub_8230F9F8) {
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
	// addi r11,r11,-108
	r11.s64 = r11.s64 + -108;
	// addi r3,r11,60
	ctx.r3.s64 = r11.s64 + 60;
	// bl 0x821f4798
	sub_821F4798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230FA28"))) PPC_WEAK_FUNC(sub_8230FA28);
PPC_FUNC_IMPL(__imp__sub_8230FA28) {
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
	// lwz r16,6928(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6928);
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
	// bl 0x821e1660
	sub_821E1660(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,160
	ctx.r3.s64 = 160;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8230fa78
	if (cr0.eq) goto loc_8230FA78;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8230f548
	sub_8230F548(ctx, base);
	// b 0x8230fa7c
	goto loc_8230FA7C;
loc_8230FA78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230FA7C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8230fa94
	if (cr6.eq) goto loc_8230FA94;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_8230FA94:
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

__attribute__((alias("__imp__sub_8230FA30"))) PPC_WEAK_FUNC(sub_8230FA30);
PPC_FUNC_IMPL(__imp__sub_8230FA30) {
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
	// bl 0x821e1660
	sub_821E1660(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,160
	ctx.r3.s64 = 160;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8230fa78
	if (cr0.eq) goto loc_8230FA78;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8230f548
	sub_8230F548(ctx, base);
	// b 0x8230fa7c
	goto loc_8230FA7C;
loc_8230FA78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230FA7C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8230fa94
	if (cr6.eq) goto loc_8230FA94;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_8230FA94:
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

__attribute__((alias("__imp__sub_8230FAA8"))) PPC_WEAK_FUNC(sub_8230FAA8);
PPC_FUNC_IMPL(__imp__sub_8230FAA8) {
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

__attribute__((alias("__imp__sub_8230FAD0"))) PPC_WEAK_FUNC(sub_8230FAD0);
PPC_FUNC_IMPL(__imp__sub_8230FAD0) {
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
	// addi r30,r3,-108
	r30.s64 = ctx.r3.s64 + -108;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,108
	r31.s64 = r30.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8230f8e8
	sub_8230F8E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8230fb08
	if (cr0.eq) goto loc_8230FB08;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_8230FB08:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8230FB14"))) PPC_WEAK_FUNC(sub_8230FB14);
PPC_FUNC_IMPL(__imp__sub_8230FB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230FB18"))) PPC_WEAK_FUNC(sub_8230FB18);
PPC_FUNC_IMPL(__imp__sub_8230FB18) {
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
	// bl 0x8230edc0
	sub_8230EDC0(ctx, base);
	// lis r11,-32207
	r11.s64 = -2110717952;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,-1488
	ctx.r4.s64 = r11.s64 + -1488;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-6464
	ctx.r3.s64 = r11.s64 + -6464;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,28056
	ctx.r3.s64 = r11.s64 + 28056;
	// bl 0x823ca638
	sub_823CA638(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r3,-5336(r11)
	PPC_STORE_U32(r11.u32 + -5336, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230FB6C"))) PPC_WEAK_FUNC(sub_8230FB6C);
PPC_FUNC_IMPL(__imp__sub_8230FB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230FB70"))) PPC_WEAK_FUNC(sub_8230FB70);
PPC_FUNC_IMPL(__imp__sub_8230FB70) {
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
	// lwz r16,6984(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6984);
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
	// lwz r11,-5308(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5308);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-5312
	r30.s64 = ctx.r9.s64 + -5312;
	// bne 0x8230fbbc
	if (!cr0.eq) goto loc_8230FBBC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5308(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5308, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-704
	ctx.r4.s64 = r11.s64 + -704;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8230FBBC:
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

__attribute__((alias("__imp__sub_8230FB78"))) PPC_WEAK_FUNC(sub_8230FB78);
PPC_FUNC_IMPL(__imp__sub_8230FB78) {
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
	// lwz r11,-5308(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5308);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r30,r9,-5312
	r30.s64 = ctx.r9.s64 + -5312;
	// bne 0x8230fbbc
	if (!cr0.eq) goto loc_8230FBBC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5308(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5308, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-704
	ctx.r4.s64 = r11.s64 + -704;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8230FBBC:
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

__attribute__((alias("__imp__sub_8230FBD0"))) PPC_WEAK_FUNC(sub_8230FBD0);
PPC_FUNC_IMPL(__imp__sub_8230FBD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-5308
	r11.s64 = r11.s64 + -5308;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-5308
	ctx.r10.s64 = ctx.r10.s64 + -5308;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230FBF8"))) PPC_WEAK_FUNC(sub_8230FBF8);
PPC_FUNC_IMPL(__imp__sub_8230FBF8) {
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
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r3,-5316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -5316);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8230fc2c
	if (cr6.eq) goto loc_8230FC2C;
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
loc_8230FC2C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-5316(r31)
	PPC_STORE_U32(r31.u32 + -5316, r11.u32);
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

__attribute__((alias("__imp__sub_8230FC48"))) PPC_WEAK_FUNC(sub_8230FC48);
PPC_FUNC_IMPL(__imp__sub_8230FC48) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,268(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r31,r10,-6464
	r31.s64 = ctx.r10.s64 + -6464;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lfs f0,2552(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f31,2480(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2480);
	f31.f64 = double(temp.f32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823c05e0
	sub_823C05E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,63
	ctx.r6.s64 = 63;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c1fd0
	sub_823C1FD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_8230FCEC"))) PPC_WEAK_FUNC(sub_8230FCEC);
PPC_FUNC_IMPL(__imp__sub_8230FCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230FCF0"))) PPC_WEAK_FUNC(sub_8230FCF0);
PPC_FUNC_IMPL(__imp__sub_8230FCF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,-5240(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5240);
	// lfs f30,2552(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2552);
	f30.f64 = double(temp.f32);
	// lfs f31,2480(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2480);
	f31.f64 = double(temp.f32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r31,r9,-5304
	r31.s64 = ctx.r9.s64 + -5304;
	// bne 0x8230fda8
	if (!cr0.eq) goto loc_8230FDA8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r11,-5240(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5240, r11.u32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f30,104(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
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
loc_8230FDA8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x82129420
	sub_82129420(ctx, base);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8226a630
	sub_8226A630(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82305cf0
	sub_82305CF0(ctx, base);
	// lfs f0,212(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 212);
	f0.f64 = double(temp.f32);
	// lfs f13,196(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,216(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f30,f13
	ctx.f13.f64 = double(float(f30.f64 / ctx.f13.f64));
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// stfs f0,140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f0,f12,f13
	f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x823de660
	sub_823DE660(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x823de980
	sub_823DE980(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r31,r11,-5540
	r31.s64 = r11.s64 + -5540;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82306208
	sub_82306208(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82306208
	sub_82306208(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82306208
	sub_82306208(ctx, base);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
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

__attribute__((alias("__imp__sub_8230FEB0"))) PPC_WEAK_FUNC(sub_8230FEB0);
PPC_FUNC_IMPL(__imp__sub_8230FEB0) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f0{};
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	f0.f64 = double(temp.f32);
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lfs f13,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lfs f12,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fneg f9,f30
	ctx.f9.u64 = f30.u64 ^ 0x8000000000000000;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r7.u32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - f0.f64));
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f10,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f8,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f8,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fadds f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fcmpu cr6,f10,f9
	cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bge cr6,0x8230ff6c
	if (!cr6.lt) goto loc_8230FF6C;
loc_8230FF64:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82310348
	goto loc_82310348;
loc_8230FF6C:
	// lfs f31,196(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 196);
	f31.f64 = double(temp.f32);
	// fadds f9,f31,f30
	ctx.f9.f64 = double(float(f31.f64 + f30.f64));
	// fcmpu cr6,f10,f9
	cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bgt cr6,0x8230ff64
	if (cr6.gt) goto loc_8230FF64;
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r26,24(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r24,28(r30)
	r24.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r26,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r26.u32);
	// stw r24,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r24.u32);
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lwz r25,4(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lfs f10,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// lwz r23,8(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r27,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r27.u32);
	// stw r25,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r25.u32);
	// stw r23,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r23.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r11.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// stw r8,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r8.u32);
	// bl 0x8214f728
	sub_8214F728(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f0,212(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 212);
	f0.f64 = double(temp.f32);
	// lfs f13,216(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r28,52(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r27,56(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r26,60(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// stw r3,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r3.u32);
	// stw r28,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r28.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r11.u32);
	// stw r27,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r27.u32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// stw r26,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r26.u32);
	// lwz r25,0(r10)
	r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * f0.f64));
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f0.f64 = double(temp.f32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// stw r25,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r25.u32);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lwz r27,24(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rotlwi r30,r24,0
	r30.u64 = __builtin_rotateleft32(r24.u32, 0);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r5,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r5.u32);
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f10,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// stw r27,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r27.u32);
	// fadds f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stw r30,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r30.u32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f7,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// lwz r28,48(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// fmuls f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * f31.f64));
	// lwz r26,52(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lfs f6,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// lwz r25,56(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// fmuls f6,f6,f31
	ctx.f6.f64 = double(float(ctx.f6.f64 * f31.f64));
	// lwz r31,60(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lfs f5,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f5,f5,f31
	ctx.f5.f64 = double(float(ctx.f5.f64 * f31.f64));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r28.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r26,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r26.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r25,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r25.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r31,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r31.u32);
	// lfs f4,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// fadds f7,f4,f7
	ctx.f7.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// lfs f4,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// fadds f6,f4,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// fadds f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r31,0(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r30,4(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r29,8(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r31.u32);
	// fadds f7,f7,f9
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// stw r30,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r30.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r29,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r29.u32);
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// fadds f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// stfs f7,128(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f9,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r3,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r3.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lwz r8,12(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// fsubs f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f7,f0
	f0.f64 = double(float(ctx.f7.f64 - f0.f64));
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// fsubs f6,f13,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r8,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r8.u32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// fmuls f10,f12,f12
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lwz r31,8(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stw r31,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r31.u32);
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// lfs f7,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f10,f13,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f12,f6,f13,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,2552(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// stw r4,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r4.u32);
	// fmadds f10,f0,f0,f10
	ctx.f10.f64 = double(float(f0.f64 * f0.f64 + ctx.f10.f64));
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r11.u32);
	// fmadds f12,f9,f0,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * f0.f64 + ctx.f12.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fdivs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// lfs f10,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fsubs f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfs f7,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// lfs f7,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 - f0.f64));
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmadds f13,f8,f10,f7
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmadds f11,f0,f11,f13
	ctx.f11.f64 = double(float(f0.f64 * ctx.f11.f64 + ctx.f13.f64));
	// lfs f13,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x82310324
	if (!cr6.lt) goto loc_82310324;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82310348
	goto loc_82310348;
loc_82310324:
	// fmuls f13,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// li r11,1
	r11.s64 = 1;
	// fmadds f13,f10,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f13.f64));
	// fsqrts f0,f0
	f0.f64 = double(float(sqrt(f0.f64)));
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// blt cr6,0x82310344
	if (cr6.lt) goto loc_82310344;
	// li r11,0
	r11.s64 = 0;
loc_82310344:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
loc_82310348:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82310358"))) PPC_WEAK_FUNC(sub_82310358);
PPC_FUNC_IMPL(__imp__sub_82310358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r3,180
	r11.s64 = ctx.r3.s64 + 180;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82310380"))) PPC_WEAK_FUNC(sub_82310380);
PPC_FUNC_IMPL(__imp__sub_82310380) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82301b70
	sub_82301B70(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r11,27396
	r31.s64 = r11.s64 + 27396;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r30,r11,920
	r30.s64 = r11.s64 + 920;
	// bl 0x823173f0
	sub_823173F0(ctx, base);
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

__attribute__((alias("__imp__sub_823103E0"))) PPC_WEAK_FUNC(sub_823103E0);
PPC_FUNC_IMPL(__imp__sub_823103E0) {
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
	// beq 0x82310420
	if (cr0.eq) goto loc_82310420;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,28172
	ctx.r3.s64 = r11.s64 + 28172;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82310428
	goto loc_82310428;
loc_82310420:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82310428:
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

__attribute__((alias("__imp__sub_82310444"))) PPC_WEAK_FUNC(sub_82310444);
PPC_FUNC_IMPL(__imp__sub_82310444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310448"))) PPC_WEAK_FUNC(sub_82310448);
PPC_FUNC_IMPL(__imp__sub_82310448) {
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
	// bl 0x82270c08
	sub_82270C08(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8231047c
	if (!cr6.eq) goto loc_8231047C;
	// lwz r11,240(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x82310480
	if (cr0.eq) goto loc_82310480;
loc_8231047C:
	// li r11,0
	r11.s64 = 0;
loc_82310480:
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

__attribute__((alias("__imp__sub_82310498"))) PPC_WEAK_FUNC(sub_82310498);
PPC_FUNC_IMPL(__imp__sub_82310498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// li r31,-2
	r31.s64 = -2;
	// addi r27,r11,7032
	r27.s64 = r11.s64 + 7032;
	// li r30,5
	r30.s64 = 5;
	// lwz r11,268(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 268);
	// lwa r9,80(r11)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 80));
	// lwa r10,76(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 76));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r29,r11,-5540
	r29.s64 = r11.s64 + -5540;
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// li r11,5
	r11.s64 = 5;
	// stw r11,36(r29)
	PPC_STORE_U32(r29.u32 + 36, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// lfs f12,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fdivs f29,f12,f0
	f29.f64 = double(float(ctx.f12.f64 / f0.f64));
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fdivs f28,f12,f13
	f28.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
loc_8231052C:
	// extsw r11,r31
	r11.s64 = r31.s32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,33
	ctx.r4.s64 = r31.s64 + 33;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(f0.f64 * f29.f64));
	// fmuls f0,f0,f28
	f0.f64 = double(float(f0.f64 * f28.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x823065a8
	sub_823065A8(ctx, base);
	// addi r4,r31,49
	ctx.r4.s64 = r31.s64 + 49;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823063c8
	sub_823063C8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bne 0x8231052c
	if (!cr0.eq) goto loc_8231052C;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,-6464
	r30.s64 = r11.s64 + -6464;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r27,1
	r27.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1024);
	// rlwimi r10,r27,11,19,21
	ctx.r10.u64 = (__builtin_rotateleft32(r27.u32, 11) & 0x1C00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,1024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1024);
	// rlwimi r10,r27,14,16,18
	ctx.r10.u64 = (__builtin_rotateleft32(r27.u32, 14) & 0xE000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823bf2f0
	sub_823BF2F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823bf478
	sub_823BF478(ctx, base);
	// lwz r3,268(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 268);
	// bl 0x82308f60
	sub_82308F60(ctx, base);
	// lwz r31,24(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r4,268(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 268);
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// bl 0x821c55d0
	sub_821C55D0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r27,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r11.u32);
	// bl 0x82300f20
	sub_82300F20(ctx, base);
	// lwz r3,268(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 268);
	// bl 0x82309fb8
	sub_82309FB8(ctx, base);
	// stw r27,36(r29)
	PPC_STORE_U32(r29.u32 + 36, r27.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8239d634
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82310670"))) PPC_WEAK_FUNC(sub_82310670);
PPC_FUNC_IMPL(__imp__sub_82310670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82310448
	sub_82310448(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// lwz r28,11556(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 11556);
	// bl 0x82308f60
	sub_82308F60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8230fc48
	sub_8230FC48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8230fcf0
	sub_8230FCF0(ctx, base);
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r29,4(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// b 0x823106d4
	goto loc_823106D4;
loc_823106BC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
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
loc_823106D4:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x823106bc
	if (!cr6.eq) goto loc_823106BC;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82309fb8
	sub_82309FB8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfs f30,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82310498
	sub_82310498(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82310498
	sub_82310498(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82310728
	if (cr6.eq) goto loc_82310728;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x82310738
	goto loc_82310738;
loc_82310728:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,27088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 27088);
	// lwz r3,160(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 160);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82310738:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82310754"))) PPC_WEAK_FUNC(sub_82310754);
PPC_FUNC_IMPL(__imp__sub_82310754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310758"))) PPC_WEAK_FUNC(sub_82310758);
PPC_FUNC_IMPL(__imp__sub_82310758) {
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
	// blt cr6,0x823107a0
	if (cr6.lt) goto loc_823107A0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_823107A0:
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
	// bl 0x823103e0
	sub_823103E0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x823107d8
	if (cr0.eq) goto loc_823107D8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_823107D8:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x823107f8
	if (cr6.eq) goto loc_823107F8;
loc_823107E4:
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
	// bne 0x823107e4
	if (!cr0.eq) goto loc_823107E4;
loc_823107F8:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x82310820
	if (!cr0.eq) goto loc_82310820;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82310820
	if (cr0.eq) goto loc_82310820;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_82310820:
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

__attribute__((alias("__imp__sub_82310854"))) PPC_WEAK_FUNC(sub_82310854);
PPC_FUNC_IMPL(__imp__sub_82310854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310858"))) PPC_WEAK_FUNC(sub_82310858);
PPC_FUNC_IMPL(__imp__sub_82310858) {
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
	// lwz r16,7192(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 7192);
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
	// beq cr6,0x823108d8
	if (cr6.eq) goto loc_823108D8;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,7172
	r11.s64 = r11.s64 + 7172;
	// addi r10,r10,7164
	ctx.r10.s64 = ctx.r10.s64 + 7164;
	// addi r3,r30,284
	ctx.r3.s64 = r30.s64 + 284;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,332(r30)
	PPC_STORE_U32(r30.u32 + 332, ctx.r10.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,328
	r11.s64 = r30.s64 + 328;
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
loc_823108D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8220bf00
	sub_8220BF00(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,3532
	r11.s64 = r11.s64 + 3532;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r10,r10,7148
	ctx.r10.s64 = ctx.r10.s64 + 7148;
	// addi r9,r9,7132
	ctx.r9.s64 = ctx.r9.s64 + 7132;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stw r11,264(r30)
	PPC_STORE_U32(r30.u32 + 264, r11.u32);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r8,7068
	ctx.r8.s64 = ctx.r8.s64 + 7068;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r7,r7,7056
	ctx.r7.s64 = ctx.r7.s64 + 7056;
	// stw r9,264(r30)
	PPC_STORE_U32(r30.u32 + 264, ctx.r9.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-280
	ctx.r10.s64 = r11.s64 + -280;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-324
	ctx.r10.s64 = r11.s64 + -324;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r29,268(r30)
	PPC_STORE_U32(r30.u32 + 268, r29.u32);
	// stw r29,272(r30)
	PPC_STORE_U32(r30.u32 + 272, r29.u32);
	// stw r6,276(r30)
	PPC_STORE_U32(r30.u32 + 276, ctx.r6.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82310860"))) PPC_WEAK_FUNC(sub_82310860);
PPC_FUNC_IMPL(__imp__sub_82310860) {
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
	// beq cr6,0x823108d8
	if (cr6.eq) goto loc_823108D8;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,7172
	r11.s64 = r11.s64 + 7172;
	// addi r10,r10,7164
	ctx.r10.s64 = ctx.r10.s64 + 7164;
	// addi r3,r30,284
	ctx.r3.s64 = r30.s64 + 284;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,332(r30)
	PPC_STORE_U32(r30.u32 + 332, ctx.r10.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,328
	r11.s64 = r30.s64 + 328;
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
loc_823108D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8220bf00
	sub_8220BF00(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,3532
	r11.s64 = r11.s64 + 3532;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r10,r10,7148
	ctx.r10.s64 = ctx.r10.s64 + 7148;
	// addi r9,r9,7132
	ctx.r9.s64 = ctx.r9.s64 + 7132;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stw r11,264(r30)
	PPC_STORE_U32(r30.u32 + 264, r11.u32);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r8,7068
	ctx.r8.s64 = ctx.r8.s64 + 7068;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r7,r7,7056
	ctx.r7.s64 = ctx.r7.s64 + 7056;
	// stw r9,264(r30)
	PPC_STORE_U32(r30.u32 + 264, ctx.r9.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-280
	ctx.r10.s64 = r11.s64 + -280;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-324
	ctx.r10.s64 = r11.s64 + -324;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r29,268(r30)
	PPC_STORE_U32(r30.u32 + 268, r29.u32);
	// stw r29,272(r30)
	PPC_STORE_U32(r30.u32 + 272, r29.u32);
	// stw r6,276(r30)
	PPC_STORE_U32(r30.u32 + 276, ctx.r6.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82310974"))) PPC_WEAK_FUNC(sub_82310974);
PPC_FUNC_IMPL(__imp__sub_82310974) {
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
	// beq 0x823109a8
	if (cr0.eq) goto loc_823109A8;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,284
	ctx.r3.s64 = r11.s64 + 284;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_823109A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823109B8"))) PPC_WEAK_FUNC(sub_823109B8);
PPC_FUNC_IMPL(__imp__sub_823109B8) {
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
	// bl 0x8230fb78
	sub_8230FB78(ctx, base);
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

__attribute__((alias("__imp__sub_823109E8"))) PPC_WEAK_FUNC(sub_823109E8);
PPC_FUNC_IMPL(__imp__sub_823109E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82311078
	sub_82311078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823109F4"))) PPC_WEAK_FUNC(sub_823109F4);
PPC_FUNC_IMPL(__imp__sub_823109F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823109F8"))) PPC_WEAK_FUNC(sub_823109F8);
PPC_FUNC_IMPL(__imp__sub_823109F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x8220baf0
	sub_8220BAF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82310A08"))) PPC_WEAK_FUNC(sub_82310A08);
PPC_FUNC_IMPL(__imp__sub_82310A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x823109b8
	sub_823109B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82310A14"))) PPC_WEAK_FUNC(sub_82310A14);
PPC_FUNC_IMPL(__imp__sub_82310A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310A18"))) PPC_WEAK_FUNC(sub_82310A18);
PPC_FUNC_IMPL(__imp__sub_82310A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x8220c888
	sub_8220C888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82310A28"))) PPC_WEAK_FUNC(sub_82310A28);
PPC_FUNC_IMPL(__imp__sub_82310A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-100
	ctx.r3.s64 = ctx.r3.s64 + -100;
	// b 0x821afb18
	sub_821AFB18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82310A38"))) PPC_WEAK_FUNC(sub_82310A38);
PPC_FUNC_IMPL(__imp__sub_82310A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// addi r4,r4,-16
	ctx.r4.s64 = ctx.r4.s64 + -16;
	// b 0x8220b850
	sub_8220B850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82310A48"))) PPC_WEAK_FUNC(sub_82310A48);
PPC_FUNC_IMPL(__imp__sub_82310A48) {
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
	// lwz r16,7248(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 7248);
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
	// lwz r11,-5232(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5232);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82310acc
	if (!cr0.eq) goto loc_82310ACC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5232(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5232, r11.u32);
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
	// bl 0x8230fb78
	sub_8230FB78(ctx, base);
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
	// stw r3,-5236(r27)
	PPC_STORE_U32(r27.u32 + -5236, ctx.r3.u32);
	// b 0x82310ad0
	goto loc_82310AD0;
loc_82310ACC:
	// lwz r3,-5236(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -5236);
loc_82310AD0:
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
	// beq 0x82310b0c
	if (cr0.eq) goto loc_82310B0C;
	// lwz r11,-280(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -280);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-280
	ctx.r3.s64 = r11.s64 + -280;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x82310b88
	goto loc_82310B88;
loc_82310B0C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82310b6c
	if (!cr0.eq) goto loc_82310B6C;
	// addic. r11,r30,-284
	xer.ca = r30.u32 > 283;
	r11.s64 = r30.s64 + -284;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82310b30
	if (!cr0.eq) goto loc_82310B30;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82310b40
	goto loc_82310B40;
loc_82310B30:
	// lwz r11,-280(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -280);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-280
	ctx.r3.s64 = r11.s64 + -280;
loc_82310B40:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-280(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -280);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-280
	ctx.r4.s64 = r11.s64 + -280;
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
loc_82310B6C:
	// lwz r11,-280(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -280);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-280
	ctx.r3.s64 = r11.s64 + -280;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82310B88:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82310A50"))) PPC_WEAK_FUNC(sub_82310A50);
PPC_FUNC_IMPL(__imp__sub_82310A50) {
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
	// lwz r11,-5232(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5232);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82310acc
	if (!cr0.eq) goto loc_82310ACC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-5232(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5232, r11.u32);
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
	// bl 0x8230fb78
	sub_8230FB78(ctx, base);
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
	// stw r3,-5236(r27)
	PPC_STORE_U32(r27.u32 + -5236, ctx.r3.u32);
	// b 0x82310ad0
	goto loc_82310AD0;
loc_82310ACC:
	// lwz r3,-5236(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -5236);
loc_82310AD0:
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
	// beq 0x82310b0c
	if (cr0.eq) goto loc_82310B0C;
	// lwz r11,-280(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -280);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-280
	ctx.r3.s64 = r11.s64 + -280;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x82310b88
	goto loc_82310B88;
loc_82310B0C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82310b6c
	if (!cr0.eq) goto loc_82310B6C;
	// addic. r11,r30,-284
	xer.ca = r30.u32 > 283;
	r11.s64 = r30.s64 + -284;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82310b30
	if (!cr0.eq) goto loc_82310B30;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82310b40
	goto loc_82310B40;
loc_82310B30:
	// lwz r11,-280(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -280);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-280
	ctx.r3.s64 = r11.s64 + -280;
loc_82310B40:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-280(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -280);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-280
	ctx.r4.s64 = r11.s64 + -280;
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
loc_82310B6C:
	// lwz r11,-280(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -280);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-280
	ctx.r3.s64 = r11.s64 + -280;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82310B88:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82310B94"))) PPC_WEAK_FUNC(sub_82310B94);
PPC_FUNC_IMPL(__imp__sub_82310B94) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-5232
	r11.s64 = r11.s64 + -5232;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-5232
	ctx.r10.s64 = ctx.r10.s64 + -5232;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82310BBC"))) PPC_WEAK_FUNC(sub_82310BBC);
PPC_FUNC_IMPL(__imp__sub_82310BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310BC0"))) PPC_WEAK_FUNC(sub_82310BC0);
PPC_FUNC_IMPL(__imp__sub_82310BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82310a50
	sub_82310A50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82310BCC"))) PPC_WEAK_FUNC(sub_82310BCC);
PPC_FUNC_IMPL(__imp__sub_82310BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310BD0"))) PPC_WEAK_FUNC(sub_82310BD0);
PPC_FUNC_IMPL(__imp__sub_82310BD0) {
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
	// beq cr6,0x82310c10
	if (cr6.eq) goto loc_82310C10;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82310c00
	if (cr0.eq) goto loc_82310C00;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82310C00:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x82310c24
	goto loc_82310C24;
loc_82310C10:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82310758
	sub_82310758(ctx, base);
loc_82310C24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82310C34"))) PPC_WEAK_FUNC(sub_82310C34);
PPC_FUNC_IMPL(__imp__sub_82310C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310C38"))) PPC_WEAK_FUNC(sub_82310C38);
PPC_FUNC_IMPL(__imp__sub_82310C38) {
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
	// lwz r16,7320(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 7320);
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
	// bl 0x821e1220
	sub_821E1220(ctx, base);
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
	// beq 0x82310c88
	if (cr0.eq) goto loc_82310C88;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82310860
	sub_82310860(ctx, base);
	// b 0x82310c8c
	goto loc_82310C8C;
loc_82310C88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82310C8C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82310ca4
	if (cr6.eq) goto loc_82310CA4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82310CA4:
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

__attribute__((alias("__imp__sub_82310C40"))) PPC_WEAK_FUNC(sub_82310C40);
PPC_FUNC_IMPL(__imp__sub_82310C40) {
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
	// bl 0x821e1220
	sub_821E1220(ctx, base);
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
	// beq 0x82310c88
	if (cr0.eq) goto loc_82310C88;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82310860
	sub_82310860(ctx, base);
	// b 0x82310c8c
	goto loc_82310C8C;
loc_82310C88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82310C8C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82310ca4
	if (cr6.eq) goto loc_82310CA4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82310CA4:
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

__attribute__((alias("__imp__sub_82310CB8"))) PPC_WEAK_FUNC(sub_82310CB8);
PPC_FUNC_IMPL(__imp__sub_82310CB8) {
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

__attribute__((alias("__imp__sub_82310CE0"))) PPC_WEAK_FUNC(sub_82310CE0);
PPC_FUNC_IMPL(__imp__sub_82310CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r10,7148
	ctx.r10.s64 = ctx.r10.s64 + 7148;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r9,r9,7132
	ctx.r9.s64 = ctx.r9.s64 + 7132;
	// addi r8,r8,7068
	ctx.r8.s64 = ctx.r8.s64 + 7068;
	// stw r10,-284(r11)
	PPC_STORE_U32(r11.u32 + -284, ctx.r10.u32);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lwz r10,-280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -280);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// addi r7,r7,7056
	ctx.r7.s64 = ctx.r7.s64 + 7056;
	// stw r9,-20(r11)
	PPC_STORE_U32(r11.u32 + -20, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r8,-280(r10)
	PPC_STORE_U32(ctx.r10.u32 + -280, ctx.r8.u32);
	// lwz r10,-280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -280);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r7,-280(r10)
	PPC_STORE_U32(ctx.r10.u32 + -280, ctx.r7.u32);
	// lwz r10,-280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -280);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r10,-280
	ctx.r9.s64 = ctx.r10.s64 + -280;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,-284(r10)
	PPC_STORE_U32(ctx.r10.u32 + -284, ctx.r9.u32);
	// lwz r10,-280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -280);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r10,-324
	ctx.r9.s64 = ctx.r10.s64 + -324;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,-284(r11)
	PPC_STORE_U32(r11.u32 + -284, ctx.r9.u32);
	// b 0x8220c330
	sub_8220C330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82310D5C"))) PPC_WEAK_FUNC(sub_82310D5C);
PPC_FUNC_IMPL(__imp__sub_82310D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310D60"))) PPC_WEAK_FUNC(sub_82310D60);
PPC_FUNC_IMPL(__imp__sub_82310D60) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,27088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 27088);
	// lbz r10,198(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 198);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82310e48
	if (cr0.eq) goto loc_82310E48;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwz r10,276(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 276);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82310e48
	if (cr6.eq) goto loc_82310E48;
	// lwz r31,244(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 244);
	// cntlzw r11,r31
	r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82310e24
	if (cr0.eq) goto loc_82310E24;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
loc_82310DBC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82310e00
	if (cr0.eq) goto loc_82310E00;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8230feb0
	sub_8230FEB0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82310e0c
	if (cr0.eq) goto loc_82310E0C;
loc_82310E00:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82310bd0
	sub_82310BD0(ctx, base);
loc_82310E0C:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cntlzw r11,r31
	r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82310dbc
	if (!cr0.eq) goto loc_82310DBC;
loc_82310E24:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// b 0x82310e4c
	goto loc_82310E4C;
loc_82310E48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82310E4C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82310E58"))) PPC_WEAK_FUNC(sub_82310E58);
PPC_FUNC_IMPL(__imp__sub_82310E58) {
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
	// lwz r16,7432(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 7432);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,200(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 200);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82310f68
	if (!cr6.eq) goto loc_82310F68;
	// bl 0x82310448
	sub_82310448(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82310f24
	if (cr0.eq) goto loc_82310F24;
	// lwz r11,268(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 268);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82310eb8
	if (!cr6.eq) goto loc_82310EB8;
	// bl 0x82310380
	sub_82310380(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r3,268(r29)
	PPC_STORE_U32(r29.u32 + 268, ctx.r3.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x821d5e30
	sub_821D5E30(ctx, base);
loc_82310EB8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82310d60
	sub_82310D60(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82310ef8
	if (cr0.eq) goto loc_82310EF8;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,27088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 27088);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// stw r11,276(r29)
	PPC_STORE_U32(r29.u32 + 276, r11.u32);
	// bl 0x82310670
	sub_82310670(ctx, base);
loc_82310EF8:
	// lwz r11,268(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 268);
	// stw r11,272(r29)
	PPC_STORE_U32(r29.u32 + 272, r11.u32);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82310f90
	if (cr6.eq) goto loc_82310F90;
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
	// b 0x82310f90
	goto loc_82310F90;
loc_82310F24:
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-5316(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -5316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82310f8c
	if (!cr6.eq) goto loc_82310F8C;
	// bl 0x82310380
	sub_82310380(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// stw r3,-5316(r30)
	PPC_STORE_U32(r30.u32 + -5316, ctx.r3.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,7368
	ctx.r4.s64 = r11.s64 + 7368;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r3,-5316(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -5316);
	// bl 0x821d6268
	sub_821D6268(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r11,-5316(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -5316);
	// b 0x82310f8c
	goto loc_82310F8C;
loc_82310F68:
	// lwz r3,272(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 272);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82310f88
	if (cr0.eq) goto loc_82310F88;
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
loc_82310F88:
	// li r11,0
	r11.s64 = 0;
loc_82310F8C:
	// stw r11,272(r29)
	PPC_STORE_U32(r29.u32 + 272, r11.u32);
loc_82310F90:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82310E60"))) PPC_WEAK_FUNC(sub_82310E60);
PPC_FUNC_IMPL(__imp__sub_82310E60) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,200(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 200);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82310f68
	if (!cr6.eq) goto loc_82310F68;
	// bl 0x82310448
	sub_82310448(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82310f24
	if (cr0.eq) goto loc_82310F24;
	// lwz r11,268(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 268);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82310eb8
	if (!cr6.eq) goto loc_82310EB8;
	// bl 0x82310380
	sub_82310380(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r3,268(r29)
	PPC_STORE_U32(r29.u32 + 268, ctx.r3.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x821d5e30
	sub_821D5E30(ctx, base);
loc_82310EB8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82310d60
	sub_82310D60(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82310ef8
	if (cr0.eq) goto loc_82310EF8;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,27088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 27088);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// stw r11,276(r29)
	PPC_STORE_U32(r29.u32 + 276, r11.u32);
	// bl 0x82310670
	sub_82310670(ctx, base);
loc_82310EF8:
	// lwz r11,268(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 268);
	// stw r11,272(r29)
	PPC_STORE_U32(r29.u32 + 272, r11.u32);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82310f90
	if (cr6.eq) goto loc_82310F90;
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
	// b 0x82310f90
	goto loc_82310F90;
loc_82310F24:
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,-5316(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -5316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82310f8c
	if (!cr6.eq) goto loc_82310F8C;
	// bl 0x82310380
	sub_82310380(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// stw r3,-5316(r30)
	PPC_STORE_U32(r30.u32 + -5316, ctx.r3.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,7368
	ctx.r4.s64 = r11.s64 + 7368;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r3,-5316(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -5316);
	// bl 0x821d6268
	sub_821D6268(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r11,-5316(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -5316);
	// b 0x82310f8c
	goto loc_82310F8C;
loc_82310F68:
	// lwz r3,272(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 272);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82310f88
	if (cr0.eq) goto loc_82310F88;
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
loc_82310F88:
	// li r11,0
	r11.s64 = 0;
loc_82310F8C:
	// stw r11,272(r29)
	PPC_STORE_U32(r29.u32 + 272, r11.u32);
loc_82310F90:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82310F98"))) PPC_WEAK_FUNC(sub_82310F98);
PPC_FUNC_IMPL(__imp__sub_82310F98) {
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

__attribute__((alias("__imp__sub_82310FC0"))) PPC_WEAK_FUNC(sub_82310FC0);
PPC_FUNC_IMPL(__imp__sub_82310FC0) {
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

__attribute__((alias("__imp__sub_82310FE8"))) PPC_WEAK_FUNC(sub_82310FE8);
PPC_FUNC_IMPL(__imp__sub_82310FE8) {
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
	// addi r3,r31,-16
	ctx.r3.s64 = r31.s64 + -16;
	// bl 0x8220c6e0
	sub_8220C6E0(ctx, base);
	// addi r3,r31,-284
	ctx.r3.s64 = r31.s64 + -284;
	// bl 0x82310e60
	sub_82310E60(ctx, base);
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

__attribute__((alias("__imp__sub_82311020"))) PPC_WEAK_FUNC(sub_82311020);
PPC_FUNC_IMPL(__imp__sub_82311020) {
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
	// addi r3,r31,-16
	ctx.r3.s64 = r31.s64 + -16;
	// bl 0x8220c3e8
	sub_8220C3E8(ctx, base);
	// addi r3,r31,-284
	ctx.r3.s64 = r31.s64 + -284;
	// bl 0x82310e60
	sub_82310E60(ctx, base);
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

__attribute__((alias("__imp__sub_82311058"))) PPC_WEAK_FUNC(sub_82311058);
PPC_FUNC_IMPL(__imp__sub_82311058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82310fe8
	sub_82310FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82311064"))) PPC_WEAK_FUNC(sub_82311064);
PPC_FUNC_IMPL(__imp__sub_82311064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311068"))) PPC_WEAK_FUNC(sub_82311068);
PPC_FUNC_IMPL(__imp__sub_82311068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82311020
	sub_82311020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82311074"))) PPC_WEAK_FUNC(sub_82311074);
PPC_FUNC_IMPL(__imp__sub_82311074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311078"))) PPC_WEAK_FUNC(sub_82311078);
PPC_FUNC_IMPL(__imp__sub_82311078) {
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
	// addi r30,r3,-284
	r30.s64 = ctx.r3.s64 + -284;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,284
	r31.s64 = r30.s64 + 284;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82310ce0
	sub_82310CE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823110b0
	if (cr0.eq) goto loc_823110B0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_823110B0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823110BC"))) PPC_WEAK_FUNC(sub_823110BC);
PPC_FUNC_IMPL(__imp__sub_823110BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823110C0"))) PPC_WEAK_FUNC(sub_823110C0);
PPC_FUNC_IMPL(__imp__sub_823110C0) {
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
	// bl 0x8230fb78
	sub_8230FB78(ctx, base);
	// lis r11,-32207
	r11.s64 = -2110717952;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,3136
	ctx.r4.s64 = r11.s64 + 3136;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823110F4"))) PPC_WEAK_FUNC(sub_823110F4);
PPC_FUNC_IMPL(__imp__sub_823110F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823110F8"))) PPC_WEAK_FUNC(sub_823110F8);
PPC_FUNC_IMPL(__imp__sub_823110F8) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,-6464
	ctx.r3.s64 = r11.s64 + -6464;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r3,r31,r30
	ctx.r3.s64 = int64_t(r31.s32) * int64_t(r30.s32);
	// bl 0x823c3c68
	sub_823C3C68(ctx, base);
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

__attribute__((alias("__imp__sub_82311148"))) PPC_WEAK_FUNC(sub_82311148);
PPC_FUNC_IMPL(__imp__sub_82311148) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,-6464
	ctx.r3.s64 = r11.s64 + -6464;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mullw r3,r31,r30
	ctx.r3.s64 = int64_t(r31.s32) * int64_t(r30.s32);
	// bl 0x823c3d90
	sub_823C3D90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82311188"))) PPC_WEAK_FUNC(sub_82311188);
PPC_FUNC_IMPL(__imp__sub_82311188) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// beq cr6,0x8231125c
	if (cr6.eq) goto loc_8231125C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8231125c
	if (!cr0.eq) goto loc_8231125C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823111f4
	if (cr0.eq) goto loc_823111F4;
	// li r3,38
	ctx.r3.s64 = 38;
	// b 0x82311260
	goto loc_82311260;
loc_823111F4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// rotlwi r4,r29,0
	ctx.r4.u64 = __builtin_rotateleft32(r29.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// andi. r3,r11,1006
	ctx.r3.u64 = r11.u64 & 1006;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// b 0x82311260
	goto loc_82311260;
loc_8231125C:
	// li r3,1006
	ctx.r3.s64 = 1006;
loc_82311260:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82311268"))) PPC_WEAK_FUNC(sub_82311268);
PPC_FUNC_IMPL(__imp__sub_82311268) {
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
	// addi r30,r11,-6464
	r30.s64 = r11.s64 + -6464;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,-5228
	r31.s64 = r11.s64 + -5228;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x823c0d58
	sub_823C0D58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x823c0a80
	sub_823C0A80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x823bf2d0
	sub_823BF2D0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823112d8
	if (cr6.eq) goto loc_823112D8;
	// bl 0x823c3be8
	sub_823C3BE8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_823112D8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823112f0
	if (cr6.eq) goto loc_823112F0;
	// bl 0x823c3be8
	sub_823C3BE8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_823112F0:
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

__attribute__((alias("__imp__sub_82311308"))) PPC_WEAK_FUNC(sub_82311308);
PPC_FUNC_IMPL(__imp__sub_82311308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,7520(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 7520);
	// mflr r12
	// bl 0x8239bcd8
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// addi r31,r1,-368
	r31.s64 = ctx.r1.s64 + -368;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r30,r11,-6464
	r30.s64 = r11.s64 + -6464;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82275c18
	sub_82275C18(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82276480
	sub_82276480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// bl 0x82275cc0
	sub_82275CC0(ctx, base);
	// li r25,0
	r25.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r21,r25
	r21.u64 = r25.u64;
	// bl 0x82302880
	sub_82302880(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c0058
	sub_823C0058(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r28,r11,-5228
	r28.s64 = r11.s64 + -5228;
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// bl 0x823c00a0
	sub_823C00A0(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// bl 0x823bf2e0
	sub_823BF2E0(ctx, base);
	// stw r3,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,596(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 596);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823c0d58
	sub_823C0D58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823c0a80
	sub_823C0A80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823bf2d0
	sub_823BF2D0(ctx, base);
	// addi r10,r31,176
	ctx.r10.s64 = r31.s64 + 176;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// li r11,9
	r11.s64 = 9;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_823113F0:
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x823113f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823113F0;
	// bl 0x82270ce8
	sub_82270CE8(ctx, base);
	// li r20,1
	r20.s64 = 1;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r22,r11,-5216
	r22.s64 = r11.s64 + -5216;
	// beq 0x82311424
	if (cr0.eq) goto loc_82311424;
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// stw r20,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r20.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r11.u32);
	// b 0x82311474
	goto loc_82311474;
loc_82311424:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x822767f8
	sub_822767F8(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// beq 0x82311468
	if (cr0.eq) goto loc_82311468;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// stw r21,216(r31)
	PPC_STORE_U32(r31.u32 + 216, r21.u32);
	// lis r11,-32207
	r11.s64 = -2110717952;
	// stw r21,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r21.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r10,4488
	ctx.r10.s64 = ctx.r10.s64 + 4488;
	// addi r11,r11,4488
	r11.s64 = r11.s64 + 4488;
	// stw r9,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r9.u32);
	// stw r9,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r9.u32);
	// stw r10,208(r31)
	PPC_STORE_U32(r31.u32 + 208, ctx.r10.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r11.u32);
loc_82311468:
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82311488
	if (cr6.eq) goto loc_82311488;
loc_82311474:
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825983e8
	sub_825983E8(ctx, base);
	// b 0x82311490
	goto loc_82311490;
loc_82311488:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82311490:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x823114e4
	if (!cr6.lt) goto loc_823114E4;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x823114b8
	if (cr6.eq) goto loc_823114B8;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823114B8:
	// bl 0x82311268
	sub_82311268(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82302830
	sub_82302830(ctx, base);
	// mr r30,r25
	r30.u64 = r25.u64;
loc_823114C8:
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,368
	ctx.r1.s64 = r31.s64 + 368;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8239bd28
	return;
loc_823114E4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r27,r25
	r27.u64 = r25.u64;
	// lfs f0,17324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * f0.f64));
	// mftb r11
	r11.u64 = __rdtsc();
	// rotlwi r26,r11,0
	r26.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r23,-32136
	r23.s64 = -2106064896;
	// lis r24,-32136
	r24.s64 = -2106064896;
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
loc_8231150C:
	// bl 0x8227b360
	sub_8227B360(ctx, base);
	// mr r28,r25
	r28.u64 = r25.u64;
loc_82311514:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8227bc58
	sub_8227BC58(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82311594
	if (cr0.eq) goto loc_82311594;
	// mftb r11
	r11.u64 = __rdtsc();
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lfs f0,18804(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r23.u32 + 18804);
	f0.f64 = double(temp.f32);
	// subf r10,r26,r11
	ctx.r10.s64 = r11.s64 - r26.s64;
	// mr r26,r11
	r26.u64 = r11.u64;
	// clrldi r11,r10,32
	r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r27,r11,r27
	r27.u64 = r11.u64 + r27.u64;
	// clrldi r11,r27,32
	r11.u64 = r27.u64 & 0xFFFFFFFF;
	// sradi r10,r27,32
	xer.ca = (r27.s64 < 0) & ((r27.u64 & 0xFFFFFFFF) != 0);
	ctx.r10.s64 = r27.s64 >> 32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,120(r31)
	PPC_STORE_U64(r31.u32 + 120, r11.u64);
	// std r10,128(r31)
	PPC_STORE_U64(r31.u32 + 128, ctx.r10.u64);
	// lfd f13,120(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,128(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 128);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f13,18800(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + 18800);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f0,f12,f0,f13
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x82311594
	if (!cr6.gt) goto loc_82311594;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r10,r11,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823115a4
	if (!cr0.eq) goto loc_823115A4;
	// rlwinm. r11,r11,26,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823115a4
	if (!cr0.eq) goto loc_823115A4;
loc_82311594:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(r28.s32, 4, xer);
	// blt cr6,0x82311514
	if (cr6.lt) goto loc_82311514;
	// b 0x823115b0
	goto loc_823115B0;
loc_823115A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// bl 0x82597ea0
	sub_82597EA0(ctx, base);
loc_823115B0:
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823c1fd0
	sub_823C1FD0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// bl 0x82597e90
	sub_82597E90(ctx, base);
	// lwz r11,588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 588);
	// addi r9,r30,576
	ctx.r9.s64 = r30.s64 + 576;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// xori r11,r11,4
	r11.u64 = r11.u64 ^ 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823c2770
	sub_823C2770(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823cf948
	sub_823CF948(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ca718
	sub_823CA718(ctx, base);
	// lwz r11,588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 588);
	// addi r10,r30,576
	ctx.r10.s64 = r30.s64 + 576;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,588(r30)
	PPC_STORE_U32(r30.u32 + 588, r11.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x823cf950
	sub_823CF950(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x8231150c
	if (cr6.eq) goto loc_8231150C;
loc_82311670:
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// bl 0x82597eb0
	sub_82597EB0(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8231169c
	if (!cr6.eq) goto loc_8231169C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82597e90
	sub_82597E90(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
loc_8231169C:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// beq cr6,0x823116ac
	if (cr6.eq) goto loc_823116AC;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bne cr6,0x82311670
	if (!cr6.eq) goto loc_82311670;
loc_823116AC:
	// li r28,2
	r28.s64 = 2;
loc_823116B0:
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823c1fd0
	sub_823C1FD0(ctx, base);
	// lwz r11,588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 588);
	// addi r8,r30,576
	ctx.r8.s64 = r30.s64 + 576;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// xori r11,r11,4
	r11.u64 = r11.u64 ^ 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x823c2770
	sub_823C2770(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823cf948
	sub_823CF948(ctx, base);
	// lwz r11,588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 588);
	// addi r10,r30,576
	ctx.r10.s64 = r30.s64 + 576;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,588(r30)
	PPC_STORE_U32(r30.u32 + 588, r11.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x823cf950
	sub_823CF950(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x823116b0
	if (!cr0.eq) goto loc_823116B0;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82311760
	if (cr6.eq) goto loc_82311760;
	// bl 0x82597e80
	sub_82597E80(ctx, base);
	// mr r11,r25
	r11.u64 = r25.u64;
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
loc_82311760:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x82311780
	if (cr6.eq) goto loc_82311780;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82311780:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823bec10
	sub_823BEC10(ctx, base);
	// bl 0x82311268
	sub_82311268(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82302830
	sub_82302830(ctx, base);
	// mr r30,r20
	r30.u64 = r20.u64;
	// b 0x823114c8
	goto loc_823114C8;
}

__attribute__((alias("__imp__sub_82311310"))) PPC_WEAK_FUNC(sub_82311310);
PPC_FUNC_IMPL(__imp__sub_82311310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd8
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// addi r31,r1,-368
	r31.s64 = ctx.r1.s64 + -368;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r30,r11,-6464
	r30.s64 = r11.s64 + -6464;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82275c18
	sub_82275C18(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82276480
	sub_82276480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// bl 0x82275cc0
	sub_82275CC0(ctx, base);
	// li r25,0
	r25.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r21,r25
	r21.u64 = r25.u64;
	// bl 0x82302880
	sub_82302880(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c0058
	sub_823C0058(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r28,r11,-5228
	r28.s64 = r11.s64 + -5228;
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// bl 0x823c00a0
	sub_823C00A0(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// bl 0x823bf2e0
	sub_823BF2E0(ctx, base);
	// stw r3,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,596(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 596);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823c0d58
	sub_823C0D58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823c0a80
	sub_823C0A80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823bf2d0
	sub_823BF2D0(ctx, base);
	// addi r10,r31,176
	ctx.r10.s64 = r31.s64 + 176;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// li r11,9
	r11.s64 = 9;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_823113F0:
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x823113f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823113F0;
	// bl 0x82270ce8
	sub_82270CE8(ctx, base);
	// li r20,1
	r20.s64 = 1;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r22,r11,-5216
	r22.s64 = r11.s64 + -5216;
	// beq 0x82311424
	if (cr0.eq) goto loc_82311424;
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// stw r20,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r20.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r11.u32);
	// b 0x82311474
	goto loc_82311474;
loc_82311424:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x822767f8
	sub_822767F8(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// beq 0x82311468
	if (cr0.eq) goto loc_82311468;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// stw r21,216(r31)
	PPC_STORE_U32(r31.u32 + 216, r21.u32);
	// lis r11,-32207
	r11.s64 = -2110717952;
	// stw r21,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r21.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r10,4488
	ctx.r10.s64 = ctx.r10.s64 + 4488;
	// addi r11,r11,4488
	r11.s64 = r11.s64 + 4488;
	// stw r9,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r9.u32);
	// stw r9,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r9.u32);
	// stw r10,208(r31)
	PPC_STORE_U32(r31.u32 + 208, ctx.r10.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r11.u32);
loc_82311468:
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82311488
	if (cr6.eq) goto loc_82311488;
loc_82311474:
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825983e8
	sub_825983E8(ctx, base);
	// b 0x82311490
	goto loc_82311490;
loc_82311488:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82311490:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x823114e4
	if (!cr6.lt) goto loc_823114E4;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x823114b8
	if (cr6.eq) goto loc_823114B8;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823114B8:
	// bl 0x82311268
	sub_82311268(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82302830
	sub_82302830(ctx, base);
	// mr r30,r25
	r30.u64 = r25.u64;
loc_823114C8:
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,368
	ctx.r1.s64 = r31.s64 + 368;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8239bd28
	return;
loc_823114E4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r27,r25
	r27.u64 = r25.u64;
	// lfs f0,17324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * f0.f64));
	// mftb r11
	r11.u64 = __rdtsc();
	// rotlwi r26,r11,0
	r26.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r23,-32136
	r23.s64 = -2106064896;
	// lis r24,-32136
	r24.s64 = -2106064896;
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
loc_8231150C:
	// bl 0x8227b360
	sub_8227B360(ctx, base);
	// mr r28,r25
	r28.u64 = r25.u64;
loc_82311514:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8227bc58
	sub_8227BC58(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82311594
	if (cr0.eq) goto loc_82311594;
	// mftb r11
	r11.u64 = __rdtsc();
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lfs f0,18804(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r23.u32 + 18804);
	f0.f64 = double(temp.f32);
	// subf r10,r26,r11
	ctx.r10.s64 = r11.s64 - r26.s64;
	// mr r26,r11
	r26.u64 = r11.u64;
	// clrldi r11,r10,32
	r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r27,r11,r27
	r27.u64 = r11.u64 + r27.u64;
	// clrldi r11,r27,32
	r11.u64 = r27.u64 & 0xFFFFFFFF;
	// sradi r10,r27,32
	xer.ca = (r27.s64 < 0) & ((r27.u64 & 0xFFFFFFFF) != 0);
	ctx.r10.s64 = r27.s64 >> 32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,120(r31)
	PPC_STORE_U64(r31.u32 + 120, r11.u64);
	// std r10,128(r31)
	PPC_STORE_U64(r31.u32 + 128, ctx.r10.u64);
	// lfd f13,120(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,128(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 128);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f13,18800(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + 18800);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f0,f12,f0,f13
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x82311594
	if (!cr6.gt) goto loc_82311594;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r10,r11,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823115a4
	if (!cr0.eq) goto loc_823115A4;
	// rlwinm. r11,r11,26,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823115a4
	if (!cr0.eq) goto loc_823115A4;
loc_82311594:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(r28.s32, 4, xer);
	// blt cr6,0x82311514
	if (cr6.lt) goto loc_82311514;
	// b 0x823115b0
	goto loc_823115B0;
loc_823115A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// bl 0x82597ea0
	sub_82597EA0(ctx, base);
loc_823115B0:
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823c1fd0
	sub_823C1FD0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// bl 0x82597e90
	sub_82597E90(ctx, base);
	// lwz r11,588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 588);
	// addi r9,r30,576
	ctx.r9.s64 = r30.s64 + 576;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// xori r11,r11,4
	r11.u64 = r11.u64 ^ 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823c2770
	sub_823C2770(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823cf948
	sub_823CF948(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ca718
	sub_823CA718(ctx, base);
	// lwz r11,588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 588);
	// addi r10,r30,576
	ctx.r10.s64 = r30.s64 + 576;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,588(r30)
	PPC_STORE_U32(r30.u32 + 588, r11.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x823cf950
	sub_823CF950(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x8231150c
	if (cr6.eq) goto loc_8231150C;
loc_82311670:
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// bl 0x82597eb0
	sub_82597EB0(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8231169c
	if (!cr6.eq) goto loc_8231169C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82597e90
	sub_82597E90(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
loc_8231169C:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// beq cr6,0x823116ac
	if (cr6.eq) goto loc_823116AC;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bne cr6,0x82311670
	if (!cr6.eq) goto loc_82311670;
loc_823116AC:
	// li r28,2
	r28.s64 = 2;
loc_823116B0:
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823c1fd0
	sub_823C1FD0(ctx, base);
	// lwz r11,588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 588);
	// addi r8,r30,576
	ctx.r8.s64 = r30.s64 + 576;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// xori r11,r11,4
	r11.u64 = r11.u64 ^ 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x823c2770
	sub_823C2770(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823cf948
	sub_823CF948(ctx, base);
	// lwz r11,588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 588);
	// addi r10,r30,576
	ctx.r10.s64 = r30.s64 + 576;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,588(r30)
	PPC_STORE_U32(r30.u32 + 588, r11.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x823cf950
	sub_823CF950(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x823116b0
	if (!cr0.eq) goto loc_823116B0;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82311760
	if (cr6.eq) goto loc_82311760;
	// bl 0x82597e80
	sub_82597E80(ctx, base);
	// mr r11,r25
	r11.u64 = r25.u64;
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
loc_82311760:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x82311780
	if (cr6.eq) goto loc_82311780;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82311780:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823020a0
	sub_823020A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823bec10
	sub_823BEC10(ctx, base);
	// bl 0x82311268
	sub_82311268(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82302830
	sub_82302830(ctx, base);
	// mr r30,r20
	r30.u64 = r20.u64;
	// b 0x823114c8
	goto loc_823114C8;
}

__attribute__((alias("__imp__sub_823117A4"))) PPC_WEAK_FUNC(sub_823117A4);
PPC_FUNC_IMPL(__imp__sub_823117A4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-368
	r31.s64 = r12.s64 + -368;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823117CC"))) PPC_WEAK_FUNC(sub_823117CC);
PPC_FUNC_IMPL(__imp__sub_823117CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823117D0"))) PPC_WEAK_FUNC(sub_823117D0);
PPC_FUNC_IMPL(__imp__sub_823117D0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r10,r11,7604
	ctx.r10.s64 = r11.s64 + 7604;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// lwz r10,18972(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18972);
	// stw r10,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// stfs f0,112(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
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

__attribute__((alias("__imp__sub_82311854"))) PPC_WEAK_FUNC(sub_82311854);
PPC_FUNC_IMPL(__imp__sub_82311854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311858"))) PPC_WEAK_FUNC(sub_82311858);
PPC_FUNC_IMPL(__imp__sub_82311858) {
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
	// beq 0x82311888
	if (cr0.eq) goto loc_82311888;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82311888:
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

__attribute__((alias("__imp__sub_823118A4"))) PPC_WEAK_FUNC(sub_823118A4);
PPC_FUNC_IMPL(__imp__sub_823118A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823118A8"))) PPC_WEAK_FUNC(sub_823118A8);
PPC_FUNC_IMPL(__imp__sub_823118A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// clrlwi. r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823118bc
	if (cr0.eq) goto loc_823118BC;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// b 0x823118c0
	goto loc_823118C0;
loc_823118BC:
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	f0.f64 = double(temp.f32);
loc_823118C0:
	// stfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
	// stfs f1,40(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823118CC"))) PPC_WEAK_FUNC(sub_823118CC);
PPC_FUNC_IMPL(__imp__sub_823118CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823118D0"))) PPC_WEAK_FUNC(sub_823118D0);
PPC_FUNC_IMPL(__imp__sub_823118D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f1,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823118DC"))) PPC_WEAK_FUNC(sub_823118DC);
PPC_FUNC_IMPL(__imp__sub_823118DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823118E0"))) PPC_WEAK_FUNC(sub_823118E0);
PPC_FUNC_IMPL(__imp__sub_823118E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	f0.f64 = double(temp.f32);
	// lfs f13,44(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 - ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823118F4"))) PPC_WEAK_FUNC(sub_823118F4);
PPC_FUNC_IMPL(__imp__sub_823118F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823118F8"))) PPC_WEAK_FUNC(sub_823118F8);
PPC_FUNC_IMPL(__imp__sub_823118F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r11,0
	r11.s64 = 0;
	// clrlwi. r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, r11.u8);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// beq 0x82311914
	if (cr0.eq) goto loc_82311914;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// b 0x82311918
	goto loc_82311918;
loc_82311914:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
loc_82311918:
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stfs f1,8(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// beq cr6,0x82311934
	if (cr6.eq) goto loc_82311934;
	// fmr f0,f2
	f0.f64 = ctx.f2.f64;
	// b 0x82311938
	goto loc_82311938;
loc_82311934:
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	f0.f64 = double(temp.f32);
loc_82311938:
	// stfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// stfs f2,24(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82311944"))) PPC_WEAK_FUNC(sub_82311944);
PPC_FUNC_IMPL(__imp__sub_82311944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311948"))) PPC_WEAK_FUNC(sub_82311948);
PPC_FUNC_IMPL(__imp__sub_82311948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231195C"))) PPC_WEAK_FUNC(sub_8231195C);
PPC_FUNC_IMPL(__imp__sub_8231195C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311960"))) PPC_WEAK_FUNC(sub_82311960);
PPC_FUNC_IMPL(__imp__sub_82311960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231196C"))) PPC_WEAK_FUNC(sub_8231196C);
PPC_FUNC_IMPL(__imp__sub_8231196C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311970"))) PPC_WEAK_FUNC(sub_82311970);
PPC_FUNC_IMPL(__imp__sub_82311970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 - ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82311984"))) PPC_WEAK_FUNC(sub_82311984);
PPC_FUNC_IMPL(__imp__sub_82311984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311988"))) PPC_WEAK_FUNC(sub_82311988);
PPC_FUNC_IMPL(__imp__sub_82311988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f1,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82311994"))) PPC_WEAK_FUNC(sub_82311994);
PPC_FUNC_IMPL(__imp__sub_82311994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311998"))) PPC_WEAK_FUNC(sub_82311998);
PPC_FUNC_IMPL(__imp__sub_82311998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 - ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823119AC"))) PPC_WEAK_FUNC(sub_823119AC);
PPC_FUNC_IMPL(__imp__sub_823119AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823119B0"))) PPC_WEAK_FUNC(sub_823119B0);
PPC_FUNC_IMPL(__imp__sub_823119B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// clrlwi. r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823119c4
	if (cr0.eq) goto loc_823119C4;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// b 0x823119c8
	goto loc_823119C8;
loc_823119C4:
	// lfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
loc_823119C8:
	// stfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 60, temp.u32);
	// stfs f1,56(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823119D4"))) PPC_WEAK_FUNC(sub_823119D4);
PPC_FUNC_IMPL(__imp__sub_823119D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823119D8"))) PPC_WEAK_FUNC(sub_823119D8);
PPC_FUNC_IMPL(__imp__sub_823119D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f1,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823119E4"))) PPC_WEAK_FUNC(sub_823119E4);
PPC_FUNC_IMPL(__imp__sub_823119E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823119E8"))) PPC_WEAK_FUNC(sub_823119E8);
PPC_FUNC_IMPL(__imp__sub_823119E8) {
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
	// beq 0x82311a28
	if (cr0.eq) goto loc_82311A28;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,28264
	ctx.r3.s64 = r11.s64 + 28264;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82311a30
	goto loc_82311A30;
loc_82311A28:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82311A30:
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

__attribute__((alias("__imp__sub_82311A4C"))) PPC_WEAK_FUNC(sub_82311A4C);
PPC_FUNC_IMPL(__imp__sub_82311A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311A50"))) PPC_WEAK_FUNC(sub_82311A50);
PPC_FUNC_IMPL(__imp__sub_82311A50) {
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
	// beq 0x82311a90
	if (cr0.eq) goto loc_82311A90;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,28328
	ctx.r3.s64 = r11.s64 + 28328;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82311a98
	goto loc_82311A98;
loc_82311A90:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82311A98:
	// mulli r3,r31,20
	ctx.r3.s64 = r31.s64 * 20;
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

__attribute__((alias("__imp__sub_82311AB4"))) PPC_WEAK_FUNC(sub_82311AB4);
PPC_FUNC_IMPL(__imp__sub_82311AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311AB8"))) PPC_WEAK_FUNC(sub_82311AB8);
PPC_FUNC_IMPL(__imp__sub_82311AB8) {
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
	// lwz r16,7672(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 7672);
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-11572
	r11.s64 = r11.s64 + -11572;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// beq 0x82311b0c
	if (cr0.eq) goto loc_82311B0C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_82311B0C:
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

__attribute__((alias("__imp__sub_82311AC0"))) PPC_WEAK_FUNC(sub_82311AC0);
PPC_FUNC_IMPL(__imp__sub_82311AC0) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-11572
	r11.s64 = r11.s64 + -11572;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// beq 0x82311b0c
	if (cr0.eq) goto loc_82311B0C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_82311B0C:
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

__attribute__((alias("__imp__sub_82311B28"))) PPC_WEAK_FUNC(sub_82311B28);
PPC_FUNC_IMPL(__imp__sub_82311B28) {
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

__attribute__((alias("__imp__sub_82311B50"))) PPC_WEAK_FUNC(sub_82311B50);
PPC_FUNC_IMPL(__imp__sub_82311B50) {
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
	// lwz r16,7728(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 7728);
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82311ba8
	if (cr0.eq) goto loc_82311BA8;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82311BA8:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82311B58"))) PPC_WEAK_FUNC(sub_82311B58);
PPC_FUNC_IMPL(__imp__sub_82311B58) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82311ba8
	if (cr0.eq) goto loc_82311BA8;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82311BA8:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

