#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8239E1BC"))) PPC_WEAK_FUNC(sub_8239E1BC);
PPC_FUNC_IMPL(__imp__sub_8239E1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239E1C0"))) PPC_WEAK_FUNC(sub_8239E1C0);
PPC_FUNC_IMPL(__imp__sub_8239E1C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// cmpw r5,r4
	cr0.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// beq cr6,0x8239e204
	if (cr6.eq) goto loc_8239E204;
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x8239e1f0
	if (cr0.eq) goto loc_8239E1F0;
loc_8239E1DC:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x8239e214
	if (cr6.eq) goto loc_8239E214;
	// lbzu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// cmpw r4,r5
	cr0.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// bne 0x8239e1dc
	if (!cr0.eq) goto loc_8239E1DC;
loc_8239E1F0:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lbzu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// cmpw r4,r5
	cr0.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// beq 0x8239e1f0
	if (cr0.eq) goto loc_8239E1F0;
	// b 0x8239e1dc
	goto loc_8239E1DC;
loc_8239E204:
	// beq 0x8239e214
	if (cr0.eq) goto loc_8239E214;
	// lbzu r5,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// cmpwi r5,0
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// b 0x8239e204
	goto loc_8239E204;
loc_8239E214:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239E218"))) PPC_WEAK_FUNC(sub_8239E218);
PPC_FUNC_IMPL(__imp__sub_8239E218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r10,r11
	ctx.r10.s64 = r11.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8239e28c
	if (cr0.eq) goto loc_8239E28C;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_8239E234:
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8239e26c
	if (cr6.eq) goto loc_8239E26C;
loc_8239E240:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8239e26c
	if (cr0.eq) goto loc_8239E26C;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// subf. r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8239e26c
	if (!cr0.eq) goto loc_8239E26C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8239e240
	if (!cr6.eq) goto loc_8239E240;
loc_8239E26C:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r10,r11
	ctx.r10.s64 = r11.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8239e234
	if (!cr0.eq) goto loc_8239E234;
loc_8239E28C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239E294"))) PPC_WEAK_FUNC(sub_8239E294);
PPC_FUNC_IMPL(__imp__sub_8239E294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239E298"))) PPC_WEAK_FUNC(sub_8239E298);
PPC_FUNC_IMPL(__imp__sub_8239E298) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8239E2BC:
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8239e2bc
	if (!cr6.eq) goto loc_8239E2BC;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bne cr6,0x8239e310
	if (!cr6.eq) goto loc_8239E310;
loc_8239E2E0:
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8239e350
	goto loc_8239E350;
loc_8239E310:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8239e2e0
	if (cr6.eq) goto loc_8239E2E0;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// li r6,73
	ctx.r6.s64 = 73;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bgt cr6,0x8239e340
	if (cr6.gt) goto loc_8239E340;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8239E340:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8239E350:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239E360"))) PPC_WEAK_FUNC(sub_8239E360);
PPC_FUNC_IMPL(__imp__sub_8239E360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lis r11,-32197
	r11.s64 = -2110062592;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-16544
	ctx.r3.s64 = r11.s64 + -16544;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8239e298
	sub_8239E298(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239E3BC"))) PPC_WEAK_FUNC(sub_8239E3BC);
PPC_FUNC_IMPL(__imp__sub_8239E3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239E3C0"))) PPC_WEAK_FUNC(sub_8239E3C0);
PPC_FUNC_IMPL(__imp__sub_8239E3C0) {
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
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8239e424
	if (!cr6.eq) goto loc_8239E424;
loc_8239E3F4:
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8239e498
	goto loc_8239E498;
loc_8239E424:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239e3f4
	if (cr6.eq) goto loc_8239E3F4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// li r10,66
	ctx.r10.s64 = 66;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// bl 0x823ad4b0
	sub_823AD4B0(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// blt 0x8239e488
	if (cr0.lt) goto loc_8239E488;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// b 0x8239e494
	goto loc_8239E494;
loc_8239E488:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ad1a8
	sub_823AD1A8(ctx, base);
loc_8239E494:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8239E498:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239E4AC"))) PPC_WEAK_FUNC(sub_8239E4AC);
PPC_FUNC_IMPL(__imp__sub_8239E4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239E4B0"))) PPC_WEAK_FUNC(sub_8239E4B0);
PPC_FUNC_IMPL(__imp__sub_8239E4B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm. r11,r11,0,17,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF0;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8239e4d8
	if (!cr0.eq) goto loc_8239E4D8;
	// lwz r11,16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// clrlwi. r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8239e514
	if (!cr0.eq) goto loc_8239E514;
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239e514
	if (!cr6.eq) goto loc_8239E514;
loc_8239E4D8:
	// fctid f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f1.f64));
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// bne cr6,0x8239e514
	if (!cr6.eq) goto loc_8239E514;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f0,-28592(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -28592);
	// fmul f0,f1,f0
	f0.f64 = ctx.f1.f64 * f0.f64;
	// fctid f13,f0
	ctx.f13.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&f0.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x8239e50c
	if (!cr6.eq) goto loc_8239E50C;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8239E50C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8239E514:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239E51C"))) PPC_WEAK_FUNC(sub_8239E51C);
PPC_FUNC_IMPL(__imp__sub_8239E51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239E520"))) PPC_WEAK_FUNC(sub_8239E520);
PPC_FUNC_IMPL(__imp__sub_8239E520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// stfd f31,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, f31.u64);
	// lis r9,32752
	ctx.r9.s64 = 2146435072;
	// stfd f1,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f1.u64);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// fabs f0,f1
	f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-16
	ctx.r10.s64 = -1048576;
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8239e5a8
	if (!cr6.eq) goto loc_8239E5A8;
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239e5e4
	if (!cr6.eq) goto loc_8239E5E4;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f13,-31360(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -31360);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8239e58c
	if (!cr6.gt) goto loc_8239E58C;
loc_8239E580:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lfd f0,-22592(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -22592);
	// b 0x8239e61c
	goto loc_8239E61C;
loc_8239E58C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x8239e5a0
	if (!cr6.lt) goto loc_8239E5A0;
loc_8239E594:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-31368(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// b 0x8239e61c
	goto loc_8239E61C;
loc_8239E5A0:
	// stfd f13,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r31.u32 + 0, ctx.f13.u64);
	// b 0x8239e620
	goto loc_8239E620;
loc_8239E5A8:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8239e5e4
	if (!cr6.eq) goto loc_8239E5E4;
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239e5e4
	if (!cr6.eq) goto loc_8239E5E4;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f13,-31360(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -31360);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x8239e594
	if (cr6.gt) goto loc_8239E594;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x8239e580
	if (cr6.lt) goto loc_8239E580;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// li r30,1
	r30.s64 = 1;
	// lfd f0,-22584(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -22584);
	// b 0x8239e61c
	goto loc_8239E61C;
loc_8239E5E4:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8239e640
	if (!cr6.eq) goto loc_8239E640;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239e620
	if (!cr6.eq) goto loc_8239E620;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-31368(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bgt cr6,0x8239e580
	if (cr6.gt) goto loc_8239E580;
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// blt cr6,0x8239e61c
	if (cr6.lt) goto loc_8239E61C;
loc_8239E614:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-31360(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31360);
loc_8239E61C:
	// stfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r31.u32 + 0, f0.u64);
loc_8239E620:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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
loc_8239E640:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8239e620
	if (!cr6.eq) goto loc_8239E620;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239e620
	if (!cr6.eq) goto loc_8239E620;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8239e4b0
	sub_8239E4B0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-31368(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x8239e684
	if (!cr6.gt) goto loc_8239E684;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// lfd f0,-22592(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -22592);
	// bne cr6,0x8239e61c
	if (!cr6.eq) goto loc_8239E61C;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// b 0x8239e61c
	goto loc_8239E61C;
loc_8239E684:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x8239e614
	if (!cr6.lt) goto loc_8239E614;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8239e61c
	if (!cr6.eq) goto loc_8239E61C;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lfd f0,-22560(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -22560);
	// b 0x8239e61c
	goto loc_8239E61C;
}

__attribute__((alias("__imp__sub_8239E6A0"))) PPC_WEAK_FUNC(sub_8239E6A0);
PPC_FUNC_IMPL(__imp__sub_8239E6A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// bl 0x8239d5dc
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f2
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f2.f64;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmr f28,f1
	f28.f64 = ctx.f1.f64;
	// stfd f30,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, f30.u64);
	// stfd f28,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, f28.u64);
	// lfd f27,-31368(r11)
	f27.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f30,f27
	cr6.compare(f30.f64, f27.f64);
	// bne cr6,0x8239e6e8
	if (!cr6.eq) goto loc_8239E6E8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f1,-31360(r11)
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -31360);
	// b 0x8239eb80
	goto loc_8239EB80;
loc_8239E6E8:
	// fcmpu cr6,f28,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(f28.f64, f27.f64);
	// bne cr6,0x8239e73c
	if (!cr6.eq) goto loc_8239E73C;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x8239e4b0
	sub_8239E4B0(ctx, base);
	// fcmpu cr6,f30,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(f30.f64, f27.f64);
	// bge cr6,0x8239e71c
	if (!cr6.lt) goto loc_8239E71C;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// lfd f1,-22592(r11)
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -22592);
	// bne cr6,0x8239eb80
	if (!cr6.eq) goto loc_8239EB80;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// bl 0x823ae030
	sub_823AE030(ctx, base);
	// b 0x8239eb80
	goto loc_8239EB80;
loc_8239E71C:
	// fcmpu cr6,f30,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(f30.f64, f27.f64);
	// ble cr6,0x8239e73c
	if (!cr6.gt) goto loc_8239E73C;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8239e734
	if (!cr6.eq) goto loc_8239E734;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// b 0x8239eb80
	goto loc_8239EB80;
loc_8239E734:
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// b 0x8239eb80
	goto loc_8239EB80;
loc_8239E73C:
	// lhz r11,192(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 192);
	// lhz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 200);
	// rlwinm r10,r11,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	cr6.compare<uint32_t>(ctx.r10.u32, 32752, xer);
	// beq cr6,0x8239eb08
	if (cr6.eq) goto loc_8239EB08;
	// rlwinm r10,r9,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	cr6.compare<uint32_t>(ctx.r10.u32, 32752, xer);
	// beq cr6,0x8239eb08
	if (cr6.eq) goto loc_8239EB08;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fcmpu cr6,f28,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(f28.f64, f27.f64);
	// lfd f26,-31360(r11)
	f26.u64 = PPC_LOAD_U64(r11.u32 + -31360);
	// fmr f25,f26
	f25.f64 = f26.f64;
	// bge cr6,0x8239e7a0
	if (!cr6.lt) goto loc_8239E7A0;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x8239e4b0
	sub_8239E4B0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8239e794
	if (cr6.eq) goto loc_8239E794;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8239e79c
	if (cr6.eq) goto loc_8239E79C;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lfd f1,-22584(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -22584);
	// b 0x8239eb80
	goto loc_8239EB80;
loc_8239E794:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f25,-30984(r11)
	ctx.fpscr.disableFlushMode();
	f25.u64 = PPC_LOAD_U64(r11.u32 + -30984);
loc_8239E79C:
	// fneg f28,f28
	ctx.fpscr.disableFlushMode();
	f28.u64 = f28.u64 ^ 0x8000000000000000;
loc_8239E7A0:
	// fabs f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f30.u64 & ~0x8000000000000000;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lfd f0,-24160(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -24160);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8239e7f0
	if (!cr6.gt) goto loc_8239E7F0;
	// fcmpu cr6,f30,f27
	cr6.compare(f30.f64, f27.f64);
	// bge cr6,0x8239e7c0
	if (!cr6.lt) goto loc_8239E7C0;
	// fdiv f28,f26,f28
	f28.f64 = f26.f64 / f28.f64;
loc_8239E7C0:
	// fcmpu cr6,f28,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(f28.f64, f26.f64);
	// ble cr6,0x8239e7d8
	if (!cr6.gt) goto loc_8239E7D8;
loc_8239E7C8:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lfd f0,-22592(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -22592);
loc_8239E7D0:
	// fmul f1,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64 * f25.f64;
	// b 0x8239eb80
	goto loc_8239EB80;
loc_8239E7D8:
	// fcmpu cr6,f28,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(f28.f64, f26.f64);
	// bge cr6,0x8239e7e8
	if (!cr6.lt) goto loc_8239E7E8;
loc_8239E7E0:
	// fmul f1,f25,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f25.f64 * f27.f64;
	// b 0x8239eb80
	goto loc_8239EB80;
loc_8239E7E8:
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f25.f64;
	// b 0x8239eb80
	goto loc_8239EB80;
loc_8239E7F0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x823abdd8
	sub_823ABDD8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// lfd f0,-30992(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -30992);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bgt cr6,0x8239e8ac
	if (cr6.gt) goto loc_8239E8AC;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x8239e4b0
	sub_8239E4B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8239e8ac
	if (cr0.eq) goto loc_8239E8AC;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x8239e4b0
	sub_8239E4B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8239e8ac
	if (cr0.eq) goto loc_8239E8AC;
	// fcmpu cr6,f30,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(f30.f64, f27.f64);
	// ble cr6,0x8239e8ac
	if (!cr6.gt) goto loc_8239E8AC;
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// fctiwz f0,f30
	f0.s64 = (f30.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f30.f64));
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f31,f26
	f31.f64 = f26.f64;
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mullw r31,r11,r10
	r31.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8239e874
	if (cr6.eq) goto loc_8239E874;
loc_8239E85C:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8239e868
	if (cr0.eq) goto loc_8239E868;
	// fmul f31,f31,f29
	ctx.fpscr.disableFlushMode();
	f31.f64 = f31.f64 * f29.f64;
loc_8239E868:
	// fmul f29,f29,f29
	ctx.fpscr.disableFlushMode();
	f29.f64 = f29.f64 * f29.f64;
	// srawi. r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8239e85c
	if (!cr0.eq) goto loc_8239E85C;
loc_8239E874:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823abd00
	sub_823ABD00(ctx, base);
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + r31.u64;
	// cmpwi cr6,r4,2560
	cr6.compare<int32_t>(ctx.r4.s32, 2560, xer);
	// ble cr6,0x8239e898
	if (!cr6.gt) goto loc_8239E898;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lfd f0,-22592(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -22592);
	// fmul f0,f0,f31
	f0.f64 = f0.f64 * f31.f64;
	// b 0x8239e7d0
	goto loc_8239E7D0;
loc_8239E898:
	// cmpwi cr6,r4,-2557
	cr6.compare<int32_t>(ctx.r4.s32, -2557, xer);
	// bge cr6,0x8239eae8
	if (!cr6.lt) goto loc_8239EAE8;
	// fmul f0,f31,f25
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64 * f25.f64;
	// fmul f1,f0,f27
	ctx.f1.f64 = f0.f64 * f27.f64;
	// b 0x8239eb80
	goto loc_8239EB80;
loc_8239E8AC:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,1
	r11.s64 = 1;
	// addi r31,r10,-31344
	r31.s64 = ctx.r10.s64 + -31344;
	// lfd f0,72(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 72);
	// fcmpu cr6,f29,f0
	cr6.compare(f29.f64, f0.f64);
	// bgt cr6,0x8239e8c8
	if (cr6.gt) goto loc_8239E8C8;
	// li r11,9
	r11.s64 = 9;
loc_8239E8C8:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,32
	ctx.r9.s64 = r31.s64 + 32;
	// lfdx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// fcmpu cr6,f29,f0
	cr6.compare(f29.f64, f0.f64);
	// bgt cr6,0x8239e8e0
	if (cr6.gt) goto loc_8239E8E0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8239E8E0:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,16
	ctx.r9.s64 = r31.s64 + 16;
	// lfdx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// fcmpu cr6,f29,f0
	cr6.compare(f29.f64, f0.f64);
	// bgt cr6,0x8239e8f8
	if (cr6.gt) goto loc_8239E8F8;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_8239E8F8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// blt 0x8239e910
	if (cr0.lt) goto loc_8239E910;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8239E910:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfd f31,-31008(r10)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + -31008);
	// bne cr6,0x8239e938
	if (!cr6.eq) goto loc_8239E938;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x8239ebe8
	sub_8239EBE8(ctx, base);
	// lfd f0,216(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 216);
	// fmr f13,f27
	ctx.f13.f64 = f27.f64;
	// fmul f12,f1,f0
	ctx.f12.f64 = ctx.f1.f64 * f0.f64;
	// b 0x8239e9c8
	goto loc_8239E9C8;
loc_8239E938:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfd f11,256(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(r31.u32 + 256);
	// addi r8,r31,8
	ctx.r8.s64 = r31.s64 + 8;
	// lfd f10,216(r31)
	ctx.f10.u64 = PPC_LOAD_U64(r31.u32 + 216);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r7,r31,144
	ctx.r7.s64 = r31.s64 + 144;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// lfdx f0,r10,r8
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r8.u32);
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// fsub f12,f29,f0
	ctx.f12.f64 = f29.f64 - f0.f64;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// fadd f0,f0,f29
	f0.f64 = f0.f64 + f29.f64;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfdx f13,r11,r7
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + ctx.r7.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fsub f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 - ctx.f13.f64;
	// fmul f12,f9,f31
	ctx.f12.f64 = ctx.f9.f64 * f31.f64;
	// lfd f9,224(r31)
	ctx.f9.u64 = PPC_LOAD_U64(r31.u32 + 224);
	// fdiv f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 / f0.f64;
	// lfd f0,264(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 264);
	// fmul f0,f13,f0
	f0.f64 = ctx.f13.f64 * f0.f64;
	// fmul f13,f0,f0
	ctx.f13.f64 = f0.f64 * f0.f64;
	// fmul f8,f0,f9
	ctx.f8.f64 = f0.f64 * ctx.f9.f64;
	// lfd f9,248(r31)
	ctx.f9.u64 = PPC_LOAD_U64(r31.u32 + 248);
	// fmadd f9,f13,f11,f9
	ctx.f9.f64 = ctx.f13.f64 * ctx.f11.f64 + ctx.f9.f64;
	// lfd f11,240(r31)
	ctx.f11.u64 = PPC_LOAD_U64(r31.u32 + 240);
	// fmadd f9,f9,f13,f11
	ctx.f9.f64 = ctx.f9.f64 * ctx.f13.f64 + ctx.f11.f64;
	// lfd f11,232(r31)
	ctx.f11.u64 = PPC_LOAD_U64(r31.u32 + 232);
	// fmadd f11,f9,f13,f11
	ctx.f11.f64 = ctx.f9.f64 * ctx.f13.f64 + ctx.f11.f64;
	// fmul f13,f11,f13
	ctx.f13.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * f0.f64;
	// fmadd f13,f13,f10,f8
	ctx.f13.f64 = ctx.f13.f64 * ctx.f10.f64 + ctx.f8.f64;
	// fadd f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 + f0.f64;
loc_8239E9C8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmul f10,f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f13.f64 * f30.f64;
	// lfd f0,-31000(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31000);
	// fmul f11,f30,f0
	ctx.f11.f64 = f30.f64 * f0.f64;
	// fctid f13,f11
	ctx.f13.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f11.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmul f13,f13,f31
	ctx.f13.f64 = ctx.f13.f64 * f31.f64;
	// fsub f11,f30,f13
	ctx.f11.f64 = f30.f64 - ctx.f13.f64;
	// fmadd f11,f11,f12,f10
	ctx.f11.f64 = ctx.f11.f64 * ctx.f12.f64 + ctx.f10.f64;
	// fmul f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 * f0.f64;
	// fctid f10,f10
	ctx.f10.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f10.f64));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmul f10,f10,f31
	ctx.f10.f64 = ctx.f10.f64 * f31.f64;
	// fmadd f13,f13,f12,f10
	ctx.f13.f64 = ctx.f13.f64 * ctx.f12.f64 + ctx.f10.f64;
	// fsub f11,f11,f10
	ctx.f11.f64 = ctx.f11.f64 - ctx.f10.f64;
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * f0.f64;
	// fctid f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f12.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fmul f12,f12,f31
	ctx.f12.f64 = ctx.f12.f64 * f31.f64;
	// fsub f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 - ctx.f12.f64;
	// fadd f13,f13,f11
	ctx.f13.f64 = ctx.f13.f64 + ctx.f11.f64;
	// fmul f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 * f0.f64;
	// fctid f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f11.f64));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fmul f11,f11,f31
	ctx.f11.f64 = ctx.f11.f64 * f31.f64;
	// fadd f12,f12,f11
	ctx.f12.f64 = ctx.f12.f64 + ctx.f11.f64;
	// fsub f13,f13,f11
	ctx.f13.f64 = ctx.f13.f64 - ctx.f11.f64;
	// fmul f0,f12,f0
	f0.f64 = ctx.f12.f64 * f0.f64;
	// lfd f12,320(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 320);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bgt cr6,0x8239e7c8
	if (cr6.gt) goto loc_8239E7C8;
	// lfd f12,328(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 328);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// blt cr6,0x8239e7e0
	if (cr6.lt) goto loc_8239E7E0;
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// fcmpu cr6,f13,f27
	cr6.compare(ctx.f13.f64, f27.f64);
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ble cr6,0x8239ea70
	if (!cr6.gt) goto loc_8239EA70;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// fsub f13,f13,f31
	ctx.f13.f64 = ctx.f13.f64 - f31.f64;
loc_8239EA70:
	// lfd f0,312(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 312);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// lfd f12,304(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 304);
	// srawi r9,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r9.s64 = r11.s32 >> 4;
	// fmadd f12,f13,f0,f12
	ctx.f12.f64 = ctx.f13.f64 * f0.f64 + ctx.f12.f64;
	// lfd f0,296(r31)
	f0.u64 = PPC_LOAD_U64(r31.u32 + 296);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// rlwinm r9,r30,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// fmadd f12,f12,f13,f0
	ctx.f12.f64 = ctx.f12.f64 * ctx.f13.f64 + f0.f64;
	// lfd f0,288(r31)
	f0.u64 = PPC_LOAD_U64(r31.u32 + 288);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// fmadd f12,f12,f13,f0
	ctx.f12.f64 = ctx.f12.f64 * ctx.f13.f64 + f0.f64;
	// lfd f0,280(r31)
	f0.u64 = PPC_LOAD_U64(r31.u32 + 280);
	// fmadd f12,f12,f13,f0
	ctx.f12.f64 = ctx.f12.f64 * ctx.f13.f64 + f0.f64;
	// lfd f0,272(r31)
	f0.u64 = PPC_LOAD_U64(r31.u32 + 272);
	// fmadd f12,f12,f13,f0
	ctx.f12.f64 = ctx.f12.f64 * ctx.f13.f64 + f0.f64;
	// lfd f0,264(r31)
	f0.u64 = PPC_LOAD_U64(r31.u32 + 264);
	// fmadd f0,f12,f13,f0
	f0.f64 = ctx.f12.f64 * ctx.f13.f64 + f0.f64;
	// lfdx f12,r11,r10
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + ctx.r10.u32);
	// fmadd f0,f0,f13,f26
	f0.f64 = f0.f64 * ctx.f13.f64 + f26.f64;
	// fmul f31,f0,f12
	f31.f64 = f0.f64 * ctx.f12.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823abd00
	sub_823ABD00(ctx, base);
	// add r4,r3,r30
	ctx.r4.u64 = ctx.r3.u64 + r30.u64;
loc_8239EAE8:
	// cmpwi cr6,r4,1024
	cr6.compare<int32_t>(ctx.r4.s32, 1024, xer);
	// bgt cr6,0x8239e7c8
	if (cr6.gt) goto loc_8239E7C8;
	// cmpwi cr6,r4,-1021
	cr6.compare<int32_t>(ctx.r4.s32, -1021, xer);
	// blt cr6,0x8239e7e0
	if (cr6.lt) goto loc_8239E7E0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823abcd8
	sub_823ABCD8(ctx, base);
	// fmul f1,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 * f25.f64;
	// b 0x8239eb80
	goto loc_8239EB80;
loc_8239EB08:
	// rlwinm r10,r11,0,17,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r10,32752
	cr6.compare<uint32_t>(ctx.r10.u32, 32752, xer);
	// bne cr6,0x8239eb2c
	if (!cr6.eq) goto loc_8239EB2C;
	// lwz r11,192(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// clrlwi. r11,r11,13
	r11.u64 = r11.u32 & 0x7FFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8239eb7c
	if (!cr0.eq) goto loc_8239EB7C;
	// lwz r11,196(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239eb7c
	if (!cr6.eq) goto loc_8239EB7C;
loc_8239EB2C:
	// rlwinm r11,r9,0,17,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r11,32752
	cr6.compare<uint32_t>(r11.u32, 32752, xer);
	// bne cr6,0x8239eb50
	if (!cr6.eq) goto loc_8239EB50;
	// lwz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// clrlwi. r9,r9,13
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8239eb7c
	if (!cr0.eq) goto loc_8239EB7C;
	// lwz r9,204(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8239eb7c
	if (!cr6.eq) goto loc_8239EB7C;
loc_8239EB50:
	// cmplwi cr6,r10,32760
	cr6.compare<uint32_t>(ctx.r10.u32, 32760, xer);
	// beq cr6,0x8239eb7c
	if (cr6.eq) goto loc_8239EB7C;
	// cmplwi cr6,r11,32760
	cr6.compare<uint32_t>(r11.u32, 32760, xer);
	// beq cr6,0x8239eb7c
	if (cr6.eq) goto loc_8239EB7C;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x8239e520
	sub_8239E520(ctx, base);
	// lfd f1,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// b 0x8239eb80
	goto loc_8239EB80;
loc_8239EB7C:
	// fadd f1,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64 + f30.f64;
loc_8239EB80:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8239d628
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

__attribute__((alias("__imp__sub_8239EBA0"))) PPC_WEAK_FUNC(sub_8239EBA0);
PPC_FUNC_IMPL(__imp__sub_8239EBA0) {
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
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// ori r10,r10,17405
	ctx.r10.u64 = ctx.r10.u64 | 17405;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addis r10,r10,39
	ctx.r10.s64 = ctx.r10.s64 + 2555904;
	// addi r10,r10,-24893
	ctx.r10.s64 = ctx.r10.s64 + -24893;
	// rlwinm r3,r10,16,17,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7FFF;
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239EBE4"))) PPC_WEAK_FUNC(sub_8239EBE4);
PPC_FUNC_IMPL(__imp__sub_8239EBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239EBE8"))) PPC_WEAK_FUNC(sub_8239EBE8);
PPC_FUNC_IMPL(__imp__sub_8239EBE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lfd f8,-31360(r11)
	ctx.f8.u64 = PPC_LOAD_U64(r11.u32 + -31360);
	// fcmpu cr6,f1,f8
	cr6.compare(ctx.f1.f64, ctx.f8.f64);
	// bne cr6,0x8239ec08
	if (!cr6.eq) goto loc_8239EC08;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f1,-31368(r11)
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// blr 
	return;
loc_8239EC08:
	// lhz r11,16(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r10,r11,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	cr6.compare<uint32_t>(ctx.r10.u32, 32752, xer);
	// bne cr6,0x8239ec38
	if (!cr6.eq) goto loc_8239EC38;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-30840(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -30840);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgtlr cr6
	if (cr6.gt) return;
loc_8239EC28:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lfd f0,-22584(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -22584);
loc_8239EC30:
	// fneg f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_8239EC38:
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lfd f0,-31368(r9)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -31368);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x8239ec5c
	if (cr6.gt) goto loc_8239EC5C;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bne cr6,0x8239ec28
	if (!cr6.eq) goto loc_8239EC28;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lfd f0,-22592(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -22592);
	// b 0x8239ec30
	goto loc_8239EC30;
loc_8239EC5C:
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lfd f0,-30848(r9)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -30848);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x8239ec8c
	if (!cr6.lt) goto loc_8239EC8C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-30856(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -30856);
	// fmul f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 * f0.f64;
	// stfd f1,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r10,r11,28,21,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x7FF;
	// addi r10,r10,-1075
	ctx.r10.s64 = ctx.r10.s64 + -1075;
	// b 0x8239ec94
	goto loc_8239EC94;
loc_8239EC8C:
	// rlwinm r10,r10,28,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFF;
	// addi r10,r10,-1022
	ctx.r10.s64 = ctx.r10.s64 + -1022;
loc_8239EC94:
	// andi. r11,r11,32783
	r11.u64 = r11.u64 & 32783;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stfd f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// ori r11,r11,16352
	r11.u64 = r11.u64 | 16352;
	// sth r11,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, r11.u16);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,-30976
	r11.s64 = r11.s64 + -30976;
	// lfd f13,0(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// lfd f0,-16(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// lfd f13,-28592(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + -28592);
	// ble cr6,0x8239ecd8
	if (!cr6.gt) goto loc_8239ECD8;
	// fsub f12,f0,f13
	ctx.f12.f64 = f0.f64 - ctx.f13.f64;
	// fadd f11,f0,f8
	ctx.f11.f64 = f0.f64 + ctx.f8.f64;
	// fsub f0,f12,f13
	f0.f64 = ctx.f12.f64 - ctx.f13.f64;
	// fmul f13,f11,f13
	ctx.f13.f64 = ctx.f11.f64 * ctx.f13.f64;
	// b 0x8239ece8
	goto loc_8239ECE8;
loc_8239ECD8:
	// fsub f0,f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = f0.f64 - ctx.f13.f64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// fadd f12,f0,f8
	ctx.f12.f64 = f0.f64 + ctx.f8.f64;
	// fmul f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 * ctx.f13.f64;
loc_8239ECE8:
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// fdiv f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f0.f64 / ctx.f13.f64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfd f10,8(r11)
	ctx.f10.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f11,-30864(r10)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r10.u32 + -30864);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// fmul f0,f13,f13
	f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// lfd f9,-30872(r10)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r10.u32 + -30872);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// fsub f7,f0,f9
	ctx.f7.f64 = f0.f64 - ctx.f9.f64;
	// lfd f9,-30880(r10)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r10.u32 + -30880);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fmul f6,f12,f9
	ctx.f6.f64 = ctx.f12.f64 * ctx.f9.f64;
	// lfd f9,40(r11)
	ctx.f9.u64 = PPC_LOAD_U64(r11.u32 + 40);
	// fnmsub f9,f0,f11,f9
	ctx.f9.f64 = -(f0.f64 * ctx.f11.f64 - ctx.f9.f64);
	// lfd f11,64(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 64);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmadd f7,f7,f0,f11
	ctx.f7.f64 = ctx.f7.f64 * f0.f64 + ctx.f11.f64;
	// lfd f11,-30888(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + -30888);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmsub f9,f9,f0,f11
	ctx.f9.f64 = ctx.f9.f64 * f0.f64 - ctx.f11.f64;
	// lfd f11,-30896(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + -30896);
	// fmsub f11,f7,f0,f11
	ctx.f11.f64 = ctx.f7.f64 * f0.f64 - ctx.f11.f64;
	// fmul f0,f9,f0
	f0.f64 = ctx.f9.f64 * f0.f64;
	// fdiv f0,f0,f11
	f0.f64 = f0.f64 / ctx.f11.f64;
	// fadd f0,f0,f8
	f0.f64 = f0.f64 + ctx.f8.f64;
	// fmsub f0,f0,f13,f6
	f0.f64 = f0.f64 * ctx.f13.f64 - ctx.f6.f64;
	// fmadd f1,f12,f10,f0
	ctx.f1.f64 = ctx.f12.f64 * ctx.f10.f64 + f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239ED64"))) PPC_WEAK_FUNC(sub_8239ED64);
PPC_FUNC_IMPL(__imp__sub_8239ED64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239ED68"))) PPC_WEAK_FUNC(sub_8239ED68);
PPC_FUNC_IMPL(__imp__sub_8239ED68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8239ebe8
	sub_8239EBE8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-30952(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -30952);
	// fmul f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 * f0.f64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239ED94"))) PPC_WEAK_FUNC(sub_8239ED94);
PPC_FUNC_IMPL(__imp__sub_8239ED94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239ED98"))) PPC_WEAK_FUNC(sub_8239ED98);
PPC_FUNC_IMPL(__imp__sub_8239ED98) {
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
	// li r30,-1
	r30.s64 = -1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8239ede4
	if (!cr6.eq) goto loc_8239EDE4;
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8239ee44
	goto loc_8239EE44;
loc_8239EDE4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// andi. r11,r11,131
	r11.u64 = r11.u64 & 131;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239ee3c
	if (cr0.eq) goto loc_8239EE3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ae230
	sub_823AE230(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ae528
	sub_823AE528(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// bl 0x8239fb08
	sub_8239FB08(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8239ee28
	if (!cr0.lt) goto loc_8239EE28;
	// li r30,-1
	r30.s64 = -1;
	// b 0x8239ee3c
	goto loc_8239EE3C;
loc_8239EE28:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239ee3c
	if (cr0.eq) goto loc_8239EE3C;
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
loc_8239EE3C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
loc_8239EE44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8239EE4C"))) PPC_WEAK_FUNC(sub_8239EE4C);
PPC_FUNC_IMPL(__imp__sub_8239EE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239EE50"))) PPC_WEAK_FUNC(sub_8239EE50);
PPC_FUNC_IMPL(__imp__sub_8239EE50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r16,-14928(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14928);
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
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8239eec4
	if (!cr0.eq) goto loc_8239EEC4;
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8239ef04
	goto loc_8239EF04;
loc_8239EEC4:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239eedc
	if (cr0.eq) goto loc_8239EEDC;
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// b 0x8239ef00
	goto loc_8239EF00;
loc_8239EEDC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a0ff8
	sub_823A0FF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239ed98
	sub_8239ED98(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	r12.s64 = r31.s64 + 112;
	// bl 0x8239ef3c
	sub_8239EF3C(ctx, base);
loc_8239EF00:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_8239EF04:
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

__attribute__((alias("__imp__sub_8239EE58"))) PPC_WEAK_FUNC(sub_8239EE58);
PPC_FUNC_IMPL(__imp__sub_8239EE58) {
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
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8239eec4
	if (!cr0.eq) goto loc_8239EEC4;
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8239ef04
	goto loc_8239EF04;
loc_8239EEC4:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239eedc
	if (cr0.eq) goto loc_8239EEDC;
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// b 0x8239ef00
	goto loc_8239EF00;
loc_8239EEDC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a0ff8
	sub_823A0FF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239ed98
	sub_8239ED98(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	r12.s64 = r31.s64 + 112;
	// bl 0x8239ef3c
	sub_8239EF3C(ctx, base);
loc_8239EF00:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_8239EF04:
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

__attribute__((alias("__imp__sub_8239EF1C"))) PPC_WEAK_FUNC(sub_8239EF1C);
PPC_FUNC_IMPL(__imp__sub_8239EF1C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,132(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// b 0x8239ef54
	goto loc_8239EF54;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_8239EF54:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a1048
	sub_823A1048(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239EF3C"))) PPC_WEAK_FUNC(sub_8239EF3C);
PPC_FUNC_IMPL(__imp__sub_8239EF3C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a1048
	sub_823A1048(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239EF74"))) PPC_WEAK_FUNC(sub_8239EF74);
PPC_FUNC_IMPL(__imp__sub_8239EF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239EF78"))) PPC_WEAK_FUNC(sub_8239EF78);
PPC_FUNC_IMPL(__imp__sub_8239EF78) {
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
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239efd0
	if (!cr6.eq) goto loc_8239EFD0;
loc_8239EFA0:
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8239f054
	goto loc_8239F054;
loc_8239EFD0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8239efe0
	if (cr6.eq) goto loc_8239EFE0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8239efa0
	if (cr6.eq) goto loc_8239EFA0;
loc_8239EFE0:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bgt cr6,0x8239eff8
	if (cr6.gt) goto loc_8239EFF8;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
loc_8239EFF8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r11,66
	r11.s64 = 66;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x823ad4b0
	sub_823AD4B0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8239f050
	if (cr6.eq) goto loc_8239F050;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// blt 0x8239f044
	if (cr0.lt) goto loc_8239F044;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// b 0x8239f050
	goto loc_8239F050;
loc_8239F044:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ad1a8
	sub_823AD1A8(ctx, base);
loc_8239F050:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8239F054:
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

__attribute__((alias("__imp__sub_8239F06C"))) PPC_WEAK_FUNC(sub_8239F06C);
PPC_FUNC_IMPL(__imp__sub_8239F06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239F070"))) PPC_WEAK_FUNC(sub_8239F070);
PPC_FUNC_IMPL(__imp__sub_8239F070) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8239ef78
	sub_8239EF78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239F07C"))) PPC_WEAK_FUNC(sub_8239F07C);
PPC_FUNC_IMPL(__imp__sub_8239F07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239F080"))) PPC_WEAK_FUNC(sub_8239F080);
PPC_FUNC_IMPL(__imp__sub_8239F080) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826e4b5c
	__imp__KeBugCheck(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239F088"))) PPC_WEAK_FUNC(sub_8239F088);
PPC_FUNC_IMPL(__imp__sub_8239F088) {
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
	// bl 0x823aba90
	sub_823ABA90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823aba48
	sub_823ABA48(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// li r3,255
	ctx.r3.s64 = 255;
	// lwz r11,-24152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -24152);
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

__attribute__((alias("__imp__sub_8239F0D0"))) PPC_WEAK_FUNC(sub_8239F0D0);
PPC_FUNC_IMPL(__imp__sub_8239F0D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x823a4260
	sub_823A4260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239F0D8"))) PPC_WEAK_FUNC(sub_8239F0D8);
PPC_FUNC_IMPL(__imp__sub_8239F0D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x823a4100
	sub_823A4100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239F0E0"))) PPC_WEAK_FUNC(sub_8239F0E0);
PPC_FUNC_IMPL(__imp__sub_8239F0E0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// b 0x8239f118
	goto loc_8239F118;
loc_8239F100:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8239f114
	if (cr0.eq) goto loc_8239F114;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8239F114:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8239F118:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x8239f100
	if (cr6.lt) goto loc_8239F100;
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

__attribute__((alias("__imp__sub_8239F138"))) PPC_WEAK_FUNC(sub_8239F138);
PPC_FUNC_IMPL(__imp__sub_8239F138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r19,19276(r14)
	r19.u64 = PPC_LOAD_U32(r14.u32 + 19276);
	// lwz r16,-14904(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14904);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r28,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r28.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x823a4260
	sub_823A4260(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,17120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17120);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8239f218
	if (cr6.eq) goto loc_8239F218;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,17116(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17116);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8239f190
	if (!cr6.eq) goto loc_8239F190;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826e4b5c
	__imp__KeBugCheck(ctx, base);
loc_8239F190:
	// li r11,1
	r11.s64 = 1;
	// stw r11,17116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17116, r11.u32);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// stb r28,17112(r10)
	PPC_STORE_U8(ctx.r10.u32 + 17112, r28.u8);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x8239f204
	if (!cr6.eq) goto loc_8239F204;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r29,15152(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 15152);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r30,15148(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 15148);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8239f1f0
	if (cr0.eq) goto loc_8239F1F0;
loc_8239F1C4:
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// blt cr6,0x8239f1f0
	if (cr6.lt) goto loc_8239F1F0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8239f1e8
	if (cr0.eq) goto loc_8239F1E8;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8239F1E8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8239f1c4
	goto loc_8239F1C4;
loc_8239F1F0:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r4,r11,748
	ctx.r4.s64 = r11.s64 + 748;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,736
	ctx.r3.s64 = r11.s64 + 736;
	// bl 0x8239f0e0
	sub_8239F0E0(ctx, base);
loc_8239F204:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r4,r11,756
	ctx.r4.s64 = r11.s64 + 756;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,752
	ctx.r3.s64 = r11.s64 + 752;
	// bl 0x8239f0e0
	sub_8239F0E0(ctx, base);
loc_8239F218:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	r12.s64 = r31.s64 + 128;
	// bl 0x8239f260
	sub_8239F260(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8239f238
	if (!cr6.eq) goto loc_8239F238;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826e4b5c
	__imp__KeBugCheck(ctx, base);
loc_8239F238:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8239F140"))) PPC_WEAK_FUNC(sub_8239F140);
PPC_FUNC_IMPL(__imp__sub_8239F140) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r28,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r28.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x823a4260
	sub_823A4260(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,17120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17120);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8239f218
	if (cr6.eq) goto loc_8239F218;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,17116(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17116);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8239f190
	if (!cr6.eq) goto loc_8239F190;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826e4b5c
	__imp__KeBugCheck(ctx, base);
loc_8239F190:
	// li r11,1
	r11.s64 = 1;
	// stw r11,17116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17116, r11.u32);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// stb r28,17112(r10)
	PPC_STORE_U8(ctx.r10.u32 + 17112, r28.u8);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x8239f204
	if (!cr6.eq) goto loc_8239F204;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r29,15152(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 15152);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r30,15148(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 15148);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8239f1f0
	if (cr0.eq) goto loc_8239F1F0;
loc_8239F1C4:
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// blt cr6,0x8239f1f0
	if (cr6.lt) goto loc_8239F1F0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8239f1e8
	if (cr0.eq) goto loc_8239F1E8;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8239F1E8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8239f1c4
	goto loc_8239F1C4;
loc_8239F1F0:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r4,r11,748
	ctx.r4.s64 = r11.s64 + 748;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,736
	ctx.r3.s64 = r11.s64 + 736;
	// bl 0x8239f0e0
	sub_8239F0E0(ctx, base);
loc_8239F204:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r4,r11,756
	ctx.r4.s64 = r11.s64 + 756;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,752
	ctx.r3.s64 = r11.s64 + 752;
	// bl 0x8239f0e0
	sub_8239F0E0(ctx, base);
loc_8239F218:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	r12.s64 = r31.s64 + 128;
	// bl 0x8239f260
	sub_8239F260(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8239f238
	if (!cr6.eq) goto loc_8239F238;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826e4b5c
	__imp__KeBugCheck(ctx, base);
loc_8239F238:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8239F240"))) PPC_WEAK_FUNC(sub_8239F240);
PPC_FUNC_IMPL(__imp__sub_8239F240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,164(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// b 0x8239f278
	goto loc_8239F278;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_8239F278:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x8239f288
	if (cr6.eq) goto loc_8239F288;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x823a4100
	sub_823A4100(ctx, base);
loc_8239F288:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239F260"))) PPC_WEAK_FUNC(sub_8239F260);
PPC_FUNC_IMPL(__imp__sub_8239F260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x8239f288
	if (cr6.eq) goto loc_8239F288;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x823a4100
	sub_823A4100(ctx, base);
loc_8239F288:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239F2A0"))) PPC_WEAK_FUNC(sub_8239F2A0);
PPC_FUNC_IMPL(__imp__sub_8239F2A0) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8239f140
	sub_8239F140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239F2AC"))) PPC_WEAK_FUNC(sub_8239F2AC);
PPC_FUNC_IMPL(__imp__sub_8239F2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239F2B0"))) PPC_WEAK_FUNC(sub_8239F2B0);
PPC_FUNC_IMPL(__imp__sub_8239F2B0) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8239f140
	sub_8239F140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239F2BC"))) PPC_WEAK_FUNC(sub_8239F2BC);
PPC_FUNC_IMPL(__imp__sub_8239F2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239F2C0"))) PPC_WEAK_FUNC(sub_8239F2C0);
PPC_FUNC_IMPL(__imp__sub_8239F2C0) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8239f140
	sub_8239F140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239F2D0"))) PPC_WEAK_FUNC(sub_8239F2D0);
PPC_FUNC_IMPL(__imp__sub_8239F2D0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823abad0
	sub_823ABAD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823af220
	sub_823AF220(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823a3f28
	sub_823A3F28(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823abac0
	sub_823ABAC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823a3f10
	sub_823A3F10(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// addi r11,r11,-3408
	r11.s64 = r11.s64 + -3408;
	// stw r11,-24152(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24152, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239F32C"))) PPC_WEAK_FUNC(sub_8239F32C);
PPC_FUNC_IMPL(__imp__sub_8239F32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239F330"))) PPC_WEAK_FUNC(sub_8239F330);
PPC_FUNC_IMPL(__imp__sub_8239F330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r3,-65
	r11.s64 = ctx.r3.s64 + -65;
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(r11.u32, 25, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239F344"))) PPC_WEAK_FUNC(sub_8239F344);
PPC_FUNC_IMPL(__imp__sub_8239F344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239F348"))) PPC_WEAK_FUNC(sub_8239F348);
PPC_FUNC_IMPL(__imp__sub_8239F348) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,32
	r11.s64 = 32;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8239F378:
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8239f378
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8239F378;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8239F388:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// clrlwi r7,r11,29
	ctx.r7.u64 = r11.u32 & 0x7;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// slw r11,r8,r7
	r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// stbx r11,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, r11.u8);
	// bne 0x8239f388
	if (!cr0.eq) goto loc_8239F388;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// mr r11,r30
	r11.u64 = r30.u64;
	// bne cr6,0x8239f3d4
	if (!cr6.eq) goto loc_8239F3D4;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8239f3d4
	goto loc_8239F3D4;
loc_8239F3C8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8239f3f4
	if (cr6.eq) goto loc_8239F3F4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_8239F3D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// clrlwi r7,r10,29
	ctx.r7.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r6,r10,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// lbzx r9,r6,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// slw r7,r8,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// and. r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8239f3c8
	if (!cr0.eq) goto loc_8239F3C8;
loc_8239F3F4:
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// b 0x8239f420
	goto loc_8239F420;
loc_8239F3FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// clrlwi r6,r10,29
	ctx.r6.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// lbzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// slw r7,r8,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// and. r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8239f430
	if (!cr0.eq) goto loc_8239F430;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_8239F420:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8239f3fc
	if (!cr0.eq) goto loc_8239F3FC;
	// b 0x8239f43c
	goto loc_8239F43C;
loc_8239F430:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_8239F43C:
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8239f450
	if (cr6.eq) goto loc_8239F450;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_8239F450:
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

__attribute__((alias("__imp__sub_8239F468"))) PPC_WEAK_FUNC(sub_8239F468);
PPC_FUNC_IMPL(__imp__sub_8239F468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r19,19276(r14)
	r19.u64 = PPC_LOAD_U32(r14.u32 + 19276);
	// lwz r16,-14880(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14880);
	// mflr r12
	// bl 0x8239bcfc
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8239f4e4
	if (!cr0.eq) goto loc_8239F4E4;
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8239f558
	goto loc_8239F558;
loc_8239F4E4:
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// addi r10,r31,152
	ctx.r10.s64 = r31.s64 + 152;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x823a0e80
	sub_823A0E80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,32
	ctx.r4.s64 = r11.s64 + 32;
	// bl 0x823a1030
	sub_823A1030(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x823a0e80
	sub_823A0E80(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x823af310
	sub_823AF310(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x823a0e80
	sub_823A0E80(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x823ad4b0
	sub_823AD4B0(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// bl 0x823a0e80
	sub_823A0E80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,32
	ctx.r4.s64 = r11.s64 + 32;
	// bl 0x823af3f8
	sub_823AF3F8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	r12.s64 = r31.s64 + 128;
	// bl 0x8239f560
	sub_8239F560(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_8239F558:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8239F470"))) PPC_WEAK_FUNC(sub_8239F470);
PPC_FUNC_IMPL(__imp__sub_8239F470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8239f4e4
	if (!cr0.eq) goto loc_8239F4E4;
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8239f558
	goto loc_8239F558;
loc_8239F4E4:
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// addi r10,r31,152
	ctx.r10.s64 = r31.s64 + 152;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x823a0e80
	sub_823A0E80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,32
	ctx.r4.s64 = r11.s64 + 32;
	// bl 0x823a1030
	sub_823A1030(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x823a0e80
	sub_823A0E80(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x823af310
	sub_823AF310(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x823a0e80
	sub_823A0E80(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x823ad4b0
	sub_823AD4B0(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// bl 0x823a0e80
	sub_823A0E80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,32
	ctx.r4.s64 = r11.s64 + 32;
	// bl 0x823af3f8
	sub_823AF3F8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	r12.s64 = r31.s64 + 128;
	// bl 0x8239f560
	sub_8239F560(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_8239F558:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8239F560"))) PPC_WEAK_FUNC(sub_8239F560);
PPC_FUNC_IMPL(__imp__sub_8239F560) {
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
	// bl 0x823a0e80
	sub_823A0E80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,32
	ctx.r4.s64 = r11.s64 + 32;
	// bl 0x823a1080
	sub_823A1080(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239F590"))) PPC_WEAK_FUNC(sub_8239F590);
PPC_FUNC_IMPL(__imp__sub_8239F590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r11,-22104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22104);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,17124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17124);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239F5B4"))) PPC_WEAK_FUNC(sub_8239F5B4);
PPC_FUNC_IMPL(__imp__sub_8239F5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239F5B8"))) PPC_WEAK_FUNC(sub_8239F5B8);
PPC_FUNC_IMPL(__imp__sub_8239F5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r19,19276(r14)
	r19.u64 = PPC_LOAD_U32(r14.u32 + 19276);
	// lwz r16,-14856(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14856);
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
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x823b99f8
	sub_823B99F8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x8239f2b0
	sub_8239F2B0(ctx, base);
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

__attribute__((alias("__imp__sub_8239F5C0"))) PPC_WEAK_FUNC(sub_8239F5C0);
PPC_FUNC_IMPL(__imp__sub_8239F5C0) {
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
	// addi r31,r1,-96
	r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x823b99f8
	sub_823B99F8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x8239f2b0
	sub_8239F2B0(ctx, base);
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

__attribute__((alias("__imp__sub_8239F614"))) PPC_WEAK_FUNC(sub_8239F614);
PPC_FUNC_IMPL(__imp__sub_8239F614) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823af028
	sub_823AF028(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239F644"))) PPC_WEAK_FUNC(sub_8239F644);
PPC_FUNC_IMPL(__imp__sub_8239F644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239F648"))) PPC_WEAK_FUNC(sub_8239F648);
PPC_FUNC_IMPL(__imp__sub_8239F648) {
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
	// bl 0x823a28c0
	sub_823A28C0(ctx, base);
	// bl 0x823a28b0
	sub_823A28B0(ctx, base);
	// bl 0x823a2868
	sub_823A2868(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8239f698
	if (!cr0.eq) goto loc_8239F698;
	// bl 0x823a28b0
	sub_823A28B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823a2908
	sub_823A2908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8239f68c
	if (!cr0.eq) goto loc_8239F68C;
	// bl 0x823b6468
	sub_823B6468(ctx, base);
	// bl 0x823b99f8
	sub_823B99F8(ctx, base);
loc_8239F68C:
	// bl 0x823b6748
	sub_823B6748(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x8239f6b8
	goto loc_8239F6B8;
loc_8239F698:
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,84(r11)
	PPC_STORE_U32(r11.u32 + 84, ctx.r10.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r10,88(r11)
	PPC_STORE_U32(r11.u32 + 88, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bl 0x823a2aa8
	sub_823A2AA8(ctx, base);
loc_8239F6B8:
	// bl 0x8239f5c0
	sub_8239F5C0(ctx, base);
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

__attribute__((alias("__imp__sub_8239F6D4"))) PPC_WEAK_FUNC(sub_8239F6D4);
PPC_FUNC_IMPL(__imp__sub_8239F6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239F6D8"))) PPC_WEAK_FUNC(sub_8239F6D8);
PPC_FUNC_IMPL(__imp__sub_8239F6D8) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8239f734
	if (!cr6.eq) goto loc_8239F734;
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
	// b 0x8239f7bc
	goto loc_8239F7BC;
loc_8239F734:
	// bl 0x823a28c0
	sub_823A28C0(ctx, base);
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823abc70
	sub_823ABC70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8239f7a4
	if (cr0.eq) goto loc_8239F7A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a2990
	sub_823A2990(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x8239f774
	if (!cr6.eq) goto loc_8239F774;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
loc_8239F774:
	// lis r11,-32198
	r11.s64 = -2110128128;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,-2488
	ctx.r5.s64 = r11.s64 + -2488;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823b9a20
	sub_823B9A20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8239f7c0
	if (!cr0.eq) goto loc_8239F7C0;
	// bl 0x823b6468
	sub_823B6468(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8239F7A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8239f7bc
	if (cr6.eq) goto loc_8239F7BC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823a0000
	sub_823A0000(ctx, base);
loc_8239F7BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239F7C0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8239F7C8"))) PPC_WEAK_FUNC(sub_8239F7C8);
PPC_FUNC_IMPL(__imp__sub_8239F7C8) {
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
	// bl 0x823af580
	sub_823AF580(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8239f804
	if (!cr6.eq) goto loc_8239F804;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x8239f874
	goto loc_8239F874;
loc_8239F804:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823b6070
	sub_823B6070(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// bne cr6,0x8239f828
	if (!cr6.eq) goto loc_8239F828;
	// bl 0x823b6468
	sub_823B6468(ctx, base);
	// b 0x8239f82c
	goto loc_8239F82C;
loc_8239F828:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239F82C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8239f840
	if (cr6.eq) goto loc_8239F840;
	// bl 0x823a0000
	sub_823A0000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8239f874
	goto loc_8239F874;
loc_8239F840:
	// srawi r10,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = r31.s32 >> 5;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,14880
	r11.s64 = r11.s64 + 14880;
	// clrlwi r10,r31,27
	ctx.r10.u64 = r31.u32 & 0x1F;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
loc_8239F874:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8239F87C"))) PPC_WEAK_FUNC(sub_8239F87C);
PPC_FUNC_IMPL(__imp__sub_8239F87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239F880"))) PPC_WEAK_FUNC(sub_8239F880);
PPC_FUNC_IMPL(__imp__sub_8239F880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
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
	// lwz r16,-14832(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14832);
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
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,-2
	cr6.compare<int32_t>(r30.s32, -2, xer);
	// bne cr6,0x8239f8d4
	if (!cr6.eq) goto loc_8239F8D4;
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x8239f9bc
	goto loc_8239F9BC;
loc_8239F8D4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x8239f8ec
	if (cr6.lt) goto loc_8239F8EC;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,14864(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14864);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8239f928
	if (cr6.lt) goto loc_8239F928;
loc_8239F8EC:
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8239f9bc
	goto loc_8239F9BC;
loc_8239F928:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r29,r11,14880
	r29.s64 = r11.s64 + 14880;
	// srawi r11,r30,5
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1F) != 0);
	r11.s64 = r30.s32 >> 5;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r30,27
	r11.u64 = r30.u32 & 0x1F;
	// mulli r28,r11,44
	r28.s64 = r11.s64 * 44;
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239f8ec
	if (cr0.eq) goto loc_8239F8EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823af658
	sub_823AF658(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239f98c
	if (cr0.eq) goto loc_8239F98C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239f7c8
	sub_8239F7C8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// b 0x8239f9ac
	goto loc_8239F9AC;
loc_8239F98C:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8239F9AC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x8239f9e4
	sub_8239F9E4(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_8239F9BC:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8239F888"))) PPC_WEAK_FUNC(sub_8239F888);
PPC_FUNC_IMPL(__imp__sub_8239F888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,-2
	cr6.compare<int32_t>(r30.s32, -2, xer);
	// bne cr6,0x8239f8d4
	if (!cr6.eq) goto loc_8239F8D4;
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x8239f9bc
	goto loc_8239F9BC;
loc_8239F8D4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x8239f8ec
	if (cr6.lt) goto loc_8239F8EC;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,14864(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14864);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8239f928
	if (cr6.lt) goto loc_8239F928;
loc_8239F8EC:
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8239f9bc
	goto loc_8239F9BC;
loc_8239F928:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r29,r11,14880
	r29.s64 = r11.s64 + 14880;
	// srawi r11,r30,5
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1F) != 0);
	r11.s64 = r30.s32 >> 5;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r30,27
	r11.u64 = r30.u32 & 0x1F;
	// mulli r28,r11,44
	r28.s64 = r11.s64 * 44;
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239f8ec
	if (cr0.eq) goto loc_8239F8EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823af658
	sub_823AF658(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239f98c
	if (cr0.eq) goto loc_8239F98C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239f7c8
	sub_8239F7C8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// b 0x8239f9ac
	goto loc_8239F9AC;
loc_8239F98C:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8239F9AC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x8239f9e4
	sub_8239F9E4(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_8239F9BC:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8239F9C4"))) PPC_WEAK_FUNC(sub_8239F9C4);
PPC_FUNC_IMPL(__imp__sub_8239F9C4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,180(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// b 0x8239f9fc
	goto loc_8239F9FC;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_8239F9FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823af758
	sub_823AF758(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239F9E4"))) PPC_WEAK_FUNC(sub_8239F9E4);
PPC_FUNC_IMPL(__imp__sub_8239F9E4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823af758
	sub_823AF758(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239FA1C"))) PPC_WEAK_FUNC(sub_8239FA1C);
PPC_FUNC_IMPL(__imp__sub_8239FA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239FA20"))) PPC_WEAK_FUNC(sub_8239FA20);
PPC_FUNC_IMPL(__imp__sub_8239FA20) {
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
	// bl 0x823af580
	sub_823AF580(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r29,r11,14880
	r29.s64 = r11.s64 + 14880;
	// beq cr6,0x8239faac
	if (cr6.eq) goto loc_8239FAAC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// bne cr6,0x8239fa5c
	if (!cr6.eq) goto loc_8239FA5C;
	// lbz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 92);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8239fa70
	if (!cr0.eq) goto loc_8239FA70;
loc_8239FA5C:
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(r31.s32, 2, xer);
	// bne cr6,0x8239fa8c
	if (!cr6.eq) goto loc_8239FA8C;
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239fa8c
	if (cr0.eq) goto loc_8239FA8C;
loc_8239FA70:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823af580
	sub_823AF580(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823af580
	sub_823AF580(ctx, base);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// beq cr6,0x8239faac
	if (cr6.eq) goto loc_8239FAAC;
loc_8239FA8C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823af580
	sub_823AF580(ctx, base);
	// bl 0x823b54e8
	sub_823B54E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8239faac
	if (!cr0.eq) goto loc_8239FAAC;
	// bl 0x823b6468
	sub_823B6468(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8239fab0
	goto loc_8239FAB0;
loc_8239FAAC:
	// li r30,0
	r30.s64 = 0;
loc_8239FAB0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823af4e8
	sub_823AF4E8(ctx, base);
	// srawi r11,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	r11.s64 = r31.s32 >> 5;
	// clrlwi r10,r31,27
	ctx.r10.u64 = r31.u32 & 0x1F;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// beq cr6,0x8239faf0
	if (cr6.eq) goto loc_8239FAF0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a0000
	sub_823A0000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8239faf4
	goto loc_8239FAF4;
loc_8239FAF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239FAF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8239FAFC"))) PPC_WEAK_FUNC(sub_8239FAFC);
PPC_FUNC_IMPL(__imp__sub_8239FAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239FB00"))) PPC_WEAK_FUNC(sub_8239FB00);
PPC_FUNC_IMPL(__imp__sub_8239FB00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// lwz r16,-14808(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14808);
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
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// cmpwi cr6,r30,-2
	cr6.compare<int32_t>(r30.s32, -2, xer);
	// bne cr6,0x8239fb4c
	if (!cr6.eq) goto loc_8239FB4C;
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x8239fc20
	goto loc_8239FC20;
loc_8239FB4C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x8239fb64
	if (cr6.lt) goto loc_8239FB64;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,14864(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14864);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8239fba0
	if (cr6.lt) goto loc_8239FBA0;
loc_8239FB64:
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8239fc20
	goto loc_8239FC20;
loc_8239FBA0:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r29,r11,14880
	r29.s64 = r11.s64 + 14880;
	// srawi r11,r30,5
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1F) != 0);
	r11.s64 = r30.s32 >> 5;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r30,27
	r11.u64 = r30.u32 & 0x1F;
	// mulli r28,r11,44
	r28.s64 = r11.s64 * 44;
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239fb64
	if (cr0.eq) goto loc_8239FB64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823af658
	sub_823AF658(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239fbfc
	if (cr0.eq) goto loc_8239FBFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239fa20
	sub_8239FA20(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// b 0x8239fc10
	goto loc_8239FC10;
loc_8239FBFC:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8239FC10:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x8239fc48
	sub_8239FC48(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_8239FC20:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8239FB08"))) PPC_WEAK_FUNC(sub_8239FB08);
PPC_FUNC_IMPL(__imp__sub_8239FB08) {
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
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// cmpwi cr6,r30,-2
	cr6.compare<int32_t>(r30.s32, -2, xer);
	// bne cr6,0x8239fb4c
	if (!cr6.eq) goto loc_8239FB4C;
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x8239fc20
	goto loc_8239FC20;
loc_8239FB4C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x8239fb64
	if (cr6.lt) goto loc_8239FB64;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,14864(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14864);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8239fba0
	if (cr6.lt) goto loc_8239FBA0;
loc_8239FB64:
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8239fc20
	goto loc_8239FC20;
loc_8239FBA0:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r29,r11,14880
	r29.s64 = r11.s64 + 14880;
	// srawi r11,r30,5
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1F) != 0);
	r11.s64 = r30.s32 >> 5;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r30,27
	r11.u64 = r30.u32 & 0x1F;
	// mulli r28,r11,44
	r28.s64 = r11.s64 * 44;
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239fb64
	if (cr0.eq) goto loc_8239FB64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823af658
	sub_823AF658(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239fbfc
	if (cr0.eq) goto loc_8239FBFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239fa20
	sub_8239FA20(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// b 0x8239fc10
	goto loc_8239FC10;
loc_8239FBFC:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8239FC10:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x8239fc48
	sub_8239FC48(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_8239FC20:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8239FC28"))) PPC_WEAK_FUNC(sub_8239FC28);
PPC_FUNC_IMPL(__imp__sub_8239FC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,164(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// b 0x8239fc60
	goto loc_8239FC60;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_8239FC60:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823af758
	sub_823AF758(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239FC48"))) PPC_WEAK_FUNC(sub_8239FC48);
PPC_FUNC_IMPL(__imp__sub_8239FC48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823af758
	sub_823AF758(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239FC80"))) PPC_WEAK_FUNC(sub_8239FC80);
PPC_FUNC_IMPL(__imp__sub_8239FC80) {
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
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x823af580
	sub_823AF580(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8239fcc4
	if (!cr6.eq) goto loc_8239FCC4;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x8239fd2c
	goto loc_8239FD2C;
loc_8239FCC4:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x823b6070
	sub_823B6070(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8239fcf8
	if (!cr6.eq) goto loc_8239FCF8;
	// bl 0x823b6468
	sub_823B6468(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239fcf8
	if (cr0.eq) goto loc_8239FCF8;
	// bl 0x823a0000
	sub_823A0000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8239fd2c
	goto loc_8239FD2C;
loc_8239FCF8:
	// srawi r10,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = r31.s32 >> 5;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,14880
	r11.s64 = r11.s64 + 14880;
	// clrlwi r10,r31,27
	ctx.r10.u64 = r31.u32 & 0x1F;
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_8239FD2C:
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

__attribute__((alias("__imp__sub_8239FD44"))) PPC_WEAK_FUNC(sub_8239FD44);
PPC_FUNC_IMPL(__imp__sub_8239FD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239FD48"))) PPC_WEAK_FUNC(sub_8239FD48);
PPC_FUNC_IMPL(__imp__sub_8239FD48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
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
	// lwz r16,-14784(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14784);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r24,-1
	r24.s64 = -1;
	// std r24,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r24.u64);
	// cmpwi cr6,r30,-2
	cr6.compare<int32_t>(r30.s32, -2, xer);
	// bne cr6,0x8239fda4
	if (!cr6.eq) goto loc_8239FDA4;
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x8239fe88
	goto loc_8239FE88;
loc_8239FDA4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x8239fdbc
	if (cr6.lt) goto loc_8239FDBC;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,14864(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14864);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8239fdf8
	if (cr6.lt) goto loc_8239FDF8;
loc_8239FDBC:
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8239fe88
	goto loc_8239FE88;
loc_8239FDF8:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r29,r11,14880
	r29.s64 = r11.s64 + 14880;
	// srawi r11,r30,5
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1F) != 0);
	r11.s64 = r30.s32 >> 5;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r30,27
	r11.u64 = r30.u32 & 0x1F;
	// mulli r28,r11,44
	r28.s64 = r11.s64 * 44;
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239fdbc
	if (cr0.eq) goto loc_8239FDBC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823af658
	sub_823AF658(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239fe5c
	if (cr0.eq) goto loc_8239FE5C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239fc80
	sub_8239FC80(ctx, base);
	// std r3,80(r31)
	PPC_STORE_U64(r31.u32 + 80, ctx.r3.u64);
	// b 0x8239fe78
	goto loc_8239FE78;
loc_8239FE5C:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// std r24,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r24.u64);
loc_8239FE78:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x8239feb0
	sub_8239FEB0(ctx, base);
	// ld r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 80);
loc_8239FE88:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8239FD50"))) PPC_WEAK_FUNC(sub_8239FD50);
PPC_FUNC_IMPL(__imp__sub_8239FD50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r24,-1
	r24.s64 = -1;
	// std r24,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r24.u64);
	// cmpwi cr6,r30,-2
	cr6.compare<int32_t>(r30.s32, -2, xer);
	// bne cr6,0x8239fda4
	if (!cr6.eq) goto loc_8239FDA4;
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x8239fe88
	goto loc_8239FE88;
loc_8239FDA4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x8239fdbc
	if (cr6.lt) goto loc_8239FDBC;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,14864(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14864);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8239fdf8
	if (cr6.lt) goto loc_8239FDF8;
loc_8239FDBC:
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8239fe88
	goto loc_8239FE88;
loc_8239FDF8:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r29,r11,14880
	r29.s64 = r11.s64 + 14880;
	// srawi r11,r30,5
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1F) != 0);
	r11.s64 = r30.s32 >> 5;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r30,27
	r11.u64 = r30.u32 & 0x1F;
	// mulli r28,r11,44
	r28.s64 = r11.s64 * 44;
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239fdbc
	if (cr0.eq) goto loc_8239FDBC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823af658
	sub_823AF658(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239fe5c
	if (cr0.eq) goto loc_8239FE5C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239fc80
	sub_8239FC80(ctx, base);
	// std r3,80(r31)
	PPC_STORE_U64(r31.u32 + 80, ctx.r3.u64);
	// b 0x8239fe78
	goto loc_8239FE78;
loc_8239FE5C:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// std r24,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r24.u64);
loc_8239FE78:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x8239feb0
	sub_8239FEB0(ctx, base);
	// ld r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 80);
loc_8239FE88:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8239FE90"))) PPC_WEAK_FUNC(sub_8239FE90);
PPC_FUNC_IMPL(__imp__sub_8239FE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,180(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// b 0x8239fec8
	goto loc_8239FEC8;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_8239FEC8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823af758
	sub_823AF758(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239FEB0"))) PPC_WEAK_FUNC(sub_8239FEB0);
PPC_FUNC_IMPL(__imp__sub_8239FEB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823af758
	sub_823AF758(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239FEE8"))) PPC_WEAK_FUNC(sub_8239FEE8);
PPC_FUNC_IMPL(__imp__sub_8239FEE8) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x823afe58
	sub_823AFE58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne 0x8239ff18
	if (!cr0.eq) goto loc_8239FF18;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8239FF18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239FF28"))) PPC_WEAK_FUNC(sub_8239FF28);
PPC_FUNC_IMPL(__imp__sub_8239FF28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r9,r11,-24144
	ctx.r9.s64 = r11.s64 + -24144;
	// li r11,0
	r11.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8239FF38:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// beq cr6,0x8239ff68
	if (cr6.eq) goto loc_8239FF68;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// blt cr6,0x8239ff38
	if (cr6.lt) goto loc_8239FF38;
	// addi r11,r3,-19
	r11.s64 = ctx.r3.s64 + -19;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(r11.u32, 17, xer);
	// bgt cr6,0x8239ff78
	if (cr6.gt) goto loc_8239FF78;
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_8239FF68:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_8239FF78:
	// addi r11,r3,-188
	r11.s64 = ctx.r3.s64 + -188;
	// subfic r11,r11,14
	xer.ca = r11.u32 <= 14;
	r11.s64 = 14 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,28,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xE;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239FF90"))) PPC_WEAK_FUNC(sub_8239FF90);
PPC_FUNC_IMPL(__imp__sub_8239FF90) {
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
	// bl 0x823a29a8
	sub_823A29A8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8239ffb4
	if (!cr0.eq) goto loc_8239FFB4;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r3,r11,-23784
	ctx.r3.s64 = r11.s64 + -23784;
	// b 0x8239ffb8
	goto loc_8239FFB8;
loc_8239FFB4:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
loc_8239FFB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239FFC8"))) PPC_WEAK_FUNC(sub_8239FFC8);
PPC_FUNC_IMPL(__imp__sub_8239FFC8) {
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
	// bl 0x823a29a8
	sub_823A29A8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8239ffec
	if (!cr0.eq) goto loc_8239FFEC;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r3,r11,-23780
	ctx.r3.s64 = r11.s64 + -23780;
	// b 0x8239fff0
	goto loc_8239FFF0;
loc_8239FFEC:
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
loc_8239FFF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A0000"))) PPC_WEAK_FUNC(sub_823A0000);
PPC_FUNC_IMPL(__imp__sub_823A0000) {
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
	// bl 0x823a29a8
	sub_823A29A8(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r11,-23784
	r31.s64 = r11.s64 + -23784;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// beq 0x823a0034
	if (cr0.eq) goto loc_823A0034;
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
loc_823A0034:
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// bl 0x823a29a8
	sub_823A29A8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// beq 0x823a004c
	if (cr0.eq) goto loc_823A004C;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_823A004C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239ff28
	sub_8239FF28(ctx, base);
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_823A0070"))) PPC_WEAK_FUNC(sub_823A0070);
PPC_FUNC_IMPL(__imp__sub_823A0070) {
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
	// stwu r1,-1232(r1)
	ea = -1232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	r21.s64 = 0;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r23,r21
	r23.u64 = r21.u64;
	// mr r22,r21
	r22.u64 = r21.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x823a00a0
	if (!cr6.eq) goto loc_823A00A0;
loc_823A0098:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823a02bc
	goto loc_823A02BC;
loc_823A00A0:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x823a00e0
	if (!cr6.eq) goto loc_823A00E0;
loc_823A00A8:
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// stw r21,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r21.u32);
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
loc_823A00D8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823a02bc
	goto loc_823A02BC;
loc_823A00E0:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r29,r11,14880
	r29.s64 = r11.s64 + 14880;
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r3,27
	r11.u64 = ctx.r3.u32 & 0x1F;
	// mulli r28,r11,44
	r28.s64 = r11.s64 * 44;
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r10,r11,r28
	ctx.r10.u64 = r11.u64 + r28.u64;
	// lbz r11,40(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// rotlwi r11,r11,24
	r11.u64 = __builtin_rotateleft32(r11.u32, 24);
	// srawi r11,r11,25
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FFFFFF) != 0);
	r11.s64 = r11.s32 >> 25;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823a0120
	if (cr6.eq) goto loc_823A0120;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x823a012c
	if (!cr6.eq) goto loc_823A012C;
loc_823A0120:
	// not r11,r26
	r11.u64 = ~r26.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a00a8
	if (cr0.eq) goto loc_823A00A8;
loc_823A012C:
	// lbz r11,4(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a0144
	if (cr0.eq) goto loc_823A0144;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239fc80
	sub_8239FC80(ctx, base);
loc_823A0144:
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a0204
	if (cr0.eq) goto loc_823A0204;
	// mr r25,r21
	r25.u64 = r21.u64;
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x823a0278
	if (cr6.eq) goto loc_823A0278;
loc_823A0168:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// subf r9,r24,r30
	ctx.r9.s64 = r30.s64 - r24.s64;
loc_823A0174:
	// cmplw cr6,r9,r26
	cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, xer);
	// bge cr6,0x823a01b8
	if (!cr6.lt) goto loc_823A01B8;
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r8,10
	cr6.compare<uint32_t>(ctx.r8.u32, 10, xer);
	// bne cr6,0x823a01a4
	if (!cr6.eq) goto loc_823A01A4;
	// li r7,13
	ctx.r7.s64 = 13;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_823A01A4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,1024
	cr6.compare<uint32_t>(ctx.r10.u32, 1024, xer);
	// blt cr6,0x823a0174
	if (cr6.lt) goto loc_823A0174;
loc_823A01B8:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwzx r9,r27,r29
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// subf r31,r10,r11
	r31.s64 = r11.s64 - ctx.r10.s64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwzx r3,r9,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + r28.u32);
	// bl 0x823b5d88
	sub_823B5D88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a0230
	if (cr0.eq) goto loc_823A0230;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r23,r11,r23
	r23.u64 = r11.u64 + r23.u64;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// blt cr6,0x823a0238
	if (cr6.lt) goto loc_823A0238;
	// subf r11,r24,r30
	r11.s64 = r30.s64 - r24.s64;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// blt cr6,0x823a0168
	if (cr6.lt) goto loc_823A0168;
	// b 0x823a0238
	goto loc_823A0238;
loc_823A0204:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x823b5d88
	sub_823B5D88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a0230
	if (cr0.eq) goto loc_823A0230;
	// lwz r23,80(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r25,r21
	r25.u64 = r21.u64;
	// b 0x823a0238
	goto loc_823A0238;
loc_823A0230:
	// bl 0x823b6468
	sub_823B6468(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_823A0238:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bne cr6,0x823a02b8
	if (!cr6.eq) goto loc_823A02B8;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x823a0278
	if (cr6.eq) goto loc_823A0278;
	// cmplwi cr6,r25,5
	cr6.compare<uint32_t>(r25.u32, 5, xer);
	// bne cr6,0x823a026c
	if (!cr6.eq) goto loc_823A026C;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x823a00d8
	goto loc_823A00D8;
loc_823A026C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823a0000
	sub_823A0000(ctx, base);
	// b 0x823a00d8
	goto loc_823A00D8;
loc_823A0278:
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a0298
	if (cr0.eq) goto loc_823A0298;
	// lbz r11,0(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 0);
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(r11.u32, 26, xer);
	// beq cr6,0x823a0098
	if (cr6.eq) goto loc_823A0098;
loc_823A0298:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,28
	r11.s64 = 28;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r21,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r21.u32);
	// b 0x823a02bc
	goto loc_823A02BC;
loc_823A02B8:
	// subf r3,r22,r23
	ctx.r3.s64 = r23.s64 - r22.s64;
loc_823A02BC:
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_823A02C4"))) PPC_WEAK_FUNC(sub_823A02C4);
PPC_FUNC_IMPL(__imp__sub_823A02C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A02C8"))) PPC_WEAK_FUNC(sub_823A02C8);
PPC_FUNC_IMPL(__imp__sub_823A02C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
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
	// lwz r16,-14760(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14760);
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
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,-2
	cr6.compare<int32_t>(r30.s32, -2, xer);
	// bne cr6,0x823a031c
	if (!cr6.eq) goto loc_823A031C;
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x823a0404
	goto loc_823A0404;
loc_823A031C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x823a0334
	if (cr6.lt) goto loc_823A0334;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,14864(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14864);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x823a0370
	if (cr6.lt) goto loc_823A0370;
loc_823A0334:
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823a0404
	goto loc_823A0404;
loc_823A0370:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r29,r11,14880
	r29.s64 = r11.s64 + 14880;
	// srawi r11,r30,5
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1F) != 0);
	r11.s64 = r30.s32 >> 5;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r30,27
	r11.u64 = r30.u32 & 0x1F;
	// mulli r28,r11,44
	r28.s64 = r11.s64 * 44;
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a0334
	if (cr0.eq) goto loc_823A0334;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823af658
	sub_823AF658(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a03d4
	if (cr0.eq) goto loc_823A03D4;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a0070
	sub_823A0070(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// b 0x823a03f4
	goto loc_823A03F4;
loc_823A03D4:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_823A03F4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x823a042c
	sub_823A042C(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_823A0404:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823A02D0"))) PPC_WEAK_FUNC(sub_823A02D0);
PPC_FUNC_IMPL(__imp__sub_823A02D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,-2
	cr6.compare<int32_t>(r30.s32, -2, xer);
	// bne cr6,0x823a031c
	if (!cr6.eq) goto loc_823A031C;
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x823a0404
	goto loc_823A0404;
loc_823A031C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x823a0334
	if (cr6.lt) goto loc_823A0334;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,14864(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14864);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x823a0370
	if (cr6.lt) goto loc_823A0370;
loc_823A0334:
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823a0404
	goto loc_823A0404;
loc_823A0370:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r29,r11,14880
	r29.s64 = r11.s64 + 14880;
	// srawi r11,r30,5
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1F) != 0);
	r11.s64 = r30.s32 >> 5;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r30,27
	r11.u64 = r30.u32 & 0x1F;
	// mulli r28,r11,44
	r28.s64 = r11.s64 * 44;
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a0334
	if (cr0.eq) goto loc_823A0334;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823af658
	sub_823AF658(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a03d4
	if (cr0.eq) goto loc_823A03D4;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a0070
	sub_823A0070(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// b 0x823a03f4
	goto loc_823A03F4;
loc_823A03D4:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_823A03F4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x823a042c
	sub_823A042C(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_823A0404:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823A040C"))) PPC_WEAK_FUNC(sub_823A040C);
PPC_FUNC_IMPL(__imp__sub_823A040C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,180(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// b 0x823a0444
	goto loc_823A0444;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_823A0444:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823af758
	sub_823AF758(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A042C"))) PPC_WEAK_FUNC(sub_823A042C);
PPC_FUNC_IMPL(__imp__sub_823A042C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823af758
	sub_823AF758(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A0464"))) PPC_WEAK_FUNC(sub_823A0464);
PPC_FUNC_IMPL(__imp__sub_823A0464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A0468"))) PPC_WEAK_FUNC(sub_823A0468);
PPC_FUNC_IMPL(__imp__sub_823A0468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823A046C:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bne 0x823a046c
	if (!cr0.eq) goto loc_823A046C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A0488"))) PPC_WEAK_FUNC(sub_823A0488);
PPC_FUNC_IMPL(__imp__sub_823A0488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
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
	// lwz r16,-14736(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14736);
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
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r28,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r28.u32);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// stw r8,220(r31)
	PPC_STORE_U32(r31.u32 + 220, ctx.r8.u32);
	// li r26,0
	r26.s64 = 0;
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_823A04CC:
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// cmpw cr6,r26,r25
	cr6.compare<int32_t>(r26.s32, r25.s32, xer);
	// bge cr6,0x823a0504
	if (!cr6.lt) goto loc_823A0504;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// stw r29,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r29.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// b 0x823a04cc
	goto loc_823A04CC;
loc_823A0504:
	// li r11,1
	r11.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x823a0550
	sub_823A0550(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823A0490"))) PPC_WEAK_FUNC(sub_823A0490);
PPC_FUNC_IMPL(__imp__sub_823A0490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r28,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r28.u32);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// stw r8,220(r31)
	PPC_STORE_U32(r31.u32 + 220, ctx.r8.u32);
	// li r26,0
	r26.s64 = 0;
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_823A04CC:
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// cmpw cr6,r26,r25
	cr6.compare<int32_t>(r26.s32, r25.s32, xer);
	// bge cr6,0x823a0504
	if (!cr6.lt) goto loc_823A0504;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// stw r29,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r29.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// b 0x823a04cc
	goto loc_823A04CC;
loc_823A0504:
	// li r11,1
	r11.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x823a0550
	sub_823A0550(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823A0520"))) PPC_WEAK_FUNC(sub_823A0520);
PPC_FUNC_IMPL(__imp__sub_823A0520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r28{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r28,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r28.u64);
	// std r26,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r26.u64);
	// mflr r12
	// stw r12,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,196(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r30,180(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lwz r26,80(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x823a0570
	goto loc_823A0570;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r28,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r28.u64);
	// std r26,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r26.u64);
	// mflr r12
	// stw r12,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_823A0570:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823a0590
	if (!cr6.eq) goto loc_823A0590;
	// lwz r6,220(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239ca38
	sub_8239CA38(ctx, base);
loc_823A0590:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r26,-32(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lwz r12,-40(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A0550"))) PPC_WEAK_FUNC(sub_823A0550);
PPC_FUNC_IMPL(__imp__sub_823A0550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r28{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r28,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r28.u64);
	// std r26,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r26.u64);
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
	// bne cr6,0x823a0590
	if (!cr6.eq) goto loc_823A0590;
	// lwz r6,220(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239ca38
	sub_8239CA38(ctx, base);
loc_823A0590:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r26,-32(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lwz r12,-40(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A05B0"))) PPC_WEAK_FUNC(sub_823A05B0);
PPC_FUNC_IMPL(__imp__sub_823A05B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister f0{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,-30832
	r11.s64 = r11.s64 + -30832;
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// lfd f13,-30736(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -30736);
	// lfd f0,24(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// fmul f0,f1,f0
	f0.f64 = ctx.f1.f64 * f0.f64;
	// lfd f12,64(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 64);
	// lfd f11,88(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 88);
	// fctid f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&f0.f64));
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fnmsub f13,f0,f13,f1
	ctx.f13.f64 = -(f0.f64 * ctx.f13.f64 - ctx.f1.f64);
	// fctiwz f10,f0
	ctx.f10.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f10,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f10.u32);
	// lfd f10,56(r11)
	ctx.f10.u64 = PPC_LOAD_U64(r11.u32 + 56);
	// fmul f0,f13,f13
	f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fmadd f10,f0,f12,f10
	ctx.f10.f64 = f0.f64 * ctx.f12.f64 + ctx.f10.f64;
	// lfd f12,80(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 80);
	// fmadd f11,f0,f11,f12
	ctx.f11.f64 = f0.f64 * ctx.f11.f64 + ctx.f12.f64;
	// lfd f12,48(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 48);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,72(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 72);
	// fmadd f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// fmul f0,f10,f13
	f0.f64 = ctx.f10.f64 * ctx.f13.f64;
	// fsub f13,f11,f0
	ctx.f13.f64 = ctx.f11.f64 - f0.f64;
	// lwz r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// addic. r10,r10,1
	xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// fdiv f0,f0,f13
	f0.f64 = f0.f64 / ctx.f13.f64;
	// fadd f0,f0,f12
	f0.f64 = f0.f64 + ctx.f12.f64;
	// beq 0x823a0664
	if (cr0.eq) goto loc_823A0664;
	// stfd f0,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f0.u64);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// stfd f0,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f0.u64);
	// lhz r9,-24(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -24);
	// lhz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// rlwinm r9,r9,28,21,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x7FF;
	// addi r9,r9,-1022
	ctx.r9.s64 = ctx.r9.s64 + -1022;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,1022
	ctx.r10.s64 = ctx.r10.s64 + 1022;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// andi. r8,r8,32783
	ctx.r8.u64 = ctx.r8.u64 & 32783;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// sth r10,-32(r1)
	PPC_STORE_U16(ctx.r1.u32 + -32, ctx.r10.u16);
	// lfd f0,-32(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
loc_823A0664:
	// lfd f12,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// fsub f10,f1,f12
	ctx.f10.f64 = ctx.f1.f64 - ctx.f12.f64;
	// lfd f11,8(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// fsub f11,f11,f1
	ctx.f11.f64 = ctx.f11.f64 - ctx.f1.f64;
	// lfd f13,-22592(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -22592);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfd f12,-31368(r10)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + -31368);
	// fsel f0,f10,f13,f0
	f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// fsel f1,f11,f12,f0
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A0690"))) PPC_WEAK_FUNC(sub_823A0690);
PPC_FUNC_IMPL(__imp__sub_823A0690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
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
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r11,-30760
	r31.s64 = r11.s64 + -30760;
	// lfd f0,-48(r31)
	f0.u64 = PPC_LOAD_U64(r31.u32 + -48);
	// fmul f1,f30,f0
	ctx.f1.f64 = f30.f64 * f0.f64;
	// bl 0x823b0010
	sub_823B0010(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfd f0,-40(r31)
	f0.u64 = PPC_LOAD_U64(r31.u32 + -40);
	// lfd f13,-32(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + -32);
	// lfd f12,-8(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + -8);
	// lfd f10,-16(r31)
	ctx.f10.u64 = PPC_LOAD_U64(r31.u32 + -16);
	// lfd f11,16(r31)
	ctx.f11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// fnmsub f0,f31,f0,f30
	f0.f64 = -(f31.f64 * f0.f64 - f30.f64);
	// fnmsub f13,f31,f13,f0
	ctx.f13.f64 = -(f31.f64 * ctx.f13.f64 - f0.f64);
	// fmul f0,f13,f13
	f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fmadd f10,f0,f12,f10
	ctx.f10.f64 = f0.f64 * ctx.f12.f64 + ctx.f10.f64;
	// lfd f12,8(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// fmadd f11,f0,f11,f12
	ctx.f11.f64 = f0.f64 * ctx.f11.f64 + ctx.f12.f64;
	// lfd f12,-24(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + -24);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,0(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// fmadd f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// fmul f0,f10,f13
	f0.f64 = ctx.f10.f64 * ctx.f13.f64;
	// fsub f13,f11,f0
	ctx.f13.f64 = ctx.f11.f64 - f0.f64;
	// fdiv f0,f0,f13
	f0.f64 = f0.f64 / ctx.f13.f64;
	// fadd f30,f0,f12
	f30.f64 = f0.f64 + ctx.f12.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x823abd00
	sub_823ABD00(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f31.f64));
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_823A0760"))) PPC_WEAK_FUNC(sub_823A0760);
PPC_FUNC_IMPL(__imp__sub_823A0760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823a07b4
	if (!cr6.eq) goto loc_823A07B4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823a07b4
	if (cr6.eq) goto loc_823A07B4;
loc_823A0784:
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
loc_823A07AC:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x8239bd30
	return;
loc_823A07B4:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x823a0784
	if (cr6.eq) goto loc_823A0784;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x823a0784
	if (cr6.eq) goto loc_823A0784;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// blt cr6,0x823a07ac
	if (cr6.lt) goto loc_823A07AC;
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// li r22,0
	r22.s64 = 0;
	// mullw r11,r11,r27
	r11.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// add r28,r11,r3
	r28.u64 = r11.u64 + ctx.r3.u64;
	// addi r23,r1,80
	r23.s64 = ctx.r1.s64 + 80;
	// addi r24,r1,208
	r24.s64 = ctx.r1.s64 + 208;
loc_823A07E8:
	// subf r11,r26,r28
	r11.s64 = r28.s64 - r26.s64;
	// twllei r27,0
	// divwu r11,r11,r27
	r11.u32 = r11.u32 / r27.u32;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bgt cr6,0x823a08a8
	if (cr6.gt) goto loc_823A08A8;
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(r28.u32, r26.u32, xer);
	// ble cr6,0x823a0888
	if (!cr6.gt) goto loc_823A0888;
	// add r28,r26,r27
	r28.u64 = r26.u64 + r27.u64;
loc_823A0810:
	// mr r31,r28
	r31.u64 = r28.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bgt cr6,0x823a0848
	if (cr6.gt) goto loc_823A0848;
loc_823A0820:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x823a083c
	if (!cr6.gt) goto loc_823A083C;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_823A083C:
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// ble cr6,0x823a0820
	if (!cr6.gt) goto loc_823A0820;
loc_823A0848:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x823a087c
	if (cr6.eq) goto loc_823A087C;
	// subf r9,r29,r30
	ctx.r9.s64 = r30.s64 - r29.s64;
loc_823A085C:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stbx r7,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r7.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne cr6,0x823a085c
	if (!cr6.eq) goto loc_823A085C;
loc_823A087C:
	// subf r29,r27,r29
	r29.s64 = r29.s64 - r27.s64;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(r29.u32, r26.u32, xer);
	// bgt cr6,0x823a0810
	if (cr6.gt) goto loc_823A0810;
loc_823A0888:
	// addi r22,r22,-1
	r22.s64 = r22.s64 + -1;
	// addi r24,r24,-4
	r24.s64 = r24.s64 + -4;
	// addi r23,r23,-4
	r23.s64 = r23.s64 + -4;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// blt cr6,0x823a07ac
	if (cr6.lt) goto loc_823A07AC;
	// lwz r26,0(r24)
	r26.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r28,0(r23)
	r28.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// b 0x823a07e8
	goto loc_823A07E8;
loc_823A08A8:
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mullw r11,r11,r27
	r11.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// add r29,r11,r26
	r29.u64 = r11.u64 + r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x823a0900
	if (!cr6.gt) goto loc_823A0900;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(r26.u32, r29.u32, xer);
	// beq cr6,0x823a0900
	if (cr6.eq) goto loc_823A0900;
	// subf r9,r29,r26
	ctx.r9.s64 = r26.s64 - r29.s64;
loc_823A08E0:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stbx r7,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r7.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne cr6,0x823a08e0
	if (!cr6.eq) goto loc_823A08E0;
loc_823A0900:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x823a094c
	if (!cr6.gt) goto loc_823A094C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplw cr6,r26,r28
	cr6.compare<uint32_t>(r26.u32, r28.u32, xer);
	// beq cr6,0x823a094c
	if (cr6.eq) goto loc_823A094C;
	// subf r9,r28,r26
	ctx.r9.s64 = r26.s64 - r28.s64;
loc_823A092C:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stbx r7,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r7.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne cr6,0x823a092c
	if (!cr6.eq) goto loc_823A092C;
loc_823A094C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x823a0998
	if (!cr6.gt) goto loc_823A0998;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// beq cr6,0x823a0998
	if (cr6.eq) goto loc_823A0998;
	// subf r9,r28,r29
	ctx.r9.s64 = r29.s64 - r28.s64;
loc_823A0978:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stbx r7,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r7.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne cr6,0x823a0978
	if (!cr6.eq) goto loc_823A0978;
loc_823A0998:
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r31,r28
	r31.u64 = r28.u64;
loc_823A09A0:
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// ble cr6,0x823a09d4
	if (!cr6.gt) goto loc_823A09D4;
loc_823A09A8:
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bge cr6,0x823a09d4
	if (!cr6.lt) goto loc_823A09D4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x823a09a8
	if (!cr6.gt) goto loc_823A09A8;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// bgt cr6,0x823a09f8
	if (cr6.gt) goto loc_823A09F8;
loc_823A09D4:
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// bgt cr6,0x823a09f8
	if (cr6.gt) goto loc_823A09F8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x823a09d4
	if (!cr6.gt) goto loc_823A09D4;
loc_823A09F8:
	// subf r31,r27,r31
	r31.s64 = r31.s64 - r27.s64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// ble cr6,0x823a0a1c
	if (!cr6.gt) goto loc_823A0A1C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x823a09f8
	if (cr6.gt) goto loc_823A09F8;
loc_823A0A1C:
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// bgt cr6,0x823a0a64
	if (cr6.gt) goto loc_823A0A64;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r31
	r11.u64 = r31.u64;
	// beq cr6,0x823a0a54
	if (cr6.eq) goto loc_823A0A54;
	// subf r9,r31,r30
	ctx.r9.s64 = r30.s64 - r31.s64;
loc_823A0A34:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stbx r7,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r7.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne cr6,0x823a0a34
	if (!cr6.eq) goto loc_823A0A34;
loc_823A0A54:
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// bne cr6,0x823a09a0
	if (!cr6.eq) goto loc_823A09A0;
	// mr r29,r30
	r29.u64 = r30.u64;
	// b 0x823a09a0
	goto loc_823A09A0;
loc_823A0A64:
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// bge cr6,0x823a0a9c
	if (!cr6.lt) goto loc_823A0A9C;
loc_823A0A70:
	// subf r31,r27,r31
	r31.s64 = r31.s64 - r27.s64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// ble cr6,0x823a0a9c
	if (!cr6.gt) goto loc_823A0A9C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x823a0a70
	if (cr6.eq) goto loc_823A0A70;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// blt cr6,0x823a0ac0
	if (cr6.lt) goto loc_823A0AC0;
loc_823A0A9C:
	// subf r31,r27,r31
	r31.s64 = r31.s64 - r27.s64;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// ble cr6,0x823a0ac0
	if (!cr6.gt) goto loc_823A0AC0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x823a0a9c
	if (cr6.eq) goto loc_823A0A9C;
loc_823A0AC0:
	// subf r11,r30,r28
	r11.s64 = r28.s64 - r30.s64;
	// subf r10,r26,r31
	ctx.r10.s64 = r31.s64 - r26.s64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// blt cr6,0x823a0afc
	if (cr6.lt) goto loc_823A0AFC;
	// cmplw cr6,r26,r31
	cr6.compare<uint32_t>(r26.u32, r31.u32, xer);
	// bge cr6,0x823a0aec
	if (!cr6.lt) goto loc_823A0AEC;
	// stw r26,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r26.u32);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// stw r31,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r31.u32);
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
loc_823A0AEC:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// bge cr6,0x823a0888
	if (!cr6.lt) goto loc_823A0888;
	// mr r26,r30
	r26.u64 = r30.u64;
	// b 0x823a07e8
	goto loc_823A07E8;
loc_823A0AFC:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// bge cr6,0x823a0b18
	if (!cr6.lt) goto loc_823A0B18;
	// stw r30,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r30.u32);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// stw r28,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r28.u32);
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
loc_823A0B18:
	// cmplw cr6,r26,r31
	cr6.compare<uint32_t>(r26.u32, r31.u32, xer);
	// bge cr6,0x823a0888
	if (!cr6.lt) goto loc_823A0888;
	// mr r28,r31
	r28.u64 = r31.u64;
	// b 0x823a07e8
	goto loc_823A07E8;
}

__attribute__((alias("__imp__sub_823A0B28"))) PPC_WEAK_FUNC(sub_823A0B28);
PPC_FUNC_IMPL(__imp__sub_823A0B28) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x823a0b7c
	if (!cr6.eq) goto loc_823A0B7C;
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f1,-31368(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// b 0x823a0c10
	goto loc_823A0C10;
loc_823A0B7C:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r30,r11,-21688
	r30.s64 = r11.s64 + -21688;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_823A0B88:
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 172);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// ble cr6,0x823a0bac
	if (!cr6.gt) goto loc_823A0BAC;
	// li r4,8
	ctx.r4.s64 = 8;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823b0110
	sub_823B0110(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x823a0bc0
	goto loc_823A0BC0;
loc_823A0BAC:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// lwz r9,200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lhzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r10,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
loc_823A0BC0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x823a0bd0
	if (cr6.eq) goto loc_823A0BD0;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x823a0b88
	goto loc_823A0B88;
loc_823A0BD0:
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823A0BD8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a0bd8
	if (!cr6.eq) goto loc_823A0BD8;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b0058
	sub_823B0058(ctx, base);
	// lfd f1,16(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
loc_823A0C10:
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

__attribute__((alias("__imp__sub_823A0C28"))) PPC_WEAK_FUNC(sub_823A0C28);
PPC_FUNC_IMPL(__imp__sub_823A0C28) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823a0b28
	sub_823A0B28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A0C30"))) PPC_WEAK_FUNC(sub_823A0C30);
PPC_FUNC_IMPL(__imp__sub_823A0C30) {
	PPC_FUNC_PROLOGUE();
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823a1758
	sub_823A1758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A0C3C"))) PPC_WEAK_FUNC(sub_823A0C3C);
PPC_FUNC_IMPL(__imp__sub_823A0C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A0C40"))) PPC_WEAK_FUNC(sub_823A0C40);
PPC_FUNC_IMPL(__imp__sub_823A0C40) {
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
	// lwz r16,-14712(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14712);
	// mflr r12
	// bl 0x8239bcf0
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// li r26,0
	r26.s64 = 0;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823a0cc4
	if (!cr0.eq) goto loc_823A0CC4;
loc_823A0C94:
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823a0e48
	goto loc_823A0E48;
loc_823A0CC4:
	// cntlzw r11,r27
	r11.u64 = r27.u32 == 0 ? 32 : __builtin_clz(r27.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a0c94
	if (cr0.eq) goto loc_823A0C94;
	// addi r11,r31,84
	r11.s64 = r31.s64 + 84;
	// addi r10,r31,192
	ctx.r10.s64 = r31.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x823a0ff8
	sub_823A0FF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823a0e00
	if (!cr0.eq) goto loc_823A0E00;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823a0d5c
	if (cr6.eq) goto loc_823A0D5C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x823a0d5c
	if (cr6.eq) goto loc_823A0D5C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r29,r11,14880
	r29.s64 = r11.s64 + 14880;
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// clrlwi r11,r3,27
	r11.u64 = ctx.r3.u32 & 0x1F;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// mulli r11,r11,44
	r11.s64 = r11.s64 * 44;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r28,r11,-22548
	r28.s64 = r11.s64 + -22548;
	// b 0x823a0d70
	goto loc_823A0D70;
loc_823A0D5C:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r28,r11,-22548
	r28.s64 = r11.s64 + -22548;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r29,r11,14880
	r29.s64 = r11.s64 + 14880;
loc_823A0D70:
	// lbz r11,40(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823a0dd0
	if (!cr0.eq) goto loc_823A0DD0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823a0dc4
	if (cr6.eq) goto loc_823A0DC4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x823a0dc4
	if (cr6.eq) goto loc_823A0DC4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// clrlwi r11,r3,27
	r11.u64 = ctx.r3.u32 & 0x1F;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// mulli r11,r11,44
	r11.s64 = r11.s64 * 44;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
loc_823A0DC4:
	// lbz r11,40(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 40);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a0e00
	if (cr0.eq) goto loc_823A0E00;
loc_823A0DD0:
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
	// li r26,-1
	r26.s64 = -1;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
loc_823A0E00:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x823a0e38
	if (!cr6.eq) goto loc_823A0E38;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823af310
	sub_823AF310(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ad4b0
	sub_823AD4B0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823af3f8
	sub_823AF3F8(ctx, base);
loc_823A0E38:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x823a0e50
	sub_823A0E50(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_823A0E48:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823A0C48"))) PPC_WEAK_FUNC(sub_823A0C48);
PPC_FUNC_IMPL(__imp__sub_823A0C48) {
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
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// li r26,0
	r26.s64 = 0;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823a0cc4
	if (!cr0.eq) goto loc_823A0CC4;
loc_823A0C94:
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823a0e48
	goto loc_823A0E48;
loc_823A0CC4:
	// cntlzw r11,r27
	r11.u64 = r27.u32 == 0 ? 32 : __builtin_clz(r27.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a0c94
	if (cr0.eq) goto loc_823A0C94;
	// addi r11,r31,84
	r11.s64 = r31.s64 + 84;
	// addi r10,r31,192
	ctx.r10.s64 = r31.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x823a0ff8
	sub_823A0FF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823a0e00
	if (!cr0.eq) goto loc_823A0E00;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823a0d5c
	if (cr6.eq) goto loc_823A0D5C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x823a0d5c
	if (cr6.eq) goto loc_823A0D5C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r29,r11,14880
	r29.s64 = r11.s64 + 14880;
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// clrlwi r11,r3,27
	r11.u64 = ctx.r3.u32 & 0x1F;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// mulli r11,r11,44
	r11.s64 = r11.s64 * 44;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r28,r11,-22548
	r28.s64 = r11.s64 + -22548;
	// b 0x823a0d70
	goto loc_823A0D70;
loc_823A0D5C:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r28,r11,-22548
	r28.s64 = r11.s64 + -22548;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r29,r11,14880
	r29.s64 = r11.s64 + 14880;
loc_823A0D70:
	// lbz r11,40(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823a0dd0
	if (!cr0.eq) goto loc_823A0DD0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823a0dc4
	if (cr6.eq) goto loc_823A0DC4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x823a0dc4
	if (cr6.eq) goto loc_823A0DC4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// clrlwi r11,r3,27
	r11.u64 = ctx.r3.u32 & 0x1F;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// mulli r11,r11,44
	r11.s64 = r11.s64 * 44;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
loc_823A0DC4:
	// lbz r11,40(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 40);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a0e00
	if (cr0.eq) goto loc_823A0E00;
loc_823A0DD0:
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
	// li r26,-1
	r26.s64 = -1;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
loc_823A0E00:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x823a0e38
	if (!cr6.eq) goto loc_823A0E38;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823af310
	sub_823AF310(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ad4b0
	sub_823AD4B0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823af3f8
	sub_823AF3F8(ctx, base);
loc_823A0E38:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x823a0e50
	sub_823A0E50(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_823A0E48:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823A0E50"))) PPC_WEAK_FUNC(sub_823A0E50);
PPC_FUNC_IMPL(__imp__sub_823A0E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x823a1048
	sub_823A1048(ctx, base);
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

__attribute__((alias("__imp__sub_823A0E80"))) PPC_WEAK_FUNC(sub_823A0E80);
PPC_FUNC_IMPL(__imp__sub_823A0E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r3,r11,-23776
	ctx.r3.s64 = r11.s64 + -23776;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A0E8C"))) PPC_WEAK_FUNC(sub_823A0E8C);
PPC_FUNC_IMPL(__imp__sub_823A0E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A0E90"))) PPC_WEAK_FUNC(sub_823A0E90);
PPC_FUNC_IMPL(__imp__sub_823A0E90) {
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
	// lis r31,-32126
	r31.s64 = -2105409536;
	// lwz r3,15144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 15144);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x823a0ebc
	if (!cr6.eq) goto loc_823A0EBC;
	// li r3,512
	ctx.r3.s64 = 512;
	// b 0x823a0ec8
	goto loc_823A0EC8;
loc_823A0EBC:
	// cmpwi cr6,r3,20
	cr6.compare<int32_t>(ctx.r3.s32, 20, xer);
	// bge cr6,0x823a0ecc
	if (!cr6.lt) goto loc_823A0ECC;
	// li r3,20
	ctx.r3.s64 = 20;
loc_823A0EC8:
	// stw r3,15144(r31)
	PPC_STORE_U32(r31.u32 + 15144, ctx.r3.u32);
loc_823A0ECC:
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823abc70
	sub_823ABC70(ctx, base);
	// lis r30,-32126
	r30.s64 = -2105409536;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,15140(r30)
	PPC_STORE_U32(r30.u32 + 15140, ctx.r3.u32);
	// bne 0x823a0f0c
	if (!cr0.eq) goto loc_823A0F0C;
	// li r11,20
	r11.s64 = 20;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r11,15144(r31)
	PPC_STORE_U32(r31.u32 + 15144, r11.u32);
	// bl 0x823abc70
	sub_823ABC70(ctx, base);
	// stw r3,15140(r30)
	PPC_STORE_U32(r30.u32 + 15140, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x823a0f0c
	if (!cr0.eq) goto loc_823A0F0C;
	// li r3,26
	ctx.r3.s64 = 26;
	// b 0x823a0fa0
	goto loc_823A0FA0;
loc_823A0F0C:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-23776
	ctx.r9.s64 = r11.s64 + -23776;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// b 0x823a0f24
	goto loc_823A0F24;
loc_823A0F20:
	// lwz r3,15140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 15140);
loc_823A0F24:
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// stwx r8,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r8.u32);
	// addi r8,r9,640
	ctx.r8.s64 = ctx.r9.s64 + 640;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x823a0f20
	if (cr6.lt) goto loc_823A0F20;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// addi r7,r10,14880
	ctx.r7.s64 = ctx.r10.s64 + 14880;
loc_823A0F50:
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// clrlwi r6,r11,27
	ctx.r6.u64 = r11.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r6,r6,44
	ctx.r6.s64 = ctx.r6.s64 * 44;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x823a0f80
	if (cr6.eq) goto loc_823A0F80;
	// cmpwi cr6,r10,-2
	cr6.compare<int32_t>(ctx.r10.s32, -2, xer);
	// beq cr6,0x823a0f80
	if (cr6.eq) goto loc_823A0F80;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x823a0f88
	if (!cr6.eq) goto loc_823A0F88;
loc_823A0F80:
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_823A0F88:
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// addi r10,r9,112
	ctx.r10.s64 = ctx.r9.s64 + 112;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// blt cr6,0x823a0f50
	if (cr6.lt) goto loc_823A0F50;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A0FA0:
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

__attribute__((alias("__imp__sub_823A0FB8"))) PPC_WEAK_FUNC(sub_823A0FB8);
PPC_FUNC_IMPL(__imp__sub_823A0FB8) {
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
	// bl 0x823ae520
	sub_823AE520(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lbz r11,17112(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 17112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823a0fdc
	if (cr0.eq) goto loc_823A0FDC;
	// bl 0x823b0b48
	sub_823B0B48(ctx, base);
loc_823A0FDC:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r3,15140(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 15140);
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A0FF8"))) PPC_WEAK_FUNC(sub_823A0FF8);
PPC_FUNC_IMPL(__imp__sub_823A0FF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r11,r11,-23776
	r11.s64 = r11.s64 + -23776;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x823a1024
	if (cr6.lt) goto loc_823A1024;
	// addi r10,r11,608
	ctx.r10.s64 = r11.s64 + 608;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bgt cr6,0x823a1024
	if (cr6.gt) goto loc_823A1024;
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x823a4260
	sub_823A4260(ctx, base);
	return;
loc_823A1024:
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A102C"))) PPC_WEAK_FUNC(sub_823A102C);
PPC_FUNC_IMPL(__imp__sub_823A102C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A1030"))) PPC_WEAK_FUNC(sub_823A1030);
PPC_FUNC_IMPL(__imp__sub_823A1030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,20
	cr6.compare<int32_t>(ctx.r3.s32, 20, xer);
	// bge cr6,0x823a1040
	if (!cr6.lt) goto loc_823A1040;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x823a4260
	sub_823A4260(ctx, base);
	return;
loc_823A1040:
	// addi r3,r4,32
	ctx.r3.s64 = ctx.r4.s64 + 32;
	// b 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A1048"))) PPC_WEAK_FUNC(sub_823A1048);
PPC_FUNC_IMPL(__imp__sub_823A1048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r11,r11,-23776
	r11.s64 = r11.s64 + -23776;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x823a1074
	if (cr6.lt) goto loc_823A1074;
	// addi r10,r11,608
	ctx.r10.s64 = r11.s64 + 608;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bgt cr6,0x823a1074
	if (cr6.gt) goto loc_823A1074;
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x823a4100
	sub_823A4100(ctx, base);
	return;
loc_823A1074:
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A107C"))) PPC_WEAK_FUNC(sub_823A107C);
PPC_FUNC_IMPL(__imp__sub_823A107C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A1080"))) PPC_WEAK_FUNC(sub_823A1080);
PPC_FUNC_IMPL(__imp__sub_823A1080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,20
	cr6.compare<int32_t>(ctx.r3.s32, 20, xer);
	// bge cr6,0x823a1090
	if (!cr6.lt) goto loc_823A1090;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x823a4100
	sub_823A4100(ctx, base);
	return;
loc_823A1090:
	// addi r3,r4,32
	ctx.r3.s64 = ctx.r4.s64 + 32;
	// b 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A1098"))) PPC_WEAK_FUNC(sub_823A1098);
PPC_FUNC_IMPL(__imp__sub_823A1098) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x823a10c0
	if (!cr6.eq) goto loc_823A10C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239d488
	sub_8239D488(ctx, base);
	// b 0x823a114c
	goto loc_823A114C;
loc_823A10C0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x823a10d4
	if (!cr6.eq) goto loc_823A10D4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
	// b 0x823a1148
	goto loc_823A1148;
loc_823A10D4:
	// li r29,-4096
	r29.s64 = -4096;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bgt cr6,0x823a1130
	if (cr6.gt) goto loc_823A1130;
	// lis r27,-32127
	r27.s64 = -2105475072;
loc_823A10E4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x823a10f0
	if (!cr6.eq) goto loc_823A10F0;
	// li r31,1
	r31.s64 = 1;
loc_823A10F0:
	// bl 0x823b99e8
	sub_823B99E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// bl 0x823b9130
	sub_823B9130(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x823a1184
	if (!cr0.eq) goto loc_823A1184;
	// lwz r11,17632(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17632);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a1170
	if (cr6.eq) goto loc_823A1170;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823abae0
	sub_823ABAE0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a1154
	if (cr0.eq) goto loc_823A1154;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// ble cr6,0x823a10e4
	if (!cr6.gt) goto loc_823A10E4;
loc_823A1130:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823abae0
	sub_823ABAE0(ctx, base);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_823A1148:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A114C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
loc_823A1154:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823b6468
	sub_823B6468(ctx, base);
	// bl 0x8239ff28
	sub_8239FF28(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x823a1148
	goto loc_823A1148;
loc_823A1170:
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
loc_823A1184:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x823a114c
	goto loc_823A114C;
}

__attribute__((alias("__imp__sub_823A118C"))) PPC_WEAK_FUNC(sub_823A118C);
PPC_FUNC_IMPL(__imp__sub_823A118C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A1190"))) PPC_WEAK_FUNC(sub_823A1190);
PPC_FUNC_IMPL(__imp__sub_823A1190) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823a11e8
	if (cr6.eq) goto loc_823A11E8;
	// li r11,-4096
	r11.s64 = -4096;
	// twllei r4,0
	// divwu r11,r11,r4
	r11.u32 = r11.u32 / ctx.r4.u32;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x823a11e8
	if (!cr6.lt) goto loc_823A11E8;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
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
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823a11f0
	goto loc_823A11F0;
loc_823A11E8:
	// mullw r4,r4,r5
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// bl 0x823a1098
	sub_823A1098(ctx, base);
loc_823A11F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A1200"))) PPC_WEAK_FUNC(sub_823A1200);
PPC_FUNC_IMPL(__imp__sub_823A1200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-32139
	r11.s64 = -2106261504;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-21912
	r11.s64 = r11.s64 + -21912;
	// lwz r11,200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// lhzx r11,r10,r11
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + r11.u32);
	// andi. r3,r11,259
	ctx.r3.u64 = r11.u64 & 259;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A121C"))) PPC_WEAK_FUNC(sub_823A121C);
PPC_FUNC_IMPL(__imp__sub_823A121C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A1220"))) PPC_WEAK_FUNC(sub_823A1220);
PPC_FUNC_IMPL(__imp__sub_823A1220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32139
	r11.s64 = -2106261504;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-21912
	r11.s64 = r11.s64 + -21912;
	// lwz r11,200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// lhzx r11,r10,r11
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + r11.u32);
	// rlwinm r3,r11,0,29,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A123C"))) PPC_WEAK_FUNC(sub_823A123C);
PPC_FUNC_IMPL(__imp__sub_823A123C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A1240"))) PPC_WEAK_FUNC(sub_823A1240);
PPC_FUNC_IMPL(__imp__sub_823A1240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32139
	r11.s64 = -2106261504;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-21912
	r11.s64 = r11.s64 + -21912;
	// lwz r11,200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// lhzx r11,r10,r11
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + r11.u32);
	// rlwinm r3,r11,0,24,24
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A125C"))) PPC_WEAK_FUNC(sub_823A125C);
PPC_FUNC_IMPL(__imp__sub_823A125C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A1260"))) PPC_WEAK_FUNC(sub_823A1260);
PPC_FUNC_IMPL(__imp__sub_823A1260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32139
	r11.s64 = -2106261504;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-21912
	r11.s64 = r11.s64 + -21912;
	// lwz r11,200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// lhzx r11,r10,r11
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + r11.u32);
	// rlwinm r3,r11,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A127C"))) PPC_WEAK_FUNC(sub_823A127C);
PPC_FUNC_IMPL(__imp__sub_823A127C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A1280"))) PPC_WEAK_FUNC(sub_823A1280);
PPC_FUNC_IMPL(__imp__sub_823A1280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-32139
	r11.s64 = -2106261504;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-21912
	r11.s64 = r11.s64 + -21912;
	// lwz r11,200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// lhzx r11,r10,r11
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + r11.u32);
	// andi. r3,r11,263
	ctx.r3.u64 = r11.u64 & 263;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A129C"))) PPC_WEAK_FUNC(sub_823A129C);
PPC_FUNC_IMPL(__imp__sub_823A129C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A12A0"))) PPC_WEAK_FUNC(sub_823A12A0);
PPC_FUNC_IMPL(__imp__sub_823A12A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823A12A4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823a12a4
	if (!cr6.eq) goto loc_823A12A4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a12d8
	goto loc_823A12D8;
loc_823A12BC:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// beqlr 
	if (cr0.eq) return;
loc_823A12D8:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x823a12bc
	if (!cr6.eq) goto loc_823A12BC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A12EC"))) PPC_WEAK_FUNC(sub_823A12EC);
PPC_FUNC_IMPL(__imp__sub_823A12EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A12F0"))) PPC_WEAK_FUNC(sub_823A12F0);
PPC_FUNC_IMPL(__imp__sub_823A12F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	PPCCRRegister cr5{};
	PPCCRRegister cr6{};
	PPCCRRegister cr7{};
	uint32_t ea{};
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
loc_823A12F8:
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lbzu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// cmpwi cr7,r6,0
	cr7.compare<int32_t>(ctx.r6.s32, 0, xer);
	// subf. r3,r6,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr7,0x823a1340
	if (cr7.eq) goto loc_823A1340;
	// beq 0x823a12f8
	if (cr0.eq) goto loc_823A12F8;
	// cmpwi cr5,r6,65
	cr5.compare<int32_t>(ctx.r6.s32, 65, xer);
	// cmpwi cr6,r6,90
	cr6.compare<int32_t>(ctx.r6.s32, 90, xer);
	// blt cr5,0x823a1324
	if (cr5.lt) goto loc_823A1324;
	// bgt cr6,0x823a1324
	if (cr6.gt) goto loc_823A1324;
	// ori r6,r6,32
	ctx.r6.u64 = ctx.r6.u64 | 32;
loc_823A1324:
	// cmpwi r5,65
	cr0.compare<int32_t>(ctx.r5.s32, 65, xer);
	// cmpwi cr1,r5,90
	cr1.compare<int32_t>(ctx.r5.s32, 90, xer);
	// blt 0x823a1338
	if (cr0.lt) goto loc_823A1338;
	// bgt cr1,0x823a1338
	if (cr1.gt) goto loc_823A1338;
	// ori r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 | 32;
loc_823A1338:
	// subf. r3,r6,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a12f8
	if (cr0.eq) goto loc_823A12F8;
loc_823A1340:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A1344"))) PPC_WEAK_FUNC(sub_823A1344);
PPC_FUNC_IMPL(__imp__sub_823A1344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A1348"))) PPC_WEAK_FUNC(sub_823A1348);
PPC_FUNC_IMPL(__imp__sub_823A1348) {
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
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x823a13b4
	if (!cr6.eq) goto loc_823A13B4;
loc_823A1384:
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823a1444
	goto loc_823A1444;
loc_823A13B4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a13c4
	if (cr6.eq) goto loc_823A13C4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a1384
	if (cr6.eq) goto loc_823A1384;
loc_823A13C4:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// addi r8,r1,200
	ctx.r8.s64 = ctx.r1.s64 + 200;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bgt cr6,0x823a13e8
	if (cr6.gt) goto loc_823A13E8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
loc_823A13E8:
	// li r11,66
	r11.s64 = 66;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x823ad4b0
	sub_823AD4B0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a1440
	if (cr6.eq) goto loc_823A1440;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// blt 0x823a1434
	if (cr0.lt) goto loc_823A1434;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// b 0x823a1440
	goto loc_823A1440;
loc_823A1434:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ad1a8
	sub_823AD1A8(ctx, base);
loc_823A1440:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_823A1444:
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

__attribute__((alias("__imp__sub_823A145C"))) PPC_WEAK_FUNC(sub_823A145C);
PPC_FUNC_IMPL(__imp__sub_823A145C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A1460"))) PPC_WEAK_FUNC(sub_823A1460);
PPC_FUNC_IMPL(__imp__sub_823A1460) {
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
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a1488
	if (cr6.eq) goto loc_823A1488;
	// stw r25,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r25.u32);
loc_823A1488:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x823a14bc
	if (!cr6.eq) goto loc_823A14BC;
loc_823A1490:
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
	// b 0x823a1748
	goto loc_823A1748;
loc_823A14BC:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x823a14d4
	if (cr6.eq) goto loc_823A14D4;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// blt cr6,0x823a1490
	if (cr6.lt) goto loc_823A1490;
	// cmpwi cr6,r28,36
	cr6.compare<int32_t>(r28.s32, 36, xer);
	// bgt cr6,0x823a1490
	if (cr6.gt) goto loc_823A1490;
loc_823A14D4:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lbz r31,0(r25)
	r31.u64 = PPC_LOAD_U8(r25.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// addi r30,r11,-21688
	r30.s64 = r11.s64 + -21688;
	// addi r29,r25,1
	r29.s64 = r25.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_823A14EC:
	// lwz r11,172(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x823a1510
	if (!cr6.gt) goto loc_823A1510;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// clrlwi r3,r31,24
	ctx.r3.u64 = r31.u32 & 0xFF;
	// bl 0x823b0110
	sub_823B0110(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x823a1520
	goto loc_823A1520;
loc_823A1510:
	// lwz r11,200(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// rlwinm r9,r31,1,23,30
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0x1FE;
	// lhzx r11,r9,r11
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + r11.u32);
	// rlwinm r3,r11,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
loc_823A1520:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x823a1534
	if (cr6.eq) goto loc_823A1534;
	// lbz r31,0(r29)
	r31.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x823a14ec
	goto loc_823A14EC;
loc_823A1534:
	// extsb r11,r31
	r11.s64 = r31.s8;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// bne cr6,0x823a1548
	if (!cr6.eq) goto loc_823A1548;
	// ori r24,r24,2
	r24.u64 = r24.u64 | 2;
	// b 0x823a1550
	goto loc_823A1550;
loc_823A1548:
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(r11.s32, 43, xer);
	// bne cr6,0x823a1558
	if (!cr6.eq) goto loc_823A1558;
loc_823A1550:
	// lbz r31,0(r29)
	r31.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_823A1558:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// blt cr6,0x823a173c
	if (cr6.lt) goto loc_823A173C;
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// beq cr6,0x823a173c
	if (cr6.eq) goto loc_823A173C;
	// cmpwi cr6,r28,36
	cr6.compare<int32_t>(r28.s32, 36, xer);
	// bgt cr6,0x823a173c
	if (cr6.gt) goto loc_823A173C;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x823a15b4
	if (!cr6.eq) goto loc_823A15B4;
	// extsb r11,r31
	r11.s64 = r31.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// beq cr6,0x823a158c
	if (cr6.eq) goto loc_823A158C;
	// li r28,10
	r28.s64 = 10;
	// b 0x823a15ec
	goto loc_823A15EC;
loc_823A158C:
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(r11.s32, 120, xer);
	// beq cr6,0x823a15ac
	if (cr6.eq) goto loc_823A15AC;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// beq cr6,0x823a15ac
	if (cr6.eq) goto loc_823A15AC;
	// li r28,8
	r28.s64 = 8;
	// b 0x823a15ec
	goto loc_823A15EC;
loc_823A15AC:
	// li r28,16
	r28.s64 = 16;
	// b 0x823a15bc
	goto loc_823A15BC;
loc_823A15B4:
	// cmpwi cr6,r28,16
	cr6.compare<int32_t>(r28.s32, 16, xer);
	// bne cr6,0x823a15ec
	if (!cr6.eq) goto loc_823A15EC;
loc_823A15BC:
	// extsb r11,r31
	r11.s64 = r31.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// bne cr6,0x823a15ec
	if (!cr6.eq) goto loc_823A15EC;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(r11.s32, 120, xer);
	// beq cr6,0x823a15e0
	if (cr6.eq) goto loc_823A15E0;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// bne cr6,0x823a15ec
	if (!cr6.eq) goto loc_823A15EC;
loc_823A15E0:
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
	// lbz r31,0(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 0);
loc_823A15EC:
	// li r27,-1
	r27.s64 = -1;
	// lwz r8,200(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// twllei r28,0
	// divwu r9,r27,r28
	ctx.r9.u32 = r27.u32 / r28.u32;
loc_823A15FC:
	// rlwinm r11,r31,1,23,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0x1FE;
	// lhzx r11,r11,r8
	r11.u64 = PPC_LOAD_U16(r11.u32 + ctx.r8.u32);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a1618
	if (cr0.eq) goto loc_823A1618;
	// extsb r11,r31
	r11.s64 = r31.s8;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// b 0x823a1640
	goto loc_823A1640;
loc_823A1618:
	// andi. r11,r11,259
	r11.u64 = r11.u64 & 259;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a1680
	if (cr0.eq) goto loc_823A1680;
	// extsb r11,r31
	r11.s64 = r31.s8;
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// blt cr6,0x823a163c
	if (cr6.lt) goto loc_823A163C;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(r11.s32, 122, xer);
	// bgt cr6,0x823a163c
	if (cr6.gt) goto loc_823A163C;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
loc_823A163C:
	// addi r11,r11,-55
	r11.s64 = r11.s64 + -55;
loc_823A1640:
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bge cr6,0x823a1680
	if (!cr6.lt) goto loc_823A1680;
	// ori r24,r24,8
	r24.u64 = r24.u64 | 8;
	// cmplw cr6,r26,r9
	cr6.compare<uint32_t>(r26.u32, ctx.r9.u32, xer);
	// blt cr6,0x823a16a0
	if (cr6.lt) goto loc_823A16A0;
	// bne cr6,0x823a1674
	if (!cr6.eq) goto loc_823A1674;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// twllei r28,0
	// divwu r7,r10,r28
	ctx.r7.u32 = ctx.r10.u32 / r28.u32;
	// mullw r7,r7,r28
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r28.s32);
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823a16a0
	if (!cr6.gt) goto loc_823A16A0;
loc_823A1674:
	// ori r24,r24,4
	r24.u64 = r24.u64 | 4;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x823a16a8
	if (!cr6.eq) goto loc_823A16A8;
loc_823A1680:
	// rlwinm. r11,r24,0,28,28
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// bne 0x823a16b4
	if (!cr0.eq) goto loc_823A16B4;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a1698
	if (cr6.eq) goto loc_823A1698;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_823A1698:
	// li r26,0
	r26.s64 = 0;
	// b 0x823a171c
	goto loc_823A171C;
loc_823A16A0:
	// mullw r10,r26,r28
	ctx.r10.s64 = int64_t(r26.s32) * int64_t(r28.s32);
	// add r26,r10,r11
	r26.u64 = ctx.r10.u64 + r11.u64;
loc_823A16A8:
	// lbz r31,0(r29)
	r31.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x823a15fc
	goto loc_823A15FC;
loc_823A16B4:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// rlwinm. r11,r24,0,29,29
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ori r31,r10,65535
	r31.u64 = ctx.r10.u64 | 65535;
	// lis r30,-32768
	r30.s64 = -2147483648;
	// bne 0x823a16f0
	if (!cr0.eq) goto loc_823A16F0;
	// clrlwi. r11,r24,31
	r11.u64 = r24.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823a171c
	if (!cr0.eq) goto loc_823A171C;
	// rlwinm. r11,r24,0,30,30
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a16e0
	if (cr0.eq) goto loc_823A16E0;
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// bgt cr6,0x823a16f0
	if (cr6.gt) goto loc_823A16F0;
loc_823A16E0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823a171c
	if (!cr6.eq) goto loc_823A171C;
	// cmplw cr6,r26,r31
	cr6.compare<uint32_t>(r26.u32, r31.u32, xer);
	// ble cr6,0x823a171c
	if (!cr6.gt) goto loc_823A171C;
loc_823A16F0:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,34
	r11.s64 = 34;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// clrlwi. r10,r24,31
	ctx.r10.u64 = r24.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a170c
	if (cr0.eq) goto loc_823A170C;
	// mr r26,r27
	r26.u64 = r27.u64;
	// b 0x823a171c
	goto loc_823A171C;
loc_823A170C:
	// rlwinm. r11,r24,0,30,30
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r26,r30
	r26.u64 = r30.u64;
	// bne 0x823a171c
	if (!cr0.eq) goto loc_823A171C;
	// mr r26,r31
	r26.u64 = r31.u64;
loc_823A171C:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a1728
	if (cr6.eq) goto loc_823A1728;
	// stw r29,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r29.u32);
loc_823A1728:
	// rlwinm. r11,r24,0,30,30
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a1734
	if (cr0.eq) goto loc_823A1734;
	// neg r26,r26
	r26.s64 = -r26.s64;
loc_823A1734:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// b 0x823a174c
	goto loc_823A174C;
loc_823A173C:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a1748
	if (cr6.eq) goto loc_823A1748;
	// stw r25,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r25.u32);
loc_823A1748:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A174C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_823A1754"))) PPC_WEAK_FUNC(sub_823A1754);
PPC_FUNC_IMPL(__imp__sub_823A1754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A1758"))) PPC_WEAK_FUNC(sub_823A1758);
PPC_FUNC_IMPL(__imp__sub_823A1758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,-21688
	ctx.r3.s64 = ctx.r10.s64 + -21688;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x823a1460
	sub_823A1460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A1778"))) PPC_WEAK_FUNC(sub_823A1778);
PPC_FUNC_IMPL(__imp__sub_823A1778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,-21688
	ctx.r3.s64 = ctx.r10.s64 + -21688;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x823a1460
	sub_823A1460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A1798"))) PPC_WEAK_FUNC(sub_823A1798);
PPC_FUNC_IMPL(__imp__sub_823A1798) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A179C"))) PPC_WEAK_FUNC(sub_823A179C);
PPC_FUNC_IMPL(__imp__sub_823A179C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A17A0"))) PPC_WEAK_FUNC(sub_823A17A0);
PPC_FUNC_IMPL(__imp__sub_823A17A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// neg r12,r3
	r12.s64 = -ctx.r3.s64;
	// neg r11,r12
	r11.s64 = -r12.s64;
	// addi r0,r11,4095
	r0.s64 = r11.s64 + 4095;
	// srawi. r0,r0,12
	xer.ca = (r0.s32 < 0) & ((r0.u32 & 0xFFF) != 0);
	r0.s64 = r0.s32 >> 12;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// mr r11,r1
	r11.u64 = ctx.r1.u64;
	// mtctr r0
	ctr.u64 = r0.u64;
loc_823A17BC:
	// lwzu r0,-4096(r11)
	ea = -4096 + r11.u32;
	r0.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// bdnz 0x823a17bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A17BC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A17A4"))) PPC_WEAK_FUNC(sub_823A17A4);
PPC_FUNC_IMPL(__imp__sub_823A17A4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// neg r11,r12
	r11.s64 = -r12.s64;
	// addi r0,r11,4095
	r0.s64 = r11.s64 + 4095;
	// srawi. r0,r0,12
	xer.ca = (r0.s32 < 0) & ((r0.u32 & 0xFFF) != 0);
	r0.s64 = r0.s32 >> 12;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// mr r11,r1
	r11.u64 = ctx.r1.u64;
	// mtctr r0
	ctr.u64 = r0.u64;
loc_823A17BC:
	// lwzu r0,-4096(r11)
	ea = -4096 + r11.u32;
	r0.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// bdnz 0x823a17bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A17BC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A17C8"))) PPC_WEAK_FUNC(sub_823A17C8);
PPC_FUNC_IMPL(__imp__sub_823A17C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823a1820
	if (cr6.eq) goto loc_823A1820;
loc_823A17D0:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r10,-65
	r11.s64 = ctx.r10.s64 + -65;
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(r11.u32, 25, xer);
	// bgt cr6,0x823a17e8
	if (cr6.gt) goto loc_823A17E8;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
loc_823A17E8:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r9,r11,-65
	ctx.r9.s64 = r11.s64 + -65;
	// cmplwi cr6,r9,25
	cr6.compare<uint32_t>(ctx.r9.u32, 25, xer);
	// bgt cr6,0x823a1800
	if (cr6.gt) goto loc_823A1800;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
loc_823A1800:
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x823a1818
	if (cr0.eq) goto loc_823A1818;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x823a1818
	if (cr6.eq) goto loc_823A1818;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x823a17d0
	if (cr6.eq) goto loc_823A17D0;
loc_823A1818:
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - r11.s64;
	// blr 
	return;
loc_823A1820:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A1828"))) PPC_WEAK_FUNC(sub_823A1828);
PPC_FUNC_IMPL(__imp__sub_823A1828) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823a1874
	if (!cr6.eq) goto loc_823A1874;
loc_823A1840:
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
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x823a18c0
	goto loc_823A18C0;
loc_823A1874:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823a1840
	if (cr6.eq) goto loc_823A1840;
	// lis r11,32767
	r11.s64 = 2147418112;
	// ori r31,r11,65535
	r31.u64 = r11.u64 | 65535;
	// cmplw cr6,r5,r31
	cr6.compare<uint32_t>(ctx.r5.u32, r31.u32, xer);
	// ble cr6,0x823a18bc
	if (!cr6.gt) goto loc_823A18BC;
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x823a18c0
	goto loc_823A18C0;
loc_823A18BC:
	// bl 0x823a17c8
	sub_823A17C8(ctx, base);
loc_823A18C0:
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

__attribute__((alias("__imp__sub_823A18D4"))) PPC_WEAK_FUNC(sub_823A18D4);
PPC_FUNC_IMPL(__imp__sub_823A18D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A18D8"))) PPC_WEAK_FUNC(sub_823A18D8);
PPC_FUNC_IMPL(__imp__sub_823A18D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x823a18f4
	if (cr6.eq) goto loc_823A18F4;
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r11,r4,1
	r11.s64 = ctx.r4.s64 + 1;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
loc_823A18F4:
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_823A18F8:
	// divwu r10,r3,r5
	ctx.r10.u32 = ctx.r3.u32 / ctx.r5.u32;
	// twllei r5,0
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// divwu r3,r3,r5
	ctx.r3.u32 = ctx.r3.u32 / ctx.r5.u32;
	// twllei r5,0
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// ble cr6,0x823a1920
	if (!cr6.gt) goto loc_823A1920;
	// addi r10,r10,87
	ctx.r10.s64 = ctx.r10.s64 + 87;
	// b 0x823a1924
	goto loc_823A1924;
loc_823A1920:
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
loc_823A1924:
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne cr6,0x823a18f8
	if (!cr6.eq) goto loc_823A18F8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_823A1940:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x823a1940
	if (cr6.lt) goto loc_823A1940;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A1964"))) PPC_WEAK_FUNC(sub_823A1964);
PPC_FUNC_IMPL(__imp__sub_823A1964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A1968"))) PPC_WEAK_FUNC(sub_823A1968);
PPC_FUNC_IMPL(__imp__sub_823A1968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r5,10
	cr6.compare<int32_t>(ctx.r5.s32, 10, xer);
	// bne cr6,0x823a198c
	if (!cr6.eq) goto loc_823A198C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x823a198c
	if (!cr6.lt) goto loc_823A198C;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x823a1990
	goto loc_823A1990;
loc_823A198C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_823A1990:
	// bl 0x823a18d8
	sub_823A18D8(ctx, base);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A19A8"))) PPC_WEAK_FUNC(sub_823A19A8);
PPC_FUNC_IMPL(__imp__sub_823A19A8) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x823a18d8
	sub_823A18D8(ctx, base);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A19D0"))) PPC_WEAK_FUNC(sub_823A19D0);
PPC_FUNC_IMPL(__imp__sub_823A19D0) {
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
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x8239f330
	sub_8239F330(ctx, base);
	// cmpwi cr6,r3,101
	cr6.compare<int32_t>(ctx.r3.s32, 101, xer);
	// beq cr6,0x823a1a0c
	if (cr6.eq) goto loc_823A1A0C;
loc_823A19F8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// bl 0x823a1220
	sub_823A1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823a19f8
	if (!cr0.eq) goto loc_823A19F8;
loc_823A1A0C:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x8239f330
	sub_8239F330(ctx, base);
	// cmpwi cr6,r3,120
	cr6.compare<int32_t>(ctx.r3.s32, 120, xer);
	// bne cr6,0x823a1a24
	if (!cr6.eq) goto loc_823A1A24;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
loc_823A1A24:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// lwz r11,-21628(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -21628);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
loc_823A1A40:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bne cr6,0x823a1a40
	if (!cr6.eq) goto loc_823A1A40;
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

__attribute__((alias("__imp__sub_823A1A70"))) PPC_WEAK_FUNC(sub_823A1A70);
PPC_FUNC_IMPL(__imp__sub_823A1A70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// lwz r8,-21628(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21628);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a1aa8
	if (cr0.eq) goto loc_823A1AA8;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
loc_823A1A90:
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x823a1aa8
	if (cr6.eq) goto loc_823A1AA8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823a1a90
	if (!cr0.eq) goto loc_823A1A90;
loc_823A1AA8:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x823a1ad0
	goto loc_823A1AD0;
loc_823A1ABC:
	// cmpwi cr6,r10,101
	cr6.compare<int32_t>(ctx.r10.s32, 101, xer);
	// beq cr6,0x823a1adc
	if (cr6.eq) goto loc_823A1ADC;
	// cmpwi cr6,r10,69
	cr6.compare<int32_t>(ctx.r10.s32, 69, xer);
	// beq cr6,0x823a1adc
	if (cr6.eq) goto loc_823A1ADC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_823A1AD0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823a1abc
	if (!cr0.eq) goto loc_823A1ABC;
loc_823A1ADC:
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_823A1AE0:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,48
	cr6.compare<uint32_t>(ctx.r10.u32, 48, xer);
	// beq cr6,0x823a1ae0
	if (cr6.eq) goto loc_823A1AE0;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x823a1b08
	if (!cr6.eq) goto loc_823A1B08;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_823A1B08:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// bne 0x823a1b08
	if (!cr0.eq) goto loc_823A1B08;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A1B24"))) PPC_WEAK_FUNC(sub_823A1B24);
PPC_FUNC_IMPL(__imp__sub_823A1B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A1B28"))) PPC_WEAK_FUNC(sub_823A1B28);
PPC_FUNC_IMPL(__imp__sub_823A1B28) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f13,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f0,-31368(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A1B48"))) PPC_WEAK_FUNC(sub_823A1B48);
PPC_FUNC_IMPL(__imp__sub_823A1B48) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x823a1b80
	if (cr6.eq) goto loc_823A1B80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823b0c30
	sub_823B0C30(ctx, base);
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// b 0x823a1b90
	goto loc_823A1B90;
loc_823A1B80:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b0cd8
	sub_823B0CD8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_823A1B90:
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

__attribute__((alias("__imp__sub_823A1BA4"))) PPC_WEAK_FUNC(sub_823A1BA4);
PPC_FUNC_IMPL(__imp__sub_823A1BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A1BA8"))) PPC_WEAK_FUNC(sub_823A1BA8);
PPC_FUNC_IMPL(__imp__sub_823A1BA8) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x823a1b48
	sub_823A1B48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A1BB0"))) PPC_WEAK_FUNC(sub_823A1BB0);
PPC_FUNC_IMPL(__imp__sub_823A1BB0) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823a19d0
	sub_823A19D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A1BB8"))) PPC_WEAK_FUNC(sub_823A1BB8);
PPC_FUNC_IMPL(__imp__sub_823A1BB8) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823a1a70
	sub_823A1A70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A1BC0"))) PPC_WEAK_FUNC(sub_823A1BC0);
PPC_FUNC_IMPL(__imp__sub_823A1BC0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823a1c18
	if (!cr6.eq) goto loc_823A1C18;
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
	// b 0x823a1e34
	goto loc_823A1E34;
loc_823A1C18:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x823a1c4c
	if (!cr6.eq) goto loc_823A1C4C;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_823A1C28:
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
	// b 0x823a1e34
	goto loc_823A1E34;
loc_823A1C4C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// mr r11,r31
	r11.u64 = r31.u64;
	// bgt cr6,0x823a1c5c
	if (cr6.gt) goto loc_823A1C5C;
	// li r11,0
	r11.s64 = 0;
loc_823A1C5C:
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bgt cr6,0x823a1c74
	if (cr6.gt) goto loc_823A1C74;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x823a1c28
	goto loc_823A1C28;
loc_823A1C74:
	// extsb. r28,r8
	r28.s64 = ctx.r8.s8;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x823a1cc8
	if (cr0.eq) goto loc_823A1CC8;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// addi r11,r11,-45
	r11.s64 = r11.s64 + -45;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// ble cr6,0x823a1cc8
	if (!cr6.gt) goto loc_823A1CC8;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823A1CA0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a1ca0
	if (!cr6.eq) goto loc_823A1CA0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
loc_823A1CC8:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r26,45
	r26.s64 = 45;
	// cmpwi cr6,r10,45
	cr6.compare<int32_t>(ctx.r10.s32, 45, xer);
	// bne cr6,0x823a1ce4
	if (!cr6.eq) goto loc_823A1CE4;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// stb r26,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r26.u8);
loc_823A1CE4:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x823a1d10
	if (!cr6.gt) goto loc_823A1D10;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// lwz r10,-21628(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21628);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
loc_823A1D10:
	// cntlzw r10,r28
	ctx.r10.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// bne cr6,0x823a1d30
	if (!cr6.eq) goto loc_823A1D30;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x823a1d38
	goto loc_823A1D38;
loc_823A1D30:
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
loc_823A1D38:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,-30728
	ctx.r5.s64 = r11.s64 + -30728;
	// bl 0x8239d3a0
	sub_8239D3A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a1d68
	if (cr0.eq) goto loc_823A1D68;
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
loc_823A1D68:
	// addi r3,r31,2
	ctx.r3.s64 = r31.s64 + 2;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x823a1d7c
	if (cr6.eq) goto loc_823A1D7C;
	// li r11,69
	r11.s64 = 69;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
loc_823A1D7C:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// beq cr6,0x823a1e08
	if (cr6.eq) goto loc_823A1E08;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x823a1da4
	if (!cr0.lt) goto loc_823A1DA4;
	// neg r11,r11
	r11.s64 = -r11.s64;
	// stb r26,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r26.u8);
loc_823A1DA4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// blt cr6,0x823a1dd0
	if (cr6.lt) goto loc_823A1DD0;
	// li r7,100
	ctx.r7.s64 = 100;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// divw r9,r11,r7
	ctx.r9.s32 = r11.s32 / ctx.r7.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// divw r8,r11,r7
	ctx.r8.s32 = r11.s32 / ctx.r7.s32;
	// mulli r8,r8,100
	ctx.r8.s64 = ctx.r8.s64 * 100;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
loc_823A1DD0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// blt cr6,0x823a1dfc
	if (cr6.lt) goto loc_823A1DFC;
	// li r7,10
	ctx.r7.s64 = 10;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// divw r9,r11,r7
	ctx.r9.s32 = r11.s32 / ctx.r7.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// divw r8,r11,r7
	ctx.r8.s32 = r11.s32 / ctx.r7.s32;
	// mulli r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 * 10;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
loc_823A1DFC:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, r11.u8);
loc_823A1E08:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,17868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17868);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a1e30
	if (cr0.eq) goto loc_823A1E30;
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// bne cr6,0x823a1e30
	if (!cr6.eq) goto loc_823A1E30;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
loc_823A1E30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A1E34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823A1E3C"))) PPC_WEAK_FUNC(sub_823A1E3C);
PPC_FUNC_IMPL(__imp__sub_823A1E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A1E40"))) PPC_WEAK_FUNC(sub_823A1E40);
PPC_FUNC_IMPL(__imp__sub_823A1E40) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x823b0ff0
	sub_823B0FF0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x823a1eac
	if (!cr6.eq) goto loc_823A1EAC;
loc_823A1E7C:
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
	// b 0x823a1f50
	goto loc_823A1F50;
loc_823A1EAC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823a1e7c
	if (cr6.eq) goto loc_823A1E7C;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// bne cr6,0x823a1ec8
	if (!cr6.eq) goto loc_823A1EC8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x823a1eec
	goto loc_823A1EEC;
loc_823A1EC8:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x823a1ed8
	if (cr6.gt) goto loc_823A1ED8;
	// li r11,0
	r11.s64 = 0;
loc_823A1ED8:
	// addi r10,r9,-45
	ctx.r10.s64 = ctx.r9.s64 + -45;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// subf r10,r10,r29
	ctx.r10.s64 = r29.s64 - ctx.r10.s64;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - r11.s64;
loc_823A1EEC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bgt cr6,0x823a1efc
	if (cr6.gt) goto loc_823A1EFC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A1EFC:
	// addi r11,r9,-45
	r11.s64 = ctx.r9.s64 + -45;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// addi r5,r30,1
	ctx.r5.s64 = r30.s64 + 1;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
	// bl 0x823b0d80
	sub_823B0D80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a1f30
	if (cr0.eq) goto loc_823A1F30;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// b 0x823a1f50
	goto loc_823A1F50;
loc_823A1F30:
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a1bc0
	sub_823A1BC0(ctx, base);
loc_823A1F50:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823A1F58"))) PPC_WEAK_FUNC(sub_823A1F58);
PPC_FUNC_IMPL(__imp__sub_823A1F58) {
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
	// li r28,48
	r28.s64 = 48;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r30,1023
	r30.s64 = 1023;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bge cr6,0x823a1f88
	if (!cr6.lt) goto loc_823A1F88;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
loc_823A1F88:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x823a1fc0
	if (!cr6.eq) goto loc_823A1FC0;
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
	// b 0x823a2398
	goto loc_823A2398;
loc_823A1FC0:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x823a1ff4
	if (!cr6.eq) goto loc_823A1FF4;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_823A1FD0:
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
	// b 0x823a2398
	goto loc_823A2398;
loc_823A1FF4:
	// addi r11,r6,11
	r11.s64 = ctx.r6.s64 + 11;
	// stb r26,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r26.u8);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bgt cr6,0x823a2010
	if (cr6.gt) goto loc_823A2010;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x823a1fd0
	goto loc_823A1FD0;
loc_823A2010:
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,20,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFE;
	// cmpldi cr6,r10,4094
	cr6.compare<uint64_t>(ctx.r10.u64, 4094, xer);
	// bne cr6,0x823a20b8
	if (!cr6.eq) goto loc_823A20B8;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x823a2030
	if (!cr6.eq) goto loc_823A2030;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x823a2034
	goto loc_823A2034;
loc_823A2030:
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
loc_823A2034:
	// addi r30,r31,2
	r30.s64 = r31.s64 + 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823a1e40
	sub_823A1E40(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a2058
	if (cr0.eq) goto loc_823A2058;
	// stb r26,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r26.u8);
	// b 0x823a2398
	goto loc_823A2398;
loc_823A2058:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(r11.u32, 45, xer);
	// bne cr6,0x823a206c
	if (!cr6.eq) goto loc_823A206C;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_823A206C:
	// subfic r11,r29,0
	xer.ca = r29.u32 <= 0;
	r11.s64 = 0 - r29.s64;
	// stb r28,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r28.u8);
	// li r4,101
	ctx.r4.s64 = 101;
	// subfe r10,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// addi r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 + 120;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// bl 0x8239e1c0
	sub_8239E1C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a2394
	if (cr0.eq) goto loc_823A2394;
	// subfic r11,r29,0
	xer.ca = r29.u32 <= 0;
	r11.s64 = 0 - r29.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,112
	r11.s64 = r11.s64 + 112;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// stb r26,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, r26.u8);
	// b 0x823a2394
	goto loc_823A2394;
loc_823A20B8:
	// clrldi r11,r11,63
	r11.u64 = r11.u64 & 0x1;
	// li r27,45
	r27.s64 = 45;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x823a20d0
	if (cr6.eq) goto loc_823A20D0;
	// stb r27,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r27.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_823A20D0:
	// subfic r11,r29,0
	xer.ca = r29.u32 <= 0;
	r11.s64 = 0 - r29.s64;
	// stb r28,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r28.u8);
	// subfe r10,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r9,r29,0
	xer.ca = r29.u32 <= 0;
	ctx.r9.s64 = 0 - r29.s64;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,120
	ctx.r8.s64 = ctx.r10.s64 + 120;
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// rlwinm r10,r9,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r10,r10,97
	ctx.r10.s64 = ctx.r10.s64 + 97;
	// addi r5,r10,-58
	ctx.r5.s64 = ctx.r10.s64 + -58;
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r10,0,20,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFE;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// bne cr6,0x823a213c
	if (!cr6.eq) goto loc_823A213C;
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r10,r10,0,51
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFFFFFFF000;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// bne cr6,0x823a2134
	if (!cr6.eq) goto loc_823A2134;
	// mr r30,r26
	r30.u64 = r26.u64;
	// b 0x823a2148
	goto loc_823A2148;
loc_823A2134:
	// li r30,1022
	r30.s64 = 1022;
	// b 0x823a2148
	goto loc_823A2148;
loc_823A213C:
	// li r10,49
	ctx.r10.s64 = 49;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_823A2148:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x823a2160
	if (!cr6.eq) goto loc_823A2160;
	// stb r26,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r26.u8);
	// b 0x823a2174
	goto loc_823A2174;
loc_823A2160:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r11,-21628(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -21628);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r11.u8);
loc_823A2174:
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r11,r11,0,51
	r11.u64 = __builtin_rotateleft64(r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// ble cr6,0x823a226c
	if (!cr6.gt) goto loc_823A226C;
	// li r10,15
	ctx.r10.s64 = 15;
	// rldicr r10,r10,48,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 48) & 0xFFFF000000000000;
loc_823A218C:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x823a21e4
	if (!cr6.gt) goto loc_823A21E4;
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// rldicl r11,r11,52,12
	r11.u64 = __builtin_rotateleft64(r11.u64, 52) & 0xFFFFFFFFFFFFF;
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// srd r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,57
	cr6.compare<uint32_t>(ctx.r9.u32, 57, xer);
	// ble cr6,0x823a21c8
	if (!cr6.gt) goto loc_823A21C8;
	// clrlwi r11,r5,16
	r11.u64 = ctx.r5.u32 & 0xFFFF;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
loc_823A21C8:
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r11.u8);
	// rldicl r10,r10,60,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// extsh. r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bge 0x823a218c
	if (!cr0.lt) goto loc_823A218C;
loc_823A21E4:
	// extsh. r11,r7
	r11.s64 = ctx.r7.s16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x823a226c
	if (cr0.lt) goto loc_823A226C;
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// rldicl r11,r11,52,12
	r11.u64 = __builtin_rotateleft64(r11.u64, 52) & 0xFFFFFFFFFFFFF;
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// srd r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// ble cr6,0x823a226c
	if (!cr6.gt) goto loc_823A226C;
	// addi r11,r8,-1
	r11.s64 = ctx.r8.s64 + -1;
loc_823A2210:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,102
	cr6.compare<int32_t>(ctx.r10.s32, 102, xer);
	// beq cr6,0x823a2228
	if (cr6.eq) goto loc_823A2228;
	// cmpwi cr6,r10,70
	cr6.compare<int32_t>(ctx.r10.s32, 70, xer);
	// bne cr6,0x823a2234
	if (!cr6.eq) goto loc_823A2234;
loc_823A2228:
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a2210
	goto loc_823A2210;
loc_823A2234:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x823a2260
	if (cr6.eq) goto loc_823A2260;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// bne cr6,0x823a2254
	if (!cr6.eq) goto loc_823A2254;
	// addi r10,r5,58
	ctx.r10.s64 = ctx.r5.s64 + 58;
	// b 0x823a2258
	goto loc_823A2258;
loc_823A2254:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_823A2258:
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// b 0x823a226c
	goto loc_823A226C;
loc_823A2260:
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, ctx.r10.u8);
loc_823A226C:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x823a2298
	if (!cr6.gt) goto loc_823A2298;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq 0x823a2294
	if (cr0.eq) goto loc_823A2294;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_823A2288:
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x823a2288
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A2288;
loc_823A2294:
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_823A2298:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a22a8
	if (!cr6.eq) goto loc_823A22A8;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_823A22A8:
	// subfic r11,r29,0
	xer.ca = r29.u32 <= 0;
	r11.s64 = 0 - r29.s64;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,112
	r11.s64 = r11.s64 + 112;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r11.u8);
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicl r11,r11,63,53
	r11.u64 = __builtin_rotateleft64(r11.u64, 63) & 0x7FF;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// blt cr6,0x823a22e0
	if (cr6.lt) goto loc_823A22E0;
	// li r9,43
	ctx.r9.s64 = 43;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// b 0x823a22e8
	goto loc_823A22E8;
loc_823A22E0:
	// neg r11,r11
	r11.s64 = -r11.s64;
	// stb r27,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r27.u8);
loc_823A22E8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpdi cr6,r11,1000
	cr6.compare<int64_t>(r11.s64, 1000, xer);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r28,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r28.u8);
	// blt cr6,0x823a2328
	if (cr6.lt) goto loc_823A2328;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// divd r7,r11,r9
	ctx.r7.s64 = r11.s64 / ctx.r9.s64;
	// divd r6,r11,r9
	ctx.r6.s64 = r11.s64 / ctx.r9.s64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mulli r7,r6,1000
	ctx.r7.s64 = ctx.r6.s64 * 1000;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x823a2330
	if (!cr6.eq) goto loc_823A2330;
loc_823A2328:
	// cmpdi cr6,r11,100
	cr6.compare<int64_t>(r11.s64, 100, xer);
	// blt cr6,0x823a2354
	if (cr6.lt) goto loc_823A2354;
loc_823A2330:
	// li r9,100
	ctx.r9.s64 = 100;
	// divd r7,r11,r9
	ctx.r7.s64 = r11.s64 / ctx.r9.s64;
	// divd r6,r11,r9
	ctx.r6.s64 = r11.s64 / ctx.r9.s64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mulli r7,r6,100
	ctx.r7.s64 = ctx.r6.s64 * 100;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_823A2354:
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x823a2364
	if (!cr6.eq) goto loc_823A2364;
	// cmpdi cr6,r11,10
	cr6.compare<int64_t>(r11.s64, 10, xer);
	// blt cr6,0x823a2388
	if (cr6.lt) goto loc_823A2388;
loc_823A2364:
	// li r9,10
	ctx.r9.s64 = 10;
	// divd r8,r11,r9
	ctx.r8.s64 = r11.s64 / ctx.r9.s64;
	// divd r7,r11,r9
	ctx.r7.s64 = r11.s64 / ctx.r9.s64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mulli r8,r7,10
	ctx.r8.s64 = ctx.r7.s64 * 10;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_823A2388:
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// stb r26,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, r26.u8);
loc_823A2394:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A2398:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823A23A0"))) PPC_WEAK_FUNC(sub_823A23A0);
PPC_FUNC_IMPL(__imp__sub_823A23A0) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// bne cr6,0x823a23f4
	if (!cr6.eq) goto loc_823A23F4;
loc_823A23C4:
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
	// b 0x823a256c
	goto loc_823A256C;
loc_823A23F4:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823a23c4
	if (cr6.eq) goto loc_823A23C4;
	// extsb. r26,r7
	r26.s64 = ctx.r7.s8;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// li r28,48
	r28.s64 = 48;
	// beq 0x823a2434
	if (cr0.eq) goto loc_823A2434;
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, r27.s32, xer);
	// bne cr6,0x823a2434
	if (!cr6.eq) goto loc_823A2434;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-45
	r11.s64 = r11.s64 + -45;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
	// stb r9,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r9.u8);
loc_823A2434:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// bne cr6,0x823a244c
	if (!cr6.eq) goto loc_823A244C;
	// addi r30,r3,1
	r30.s64 = ctx.r3.s64 + 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
loc_823A244C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bgt 0x823a2498
	if (cr0.gt) goto loc_823A2498;
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823A2460:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a2460
	if (!cr6.eq) goto loc_823A2460;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r31,r30,1
	r31.s64 = r30.s64 + 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// stb r28,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r28.u8);
	// b 0x823a249c
	goto loc_823A249C;
loc_823A2498:
	// add r31,r11,r30
	r31.u64 = r11.u64 + r30.u64;
loc_823A249C:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x823a2568
	if (!cr6.gt) goto loc_823A2568;
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823A24AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a24ac
	if (!cr6.eq) goto loc_823A24AC;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r30,r31,1
	r30.s64 = r31.s64 + 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r11,-21628(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -21628);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x823a2568
	if (!cr0.lt) goto loc_823A2568;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x823a250c
	if (cr6.eq) goto loc_823A250C;
	// neg r27,r11
	r27.s64 = -r11.s64;
	// b 0x823a251c
	goto loc_823A251C;
loc_823A250C:
	// neg r11,r11
	r11.s64 = -r11.s64;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x823a251c
	if (cr6.lt) goto loc_823A251C;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_823A251C:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x823a2558
	if (cr6.eq) goto loc_823A2558;
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823A252C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a252c
	if (!cr6.eq) goto loc_823A252C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// add r3,r30,r27
	ctx.r3.u64 = r30.u64 + r27.u64;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
loc_823A2558:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
loc_823A2568:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A256C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823A2574"))) PPC_WEAK_FUNC(sub_823A2574);
PPC_FUNC_IMPL(__imp__sub_823A2574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A2578"))) PPC_WEAK_FUNC(sub_823A2578);
PPC_FUNC_IMPL(__imp__sub_823A2578) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x823b0ff0
	sub_823B0FF0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x823a25e0
	if (!cr6.eq) goto loc_823A25E0;
loc_823A25B0:
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
	// b 0x823a265c
	goto loc_823A265C;
loc_823A25E0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823a25b0
	if (cr6.eq) goto loc_823A25B0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// bne cr6,0x823a25fc
	if (!cr6.eq) goto loc_823A25FC;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x823a260c
	goto loc_823A260C;
loc_823A25FC:
	// addi r10,r11,-45
	ctx.r10.s64 = r11.s64 + -45;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// subf r4,r10,r29
	ctx.r4.s64 = r29.s64 - ctx.r10.s64;
loc_823A260C:
	// addi r11,r11,-45
	r11.s64 = r11.s64 + -45;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r5,r11,r30
	ctx.r5.u64 = r11.u64 + r30.u64;
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
	// bl 0x823b0d80
	sub_823B0D80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a2640
	if (cr0.eq) goto loc_823A2640;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// b 0x823a265c
	goto loc_823A265C;
loc_823A2640:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a23a0
	sub_823A23A0(ctx, base);
loc_823A265C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823A2664"))) PPC_WEAK_FUNC(sub_823A2664);
PPC_FUNC_IMPL(__imp__sub_823A2664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A2668"))) PPC_WEAK_FUNC(sub_823A2668);
PPC_FUNC_IMPL(__imp__sub_823A2668) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// bl 0x823b0ff0
	sub_823B0FF0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x823a26d4
	if (!cr6.eq) goto loc_823A26D4;
loc_823A26A4:
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
	// b 0x823a27b0
	goto loc_823A27B0;
loc_823A26D4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823a26a4
	if (cr6.eq) goto loc_823A26A4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r11,r11,-45
	r11.s64 = r11.s64 + -45;
	// addi r29,r10,-1
	r29.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// add r28,r11,r31
	r28.u64 = r11.u64 + r31.u64;
	// beq cr6,0x823a2708
	if (cr6.eq) goto loc_823A2708;
	// subf r4,r11,r30
	ctx.r4.s64 = r30.s64 - r11.s64;
loc_823A2708:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823b0d80
	sub_823B0D80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a272c
	if (cr0.eq) goto loc_823A272C;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// b 0x823a27b0
	goto loc_823A27B0;
loc_823A272C:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x823a2744
	if (cr6.lt) goto loc_823A2744;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A2744:
	// cmpwi cr6,r11,-4
	cr6.compare<int32_t>(r11.s32, -4, xer);
	// blt cr6,0x823a2790
	if (cr6.lt) goto loc_823A2790;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// bge cr6,0x823a2790
	if (!cr6.lt) goto loc_823A2790;
	// extsb. r11,r10
	r11.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a2770
	if (cr0.eq) goto loc_823A2770;
loc_823A275C:
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a275c
	if (!cr6.eq) goto loc_823A275C;
	// stb r11,-2(r28)
	PPC_STORE_U8(r28.u32 + -2, r11.u8);
loc_823A2770:
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a23a0
	sub_823A23A0(ctx, base);
	// b 0x823a27b0
	goto loc_823A27B0;
loc_823A2790:
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a1bc0
	sub_823A1BC0(ctx, base);
loc_823A27B0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823A27B8"))) PPC_WEAK_FUNC(sub_823A27B8);
PPC_FUNC_IMPL(__imp__sub_823A27B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,101
	cr6.compare<int32_t>(r11.s32, 101, xer);
	// beq cr6,0x823a2800
	if (cr6.eq) goto loc_823A2800;
	// cmpwi cr6,r11,69
	cr6.compare<int32_t>(r11.s32, 69, xer);
	// beq cr6,0x823a2800
	if (cr6.eq) goto loc_823A2800;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(r11.s32, 102, xer);
	// bne cr6,0x823a27e8
	if (!cr6.eq) goto loc_823A27E8;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// b 0x823a2578
	sub_823A2578(ctx, base);
	return;
loc_823A27E8:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// beq cr6,0x823a27fc
	if (cr6.eq) goto loc_823A27FC;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// beq cr6,0x823a27fc
	if (cr6.eq) goto loc_823A27FC;
	// b 0x823a2668
	sub_823A2668(ctx, base);
	return;
loc_823A27FC:
	// b 0x823a1f58
	sub_823A1F58(ctx, base);
	return;
loc_823A2800:
	// b 0x823a1e40
	sub_823A1E40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A2804"))) PPC_WEAK_FUNC(sub_823A2804);
PPC_FUNC_IMPL(__imp__sub_823A2804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A2808"))) PPC_WEAK_FUNC(sub_823A2808);
PPC_FUNC_IMPL(__imp__sub_823A2808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,101
	cr6.compare<int32_t>(r11.s32, 101, xer);
	// beq cr6,0x823a2854
	if (cr6.eq) goto loc_823A2854;
	// cmpwi cr6,r11,69
	cr6.compare<int32_t>(r11.s32, 69, xer);
	// beq cr6,0x823a2854
	if (cr6.eq) goto loc_823A2854;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(r11.s32, 102, xer);
	// bne cr6,0x823a2834
	if (!cr6.eq) goto loc_823A2834;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x823a2578
	sub_823A2578(ctx, base);
	return;
loc_823A2834:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// beq cr6,0x823a284c
	if (cr6.eq) goto loc_823A284C;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// beq cr6,0x823a284c
	if (cr6.eq) goto loc_823A284C;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x823a2668
	sub_823A2668(ctx, base);
	return;
loc_823A284C:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x823a1f58
	sub_823A1F58(ctx, base);
	return;
loc_823A2854:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x823a1e40
	sub_823A1E40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A285C"))) PPC_WEAK_FUNC(sub_823A285C);
PPC_FUNC_IMPL(__imp__sub_823A285C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A2860"))) PPC_WEAK_FUNC(sub_823A2860);
PPC_FUNC_IMPL(__imp__sub_823A2860) {
	PPC_FUNC_PROLOGUE();
	// b 0x826e4b8c
	__imp__KeTlsAlloc(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A2864"))) PPC_WEAK_FUNC(sub_823A2864);
PPC_FUNC_IMPL(__imp__sub_823A2864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A2868"))) PPC_WEAK_FUNC(sub_823A2868);
PPC_FUNC_IMPL(__imp__sub_823A2868) {
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
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-23092(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -23092);
	// bl 0x826e4b9c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_823A28AC"))) PPC_WEAK_FUNC(sub_823A28AC);
PPC_FUNC_IMPL(__imp__sub_823A28AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A28B0"))) PPC_WEAK_FUNC(sub_823A28B0);
PPC_FUNC_IMPL(__imp__sub_823A28B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r3,-23096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -23096);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A28BC"))) PPC_WEAK_FUNC(sub_823A28BC);
PPC_FUNC_IMPL(__imp__sub_823A28BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A28C0"))) PPC_WEAK_FUNC(sub_823A28C0);
PPC_FUNC_IMPL(__imp__sub_823A28C0) {
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
	// lis r31,-32139
	r31.s64 = -2106261504;
	// lwz r3,-23092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -23092);
	// bl 0x826e4b9c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x823a28f4
	if (!cr0.eq) goto loc_823A28F4;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-23092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -23092);
	// lwz r4,17148(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 17148);
	// bl 0x826e4bac
	__imp__KeTlsSetValue(ctx, base);
loc_823A28F4:
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

__attribute__((alias("__imp__sub_823A2908"))) PPC_WEAK_FUNC(sub_823A2908);
PPC_FUNC_IMPL(__imp__sub_823A2908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,17152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17152);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823A2918"))) PPC_WEAK_FUNC(sub_823A2918);
PPC_FUNC_IMPL(__imp__sub_823A2918) {
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
	// lis r31,-32139
	r31.s64 = -2106261504;
	// li r30,-1
	r30.s64 = -1;
	// lwz r3,-23096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -23096);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823a2958
	if (cr6.eq) goto loc_823A2958;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,17156(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17156);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r11,-23096(r31)
	PPC_STORE_U32(r31.u32 + -23096, r11.u32);
loc_823A2958:
	// lis r31,-32139
	r31.s64 = -2106261504;
	// lwz r3,-23092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -23092);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823a2974
	if (cr6.eq) goto loc_823A2974;
	// bl 0x826e4bbc
	__imp__KeTlsFree(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r11,-23092(r31)
	PPC_STORE_U32(r31.u32 + -23092, r11.u32);
loc_823A2974:
	// bl 0x823a4090
	sub_823A4090(ctx, base);
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

__attribute__((alias("__imp__sub_823A2990"))) PPC_WEAK_FUNC(sub_823A2990);
PPC_FUNC_IMPL(__imp__sub_823A2990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32139
	r11.s64 = -2106261504;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-22240
	r11.s64 = r11.s64 + -22240;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A29A8"))) PPC_WEAK_FUNC(sub_823A29A8);
PPC_FUNC_IMPL(__imp__sub_823A29A8) {
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
	// bl 0x823b6468
	sub_823B6468(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x823a28c0
	sub_823A28C0(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lis r30,-32139
	r30.s64 = -2106261504;
	// lwz r3,-23092(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -23092);
	// lwz r31,-23096(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -23096);
	// bl 0x826e4b9c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x823a2a54
	if (!cr0.eq) goto loc_823A2A54;
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823abc70
	sub_823ABC70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x823a2a54
	if (cr0.eq) goto loc_823A2A54;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-23096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -23096);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,17152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17152);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a2a48
	if (cr0.eq) goto loc_823A2A48;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-22240
	r11.s64 = r11.s64 + -22240;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x823b6748
	sub_823B6748(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x823a2a54
	goto loc_823A2A54;
loc_823A2A48:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
	// li r31,0
	r31.s64 = 0;
loc_823A2A54:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823b9af0
	sub_823B9AF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823A2A68"))) PPC_WEAK_FUNC(sub_823A2A68);
PPC_FUNC_IMPL(__imp__sub_823A2A68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x823a29a8
	sub_823A29A8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x823a2a8c
	if (!cr0.eq) goto loc_823A2A8C;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8239f088
	sub_8239F088(ctx, base);
loc_823A2A8C:
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

__attribute__((alias("__imp__sub_823A2AA4"))) PPC_WEAK_FUNC(sub_823A2AA4);
PPC_FUNC_IMPL(__imp__sub_823A2AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A2AA8"))) PPC_WEAK_FUNC(sub_823A2AA8);
PPC_FUNC_IMPL(__imp__sub_823A2AA8) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a2b44
	if (cr6.eq) goto loc_823A2B44;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a2ad4
	if (cr0.eq) goto loc_823A2AD4;
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
loc_823A2AD4:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a2ae4
	if (cr0.eq) goto loc_823A2AE4;
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
loc_823A2AE4:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a2af4
	if (cr0.eq) goto loc_823A2AF4;
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
loc_823A2AF4:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a2b04
	if (cr0.eq) goto loc_823A2B04;
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
loc_823A2B04:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a2b14
	if (cr0.eq) goto loc_823A2B14;
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
loc_823A2B14:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a2b24
	if (cr0.eq) goto loc_823A2B24;
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
loc_823A2B24:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r11,r11,-22240
	r11.s64 = r11.s64 + -22240;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x823a2b3c
	if (cr6.eq) goto loc_823A2B3C;
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
loc_823A2B3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
loc_823A2B44:
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

__attribute__((alias("__imp__sub_823A2B58"))) PPC_WEAK_FUNC(sub_823A2B58);
PPC_FUNC_IMPL(__imp__sub_823A2B58) {
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
	// lis r31,-32139
	r31.s64 = -2106261504;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r29,-32139
	r29.s64 = -2106261504;
	// lwz r11,-23096(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -23096);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x823a2bd4
	if (cr6.eq) goto loc_823A2BD4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823a2bb4
	if (!cr6.eq) goto loc_823A2BB4;
	// lwz r3,-23092(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -23092);
	// bl 0x826e4b9c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a2bb4
	if (cr0.eq) goto loc_823A2BB4;
	// lwz r3,-23092(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -23092);
	// lwz r30,-23096(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + -23096);
	// bl 0x826e4b9c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_823A2BB4:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-23096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -23096);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,17152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17152);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a2aa8
	sub_823A2AA8(ctx, base);
loc_823A2BD4:
	// lwz r3,-23092(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -23092);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823a2be8
	if (cr6.eq) goto loc_823A2BE8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826e4bac
	__imp__KeTlsSetValue(ctx, base);
loc_823A2BE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823A2BF0"))) PPC_WEAK_FUNC(sub_823A2BF0);
PPC_FUNC_IMPL(__imp__sub_823A2BF0) {
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
	// lis r11,-32198
	r11.s64 = -2110128128;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// addi r11,r11,10336
	r11.s64 = r11.s64 + 10336;
	// lis r8,-32146
	ctx.r8.s64 = -2106720256;
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// lis r29,-32127
	r29.s64 = -2105475072;
	// stw r11,17144(r30)
	PPC_STORE_U32(r30.u32 + 17144, r11.u32);
	// addi r11,r8,19356
	r11.s64 = ctx.r8.s64 + 19356;
	// lis r10,-32146
	ctx.r10.s64 = -2106720256;
	// stw r11,17148(r31)
	PPC_STORE_U32(r31.u32 + 17148, r11.u32);
	// addi r11,r9,19372
	r11.s64 = ctx.r9.s64 + 19372;
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// stw r11,17152(r29)
	PPC_STORE_U32(r29.u32 + 17152, r11.u32);
	// addi r11,r10,19388
	r11.s64 = ctx.r10.s64 + 19388;
	// stw r11,17156(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17156, r11.u32);
	// bl 0x826e4b8c
	__imp__KeTlsAlloc(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r3,-23092(r11)
	PPC_STORE_U32(r11.u32 + -23092, ctx.r3.u32);
	// beq cr6,0x823a2d14
	if (cr6.eq) goto loc_823A2D14;
	// lwz r4,17148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 17148);
	// bl 0x826e4bac
	__imp__KeTlsSetValue(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a2d14
	if (cr0.eq) goto loc_823A2D14;
	// bl 0x8239f2d0
	sub_8239F2D0(ctx, base);
	// bl 0x823a4008
	sub_823A4008(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a2d10
	if (cr0.eq) goto loc_823A2D10;
	// lis r11,-32198
	r11.s64 = -2110128128;
	// addi r3,r11,10920
	ctx.r3.s64 = r11.s64 + 10920;
	// lwz r11,17144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 17144);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r30,-32139
	r30.s64 = -2106261504;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r3,-23096(r30)
	PPC_STORE_U32(r30.u32 + -23096, ctx.r3.u32);
	// beq cr6,0x823a2d10
	if (cr6.eq) goto loc_823A2D10;
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823abc70
	sub_823ABC70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x823a2d10
	if (cr0.eq) goto loc_823A2D10;
	// lwz r3,-23096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -23096);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,17152(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17152);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a2d10
	if (cr0.eq) goto loc_823A2D10;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-22240
	r11.s64 = r11.s64 + -22240;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x823b6748
	sub_823B6748(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r11,17132
	ctx.r3.s64 = r11.s64 + 17132;
	// lis r11,-32197
	r11.s64 = -2110062592;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,4248
	r11.s64 = r11.s64 + 4248;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bl 0x823b9b58
	sub_823B9B58(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823a2d18
	goto loc_823A2D18;
loc_823A2D10:
	// bl 0x823a2918
	sub_823A2918(ctx, base);
loc_823A2D14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A2D18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823A2D20"))) PPC_WEAK_FUNC(sub_823A2D20);
PPC_FUNC_IMPL(__imp__sub_823A2D20) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823a2d40
	if (!cr6.eq) goto loc_823A2D40;
	// bl 0x823a3ec0
	sub_823A3EC0(ctx, base);
loc_823A2D40:
	// lwz r31,20(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x823a2d50
	if (!cr0.eq) goto loc_823A2D50;
	// bl 0x823a3ec0
	sub_823A3EC0(ctx, base);
loc_823A2D50:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a2d60
	if (!cr6.eq) goto loc_823A2D60;
	// bl 0x823a3ec0
	sub_823A3EC0(ctx, base);
loc_823A2D60:
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a2d94
	if (cr6.eq) goto loc_823A2D94;
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_823A2D74:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, xer);
	// beq cr6,0x823a2dac
	if (cr6.eq) goto loc_823A2DAC;
	// blt cr6,0x823a2dbc
	if (cr6.lt) goto loc_823A2DBC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// blt cr6,0x823a2d74
	if (cr6.lt) goto loc_823A2D74;
loc_823A2D94:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_823A2DA0:
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -4);
loc_823A2DA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
loc_823A2DAC:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x823a2da4
	goto loc_823A2DA4;
loc_823A2DBC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a2dcc
	if (!cr6.eq) goto loc_823A2DCC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823a2da4
	goto loc_823A2DA4;
loc_823A2DCC:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// b 0x823a2da0
	goto loc_823A2DA0;
}

__attribute__((alias("__imp__sub_823A2DD8"))) PPC_WEAK_FUNC(sub_823A2DD8);
PPC_FUNC_IMPL(__imp__sub_823A2DD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a2e08
	if (cr6.eq) goto loc_823A2E08;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823a2e08
	if (cr0.eq) goto loc_823A2E08;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// beq cr6,0x823a2e08
	if (cr6.eq) goto loc_823A2E08;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
loc_823A2E08:
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x823a2d20
	sub_823A2D20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A2E14"))) PPC_WEAK_FUNC(sub_823A2E14);
PPC_FUNC_IMPL(__imp__sub_823A2E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A2E18"))) PPC_WEAK_FUNC(sub_823A2E18);
PPC_FUNC_IMPL(__imp__sub_823A2E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
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
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A2E38"))) PPC_WEAK_FUNC(sub_823A2E38);
PPC_FUNC_IMPL(__imp__sub_823A2E38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x823a2edc
	if (cr0.eq) goto loc_823A2EDC;
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a2edc
	if (cr6.eq) goto loc_823A2EDC;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x823a2e98
	if (cr6.eq) goto loc_823A2E98;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
loc_823A2E64:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823a2e88
	if (cr0.eq) goto loc_823A2E88;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823a2e64
	if (cr6.eq) goto loc_823A2E64;
loc_823A2E88:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x823a2e98
	if (cr0.eq) goto loc_823A2E98;
loc_823A2E90:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823A2E98:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a2eb0
	if (cr0.eq) goto loc_823A2EB0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a2e90
	if (cr0.eq) goto loc_823A2E90;
loc_823A2EB0:
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a2ec8
	if (cr0.eq) goto loc_823A2EC8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a2e90
	if (cr0.eq) goto loc_823A2E90;
loc_823A2EC8:
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a2edc
	if (cr0.eq) goto loc_823A2EDC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a2e90
	if (cr0.eq) goto loc_823A2E90;
loc_823A2EDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A2EE4"))) PPC_WEAK_FUNC(sub_823A2EE4);
PPC_FUNC_IMPL(__imp__sub_823A2EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A2EE8"))) PPC_WEAK_FUNC(sub_823A2EE8);
PPC_FUNC_IMPL(__imp__sub_823A2EE8) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-8125
	ctx.r10.s64 = -532480000;
	// ori r10,r10,20301
	ctx.r10.u64 = ctx.r10.u64 | 20301;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823a2f2c
	if (cr6.eq) goto loc_823A2F2C;
	// lis r10,-8083
	ctx.r10.s64 = -529727488;
	// ori r10,r10,29539
	ctx.r10.u64 = ctx.r10.u64 | 29539;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823a2f4c
	if (!cr6.eq) goto loc_823A2F4C;
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, r11.u32);
	// bl 0x823a3e60
	sub_823A3E60(ctx, base);
loc_823A2F2C:
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x823a2f4c
	if (!cr6.gt) goto loc_823A2F4C;
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, r11.u32);
loc_823A2F4C:
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

__attribute__((alias("__imp__sub_823A2F60"))) PPC_WEAK_FUNC(sub_823A2F60);
PPC_FUNC_IMPL(__imp__sub_823A2F60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
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
	// lwz r16,-14688(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14688);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r26,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r26.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r25,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r25.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r29,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r29.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r27,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r27.u32);
	// bl 0x823a2dd8
	sub_823A2DD8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x823a2fd8
	if (cr6.eq) goto loc_823A2FD8;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
loc_823A2FB4:
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a2fd8
	if (!cr6.eq) goto loc_823A2FD8;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r27,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r27.u32);
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// bne cr6,0x823a2fb4
	if (!cr6.eq) goto loc_823A2FB4;
loc_823A2FD8:
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// bne cr6,0x823a2fe8
	if (!cr6.eq) goto loc_823A2FE8;
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x823a30d4
	if (cr6.eq) {
		// ERROR 823A30D4
		return;
	}
loc_823A2FE8:
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpw cr6,r28,r27
	cr6.compare<int32_t>(r28.s32, r27.s32, xer);
	// beq cr6,0x823a30a0
	if (cr6.eq) {
		sub_823A30A0(ctx, base);
		return;
	}
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// ble cr6,0x823a3018
	if (!cr6.gt) goto loc_823A3018;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x823a301c
	if (cr6.lt) goto loc_823A301C;
loc_823A3018:
	// bl 0x823a3ec0
	sub_823A3EC0(ctx, base);
loc_823A301C:
	// rlwinm r30,r28,3,0,28
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a3074
	if (cr6.eq) goto loc_823A3074;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823a2e18
	sub_823A2E18(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// li r5,259
	ctx.r5.s64 = 259;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x823b1100
	sub_823B1100(ctx, base);
loc_823A3074:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823a3098
	// ERROR 823A3098
	return;
}

__attribute__((alias("__imp__sub_823A2F68"))) PPC_WEAK_FUNC(sub_823A2F68);
PPC_FUNC_IMPL(__imp__sub_823A2F68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r26,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r26.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r25,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r25.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r29,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r29.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r27,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r27.u32);
	// bl 0x823a2dd8
	sub_823A2DD8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x823a2fd8
	if (cr6.eq) goto loc_823A2FD8;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
loc_823A2FB4:
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823a2fd8
	if (!cr6.eq) goto loc_823A2FD8;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r27,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r27.u32);
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// bne cr6,0x823a2fb4
	if (!cr6.eq) goto loc_823A2FB4;
loc_823A2FD8:
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// bne cr6,0x823a2fe8
	if (!cr6.eq) goto loc_823A2FE8;
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x823a30d4
	if (cr6.eq) goto loc_823A30D4;
loc_823A2FE8:
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, r11.u32);
loc_823A2FF8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpw cr6,r28,r27
	cr6.compare<int32_t>(r28.s32, r27.s32, xer);
	// beq cr6,0x823a30a0
	if (cr6.eq) goto loc_823A30A0;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// ble cr6,0x823a3018
	if (!cr6.gt) goto loc_823A3018;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x823a301c
	if (cr6.lt) goto loc_823A301C;
loc_823A3018:
	// bl 0x823a3ec0
	sub_823A3EC0(ctx, base);
loc_823A301C:
	// rlwinm r30,r28,3,0,28
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a3074
	if (cr6.eq) goto loc_823A3074;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823a2e18
	sub_823A2E18(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// li r5,259
	ctx.r5.s64 = 259;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x823b1100
	sub_823B1100(ctx, base);
loc_823A3074:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823a3098
	goto loc_823A3098;
	// lwz r27,204(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// lwz r29,196(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r25,188(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// lwz r26,180(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lwz r28,84(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_823A3098:
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// b 0x823a2ff8
	goto loc_823A2FF8;
loc_823A30A0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x823a30dc
	sub_823A30DC(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x823a30c0
	if (cr6.eq) goto loc_823A30C0;
	// bl 0x823a3ec0
	sub_823A3EC0(ctx, base);
loc_823A30C0:
	// lwz r6,88(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r5,196(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// bl 0x823a2e18
	sub_823A2E18(ctx, base);
loc_823A30D4:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823A3084"))) PPC_WEAK_FUNC(sub_823A3084);
PPC_FUNC_IMPL(__imp__sub_823A3084) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r31{};
	// lwz r27,204(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// lwz r29,196(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r25,188(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// lwz r26,180(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lwz r28,84(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// b 0x823a2ff8
	// ERROR 823A2FF8
	return;
}

__attribute__((alias("__imp__sub_823A30A0"))) PPC_WEAK_FUNC(sub_823A30A0);
PPC_FUNC_IMPL(__imp__sub_823A30A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x823a30dc
	sub_823A30DC(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x823a30c0
	if (cr6.eq) goto loc_823A30C0;
	// bl 0x823a3ec0
	sub_823A3EC0(ctx, base);
loc_823A30C0:
	// lwz r6,88(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r5,196(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// bl 0x823a2e18
	sub_823A2E18(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823A30DC"))) PPC_WEAK_FUNC(sub_823A30DC);
PPC_FUNC_IMPL(__imp__sub_823A30DC) {
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
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x823a3108
	if (!cr6.gt) goto loc_823A3108;
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, r11.u32);
loc_823A3108:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3118"))) PPC_WEAK_FUNC(sub_823A3118);
PPC_FUNC_IMPL(__imp__sub_823A3118) {
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
	// bl 0x823a2ee8
	sub_823A2EE8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A313C"))) PPC_WEAK_FUNC(sub_823A313C);
PPC_FUNC_IMPL(__imp__sub_823A313C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A3140"))) PPC_WEAK_FUNC(sub_823A3140);
PPC_FUNC_IMPL(__imp__sub_823A3140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// andi. r11,r11,102
	r11.u64 = r11.u64 & 102;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823a3158
	if (!cr0.eq) goto loc_823A3158;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823A3158:
	// stw r5,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r5.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// ld r11,48(r5)
	r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 48);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// ld r11,56(r5)
	r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 56);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// ld r11,64(r5)
	r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 64);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A317C"))) PPC_WEAK_FUNC(sub_823A317C);
PPC_FUNC_IMPL(__imp__sub_823A317C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A3180"))) PPC_WEAK_FUNC(sub_823A3180);
PPC_FUNC_IMPL(__imp__sub_823A3180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r19,19276(r14)
	r19.u64 = PPC_LOAD_U32(r14.u32 + 19276);
	// lwz r16,-14648(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14648);
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
	// stb r4,127(r31)
	PPC_STORE_U8(r31.u32 + 127, ctx.r4.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a31fc
	if (cr6.eq) {
		// ERROR 823A31FC
		return;
	}
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-8083
	ctx.r10.s64 = -529727488;
	// ori r10,r10,29539
	ctx.r10.u64 = ctx.r10.u64 | 29539;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823a31fc
	if (!cr6.eq) {
		// ERROR 823A31FC
		return;
	}
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823a31fc
	if (cr0.eq) {
		// ERROR 823A31FC
		return;
	}
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823a31fc
	if (cr0.eq) {
		// ERROR 823A31FC
		return;
	}
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823a31fc
	// ERROR 823A31FC
	return;
}

__attribute__((alias("__imp__sub_823A3188"))) PPC_WEAK_FUNC(sub_823A3188);
PPC_FUNC_IMPL(__imp__sub_823A3188) {
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
	// addi r31,r1,-96
	r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stb r4,127(r31)
	PPC_STORE_U8(r31.u32 + 127, ctx.r4.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a31fc
	if (cr6.eq) goto loc_823A31FC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-8083
	ctx.r10.s64 = -529727488;
	// ori r10,r10,29539
	ctx.r10.u64 = ctx.r10.u64 | 29539;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823a31fc
	if (!cr6.eq) goto loc_823A31FC;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823a31fc
	if (cr0.eq) goto loc_823A31FC;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823a31fc
	if (cr0.eq) goto loc_823A31FC;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823a31fc
	goto loc_823A31FC;
	// bl 0x823a3e60
	sub_823A3E60(ctx, base);
loc_823A31FC:
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

__attribute__((alias("__imp__sub_823A31F8"))) PPC_WEAK_FUNC(sub_823A31F8);
PPC_FUNC_IMPL(__imp__sub_823A31F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	// bl 0x823a3e60
	sub_823A3E60(ctx, base);
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

__attribute__((alias("__imp__sub_823A3210"))) PPC_WEAK_FUNC(sub_823A3210);
PPC_FUNC_IMPL(__imp__sub_823A3210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-96
	r31.s64 = r12.s64 + -96;
	// lbz r11,127(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 127);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3234"))) PPC_WEAK_FUNC(sub_823A3234);
PPC_FUNC_IMPL(__imp__sub_823A3234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A3238"))) PPC_WEAK_FUNC(sub_823A3238);
PPC_FUNC_IMPL(__imp__sub_823A3238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r25,124(r3)
	r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r24,128(r3)
	r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// stw r29,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, r29.u32);
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,128(r11)
	PPC_STORE_U32(r11.u32 + 128, r28.u32);
	// li r11,-2
	r11.s64 = -2;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x823b1100
	sub_823B1100(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239bc20
	sub_8239BC20(ctx, base);
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// stw r25,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, r25.u32);
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// stw r24,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, r24.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a32f4
	if (cr0.eq) goto loc_823A32F4;
	// bl 0x8239bbc8
	sub_8239BBC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a32f4
	if (cr0.eq) goto loc_823A32F4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823a3188
	sub_823A3188(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_823A32F4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_823A3300"))) PPC_WEAK_FUNC(sub_823A3300);
PPC_FUNC_IMPL(__imp__sub_823A3300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r19,19276(r14)
	r19.u64 = PPC_LOAD_U32(r14.u32 + 19276);
	// lwz r16,-14624(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14624);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823a3578
	if (cr0.eq) {
		sub_823A3578(ctx, base);
		return;
	}
	// lbz r11,8(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a3578
	if (cr6.eq) {
		sub_823A3578(ctx, base);
		return;
	}
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823a3358
	if (!cr0.eq) goto loc_823A3358;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a3578
	if (cr0.eq) {
		sub_823A3578(ctx, base);
		return;
	}
loc_823A3358:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bne 0x823a336c
	if (!cr0.eq) goto loc_823A336C;
	// add r28,r11,r4
	r28.u64 = r11.u64 + ctx.r4.u64;
loc_823A336C:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// rlwinm. r11,r10,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// beq 0x823a33f4
	if (cr0.eq) goto loc_823A33F4;
	// bl 0x823b1220
	sub_823B1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a3558
	if (cr0.eq) goto loc_823A3558;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823b1220
	sub_823B1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a3558
	if (cr0.eq) goto loc_823A3558;
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r9,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r9.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x823a33ec
	if (cr6.lt) goto loc_823A33EC;
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + r11.u64;
	// stw r9,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r9.u32);
loc_823A33EC:
	// stw r9,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// b 0x823a355c
	goto loc_823A355C;
loc_823A33F4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a348c
	if (cr0.eq) goto loc_823A348C;
	// bl 0x823b1220
	sub_823B1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a3558
	if (cr0.eq) goto loc_823A3558;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823b1220
	sub_823B1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a3558
	if (cr0.eq) goto loc_823A3558;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x823a355c
	if (!cr6.eq) goto loc_823A355C;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x823a355c
	if (cr0.eq) goto loc_823A355C;
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x823a3484
	if (cr6.lt) goto loc_823A3484;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r8,r9,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + r11.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
loc_823A3484:
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x823a355c
	goto loc_823A355C;
loc_823A348C:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a3508
	if (!cr6.eq) goto loc_823A3508;
	// bl 0x823b1220
	sub_823B1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a3558
	if (cr0.eq) goto loc_823A3558;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823b1220
	sub_823B1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a3558
	if (cr0.eq) goto loc_823A3558;
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x823a34f8
	if (cr6.lt) goto loc_823A34F8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
loc_823A34F8:
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// b 0x823a355c
	goto loc_823A355C;
loc_823A3508:
	// bl 0x823b1220
	sub_823B1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a3558
	if (cr0.eq) goto loc_823A3558;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823b1220
	sub_823B1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a3558
	if (cr0.eq) goto loc_823A3558;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x823b1220
	sub_823B1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a3558
	if (cr0.eq) goto loc_823A3558;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// b 0x823a355c
	goto loc_823A355C;
loc_823A3558:
	// bl 0x823a3ec0
	sub_823A3EC0(ctx, base);
loc_823A355C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823a3570
	// ERROR 823A3570
	return;
}

__attribute__((alias("__imp__sub_823A3308"))) PPC_WEAK_FUNC(sub_823A3308);
PPC_FUNC_IMPL(__imp__sub_823A3308) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823a3578
	if (cr0.eq) goto loc_823A3578;
	// lbz r11,8(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a3578
	if (cr6.eq) goto loc_823A3578;
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823a3358
	if (!cr0.eq) goto loc_823A3358;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a3578
	if (cr0.eq) goto loc_823A3578;
loc_823A3358:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bne 0x823a336c
	if (!cr0.eq) goto loc_823A336C;
	// add r28,r11,r4
	r28.u64 = r11.u64 + ctx.r4.u64;
loc_823A336C:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// rlwinm. r11,r10,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// beq 0x823a33f4
	if (cr0.eq) goto loc_823A33F4;
	// bl 0x823b1220
	sub_823B1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a3558
	if (cr0.eq) goto loc_823A3558;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823b1220
	sub_823B1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a3558
	if (cr0.eq) goto loc_823A3558;
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r9,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r9.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x823a33ec
	if (cr6.lt) goto loc_823A33EC;
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + r11.u64;
	// stw r9,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r9.u32);
loc_823A33EC:
	// stw r9,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// b 0x823a355c
	goto loc_823A355C;
loc_823A33F4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a348c
	if (cr0.eq) goto loc_823A348C;
	// bl 0x823b1220
	sub_823B1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a3558
	if (cr0.eq) goto loc_823A3558;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823b1220
	sub_823B1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a3558
	if (cr0.eq) goto loc_823A3558;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x823a355c
	if (!cr6.eq) goto loc_823A355C;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x823a355c
	if (cr0.eq) goto loc_823A355C;
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x823a3484
	if (cr6.lt) goto loc_823A3484;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r8,r9,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + r11.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
loc_823A3484:
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x823a355c
	goto loc_823A355C;
loc_823A348C:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a3508
	if (!cr6.eq) goto loc_823A3508;
	// bl 0x823b1220
	sub_823B1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a3558
	if (cr0.eq) goto loc_823A3558;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823b1220
	sub_823B1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a3558
	if (cr0.eq) goto loc_823A3558;
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x823a34f8
	if (cr6.lt) goto loc_823A34F8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
loc_823A34F8:
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// b 0x823a355c
	goto loc_823A355C;
loc_823A3508:
	// bl 0x823b1220
	sub_823B1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a3558
	if (cr0.eq) goto loc_823A3558;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823b1220
	sub_823B1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a3558
	if (cr0.eq) goto loc_823A3558;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x823b1220
	sub_823B1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a3558
	if (cr0.eq) goto loc_823A3558;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// b 0x823a355c
	goto loc_823A355C;
loc_823A3558:
	// bl 0x823a3ec0
	sub_823A3EC0(ctx, base);
loc_823A355C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823a3570
	goto loc_823A3570;
	// bl 0x823a3e60
	sub_823A3E60(ctx, base);
loc_823A3570:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// b 0x823a357c
	goto loc_823A357C;
loc_823A3578:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A357C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823A356C"))) PPC_WEAK_FUNC(sub_823A356C);
PPC_FUNC_IMPL(__imp__sub_823A356C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r31{};
	// bl 0x823a3e60
	sub_823A3E60(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// b 0x823a357c
	// ERROR 823A357C
	return;
}

__attribute__((alias("__imp__sub_823A3578"))) PPC_WEAK_FUNC(sub_823A3578);
PPC_FUNC_IMPL(__imp__sub_823A3578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r31{};
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823A3584"))) PPC_WEAK_FUNC(sub_823A3584);
PPC_FUNC_IMPL(__imp__sub_823A3584) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3590"))) PPC_WEAK_FUNC(sub_823A3590);
PPC_FUNC_IMPL(__imp__sub_823A3590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r19,19276(r14)
	r19.u64 = PPC_LOAD_U32(r14.u32 + 19276);
	// lwz r16,-14600(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14600);
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a35c4
	if (cr0.eq) goto loc_823A35C4;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// b 0x823a35cc
	goto loc_823A35CC;
loc_823A35C4:
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r28,r11,r4
	r28.u64 = r11.u64 + ctx.r4.u64;
loc_823A35CC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a3308
	sub_823A3308(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x823a364c
	if (cr6.eq) goto loc_823A364C;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x823a369c
	if (!cr6.eq) goto loc_823A369C;
	// addi r11,r29,8
	r11.s64 = r29.s64 + 8;
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x823a3634
	if (cr6.lt) goto loc_823A3634;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
loc_823A3634:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823a369c
	goto loc_823A369C;
loc_823A364C:
	// addi r11,r29,8
	r11.s64 = r29.s64 + 8;
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x823a368c
	if (cr6.lt) goto loc_823A368C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
loc_823A368C:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823A369C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823a36b0
	// ERROR 823A36B0
	return;
}

__attribute__((alias("__imp__sub_823A3598"))) PPC_WEAK_FUNC(sub_823A3598);
PPC_FUNC_IMPL(__imp__sub_823A3598) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a35c4
	if (cr0.eq) goto loc_823A35C4;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// b 0x823a35cc
	goto loc_823A35CC;
loc_823A35C4:
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r28,r11,r4
	r28.u64 = r11.u64 + ctx.r4.u64;
loc_823A35CC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a3308
	sub_823A3308(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x823a364c
	if (cr6.eq) goto loc_823A364C;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x823a369c
	if (!cr6.eq) goto loc_823A369C;
	// addi r11,r29,8
	r11.s64 = r29.s64 + 8;
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x823a3634
	if (cr6.lt) goto loc_823A3634;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
loc_823A3634:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823a369c
	goto loc_823A369C;
loc_823A364C:
	// addi r11,r29,8
	r11.s64 = r29.s64 + 8;
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x823a368c
	if (cr6.lt) goto loc_823A368C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
loc_823A368C:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823A369C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823a36b0
	goto loc_823A36B0;
	// bl 0x823a3e60
	sub_823A3E60(ctx, base);
loc_823A36B0:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823A36AC"))) PPC_WEAK_FUNC(sub_823A36AC);
PPC_FUNC_IMPL(__imp__sub_823A36AC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r31{};
	// bl 0x823a3e60
	sub_823A3E60(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823A36B8"))) PPC_WEAK_FUNC(sub_823A36B8);
PPC_FUNC_IMPL(__imp__sub_823A36B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A36C4"))) PPC_WEAK_FUNC(sub_823A36C4);
PPC_FUNC_IMPL(__imp__sub_823A36C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A36C8"))) PPC_WEAK_FUNC(sub_823A36C8);
PPC_FUNC_IMPL(__imp__sub_823A36C8) {
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
	// stwu r1,-2832(r1)
	ea = -2832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// bl 0x8239b6b8
	sub_8239B6B8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239b6e0
	sub_8239B6E0(ctx, base);
	// li r21,0
	r21.s64 = 0;
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// bne 0x823a3738
	if (!cr0.eq) goto loc_823A3738;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r21.u32);
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_823A3738:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a3754
	if (cr6.eq) goto loc_823A3754;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823a3598
	sub_823A3598(ctx, base);
loc_823A3754:
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,140(r11)
	PPC_STORE_U32(r11.u32 + 140, ctx.r10.u32);
	// bl 0x8239bb10
	sub_8239BB10(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r3,2924(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2924);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823a3784
	if (!cr6.eq) goto loc_823A3784;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
loc_823A3784:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823b1240
	sub_823B1240(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823a2f68
	sub_823A2F68(ctx, base);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a2e18
	sub_823A2E18(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// lwz r7,12(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823b12ec
	sub_823B12EC(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a3804
	if (cr0.eq) goto loc_823A3804;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// bne cr6,0x823a37fc
	if (!cr6.eq) goto loc_823A37FC;
	// stw r21,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r21.u32);
loc_823A37FC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x823b115c
	sub_823B115C(ctx, base);
loc_823A3804:
	// addi r1,r1,2832
	ctx.r1.s64 = ctx.r1.s64 + 2832;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_823A380C"))) PPC_WEAK_FUNC(sub_823A380C);
PPC_FUNC_IMPL(__imp__sub_823A380C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A3810"))) PPC_WEAK_FUNC(sub_823A3810);
PPC_FUNC_IMPL(__imp__sub_823A3810) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823a3974
	if (cr6.eq) goto loc_823A3974;
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r11,116(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a38ac
	if (cr6.eq) goto loc_823A38AC;
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r11,116(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a38ac
	if (cr6.eq) goto loc_823A38AC;
	// lis r10,-8125
	ctx.r10.s64 = -532480000;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// ori r10,r10,20301
	ctx.r10.u64 = ctx.r10.u64 | 20301;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823a38ac
	if (cr6.eq) goto loc_823A38AC;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8239b8f8
	sub_8239B8F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823a3974
	if (!cr0.eq) goto loc_823A3974;
loc_823A38AC:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a38bc
	if (!cr6.eq) goto loc_823A38BC;
	// bl 0x823a3ec0
	sub_823A3EC0(ctx, base);
loc_823A38BC:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239b9b8
	sub_8239B9B8(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x823a3968
	goto loc_823A3968;
loc_823A38E4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(r23.s32, r11.s32, xer);
	// blt cr6,0x823a395c
	if (cr6.lt) goto loc_823A395C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(r23.s32, r11.s32, xer);
	// bgt cr6,0x823a395c
	if (cr6.gt) goto loc_823A395C;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -12);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x823a3924
	if (cr0.eq) goto loc_823A3924;
	// lbz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823a395c
	if (!cr6.eq) goto loc_823A395C;
loc_823A3924:
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-16
	ctx.r8.s64 = r11.s64 + -16;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stb r5,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r5.u8);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823a36c8
	sub_823A36C8(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_823A395C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
loc_823A3968:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x823a38e4
	if (cr6.lt) goto loc_823A38E4;
loc_823A3974:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_823A397C"))) PPC_WEAK_FUNC(sub_823A397C);
PPC_FUNC_IMPL(__imp__sub_823A397C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A3980"))) PPC_WEAK_FUNC(sub_823A3980);
PPC_FUNC_IMPL(__imp__sub_823A3980) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// mr r17,r10
	r17.u64 = ctx.r10.u64;
	// li r19,0
	r19.s64 = 0;
	// bl 0x823a2dd8
	sub_823A2DD8(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(r21.s32, -1, xer);
	// blt cr6,0x823a39d8
	if (cr6.lt) goto loc_823A39D8;
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// cmpw cr6,r21,r11
	cr6.compare<int32_t>(r21.s32, r11.s32, xer);
	// blt cr6,0x823a39dc
	if (cr6.lt) goto loc_823A39DC;
loc_823A39D8:
	// bl 0x823a3ec0
	sub_823A3EC0(ctx, base);
loc_823A39DC:
	// lis r10,-8083
	ctx.r10.s64 = -529727488;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// ori r28,r10,29539
	r28.u64 = ctx.r10.u64 | 29539;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x823a3bf4
	if (!cr6.eq) goto loc_823A3BF4;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// ori r30,r10,1312
	r30.u64 = ctx.r10.u64 | 1312;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// ori r29,r10,1313
	r29.u64 = ctx.r10.u64 | 1313;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// ori r27,r10,1314
	r27.u64 = ctx.r10.u64 | 1314;
	// bne cr6,0x823a3ac0
	if (!cr6.eq) goto loc_823A3AC0;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x823a3a30
	if (cr6.eq) goto loc_823A3A30;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x823a3a30
	if (cr6.eq) goto loc_823A3A30;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x823a3ac0
	if (!cr6.eq) goto loc_823A3AC0;
loc_823A3A30:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a3ac0
	if (!cr6.eq) goto loc_823A3AC0;
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r11,124(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a3bec
	if (cr6.eq) goto loc_823A3BEC;
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r31,124(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r19,1
	r19.s64 = 1;
	// lwz r20,128(r11)
	r20.u64 = PPC_LOAD_U32(r11.u32 + 128);
	// bl 0x823b1220
	sub_823B1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823a3a7c
	if (!cr0.eq) goto loc_823A3A7C;
	// bl 0x823a3ec0
	sub_823A3EC0(ctx, base);
loc_823A3A7C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x823a3bf4
	if (!cr6.eq) goto loc_823A3BF4;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x823a3ac0
	if (!cr6.eq) goto loc_823A3AC0;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x823a3ab0
	if (cr6.eq) goto loc_823A3AB0;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x823a3ab0
	if (cr6.eq) goto loc_823A3AB0;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x823a3ac0
	if (!cr6.eq) goto loc_823A3AC0;
loc_823A3AB0:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a3ac0
	if (!cr6.eq) goto loc_823A3AC0;
	// bl 0x823a3ec0
	sub_823A3EC0(ctx, base);
loc_823A3AC0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x823a3bf4
	if (!cr6.eq) goto loc_823A3BF4;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x823a3bf4
	if (!cr6.eq) goto loc_823A3BF4;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x823a3af4
	if (cr6.eq) goto loc_823A3AF4;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x823a3af4
	if (cr6.eq) goto loc_823A3AF4;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x823a3bf4
	if (!cr6.eq) goto loc_823A3BF4;
loc_823A3AF4:
	// lwz r11,12(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x823a3bec
	if (!cr6.gt) goto loc_823A3BEC;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8239b9b8
	sub_8239B9B8(ctx, base);
	// lwz r25,112(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x823a3be0
	goto loc_823A3BE0;
loc_823A3B28:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpw cr6,r11,r21
	cr6.compare<int32_t>(r11.s32, r21.s32, xer);
	// bgt cr6,0x823a3bd4
	if (cr6.gt) goto loc_823A3BD4;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r21,r11
	cr6.compare<int32_t>(r21.s32, r11.s32, xer);
	// bgt cr6,0x823a3bd4
	if (cr6.gt) goto loc_823A3BD4;
	// lwz r26,12(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi r26,0
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// ble 0x823a3bd4
	if (!cr0.gt) goto loc_823A3BD4;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r27,r11,4
	r27.s64 = r11.s64 + 4;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823A3B60:
	// mr. r29,r28
	r29.u64 = r28.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// ble 0x823a3b90
	if (!cr0.gt) goto loc_823A3B90;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 28);
loc_823A3B70:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x823a2e38
	sub_823A2E38(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823a3ba0
	if (!cr0.eq) goto loc_823A3BA0;
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bgt 0x823a3b70
	if (cr0.gt) goto loc_823A3B70;
loc_823A3B90:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// bgt 0x823a3b60
	if (cr0.gt) goto loc_823A3B60;
	// b 0x823a3bd4
	goto loc_823A3BD4;
loc_823A3BA0:
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// stb r19,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, r19.u8);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a36c8
	sub_823A36C8(ctx, base);
	// lwz r25,112(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_823A3BD4:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r25.u32);
loc_823A3BE0:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x823a3b28
	if (cr6.lt) goto loc_823A3B28;
loc_823A3BEC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd1c
	return;
loc_823A3BF4:
	// lwz r11,12(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x823a3bec
	if (!cr6.gt) goto loc_823A3BEC;
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823a3c30
	if (!cr0.eq) goto loc_823A3C30;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a3810
	sub_823A3810(ctx, base);
	// b 0x823a3bec
	goto loc_823A3BEC;
loc_823A3C30:
	// bl 0x823a3e60
	sub_823A3E60(ctx, base);
}

__attribute__((alias("__imp__sub_823A3C34"))) PPC_WEAK_FUNC(sub_823A3C34);
PPC_FUNC_IMPL(__imp__sub_823A3C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A3C38"))) PPC_WEAK_FUNC(sub_823A3C38);
PPC_FUNC_IMPL(__imp__sub_823A3C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// lwz r16,-14576(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14576);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// andi. r7,r10,102
	ctx.r7.u64 = ctx.r10.u64 & 102;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq 0x823a3dac
	if (cr0.eq) {
		sub_823A3DAC(ctx, base);
		return;
	}
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a3e3c
	if (cr6.eq) {
		// ERROR 823A3E3C
		return;
	}
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x823a3e3c
	if (!cr6.eq) {
		// ERROR 823A3E3C
		return;
	}
	// rlwinm. r11,r10,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a3d04
	if (cr0.eq) goto loc_823A3D04;
	// bl 0x8239b690
	sub_8239B690(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a3d04
	if (cr0.eq) goto loc_823A3D04;
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a3cb0
	if (!cr6.eq) goto loc_823A3CB0;
	// bl 0x823a3ec0
	sub_823A3EC0(ctx, base);
loc_823A3CB0:
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// bl 0x8239b6d8
	sub_8239B6D8(ctx, base);
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// std r28,48(r11)
	PPC_STORE_U64(r11.u32 + 48, r28.u64);
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// std r28,56(r11)
	PPC_STORE_U64(r11.u32 + 56, r28.u64);
	// lwz r30,8(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// std r30,64(r11)
	PPC_STORE_U64(r11.u32 + 64, r30.u64);
	// bl 0x8239b690
	sub_8239B690(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239b6d8
	sub_8239B6D8(ctx, base);
	// b 0x823a3e3c
	// ERROR 823A3E3C
	return;
loc_823A3D04:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8239b778
	sub_8239B778(ctx, base);
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a3e3c
	if (cr6.eq) {
		// ERROR 823A3E3C
		return;
	}
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x823a3e3c
	if (cr0.eq) {
		// ERROR 823A3E3C
		return;
	}
	// lwz r30,8(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x823a3e3c
	if (cr0.eq) {
		// ERROR 823A3E3C
		return;
	}
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239bc20
	sub_8239BC20(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8239bbc8
	sub_8239BBC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a3da0
	if (cr0.eq) {
		// ERROR 823A3DA0
		return;
	}
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823a3da0
	if (cr0.eq) {
		// ERROR 823A3DA0
		return;
	}
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823a3d98
	// ERROR 823A3D98
	return;
}

__attribute__((alias("__imp__sub_823A3C40"))) PPC_WEAK_FUNC(sub_823A3C40);
PPC_FUNC_IMPL(__imp__sub_823A3C40) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// andi. r7,r10,102
	ctx.r7.u64 = ctx.r10.u64 & 102;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq 0x823a3dac
	if (cr0.eq) goto loc_823A3DAC;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a3e3c
	if (cr6.eq) goto loc_823A3E3C;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x823a3e3c
	if (!cr6.eq) goto loc_823A3E3C;
	// rlwinm. r11,r10,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a3d04
	if (cr0.eq) goto loc_823A3D04;
	// bl 0x8239b690
	sub_8239B690(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a3d04
	if (cr0.eq) goto loc_823A3D04;
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a3cb0
	if (!cr6.eq) goto loc_823A3CB0;
	// bl 0x823a3ec0
	sub_823A3EC0(ctx, base);
loc_823A3CB0:
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// bl 0x8239b6d8
	sub_8239B6D8(ctx, base);
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// std r28,48(r11)
	PPC_STORE_U64(r11.u32 + 48, r28.u64);
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// std r28,56(r11)
	PPC_STORE_U64(r11.u32 + 56, r28.u64);
	// lwz r30,8(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// std r30,64(r11)
	PPC_STORE_U64(r11.u32 + 64, r30.u64);
	// bl 0x8239b690
	sub_8239B690(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239b6d8
	sub_8239B6D8(ctx, base);
	// b 0x823a3e3c
	goto loc_823A3E3C;
loc_823A3D04:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8239b778
	sub_8239B778(ctx, base);
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a3e3c
	if (cr6.eq) goto loc_823A3E3C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x823a3e3c
	if (cr0.eq) goto loc_823A3E3C;
	// lwz r30,8(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x823a3e3c
	if (cr0.eq) goto loc_823A3E3C;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239bc20
	sub_8239BC20(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8239bbc8
	sub_8239BBC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a3da0
	if (cr0.eq) goto loc_823A3DA0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823a3da0
	if (cr0.eq) goto loc_823A3DA0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823a3d98
	goto loc_823A3D98;
	// bl 0x823a3e60
	sub_823A3E60(ctx, base);
	// lwz r29,80(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r30,84(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_823A3D98:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_823A3DA0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// b 0x823a3e3c
	goto loc_823A3E3C;
loc_823A3DAC:
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a3e3c
	if (cr6.eq) goto loc_823A3E3C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r7,-8083
	ctx.r7.s64 = -529727488;
	// ori r7,r7,29539
	ctx.r7.u64 = ctx.r7.u64 | 29539;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bne cr6,0x823a3e1c
	if (!cr6.eq) goto loc_823A3E1C;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x823a3e1c
	if (cr6.lt) goto loc_823A3E1C;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r7,6547
	ctx.r7.s64 = 429064192;
	// ori r7,r7,1314
	ctx.r7.u64 = ctx.r7.u64 | 1314;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// ble cr6,0x823a3e1c
	if (!cr6.gt) goto loc_823A3E1C;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r26,8(r10)
	r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// beq 0x823a3e1c
	if (cr0.eq) goto loc_823A3E1C;
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823a3e40
	goto loc_823A3E40;
loc_823A3E1C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823a3980
	sub_823A3980(ctx, base);
loc_823A3E3C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823A3E40:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823A3D8C"))) PPC_WEAK_FUNC(sub_823A3D8C);
PPC_FUNC_IMPL(__imp__sub_823A3D8C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// bl 0x823a3e60
	sub_823A3E60(ctx, base);
	// lwz r29,80(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r30,84(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// b 0x823a3e3c
	// ERROR 823A3E3C
	return;
}

__attribute__((alias("__imp__sub_823A3DAC"))) PPC_WEAK_FUNC(sub_823A3DAC);
PPC_FUNC_IMPL(__imp__sub_823A3DAC) {
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
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a3e3c
	if (cr6.eq) goto loc_823A3E3C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r7,-8083
	ctx.r7.s64 = -529727488;
	// ori r7,r7,29539
	ctx.r7.u64 = ctx.r7.u64 | 29539;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bne cr6,0x823a3e1c
	if (!cr6.eq) goto loc_823A3E1C;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x823a3e1c
	if (cr6.lt) goto loc_823A3E1C;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r7,6547
	ctx.r7.s64 = 429064192;
	// ori r7,r7,1314
	ctx.r7.u64 = ctx.r7.u64 | 1314;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// ble cr6,0x823a3e1c
	if (!cr6.gt) goto loc_823A3E1C;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r26,8(r10)
	r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// beq 0x823a3e1c
	if (cr0.eq) goto loc_823A3E1C;
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823a3e40
	goto loc_823A3E40;
loc_823A3E1C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823a3980
	sub_823A3980(ctx, base);
loc_823A3E3C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823A3E40:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823A3E48"))) PPC_WEAK_FUNC(sub_823A3E48);
PPC_FUNC_IMPL(__imp__sub_823A3E48) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3E54"))) PPC_WEAK_FUNC(sub_823A3E54);
PPC_FUNC_IMPL(__imp__sub_823A3E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A3E58"))) PPC_WEAK_FUNC(sub_823A3E58);
PPC_FUNC_IMPL(__imp__sub_823A3E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r19,19276(r14)
	r19.u64 = PPC_LOAD_U32(r14.u32 + 19276);
	// lwz r16,-14552(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14552);
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
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r11,108(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823a3ea0
	if (cr0.eq) goto loc_823A3EA0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_823A3EA0:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,324
	ctx.r3.u64 = ctx.r3.u64 | 324;
	// bl 0x826e4b5c
	__imp__KeBugCheck(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3E60"))) PPC_WEAK_FUNC(sub_823A3E60);
PPC_FUNC_IMPL(__imp__sub_823A3E60) {
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
	// addi r31,r1,-96
	r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x823a2a68
	sub_823A2A68(ctx, base);
	// lwz r11,108(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823a3ea0
	if (cr0.eq) goto loc_823A3EA0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_823A3EA0:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,324
	ctx.r3.u64 = ctx.r3.u64 | 324;
	// bl 0x826e4b5c
	__imp__KeBugCheck(ctx, base);
}

__attribute__((alias("__imp__sub_823A3EAC"))) PPC_WEAK_FUNC(sub_823A3EAC);
PPC_FUNC_IMPL(__imp__sub_823A3EAC) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3EB8"))) PPC_WEAK_FUNC(sub_823A3EB8);
PPC_FUNC_IMPL(__imp__sub_823A3EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r19,19276(r14)
	r19.u64 = PPC_LOAD_U32(r14.u32 + 19276);
	// lwz r16,-14528(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14528);
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,17160(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17160);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823a3f00
	if (cr0.eq) goto loc_823A3F00;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_823A3F00:
	// bl 0x823a3e60
	sub_823A3E60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3EC0"))) PPC_WEAK_FUNC(sub_823A3EC0);
PPC_FUNC_IMPL(__imp__sub_823A3EC0) {
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
	// addi r31,r1,-96
	r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,17160(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17160);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823a3f00
	if (cr0.eq) goto loc_823A3F00;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_823A3F00:
	// bl 0x823a3e60
	sub_823A3E60(ctx, base);
}

__attribute__((alias("__imp__sub_823A3F04"))) PPC_WEAK_FUNC(sub_823A3F04);
PPC_FUNC_IMPL(__imp__sub_823A3F04) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3F10"))) PPC_WEAK_FUNC(sub_823A3F10);
PPC_FUNC_IMPL(__imp__sub_823A3F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32198
	r11.s64 = -2110128128;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r11,r11,15968
	r11.s64 = r11.s64 + 15968;
	// stw r11,17160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17160, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3F24"))) PPC_WEAK_FUNC(sub_823A3F24);
PPC_FUNC_IMPL(__imp__sub_823A3F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A3F28"))) PPC_WEAK_FUNC(sub_823A3F28);
PPC_FUNC_IMPL(__imp__sub_823A3F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32126
	r11.s64 = -2105409536;
	// stw r3,15136(r11)
	PPC_STORE_U32(r11.u32 + 15136, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3F34"))) PPC_WEAK_FUNC(sub_823A3F34);
PPC_FUNC_IMPL(__imp__sub_823A3F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A3F38"))) PPC_WEAK_FUNC(sub_823A3F38);
PPC_FUNC_IMPL(__imp__sub_823A3F38) {
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
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,15136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 15136);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823a3f60
	if (cr0.eq) goto loc_823A3F60;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823a3f6c
	goto loc_823A3F6C;
loc_823A3F60:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823b1338
	sub_823B1338(ctx, base);
	// twi 31,r0,22
loc_823A3F6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3F7C"))) PPC_WEAK_FUNC(sub_823A3F7C);
PPC_FUNC_IMPL(__imp__sub_823A3F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A3F80"))) PPC_WEAK_FUNC(sub_823A3F80);
PPC_FUNC_IMPL(__imp__sub_823A3F80) {
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
	// stwu r1,-2816(r1)
	ea = -2816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,2624
	ctx.r5.s64 = 2624;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,10
	ctx.r10.s64 = 10;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_823A3FAC:
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x823a3fac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A3FAC;
	// lis r11,-16384
	r11.s64 = -1073741824;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,13
	r11.u64 = r11.u64 | 13;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lwz r11,2808(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2808);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x823b9c08
	sub_823B9C08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b9cd8
	sub_823B9CD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x823a3ffc
	if (!cr0.eq) goto loc_823A3FFC;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823b1338
	sub_823B1338(ctx, base);
loc_823A3FFC:
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x826e4b5c
	__imp__KeBugCheck(ctx, base);
}

__attribute__((alias("__imp__sub_823A4004"))) PPC_WEAK_FUNC(sub_823A4004);
PPC_FUNC_IMPL(__imp__sub_823A4004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4008"))) PPC_WEAK_FUNC(sub_823A4008);
PPC_FUNC_IMPL(__imp__sub_823A4008) {
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
	// lis r11,-32139
	r11.s64 = -2106261504;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r11,-23072
	r30.s64 = r11.s64 + -23072;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r31,r30
	r31.u64 = r30.u64;
	// addi r28,r11,17168
	r28.s64 = r11.s64 + 17168;
loc_823A402C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x823a4058
	if (!cr6.eq) goto loc_823A4058;
	// mr r11,r28
	r11.u64 = r28.u64;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r28,r28,28
	r28.s64 = r28.s64 + 28;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x823af260
	sub_823AF260(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a4078
	if (cr0.eq) goto loc_823A4078;
loc_823A4058:
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// addi r11,r30,288
	r11.s64 = r30.s64 + 288;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x823a402c
	if (cr6.lt) goto loc_823A402C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_823A4070:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
loc_823A4078:
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// b 0x823a4070
	goto loc_823A4070;
}

__attribute__((alias("__imp__sub_823A408C"))) PPC_WEAK_FUNC(sub_823A408C);
PPC_FUNC_IMPL(__imp__sub_823A408C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4090"))) PPC_WEAK_FUNC(sub_823A4090);
PPC_FUNC_IMPL(__imp__sub_823A4090) {
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
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r30,r11,-23072
	r30.s64 = r11.s64 + -23072;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_823A40B0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a40d4
	if (cr0.eq) goto loc_823A40D4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x823a40d4
	if (cr6.eq) goto loc_823A40D4;
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_823A40D4:
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// addi r11,r30,288
	r11.s64 = r30.s64 + 288;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x823a40b0
	if (cr6.lt) goto loc_823A40B0;
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

__attribute__((alias("__imp__sub_823A40FC"))) PPC_WEAK_FUNC(sub_823A40FC);
PPC_FUNC_IMPL(__imp__sub_823A40FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4100"))) PPC_WEAK_FUNC(sub_823A4100);
PPC_FUNC_IMPL(__imp__sub_823A4100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32139
	r11.s64 = -2106261504;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-23072
	r11.s64 = r11.s64 + -23072;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A4114"))) PPC_WEAK_FUNC(sub_823A4114);
PPC_FUNC_IMPL(__imp__sub_823A4114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4118"))) PPC_WEAK_FUNC(sub_823A4118);
PPC_FUNC_IMPL(__imp__sub_823A4118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r19{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r19,19276(r14)
	r19.u64 = PPC_LOAD_U32(r14.u32 + 19276);
	// lwz r16,-14504(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14504);
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
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x823b99e8
	sub_823B99E8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x823a415c
	if (!cr0.eq) goto loc_823A415C;
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
loc_823A415C:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r30,r11,-23072
	r30.s64 = r11.s64 + -23072;
	// rlwinm r29,r29,3,0,28
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r29,r30
	r11.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a417c
	if (cr6.eq) goto loc_823A417C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823a420c
	goto loc_823A420C;
loc_823A417C:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8239d488
	sub_8239D488(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x823a41a4
	if (!cr0.eq) goto loc_823A41A4;
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
	// b 0x823a420c
	goto loc_823A420C;
loc_823A41A4:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x823a4260
	sub_823A4260(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r29,r30
	r11.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bne cr6,0x823a41f8
	if (!cr6.eq) goto loc_823A41F8;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// bl 0x823af260
	sub_823AF260(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823a41f0
	if (!cr0.eq) goto loc_823A41F0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,12
	r11.s64 = 12;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x823a41fc
	goto loc_823A41FC;
loc_823A41F0:
	// stwx r28,r29,r30
	PPC_STORE_U32(r29.u32 + r30.u32, r28.u32);
	// b 0x823a41fc
	goto loc_823A41FC;
loc_823A41F8:
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
loc_823A41FC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	r12.s64 = r31.s64 + 128;
	// bl 0x823a4230
	sub_823A4230(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_823A420C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823A4120"))) PPC_WEAK_FUNC(sub_823A4120);
PPC_FUNC_IMPL(__imp__sub_823A4120) {
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
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x823b99e8
	sub_823B99E8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x823a415c
	if (!cr0.eq) goto loc_823A415C;
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
loc_823A415C:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r30,r11,-23072
	r30.s64 = r11.s64 + -23072;
	// rlwinm r29,r29,3,0,28
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r29,r30
	r11.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a417c
	if (cr6.eq) goto loc_823A417C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823a420c
	goto loc_823A420C;
loc_823A417C:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8239d488
	sub_8239D488(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x823a41a4
	if (!cr0.eq) goto loc_823A41A4;
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
	// b 0x823a420c
	goto loc_823A420C;
loc_823A41A4:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x823a4260
	sub_823A4260(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r29,r30
	r11.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bne cr6,0x823a41f8
	if (!cr6.eq) goto loc_823A41F8;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// bl 0x823af260
	sub_823AF260(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823a41f0
	if (!cr0.eq) goto loc_823A41F0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,12
	r11.s64 = 12;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x823a41fc
	goto loc_823A41FC;
loc_823A41F0:
	// stwx r28,r29,r30
	PPC_STORE_U32(r29.u32 + r30.u32, r28.u32);
	// b 0x823a41fc
	goto loc_823A41FC;
loc_823A41F8:
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
loc_823A41FC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	r12.s64 = r31.s64 + 128;
	// bl 0x823a4230
	sub_823A4230(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_823A420C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823A4214"))) PPC_WEAK_FUNC(sub_823A4214);
PPC_FUNC_IMPL(__imp__sub_823A4214) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	uint32_t ea{};
	// std r30,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r30.u64);
	// mflr r12
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r30,r11,-23072
	r30.s64 = r11.s64 + -23072;
	// b 0x823a4240
	goto loc_823A4240;
	// std r30,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r30.u64);
	// mflr r12
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_823A4240:
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r30,-8(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// mtlr r12
	// blr 
	return;
}

